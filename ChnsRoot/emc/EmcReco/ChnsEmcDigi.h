#ifndef CHNSEMCDIGI_H
#define CHNSEMCDIGI_H 1

#include "FairHit.h"
#include "FairTimeStamp.h"

#include <TObject.h>
#include <TVector3.h>
#include <vector>
using namespace std;

class ChnsEmcDigi : public FairTimeStamp  // seems FairTimeStamp better than FairHit(too many un-used branch)
{

	public:
		/** Default constructor **/
		ChnsEmcDigi();

		ChnsEmcDigi(
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
				vector<Double_t> ElossMmodule,
				Double_t ElossAll
				);

		/** Destructor **/
		virtual ~ChnsEmcDigi();

		/** Accessors **/
		//Int_t GetMCTruthPoints() const { return fMCTruthPoints; };
		//Int_t GetMCPoints_store() const { return fMCPoints_store; };
		//vector<Int_t> GetPdgCode() const { return fPdgCode; };  //if &GetPdgCode() ????
		//vector<Double_t> GetPx() const { return fPx; };
		//vector<Double_t> GetPy() const { return fPy; };
		//vector<Double_t> GetPz() const { return fPz; };
		//vector<Double_t> GetX() const { return fX; };
		//vector<Double_t> GetY() const { return fY; };
		//vector<Double_t> GetZ() const { return fZ; };
		//vector<Double_t> GetEnergy() const { return fEnergy; };
		Int_t GetNblocks() const { return fNblocks; };
		Int_t GetNblocksBarrel() const { return fNblocksBarrel; };
		Int_t GetNblocksIon() const { return fNblocksIon; };
		Int_t GetNblocksE() const { return fNblocksE; };
		vector<Int_t> GetLocationID() const { return fLocationID; };
		vector<Int_t> GetSegment() const { return fSegment; };
		vector<Int_t> GetModule() const { return fModule; };
		vector<Double_t> GetElossModule() const { return fElossModule; };
		Double_t GetElossAll() const { return fElossAll; };

		/** Output to screen **/
		virtual void Print(const Option_t* opt) const;

	private:
		/** Copy constructor **/
		// important notice :: All private variable will be stored

		// MCTruth
		//Int_t fMCTruthPoints;
		//Int_t fMCPoints_store;
		//vector<Int_t> fPdgCode;
		//vector<Double_t> fPx;
		//vector<Double_t> fPy;
		//vector<Double_t> fPz;
		//vector<Double_t> fX;
		//vector<Double_t> fY;
		//vector<Double_t> fZ;
		//vector<Double_t> fEnergy;
		Int_t fNblocks;
		Int_t fNblocksBarrel;
		Int_t fNblocksIon;
		Int_t fNblocksE;
		vector<Int_t> fLocationID;
		vector<Int_t> fSegment;
		vector<Int_t> fModule;
		vector<Double_t> fElossModule;
		Double_t fElossAll;

		//Int_t fDetectorID;
		//Int_t fHit;
		ChnsEmcDigi(const ChnsEmcDigi& hit);
		ChnsEmcDigi operator=(const ChnsEmcDigi& hit);

		ClassDef(ChnsEmcDigi, 1);
};

#endif
