
#include "ChnsEmcDigi.h"

#include <iostream>
#include <vector>
using std::cout;
using std::endl;

// -----   Default constructor   -------------------------------------------
ChnsEmcDigi::ChnsEmcDigi()
	: FairTimeStamp()
{}
// -------------------------------------------------------------------------

// -----   Standard constructor   ------------------------------------------
ChnsEmcDigi::ChnsEmcDigi(
		//Int_t MCTruthPoints,
        //Int_t MCPoints_store,
        //vector<Int_t> PdgCode,
        //vector<Double_t> Px,
        //vector<Double_t> Py,
        //vector<Double_t> Pz,
        //vector<Double_t> X,
        //vector<Double_t> Y,
        //vector<Double_t> Z,
        //vector<Double_t> Energy,
        Int_t Nblocks,
		Int_t NblocksBarrel,
		Int_t NblocksIon,
		Int_t NblocksE,
        vector<Int_t> LocationID,
        vector<Int_t> Segment,
        vector<Int_t> Module,
        vector<Double_t> ElossModule,
		Double_t ElossAll
		)
{
	//fMCTruthPoints = MCTruthPoints;
	//fMCPoints_store = MCPoints_store;
	//fPdgCode = PdgCode;
	//fPx = Px;
	//fPy = Py;
	//fPz = Pz;
	//fX = X;
	//fY = Y;
	//fZ = Z;
	//fEnergy = Energy;
	fNblocks = Nblocks;
	fNblocksBarrel = NblocksBarrel;
	fNblocksIon = NblocksIon;
	fNblocksE = NblocksE;
	fLocationID = LocationID;
	fSegment = Segment;
	fModule = Module;
	fElossModule = ElossModule;
	fElossAll = ElossAll;
}
// -------------------------------------------------------------------------

// -----   Destructor   ----------------------------------------------------
ChnsEmcDigi::~ChnsEmcDigi() {}
// -------------------------------------------------------------------------

// -----   Public method Print   -------------------------------------------
void ChnsEmcDigi::Print(const Option_t* /*opt*/) const
{
	cout << "-I- ChnsEmcDigi: ChnsMvd hit for track " << endl;
}
// -------------------------------------------------------------------------

ClassImp(ChnsEmcDigi);
