/*
 * ChnsTrack.cpp
 *
 *  Created on: 05.03.2009
 *      Author: stockman
 */

#include "ChnsTrack.h"
#include "FairRootManager.h"

ClassImp(ChnsTrack);

ChnsTrack::ChnsTrack() :
	fTrackParamFirst(),
	fTrackParamLast(),
	fTrackCand(),
	fRefToChnsTrackCand(),
	fPidHypo(0),
	fFlag(0),
	fChi2(-1.),
	fNDF(0),
  fRefIndex(-1)
{
}


ChnsTrack::ChnsTrack(const FairTrackParP& first, const FairTrackParP& last, const ChnsTrackCand& cand, Int_t flag, Double_t chi2, Int_t ndf, Int_t pid, Int_t id, Int_t type):
  fTrackParamFirst(first), fTrackParamLast(last), fTrackCand(cand), fRefToChnsTrackCand(), fPidHypo(pid), fFlag(flag), fChi2(chi2), fNDF(ndf), fRefIndex(id)
{
	if (!(type < 0))
		SetLink(FairLink(-1, FairRootManager::Instance()->GetEntryNr(), type, id));
	if (cand.GetPointerToLinks() != 0)
		AddLinks(*cand.GetPointerToLinks());
	SetTimeStamp(cand.GetTimeStamp());
	SetTimeStampError(cand.GetTimeStampError());
}



void ChnsTrack::Print(){
  std::cout << "FirstTrackPar" << std::endl;
  fTrackParamFirst.Print();
  std::cout << "LastTrackPar" << std::endl;
  fTrackParamLast.Print();
  std::cout << "chi2 " << fChi2 << std::endl;
  std::cout << "ndf " << fNDF << std::endl;
  std::cout << "fRefIndex " << fRefIndex << std::endl;
}
