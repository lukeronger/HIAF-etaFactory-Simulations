//--------------------------------------------------------------------------
// File and Version Information:
//      $Id: ChnsFsmIdealPid.h $
//
// Description:
//      Class ChnsFsmIdealPid
//
//  Implementation of the Montecarlo true PID for the Fast Sim Detectors
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

#ifndef CHNSFSMIDEALPID_H
#define CHNSFSMIDEALPID_H

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

class ChnsFsmIdealPid: public ChnsFsmAbsDet
{
public:

  //--------------------
  // Public interface --
  //--------------------

  //
  // Constructors
  //

  /** Default ctor. */
  ChnsFsmIdealPid();
  ChnsFsmIdealPid(ArgList &par);
  /** Destructor
   */
  virtual ~ChnsFsmIdealPid();

  /**
      Accessors to contained information
  */

  virtual ChnsFsmResponse* respond(ChnsFsmTrack *t);

private:
  bool   detected(ChnsFsmTrack *t) const;
  void   initParameters();
  void   print(std::ostream &o);
  bool   setParameter(std::string &name, double value);
  bool   readParameters();
};

#endif
