
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

////////////////////////////////////////////////
/***           Tags           ***/
const int Verbose_print = DetPar::Verbose_print;
const bool Barrel_build = DetPar::Barrel_build;
const bool Hadron_endcap_build = DetPar::Hadron_endcap_build;
const bool E_endcap_build = DetPar::E_endcap_build;
const bool Draw_tag = DetPar::Draw_tag;
int Layer_zoom = 1;
//if(Draw_tag){ Layer_zoom = DetPar::Layer_zoom; }
const int N_Layer_zoom = Layer_zoom; // transfer to const, otherwise error...... why not warning....

/***            Parameters               ***/
//                 Shashlik
const double Size = DetPar::Size;
const int N_layer_barrel = DetPar::N_layer_barrel / N_Layer_zoom;
const int N_layer_hadron = DetPar::N_layer_hadron / N_Layer_zoom;
const double Thickness_scin = DetPar::Thickness_scin * N_Layer_zoom;
const double Thickness_lead = DetPar::Thickness_lead * N_Layer_zoom;

///   Detector general pesudorapidity eta 
const double Psrad_lw_e = DetPar::Psrad_lw_e;
const double Psrad_hg_e = DetPar::Psrad_hg_e;
const double Psrad_lw_h = DetPar::Psrad_lw_h;
const double Psrad_hg_h = DetPar::Psrad_hg_h;

//              Barrel
const double R_barrel = DetPar::R_barrel;
const int N_phi_barrel= DetPar::N_phi_barrel; 
int DetDev_barrel;

//        Hadron-endcap 
const double Zdist_hadron = DetPar::Zdist_hadron;
const double Module_shrink_hadron = DetPar::Module_shrink_hadron;  //actully not used
//const int N_max_row = 50;  // max in loop, not actual max 
int DetDev_hadron;

//        Electron - endcap
const double Crys_length = DetPar::Crys_length;
const double Crys_short = DetPar::Crys_short;
const double Zdist_e = DetPar::Zdist_e;   // distance of the center of endcap front face to the collision center
int DetDev_e;

/***  parameters from calculation  ***/
//	Shashlik
const double module_length_hadron = N_layer_hadron*(Thickness_scin+Thickness_lead);

//	Barrel
const double barrel_z_e = -R_barrel / (2.0*exp(-Psrad_hg_e) / (1 - pow(exp(-Psrad_hg_e), 2))); // use positive value
const double barrel_z_h = R_barrel / (2.0*exp(-Psrad_lw_h) / (1 - pow(exp(-Psrad_lw_h), 2)));
double angle_bin_barrel = TMath::Pi()*2.0/N_phi_barrel;
double tan_angle_barrel = TMath::Tan(angle_bin_barrel/2.0);

//	Hadron endcap
double R_hadron_outer = Zdist_hadron * 2.0*exp(-Psrad_lw_h) / (1 - pow(exp(-Psrad_lw_h), 2));
double R_hadron_inner = Zdist_hadron * 2.0*exp(-Psrad_hg_h) / (1 - pow(exp(-Psrad_hg_h), 2));
double module_short_hadron = Size;  //cm
double module_long_hadron = module_short_hadron * (1 + module_length_hadron / Zdist_hadron);
double theta_bin_hadron = 2 * TMath::ATan((module_long_hadron-module_short_hadron)/2/module_length_hadron);

//	electron endcap
double crys_long = Crys_short*(1.0 + Crys_length / Zdist_e);
double theta_bin_e = 2 * TMath::ATan((crys_long - Crys_short)/2/Crys_length);
//const double dTyvek = 0.12;
double tan_theta_lw = 2.0*exp(-Psrad_lw_e) / (1 - pow(exp(-Psrad_lw_e), 2));
double tan_theta_hg = 2.0*exp(-Psrad_hg_e) / (1 - pow(exp(-Psrad_hg_e), 2));
double R_e_inner = Zdist_e * (-tan_theta_lw);
double R_e_outer = Zdist_e * (-tan_theta_hg);

Double_t fPrecision = 0.01;

class FairGeoMedia;
class FairGeoBuilder;
void DefineMediaParameters(FairGeoMedia* , FairGeoBuilder*);
void BuildBarrel();
void BuildHadronEndcap();
void BuildEEndcap();

Int_t GetBarrel_Dev(Double_t  barrel_z_e, Double_t angle_bin_barrel, Double_t L_lead_min_barrel);
Int_t GetEndcap_Dev(Double_t R_hadron_outer, Double_t angle_bin, Double_t module_short_length);

