#include "TGeoManager.h"
#include "TGeoVolume.h"
#include "TGeoMedium.h"
#include "TFile.h"

// Media
TGeoMedium *PMedLG = 0;
TGeoMedium *pMedCsI = 0;
TGeoMedium *pMedSilicon = 0;

////////////////////////////////////////////////
/***           Tags           ***/
const int Verbose_print = 1;
const bool Barrel_build = true;
const bool Draw_tag = true;

void DefineMediaParameters();
void BuildBarrel();

TFile* geomFile;
//TGeoVolume* top = new TGeoVolumeAssembly("TOP_EMC");

void create_Adriano2() {
	geomFile = new TFile("Adriano2_emc.root", "RECREATE");

	DefineMediaParameters();

	if(Barrel_build){
		BuildBarrel();
	}

	geomFile->Close();
	
}

// Define media parameters
void DefineMediaParameters() {

	// Lead Glass
	TGeoElementTable *table = gGeoManager->GetElementTable();
	TGeoElement *element14 = table->GetElement(14);
	TGeoElement *element8 = table->GetElement(8);
	TGeoElement *element19 = table->GetElement(19);
	TGeoElement *element11 = table->GetElement(11);
	TGeoElement *element82 = table->GetElement(82);

	TGeoMixture *fSiO2 = new TGeoMixture("G4_SiO2", 2, 2.32);
	fSiO2->AddElement(element14, 1);
	fSiO2->AddElement(element8, 2);

	TGeoMixture *fK2O = new TGeoMixture("G4_K2O", 2, 2.32); //密度同SiO2。。。。
	fK2O->AddElement(element19, 2);
	fK2O->AddElement(element8, 1);

	TGeoMixture *fNa2O = new TGeoMixture("G4_Na2O", 2, 2.27);
	fNa2O->AddElement(element11, 2);
	fNa2O->AddElement(element8, 1);

	TGeoMixture *fPbO = new TGeoMixture("G4_PbO", 2, 9.53);
	fPbO->AddElement(element82, 1);
	fPbO->AddElement(element8, 1);

	TGeoMixture *fLG = new TGeoMixture("LG_material", 4, 3.86);
	fLG->AddElement(fPbO, 0.5145);
	fLG->AddElement(fSiO2, 0.4155);
	fLG->AddElement(fK2O, 0.035);
	fLG->AddElement(fNa2O, 0.035);

	PMedLG = new TGeoMedium("LeadGlass", 1, fLG);  

	// CsI
	// FairGeoMedium *medium_CsI = geoMedia->getMedium("CsI");
    // geoBuild->createMedium(medium_CsI);

	// pMedCsI = gGeoManager->GetMedium("CsI");
	// pMedCsI->GetMaterial()->Print();
	// if ( ! pMedCsI ) Fatal("Main", "TGeoMedium CsI not found");  

	// // silicon
	// FairGeoMedium *medium_silicon = geoMedia->getMedium("silicon");
    // geoBuild->createMedium(medium_silicon);

	// pMedSilicon = gGeoManager->GetMedium("silicon");
	// pMedSilicon->GetMaterial()->Print();
	// if ( ! pMedSilicon ) Fatal("Main", "TGeoMedium CsI not found");  
pMedCsI = PMedLG;
pMedSilicon = PMedLG;

}

