//--------------------------------------------------------------------------
// File and Version Information:
//      $Id: FsmMdcFS.hh,v 1.3 2006/07/13 10:43:45 klausg Exp $
//
// Description:
//      Class FsmMdcFS
//      
//  Implementation of the MDCs system (DC3-DC8) in the Forward Spectormeter for the Fast Sim Detectors 
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

#ifndef CHNSFSMMDCFS_H
#define CHNSFSMMDCFS_H

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

class ChnsFsmMdcFS: public ChnsFsmAbsDet
{
public:

  //--------------------
  // Public interface --
  //--------------------

  //
  // Constructors
  //

  /** Default ctor. */
  ChnsFsmMdcFS();
  ChnsFsmMdcFS(ArgList &par);
  /** Destructor
   */
  virtual ~ChnsFsmMdcFS();

  /**
      Accessors to contained information
  */
  
  virtual ChnsFsmResponse* respond(ChnsFsmTrack *t);
  
private:
  bool   detected(ChnsFsmTrack *t) const;
  double dp(ChnsFsmTrack *t) const;
  double dphi(ChnsFsmTrack *t) const;
  double dtheta(ChnsFsmTrack *t) const;
   
  void   initParameters();
  void   print(std::ostream &o);
  bool   setParameter(std::string &name, double value);

  //
  //  Modifiers
  //
     
  double _thtMin;
  double _thtMax;
  double _angleXMax;
  double _angleYMax;
  double _radiationLength;      //material budget
  double _pmin;
  
  double _a1Par;
  double _a2Par;
  double _Bl;
};

#endif
