//-----------------------------------------------------------
// File and Version Information:
// $Id$
//
// Description:
//      Implementation of class ChnsTrackID
//
// Environment:
//      Software developed for the PANDA Detector at FAIR.
//
// Author List:
//      01/07/09 - Stefano Spataro (Torino)
//
//
//-----------------------------------------------------------

#ifndef CHNSTRACKID_HH
#define CHNSTRACKID_HH

// Root Class Headers ----------------
#include "TObject.h"
#include "TArrayI.h"

class ChnsTrackID : public TObject {
public:

  // Constructors/Destructors ---------
  ChnsTrackID();
  ChnsTrackID(const Int_t id, const TArrayI track, const TArrayI mult);
  ~ChnsTrackID();

  // Accessors -----------------------
  Int_t   GetTrackID()              const { return fTrackID; }
  Short_t GetNCorrTrackId(void)     const { return fCorrTrackIds.GetSize(); }
  Int_t   GetCorrTrackID(Int_t i=0) const { return fCorrTrackIds[i]; }
  Int_t   GetMultTrackID(Int_t i=0) const { return fMultTrackIds[i]; }
  
  //void Sort();  // not implemented

  // Modifiers -----------------------
  void   SetTrackID(Int_t id)             { fTrackID = id; }
  void   SetCorrTrackID(const TArrayI track, const TArrayI mult) { fCorrTrackIds = track;  fMultTrackIds = mult; }
  
  void Reset();

  void Print();

private:

  // Private Data Members ------------
  Int_t   fTrackID;                    // Index of ChnsTrack TCA
  TArrayI fCorrTrackIds;               // A unique list of correlated Ids
  TArrayI fMultTrackIds;               // A unique list of multiplicity of correlated Ids
	  
public:
  ClassDef(ChnsTrackID,1)
};

#endif

//--------------------------------------------------------------
// $Log$
//--------------------------------------------------------------
