/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
#include "ChnsTpcPoint.h"

#include <iostream>
using std::cout;
using std::endl;

// -----   Default constructor   -------------------------------------------
ChnsTpcPoint::ChnsTpcPoint()
    : FairMCPoint()
{}
// -------------------------------------------------------------------------

// -----   Standard constructor   ------------------------------------------
ChnsTpcPoint::ChnsTpcPoint(Int_t trackID,
                                   Int_t detID,
                                   TVector3 pos,
                                   TVector3 mom,
                                   Double_t tof,
                                   Double_t length,
                                   Double_t eLoss,
				   Int_t eventId)
    : FairMCPoint(trackID, detID, pos, mom, tof, length, eLoss, eventId)
{}
// -------------------------------------------------------------------------

// -----   Destructor   ----------------------------------------------------
ChnsTpcPoint::~ChnsTpcPoint() {}
// -------------------------------------------------------------------------

// -----   Public method Print   -------------------------------------------
void ChnsTpcPoint::Print(const Option_t* /*opt*/) const
{
    cout << "-I- ChnsTpcPoint: ChnsTpc point for track " << fTrackID << " in detector " << fDetectorID << endl;
    cout << "    Position (" << fX << ", " << fY << ", " << fZ << ") cm" << endl;
    cout << "    Momentum (" << fPx << ", " << fPy << ", " << fPz << ") GeV" << endl;
    cout << "    Time " << fTime << " ns,  Length " << fLength << " cm,  Energy loss " << fELoss * 1.0e06 << " keV"
         << endl;
}
// -------------------------------------------------------------------------

ClassImp(ChnsTpcPoint);
