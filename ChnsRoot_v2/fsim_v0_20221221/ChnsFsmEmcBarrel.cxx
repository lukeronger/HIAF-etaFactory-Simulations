//--------------------------------------------------------------------------
// File and Version Information:
//      $Id: FsmEmcBarrel.cc,v 1.11 2007/05/24 08:07:40 klausg Exp $
//
// Description:
//      Class FsmEmcBarrel
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
#include "ChnsFsmEmcBarrel.h"

//-------------
// C Headers --
//-------------

//---------------
// C++ Headers --
//---------------
#include <math.h>
#include <iostream>
#include "TF1.h"
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

ChnsFsmEmcBarrel::ChnsFsmEmcBarrel()
{
  initParameters();

  _thtMin=_thtMin*M_PI/180.0;
  _thtMax=_thtMax*M_PI/180.0;
  _phiMin=_phiMin*M_PI/180.0;
  _phiMax=_phiMax*M_PI/180.0;
  //print(std::cout);
}

ChnsFsmEmcBarrel::ChnsFsmEmcBarrel(ArgList &par)
{
  initParameters();
  //set default parameter values and parses a parameter list
  //i.e. std::list<std::string> of the form
  //"a=1" "b=2" "c=3"
  parseParameterList(par);

  _thtMin=_thtMin*M_PI/180.0;
  _thtMax=_thtMax*M_PI/180.0;
  _phiMin=_phiMin*M_PI/180.0;
  _phiMax=_phiMax*M_PI/180.0;
  //print(std::cout);
}




//--------------
// Destructor --
//--------------

ChnsFsmEmcBarrel::~ChnsFsmEmcBarrel()
{
}

//--------------
// Operations --
//--------------

