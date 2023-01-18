
#ifndef CHNSEMCPARTICLETASK_H
#define CHNSEMCPARTICLETASK_H

// Root includes
#include "TVector3.h"
#include "TRandom.h"
#include "TString.h"
#include "TGeoManager.h"

// framework includes
#include "FairTask.h"
//#include "FairMCTrack.h"

// ChnsMvd includes
#include "ChnsMCTrack.h"
#include "ChnsEmcCluster.h"
#include "ChnsEmcParticle.h"
//#include "ChnsGeoHandling.h"

//class ChnsMvdHit;
class TClonesArray;

class ChnsEmcParticleTask : public FairTask
{
	public:

		/** Default constructor **/
		ChnsEmcParticleTask();

		/** Destructor **/
		virtual ~ChnsEmcParticleTask();

		//???
		ChnsEmcParticleTask(const ChnsEmcParticleTask& ) = delete;
		ChnsEmcParticleTask& operator=(const ChnsEmcParticleTask& ) = delete;

		/** Virtual method Init **/
		virtual void SetParContainers();
		virtual InitStatus Init();

		/** Virtual method Exec **/
		virtual void Exec(Option_t* opt);

		void SetPersistance(Bool_t p = kTRUE){fPersistance=p;};
		Bool_t GetPersistance() {return fPersistance;};

	private:
		Bool_t fPersistance; // switch to turn on/off storing the arrays to a file

		Double_t sPx;
		Double_t sPy;
		Double_t sPz;
		Double_t sE;
		Int_t sPdgCode;
		Double_t sMass;

		TString fBranchName;
		//ChnsGeoHandling* fGeoH;
		/** Input array of Points **/
		TClonesArray* fPointArray;
		TClonesArray* fMctruthArray;

		/** Output array of Hits **/
		TClonesArray* fHitOutputArray;

		/** Properties **/
		ChnsEmcCluster* fCurrentChnsEmcCluster;
		ChnsMCTrack* fCurrentChnsMCTrack;

		void Register();
		void Reset();
		void ProduceHits();

		ClassDef(ChnsEmcParticleTask,1); //???

};

#endif
