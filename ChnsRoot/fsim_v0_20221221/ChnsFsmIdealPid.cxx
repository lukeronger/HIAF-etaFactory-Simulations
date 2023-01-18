//--------------------------------------------------------------------------
// File and Version Information:
//      $Id: ChnsFsmIdealPid.cxx $
//
// Description:
//      Class ChnsFsmIdealPid
//
//  Implementation of the Montecarlo true PID for the FastSim
//
//  This software was developed for the PANDA collaboration.  If you
//  use all or part of it, please give an appropriate acknowledgement.
//
// Author List:
//      Ralf Kliemt                     Original Author
//
// Copyright Information:
//      Copyright (C) 2014              GSI
//
//------------------------------------------------------------------------

//-----------------------
// This Class's Header --
//-----------------------
#include "ChnsFsmIdealPid.h"

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

ChnsFsmIdealPid::ChnsFsmIdealPid()
{
  initParameters();
  readParameters();
  //print(std::cout);
}

ChnsFsmIdealPid::ChnsFsmIdealPid(ArgList &par)
{
  initParameters();
  parseParameterList(par);
  readParameters();
  //print(std::cout);
}

//--------------
// Destructor --
//--------------

ChnsFsmIdealPid::~ChnsFsmIdealPid()
{
}

//--------------
// Operations --
//--------------

ChnsFsmResponse*
ChnsFsmIdealPid::respond(ChnsFsmTrack *t)
{
  ChnsFsmResponse *result=new ChnsFsmResponse();

  result->setDetector(this);
  bool wasDetected=detected(t);
  result->setDetected(wasDetected);

  if (wasDetected)
  {
	int    type   = abs(t->pdt());

	result->setLHElectron(0.);
	result->setLHMuon(0.);
	result->setLHPion(0.);
	result->setLHKaon(0.);
	result->setLHProton(0.);

	if (abs(type)==11) result->setLHElectron(1.);
	else if (abs(type)==13) result->setLHMuon(1.);
	else if (abs(type)==211) result->setLHPion(1.);
	else if (abs(type)==321) result->setLHKaon(1.);
	else if (type==2212) result->setLHProton(1.);
	else {
	  result->setLHElectron(0.2);
	  result->setLHMuon(0.2);
	  result->setLHPion(0.2);
	  result->setLHKaon(0.2);
	  result->setLHProton(0.2);
	}
  }
  return result;
}

bool
ChnsFsmIdealPid::detected(ChnsFsmTrack *t) const
{
	if(t) return true;
	else return false;
}

void
ChnsFsmIdealPid::print(ostream &o)
{
  o <<"Parameters for detector <"<<detName()<<">"<<endl;
}

void
ChnsFsmIdealPid::initParameters()
{
  _detName="IdealPid";
  return;
}

bool
ChnsFsmIdealPid::setParameter(std::string &, double ) // name value//[R.K.03/2017] unused variable(s)
{
  return true;
}

bool ChnsFsmIdealPid::readParameters()
{
  return true;
}
