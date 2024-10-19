//--------------------------------------------------------------------------
// File and Version Information:
//      $Id: FsmEmcBarrel.cc,v 1.11 2007/05/24 08:07:40 klausg Exp $
//
// Description:
//      Class FsmEmcPid
//
//  Implementation of the PID info for EMCs
//
//  This software was developed for the PANDA collaboration.  If you
//  use all or part of it, please give an appropriate acknowledgement.
//
// Author List:
//      Klaus Goetzen                    Original Author
//
// Copyright Information:
//      Copyright (C) 2014              GSI
//
//------------------------------------------------------------------------

#ifndef CHNSFSMEMCPID_H
#define CHNSFSMEMCPID_H

//----------------------
// Base Class Headers --
//----------------------

//-------------------------------
// Collaborating class Headers --
//-------------------------------
#include <iosfwd>
#include "ArgList.h"
#include "ChnsFsmAbsDet.h"
#include "TH2F.h"

//--------------------------------------------
// Collaborating class forward declarations --
// -------------------------------------------
class ChnsFsmTrack;
class ChnsFsmResponse;

class ChnsFsmEmcPid: public ChnsFsmAbsDet
{
public:

  //--------------------
  // Public interface --
  //--------------------

  //
  // Constructors
  //

  /** Default ctor. */
  ChnsFsmEmcPid();
  ChnsFsmEmcPid(ArgList &par);
  /** Destructor
   */
  virtual ~ChnsFsmEmcPid();

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

  //
  //  Parameters
  //
  TH2F   *_emcPidPdf[6];

  double _pmin;			//momentum threshold
  double _ptmin;		//transverse momentum threshold
  double _thtMin;		//polar angle coverage min angle
  double _thtMax;	  	//polar angle coverage max angle
  double _phiMin;       //angle coverage min
  double _phiMax;       //angle coverage max

  std::string _parFileName;     //this file contains root histograms with the EMC pdfs
};

#endif
