//--------------------------------------------------------------------------
// File and Version Information:
//      $Id: FsmDetFactory.hh,v 1.5 2006/07/24 14:27:17 steinke Exp $
//
// Description:
//      Class FsmDetFactory
//      
//  Factory  for Fast Sim Detectors 
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

#ifndef CHNSFSMDETFACTORY_H
#define CHNSFSMDETFACTORY_H

//----------------------
// Base Class Headers --
//----------------------

//-------------------------------
// Collaborating class Headers --
//-------------------------------

//---------------
// C++ Headers --
//---------------
#include <string>
#include "ArgList.h"
//--------------------------------------------
// Collaborating class forward declarations --
// -------------------------------------------

class ChnsFsmAbsDet;

class ChnsFsmDetFactory
{
public:

  //--------------------
  // Public interface --
  //--------------------

  //
  // Constructors
  //

  // Default ctor.
  ChnsFsmDetFactory();
  
  // Destructor
  ~ChnsFsmDetFactory();
  
  // Accessors to contained information
  ChnsFsmAbsDet* create(std::string &name,ArgList &par);
  ChnsFsmAbsDet* create(std::string &name, std::string par);
  
  //
  //  Modifiers
  //
     
private:
  
};

#endif
