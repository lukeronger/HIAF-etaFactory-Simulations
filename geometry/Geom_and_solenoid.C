const int Verbose_print = 1;
const bool EmcBarrel_build = true;

void create_materials_from_media_file();
void create_materials_pLG();
// Media
TGeoMedium *PMedLG = 0;
TGeoMedium *pMedCsI = 0;
TGeoMedium *pMedSilicon = 0;




void Geom_and_solenoid(){

	TGeoManager *geoManager = new TGeoManager("ChnsGeo","Chns Geometry");
	
	TGeoVolume *CHNS = new TGeoVolumeAssembly("CHNS");
        TGeoMedium *Si = gGeoManager->GetMedium("silicon");

	gGeoManager->SetTopVolume(CHNS);


	float stt_R1 = 7.5; // radius
        float stt_thickness = 0.01; // 100 um
        float stt_L1 = 45; // length
        float stt_gap = 5;

//	TGeoVolume *cylinder = gGeoManager->MakeTube("cylinder", Si, 10, 10.5, 10);
//	CHNS->AddNode(cylinder,1);

	for(int i=0;i<5;i++){
		TGeoVolume *cylinder = gGeoManager->MakeTube(Form("cylinder_%d", i+1), Si, stt_R1+i*stt_gap, stt_R1+stt_thickness+i*stt_gap, stt_L1/2.);
		cylinder->SetLineColor(kCyan);
		CHNS->AddNode(cylinder, 1, new TGeoTranslation(0,0, stt_L1/2.));
	
	}

        for(int i=0;i<5;i++){
                TGeoVolume *cylinder1 = gGeoManager->MakeTube(Form("cylinder_%d", i+1), Si, stt_R1, 27, stt_thickness/2.);
                cylinder1->SetLineColor(kCyan);
                CHNS->AddNode(cylinder1, 1, new TGeoTranslation(0,0, stt_L1+5+i*10));

        }

        float tof_R1 = 29; // outer radius
        float tof_R2 = 5; // inner radius
        float tof_thickness = 0.03; // 300 um
        float tof_L1 = 100; // length

	// btof1
        TGeoVolume* Tof1 = gGeoManager->MakeTube("ChnsTof1", Si, tof_R1, tof_R1+tof_thickness, tof_L1/2.);
//	Tof1->SetTransparency(99);
	gGeoManager->GetVolume("ChnsTof1")->SetVisibility(1);
        Tof1->SetLineColor(kRed);
        CHNS->AddNode(Tof1, 1, new TGeoTranslation(0,0,tof_L1/2.));

	// btof2
        TGeoVolume* Tof2 = gGeoManager->MakeTube("ChnsTof2", Si, tof_R2, tof_R2+tof_thickness, stt_L1/2.);
        Tof2->SetLineColor(kRed);
        //Tof2->SetTransparency(80);
        CHNS->AddNode(Tof2, 1, new TGeoTranslation(0,0,stt_L1/2.));


	TGeoVolume* Tof3 = gGeoManager->MakeTube("ChnsTof3", Si, stt_R1, tof_R1, tof_thickness/2.);
        Tof3->SetLineColor(kRed);
        //Tof2->SetTransparency(80);
        CHNS->AddNode(Tof3, 1, new TGeoTranslation(0,0,tof_L1));


	//EMC
	double length_EMC1 = 100;
	double radius_inner = 30;
	double radius_outter = 55;
	TGeoVolume* EMC1 = gGeoManager->MakeTube("ChnsEMC1", PMedLG, radius_inner, radius_outter, length_EMC1/2.0);
	EMC1->SetLineColor(kGreen-6);
//	EMC1->SetTransparency(50);
	CHNS->AddNode(EMC1, 1, new TGeoTranslation(0,0,length_EMC1/2.));


	radius_inner = 22.04;
	TGeoVolume* EMC2 = gGeoManager->MakeTube("ChnsEMC2", PMedLG, radius_inner, radius_outter, 25/2.0);
	EMC2->SetLineColor(kGreen-6);
	CHNS->AddNode(EMC2, 1, new TGeoTranslation(0,0,112.5));

        //Magnet
        double magnet_radius_inner = 60;
        double magnet_radius_outter = 75;
        double magnet_length = 155;
        TGeoVolume* Magnet = gGeoManager->MakeTube("ChnsMagnet", PMedLG, magnet_radius_inner, magnet_radius_outter, magnet_length/2.0);
        Magnet->SetLineColor(kGray);
        CHNS->AddNode(Magnet, 1, new TGeoTranslation(0,0,(magnet_length - 30)/2.0));

	CHNS->Draw("ogl");
	//EMC1->SetTransparency(50);

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

