//////////////////////////////////////////////////////////////////////////
//                                                                      //
// RhoSimplePionSelector                                                //
//                                                                      //
// Selector classes for particle selection                              //
//                                                                      //
// Author List:                                                         //
// Marcel Kunze,  RUB, Feb. 99                                          //
// Copyright (C) 1999-2001, Ruhr-University Bochum.                     //
// Ralf Kliemt, HIM/GSI Feb.2013 (Cleanup & Restructuring)              //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include <math.h>
#include "TDatabasePDG.h"

#include "RhoSelector/RhoSimplePionSelector.h"
#include "RhoBase/RhoCandidate.h"
#include "FairRecoCandidate.h"





ClassImp ( RhoSimplePionSelector )

TBuffer& operator>> ( TBuffer& buf, RhoSimplePionSelector *&obj )
{
  obj = ( RhoSimplePionSelector* ) buf.ReadObject ( RhoSimplePionSelector::Class() );
  return buf;
}

RhoSimplePionSelector::RhoSimplePionSelector ( const char* name, const char* type ) :
  RhoParticleSelectorBase ( name,type )
{}

Bool_t RhoSimplePionSelector::Accept ( RhoCandidate* b )
{
  if ( b == 0 ) { return kFALSE; }

  SetTypeAndMass ( b );

  double Le  = b->GetPidInfo ( 0 );
  double Lmu = b->GetPidInfo ( 1 );
  double Lpi = b->GetPidInfo ( 2 );
  double Lk  = b->GetPidInfo ( 3 );
  double Lp  = b->GetPidInfo ( 4 );

  if ( fCriterion == loose ) {
    if ( Lpi<0.2 ) { return kFALSE; }
  } else if ( fCriterion == veryLoose || fCriterion == variable  || fCriterion == all ) {
    return kTRUE;
  } else if ( fCriterion == best ) {
    if ( Lpi<Le || Lpi<Lmu || Lpi<Lk || Lpi<Lp ) { return kFALSE; }
  } else if ( fCriterion == tight ) {
    if ( Lpi<0.5 ) { return kFALSE; }
  } else {
    if ( Lpi<0.9 ) { return kFALSE; }
  }

  return kTRUE;
}

Bool_t RhoSimplePionSelector::Accept ( FairRecoCandidate*  )
{
  return kFALSE;
}