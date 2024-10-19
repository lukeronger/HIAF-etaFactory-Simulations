// simple geometry
// Xionghong @ 2023.09.08

// unit: cm

////////////////////////////////////////////////


/***           Tags           ***/
const int Verbose_print = 1;
const bool EmcBarrel_build = true;

void create_materials_from_media_file();
void create_materials_pLG();
// Media
TGeoMedium *PMedLG = 0;
TGeoMedium *pMedCsI = 0;
TGeoMedium *pMedSilicon = 0;

TGeoVolume* BuildEmcBarrel();

TGeoManager* gGeoManager = NULL;  // Pointer to TGeoManager instance

void Create_geo_simple(){

	//--- define some materials
	create_materials_from_media_file(); // define before gGeoManager

	//gGeoManager = new TGeoManager("ChnsGeo", "Chns Geometry");  // Pointer to TGeoManager instance
	gGeoManager=(TGeoManager*)gROOT->FindObject("FAIRGeom");
	gGeoManager->SetVisLevel(7);
	gGeoManager->SetVisOption(0);

  //--- define some media
	TGeoMedium *Si = gGeoManager->GetMedium("silicon");

	TGeoVolume* CHNS = new TGeoVolumeAssembly("CHNS");
	gGeoManager->SetTopVolume(CHNS);
	
  TGeoVolume* TOP = new TGeoVolumeAssembly("chns_v1");
	CHNS->AddNode(TOP, 1);

	//--- Create Silicon tracker
 	float stt_R1 = 7.5; // radius
	float stt_thickness = 0.01; // 100 um
	float stt_L1 = 45; // length
	float stt_gap = 5;

	// six layer in horizontal direction
	for(int ii=0; ii<5; ii++){
		TGeoVolume* Stt1 = gGeoManager->MakeTube(Form("ChnsSt_%d",ii+1), Si, stt_R1+ii*stt_gap, stt_R1+stt_thickness+ii*stt_gap, stt_L1/2.);
		Stt1->SetLineColor(kCyan);
		//Stt1->SetTransparency(80);
		TOP->AddNode(Stt1, 1, new TGeoTranslation(0,0, stt_L1/2.));
	}

	// five layer in transverse direction
	for(int ii=0; ii<5; ii++){
		TGeoVolume* Stt2 = gGeoManager->MakeTube(Form("ChnsSt_%d",ii+1), Si, stt_R1, 27, stt_thickness/2.);
		Stt2->SetLineColor(kCyan);
		//Stt2->SetTransparency(80);
		TOP->AddNode(Stt2, 1, new TGeoTranslation(0, 0, stt_L1+5+ii*10));
	}

	//--- Create ToF
 	float tof_R1 = 29; // outer radius
 	float tof_R2 = 5; // inner radius
	float tof_thickness = 0.03; // 300 um
	float tof_L1 = 100; // length


	// btof2
	TGeoVolume* Tof2 = gGeoManager->MakeTube("ChnsTof2", Si, tof_R2, tof_R2+tof_thickness, stt_L1/2.);
	Tof2->SetLineColor(kRed);
	//Tof2->SetTransparency(80);
	TOP->AddNode(Tof2, 1, new TGeoTranslation(0,0,stt_L1/2.));

	// btof1
	TGeoVolume* Tof1 = gGeoManager->MakeTube("ChnsTof1", Si, tof_R1, tof_R1+tof_thickness, tof_L1/2.);
	Tof1->SetLineColor(kRed);
	//Tof1->SetTransparency(80);
	TOP->AddNode(Tof1, 1, new TGeoTranslation(0,0,tof_L1/2.));

	// etof
	TGeoVolume* Tof3 = gGeoManager->MakeTube("ChnsTof3", Si, stt_R1, tof_R1+tof_thickness, tof_thickness/2.);
	Tof3->SetLineColor(kRed);
	//Tof3->SetTransparency(80);
	TOP->AddNode(Tof3, 1, new TGeoTranslation(0,0,tof_L1));


	//--- Create Emc (TianYe, 2023.09.11)
	create_materials_pLG();
	if(EmcBarrel_build){
		TGeoVolume* Emc = BuildEmcBarrel();
		TOP->AddNode(Emc, 1, new TGeoTranslation(0,0,0));
	}

	gGeoManager->CloseGeometry();
	gGeoManager->CheckOverlaps(0.001);
	gGeoManager->PrintOverlaps();

	CHNS->Draw("ogl");

	TFile* geomFile = new TFile("geo_chns.root", "RECREATE");
	geomFile->cd();
	CHNS->Write();
	geomFile->Close();

}

void create_materials_from_media_file()
{   
    // Use the FairRoot geometry interface to load the media which are already defined
    FairGeoLoader* geoLoad = new FairGeoLoader("TGeo", "FairGeoLoader");
    FairGeoInterface* geoFace = geoLoad->getGeoInterface();
    TString geoPath = gSystem->Getenv("VMCWORKDIR");
    TString geoFile = geoPath + "/geometry/media.geo";
    geoFace->setMediaFile(geoFile);
    geoFace->readMedia();
    
    // Read the required media and create them in the GeoManager
    FairGeoMedia* geoMedia = geoFace->getMedia();
    FairGeoBuilder* geoBuild = geoLoad->getGeoBuilder();
    
    FairGeoMedium* air              = geoMedia->getMedium("air");
    FairGeoMedium* silicon          = geoMedia->getMedium("silicon");
    //FairGeoMedium* leadglass        = geoMedia->getMedium("LeadGlass");
    
    geoBuild->createMedium(air);
    geoBuild->createMedium(silicon);
    //geoBuild->createMedium(leadglass);

}


//---- TianYe (2023.09.11)
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
void create_materials_pLG() {
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
	//pMedCsI = PMedLG;
	//pMedSilicon = PMedLG;
	pMedCsI = new TGeoMedium("MedCsI", 1, fLG);
	pMedSilicon = new TGeoMedium("MedSilicon", 1, fLG);

}

TGeoVolume* BuildEmcBarrel(){
	// general
	const double Radius = 30;
    const double barrel_z = 100;
    const double endcap_r = 18;

	// module
	const int NLayers = 7;
	const double Silicon_thick = 0.2; //cm
	const double LG_thick = 5;
	const double CsI_thick = 1;
	const double AirGap_thick = 0.2;

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

	fEndcapLG_Layer->SetLineColor(kGreen);
	//fEndcapLG_Layer->SetTransparency(80);
	fEndcapCsI_Layer->SetLineColor(kGreen);
	//fEndcapCsI_Layer->SetTransparency(80);
	fEndcapSilicon_Layer->SetLineColor(14);
	//fEndcapSilicon_Layer->SetTransparency(80);

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
