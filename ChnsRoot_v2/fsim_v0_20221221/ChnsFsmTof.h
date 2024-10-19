//--------------------------------------------------------------------------
// File and Version Information:
//      $Id: FsmTof.hh,v 1.1 2006/10/05 14:05:53 aida Exp $
//
// Description:
//      Class FsmTof
//      
//  Implementation of the barrel Tof for the Fast Sim Detectors 
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

#ifndef CHNSFSMTOF_H
#define CHNSFSMTOF_H

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

class ChnsFsmTof: public ChnsFsmAbsDet
{
public:

  //--------------------
  // Public interface --
  //--------------------

  //
  // Constructors
  //

  /** Default ctor. */
  ChnsFsmTof();
  ChnsFsmTof(ArgList &par);
  /** Destructor
   */
  virtual ~ChnsFsmTof();

  /**
      Accessors to contained information
  */
  
  virtual ChnsFsmResponse* respond(ChnsFsmTrack *t);
private:
  
  bool   detected(ChnsFsmTrack *t) const;
  double gauss_t(double x, double x0, double s);
   
  void   initParameters();
  void   print(std::ostream &o);
  bool   setParameter(std::string &name, double value);
  //
  //  Modifiers
  //
     
  double _thtMin;               // spatial coverage
  double _thtMax;               //    "
  double _radiationLength;      // material budget
  double _pmin;
  double _Bfield;               // B field strength [T]
  double _rBarrel;              // radius of Tof barrel
  double _dSlab;                // thickness of radiator bars/slabs
  double _dp;                    // distortion of momentum
  double _dt;                    // time res
};

#endif
