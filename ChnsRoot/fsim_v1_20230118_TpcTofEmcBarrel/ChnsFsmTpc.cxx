//--------------------------------------------------------------------------
// File and Version Information:
//      $Id: FsmTpc.cc,v 1.13 2007/05/24 08:07:40 klausg Exp $
//
// Description:
//      Class FsmTpc
//      
//  Implementation of the TPC for the FastSim
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
#include "ChnsFsmTpc.h"

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

ChnsFsmTpc::ChnsFsmTpc() 
{
  initParameters();

  //_X0=100.0*11.0/_n;  //comment out by Yutie at 11.22 2018    change to L/_X0 = 0.02 : 2% radiation length
  _thtMin=_thtMin*M_PI/180.0;
  _thtMax=_thtMax*M_PI/180.0;
  //print(std::cout);
}

ChnsFsmTpc::ChnsFsmTpc(ArgList &par) 
{
  initParameters();
  //set default parameter values and parses a parameter list
  //i.e. std::list<std::string> of the form
  //"a=1" "b=2" "c=3" 
  parseParameterList(par);

  //_X0=100.0*11.0/_n;  //comment out by Yutie at 11.22 2018    change to L/_X0 = 0.02 : 2% radiation length
  _thtMin=_thtMin*M_PI/180.0;
  _thtMax=_thtMax*M_PI/180.0;
  //print(std::cout);
}

//--------------
// Destructor --
//--------------

ChnsFsmTpc::~ChnsFsmTpc()
{
}

//--------------
// Operations --
//--------------

ChnsFsmResponse* 
ChnsFsmTpc::respond(ChnsFsmTrack *t)
{
  ChnsFsmResponse *result=new ChnsFsmResponse();
  
  result->setDetector(this);
  bool wasDetected=detected(t);
  result->setDetected(wasDetected);

  if (wasDetected && fabs(t->charge())>1e-8)
  {
    result->setdp(dp(t));
    result->setdphi(dphi(t));
    result->setdtheta(dtheta(t));

     // now the dEdx information
    TParticlePDG* part = _fdbPDG->GetParticle(t->pdt());
    double mass = (part) ? part->Mass() : t->p4().M();
    double p=t->p4().Vect().Mag();
    
    // overall resolution for the dEdx measurement
    double dEdx = compdEdx(p,mass);
    double sig = _dEdxRes*dEdx;
    
    double m_e  = _fdbPDG->GetParticle(11)->Mass();
    double m_mu = _fdbPDG->GetParticle(13)->Mass(); 
    double m_pi = _fdbPDG->GetParticle(211)->Mass(); 
    double m_K  = _fdbPDG->GetParticle(321)->Mass();
    double m_p  = _fdbPDG->GetParticle(2212)->Mass();

    // compute the expected dEdx values for all particle types
    // we need these to determine the pdf's (gaussian around nominal dEdx with res sig)

    double dEdx_e  = compdEdx(p,m_e);
    double dEdx_mu = compdEdx(p,m_mu);
    double dEdx_pi = compdEdx(p,m_pi);
    double dEdx_K  = compdEdx(p,m_K);
    double dEdx_p  = compdEdx(p,m_p);
    
    double measdEdx = _rand->Gaus(dEdx,sig);

    result ->setTpcdEdx(measdEdx,sig); 

    if (dEdx_e)  result->setLHElectron( gauss(measdEdx,dEdx_e,sig) );
    if (dEdx_mu) result->setLHMuon( gauss(measdEdx,dEdx_mu,sig) );
    if (dEdx_pi) result->setLHPion( gauss(measdEdx,dEdx_pi,sig) );
    if (dEdx_K)  result->setLHKaon( gauss(measdEdx,dEdx_K,sig) );
    if (dEdx_p)  result->setLHProton(gauss(measdEdx,dEdx_p,sig) );


  }
  

  return result;
}

double
ChnsFsmTpc::gauss(double x, double x0, double s)
{
  return (1.0/(sqrt(2.0*M_PI)*s))*
          exp(-(x-x0)*(x-x0)/(2.0*s*s));
}

double 
ChnsFsmTpc::compdEdx(double p, double M)
{
  double dEdX;
  
  p*=1000;
  M*=1000;
  
  const double Z=10;
  const double A=20;
  const double z=1;//charge of incident particle in unit of e

  double beta;
  beta=p/sqrt(M*M+p*p);//CalculateBeta(KE,M);

  double gamma;
  gamma=1./sqrt(1-beta*beta);

  const double I=10e-6*Z;//0.000188;//MeV
  const double me=0.511;//Mev/c2

  double Wmax;
  Wmax=(2*me*beta*beta*gamma*gamma) / (1 + 2*gamma*me/M + (me/M)*(me/M));

  //const double C1=0.1535;//MeV cm2/g
  
  double X,X0,X1;
  double kappa=0.307075;
  X0=0.201;
  X1=3;
  X=log10(beta*gamma);
  double delta;
  double C,a;
  C=-5.217;
  a=0.196;
  
  if(X<=X0)
    delta=0;
  else if(X<=X1)
    delta=2*log(10.)*X+C+a*(X1-X)*(X1-X)*(X1-X);
  else
    delta=2*log(10.)*X+C;
  
  dEdX= ( kappa * (Z/A)   * z*z /(beta*beta)) * (log(2*me*beta*beta*gamma*gamma*Wmax / (I*I)) - 2*beta*beta - delta); //-Dshell??
  
  return dEdX;
}

