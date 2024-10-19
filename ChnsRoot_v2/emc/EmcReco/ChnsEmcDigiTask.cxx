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
#include "ChnsEmcDigiTask.h"
#include "FairRun.h"
#include "FairRuntimeDb.h"
//#include "ChnsMCTrack.h"
#include "FairHit.h"
#include "ChnsEmcReadPar.h"
// ChnsEmc includes

using namespace std;

// -----   Default constructor   -------------------------------------------
ChnsEmcDigiTask::ChnsEmcDigiTask() :
	FairTask("Ideal reconstruction task for ChnsEmc"),
	fPersistance(kTRUE),
	fBranchName("ChnsEmcPoint"),
	fPointArray(NULL),
	fMctruthArray(NULL),
	fHitOutputArray(NULL)
	,RecoPar(NULL)
{
}
// -------------------------------------------------------------------------


// -----   Destructor   ----------------------------------------------------
ChnsEmcDigiTask::~ChnsEmcDigiTask()
{
}

// -----   Public method Init   --------------------------------------------
InitStatus ChnsEmcDigiTask::Init()
{
	// Get RootManager
	FairRootManager* ioman = FairRootManager::Instance();
	if ( ! ioman ) {
		std::cout << "-E- ChnsEmcDigiTask::Init: "
			<< "RootManager not instantiated!" << std::endl;
		return kFATAL;  }

	// Get input array
	fPointArray = (TClonesArray*) ioman->GetObject(fBranchName);
	if ( ! fPointArray ) {
		std::cout << "-W- ChnsEmcDigiTask::Init: "<< "No "<<fBranchName
			<<" array!" << std::endl;
		return kERROR;  }

	// Get MCTruth collection
	fMctruthArray=(TClonesArray*) ioman->GetObject("MCTrack");
	if(fMctruthArray==0)  {
		std::cout << "-W- ChnsEmcDigiTask::Init: No McTruth array!" << std::endl;
		return kERROR;  }

	// Create and register output array
	fHitOutputArray = new TClonesArray("ChnsEmcDigi");
	ioman->Register("ChnsEmcDigi", "ChnsEmc", fHitOutputArray, fPersistance);

	std::cout << "-I- gGeoManager = "<<gGeoManager << std::endl;

	//read parameters from Par file
	Deposit_ratio_shashlik = RecoPar->GetDeposit_ratio_shashlik();
	cout << "#############"<<Deposit_ratio_shashlik<<endl;
	Deposit_ratio_e = RecoPar->GetDeposit_ratio_e();
	/*
	const Int_t ChnsEmcDigiTask::N_segment_barrel = ParDetRe::N_segment_barrel;
	const Int_t ChnsEmcDigiTask::N_module_barrel = ParDetRe::N_module_barrel;
	const Int_t ChnsEmcDigiTask::N_module_ion = ParDetRe::N_module_hadron;
	const Int_t ChnsEmcDigiTask::N_module_e = ParDetRe::N_module_e;
	N_layer = ParDetRe::N_layer;
	*/

	return kSUCCESS;
}
// -------------------------------------------------------------------------
void ChnsEmcDigiTask::SetParContainers()
{
	// Get Base Container
	FairRun* ana = FairRun::Instance(); 
	FairRuntimeDb* rtdb = ana->GetRuntimeDb(); //use Run to get db
	//ChnsSdsIdealDigiTask::SetParContainers();
	
	RecoPar = (ChnsEmcReadPar*) rtdb->getContainer("ChnsEmcReadPar");

	if(RecoPar != NULL){
		printf("Got ChnsEmcReadPar from database\n");
		RecoPar->Print();
	} else {
		printf("could not get ChnsEmcRAeadPar from database\n");
		abort();
	}
}


