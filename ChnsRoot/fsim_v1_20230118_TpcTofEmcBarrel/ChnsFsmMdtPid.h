//--------------------------------------------------------------------------
// File and Version Information:
//      $Id: ChnsFsmMdtPid.hs $
//
// Description:
//      Class ChnsFsmMdtPid
//
//  Implementation of the MDT for the Fast Sim Detectors
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

#ifndef CHNSFSMMDTPID_H
#define CHNSFSMMDTPID_H

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
class TH3F;

class ChnsFsmMdtPid: public ChnsFsmAbsDet
{
public:

  //--------------------
  // Public interface --
  //--------------------

  //
  // Constructors
  //

  /** Default ctor. */
  ChnsFsmMdtPid();
  ChnsFsmMdtPid(ArgList &par);
  /** Destructor
   */
  virtual ~ChnsFsmMdtPid();

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

  TH3F   *_mdtPidPdf[6];
  
  double _thtMin;
  double _thtMax;
  double _pmin;
  double _misId;
  
  bool _useFlat;

  std::string _parFileName;     //this file contains root histograms with the MDT pdfs
};

#endif
