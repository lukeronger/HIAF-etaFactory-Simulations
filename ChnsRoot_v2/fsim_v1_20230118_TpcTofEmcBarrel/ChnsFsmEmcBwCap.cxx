//--------------------------------------------------------------------------
// File and Version Information:
//      $Id: FsmEmcBwCap.cc,v 1.9 2007/05/24 08:07:40 klausg Exp $
//
// Description:
//      Class FsmEmcBwCap
//
//  Implementation of the EMC Barrel part for the FastSim
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
#include "ChnsFsmEmcBwCap.h"

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

ChnsFsmEmcBwCap::ChnsFsmEmcBwCap()
{
  initParameters();

  _thtMin=_thtMin*M_PI/180.0;
  _thtMax=_thtMax*M_PI/180.0;
  //print(std::cout);
}

ChnsFsmEmcBwCap::ChnsFsmEmcBwCap(ArgList &par)
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

ChnsFsmEmcBwCap::~ChnsFsmEmcBwCap()
{
}

//--------------
// Operations --
//--------------

ChnsFsmResponse*
ChnsFsmEmcBwCap::respond(ChnsFsmTrack *t)
{
  ChnsFsmResponse *result=new ChnsFsmResponse();

  result->setDetector(this);
  bool wasDetected=detected(t);
  result->setDetected(wasDetected);
  double lund = t->pdt();

  double p=t->p4().Vect().Mag();
  double energy = t->p4().E();

  if (wasDetected)
  {
    result->setdE(dE(t));
    result->setdphi(dphi(t));
    result->setdtheta(dtheta(t));

    double dep_energy = compdepE(energy, lund);
    double sig = dE(t)/energy * dep_energy;
    double meas_dep_energy = _rand->Gaus(dep_energy, sig);
  
    result->setEmcEcal(meas_dep_energy);

    double EoverP = meas_dep_energy/p;
   
    double dep_energy_gammar = compdepE(energy, 22);
    double dep_energy_pi = compdepE(energy, 211);
    double dep_energy_K  = compdepE(energy, 321);
    double dep_energy_p  = compdepE(energy, 2212);
    double dep_energy_e  = compdepE(energy, 11);
    double dep_energy_mu = compdepE(energy, 13);
 
    double weight_Emc = 1; //tempory use  Dec.01 2018
 
    result->setLHElectron( gauss(meas_dep_energy/p, dep_energy_e/p, sig) *weight_Emc);
    result->setLHMuon( gauss(meas_dep_energy/p, dep_energy_mu/p, sig) *weight_Emc);
    result->setLHPion( gauss(meas_dep_energy/p, dep_energy_pi/p, sig) *weight_Emc);
    result->setLHKaon( gauss(meas_dep_energy/p, dep_energy_K/p, sig) *weight_Emc);
    result->setLHProton( gauss(meas_dep_energy/p, dep_energy_p/p, sig) *weight_Emc);

    double zscale = t->p4().Pz()/_dist;
    double x = t->p4().Px()/zscale;
    double y = t->p4().Py()/zscale;
    TVector3 hitpos(x,y,-1*_dist);  //negtive sign.   11.30.2018 Yutie
    t->setStopVtx(hitpos);    //fix me later!!!  xy position need to be recalculate for charged particles.!!!  Yutie 11.30.2019
  }
  else
  {
    result->setdE(0.);
    result->setdphi(0.);
    result->setdtheta(0.);
  }

  return result;
}

bool
ChnsFsmEmcBwCap::detected(ChnsFsmTrack *t) const
{
  if (t->hitMapValid()) {
    return t->hitMapResponse(FsmDetEnum::EmcBwCap);
  } else {
    double theta = t->p4().Theta();
    double E=t->p4().E();
    double lund = t->pdt();
    //return ( lund==22 && theta>=_thtMin && theta<=_thtMax && E>_Emin  && _rand->Rndm()<=_efficiency);

    double p_t    = t->p4().Vect().Pt();
    double charge=t->charge();

    if(fabs(charge)>0.001){   //  a) for charged particles --Yutie   11.30.2018
	return ( theta>=_thtMin && theta<=_thtMax && E>_Emin && _rand->Rndm()<=_efficiency);   
 
    }else{     //  b) for neutral particles --Yutie
	return ( theta>=_thtMin && theta<=_thtMax && E>_Emin && _rand->Rndm()<=_efficiency);

    }
  }
}

double
ChnsFsmEmcBwCap::gauss(double x, double x0, double s)
{
  return (1.0/(sqrt(2.0*M_PI)*s))*
          exp(-(x-x0)*(x-x0)/(2.0*s*s));
}

