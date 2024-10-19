
#include "ChnsEmcPoint.h"

#include <iostream>
using std::cout;
using std::endl;

// -----   Default constructor   -------------------------------------------
ChnsEmcPoint::ChnsEmcPoint()
    : FairMCPoint()
{}
// -------------------------------------------------------------------------

// -----   Standard constructor   ------------------------------------------
ChnsEmcPoint::ChnsEmcPoint(
								Int_t trackID,
                                   Int_t detID,
                                   TVector3 pos,
                                   TVector3 mom,
                                   Double_t tof,
                                   Double_t length,
                                   Double_t eLoss,
								   Int_t eventID,
								   Int_t mod, Int_t segment, Int_t location,
								   Int_t copy // new variables
								   )
    : FairMCPoint(trackID, detID, pos, mom, tof, length, eLoss, eventID),
	nModule(mod), nSegment(segment), nLocation(location), nCopy(copy)
{}
// -------------------------------------------------------------------------

// -----   Destructor   ----------------------------------------------------
ChnsEmcPoint::~ChnsEmcPoint() {}
// -------------------------------------------------------------------------

// -----   Public method Print   -------------------------------------------
void ChnsEmcPoint::Print(const Option_t* /*opt*/) const
{
    cout << "-I- ChnsEmcPoint: ChnsEmc point for track " << fTrackID << " in detector " << fDetectorID << endl;
    cout << "    Position (" << fX << ", " << fY << ", " << fZ << ") cm" << endl;
    cout << "    Momentum (" << fPx << ", " << fPy << ", " << fPz << ") GeV" << endl;
    cout << "    Time " << fTime << " ns,  Length " << fLength << " cm,  Energy loss " << fELoss * 1.0e06 << " keV"
         << endl;
}
// -------------------------------------------------------------------------

ClassImp(ChnsEmcPoint);
