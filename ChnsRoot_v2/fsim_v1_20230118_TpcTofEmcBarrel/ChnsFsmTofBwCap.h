//--------------------------------------------------------------------------
// File and Version Information:
//      $Id: FsmTofBwCap.hh,v 1.1 2018/11/16 16:18:00 aida Exp $
//
// Description:
//      Class FsmTofBwCap
//      
//  Implementation of the Backward Tof for the Fast Sim Detectors 
//
//  This software was developed for the EicC collaboration.  If you
//  use all or part of it, please give an appropriate acknowledgement.
//
// Author List:
//      Yutie Liang                    Original Author
//
// Copyright Information:
//      Copyright (C) 2018              IMP
//
//------------------------------------------------------------------------

#ifndef CHNSFSMTOFBWCAP_H
#define CHNSFSMTOFBWCAP_H

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

class ChnsFsmTofBwCap: public ChnsFsmAbsDet
{
public:

  //--------------------
  // Public interface --
  //--------------------

  //
  // Constructors
  //

  /** Default ctor. */
  ChnsFsmTofBwCap();
  ChnsFsmTofBwCap(ArgList &par);
  /** Destructor
   */
  virtual ~ChnsFsmTofBwCap();

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
  double _distToZero;              // distance of the bwTof to collision point
  double _dSlab;                // thickness of radiator bars/slabs
  double _dp;                    // distortion of momentum
  double _dt;                    // time res
};

#endif
