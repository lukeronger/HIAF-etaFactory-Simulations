#ifndef CHNSEMCPARTICLE_H
#define CHNSEMCPARTICLE_H 1

#include "FairHit.h"
#include "FairTimeStamp.h"

#include <TObject.h>
#include <TVector3.h>
#include <vector>
using namespace std;

class ChnsEmcParticle : public FairTimeStamp  // seems FairTimeStamp better than FairHit(too many un-used branch)
{

	public:
		/** Default constructor **/
		ChnsEmcParticle();

		ChnsEmcParticle(
				Double_t Px,
				Double_t Py,
				Double_t Pz,
				Double_t E,
				Int_t PdgCode,
				Double_t Mass
				);

		/** Destructor **/
		virtual ~ChnsEmcParticle();

		/** Accessors **/

		/*
		   Int_t GetMCTruthPoints() const { return fMCTruthPoints; };
		   Int_t GetMCPoints_store() const { return fMCPoints_store; };
		   vector<Int_t> GetPdgCode() const { return fPdgCode; };  //if &GetPdgCode() ????
		   vector<Double_t> GetPx() const { return fPx; };
		   vector<Double_t> GetPy() const { return fPy; };
		   vector<Double_t> GetPz() const { return fPz; };
		   vector<Double_t> GetX() const { return fX; };
		   vector<Double_t> GetY() const { return fY; };
		   vector<Double_t> GetZ() const { return fZ; };
		   vector<Double_t> GetEnergy() const { return fEnergy; };
		   Int_t GetNblocks() const { return fNblocks; };
		   Int_t GetNblocksBarrel() const { return fNblocksBarrel; };
		   Int_t GetNblocksIon() const { return fNblocksIon; };
		   Int_t GetNblocksE() const { return fNblocksE; };
		   vector<Int_t> GetLocationID() const { return fLocationID; };
		   vector<Int_t> GetSegment() const { return fSegment; };
		   vector<Int_t> GetModule() const { return fModule; };
		   vector<Double_t> GetElossModule() const { return fElossModule; };
		   Double_t GetElossAll() const { return fElossAll; };
		 */

		/** Output to screen **/
		virtual void Print(const Option_t* opt) const;

	private:
		/** Copy constructor **/
		// important notice :: All private variable will be stored

		// MCTruth
		Double_t fPx;
		Double_t fPy;
		Double_t fPz;
		Double_t fE;
		Int_t fPdgCode;
		Double_t fMass;

		//Int_t fDetectorID;
		//Int_t fHit;
		ChnsEmcParticle(const ChnsEmcParticle& hit);
		ChnsEmcParticle operator=(const ChnsEmcParticle& hit);

		ClassDef(ChnsEmcParticle, 1);
};

#endif
