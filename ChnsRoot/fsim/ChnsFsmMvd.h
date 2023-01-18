//--------------------------------------------------------------------------
// File and Version Information:
//      $Id: FsmMvd.hh,v 1.4 2006/08/10 09:58:41 klausg Exp $
//
// Description:
//      Class FsmMvd
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

#ifndef CHNSFSMMVD_H
#define CHNSFSMMVD_H

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

class ChnsFsmMvd: public ChnsFsmAbsDet
{
public:

  //--------------------
  // Public interface --
  //--------------------

  //
  // Constructors
  //

  /** Default ctor. */
  ChnsFsmMvd();
  ChnsFsmMvd(ArgList &par);
  /** Destructor
   */
  virtual ~ChnsFsmMvd();

  /**
      Accessors to contained information
  */
  
  virtual ChnsFsmResponse* respond(ChnsFsmTrack *t);
  
private:
  bool   detected(ChnsFsmTrack *t) const;
  double dp(ChnsFsmTrack *t) const;
  double dphi(ChnsFsmTrack *t) const;
  double dtheta(ChnsFsmTrack *t) const;
  
  double compdEdx(double p, double M);
  double gauss(double x, double x0, double s);

  void   initParameters();
  void   print(std::ostream &o);
  bool   setParameter(std::string &name, double value);
   
  //
  //  Modifiers
  //
     
  double _thtMin;
  double _thtMax;
  double _radiationLength;      //material budget
  double _pmin;
  double _vtxRes;               //vertex resolution dx,dy,dz
  double _pRes;
  double _phiRes;
  double _thetaRes;
  double _dEdxRes;
};

#endif
