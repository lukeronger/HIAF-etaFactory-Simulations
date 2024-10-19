//////////////////////////////////////////////////////////////////////////
//                                                                      //
// RhoError                                                             //
//                                                                      //
// Error matrix class                                                   //
//                                                                      //
// Author: Marcel Kunze, RUB, Nov. 99                                   //
// Copyright (C) 1999-2001, Ruhr-University Bochum.                     //
// Ralf Kliemt, HIM/GSI Feb.2013 (Cleanup & Restructuring)              //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <assert.h>

#include "RhoError.h"

ClassImp ( RhoError )

#include <iostream>
using namespace std;

const Double_t RhoError::chisqUndef = -1.;

RhoError::RhoError ( Int_t n, Double_t init )
{
  TMatrixD::Allocate ( n,n );
  for ( int i1=0; i1<n; i1++ )
    for ( int i2=0; i2<n; i2++ ) {
      TMatrixD::operator() ( i1,i2 ) = init;
    }
}

RhoError::RhoError ( const RhoError& v ) :
TMatrixD(v)
{
  TMatrixD::Allocate ( v.GetNrows(),v.GetNcols() );
  TMatrixD::operator= ( v );
}

RhoError::RhoError ( const TMatrixD& p )
{
  TMatrixD::Allocate ( p.GetNrows(),p.GetNcols() );
  TMatrixD::operator= ( p );
}

RhoError& RhoError::operator= ( const RhoError& v )
{
  TMatrixD::ResizeTo ( v );
  TMatrixD::operator= ( v );
  return *this;
}

RhoError& RhoError::operator= ( const TMatrixD& v )
{
  TMatrixD::ResizeTo ( v );
  TMatrixD::operator= ( v );
  return *this;
}

RhoError& RhoError::operator *= ( Double_t t )
{
  return ( RhoError& ) TMatrixD::operator*= ( t );
}
/*
TError& TError::operator /= (Double_t t)
{return (TError&) TMatrixD::operator/=(t); }

TError& TError::operator += (const TError& m2)
{
TMatrixD::operator+=(m2);
return *this;
}

TError& TError::operator -= (const TError& m2)
{
TMatrixD::operator-=(m2);
return *this;
}
*/
RhoError& RhoError::operator - ()
{
  return *this;
}
// does nothing -- covariance Matrices have never negative entries on the
// main diagonal

RhoError RhoError::Similarity ( const TRotation& rot ) const
{
  TMatrixD mat ( 3,3 );
  mat ( 0,0 ) =rot.XX();
  mat ( 0,1 ) =rot.XY();
  mat ( 0,2 ) =rot.XZ();
  mat ( 1,0 ) =rot.YX();
  mat ( 1,1 ) =rot.YY();
  mat ( 1,2 ) =rot.YZ();
  mat ( 2,0 ) =rot.ZX();
  mat ( 2,1 ) =rot.ZY();
  mat ( 2,2 ) =rot.ZZ();

  return Similarity ( mat );
}

RhoError RhoError::Similarity ( const TMatrixD& m1 ) const
{
  RhoError mret ( m1.GetNrows() );
  mret.ResizeTo ( m1.GetNrows(),m1.GetNrows() );
  mret.SimilarityWith ( *this, m1 );
  return mret;
}

RhoError RhoError::Similarity ( const TLorentzRotation& rot ) const
{
  TMatrixD mat ( 4,4 );
  mat ( 0,0 ) =rot.XX();
  mat ( 0,1 ) =rot.XY();
  mat ( 0,2 ) =rot.XZ();
  mat ( 0,3 ) =rot.XT();
  mat ( 1,0 ) =rot.YX();
  mat ( 1,1 ) =rot.YY();
  mat ( 1,2 ) =rot.YZ();
  mat ( 1,3 ) =rot.YT();
  mat ( 2,0 ) =rot.ZX();
  mat ( 2,1 ) =rot.ZY();
  mat ( 2,2 ) =rot.ZZ();
  mat ( 2,3 ) =rot.ZT();
  mat ( 3,0 ) =rot.TX();
  mat ( 3,1 ) =rot.TY();
  mat ( 3,2 ) =rot.TZ();
  mat ( 3,3 ) =rot.TT();

  return Similarity ( mat );
}
/*
TError& TError::Similarity(const TError& E)
{
    return Similarity(E);
}
*/
RhoError& RhoError::SimilarityWith ( const RhoError& mat,const TMatrixD& m1 )
{
  assert ( GetNrows() == m1.GetNrows() );
  TMatrixD temp;
  temp.ResizeTo ( m1.GetNrows(),m1.GetNrows() );
  temp.Mult ( m1,mat );
  Double_t tmp;

  for ( int r = 0; r < GetNrows(); r++ ) {
    for ( int c = 0; c <= r; c++ ) {
      tmp = 0.;
      for ( int k = 0; k < m1.GetNcols(); k++ ) {
        tmp += temp ( r,k ) *m1 ( c,k );
      }
      ( *this ) ( r,c ) = tmp;
    }
  }
  return *this;
}

