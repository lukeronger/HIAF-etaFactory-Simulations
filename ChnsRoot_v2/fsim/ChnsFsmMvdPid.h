//--------------------------------------------------------------------------
// File and Version Information:
//      $Id: ChnsFsmMvdPid.hh,v 1.4 2006/08/10 09:58:41 klausg Exp $
//
// Description:
//      Class ChnsFsmMvdPid
//
//  Implementation of the MVD for the Fast Sim Detectors
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

#ifndef CHNSFSMMVDPID_H
#define CHNSFSMMVDPID_H

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

class ChnsFsmMvdPid: public ChnsFsmAbsDet
{
public:

  //--------------------
  // Public interface --
  //--------------------

  //
  // Constructors
  //

  /** Default ctor. */
  ChnsFsmMvdPid();
  ChnsFsmMvdPid(ArgList &par);
  /** Destructor
   */
  virtual ~ChnsFsmMvdPid();

  /**
      Accessors to contained information
  */

  virtual ChnsFsmResponse* respond(ChnsFsmTrack *t);

private:
  bool   detected(ChnsFsmTrack *t) const;

  void   initParameters();
  void   print(std::ostream &o);
  bool   setParameter(std::string &name, double value);

  double _thtMin;
  double _thtMax;
  double _ptmin;
  double _dEdxResMulti;

  enum {nPidType = 5};
  enum PidType {
    electron,
    muon,
    pion,
    kaon,
    proton
  };

  double MeanEnergyLoss(PidType particle);
  double LandauGaus(double s_mpv, double width1, double width2);
  double Likelihood(PidType particle);
  double mpv(PidType particle);
  double width1(PidType particle);
  double width2(PidType particle);

  double _momentum;
  double _energyloss;

};

#endif
