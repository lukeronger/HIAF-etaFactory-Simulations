//--------------------------------------------------------------------------
// File and Version Information:
//      $Id: ChnsFsmResponse.hh,v 1.6 2007/05/24 08:07:40 klausg Exp $
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

#ifndef CHNSFSMRESPONSE_H
#define CHNSFSMRESPONSE_H

//----------------------
// Base Class Headers --
//----------------------

//-------------------------------
// Collaborating class Headers --
//-------------------------------

//--------------------------------------------
// Collaborating class forward declarations --
// -------------------------------------------
#include <iosfwd>
#include "TVector3.h"

class ChnsFsmAbsDet;


class ChnsFsmResponse
{
public:

  //--------------------
  // Public interface --
  //--------------------

  //
  // Constructors
  //

  /** Default ctor. */
  ChnsFsmResponse();
  /* Destructor
   */
  virtual ~ChnsFsmResponse();

  
  /**
      Accessors to contained information
  */
  ChnsFsmAbsDet* detector() {return _detector;}
  bool detected() {return _detected;}
  
  double dE() {return _dE;} 
  double dp() {return _dp;} 
  double dtheta() {return _dtheta;} 
  double dphi() {return _dphi;} 
  double dt() {return _dt;} 
  double dm() {return _dm;}
  double m2() {return _m2;}
	double beta() {return _beta;}
  double MvddEdx() {return _MvddEdx;}
  double TpcdEdx() {return _TpcdEdx;}
  double SttdEdx() {return _SttdEdx;}
  double GemdEdx() {return _GemdEdx;}
  double DrcDiscThtc() {return _DrcDiscThtc;}
  double DrcBarrelThtc() {return _DrcBarrelThtc;}
  double RichThtc() {return _RichThtc;}
  double EmcEcal() {return _EmcEcal;}
  double MuoIron() {return _MuoIron;}

  double MvdDCA(){return _MvdDCA;}  //DCA in track level.  yutie 0328

  double m2Err() {return _m2Err;}
  double MvddEdxErr() {return _MvddEdxErr;}
  double TpcdEdxErr() {return _TpcdEdxErr;}
  double SttdEdxErr() {return _SttdEdxErr;}
  double GemdEdxErr() {return _GemdEdxErr;}
  double DrcDiscThtcErr() {return _DrcDiscThtcErr;}
  double DrcBarrelThtcErr() {return _DrcBarrelThtcErr;}
  double RichThtcErr() {return _RichThtcErr;}


  TVector3 dV() {return _dV;}
  double dVx() {return _dV.X();}
  double dVy() {return _dV.Y();}
  double dVz() {return _dV.Z();}
  
  double LHElectron() {return _LHElectron;} 
  double LHMuon() {return _LHMuon;} 
  double LHPion() {return _LHPion;} 
  double LHKaon() {return _LHKaon;} 
  double LHProton() {return _LHProton;} 
  double LHDeuteron() {return _LHDeuteron;} 
  double LHTriton() {return _LHTriton;} 
  double LHHe3() {return _LHHe3;} 
  double LHHe4() {return _LHHe4;} 
  
  //
  //  Modifiers
  //
  void setDetector(ChnsFsmAbsDet *detector);
  void setDetected(bool isdet);
  
  void setdE(double val);
  void setdp(double val);
  void setdtheta(double val);
  void setdphi(double val);
  void setdt(double val);
	void setbeta(double val);
  void setdm(double val);
  void setm2(double val, double err=0);
  void setMvddEdx(double val, double err=0);
  void setTpcdEdx(double val, double err=0);
  void setSttdEdx(double val, double err=0);
  void setGemdEdx(double val, double err=0);
  void setDrcDiscThtc(double val, double err=0);
  void setDrcBarrelThtc(double val, double err=0);
  void setRichThtc(double val, double err=0);
  void setEmcEcal(double val) {_EmcEcal = val;} // , double err=0 //[R.K.03/2017] unused variable(s)
  void setMuoIron(double val) {_MuoIron = val;} // , double err=0 //[R.K.03/2017] unused variable(s)

  void setMvdDCA(double val){_MvdDCA = val;}  //DCA in track level.  yutie 0328

  void setdV(TVector3 v);
  void setdV(double dx, double dy, double dz);
  
  void setLHElectron(double val);
  void setLHMuon(double val);
  void setLHPion(double val);
  void setLHKaon(double val);
  void setLHProton(double val);
  void setLHDeuteron(double val);
  void setLHTriton(double val);
  void setLHHe3(double val);
  void setLHHe4(double val);
  
  void print(std::ostream &o);
  
private:
  //reference to the responding detector
  ChnsFsmAbsDet *_detector;
  bool _detected;
  
  //resolutions (absolute values) of: energy, momentum, theta, phi, time
  double _dE;
  double _dp;
  double _dtheta;
  double _dphi;
  double _dt;
  double _dm;                 //smearing of mass

	double _beta;								//velocity measured by Tof
  double _m2;                 //square of particle mass in Tof
  double _MvddEdx;            //dEdx in Mvd
  double _TpcdEdx;            //dEdx in Tpc
  double _SttdEdx;            //dEdx in Stt
  double _GemdEdx;            //dEdx in Gem
  double _DrcDiscThtc;	      //Theta_c Disc Dirc
  double _DrcBarrelThtc;      //Theta_c Barrel Dirc
  double _RichThtc;           //Theta_c Rich
  double _EmcEcal;            //calibrated energy deposit in calorimeter
  double _MuoIron;            //penetration depth in Muon detector iron

  double _MvdDCA;  //DCA in track level.  yutie 0328

  double _m2Err;              //error of square of particle mass in Tof
  double _MvddEdxErr;         //error of dEdx in Mvd
  double _TpcdEdxErr;         //error of dEdx in Tpc
  double _SttdEdxErr;         //error of dEdx in Stt
  double _GemdEdxErr;         //error of dEdx in Gem
  double _DrcDiscThtcErr;     //error of Theta_c Disc Dirc
  double _DrcBarrelThtcErr;   //error of Theta_c Barrel Dirc
  double _RichThtcErr;        //error of Theta_c Rich

  //resolution of vertex
  TVector3 _dV;
  
  //PID likelihoods for various particle hypotheses
  double _LHElectron;
  double _LHMuon;
  double _LHPion;
  double _LHKaon;
  double _LHProton;
  double _LHDeuteron;
  double _LHTriton;
  double _LHHe3;
  double _LHHe4;
};

#endif
