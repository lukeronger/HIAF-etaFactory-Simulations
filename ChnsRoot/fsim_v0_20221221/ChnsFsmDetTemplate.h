//--------------------------------------------------------------------------
// Description:
//      Class ChnsFsmDetTemplate
//      
//  Template class for a Fast Sim Detectors 
//
//  This software was developed for the PANDA collaboration.  If you
//  use all or part of it, please give an appropriate acknowledgement.
//
// Author List:
//      Klaus Goetzen                    Original Author
//
// Copyright Information:
//      Copyright (C) 2008              GSI
//
//------------------------------------------------------------------------

#ifndef CHNSFSMDETTEMPLATE_H
#define CHNSFSMDETTEMPLATE_H

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

class ChnsFsmDetTemplate: public ChnsFsmAbsDet
{
public:

  //--------------------
  // Public interface --
  //--------------------

  //
  // Constructors
  //

  /** Default ctor. */
  ChnsFsmDetTemplate();
  ChnsFsmDetTemplate(ArgList &par);
  /** Destructor
   */
  virtual ~ChnsFsmDetTemplate();

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
  double _ptmin;

  double _pRes;
  double _thtRes;
  double _phiRes;
  
};

#endif
