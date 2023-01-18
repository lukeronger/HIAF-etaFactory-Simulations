//--------------------------------------------------------------------------
// File and Version Information:
//      $Id: ChnsFsmTpcPid.hh,v 1.6 2006/10/05 14:05:53 aida Exp $
//
// Description:
//      Class ChnsFsmTpcPid
//
//  Implementation of the TPC for the Fast Sim Detectors
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

#ifndef CHNSFSMTPCPID_H
#define CHNSFSMTPCPID_H

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

class ChnsFsmTpcPid: public ChnsFsmAbsDet
{
public:

  //--------------------
  // Public interface --
  //--------------------

  //
  // Constructors
  //

  /** Default ctor. */
  ChnsFsmTpcPid();
  ChnsFsmTpcPid(ArgList &par);
  /** Destructor
   */
  virtual ~ChnsFsmTpcPid();

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
