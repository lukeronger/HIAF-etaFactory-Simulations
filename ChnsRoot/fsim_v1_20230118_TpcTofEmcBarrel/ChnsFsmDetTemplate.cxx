//--------------------------------------------------------------------------
// Description:
//      Class ChnsFsmDetTemplate
//      
//  Template class for a Fast Sim Detectors 
//
//  This software was developed for the PANDA collaboration.  If you
//  use all or part of it, please give an appropriate acknowledgement.
//
// Author List:
//      Klaus Goetzen                    Original Author
//
// Copyright Information:
//      Copyright (C) 2008              GSI
//
//------------------------------------------------------------------------

//-----------------------
// This Class's Header --
//-----------------------
#include "ChnsFsmDetTemplate.h"

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

ChnsFsmDetTemplate::ChnsFsmDetTemplate() 
{
  initParameters();

  _thtMin=_thtMin*M_PI/180.0;
  _thtMax=_thtMax*M_PI/180.0;

  print(std::cout);
}

ChnsFsmDetTemplate::ChnsFsmDetTemplate(ArgList &par) 
{
  initParameters();
  //set default parameter values and parses a parameter list
  //i.e. std::list<std::string> of the form
  //"a=1" "b=2" "c=3" 
  parseParameterList(par);

  _thtMin=_thtMin*M_PI/180.0;
  _thtMax=_thtMax*M_PI/180.0;

  print(std::cout);
}

//--------------
// Destructor --
//--------------

ChnsFsmDetTemplate::~ChnsFsmDetTemplate()
{
}

//--------------
// Operations --
//--------------

ChnsFsmResponse* 
ChnsFsmDetTemplate::respond(ChnsFsmTrack *t)
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
  }
  
  return result;
}

bool 
ChnsFsmDetTemplate::detected(ChnsFsmTrack *t) const
{
    double theta = t->p4().Theta();
    double p_t=t->p4().Vect().Perp(TVector3(0.,0.,1.));
    double charge=t->charge();

    return ( charge!=0.0 && theta>=_thtMin && theta<=_thtMax && p_t>_ptmin  && _rand->Rndm()<=_efficiency);
}


double 
ChnsFsmDetTemplate::dp(ChnsFsmTrack *t) const
{
  double p=t->p4().Vect().Mag();
  
  return (_pRes * p );
}

double
ChnsFsmDetTemplate::dphi(ChnsFsmTrack *t) const
{
  return _phiRes; 
}

double
ChnsFsmDetTemplate::dtheta(ChnsFsmTrack *t) const
{
  return _thtRes; 
}

void
ChnsFsmDetTemplate::print(ostream &o)
{
  o <<"Parameters for detector <"<<detName()<<">"<<endl;
  o  <<"  _thtMin     = " <<  _thtMin << endl; 
  o  <<"  _thtMax     = " <<  _thtMax << endl; 
  o  <<"  _ptmin      = " <<  _ptmin  << endl; 
  o  <<"  _pRes       = " <<  _pRes   << " (rel)"<< endl;
  o  <<"  _thtRes     = " <<  _thtRes << endl;
  o  <<"  _phiRes     = " <<  _phiRes << endl;
  o  <<"  _efficiency = " << _efficiency<<endl; 
}

void 
ChnsFsmDetTemplate::initParameters()
{
  _detName         = "ChnsFsmDetTemplate";
  _thtMin          = 7.765;
  _thtMax          = 159.44;
  _ptmin           = 0.1;
  _pRes            = 0.02;   // 2%
  _thtRes          = 0.005;
  _phiRes          = 0.005;
  _efficiency	   = 1.0; 

}

bool
ChnsFsmDetTemplate::setParameter(std::string &name, double value)
{
  // *****************
  // include here all parameters which should be settable via script
  // *****************
      
  bool knownName=true;
  
  if (name == "thtMin")
    _thtMin=value;
  else
  if (name == "thtMax")
    _thtMax=value;
  else
  if (name == "ptmin")
    _ptmin=value;
  else
  if (name == "pRes")
    _pRes=value;
  else
  if (name == "thtRes")
    _thtRes=value;
  else
  if (name == "phiRes")
    _phiRes=value;
  else
  if (name == "efficiency")
    _efficiency=value;
  else
    knownName=false;
  
  return knownName;
}

