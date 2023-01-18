//--------------------------------------------------------------------------
// File and Version Information:
//      $Id: FsmTofFwCap.cc,v 1.2 2018/11/16 16:22:00 YutieLiang Exp $
//
// Description:
//      Class FsmTofFwCap
//      
//  Implementation of the Backward tof for the FastSim
//
//  This software was developed for the EicC collaboration.  If you
//  use all or part of it, please give an appropriate acknowledgement.
//
// Author List:
//      Yutie Liang                    Original Author
//
// Copyright Information:
//      Copyright (C) 2018              IMP
//
//------------------------------------------------------------------------

//-----------------------
// This Class's Header --
//-----------------------
#include "ChnsFsmTofFwCap.h"

//-------------
// C Headers --
//-------------

//---------------
// C++ Headers --
//---------------
#include <math.h>
#include <iostream>

using std::cout;
using std::endl;
using std::ostream;
using std::string;

//-------------------------------
// Collaborating Class Headers --
//-------------------------------

#include "ArgList.h"
#include "ChnsFsmResponse.h"
#include "ChnsFsmTrack.h"

//-----------------------------------------------------------------------
// Local Macros, Typedefs, Structures, Unions and Forward Declarations --
//-----------------------------------------------------------------------

//----------------
// Constructors --
//----------------

ChnsFsmTofFwCap::ChnsFsmTofFwCap() 
{
  initParameters();
  
  _thtMin=_thtMin*M_PI/180.0;
  _thtMax=_thtMax*M_PI/180.0;
  //print(std::cout);
}

ChnsFsmTofFwCap::ChnsFsmTofFwCap(ArgList &par) 
{
  initParameters();
  //set default parameter values and parses a parameter list
  //i.e. std::list<std::string> of the form
  //"a=1" "b=2" "c=3" 
  parseParameterList(par);
  
  _thtMin=_thtMin*M_PI/180.0;
  _thtMax=_thtMax*M_PI/180.0;
  //print(std::cout);
}

//--------------
// Destructor --
//--------------

ChnsFsmTofFwCap::~ChnsFsmTofFwCap()
{
}

//--------------
// Operations --
//--------------

ChnsFsmResponse* 
ChnsFsmTofFwCap::respond(ChnsFsmTrack *t)
{
  ChnsFsmResponse *result=new ChnsFsmResponse();
  
  result->setDetector(this);
  bool wasDetected=detected(t);
//  result->setDetected(wasDetected);

  
  if (wasDetected && fabs(t->charge())>0.999)
  {
    TParticlePDG* part = _fdbPDG->GetParticle(t->pdt());
    double mass = (part) ? part->Mass() : t->p4().M();
    double theta = t->p4().Theta();
    double p=t->p4().Vect().Mag();
    double stht=sin(theta);
    double p_t=p*stht;
    double p_z=p*cos(theta);
    double En=t->p4().E();
    double sigp=_dp*p;       
    double dt=_dt  * 1e-12 * 2.998*(1e+8) * sqrt(2.0); // time resolution of tof

    if ( p==0 || p_t==0 || En==0 ) {result->setDetected(false);return result;} // floating point check ********************
  

  {//Yutie
   
  double time = _distToZero/(p_z/En *2.998*(1e+8))  *(1e+12); //  unit: ps;
  double measp = _rand->Gaus(p,sigp);
  double measpz=measp*cos(theta); 
  double meas_t =  _rand->Gaus(0.0,_dt);  //unit: ps
  double meastime = time + meas_t ;   //unit: ps
 
  if (measpz==0) {result->setDetected(false);return result;} // floating point check ******************** 

  double measE=0;
  measE = meastime*(measpz * 2.998*(1e+8))/_distToZero *(1e-12);

  double measmas2 =  measE* measE -  measp* measp ;

  if (measmas2<0) {result->setDetected(false);return result;} // floating point check ********************

  double measmas = sqrt( measmas2);
  

   
    double m_e  = _fdbPDG->GetParticle(11)->Mass();
    double m_mu = _fdbPDG->GetParticle(13)->Mass(); 
    double m_pi = _fdbPDG->GetParticle(211)->Mass(); 
    double m_K  = _fdbPDG->GetParticle(321)->Mass();
    double m_p  = _fdbPDG->GetParticle(2212)->Mass();
   
   double sig_e=0.05;   // to be refined
   double sig_mu=0.05;  // to be refined
   double sig_pi=0.05;  // to be refined
   double sig_K=0.05;   // to be refined
   double sig_p=0.05;   // to be refined
   
   double dm_p = measmas - mass; 
   
  //error calc of m^2
  double dE=measE*_dt/meastime;
  double dm2=2*sqrt(measE*measE*dE*dE+measp*measp*sigp*sigp);
   
    result->setdm(dm_p);    
    //double dm_test=result->dm();   //[R.K. 01/2017] unused variable                            //aida
    //    std::cout <<"Tof_result_setdm ="<< dm_test <<std::endl;   //aida

     result ->setm2(measmas2,dm2);
        
     result->setLHElectron( gauss_t(measmas,m_e,sig_e) );
     result->setLHMuon( gauss_t(measmas,m_mu,sig_mu) );
     result->setLHPion( gauss_t(measmas,m_pi,sig_pi) );;
     result->setLHKaon ( gauss_t(measmas,m_K,sig_K) ); 
     result->setLHProton( gauss_t(measmas,m_p,sig_p) );


  }
 }  
  return result;
}

