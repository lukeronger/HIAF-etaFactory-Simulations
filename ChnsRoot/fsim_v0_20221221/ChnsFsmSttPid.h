//--------------------------------------------------------------------------
// File and Version Information:
//      $Id: ChnsFsmSttPid.hh,v 1.6 2006/10/05 14:05:53 aida Exp $
//
// Description:
//      Class ChnsFsmSttPid
//
//  Implementation of the STT for the Fast Sim Detectors
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

#ifndef CHNSFSMSTTPID_H
#define CHNSFSMSTTPID_H

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

class ChnsFsmSttPid: public ChnsFsmAbsDet
{
public:

  //--------------------
  // Public interface --
  //--------------------

  //
  // Constructors
  //

  /** Default ctor. */
  ChnsFsmSttPid();
  ChnsFsmSttPid(ArgList &par);
  /** Destructor
   */
  virtual ~ChnsFsmSttPid();

  /**
      Accessors to contained information
  */

  virtual ChnsFsmResponse* respond(ChnsFsmTrack *t);

private:
  bool   detected(ChnsFsmTrack *t) const;

  double compdEdx(double p, double M);
  double gauss(double x, double x0, double s);

  void   initParameters();
  void   print(std::ostream &o);
  bool   setParameter(std::string &name, double value);

  double _thtMin;
  double _thtMax;
  double _ptmin;
  double _dEdxRes;

};

#endif
