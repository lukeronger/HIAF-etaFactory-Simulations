//--------------------------------------------------------------------------
// File and Version Information:
//      $Id: FsmEmcBarrel.hh,v 1.5 2006/07/13 10:43:45 klausg Exp $
//
// Description:
//      Class FsmEmcBarrel
//
//  Implementation of the EMC barrel for the Fast Sim Detectors
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

#ifndef CHNSFSMEMCBARREL_H
#define CHNSFSMEMCBARREL_H

//----------------------
// Base Class Headers --
//----------------------

//-------------------------------
// Collaborating class Headers --
//-------------------------------
#include <iosfwd>
#include "ArgList.h"
#include "ChnsFsmAbsDet.h"

#include "TFile.h"
#include "TH1F.h"
#include "TH2F.h"

//--------------------------------------------
// Collaborating class forward declarations --
// -------------------------------------------
class ChnsFsmTrack;
class ChnsFsmResponse;

class ChnsFsmEmcBarrel: public ChnsFsmAbsDet
{
public:

  //--------------------
  // Public interface --
  //--------------------

  //
  // Constructors
  //

  /** Default ctor. */
  ChnsFsmEmcBarrel();
  ChnsFsmEmcBarrel(ArgList &par);
  /** Destructor
   */
  virtual ~ChnsFsmEmcBarrel();

  /**
      Accessors to contained information
  */

  virtual ChnsFsmResponse* respond(ChnsFsmTrack *t);

private:

  bool   detected(ChnsFsmTrack *t) const;
  double dE(ChnsFsmTrack *t) const;
  double dphi(ChnsFsmTrack *t) const;
  double dtheta(ChnsFsmTrack *t) const;

  double compdepE(double E, double pdgcode);
  double gauss(double x, double x0, double s);

  void   initParameters();
  void   print(std::ostream &o);
  bool   setParameter(std::string &name, double value);

	// sampleing histograms
	TFile* file_n;
	TH1F* h1_effi_n;
	TH2F* h2_energy_n;

  //
  //  Modifiers
  //

  double _aPar;			//Parameter 1 for energy resolution
  double _bPar;			//Parameter 2 for energy resolution
  double _cPar;			//Parameter 3 for energy resolution
  double _xtalDim;		//single x-tal front width
  double _Emin;			//energy threshold
  double _barrelRadius;		//radius of EMC barrel
  double _resFactor;		//multiplier for angular resolution
  double _thtMin;		//polar angle coverage min angle
  double _thtMax;	  	//polar angle coverage max angle
  double _radiationLength;      //material budget
  double _phiMin;       //angle coverage min
  double _phiMax;       //angle coverage max
  double _Bfield;
  double _Length; //cm 

};

#endif
