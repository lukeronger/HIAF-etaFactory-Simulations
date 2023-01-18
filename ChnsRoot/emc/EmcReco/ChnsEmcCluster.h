#ifndef CHNSEMCCLUSTER_H
#define CHNSEMCCLUSTER_H 1

#include "FairTimeStamp.h"

#include <TObject.h>
#include <TVector3.h>
#include <vector>
using namespace std;

class ChnsEmcCluster : public FairTimeStamp  // seems FairTimeStamp better than FairHit(too many un-used branch)
{

	public:
		/** Default constructor **/
		ChnsEmcCluster();

		ChnsEmcCluster(   //why indent 2 "\t" ???
				Double_t EnergyCluster,
				Double_t Theta,
				Double_t Phi,
				Int_t LocationID,
				Int_t Nblocks,
				vector<Int_t> BlockID, // n_segment*100+ n_module
				vector<Double_t>  BlockEnergy
				);

		/** Destructor **/
		virtual ~ChnsEmcCluster();

		/** Accessors **/
		Double_t GetEnergyCluster()  const { return fEnergyCluster; };
        Double_t GetTheta() const { return fTheta; };
        Double_t GetPhi() const { return fPhi; };
        Int_t GetLocationID() const { return fLocationID; };
        Int_t GetNblocks() const { return fNblocks; };
        vector<Int_t> GetBlockID() const { return fBlockID; }; // n_segment*100+ n_module
        vector<Double_t> GetBlockEnergy() const { return fBlockEnergy; };

		/** Output to screen **/
		virtual void Print(const Option_t* opt) const;

	private:
		/** Copy constructor **/
		// important notice :: All private variable will be stored

		Double_t fEnergyCluster;
		Double_t fTheta;
		Double_t fPhi;
		Int_t fLocationID;
		Int_t fNblocks;
		vector<Int_t> fBlockID; // n_segment*100+ n_module
		vector<Double_t> fBlockEnergy;

		ChnsEmcCluster(const ChnsEmcCluster& hit);
		ChnsEmcCluster operator=(const ChnsEmcCluster& hit);

		ClassDef(ChnsEmcCluster, 1);
};

#endif
