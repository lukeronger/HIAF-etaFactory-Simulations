#include "TGeoManager.h"
#include "TGeoVolume.h"
#include "TGeoMedium.h"
#include "TFile.h"
#include "../par/ParEmcDet.h"

// Media
TGeoMedium *pMedAir = 0;
TGeoMedium *pMedAluminium = 0;
TGeoMedium *pMedFscScint = 0;
TGeoMedium *pMedLead = 0;
TGeoMedium *pMedVacuum = 0;
TGeoMedium *pMedCsI = 0;
TGeoMedium *pMedTyvek = 0;
TGeoMedium *pMedTiPaint = 0;

const int N_layer=240, N_row=80, N_col=80;
const double thickness_lead=0.035, thickness_scin=0.15;
const double length_side=4;

Double_t fPrecision = 0.01;

class FairGeoMedia;
class FairGeoBuilder;
void DefineMediaParameters(FairGeoMedia* , FairGeoBuilder*);
void Build();

TFile* geomFile;
TGeoVolume* top = new TGeoVolumeAssembly("TOP_EMC");


void emc_array_shashlik() {
	// Load MPD libraries
	//   mpdloadlibs(1, 1);
	// Set working directory

	TString gPath = gSystem->Getenv("VMCWORKDIR"); //works, get EiccRoot 
	const TString geoDetectorVersion = "v0";
	TString geoFileName = gPath + "/geometry/emc_shashlik_array_"+ geoDetectorVersion + ".root";
	geomFile = new TFile(geoFileName, "UPDATE");

	// Global geometry parameters
	FairGeoLoader*    geoLoad = new FairGeoLoader("TGeo","FairGeoLoader");
	FairGeoInterface* geoFace = geoLoad->getGeoInterface();

	// Load media from media file
	TString medFile = gPath + "/geometry/media.geo";
	geoFace->setMediaFile(medFile);
	geoFace->readMedia();
	FairGeoMedia*   geoMedia = geoFace->getMedia();
	FairGeoBuilder* geoBuild = geoLoad->getGeoBuilder();
	DefineMediaParameters(geoMedia, geoBuild);

	Build();

	//top->SetVisContainers(kTRUE);

	/*
	gGeoManager->CloseGeometry();
	gGeoManager->CheckOverlaps(fPrecision);
	gGeoManager->PrintOverlaps();
	gGeoManager->Test();
	gGeoManager->SetTopVisible(kFALSE); 
	*/
	
	//gGeoManager->SetVisLevel(4);
	//gGeoManager->SetNsegments(20);
	//gGeoManager->GetTopVolume()->Draw();
	//top->Draw();

	// Write to root - file 
	top->Write();
	geomFile->Close();
	
}

// Define media parameters

