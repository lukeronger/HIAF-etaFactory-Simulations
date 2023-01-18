
#ifndef CHNSEMCDIGITASK_H
#define CHNSEMCDIGITASK_H

// Root includes
#include "TVector3.h"
#include "TRandom.h"
#include "TString.h"
#include "TGeoManager.h"

// framework includes
#include "FairTask.h"
//#include "FairMCTrack.h"

// ChnsMvd includes
#include "ChnsEmcPoint.h"
#include "ChnsEmcDigi.h"
#include "ChnsMCTrack.h"
//#include "ChnsGeoHandling.h"
#include "par/ParEmcDetRe.h" 
#include "ChnsEmcReadPar.h"

//class ChnsMvdHit;
class TClonesArray;

class ChnsEmcDigiTask : public FairTask
{
	public:

		/** Default constructor **/
		ChnsEmcDigiTask();

		//ChnsMvdIdealDigiTask(Double_t sx, Double_t sy, Double_t sz);

		/** Destructor **/
		virtual ~ChnsEmcDigiTask();

		//???
		ChnsEmcDigiTask(const ChnsEmcDigiTask& ) = delete;
		ChnsEmcDigiTask& operator=(const ChnsEmcDigiTask& ) = delete;

		/** Virtual method Init **/
		virtual void SetParContainers();
		virtual InitStatus Init();

		/** Virtual method Exec **/
		virtual void Exec(Option_t* opt);

		void SetPersistance(Bool_t p = kTRUE){fPersistance=p;};
		Bool_t GetPersistance() {return fPersistance;};

	private:
		Bool_t fPersistance; // switch to turn on/off storing the arrays to a file

		TString fBranchName;
		//ChnsGeoHandling* fGeoH;
		/** Input array of Points **/
		TClonesArray* fPointArray;
		TClonesArray* fMctruthArray;

		/** Output array of Hits **/
		TClonesArray* fHitOutputArray;

		/** Properties **/
		ChnsEmcPoint* fCurrentChnsEmcPoint;
		ChnsMCTrack* fCurrentChnsMCTrack;

		ChnsEmcReadPar* RecoPar;
		Double_t Deposit_ratio_shashlik;
		Double_t Deposit_ratio_e;
		//static const Int_t N_segment_barrel;
		//static const Int_t N_module_barrel;
		//static const Int_t N_module_ion;
		//static const Int_t N_module_e;
		//Int_t N_layer;


		void Register();
		void Reset();
		void ProduceHits();

		ClassDef(ChnsEmcDigiTask,1); //???

};

#endif