//----------------------------------------------------------------------
// determineChisq
//  Compute v^T * V^(-1)*v - ie the chisq for this covariance
//  matrix and the difference vector v.
//----------------------------------------------------------------------

Double_t RhoError::DetermineChisq ( TVectorD& diff )
{
  TMatrixD dMat ( diff.GetNrows(),diff.GetNrows() );
  dMat.UnitMatrix();

  for ( int i = 0; i < diff.GetNrows(); i++ ) { dMat ( i,0 ) = diff ( i ); }

  Invert();
  Double_t chisq = SimilarityT ( dMat ) ( 0,0 );

  return chisq;
}

std::ostream& operator<< ( std::ostream& out, const RhoError& mat )
{
  out << "Bbr Covariance Matrix:";
  out << ( TMatrixD& ) mat;
  return out;
}

std::istream& operator>> ( std::istream& in, RhoError& mat )
{
  // Peek at the next non-space character:
  char nextChar = ' ';
  while ( isspace ( nextChar ) ) {
    nextChar = in.get();
  }
  in.putback ( nextChar );

  if ( EOF != nextChar ) {
    if ( !isdigit ( nextChar ) ) {
      // Remove the "Bbr Covariance Matrix:" line:
      const int DUMMY_SIZE = 1000;
      char dummy[DUMMY_SIZE];
      in.getline ( dummy, DUMMY_SIZE );
    }
    // Read in the matrix:
    for ( int row = 1; row <= mat.GetNrows(); ++row ) {
      for ( int col = 1; col <= mat.GetNcols(); ++col ) {
        in >> mat ( row, col );
      }
    }
  }
  return in;
}


RhoError operator* ( Double_t t, const RhoError& m1 )
{
  RhoError mret ( m1 );
  //mret.ResizeTo ( m1 );
  //mret = m1;
  mret *= t;
  return mret;
}

RhoError operator* ( const RhoError& m1, Double_t t )
{
  RhoError mret ( m1 );
  //mret.ResizeTo ( m1 );
  //mret = m1;
  mret *= t;
  return mret;
}
/*
TError operator/(Double_t t, const TError& m1)
{
TError mret = m1;
mret /= t;
return mret;
}

TError operator/(const TError& m1, Double_t t)
{
TError mret = m1;
mret /= t;
return mret;
}
*/
RhoError operator+ ( const RhoError& m1, const RhoError& m2 )
{
  RhoError mret ( m1 );
  //mret.ResizeTo ( m1 );
  //mret = m1;
  mret += m2;
  //std::cout<<" -- Adding two matrices: -- m1:"<<&m1<<"  m2:"<<&m2<<std::endl;
  return mret;
}

RhoError operator- ( const RhoError& m1, const RhoError& m2 )
{
  RhoError mret ( m1 );
  //mret.ResizeTo ( m1 );
  mret -= m2;
  return mret;
}


Double_t RhoError::Similarity ( TVectorD& m1 )
{
  Double_t mret = 0.0;
  TVectorD temp ( m1 );
  temp*= ( *this );
  // If m1*(*this) has correct dimensions, then so will the m1.T multiplication.
  // So there is no need to check dimensions again.
  Double_t* a=&temp ( 0 );
  Double_t* b=&m1 ( 0 );
  Double_t* e=a+m1.GetNrows();
  for ( ; a<e; ) { mret += ( * ( a++ ) ) * ( * ( b++ ) ); }
  return mret;
}

TMatrixD RhoError::SimilarityT ( TMatrixD& m1 )
{
  TMatrixD mret;
  mret.ResizeTo ( m1 );
  TMatrixD::Mult ( *this,m1 );
  int n = m1.GetNcols();
  Double_t* mrc = &mret ( 0,0 );
  Double_t* temp1r = &TMatrixD::operator() ( 0,0 );
  for ( int r=1; r<=mret.GetNrows(); r++ ) {
    Double_t* m11c = &m1 ( 0,0 );
    for ( int c=1; c<=r; c++ ) {
      Double_t tmp = 0.0;
      Double_t* tempir = temp1r;
      Double_t* m1ic = m11c;
      for ( int i=1; i<=m1.GetNrows(); i++ ) {
        tmp+= ( * ( tempir ) ) * ( * ( m1ic ) );
        tempir += n;
        m1ic += n;
      }
      * ( mrc++ ) = tmp;
      m11c++;
    }
    temp1r++;
  }
  return mret;
}







