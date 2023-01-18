#include <iostream>

// Root includes
#include "TROOT.h"
#include "TClonesArray.h"
#include "TParticlePDG.h"
#include "TRandom.h"
#include "TGeoManager.h"
#include "TGeoMatrix.h"

// framework includes
#include "FairRootManager.h"
#include "FairRun.h"
#include "FairRuntimeDb.h"
//#include "ChnsMCTrack.h"
#include "FairHit.h"
// ChnsEmc includes
#include "ChnsEmcParticleTask.h"

using namespace std;

// -----   Default constructor   -------------------------------------------
ChnsEmcParticleTask::ChnsEmcParticleTask() :
	FairTask("Particle reconstruction task for ChnsEmc"),
	fPersistance(kTRUE),
	fBranchName("ChnsEmcCluster"),
	fPointArray(NULL),
	fMctruthArray(NULL),
	fHitOutputArray(NULL)
{
}
// -------------------------------------------------------------------------


// -----   Destructor   ----------------------------------------------------
ChnsEmcParticleTask::~ChnsEmcParticleTask()
{
}

// -----   Public method Init   --------------------------------------------
InitStatus ChnsEmcParticleTask::Init()
{
	// Get RootManager
	FairRootManager* ioman = FairRootManager::Instance();
	if ( ! ioman ) {
		std::cout << "-E- ChnsEmcParticleTask::Init: "
			<< "RootManager not instantiated!" << std::endl;
		return kFATAL;  }

	// Get input array
	fPointArray = (TClonesArray*) ioman->GetObject(fBranchName);
	if ( ! fPointArray ) {
		std::cout << "-W- ChnsEmcParticleTask::Init: "<< "No "<<fBranchName
			<<" array!" << std::endl;
		return kERROR;  }

	// Get MCTruth collection
	fMctruthArray=(TClonesArray*) ioman->GetObject("MCTrack");
	if(fMctruthArray==0)  {
		std::cout << "-W- ChnsEmcParticleTask::Init: No McTruth array!" << std::endl;
		return kERROR;  }

	// Create and register output array
	fHitOutputArray = new TClonesArray("ChnsEmcParticle");
	ioman->Register("ChnsEmcParticle", "ChnsEmc", fHitOutputArray, fPersistance);

	std::cout << "-I- gGeoManager = "<<gGeoManager << std::endl;
	return kSUCCESS;
}
// -------------------------------------------------------------------------
void ChnsEmcParticleTask::SetParContainers()
{
	// Get Base Container
	//  FairRun* ana = FairRun::Instance();
	//  FairRuntimeDb* rtdb=ana->GetRuntimeDb();
	//	ChnsSdsIdealParticleTask::SetParContainers();
}


// -----   Public method Exec   --------------------------------------------
// event level
void ChnsEmcParticleTask::Exec(Option_t*)
{
	if ( ! fHitOutputArray ) Fatal("Exec", "No fHitOutputArray");
	fHitOutputArray->Delete(); // ???????
	fHitOutputArray->Clear();

	// get MCTruth info
	// Actually, this part could be deleted
	Int_t nMCTruthPoints = fMctruthArray->GetEntriesFast();

	Int_t nChnsEmcCluster = fPointArray->GetEntriesFast();	
	for(int i=0; i<nChnsEmcCluster; i++){
		fCurrentChnsEmcCluster = (ChnsEmcCluster*)fPointArray->At(i);

		// for e and gamma, mass is ignored
		sE=fCurrentChnsEmcCluster->GetEnergyCluster();
		Double_t theta=fCurrentChnsEmcCluster->GetTheta();
		Double_t phi=fCurrentChnsEmcCluster->GetPhi();
		sPz = sE * TMath::Cos(theta);
		sPx = sE * TMath::Sin(theta) * TMath::Cos(phi);
		sPy = sE * TMath::Sin(theta) * TMath::Sin(phi);
		/*
		cout<<"rePX:  "<<sPx<<endl;
		cout<<"rePY:  "<<sPy<<endl;
		cout<<"rePZ:  "<<sPz<<endl;
		*/
		//TGeoNode* node = gGeoManager->FindNode(pos.x(),pos.y(),pos.z());
		//TString volname = node->GetVolume()->GetName();

		//size = fHitOutputArray->GetEntriesFast();
		//new ((*fHitOutputArray)[size]) ChnsEmcParticle( trackid, fCurrentChnsEmcPoint->GetDetectorID(), i, v_test);


		//???????????????
		ChnsEmcParticle* particle = new ((*fHitOutputArray)[i]) ChnsEmcParticle(sPx, sPy, sPz, sE, sPdgCode, sMass);
		//digi->AddLink(FairLink(-1, FairRootManager::Instance()->GetEntryNr(), "ChnsEmcPoint", 0)); // add by Ye ,followed by the tutorial, try to sovlve the problem that can't read ChnsEmcParticle tree
	}

	if (fVerbose > 0) {   //where was defined???
		//	std::cout<<fHitOutputArray->GetEntriesFast() <<" Hits created out of "
		//		<<fPointArray->GetEntriesFast() <<" Points"<<std::endl;
		//std::cout<<"FINISH OK!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<std::endl;
	}
}

ClassImp(ChnsEmcParticleTask);