bool 
ChnsFsmTpc::detected(ChnsFsmTrack *t) const
{
  if (t->hitMapValid()) {
    return t->hitMapResponse(FsmDetEnum::Tpc);
  } else {

    
	  double theta  = t->p4().Theta();
	  double p_t    = t->p4().Vect().Pt();
	  double charge=t->charge();
	  
    //only charged particles give signal 
	  if (fabs(charge)<0.001) return false; 
     
    // due to track curvature particle doesn't reach barrel
	  double rho = 3.3356 * p_t / _Bfield;
	  if (_rmin>(2*rho)) return false; 
        
		Double_t trackerRadius = 0.30; // tracker radius in meter
		Double_t trackerLength = 0.90; // tracker forward direction length in meter
		
		double lengthT = trackerRadius;
		if(theta > atan2(trackerRadius, trackerLength))
			lengthT = trackerRadius*tan(theta);
    double z=2*rho*asin(lengthT/(2*rho))/tan(theta);    
    double polar=atan2(trackerRadius,z);

    if (polar<_thtMin || polar>_thtMax) return false; 
    //finally check for efficiency;
	  return ( _rand->Rndm()<=_efficiency);   	  
  }
}


double 
ChnsFsmTpc::dp(ChnsFsmTrack *t) const
{
  TLorentzVector p4=t->p4();
  double theta=p4.Theta();
  double mom=p4.Vect().Mag();
  double beta=p4.Beta();
	double pt=p4.Pt();
	int charge=t->charge();
  Double_t trackerRadius = 0.30; // tracker radius in meter 
	Double_t trackerLength = 0.90; // tracker forward direction length in meter 
	Double_t radiationLengthPerSiLayer = 0.003; // 0.3% per Si layer
	double lengthT = trackerRadius;
	double length = lengthT;
	if(theta > atan2(trackerRadius, trackerLength))
		lengthT = trackerRadius;
	else
		lengthT = trackerLength*tan(theta);
	length = lengthT/sin(theta);
	
	double effradlen = length/300 + radiationLengthPerSiLayer*_n; // Air raidation length 300 m + 0.4% per Si layer


	double theta0 = 13.6*charge/beta/mom/1000*sqrt(effradlen/2.)*(1+0.038*TMath::Log(effradlen));
  
  double cont1 = pt*_sigXY/(0.3*_Bfield*lengthT*lengthT)*sqrt((4*180*_n*_n*_n)/((_n-1)*(_n+1)*(_n+2)*(_n+3)));  //hit error, modified by Xionghong at 12.21 2022 (according to Hao Qiu's study)
  double cont2 = pt*theta0/sin(theta)/(0.3*_Bfield*lengthT/2);  //
  double cont3 = _sigTht/tan(theta);
  return ( sqrt(cont1*cont1 + cont2*cont2) * mom );
}

double
ChnsFsmTpc::dphi(ChnsFsmTrack *) const // t //[R.K.03/2017] unused variable(s)
{
  return 0.0007; //to be refined
}

double
ChnsFsmTpc::dtheta(ChnsFsmTrack *) const // t //[R.K.03/2017] unused variable(s)
{
  return 0.0007; //to be refined
}

void
ChnsFsmTpc::print(ostream &o)
{
  o <<"Parameters for detector <"<<detName()<<">"<<endl;
  o  <<"  _n = "<<_n<<endl; 
  o  <<"  _sigXY = "<<_sigXY<<endl; 
  o  <<"  _Bfield = "<<_Bfield<<endl; 
  o  <<"  _Lpath = "<<_Lpath<<endl; 
  o  <<"  _X0 = "<<_X0<<endl; 
  o  <<"  _sigTht = "<<_sigTht<<endl; 
  o  <<"  _thtMin = "<<_thtMin<<endl; 
  o  <<"  _thtMax = "<<_thtMax<<endl; 
  o  <<"  _radiationLength = "<<_radiationLength<<endl; 
  o  <<"  _pmin = "<<_pmin<<endl; 
  o  <<"  _rmin = "<<_rmin<<endl; 
  o  <<"  _dEdxRes = "<<_dEdxRes << " (rel)"<< endl;    
  o  <<"  _efficiency = "<<_efficiency<<endl; 
}

void 
ChnsFsmTpc::initParameters()
{
  _detName         = FsmDetName::name(FsmDetEnum::Tpc);
  _n = 6.0; // hit points
  _sigXY = 50.0e-6;
  _Bfield = 0.8;  
  _Lpath = 0.27;
  _X0 = 0.003;
  _sigTht = 6.0e-4;	  
  _thtMin          = 5;
  _thtMax          = 100;
  _radiationLength = 0.0;
  _pmin            = 0.0;
  _rmin            = 0.05;
  _dEdxRes         = 0.2; // 20% dEdx resolution
  _efficiency	   =1.0; 

}

bool
ChnsFsmTpc::setParameter(std::string &name, double value)
{
  // *****************
  // include here all parameters which should be settable via tcl
  // *****************
      
  bool knownName=true;
  
  if (name == "n")
    _n=value;
  else
  if (name == "sigXY")
    _sigXY=value;
  else
  if (name == "Bfield")
    _Bfield=value;
  else
  if (name == "Lpath")
    _Lpath=value;
  else
  if (name == "X0")
    _X0=value;
  else
  if (name == "sigTht")
    _sigTht=value;
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
  if (name == "pmin")
    _pmin=value;
  else
  if (name == "rmin")
	_rmin=value;
  else
  if (name == "dEdxRes")
    _dEdxRes=value;
  else
  if (name == "efficiency")
    _efficiency=value;
  else
    knownName=false;
  
  return knownName;
}