void BuildBarrel(){
	//constant

	// general
	const double Radius = 300;
    const double barrel_z = 1000;
    const double endcap_r = 180;

	// module
	const int NLayers = 7;
	const double Silicon_thick = 2; //mm
	const double LG_thick = 50;
	const double CsI_thick = 10;
	const double AirGap_thick = 2;

	TGeoVolume* fBarrelLG_Layer[NLayers];
	TGeoVolume* fBarrelCsI_Layer[NLayers];
	TGeoVolume* fBarrelSilicon_Layer[NLayers*2];
	TGeoVolume* fEndcapLG_Layer;
	TGeoVolume* fEndcapCsI_Layer;
	TGeoVolume* fEndcapSilicon_Layer;
	TGeoVolume* EMC = new TGeoVolumeAssembly("EMC");

	// Barrel
	double radius_inner = Radius;
	double radius_outer = Radius + (LG_thick + CsI_thick + (AirGap_thick + Silicon_thick)*2)*NLayers;
	for(int i=0; i<NLayers; i++){
		fBarrelLG_Layer[i] = gGeoManager -> MakeTubs("fBarrelLG_Layer", PMedLG, radius_inner, radius_inner+LG_thick, barrel_z/2., 0, 360); //in degree
		radius_inner+=LG_thick;
		fBarrelSilicon_Layer[i*2] = gGeoManager -> MakeTubs("fBarrelSilicon_Layer", pMedSilicon, radius_inner, radius_inner+Silicon_thick, barrel_z/2., 0, 360);
		radius_inner+=(Silicon_thick+AirGap_thick);
		fBarrelCsI_Layer[i] = gGeoManager -> MakeTubs("fBarrelCsI_Layer", pMedCsI, radius_inner, radius_inner+CsI_thick, barrel_z/2., 0, 360);
		radius_inner+=CsI_thick;
		fBarrelSilicon_Layer[i*2+1] = gGeoManager -> MakeTubs("fBarrelSilicon_Layer2", pMedSilicon, radius_inner, radius_inner+Silicon_thick, barrel_z/2., 0, 360);
		radius_inner+=(Silicon_thick+AirGap_thick);

		fBarrelLG_Layer[i]->SetLineColor(kCyan);
		fBarrelLG_Layer[i]->SetTransparency(80); //0 is opaque and 100 is fully transparent
		fBarrelCsI_Layer[i]->SetLineColor(kCyan);
		fBarrelCsI_Layer[i]->SetTransparency(80);
		fBarrelSilicon_Layer[i*2]->SetLineColor(14);
		fBarrelSilicon_Layer[i*2]->SetTransparency(80);
		fBarrelSilicon_Layer[i*2+1]->SetLineColor(14);
		fBarrelSilicon_Layer[i*2+1]->SetTransparency(80);

		TGeoTranslation Trans(0, 0, barrel_z/2.);
		TGeoRotation Rotate;
		TGeoCombiTrans colComb(Trans, Rotate);
		TGeoHMatrix *h_colMtrx = new TGeoHMatrix(colComb);
		EMC->AddNode(fBarrelLG_Layer[i], i*4, h_colMtrx);
		EMC->AddNode(fBarrelSilicon_Layer[i*2], i*4+1, h_colMtrx);
		EMC->AddNode(fBarrelCsI_Layer[i], i*4+2, h_colMtrx);
		EMC->AddNode(fBarrelSilicon_Layer[i*2+1], i*4+3, h_colMtrx);
	}

	// Endcap
	fEndcapLG_Layer = gGeoManager -> MakeTubs("fEndcapLG_Layer", PMedLG, endcap_r, radius_outer, LG_thick/2., 0, 360);
	fEndcapSilicon_Layer = gGeoManager -> MakeTubs("fEndcapSilicon_Layer", pMedSilicon, endcap_r, radius_outer, Silicon_thick/2., 0, 360);
	fEndcapCsI_Layer = gGeoManager -> MakeTubs("fEndcapCsI_Layer", pMedCsI, endcap_r, radius_outer, CsI_thick/2., 0, 360);

	fEndcapLG_Layer->SetLineColor(kCyan);
	fEndcapLG_Layer->SetTransparency(80);
	fEndcapCsI_Layer->SetLineColor(kCyan);
	fEndcapCsI_Layer->SetTransparency(80);
	fEndcapSilicon_Layer->SetLineColor(14);
	fEndcapSilicon_Layer->SetTransparency(80);

	double z_location = barrel_z;
	int countN = NLayers * 4;
	for(int i=0; i<NLayers; i++){
		z_location += LG_thick/2.;
		EMC->AddNode(fEndcapLG_Layer, countN+ i*4, new TGeoTranslation(0, 0, z_location));
		z_location += LG_thick/2. + Silicon_thick/2.;
		EMC->AddNode(fEndcapSilicon_Layer, countN+ i*4+1, new TGeoTranslation(0, 0, z_location));
		z_location += Silicon_thick/2. + AirGap_thick + CsI_thick/2.;
		EMC->AddNode(fEndcapCsI_Layer, countN+ i*4+2, new TGeoTranslation(0, 0, z_location));
		z_location += CsI_thick/2. + Silicon_thick/2.;
		EMC->AddNode(fEndcapSilicon_Layer, countN+ i*4+3, new TGeoTranslation(0, 0, z_location));
		z_location += Silicon_thick/2. + AirGap_thick;
	}
	
	return EMC;
}
