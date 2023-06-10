//--------------------------------------------------------------------------
// File and Version Information:
//      $Id: FsmEmcBwCap.hh,v 1.3 2006/07/13 10:43:45 klausg Exp $
//
// Description:
//      Class FsmEmcBwCap
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

#ifndef CHNSFSMEMCBWCAP_H
#define CHNSFSMEMCBWCAP_H

//----------------------
// Base Class Headers --
//----------------------

//-------------------------------
// Collaborating class Headers --
//-------------------------------
#include <iosfwd>
#include "ArgList.h"
#include "ChnsFsmAbsDet.h"

//--------------------------------------------
// Collaborating class forward declarations --
// -------------------------------------------
class ChnsFsmTrack;
class ChnsFsmResponse;

class ChnsFsmEmcBwCap: public ChnsFsmAbsDet
{
public:

  //--------------------
  // Public interface --
  //--------------------

  //
  // Constructors
  //

  /** Default ctor. */
  ChnsFsmEmcBwCap();
  ChnsFsmEmcBwCap(ArgList &par);
  /** Destructor
   */
  virtual ~ChnsFsmEmcBwCap();

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
  //
  //  Modifiers
  //
     
  double _aPar;
  double _bPar;
  double _cPar;
  double _xtalDim;
  double _Emin;
  double _dist;
  double _resFactor;
  double _thtMin;
  double _thtMax;	  
  double _radiationLength;      //material budget
  		  
};

#endif
