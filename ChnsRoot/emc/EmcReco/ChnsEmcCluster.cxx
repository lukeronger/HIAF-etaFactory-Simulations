#include "ChnsEmcCluster.h"

#include <iostream>
#include <vector>
using std::cout;
using std::endl;

// -----   Default constructor   -------------------------------------------
ChnsEmcCluster::ChnsEmcCluster()
	: FairTimeStamp()
{}
// -------------------------------------------------------------------------

// -----   Standard constructor   ------------------------------------------
ChnsEmcCluster::ChnsEmcCluster(
		Double_t EnergyCluster,
		Double_t Theta,
		Double_t Phi,
		Int_t LocationID,
		Int_t Nblocks,
		vector<Int_t> BlockID, // n_segment*100+ n_module
		vector<Double_t> BlockEnergy
		)
{
	fEnergyCluster = EnergyCluster;
	fTheta = Theta;
	fPhi = Phi;
	fLocationID = LocationID;
	fNblocks = Nblocks;
	fBlockID = BlockID;
	fBlockEnergy = BlockEnergy;
}
// -------------------------------------------------------------------------

// -----   Destructor   ----------------------------------------------------
ChnsEmcCluster::~ChnsEmcCluster() {}
// -------------------------------------------------------------------------

// -----   Public method Print   -------------------------------------------
void ChnsEmcCluster::Print(const Option_t* /*opt*/) const
{
	cout << "-I- ChnsEmcCluster: ChnsMvd hit for track " << endl;
}
// -------------------------------------------------------------------------

ClassImp(ChnsEmcCluster);
