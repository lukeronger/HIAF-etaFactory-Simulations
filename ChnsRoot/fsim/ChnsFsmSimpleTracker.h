//--------------------------------------------------------------------------
// Description:
//      Class ChnsFsmSimpleTracker
//
//  Example Tracker for the PANDA Fast Sim Detectors
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

#ifndef CHNSFSMSIMPLETRACKER_H
#define CHNSFSMSIMPLETRACKER_H

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

class ChnsFsmSimpleTracker: public ChnsFsmAbsDet
{
public:

  //--------------------
  // Public interface --
  //--------------------

  //
  // Constructors
  //

  /** Default ctor. */
  ChnsFsmSimpleTracker();
  ChnsFsmSimpleTracker(ArgList &par);
  /** Destructor
   */
  virtual ~ChnsFsmSimpleTracker();

  /**
      Accessors to contained information
  */

  virtual ChnsFsmResponse* respond(ChnsFsmTrack *t);

protected:
  bool   detected(ChnsFsmTrack *t) const;
  double dp(ChnsFsmTrack *t) const;
  double dphi(ChnsFsmTrack *t) const;
  double dtheta(ChnsFsmTrack *t) const;

  virtual void initParameters();
  void   print(std::ostream &o);
  bool   setParameter(std::string &name, double value);

  //
  //  Modifiers
  //

  double _thtMin;
  double _thtMax;
  double _pmin;
  double _ptmin;

  double _pRes;
  double _thtRes;
  double _phiRes;

};

#endif
