//////////////////////////////////////////////////////////////////////////
//                                                                      //
// ChnsPidBremCorrected4Mom	                                        //
//                                                                      //
// Container for Bremstrahlung radiaton corrected momentum              //
//                                                                      //
// Author: Klaus Goetzen, GSI, 12.06.08		                        //
// Copyright (C) 2008, GSI Darmstadt.		         		//
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "ChnsPidBremCorrected4Mom.h"

ChnsPidBremCorrected4Mom::ChnsPidBremCorrected4Mom():
  fXmomentum(0.),
  fYmomentum(0.),
  fZmomentum(0.),
  fEnergy(0.),
  fPidCandIdx(-1),
  fPhiBumpList(),
  fSepBumpList()
{
  fPhiBumpList.clear();
  fSepBumpList.clear();
}

ChnsPidBremCorrected4Mom::ChnsPidBremCorrected4Mom(TLorentzVector &p4) :
  fXmomentum(p4.X()),
  fYmomentum(p4.Y()),
  fZmomentum(p4.Z()),
  fEnergy(p4.E()),
  fPidCandIdx(-1),
  fPhiBumpList(),
  fSepBumpList()
{
  fPhiBumpList.clear();
  fSepBumpList.clear();
}

ChnsPidBremCorrected4Mom::~ChnsPidBremCorrected4Mom() {

}

ClassImp(ChnsPidBremCorrected4Mom)
