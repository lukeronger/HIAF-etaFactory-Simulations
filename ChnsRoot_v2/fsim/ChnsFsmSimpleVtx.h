//--------------------------------------------------------------------------
// File and Version Information:
//      $Id: ChnsFsmSimpleVtx.hh,v 1.4 2006/08/10 09:58:41 klausg Exp $
//
// Description:
//      Class ChnsFsmSimpleVtx
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

#ifndef CHNSFSMSIMPLEVTX_H
#define CHNSFSMSIMPLEVTX_H

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

class ChnsFsmSimpleVtx: public ChnsFsmAbsDet
{
public:

  //--------------------
  // Public interface --
  //--------------------

  //
  // Constructors
  //

  /** Default ctor. */
  ChnsFsmSimpleVtx();
  ChnsFsmSimpleVtx(ArgList &par);
  /** Destructor
   */
  virtual ~ChnsFsmSimpleVtx();

  /**
      Accessors to contained information
  */

  virtual ChnsFsmResponse* respond(ChnsFsmTrack *t);

private:
  bool   detected(ChnsFsmTrack *t) const;

  void   initParameters();
  void   print(std::ostream &o);
  bool   setParameter(std::string &name, double value);

  //
  //  Modifiers
  //

  double _thtMin;
  double _thtMax;
  double _ptmin;
  double _vtxRes;               //vertex resolution dx,dy,dz
};

#endif