double
ChnsFsmTofFwCap::gauss_t(double x, double x0, double s)
{
  return (1.0/(sqrt(2.0*M_PI)*s))*
          exp(-(x-x0)*(x-x0)/(2.0*s*s));
}

bool 
ChnsFsmTofFwCap::detected(ChnsFsmTrack *t) const
{
  if (t->hitMapValid()) {
    return t->hitMapResponse(FsmDetEnum::Tof);
  } 
  else 
  {

    int    lundId = abs(t->pdt());
    //TParticlePDG* part = _fdbPDG->GetParticle(lundId); //[R.K. 01/2017] unused variable?
    //double mass = (part) ? part->Mass() : t->p4().M(); //[R.K. 01/2017] unused variable
    double theta  = t->p4().Theta();
    //double p      = t->p4().Vect().Mag(); //[R.K. 01/2017] unused variable
    double p_t    = t->p4().Vect().Pt();
    double charge=t->charge();
     
    //only charged particles give signal 
    if (fabs(charge)<0.001) return false; 
     
    //particle doesn't produce cherenkov light
    if (!(lundId==11 || lundId==13 || lundId==211 || lundId==321 || lundId==2212)) return false;
    
    if (theta<_thtMin || theta>_thtMax) return false; 
    
    //finally check for efficiency;
    return ( _rand->Rndm()<=_efficiency); 
  }
}

void
ChnsFsmTofFwCap::print(ostream &o)
{
  o <<"Parameters for detector <"<<detName()<<">"<<endl;
  o  <<"  _thtMin = "<<_thtMin<<endl; 
  o  <<"  _thtMax = "<<_thtMax<<endl; 
  o  <<"  _radiationLength = "<<_radiationLength<<endl; 
  o  <<"  _pmin = "<<_pmin<<endl; 
  o  <<"  _Bfield = "<<_Bfield<<endl; 
  o  <<"  _distToZero = "<<_distToZero<<endl; 
  o  <<"  _dSlab = "<<_dSlab<<endl; 
  o  <<"  _dp = "<<_dp<<endl; 
  o  <<"  _dt = "<<_dt<<endl; 
  o  <<"  _efficiency = "<<_efficiency<<endl; 
}

void 
ChnsFsmTofFwCap::initParameters()
{
  _detName =  FsmDetName::name(FsmDetEnum::Tof);
  _thtMin = 22.0;
  _thtMax = 140.0;
  _pmin = 0.0;
  _radiationLength = 0.0;
  _Bfield = 2.;               
  _distToZero = 0.38;             
  _dSlab = 0.01;               
  _dp=0.01;                  //1 % is resolution of Tpc
  _dt=100;                   //time res in ps
  _efficiency	   =1.0; 
}

bool
ChnsFsmTofFwCap::setParameter(std::string &name, double value)
{
  // *****************
  // include here all parameters which should be settable via tcl
  // *****************
      
  bool knownName=true;
  
  if (name == "thtMin")
    _thtMin=value;
  else
  if (name == "thtMax")
    _thtMax=value;
  else
  if (name == "radiationLength")
    _radiationLength=value;
  else
  if (name == "pmin")
    _pmin=value;
  else
  if (name == "Bfield")
    _Bfield=value;
  else
  if (name == "distToZero")
    _distToZero=value;
  else
  if (name == "dSlab")
    _dSlab=value;
  else
  if (name == "dp")
    _dp=value;
  else
   if (name == "dt")
    _dt=value;
  else
 if (name == "efficiency")
    _efficiency=value;
  else
    knownName=false;
  
  return knownName;
}
