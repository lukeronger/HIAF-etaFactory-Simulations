//--------------------------------------------------------------------------
// File and Version Information:
//      $Id: ChnsFsmResponse.cc,v 1.8 2007/05/24 08:07:40 klausg Exp $
//
// Description:
//      Class ChnsFsmResponse
//      
//  Response of FsmDet for a FsmTrack 
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

//-----------------------
// This Class's Header --
//-----------------------
#include "ChnsFsmResponse.h"
#include "ChnsFsmAbsDet.h"

//-------------
// C Headers --
//-------------

//---------------
// C++ Headers --
//---------------
#include <iostream>
using std::cout;
using std::endl;
using std::ostream;

//-------------------------------
// Collaborating Class Headers --
//-------------------------------

//-----------------------------------------------------------------------
// Local Macros, Typedefs, Structures, Unions and Forward Declarations --
//-----------------------------------------------------------------------

//----------------
// Constructors --
//----------------

ChnsFsmResponse::ChnsFsmResponse()
{  
  setDetector(0);
  setDetected(true);
  
  setdE(0.0);
  setdp(0.0);
  setdtheta(0.0);
  setdphi(0.0);
  setdt(0.0);
	setbeta(0.0);
  setdm(0.0);
  setm2(0.0);              // m2 from Tof
  setTpcdEdx(0.0);         // dEdx from Tpc
  setMvddEdx(0.0);         // dEdx fro Mvd
  setSttdEdx(0.0);         // dEdx fro Stt
  setGemdEdx(0.0);         // dEdx fro Gem
  
  setDrcDiscThtc(0.0);         // thetac from Drc disc
  setDrcBarrelThtc(0.0);         // thetac from Drc barrel
  setRichThtc(0.0);         // thetac rich
  setEmcEcal(0.0);			// emc E_calib
  setMuoIron(0.0);			// MDT length in iron
  
  setdV(0.0, 0.0, 0.0);

  setLHElectron(0.0);
  setLHMuon(0.0);
  setLHPion(0.0);
  setLHKaon(0.0);
  setLHProton(0.0);
  setLHDeuteron(0.0);
  setLHTriton(0.0);
  setLHHe3(0.0);
  setLHHe4(0.0);
}

//--------------
// Destructor --
//--------------

ChnsFsmResponse::~ChnsFsmResponse()
{
}

//--------------
// Operations --
//--------------

void
ChnsFsmResponse::setDetector(ChnsFsmAbsDet *det)
{
  _detector=det;
}

void
ChnsFsmResponse::setDetected(bool isdet)
{
  _detected=isdet;
}

void
ChnsFsmResponse::setdE(double val)
{
  _dE=val;
}

void
ChnsFsmResponse::setdp(double val)
{
  _dp=val;
}

void
ChnsFsmResponse::setdm(double val)
{
  _dm=val;
}

void
ChnsFsmResponse::setbeta(double val)
{
 _beta=val;
 
}

void
ChnsFsmResponse::setm2(double val, double err)
{
 _m2=val;
 _m2Err=err;
 
}

void
ChnsFsmResponse::setTpcdEdx(double val, double err)
{
  _TpcdEdx=val;
  _TpcdEdxErr=err;
}
void
ChnsFsmResponse::setSttdEdx(double val, double err)
{
  _SttdEdx=val;
  _SttdEdxErr=err;
}
void
ChnsFsmResponse::setGemdEdx(double val, double err)
{
  _GemdEdx=val;
  _GemdEdxErr=err;
}
void
ChnsFsmResponse::setMvddEdx(double val, double err)
{
  _MvddEdx=val;
  _MvddEdxErr=err;
}

void
ChnsFsmResponse::setDrcDiscThtc(double val, double err)
{
  _DrcDiscThtc=val;
  _DrcDiscThtcErr=err;
}
void
ChnsFsmResponse::setDrcBarrelThtc(double val, double err)
{
  _DrcBarrelThtc=val;
  _DrcBarrelThtcErr=err;
}

void
ChnsFsmResponse::setRichThtc(double val, double err)
{
  _RichThtc=val;
  _RichThtcErr=err;
}

void
ChnsFsmResponse::setdtheta(double val)
{
  _dtheta=val;
}

void
ChnsFsmResponse::setdphi(double val)
{
  _dphi=val;
}

void
ChnsFsmResponse::setdt(double val)
{
  _dt=val;
}


void
ChnsFsmResponse::setLHElectron(double val)
{
  _LHElectron=val;
}

void
ChnsFsmResponse::setLHMuon(double val)
{
  _LHMuon=val;
}

void
ChnsFsmResponse::setLHPion(double val)
{
  _LHPion=val;
}

void
ChnsFsmResponse::setLHKaon(double val)
{
  _LHKaon=val;
}

void
ChnsFsmResponse::setLHProton(double val)
{
  _LHProton=val;
}

void
ChnsFsmResponse::setLHDeuteron(double val)
{
  _LHDeuteron=val;
}

void
ChnsFsmResponse::setLHTriton(double val)
{
  _LHTriton=val;
}

void
ChnsFsmResponse::setLHHe3(double val)
{
  _LHHe3=val;
}

void
ChnsFsmResponse::setLHHe4(double val)
{
  _LHHe4=val;
}

void 
ChnsFsmResponse::setdV(TVector3 v)
{
  _dV=v;
}

void 
ChnsFsmResponse::setdV(double dx, double dy, double dz) 
{
  _dV.SetXYZ(dx,dy,dz);
}

void ChnsFsmResponse::print(ostream &o)
{
  o<<"ChnsFsmResponse for ";
  o<<"Detector = ";
  if (_detector) o<<_detector->detName();
  else o<<"<UNSPECIFIED>";
  o<<endl;
  o<<"  detected = "<<_detected<<" / ";
  o<<"dE = "<<_dE<<" / ";
  o<<"dp = "<<_dp<<" / ";
  o<<"dm = " << _dm << " / ";
  o<<"m2_Tof = " << _m2 << " / ";
  o<<"dEdx_Tpc = " << _TpcdEdx << " / ";
  o<<"dEdx_Mvd = " << _MvddEdx << " / ";
  o<<"dEdx_Stt = " << _SttdEdx << " / ";
  o<<"dEdx_Gem = " << _GemdEdx << " / ";
  
  o<<"thtc_disc = " << _DrcDiscThtc << " / ";
  o<<"thtc_barrel = " << _DrcBarrelThtc << " / ";
  o<<"thtc_rich = " << _RichThtc << " / ";
  o<<"ecal_emc = " << _EmcEcal << " / ";
  o<<"iron_mdt = " << _MuoIron << " / ";
  
  o<<"dtheta = "<<_dtheta<<" / ";
  o<<"dphi = "<<_dphi<<" / ";
  o<<"dt = "<<_dt<<endl;

  o<<"dVx = "<<_dV.X()<<" / ";
  o<<"dVy = "<<_dV.Y()<<" / ";
  o<<"dVz = "<<_dV.Z()<<endl;
  
  o<<"  LH_e = "<<_LHElectron <<" / ";
  o<<"LH_mu = "<< _LHMuon<<" / ";
  o<<"LH_pi = "<< _LHPion<<" / ";
  o<<"LH_K = "<< _LHKaon<<" / ";
  o<<"LH_p = "<<_LHProton <<endl; 
  o<<"LH_d = "<<_LHDeuteron <<endl; 
  o<<"LH_t = "<<_LHTriton <<endl; 
  o<<"LH_he3 = "<<_LHHe3 <<endl; 
  o<<"LH_he4 = "<<_LHHe4 <<endl; 
}
