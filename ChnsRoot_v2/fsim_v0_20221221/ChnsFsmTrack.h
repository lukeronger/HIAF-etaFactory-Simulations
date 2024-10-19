//--------------------------------------------------------------------------
// File and Version Information:
//      $Id: ChnsFsmTrack.hh,v 1.13 2006/10/06 15:19:11 aida Exp $
//
// Description:
//      Class ChnsFsmTrack
//
//  Candidate "Tracks" or "Particles" for the Fast Simulation
//
//  This software was developed for the PANDA collaboration.  If you
//  use all or part of it, please give an appropriate acknowledgement.
//
// Author List:
//      Klaus Goetzen                    Original Author
//
// Copyright Information:
//      Copyright (C) 2006              GSI
//
//------------------------------------------------------------------------

#ifndef CHNSFSMTRACK_H
#define CHNSFSMTRACK_H

//----------------------
// Base Class Headers --
//----------------------

//-------------------------------
// Collaborating class Headers --
//-------------------------------
#include "TLorentzVector.h"
#include "TVector3.h"
#include "TMatrixD.h"

//#include "CLHEP/Vector/LorentzVector.h"
//#include "CLHEP/Geometry/HepPoint.h"
//#include "PDT/PdtEntry.hh"
//#include "G4Data/GVertex.hh"

//--------------------------------------------
// Collaborating class forward declarations --
// -------------------------------------------
#include <iosfwd>
#include <vector>

class ChnsFsmResponse;
//class FsmHitMap;

class ChnsFsmTrack
{
public:

  //--------------------
  // Public interface --
  //--------------------

  //
  // Constructors
  //

  ChnsFsmTrack();
  ChnsFsmTrack(TLorentzVector p4, TVector3 start, TVector3 stop, double charge, int pdt, signed long trackId);

  //
  // Destructor
  //
  virtual ~ChnsFsmTrack();

  //
  //    Accessors to contained information
  //
  TLorentzVector   p4() {return _p4;}   // 4-momentum
  TVector3         startVtx() {return _startVtx;}
  TVector3         stopVtx() {return _stopVtx;}
  double	   charge() {return _charge;}
  int              pdt() {return _pdt;}
  signed long	   gTrackId() {return _gTrackId;}
  ChnsFsmResponse*     detResponse() {return _detResponse;}
  double  Mass2()    {return _Mass2;}
  double  MvddEdX() {return _MvddEdX;}
  double  TpcdEdX() {return _TpcdEdX;}
  double  SttdEdX() {return _SttdEdX;}
  double  GemdEdX() {return _GemdEdX;}

  // for the time being partial interface conservation for migration purpose
  bool hitMapValid() {return false;}
  bool hitMapResponse(unsigned int ) {return false;} // index //[R.K.03/2017] unused variable(s)



  //
  //  Modifiers
  //
  void setP4(TLorentzVector l);
  void setStartVtx(TVector3 v);
  void setStopVtx(TVector3 v);
  void setCharge(double c);
  void setGTrackId(signed long id);
  void setPdt(int pdt);
  void setDetResponse(ChnsFsmResponse* resp);

  void setMass2(double c);
  void setMvddEdX(double c);
  void setTpcdEdX(double c);
  void setSttdEdX(double c);
  void setGemdEdX(double c);

  // Operations

  void print(std::ostream &o);

private:
  TLorentzVector   _p4;
  TVector3         _startVtx;
  TVector3         _stopVtx;
  double	   _charge;
  int              _pdt;
  signed long	   _gTrackId;
  double           _Mass2;
  double           _MvddEdX;
  double           _TpcdEdX;
  double           _SttdEdX;
  double           _GemdEdX;
  ChnsFsmResponse*     _detResponse;
  // adding helix representation for some realism
  double fPar5[5]; // helix fit parameters: d0, phi0, omega, z0, tandip
  TVector3 fReference; // reference point to helix rep
  TMatrixD fCov5;
  TMatrixD fCov7;

public:
  double *GetHelixParams() { return fPar5; }
  TMatrixD& GetHelixCov() {return fCov5; }
  TMatrixD& Cov7() {return fCov7;}
  void SetP7Cov(TMatrixD &p7cov);
  void SetP4Cov(TMatrixD &p4cov);
  void SetVCov(TMatrixD &vcov);

  Double_t GetHelixD0()     const {return fPar5[0];}
  Double_t GetHelixPhi0()   const {return fPar5[1];}
  Double_t GetHelixOmega()  const {return fPar5[2];}
  Double_t GetHelixZ0()     const {return fPar5[3];}
  Double_t GetHelixTanDip() const {return fPar5[4];}

  void HelixRep(TVector3 reference);
  void Propagate(TVector3 origin, double deltaError=2.5);

};

#endif
