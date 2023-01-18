/*
 * ChnsSimpleTrack.cpp
 *
 *  Created on: 05.03.2009
 *      Author: stockman
 */

#include "ChnsSimpleTrack.h"

ClassImp(ChnsSimpleTrack);

ChnsSimpleTrack::ChnsSimpleTrack(): 
	fTrackParam(),
	fTrackCand(),
	fChi2(0)
{
}


ChnsSimpleTrack::ChnsSimpleTrack(const FairTrackPar& param, const ChnsTrackCand& cand, const double& chi2):
  fTrackParam(param), fTrackCand(cand), fChi2(chi2)
{

	SetTimeStamp(cand.GetTimeStamp());
	SetTimeStampError(cand.GetTimeStampError());
}



void ChnsSimpleTrack::Print(){
  std::cout << "TrackParam" << std::endl;
  fTrackParam.Print();
}