double
ChnsFsmEmcBwCap::compdepE(double E, double pdgcode)
{

    double dep_energy;
    if(fabs(pdgcode)==211||fabs(pdgcode)==321||fabs(pdgcode)==2212){
        double a1 = _rand->Gaus(0.20, 0.012);  //probility is : 25% //proximation
        double a2 = _rand->Gaus(0.20, 0.039);  //probility is : 25%
        double a3 = _rand->Gaus(0.3*E, 0.2*E); //probility is : 50%
        int rndm = int(_rand->Rndm() * 4); // 0, 1, 2, 3
        if(rndm == 0) dep_energy = a1;
        else if(rndm == 1) dep_energy = a2;
        else dep_energy = a3;
        //cout<<"EmcBarrel: dep_energy = "<<dep_energy<<endl;
    }
    else if(fabs(pdgcode)==13){
        double a1 = _rand->Gaus(0.05, 0.003);  //probility is : 25% //proximation   //for mu, only dE/dx
        double a2 = _rand->Gaus(0.05, 0.01);  //probility is : 25%
        //double a3 = _rand->Gaus(0.3*E, 0.2*E); //probility is : 50%
        int rndm = int(_rand->Rndm() * 2); // 0, 1
        if(rndm == 0) dep_energy = a1;
        else dep_energy = a2;
    }
    else if(fabs(pdgcode)==11||pdgcode==22){
        dep_energy = _rand->Gaus(0.96*E, 0.01*E);
    }

    if(dep_energy>0) return dep_energy;
    else return 0;


}



double
ChnsFsmEmcBwCap::dE(ChnsFsmTrack *t) const
{
  double E = t->p4().E();

  return (_aPar+_bPar/E+_cPar/sqrt(E) ) * E;
}

double
ChnsFsmEmcBwCap::dphi(ChnsFsmTrack *t) const
{
  double theta = t->p4().Vect().Theta();

  return (_resFactor*M_PI/int(2*M_PI*_dist*tan(M_PI-theta)/_xtalDim) );
}

double
ChnsFsmEmcBwCap::dtheta(ChnsFsmTrack *t) const
{
  double theta = t->p4().Vect().Theta();
  return ( _resFactor*atan(_xtalDim*cos(M_PI-theta)/(2*_dist)) );
}

void
ChnsFsmEmcBwCap::print(ostream &o)
{
  o <<"Detector <"<<_detName<<">"<<endl;
  o  <<"  _aPar = "<<_aPar<<endl;
  o  <<"  _bPar = "<<_bPar<<endl;
  o  <<"  _cPar = "<<_cPar<<endl;
  o  <<"  _xtalDim = "<<_xtalDim<<endl;
  o  <<"  _Emin = "<<_Emin<<endl;
  o  <<"  _dist = "<<_dist<<endl;
  o  <<"  _resFactor = "<<_resFactor<<endl;
  o  <<"  _thtMin = "<<_thtMin<<endl;
  o  <<"  _thtMax = "<<_thtMax<<endl;
  o  <<"  _radiationLength = "<<_radiationLength<<endl;
  o  <<"  _efficiency = "<<_efficiency<<endl;
}

void
ChnsFsmEmcBwCap::initParameters()
{
  _detName = FsmDetName::name(FsmDetEnum::EmcBwCap);
  _aPar=4.52495e-3;
  _bPar=2.9539e-3;
  _cPar=7.7596e-3;
  //_aPar  = 0.01;
  //_bPar = 0.01;
  _xtalDim = 0.02;
  _Emin = 0.01;
  _dist = 0.7;
  _resFactor = 0.25;
  _thtMin = 140.0;
  _thtMax = 170.0;
  _radiationLength = 0.0;
  _efficiency	   =1.0;
}

bool
ChnsFsmEmcBwCap::setParameter(std::string &name, double value)
{
  // *****************
  // include here all parameters which should be settable via tcl
  // *****************

  bool knownName=true;

  if (name == "aPar")
    _aPar=value;
  else
  if (name == "bPar")
    _bPar=value;
  else
  if (name == "cPar")
    _cPar=value;
  else
  if (name == "xtalDim")
    _xtalDim=value;
  else
  if (name == "Emin")
    _Emin=value;
  else
  if (name == "dist")
    _dist=value;
  else
  if (name == "resFactor")
    _resFactor=value;
  else
  if (name == "thtMin")
    _thtMin=value;
  else
  if (name == "thtMax")
    _thtMax=value;
  else
  if (name == "radiationLength")
    _radiationLength=value;
  else
  if (name == "efficiency")
    _efficiency=value;
  else
    knownName=false;

  return knownName;
}