ChnsFsmResponse*
ChnsFsmEmcBarrel::respond(ChnsFsmTrack *t)
{
  ChnsFsmResponse *result=new ChnsFsmResponse();

  result->setDetector(this);
  bool wasDetected=detected(t);
  result->setDetected(wasDetected);
  double lund = t->pdt();

  double p=t->p4().Vect().Mag();
  double energy = t->p4().E();
  

  if (wasDetected) //only gamma treated now in the neutral category!  --Yutie
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
 
    result->setLHElectron( gauss(meas_dep_energy/p, dep_energy_e/p, sig) * weight_Emc); 
    result->setLHMuon( gauss(meas_dep_energy/p, dep_energy_mu/p, sig) * weight_Emc );
    result->setLHPion( gauss(meas_dep_energy/p, dep_energy_pi/p, sig) * weight_Emc);
    result->setLHKaon( gauss(meas_dep_energy/p, dep_energy_K/p, sig) * weight_Emc);
    result->setLHProton( gauss(meas_dep_energy/p, dep_energy_p/p, sig) * weight_Emc);

    if(fabs(t->p4().Perp()) > 1e-9) 
    {
      double perpscale = _barrelRadius/t->p4().Perp();
      double x = t->p4().Px()*perpscale;
      double y = t->p4().Py()*perpscale;
      //z = 0; // convention for Fsim to see if we have a barrel!
      TVector3 hitpos(x,y,0.);
      t->setStopVtx(hitpos); 
    }
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
ChnsFsmEmcBarrel::detected(ChnsFsmTrack *t) const
{
  if (t->hitMapValid()) {
    return t->hitMapResponse(FsmDetEnum::EmcBarrel);
  } else {
    double theta = t->p4().Theta();
    double phi = t->p4().Phi();
    double E = t->p4().E();
    double lund = t->pdt();
    //return ( lund==22 && theta>=_thtMin && theta<=_thtMax && E>_Emin && phi>=_phiMin && phi<=_phiMax && _rand->Rndm()<=_efficiency);   //

    double p_t    = t->p4().Vect().Pt();
    double charge=t->charge();
    if(fabs(charge)>0.001){   //  a) for charged particles --Yutie
	double rho = 3.3356 * p_t / _Bfield;
	if (_barrelRadius>(2*rho)) return false;
	double z=2*rho*asin(_barrelRadius/(2*rho))/tan(theta);
   	double polar=atan2(_barrelRadius,z);

        //cout<<"ChnsFsmEmcBarrel::detected  polar: "<<polar<<"   _thtMin: "<<_thtMin<<"   _thtMax: "<<_thtMax<<"   rho: "<<rho<<"  z: "<<z<<"   r: "<<_barrelRadius<<endl;
	if (polar<_thtMin || polar>_thtMax) return false;	
	//finally check for efficiency;
    	return ( _rand->Rndm()<=_efficiency);
    }else{     //  b) for neutral particles --Yutie
	return ( theta>=_thtMin && theta<=_thtMax && E>_Emin && phi>=_phiMin && phi<=_phiMax && _rand->Rndm()<=_efficiency);	

    }
  }
}

double
ChnsFsmEmcBarrel::dE(ChnsFsmTrack *t) const
{
  double E = t->p4().E();
  return (_aPar+_bPar/E+_cPar/sqrt(E) ) * E;
  //return (sqrt(_aPar*_aPar+_bPar*_bPar/sqrt(E) ) * E);
}

double
ChnsFsmEmcBarrel::dphi(ChnsFsmTrack *) const // t //[R.K.03/2017] unused variable(s)
{
  return (_resFactor*M_PI/int(2*M_PI*_barrelRadius/_xtalDim) );
}

double
ChnsFsmEmcBarrel::dtheta(ChnsFsmTrack *t) const
{
  double theta = t->p4().Vect().Theta();
  return ( _resFactor*atan(_xtalDim*sin(theta)/(2*_barrelRadius)) );
}

double
ChnsFsmEmcBarrel::gauss(double x, double x0, double s)
{
  return (1.0/(sqrt(2.0*M_PI)*s))*
          exp(-(x-x0)*(x-x0)/(2.0*s*s));
}

double
ChnsFsmEmcBarrel::compdepE(double E, double pdgcode)
{

    double dep_energy;
    double deposite_ratio_electron = 1;
    double deposite_ratio_pion = 0.2;
    double deposite_ratio_kaon = 0.2;
    double deposite_ratio_proton = 0.2;  //better to be a histogram! or a analytic funtion
    double deposite_ratio_muon = 0.1;
    double deposite_ratio_gamma = 1;

/* 
    //Use a parameterized function get from BES3 and PANDA 
    double dEdx = 5.63 * _Length *0.001; //5.63MeV/cm for CsI.  need to be refine for other materials
    double dEdx_sig = dEdx * 0.07;// set default dEdx resolution 7%
    double Ionization = 0.165; //0.165 GeV
    double Ionization_sig = Ionization * 0.10; //set default Ionization resolution 10%? 
    double Nuclear_effect = 0.3 * E;
    double Nuclear_effect_sig = 0.2 * E;
    double dEdx_height = 430;
    double Ionization_height = 130;
    double Nuclear_height = 100;
        TF1 *f1 = new TF1("f1", "gaus(0)+gaus(3)+gaus(6)");
        f1->SetParameter(0, 427);
        f1->SetParameter(1, 0.20);
        f1->SetParameter(2, 0.012); 
        f1->SetParameter(3, 132);
        f1->SetParameter(4, 0.2);
        f1->SetParameter(5, 0.039); 
        f1->SetParameter(6, 99);
        f1->SetParameter(7, 0.3*E); 
        f1->SetParameter(8, 0.2*E); 
        dep_energy = f1->GetRandom();
        delete f1;
*/ //   this is too slow. simplify it


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


void
ChnsFsmEmcBarrel::print(ostream &o)
{
  o <<"Detector <"<<_detName<<">"<<endl;
  o  <<"  _aPar = "<<_aPar<<endl;
  o  <<"  _bPar = "<<_bPar<<endl;
  o  <<"  _cPar = "<<_cPar<<endl;
  o  <<"  _xtalDim = "<<_xtalDim<<endl;
  o  <<"  _Emin = "<<_Emin<<endl;
  o  <<"  _barrelRadius = "<<_barrelRadius<<endl;
  o  <<"  _resFactor = "<<_resFactor<<endl;
  o  <<"  _thtMin = "<<_thtMin<<endl;
  o  <<"  _thtMax = "<<_thtMax<<endl;
  o  <<"  _radiationLength = "<<_radiationLength<<endl;
  o  <<"  _phiMin = "<<_phiMin<<endl;
  o  <<"  _phiMax = "<<_phiMax<<endl;
  o  <<"  _efficiency = "<<_efficiency<<endl;
}

void
ChnsFsmEmcBarrel::initParameters()
{
  _detName = FsmDetName::name(FsmDetEnum::EmcBarrel);
  _aPar=4.52495e-3;
  _bPar=2.9539e-3;
  _cPar=7.7596e-3;
  //_aPar  = 0.01;
  //_bPar = 0.01;
  //_cPar = 0.01;
  _xtalDim = 0.02;
  _Emin = 0.01;
  _barrelRadius = 0.5;
  _resFactor = 0.25;
  _thtMin = 22.0;
  _thtMax = 140.0;
  _radiationLength = 0.0;
  _efficiency	   =1.0;
  _phiMin=-360.;
  _phiMax=360.;
  _Bfield=1.5;
  _Length=20;//cm
}

bool
ChnsFsmEmcBarrel::setParameter(std::string &name, double value)
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
  if (name == "Bfield")
    _Bfield=value;
  else
  if (name == "barrelRadius")
    _barrelRadius=value;
  else
  if (name == "Length")
    _Length=value;
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
  if (name == "phiMin")
    _phiMin=value;
  else
  if (name == "phiMax")
    _phiMax=value;
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

