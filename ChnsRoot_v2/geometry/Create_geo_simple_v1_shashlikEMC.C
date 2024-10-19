// simple geometry
// Xionghong @ 2023.09.08

// unit: cm

////////////////////////////////////////////////


/***           Tags           ***/
const int Verbose_print = 1;
const bool EmcBarrel_build = true;
const bool Hadron_endcap_build = true;
const bool E_endcap_build = true;

void create_materials_from_media_file();
void create_materials_pLG();
TGeoMedium* pLG=0;

TGeoVolume* BuildEmcBarrel();
void BuildHadronEndcap();
void BuildEEndcap();

TGeoManager* gGeoManager = NULL;  // Pointer to TGeoManager instance

void Create_geo_simple(){

	//--- define some materials
	create_materials_from_media_file(); // define before gGeoManager

	//gGeoManager = new TGeoManager("ChnsGeo", "Chns Geometry");  // Pointer to TGeoManager instance
	gGeoManager=(TGeoManager*)gROOT->FindObject("FAIRGeom");
  //create_materials_pLG();
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
	if(EmcBarrel_build){
		TGeoVolume* Emc = BuildEmcBarrel();
		TOP->AddNode(Emc, 1, new TGeoTranslation(0,0,0));
	}

	if(Hadron_endcap_build){
		//BuildHadronEndcap();
	}

	if(E_endcap_build){
		//BuildEEndcap();
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
    FairGeoMedium* leadglass        = geoMedia->getMedium("LeadGlass");
    
    geoBuild->createMedium(air);
    geoBuild->createMedium(silicon);
    geoBuild->createMedium(leadglass);

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

  pLG = new TGeoMedium("LeadGlass", 1, fLG);

}

TGeoVolume* BuildEmcBarrel(){
	//constant
 	const double length = 30;
	const double radius = 30;
	const double size = 3.5; 
	const double theta_angle1 = 5.3; 
	const int nModule_theta1 = 12;
	const double theta_angle2 = 2.2; 
	const int nModule_theta2 = 6;
	const double theta_angle3 = 1.8; 
	const int nModule_theta3 = 4;
	
	const int nPhi = 53;  //53;

	// optical property
	const double tyvek_thick = 0.007;
	const double airGap = 0.005;

	double theta_rad1= theta_angle1 /180. * TMath::Pi();
	double theta_rad2= theta_angle2 /180. * TMath::Pi();
	double theta_rad3= theta_angle3 /180. * TMath::Pi();
	//G4double size_out = size / radius * (radius + length); //wrong
	double size_out1 = size + 2* length * tan(theta_angle1 /2. /180. * TMath::Pi());
	double size_out2 = size + 2* length * tan(theta_angle2 /2. /180. * TMath::Pi());
	double size_out3 = size + 2* length * tan(theta_angle3 /2. /180. * TMath::Pi());
	double size_out_Phi = size / radius * (radius + length); 

	//auto fModuleSolid1 = new G4Trd("ModuleTrd", size/2., size_out_Phi/2., size/2., size_out1/2.,  length/2.);
	//auto fModuleLV1 = new G4LogicalVolume(fModuleSolid1, CsI, "ModuleLV");

	//auto fModuleSolid2 = new G4Trd("ModuleTrd2", size/2., size_out_Phi/2., size/2., size_out2/2.,  length/2.);
	//auto fModuleLV2 = new G4LogicalVolume(fModuleSolid2, CsI, "ModuleLV2");

	pLG = gGeoManager->GetMedium("LeadGlass");
	TGeoVolume* fModuleSolid1 = gGeoManager -> MakeTrd2("ModuleSolid1_SEN", pLG, size/2., size_out_Phi/2., size/2., size_out1/2.,  length/2.);
	TGeoVolume* fModuleSolid2 = gGeoManager -> MakeTrd2("ModuleSolid2_SEN", pLG, size/2., size_out_Phi/2., size/2., size_out2/2.,  length/2.);
	fModuleSolid1->SetLineColor(kGreen-4);
	fModuleSolid2->SetLineColor(kGreen-4);
	fModuleSolid1->SetTransparency(80);
	fModuleSolid2->SetTransparency(80);

	TGeoVolume *Module_segment = new TGeoVolumeAssembly("Module_segment");

	double module_x, module_y, module_x2, module_y2;
	double module_x_fix = 0;
	for(int i=0; i<nModule_theta1; i++ ){
		double angle_i = i*theta_rad1;
		if(i==0) module_x = 0;
		else 	module_x += size*0.5*cos(angle_i- theta_rad1) + size*0.5*cos(angle_i) + size*sin(angle_i)*tan(angle_i-theta_rad1/2.);
		
		module_y = size*0.5*sin(angle_i) + radius;
		//cout<<i<<"  "<<module_x<<"   "<<module_y<<endl;

		// module center
		module_x2 = module_x + length/2. *sin(angle_i);
		module_y2 = module_y + length/2. *cos(angle_i);
		//G4cout<<i<<"  "<<module_x2<<"   "<<module_y2<<G4endl;
		
		// Rotation and translation of a plate inside the assembly
		double angle_i_deg = angle_i/TMath::Pi()*180.;

		TGeoTranslation Trans(0, module_y2, module_x2);
		TGeoRotation Rotate;
		Rotate.RotateX( 270 + angle_i_deg);
		TGeoCombiTrans colComb(Trans, Rotate);
		TGeoHMatrix *h_colMtrx = new TGeoHMatrix(colComb);
		Module_segment->AddNode(fModuleSolid1, i, h_colMtrx);
	}

	for(int i=0; i<nModule_theta2; i++ ){
		double angle_i;
		if(i==0) {
			angle_i = (nModule_theta1-1) * theta_rad1 + theta_rad1/2. + theta_rad2/2.;
            module_x += size*0.5*cos(angle_i - theta_rad1/2. - theta_rad2/2.) + size*0.5*cos(angle_i) + size*sin(angle_i)*tan(angle_i - theta_rad2/2.);
		}
		else {
			angle_i = (nModule_theta1-1) * theta_rad1 + theta_rad1/2. + theta_rad2/2. + i * theta_rad2;
            module_x += size*0.5*cos(angle_i - theta_rad2) + size*0.5*cos(angle_i) + size*sin(angle_i)*tan(angle_i - theta_rad2/2.);
		}
		
		module_y = size*0.5*sin(angle_i) + radius;
		cout<<i<<"  "<<module_x<<"   "<<module_y<<endl;

		// module center
		module_x2 = module_x + length/2. *sin(angle_i);
		module_y2 = module_y + length/2. *cos(angle_i);
		//G4cout<<i<<"  "<<module_x2<<"   "<<module_y2<<G4endl;
		
		// Rotation and translation of a plate inside the assembly
		double angle_i_deg = angle_i/TMath::Pi()*180.;

		TGeoTranslation Trans(0, module_y2, module_x2);
		TGeoRotation Rotate;
		Rotate.RotateX( 270 + angle_i_deg);
		TGeoCombiTrans colComb(Trans, Rotate);
		TGeoHMatrix *h_colMtrx = new TGeoHMatrix(colComb);
		Module_segment->AddNode(fModuleSolid2, i+nModule_theta1, h_colMtrx);

		if(i==(nModule_theta2-1)) { module_x_fix = module_x - size*0.5*cos(angle_i); }
	}
	
	TGeoVolume* fModuleSolid3[nModule_theta3];

	for(int i=0; i<nModule_theta3; i++ ){
		double angle_i;
		if(i==0) {
			angle_i = (nModule_theta1-1) * theta_rad1 + theta_rad1/2. + nModule_theta2 * theta_rad2  + theta_rad3/2.;
            module_y -= (size*0.5*sin(angle_i - theta_rad2/2. - theta_rad3/2.) + size*0.5*sin(angle_i) + size*cos(angle_i - theta_rad2/2. - theta_rad3/2.)/tan(angle_i - theta_rad3/2.));
		}
		else {
			angle_i = (nModule_theta1-1) * theta_rad1 + theta_rad1/2. + nModule_theta2 * theta_rad2 + i * theta_rad3 + theta_rad3/2.;
            module_y -= (size*0.5*sin(angle_i - theta_rad3) + size*0.5*sin(angle_i) + size*cos(angle_i - theta_rad3)/tan(angle_i - theta_rad3/2.));
		}
		
		module_x = size*0.5*cos(angle_i) + module_x_fix;
		cout<<i<<"  "<<module_x<<"   "<<module_y<<endl;

		// module center
		module_x2 = module_x + length/2. *sin(angle_i);
		module_y2 = module_y + length/2. *cos(angle_i);
		//G4cout<<i<<"  "<<module_x2<<"   "<<module_y2<<G4endl;

		double size_in_Phi_3 = module_y / radius * size; 
		double size_out_Phi_3 = ( module_y + length * cos(angle_i)) / radius * size;
		cout<<"NEW phi:  "<<size_in_Phi_3<<"     "<<size_out_Phi_3<<endl;

		fModuleSolid3[i] = gGeoManager -> MakeTrd2("ModuleSolid3_SEN", pLG, size_in_Phi_3/2., size_out_Phi_3/2., size/2., size_out3/2.,  length/2.);
		fModuleSolid3[i]->SetTransparency(80);
		fModuleSolid3[i]->SetLineColor(kGreen-4);
		
		// Rotation and translation of a plate inside the assembly
		double angle_i_deg = angle_i/TMath::Pi()*180.;

		TGeoTranslation Trans(0, module_y2, module_x2);
		TGeoRotation Rotate;
		Rotate.RotateX( 270 + angle_i_deg);
		TGeoCombiTrans colComb(Trans, Rotate);
		TGeoHMatrix *h_colMtrx = new TGeoHMatrix(colComb);
		Module_segment->AddNode(fModuleSolid3[i], i+nModule_theta1+nModule_theta2, h_colMtrx);
	}
	
	TGeoVolume *barrel = new TGeoVolumeAssembly("BARREL");

	for(int j=0; j<nPhi; j++){
		double RotAngle = 360./nPhi * j;
		TGeoTranslation Trans(0, 0, 0);
		TGeoRotation Rotate;
		Rotate.RotateZ( RotAngle );
		TGeoCombiTrans colComb(Trans, Rotate);
		TGeoHMatrix *h_colMtrx = new TGeoHMatrix(colComb);

		barrel->AddNode(Module_segment, j, h_colMtrx);
	}

	
	TGeoTranslation t_barrel(0,0,0);
	TGeoRotation r_barrel;  r_barrel.SetAngles(0, 0, 0);
	TGeoCombiTrans c_barrel(t_barrel, r_barrel);
	TGeoHMatrix* h_barrel = new TGeoHMatrix(c_barrel);
	

	return barrel;
	//top->AddNode(barrel, 0, h_barrel); //top有警告，不清楚什么情况
	
	//barrel->Write();
	/*
	for(int i=0; i<N_layer_barrel; i++){
		AddSensitiveVolume(ecal_scin_layer_barrel[i]);
		AddSensitiveVolume(ecal_lead_layer_barrel[i]);
	}
	*/
}
