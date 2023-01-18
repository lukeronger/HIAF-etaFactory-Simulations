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

// Panda Headers ----------------------
#include <iostream>

// This Class' Header ------------------
#include "ChnsTrackID.h"

using std::cout;
using std::endl;

ClassImp(ChnsTrackID);

ChnsTrackID::ChnsTrackID() :
  fTrackID(-1),
  fCorrTrackIds(0),
  fMultTrackIds(0)
{}

ChnsTrackID::ChnsTrackID(Int_t id, TArrayI track, TArrayI mult) :
  fTrackID(id),
  fCorrTrackIds(track),
  fMultTrackIds(mult)
{}

ChnsTrackID::~ChnsTrackID(){
}

void ChnsTrackID::Reset()
{
  fCorrTrackIds.Reset();
  fMultTrackIds.Reset();
}

void ChnsTrackID::Print()
{
  std::cout << "ChnsTrackID::Print() - ChnsTrackID: " << fTrackID << "\tNumber of correlated MCTrack ids: " << GetNCorrTrackId() << std::endl;
  for(Int_t ii=0; ii<GetNCorrTrackId(); ++ii)
    {
      std::cout << " *** At: " << ii
		<< "\t MCTrack ID: " << fCorrTrackIds[ii]
		<< "\t Multiplicity: " << fMultTrackIds[ii]
		<< std::endl;
  }
}
