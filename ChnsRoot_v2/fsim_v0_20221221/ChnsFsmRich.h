//--------------------------------------------------------------------------
// File and Version Information:
//      $Id: FsmRich.hh,v 1.1 2007/05/24 08:07:40 klausg Exp $
//
// Description:
//      Class FsmRich
//      
//  Implementation of the far forward RICH for the Fast Sim Detectors 
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

#ifndef CHNSFSMRICH_H
#define CHNSFSMRICH_H

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

class ChnsFsmRich: public ChnsFsmAbsDet
{
public:

  //--------------------
  // Public interface --
  //--------------------

  //
  // Constructors
  //

  /** Default ctor. */
  ChnsFsmRich();
  ChnsFsmRich(ArgList &par);
  /** Destructor
   */
  virtual ~ChnsFsmRich();

  /**
      Accessors to contained information
  */
  
  virtual ChnsFsmResponse* respond(ChnsFsmTrack *t);
  
private:
  bool   detected(ChnsFsmTrack *t) const;
  double compThetaC(double p, double m);
  double gauss(double x, double x0, double s);
   
   
  void   initParameters();
  void   print(std::ostream &o);
  bool   setParameter(std::string &name, double value);
  //
  //  Modifiers
  //
     
  double _angleXMax;
  double _angleYMax;
  double _angleMin;
  double _angleMax;
  double _radiationLength;      // material budget
  double _pmin;                 // minimum p_t to reach DIRC
  double _dthtc;                // resolution for tht_C for single photon (-> res=dthtc/sqrt(nPhot) ) 
  double _nPhotMin;             // minimum number of photons cutoff
  double _nRefrac;              // refraction index of radiator
  double _Bfield;               // B field strength [T]
  double _effNPhotons;          // overall efficiency for photon detection
  double _dRich;                // thickness of radiator 
  double _dp;                   // accuracy of momentum measurement
};

#endif