// -----   Public method Exec   --------------------------------------------
// event level
void ChnsEmcDigiTask::Exec(Option_t*)
{
cout<<"###########################################"<<endl;
	if ( ! fHitOutputArray ) Fatal("Exec", "No fHitOutputArray");
	fHitOutputArray->Delete(); // ???????
	fHitOutputArray->Clear();

	// get MCTruth info
	fCurrentChnsMCTrack = (ChnsMCTrack*)fMctruthArray->At(0);
	//cout<<"PX:  "<<fCurrentChnsMCTrack->GetPx()<<endl;
	//cout<<"PY:  "<<fCurrentChnsMCTrack->GetPy()<<endl;
	//cout<<"PZ:  "<<fCurrentChnsMCTrack->GetPz()<<endl;

	// constant read from fiile 
	const Int_t N_segment_barrel = ParDetRe::N_segment_barrel;
	const Int_t N_module_barrel = ParDetRe::N_module_barrel;
	const Int_t N_module_ion = ParDetRe::N_module_hadron;
	const Int_t N_module_e = ParDetRe::N_module_e;
	const Int_t N_layer = ParDetRe::N_layer;

	/*  Read ChnsEmcPoints data, and digization */
	Int_t nChnsEmcPoints = fPointArray->GetEntriesFast(); //fast, ignore non-empty slots
	//std::cout<<nChnsEmcPoints<<std::endl;

	// New data to store
	Int_t Nblocks=0;
	Int_t NblocksBarrel=0;
	Int_t NblocksIon=0;
	Int_t NblocksE=0;
	vector<Int_t> LocationID;
	vector<Int_t> Segment;
	vector<Int_t> Module;
	vector<Double_t> ElossModule;
	Double_t ElossAll=0;

	//temp data
	// since each detector has two dimension, difficult use vector or map; try to use 2-D map
	double Eloss_module_barrel[N_segment_barrel][N_module_barrel]={0};
	double Eloss_module_ion[N_module_ion][N_module_ion]={0};
	double Eloss_module_e[N_module_e][N_module_e]={0};
	bool barrel_data=false, ion_data=false, e_data=false;

	for(Int_t i=0; i<nChnsEmcPoints; i++)
	{
		fCurrentChnsEmcPoint = (ChnsEmcPoint*)fPointArray->At(i);

		Double_t eloss = fCurrentChnsEmcPoint->GetEnergyLoss();
		Int_t nLocationID = fCurrentChnsEmcPoint->GetLocation();
		Int_t nSegment = fCurrentChnsEmcPoint->GetSegment();
		Int_t nModule = fCurrentChnsEmcPoint->GetModule();
		Int_t nCopy = fCurrentChnsEmcPoint->GetCopy();

		ElossAll+=eloss;
		if(nLocationID==0) {//barrel
			if(nCopy<N_layer){  //scin
				//Eloss_scin+=eloss;
				Eloss_module_barrel[nSegment][nModule]+=eloss;
				barrel_data=true;
			}
		}
		if(nLocationID==1) { // ion endcap
			if(nCopy<N_layer){  //scin
				//Eloss_scin+=Eloss[j];
				Eloss_module_ion[nSegment][nModule]+=eloss;
				ion_data=true;
			}
		}
		if(nLocationID==2) { // e endcap
			Eloss_module_e[nSegment][nModule]+=eloss;
			e_data=true;
		}
	}  //end of read data for single event

	// combine andstore all blocks data
	if(barrel_data==true) {
		for(int k=0; k<N_segment_barrel; k++) {
			for( int l=0; l<N_module_barrel; l++){
				if(Eloss_module_barrel[k][l]>0){
					LocationID.push_back(0);
					Segment.push_back(k);
					Module.push_back(l);
					ElossModule.push_back(Eloss_module_barrel[k][l]/Deposit_ratio_shashlik);
					Nblocks++;
					NblocksBarrel++;
				}
			}
		}
	}
	if(ion_data==true) {
		for(int k=0; k<N_module_ion; k++) {
			for( int l=0; l<N_module_ion; l++){
				if(Eloss_module_ion[k][l]>0){
					LocationID.push_back(1);
                    Segment.push_back(k);
                    Module.push_back(l);
                    ElossModule.push_back(Eloss_module_ion[k][l]/Deposit_ratio_shashlik);
					Nblocks++;
					NblocksIon++;
				}
			}
		}
	}
	if(e_data==true) {
		for(int k=0; k<N_module_e; k++) {
			for( int l=0; l<N_module_e; l++){
				if(Eloss_module_e[k][l]>0){
					LocationID.push_back(2);
                    Segment.push_back(k);
                    Module.push_back(l);
                    ElossModule.push_back(Eloss_module_e[k][l]/Deposit_ratio_e);
					Nblocks++;
					NblocksE++;
				}
			}
		}
	}

	//TGeoNode* node = gGeoManager->FindNode(pos.x(),pos.y(),pos.z());
	//TString volname = node->GetVolume()->GetName();

	//size = fHitOutputArray->GetEntriesFast();
	//new ((*fHitOutputArray)[size]) ChnsEmcDigi( trackid, fCurrentChnsEmcPoint->GetDetectorID(), i, v_test);


	//???????????????
	Int_t size = fHitOutputArray->GetEntriesFast();
	ChnsEmcDigi* digi = new ((*fHitOutputArray)[size]) ChnsEmcDigi(Nblocks, NblocksBarrel, NblocksIon, NblocksE, LocationID, Segment, Module, ElossModule, ElossAll);
	//digi->AddLink(FairLink(-1, FairRootManager::Instance()->GetEntryNr(), "ChnsEmcPoint", 0)); // add by Ye ,followed by the tutorial, try to sovlve the problem that can't read ChnsEmcDigi tree

	if (fVerbose > 0) {   //where was defined???
		//	std::cout<<fHitOutputArray->GetEntriesFast() <<" Hits created out of "
		//		<<fPointArray->GetEntriesFast() <<" Points"<<std::endl;
		//std::cout<<"FINISH OK!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<std::endl;
	}
}

ClassImp(ChnsEmcDigiTask);