// important: sequence is important, use same sequence as passive.c; otherwise error as : 
/*
	steel lead
	++++  TG4Warning:  ++++
		TG4Medium::SetMaterial:
		Reseting material steel to lead
	+++++++++++++++++++++++

	++++  TG4Warning:  ++++
		TG4MediumMap::AddMedium:
		Medium with given ID=3 already exists.
	+++++++++++++++++++++++
*/ // ???????
void DefineMediaParameters(FairGeoMedia* geoMedia, FairGeoBuilder* geoBuild) {

	FairGeoMedium *medium_carbon = geoMedia->getMedium("carbon");
    geoBuild->createMedium(medium_carbon);

    FairGeoMedium *medium_FscScint = geoMedia->getMedium("FscScint");
    geoBuild->createMedium(medium_FscScint); //comment will be error

    FairGeoMedium *medium_beryllium = geoMedia->getMedium("beryllium");
    geoBuild->createMedium(medium_beryllium);

    FairGeoMedium *medium_steel = geoMedia->getMedium("steel");
    geoBuild->createMedium(medium_steel);

    FairGeoMedium *medium_lead = geoMedia->getMedium("lead");
    geoBuild->createMedium(medium_lead);

    FairGeoMedium *medium_tyvek = geoMedia->getMedium("tyvek");
    geoBuild->createMedium(medium_tyvek);

    FairGeoMedium *medium_fiber = geoMedia->getMedium("FscFiber");
    geoBuild->createMedium(medium_fiber);

    FairGeoMedium *medium_Aluminum = geoMedia->getMedium("Aluminum");
    geoBuild->createMedium(medium_Aluminum);

    FairGeoMedium *medium_CsI = geoMedia->getMedium("CsI");
    geoBuild->createMedium(medium_CsI);

    FairGeoMedium *medium_vacuum = geoMedia->getMedium("vacuum");
    geoBuild->createMedium(medium_vacuum);

	// Scintillator
	pMedFscScint = gGeoManager->GetMedium("FscScint");
	pMedFscScint->GetMaterial()->Print();
	if ( ! pMedFscScint ) Fatal("Main", "TGeoMedium FscScint not found");

	// Lead    
	pMedLead = gGeoManager->GetMedium("lead");
	pMedLead->GetMaterial()->Print();
	if ( ! pMedLead ) Fatal("Main", "TGeoMedium Lead not found");

	// Vacuum
	pMedVacuum = gGeoManager->GetMedium("vacuum");
	pMedVacuum->GetMaterial()->Print();
	if ( ! pMedVacuum ) Fatal("Main", "TGeoMedium Vacuum not found");  

	// CsI
	pMedCsI = gGeoManager->GetMedium("CsI");
	pMedCsI->GetMaterial()->Print();
	if ( ! pMedCsI ) Fatal("Main", "TGeoMedium CsI not found");  

	// Tyvek
	pMedTyvek = gGeoManager->GetMedium("tyvek");
	pMedTyvek->GetMaterial()->Print();
	if ( ! pMedTyvek ) Fatal("Main", "TGeoMedium tyvek not found");  

	// Ti02 reflecting color (EJ510)
	/*
	FairGeoMedium* mTiPaint = geoMedia->getMedium("TiO2Col");
	if ( ! mTiPaint ) Fatal("Main", "FairGeoMedium mTiPaint not found");
	geoBuild->createMedium(mTiPaint);
	pMedTiPaint = gGeoManager->GetMedium("TiO2Col");
	pMedTiPaint->GetMaterial()->Print();
	if ( ! pMedTiPaint ) Fatal("Main", "TGeoMedium TiO2Col not found");
	*/ //not found  
}

void Build(){
    TGeoVolume* ecal_lead_endcap = gGeoManager->MakeBox("ecal_lead_endcap_SEN", pMedLead, length_side/2.0, length_side/2.0, thickness_lead/2.0); // the sequence decide ID
	TGeoVolume* ecal_scin_endcap = gGeoManager->MakeBox("ecal_scin_endcap_SEN", pMedFscScint, length_side/2.0, length_side/2.0, thickness_scin/2.0);
	ecal_scin_endcap->SetLineColor(kRed);
	ecal_lead_endcap->SetLineColor(kGreen);

	TGeoVolume *module_endcap = new TGeoVolumeAssembly("MODULE_ARRAY");
	double position_z=0;
	for(int i=0; i<N_layer; i++){
		module_endcap->AddNode(ecal_lead_endcap, N_layer+i+1, new TGeoTranslation( 0, 0, position_z+thickness_lead/2.0));
		position_z+=thickness_lead;
		module_endcap->AddNode(ecal_scin_endcap, i+1, new TGeoTranslation( 0, 0, position_z+thickness_scin/2.0));
		position_z+=thickness_scin;
	}

	TGeoVolume *emc_endcap = new TGeoVolumeAssembly("EMC_ARRAY"); 
	for(int i=0; i<N_row; i++){
		for(int j=0; j<N_col; j++){
			double x_endcap=-(N_col-1)*length_side*0.5 + j*length_side;  //x: colume position
			double y_endcap=-(N_row-1)*length_side*0.5 + i*length_side;
			emc_endcap->AddNode(module_endcap, i*N_col+j+1, new TGeoTranslation(x_endcap, y_endcap, 0));
		}
	}
	
	top->AddNode(emc_endcap, 0, new TGeoTranslation(0, 0, 200));

}
	