TFile* geomFile;
TGeoVolume* top = new TGeoVolumeAssembly("TOP_EMC");


void create_emc_geo() {
	// Load MPD libraries
	//   mpdloadlibs(1, 1);
	// Set working directory

	TString gPath = gSystem->Getenv("VMCWORKDIR"); //works, get EiccRoot 
	const TString geoDetectorVersion = "v0";
	TString geoFileName = gPath + "/geometry/emc_"+ geoDetectorVersion + ".root";
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

	// TGeoManager is not used
	// Create geometry and global top volume
	/*
	gGeoManager = (TGeoManager*)gROOT->FindObject("FAIRGeom");
	gGeoManager->SetName("EiccEmc_geom");
	top->SetMedium(pMedAir);
	gGeoManager->SetTopVolume(top);
	*/

	if(Barrel_build){
		BuildBarrel();
	}

	if(Hadron_endcap_build){
		BuildHadronEndcap();
	}

	if(E_endcap_build){
		BuildEEndcap();
	}

	//gGeoManager->SetTopVisible(kFALSE);
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
	cout<<"EMC geometry file is generated as: "<<geoFileName<<endl;	
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

void BuildBarrel(){
	TGeoVolume* ecal_lead_layer_barrel[N_layer_barrel];
	TGeoVolume* ecal_scin_layer_barrel[N_layer_barrel];

	double L_lead_min_barrel = 0;
	for(int i=0; i<N_layer_barrel; i++){
		double L_lead_short = (R_barrel + i*(Thickness_lead+Thickness_scin))*tan_angle_barrel * 2;
		double L_lead_long = (R_barrel + i*(Thickness_lead+Thickness_scin)+Thickness_lead)*tan_angle_barrel * 2;
		double L_scin_long = (R_barrel + (i+1)*(Thickness_lead+Thickness_scin))*tan_angle_barrel * 2;
		ecal_lead_layer_barrel[i]=gGeoManager->MakeTrd2(Form("ecal_lead_layer_%d_SEN",i), pMedLead, L_lead_short/2, L_lead_long/2, L_lead_short/2, L_lead_long/2,  Thickness_lead/2); //half length
		ecal_scin_layer_barrel[i]=gGeoManager->MakeTrd2(Form("ecal_scin_layer_%d_SEN",i), pMedFscScint, L_lead_long/2, L_scin_long/2, L_lead_long/2, L_scin_long/2, Thickness_scin/2); //half length
		ecal_lead_layer_barrel[i]->SetLineColor(DetPar::color_lead);
		ecal_scin_layer_barrel[i]->SetLineColor(DetPar::color_scin);

		if(i==0) L_lead_min_barrel = L_lead_short;
	}

	TGeoVolume *module = new TGeoVolumeAssembly("MODULE");
	for(int i=0; i<N_layer_barrel; i++){
		double z_deviation=i*(Thickness_scin+Thickness_lead);
		module->AddNode(ecal_lead_layer_barrel[i], N_layer_barrel+i, new TGeoTranslation(0,0,z_deviation+Thickness_lead/2));
		module->AddNode(ecal_scin_layer_barrel[i], i, new TGeoTranslation(0,0,z_deviation+Thickness_lead+Thickness_scin/2));
	}  

	TGeoVolume *segment = new TGeoVolumeAssembly("SEGMENT");

	DetDev_barrel = GetBarrel_Dev(barrel_z_e, angle_bin_barrel, L_lead_min_barrel);
	if(Verbose_print>0) { std::cout<<"########################## DetDev_barrel:  "<<DetDev_barrel<<std::endl; }
	double module_x = 0;
	int h=0;
	std::vector<double> Z_module_barrel, R_module_barrel;
	while(1){
		double angle_h=	(2*h+1)*angle_bin_barrel/2;

		if(h==0) module_x = L_lead_min_barrel*0.5*cos(angle_bin_barrel/2);
		else 	module_x += L_lead_min_barrel*0.5*cos(angle_h-angle_bin_barrel) + L_lead_min_barrel*0.5*cos(angle_h) + L_lead_min_barrel*sin(angle_h)*tan(h*angle_bin_barrel); 

		if(module_x>barrel_z_h){ break;}

		TGeoTranslation t_module( module_x,  0, L_lead_min_barrel*0.5*sin(angle_h));  // No. start from 0
		TGeoRotation r_module;
		r_module.SetAngles(90, angle_h*180/TMath::Pi(), 0);

		TGeoCombiTrans c_module(t_module, r_module);
		TGeoHMatrix* h_module = new TGeoHMatrix(c_module);
		segment->AddNode(module, h+DetDev_barrel, h_module); 

		if(module_x<=barrel_z_e){ // less and equal is OK
			TGeoTranslation t_module_2( -1*module_x,  0, L_lead_min_barrel*0.5*sin(angle_h));
			TGeoRotation r_module_2;
			r_module_2.SetAngles(90, 360-1*angle_h*180/TMath::Pi(), 0);

			TGeoCombiTrans c_module_2(t_module_2, r_module_2);
			TGeoHMatrix* h_module_2 = new TGeoHMatrix(c_module_2);
			segment->AddNode(module, -h+DetDev_barrel-1, h_module_2); // h=0, No.= DetDev_barrel-1; h=DetDev_barrel-1, No.= 0
			if( Verbose_print>0 ) { std::cout<<"-h: "<<-h<<"   "<<-module_x<<endl; }
		}
		Z_module_barrel.push_back(module_x);
		R_module_barrel.push_back(R_barrel + L_lead_min_barrel*0.5*sin(angle_h));
		if( Verbose_print>0 ) { std::cout<<"h: "<<h<<"   "<<module_x<<"  "<<R_barrel + L_lead_min_barrel*0.5*sin(angle_h)<<std::endl; }
		h++;
	}
	// output the geometry parameters
	cout<<"######################### module in a row:  "<<h<<endl;
	for(int i=0; i<Z_module_barrel.size(); i++){ cout<<Z_module_barrel[i]<<", "; }
	cout<<endl;
	for(int i=0; i<R_module_barrel.size(); i++){ cout<<R_module_barrel[i]<<", "; }
	cout<<endl;

	TGeoVolume *barrel = new TGeoVolumeAssembly("BARREL");

	for(int i=0; i<N_phi_barrel; i++){
		double angle_ring = 360.0/(double)N_phi_barrel*i + 360.0/(double)N_phi_barrel/2.0;
		TGeoTranslation t_seg(R_barrel*TMath::Sin(angle_ring/360.0*2*TMath::Pi()), 0, R_barrel*TMath::Cos(angle_ring/360.0*2*TMath::Pi())); //reverse Y to match the rotation angle
		TGeoRotation r_seg;
		r_seg.SetAngles(90, angle_ring, 0);
		TGeoCombiTrans c_seg(t_seg, r_seg);
		TGeoHMatrix* h_seg = new TGeoHMatrix(c_seg);
		barrel->AddNode(segment, i, h_seg);
	}

	TGeoTranslation t_barrel(0,0,0);
	TGeoRotation r_barrel;  r_barrel.SetAngles(90, 90, 0);
	TGeoCombiTrans c_barrel(t_barrel, r_barrel);
	TGeoHMatrix* h_barrel = new TGeoHMatrix(c_barrel);

	top->AddNode(barrel, 0, h_barrel);
	barrel->Write();
	/*
	for(int i=0; i<N_layer_barrel; i++){
		AddSensitiveVolume(ecal_scin_layer_barrel[i]);
		AddSensitiveVolume(ecal_lead_layer_barrel[i]);
	}
	*/
}

void BuildHadronEndcap(){
	// build layers
	TGeoVolume* ecal_lead_layer_hadron[N_layer_hadron];
	TGeoVolume* ecal_scin_layer_hadron[N_layer_hadron];

	for(int i=0; i<N_layer_barrel; i++){
		double L_lead_short = module_short_hadron * (1 + i*(Thickness_lead+Thickness_scin) / Zdist_hadron);
		double L_lead_long = module_short_hadron * (1 + (i*(Thickness_lead+Thickness_scin)+Thickness_lead) / Zdist_hadron);
		double L_scin_long = module_short_hadron * (1 + (i+1)*(Thickness_lead+Thickness_scin) / Zdist_hadron);
		ecal_lead_layer_hadron[i]=gGeoManager->MakeTrd2(Form("ecal_lead_layer_hadron_%d_SEN",i), pMedLead, L_lead_short/2, L_lead_long/2, L_lead_short/2, L_lead_long/2,  Thickness_lead/2); //half length
		ecal_scin_layer_hadron[i]=gGeoManager->MakeTrd2(Form("ecal_scin_layer_hadron_%d_SEN",i), pMedFscScint, L_lead_long/2, L_scin_long/2, L_lead_long/2, L_scin_long/2, Thickness_scin/2); //half length
		ecal_lead_layer_hadron[i]->SetLineColor(DetPar::color_lead);
		ecal_scin_layer_hadron[i]->SetLineColor(DetPar::color_scin);
	}

	//build module_hadron
	TGeoVolume *module_hadron = new TGeoVolumeAssembly("MODULE_Hadron");
	for(int i=0; i<N_layer_hadron; i++){
		double z_deviation=i*(Thickness_scin+Thickness_lead);
		module_hadron->AddNode(ecal_lead_layer_hadron[i], N_layer_hadron+i, new TGeoTranslation(0,0,z_deviation+Thickness_lead/2));
		module_hadron->AddNode(ecal_scin_layer_hadron[i], i, new TGeoTranslation(0,0,z_deviation+Thickness_lead+Thickness_scin/2));// check the deviation, where is the center point; if N_layer is necessary?
	}

	// build segment
	TGeoVolume *endcap_hadron = new TGeoVolumeAssembly("Endcap_Hadron");

	DetDev_hadron =  GetEndcap_Dev(R_hadron_outer, theta_bin_hadron, module_short_hadron);
	if(Verbose_print>0) { std::cout<<"########################## DetDev_hadron_endcap:  "<<DetDev_hadron<<std::endl; }
	TGeoVolume *row_hadron[DetDev_hadron];// = new TGeoVolumeAssembly("ROW");
	double X_hadron[DetDev_hadron];
	double module_y = 0, module_X=0;
	//module_x = 0;  //defined before
	for(int i = 0; i < DetDev_hadron; i++){ // use DetDev_hadron* 2 instead other larger value, to reduce the null row  
		row_hadron[i] = new TGeoVolumeAssembly(Form("ROW_%d", i)); //define row as TGeoVolumeAssembly

		double angle_i = (2*i+1)*theta_bin_hadron/2;
		if(i==0) module_y = module_short_hadron*0.5*cos(theta_bin_hadron/2);
		else    module_y += module_short_hadron*0.5*cos(angle_i-theta_bin_hadron) + module_short_hadron*0.5*cos(angle_i) + module_short_hadron*sin(angle_i)*tan(i*theta_bin_hadron);

		for(int j = 0; j < DetDev_hadron; j++){
			double angle_j= (2*j+1)*theta_bin_hadron/2;
			if(j==0) module_X = module_short_hadron*0.5*cos(theta_bin_hadron/2);
			else    module_X += module_short_hadron*0.5*cos(angle_j-theta_bin_hadron) + module_short_hadron*0.5*cos(angle_j) + module_short_hadron*sin(angle_j)*tan(j*theta_bin_hadron);

			double radius_module = sqrt(module_X*module_X + module_y*module_y);
			if(radius_module<R_hadron_inner) continue; // less: continue; lager: break

			TGeoTranslation t_module( module_X,  0, module_short_hadron*0.5*sin(angle_j));
			TGeoRotation r_module;
			r_module.SetAngles(90, angle_j*180/TMath::Pi(), 0);  // rotate 90 firstly ,the rotate by X axis
			TGeoCombiTrans c_module(t_module, r_module);
			TGeoHMatrix* h_module = new TGeoHMatrix(c_module);

			TGeoTranslation t_module_2( -module_X,  0, module_short_hadron*0.5*sin(angle_j));
			TGeoRotation r_module_2;
			r_module_2.SetAngles(90, 360-angle_j*180/TMath::Pi(), 0);
			TGeoCombiTrans c_module_2(t_module_2, r_module_2);
			TGeoHMatrix* h_module_2 = new TGeoHMatrix(c_module_2);

			row_hadron[i]->AddNode(module_hadron, j+DetDev_hadron, h_module);
			row_hadron[i]->AddNode(module_hadron, -j+DetDev_hadron-1, h_module_2);

			if(Verbose_print>0) { std::cout<<"i: "<<i<<"   "<<module_y<<"  "<<" j: "<<j<<"   "<<module_X<<"  "<<std::endl; }

			if(radius_module>R_hadron_outer) break; // Put it after Addnode, and keep the first module larger this area. overlap with barral is OK, but not for inner 
			//module_short*0.5*sin(angle_j)<<std::endl;
		}

		TGeoTranslation t_module_row( module_y, 0, module_short_hadron*0.5*sin(angle_i)); //dz is necessary
		TGeoRotation r_module_row;
		r_module_row.SetAngles(90, angle_i*180/TMath::Pi(), 0);   //this 90 degree rotaotion make reconstruction werid 
		TGeoCombiTrans c_module_row(t_module_row, r_module_row);
		TGeoHMatrix* h_module_row = new TGeoHMatrix(c_module_row);
		endcap_hadron->AddNode(row_hadron[i], i+DetDev_hadron, h_module_row);

		TGeoTranslation t_module_row_2( -module_y, 0, module_short_hadron*0.5*sin(angle_i));
		TGeoRotation r_module_row_2;
		r_module_row_2.SetAngles(90, 360-angle_i*180/TMath::Pi(), 0);
		TGeoCombiTrans c_module_row_2(t_module_row_2, r_module_row_2);
		TGeoHMatrix* h_module_row_2 = new TGeoHMatrix(c_module_row_2);
		endcap_hadron->AddNode(row_hadron[i], -i+DetDev_hadron-1, h_module_row_2);

		X_hadron[i] = module_y;
	}
	for(int i=0; i<DetDev_hadron; i++) { cout<<X_hadron[i]<<", "; }
	cout<<endl;

	top->AddNode(endcap_hadron, 1, new TGeoTranslation(0,0, Zdist_hadron));
	endcap_hadron->Write();
}

void BuildEEndcap(){
	TGeoVolume* crysModule = gGeoManager -> MakeTrd2("crysModule_SEN", pMedCsI, Crys_short/2., crys_long/2., Crys_short/2., crys_long/2., Crys_length/2.);
	crysModule -> SetLineColor(DetPar::color_crys);
	//TGeoVolume* module_xtyvek = gGeoManager -> MakeBox("module_tyvek", tyvek, dTyvek*0.5, dTyvek+siz_crys*0.5, len_crys*0.5);
	//module_xtyvek -> SetLineColor(kGreen);
	//TGeoVolume* module_ytyvek = gGeoManager -> MakeBox("module_tyvek", tyvek, (siz_crys)*0.5, dTyvek*0.5, len_crys*0.5);
	//module_ytyvek -> SetLineColor(kOrange);
	//module_ytyvek -> SetLineColor(kGreen);

	// make ecap module; the front face should be as refered face
	TGeoRotation *mod0 = new TGeoRotation();
	mod0 -> SetAngles(0, 0, 0);
	TGeoCombiTrans *modMatrix = new TGeoCombiTrans("", 0.0, 0.0, 0.5*Crys_length, mod0); // move the center to front face
	TGeoVolume *ecapModule = new TGeoVolumeAssembly("ecapModule");
	ecapModule -> AddNode(crysModule, 0, modMatrix);

	TGeoVolume *e_endcap_vol = new TGeoVolumeAssembly("E_endcap");
	
	DetDev_e =  GetEndcap_Dev(R_e_outer, theta_bin_e, Crys_short);
	if(Verbose_print>0) { std::cout<<"########################## DetDev_e_endcap:  "<<DetDev_e<<std::endl; }

	TGeoVolume *row[DetDev_e];
	double X_e[DetDev_e];
	double xmod = 0, ymod = 0, zmod = 0;
	for(int irow=0; irow<DetDev_e; irow++){
		row[irow] = new TGeoVolumeAssembly(Form("ROW_%d", irow));
		double rowAngle = (2*irow + 1) * theta_bin_e/2;
		if(irow == 0) { ymod = 0.5*Crys_short * cos(theta_bin_e/2); }
		else{ ymod += 0.5*Crys_short * cos(rowAngle - theta_bin_e) + 0.5*Crys_short * cos(rowAngle) + Crys_short * sin(rowAngle) * tan(irow * theta_bin_e); }

		for(int icol=0; icol<DetDev_e; icol++){
			double colAngle = (2*icol + 1) * theta_bin_e/2;
			if(icol == 0){ xmod = 0.5*Crys_short * cos(theta_bin_e/2); }
			else{ xmod += 0.5*Crys_short * cos(colAngle - theta_bin_e) + 0.5*Crys_short * cos(colAngle) + Crys_short * sin(colAngle) * tan(icol * theta_bin_e); }
			zmod = 0.5*Crys_short * sin(colAngle);

			double rmod = sqrt(xmod*xmod + ymod*ymod);
			if(rmod < R_e_inner) continue;

			if(Verbose_print>0) { cout << "irow and icol: " << irow << "  " << icol << "; x, y, z: " << xmod << "; " << ymod << "; " << zmod << endl; }

			TGeoTranslation colTrans(xmod, 0, zmod);
			TGeoRotation colRotate;
			colRotate.SetAngles(90, colAngle*180/TMath::Pi(), 0);
			TGeoCombiTrans colComb(colTrans, colRotate);
			TGeoHMatrix *h_colMtrx = new TGeoHMatrix(colComb);
			row[irow] -> AddNode(ecapModule, icol+DetDev_e, h_colMtrx);

			TGeoTranslation colTrans_2(-xmod, 0, zmod);
			TGeoRotation colRotate_2;
			colRotate_2.SetAngles(90, 360.-colAngle*180/TMath::Pi(), 0);
			TGeoCombiTrans colComb_2(colTrans_2, colRotate_2);
			TGeoHMatrix *h_colMtrx_2 = new TGeoHMatrix(colComb_2);
			row[irow] -> AddNode(ecapModule, -icol+DetDev_e-1, h_colMtrx_2);

			if(rmod > R_e_outer) break;
		}

		zmod = 0.5*Crys_short * sin(rowAngle);

		TGeoTranslation rowTrans(ymod, 0, zmod);
		TGeoRotation rowRotate;
		rowRotate.SetAngles(90, rowAngle*180/TMath::Pi(), 0);
		TGeoCombiTrans rowComb(rowTrans, rowRotate);
		TGeoHMatrix *h_rowMtrx = new TGeoHMatrix(rowComb);
		e_endcap_vol -> AddNode(row[irow], irow+DetDev_e, h_rowMtrx);

		TGeoTranslation rowTrans_2(-ymod, 0, zmod);
		TGeoRotation rowRotate_2;
		rowRotate_2.SetAngles(90, 360.-rowAngle*180/TMath::Pi(), 0);
		TGeoCombiTrans rowComb_2(rowTrans_2, rowRotate_2);
		TGeoHMatrix *h_rowMtrx_2 = new TGeoHMatrix(rowComb_2);
		e_endcap_vol -> AddNode(row[irow], -irow+DetDev_e-1, h_rowMtrx_2);

		X_e[irow] = ymod;
	}
	for(int i=0; i<DetDev_e; i++) { cout<<X_e[i]<<", "; }
	cout<<endl;

	// arrange the segments to assemble an electron endcap (ecap)
	double xrot = 180;
	double zmov = -Zdist_e;
	TGeoRotation *rot0 = new TGeoRotation();
	rot0 -> RotateZ(0);
	rot0 -> RotateX(xrot);
	TGeoCombiTrans *capMatrix0 = new TGeoCombiTrans("", 0.0, 0.0, zmov, rot0);
	top->AddNode(e_endcap_vol, 2, capMatrix0);
	e_endcap_vol->Write();

	// sensitive detector
	//AddSensitiveVolume(crysModule);
}

Int_t GetBarrel_Dev(Double_t  barrel_z_e, Double_t angle_bin_barrel, Double_t L_lead_min_barrel)
{
	double module_x = 0;
	Int_t h=0;
	while(1){
		double angle_h=	(2*h+1) * angle_bin_barrel/2;
		if(h==0) module_x = L_lead_min_barrel*0.5*cos(angle_bin_barrel/2);
		else 	module_x += L_lead_min_barrel*0.5*cos(angle_h-angle_bin_barrel) + L_lead_min_barrel*0.5*cos(angle_h) + L_lead_min_barrel*sin(angle_h)*tan(h*angle_bin_barrel); 

		if(module_x>barrel_z_e){ 
			std::cout<<"Barrel DetID Deviation h: "<<h<<"   "<<-module_x<<endl;
			break;
		}
		h++;
	}
	return h; //return the number of modules, need to add additional (+1), but the last one not pass the cut(-1)
}

Int_t GetEndcap_Dev(Double_t R_hadron_outer, Double_t angle_bin, Double_t module_short_length)
{
	double module_x=0;
	double module_y = module_short_length*0.5*cos(angle_bin/2); //use the first row of y
	int j;
	for(j = 0; j < 1000; j++){
			double angle_j= (2*j+1)*angle_bin/2;
			if(j==0) module_x = module_short_length*0.5*cos(angle_bin/2);
			else    module_x += module_short_length*0.5*cos(angle_j-angle_bin) + module_short_length*0.5*cos(angle_j) + module_short_length*sin(angle_j)*tan(j * angle_bin);

			double radius_module = sqrt(module_x*module_x + module_y*module_y);
			if(radius_module>R_hadron_outer){
				std::cout<<"Endcap DetID Deviation j: "<<j+1<<"   "<<module_x<<endl;
				break;
			}
	}
	return j+1; //return the number of modules, add additional 1 that larger than radius_module
}
