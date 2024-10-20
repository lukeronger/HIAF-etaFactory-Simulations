/*
   This program is aimed ot study the vertex finding and fitting at the EicC detector
*/ 
//***********************************************************************************
// Note for v1:
// In this version, the event generated by pythia6 is used
//
//
// By Guoaq -- Aug./10/2021
//***********************************************************************************
// Note for v2:
// In this version, some improvements are done based on the v1
//
// By Guoaq -- Oct./29/2021
//***********************************************************************************
// Note for v3:
// In this version, the tree of track efficiency is added
//
// By Guoaq -- Dec./29/2021
//***********************************************************************************
// Note for v4:
// In this version, the pdg selection is added and the extropolation method is changed
//
// By Guoaq -- Dec./30/2021
//***********************************************************************************

#include <ConstField.h>
#include <Exception.h>
#include <FieldManager.h>
#include <KalmanFitterRefTrack.h>
#include <StateOnPlane.h>
#include <Track.h>
#include <TrackPoint.h>

#include <MaterialEffects.h>
#include <RKTrackRep.h>
#include <TGeoMaterialInterface.h>
#include <KalmanFittedStateOnPlane.h>
#include <KalmanFitterInfo.h>

#include <EventDisplay.h>

#include <HelixTrackModel.h>
#include <MeasurementCreator.h>
#include <PlanarMeasurement.h>

#include <GFRaveVertexFactory.h>

#include <TDatabasePDG.h>
#include <TEveManager.h>
#include <TGeoManager.h>
#include <TRandom.h>
#include <TVector3.h>
#include <vector>

#include <TROOT.h>
#include <TClonesArray.h>
#include <TFile.h>
#include <TTree.h>
#include <TDatabasePDG.h>
#include <TMath.h>

#include <iostream>
#include <fstream>

void smearpixel(double pixelsize, int det_id, double input_X, double input_Y, double input_Z, double &output_X, double &output_Y, double &output_Z)
{
    //for the barrel part
    if(det_id==0)
    {
	TVector3 Vec_input(input_X, input_Y, input_Z);
	double input_phi = Vec_input.Phi() + TMath::Pi(); // change to 0~2pi;
	double input_z = Vec_input.Z() + 10000;
	double input_r = Vec_input.Perp();

	double interval_phi = pixelsize/input_r; 
	double interval_z   = pixelsize;

	int index_phi = int(input_phi / interval_phi);
	int index_z   = int(input_z   / interval_z);

	double output_phi = interval_phi/2.0+interval_phi*index_phi - TMath::Pi();
	double output_z   = interval_z/2.0+interval_z*index_z - 10000;
	double output_r   = input_r;

	TVector3 Vec_output(output_r*cos(output_phi),output_r*sin(output_phi),output_z);

	output_X =Vec_output.X();
	output_Y =Vec_output.Y();
	output_Z =Vec_output.Z();
    }	

    //for the forward and backward part,  det_id from 9 to 13 : backward part, from 14 to 18 : forward part
    if(det_id==1||det_id==2)
    {
	double input_x = input_X + 10000;
	double input_y = input_Y + 10000;

	int index_x = int(input_x / pixelsize);
	int index_y = int(input_y / pixelsize);

	output_X = pixelsize/2.0 + pixelsize*index_x -10000;
	output_Y = pixelsize/2.0 + pixelsize*index_y -10000;
	output_Z = input_Z;
    }	

}


void smearpixel_gauss(double pixelsize, int det_id, double input_X, double input_Y, double input_Z, double &output_X, double &output_Y, double &output_Z)
{
    //for the barrel part
    if(det_id==0)
    {
	TVector3 Vec_input(input_X, input_Y, input_Z);
	double input_phi = Vec_input.Phi() + TMath::Pi(); // change to 0~2pi;
	double input_r = Vec_input.Perp();

	double output_phi = Vec_input.Phi() + gRandom->Gaus(0,pixelsize/(input_r*sqrt(12))); // change to 0~2pi;

	output_X =input_r*cos(output_phi);
	output_Y =input_r*sin(output_phi);
	output_Z =input_Z + gRandom->Gaus(0,pixelsize/sqrt(12));
    }	

    //for the forward and backward part,  det_id from 9 to 13 : backward part, from 14 to 18 : forward part
    if(det_id==1||det_id==2)
    {
	output_X = gRandom->Gaus(0,pixelsize/sqrt(12)) + input_X;
	output_Y = gRandom->Gaus(0,pixelsize/sqrt(12)) + input_Y;
	output_Z = input_Z;
    }	
}



// void smearpixel(double pixelsize, int det_id, double input_X, double input_Y, double input_Z, double &output_X, double &output_Y, double &output_Z)
// {
//     //for the barrel part
//     if(det_id>=3&&det_id<=8)
//     {
// 	TVector3 Vec_input(input_X, input_Y, input_Z);
// 	double input_phi = Vec_input.Phi() + TMath::Pi(); // change to 0~2pi;
// 	double input_z = Vec_input.Z() + 10000;
// 	double input_r = Vec_input.Perp();
// 
// 	double interval_phi = pixelsize/input_r; 
// 	double interval_z   = pixelsize;
// 
// 	int index_phi = int(input_phi / interval_phi);
// 	int index_z   = int(input_z   / interval_z);
// 
// 	double output_phi = interval_phi/2.0+interval_phi*index_phi - TMath::Pi();
// 	double output_z   = interval_z/2.0+interval_z*index_z - 10000;
// 	double output_r   = input_r;
// 
// 	TVector3 Vec_output(output_r*cos(output_phi),output_r*sin(output_phi),output_z);
// 
// 	output_X =Vec_output.X();
// 	output_Y =Vec_output.Y();
// 	output_Z =Vec_output.Z();
//     }	
// 
//     //for the forward and backward part,  det_id from 9 to 13 : backward part, from 14 to 18 : forward part
//     if(det_id>=9&&det_id<=18)
//     {
// 	double input_x = input_X + 10000;
// 	double input_y = input_Y + 10000;
// 
// 	int index_x = int(input_x / pixelsize);
// 	int index_y = int(input_y / pixelsize);
// 
// 	output_X = pixelsize/2.0 + pixelsize*index_x -10000;
// 	output_Y = pixelsize/2.0 + pixelsize*index_y -10000;
// 	output_Z = input_Z;
//     }	
// 
// }

int main(int argc, char ** argv) {

    // User defined paramters

    int nEvents = 100000;
    int nGenTracks = 2;
    const int nMaxHit = 1000;
    bool smearOn =true;
    bool debug =false;
    bool refit =true;
    const bool resort = true;

    // the cut on the Hit number, [NHits_Low, NHits_High]
   
    //int NHits_Low = 2;   //
    //int NHits_High = 9;  //
    
    int NHits_Low = 3;   //   
    int NHits_High = 9;  //
    
    // int NHits_Low = 2;   //
    // int NHits_High = 9;  //

    double momentum = 0.1;     // GeV
    double pixel_size = 0.001;   // cm; size of the pixel 10 micron
    double Bfield =15.;

    //TString fin_name = "input_file/test_D0_decay.root";
    TString fin_name = "/home/guoaq/software/EiccRoot/macro/test.root";
    TString fout_name = "tracks.root";
    TString fout_name_txt = "Tracks_for_vertex_EicC.txt";
    TString fout_name_csv = "Tracks_for_vertex_EicC.csv";

    if(argc >= 2) fin_name = Form("/public/hep2/guoaq/root_file/%s",argv[1]); 
    if(argc >= 3) fout_name = argv[2]; 
    if(argc >= 4) fout_name_txt = argv[3]; 
    if(argc >= 5) fout_name_csv = argv[4]; 
    if(argc >= 6) nEvents = (int)atoi(argv[5]); 
    if(argc >= 7) Bfield = (double)atoi(argv[6]); 

    std::cout<<"B field is "<<Bfield<<std::endl;
    std::cout<<"Input root file is "<<fin_name<<std::endl;
    std::cout<<"Output root file is "<<fout_name<<std::endl;
    // User defined paramters

    gRandom->SetSeed(14);

    // init MeasurementCreator
    genfit::MeasurementCreator measurementCreator;

    // init geometry and mag. field
    new TGeoManager("Geometry", "Geane geometry");
    //TGeoManager::Import("genfitGeom.root");
    TGeoManager::Import("geofile_full.root");
    
    genfit::FieldManager::getInstance()->init(new genfit::ConstField(0.,0., Bfield)); // 15 kGauss
    genfit::MaterialEffects::getInstance()->init(new genfit::TGeoMaterialInterface());

    // init event display
    // genfit::EventDisplay* display = genfit::EventDisplay::getInstance(); //display_1

    // init fitter
    genfit::AbsKalmanFitter* fitter = new genfit::KalmanFitterRefTrack();

    // init vertex factory
    genfit::GFRaveVertexFactory vertexFactory(2);
    vertexFactory.setMethod("kalman-smoothing:1");//What does 1 mean? - Guoaq-2021/Apr/26

    // init root file
    // tracks and vertices are written to two different branches
    TFile* trackFile = new TFile(fout_name, "RECREATE");
    trackFile->cd();
    TTree* tree = new TTree("tree", "fitted tracks");
    TClonesArray trackArray("genfit::Track");
    tree->Branch("trackBranch", &trackArray, 32000, -1);

    TClonesArray vertexArray("genfit::GFRaveVertex");
    tree->Branch("vertexBranch", &vertexArray, 32000, -1);

    TTree *t_out = new TTree("t_out","");
    double x_truth, y_truth, z_truth;
    double x_rec, y_rec, z_rec;
    double x_res, y_res, z_res;
    double chi2;
    int N_Trk;
    int I_Evt;
    t_out->Branch("x_truth", &x_truth, "x_truth/D");
    t_out->Branch("y_truth", &y_truth, "y_truth/D");
    t_out->Branch("z_truth", &z_truth, "z_truth/D");
    t_out->Branch("x_rec",   &x_rec,   "x_rec/D");
    t_out->Branch("y_rec",   &y_rec,   "y_rec/D");
    t_out->Branch("z_rec",   &z_rec,   "z_rec/D");
    t_out->Branch("x_res",   &x_res,   "x_res/D");
    t_out->Branch("y_res",   &y_res,   "y_res/D");
    t_out->Branch("z_res",   &z_res,   "z_res/D");
    t_out->Branch("chi2",    &chi2,    "chi2/D");
    t_out->Branch("N_Trk",   &N_Trk,   "N_Trk/I");
    t_out->Branch("I_Evt",   &I_Evt,   "I_Evt/I");

    TTree *t_track = new TTree("t_track","");
    double dcaz, dcar, p, pt;
    int pid;
    double Achi2, eta;
    t_track->Branch("dcaz",   &dcaz,   "dcaz/D");
    t_track->Branch("dcar",   &dcar,   "dcar/D");
    t_track->Branch("p",      &p,      "p/D");
    t_track->Branch("pt",     &pt,     "pt/D");
    t_track->Branch("eta",    &eta,    "eta/D");
    t_track->Branch("pid",    &pid,    "pid/I");

    //const unsigned int nEvents = t_data->GetEntries();

    double px_truth_eff, py_truth_eff, pz_truth_eff, pt_truth_eff, p_truth_eff, theta_truth_eff, eta_truth_eff;
    int Isfitted;

    TTree *t_out_eff = new TTree("t_out_eff","");
    t_out_eff->Branch("px_truth", &px_truth_eff, "px_truth/D");
    t_out_eff->Branch("py_truth", &py_truth_eff, "py_truth/D");
    t_out_eff->Branch("pz_truth", &pz_truth_eff, "pz_truth/D");
    t_out_eff->Branch("pt_truth", &pt_truth_eff, "pt_truth/D");
    t_out_eff->Branch("p_truth",  &p_truth_eff, "p_truth/D");
    t_out_eff->Branch("theta_truth", &theta_truth_eff, "theta_truth/D");
    t_out_eff->Branch("eta_truth", &eta_truth_eff, "eta_truth/D");
    t_out_eff->Branch("Isfitted", &Isfitted, "Isfitted/I");


    std::vector<genfit::Track*> tracks;
    std::vector<int> pdgs;
    std::vector<genfit::MeasuredStateOnPlane*> states;
    std::vector<genfit::GFRaveVertex*> vertices;


    // read the input file
    TFile *f_data=new TFile(fin_name);
    TTree *t_data=(TTree*)f_data->Get("eiccsim");

    //int Event, nHit;
    double X[nMaxHit],Y[nMaxHit],Z[nMaxHit];
    double PX[nMaxHit],PY[nMaxHit],PZ[nMaxHit];
    int DetID[nMaxHit], TrackID[nMaxHit];
    double PID[nMaxHit];

    for(int k=0;k<nMaxHit;k++)
    {
	X[k]=-100;
	Y[k]=-100;
	Z[k]=-100;
	PX[k]=-100;
	PY[k]=-100;
	PZ[k]=-100;
	DetID[k]=-100;
	PID[k]=-100;
    }

    t_data->SetBranchAddress("EiccMvdPoint.fX",           X);
    t_data->SetBranchAddress("EiccMvdPoint.fY",           Y);
    t_data->SetBranchAddress("EiccMvdPoint.fZ",           Z);
    t_data->SetBranchAddress("EiccMvdPoint.fPx",          PX);
    t_data->SetBranchAddress("EiccMvdPoint.fPy",          PY);
    t_data->SetBranchAddress("EiccMvdPoint.fPz",          PZ);
    t_data->SetBranchAddress("EiccMvdPoint.fDetectorID",  DetID);
    t_data->SetBranchAddress("EiccMvdPoint.fTrackID",     TrackID);
    t_data->SetBranchAddress("EiccMvdPoint.fTime",        PID);

    // const unsigned int nEvents = t_data->GetEntries();


    std::ofstream fout(fout_name_txt,std::ios::app);
    std::ofstream fout1(fout_name_csv,std::ios::app);

    int nHit = 0;	
    int nEvent = 0;
    int TotTrack = 0;
    // main loop
    for (unsigned int iEvent=0; iEvent<nEvents; ++iEvent){

	std::cout << "Event Nr. " << iEvent << std::endl;
	
	if(iEvent == 65676) continue;
	
	// clean up
	trackArray.Delete();
	vertexArray.Delete();
	tracks.clear();
	states.clear();
	vertices.clear();
	pdgs.clear();

	// access data from tree
	t_data->GetEntry(iEvent);
	// get the number of hit, it will be better to record this value !! 
	nHit = 0;	
	for(int ib=0; ib<nMaxHit;ib++)
	{
	    if(X[ib]!=-100) nHit++;
	}
	std::cout<<"NHit is "<<nHit<<std::endl;

	if(nHit==0) continue;

	int ITrack=TrackID[0];
	int NTrack=1;
	std::vector<int> TrackIDCol;
	std::vector<int> PIDCol;
	TrackIDCol.clear();
	PIDCol.clear();
	TrackIDCol.push_back(ITrack);
	PIDCol.push_back(PID[0]);
	if(debug) std::cout<<"the first track ID is "<<TrackID[0]<<std::endl;
	if(debug) std::cout<<"the first PID is "<<PID[0]<<std::endl;

	for(int ic=1; ic<nHit; ic++)
	{
		if(debug) std::cout<<"Track ID is "<<TrackID[ic]<<std::endl;
		if(debug) std::cout<<"PID is "<<PID[ic]<<std::endl;
		if(TrackID[ic]!=ITrack) 
		{
			ITrack = TrackID[ic];
			NTrack++;
			TrackIDCol.push_back(ITrack);
			PIDCol.push_back(PID[ic]);
			if(debug) std::cout<<"Selected Track index is "<<ITrack<<std::endl;
			if(debug) std::cout<<"Selected PID is "<<PID[ic]<<std::endl;
		}
	}	
	
	if(debug) std::cout<<"NTrack is "<<NTrack<<std::endl;
	if(debug) std::cout<<"Size of PIDCol is "<<PIDCol.size()<<std::endl;

	//unsigned int nTracks = nGenTracks;
	unsigned int nTracks = NTrack;
	std::vector<genfit::PlanarMeasurement*>  measurements;

	// for vertex fitting
	std::vector<genfit::KalmanFittedStateOnPlane*>  StateAtOrigin;

	for (unsigned int iTrack=0; iTrack<nTracks; iTrack++){

            measurements.clear();
	    
	    Isfitted = 0;

	    int itr = 0;
	    for(int m=0; m<nHit;m++)
	    {
		    if(TrackID[m]==TrackIDCol[iTrack]) 
		    {
			    itr=m;
			    break;
		    }
	    }
            
	    if(debug) std::cout<<"the first hit is "<<itr<<" in the "<<iTrack<<" track"<<std::endl;
	    
	    // true start values : how to get this value directly from the tree  -- Guoaq 2021/Apr/26
	    momentum  = sqrt(PX[itr]*PX[itr]+PY[itr]*PY[itr]+PZ[itr]*PZ[itr]);
	    
	    //TVector3 pos(0, 0, 0);
	    TVector3 pos(X[itr], Y[itr], Z[itr]);
	    TVector3 mom(PX[itr],PY[itr],PZ[itr]);
	    
	    px_truth_eff = mom.Px(); py_truth_eff = mom.Py(); pz_truth_eff = mom.Pz(); p_truth_eff = mom.Mag(); pt_truth_eff = mom.Pt(); theta_truth_eff = mom.Theta(); eta_truth_eff = mom.PseudoRapidity();
            
	    if(debug) std::cout<<"the initial position is  "<<X[itr]<<", "<<Y[itr]<<", "<<Z[itr]<<" in the "<<iTrack<<" track"<<std::endl;
	    if(debug) std::cout<<"the initial momentum is  "<<PX[itr]<<", "<<PY[itr]<<", "<<PZ[itr]<<" in the "<<iTrack<<" track"<<std::endl;

	    // helix track model
	    int pdg = PIDCol[iTrack] ;               // particle pdg code
	    if(debug)std::cout<<"pdg is "<<pdg<<std::endl;

            // Only select the pion, kaon and proton
	    if(abs(pdg)!=211&&abs(pdg)!=321&&abs(pdg)!=2212) continue;
	    TotTrack++;

            
	    const double charge = TDatabasePDG::Instance()->GetParticle(pdg)->Charge()/(3.);
	    //genfit::HelixTrackModel* helix = new genfit::HelixTrackModel(pos, mom, charge);
	    //measurementCreator.setTrackModel(helix);

	    unsigned int nMeasurements = nHit;

	    // smeared start values
	    const bool smearPosMom = false;     // init the Reps with smeared pos and mom
	    const double posSmear = 0.001;     // cm
	    const double momSmear = 1. /180.*TMath::Pi();     // rad
	    const double momMagSmear = 0.01;   // relative
	    
	    if(debug)std::cout<<"Before set position momentum and covarianceto a track "<<std::endl;

	    TVector3 posM(pos);
	    TVector3 momM(mom);
	    if (smearPosMom) {
	        posM.SetX(gRandom->Gaus(posM.X(),posSmear));
	        posM.SetY(gRandom->Gaus(posM.Y(),posSmear));
	        posM.SetZ(gRandom->Gaus(posM.Z(),posSmear));

	        momM.SetPhi(gRandom->Gaus(mom.Phi(),momSmear));
	        momM.SetTheta(gRandom->Gaus(mom.Theta(),momSmear));
	        momM.SetMag(gRandom->Gaus(mom.Mag(), momMagSmear*mom.Mag()));
	    }
	    
	    // approximate covariance
	    TMatrixDSym covM(6);
	    double resolution = pixel_size/sqrt(12); // need to be set correctly
	    for (int i = 0; i < 3; ++i)
		covM(i,i) = resolution*resolution;
	    for (int i = 3; i < 6; ++i)
		covM(i,i) = pow(resolution / nMeasurements / sqrt(3), 2);

	    // trackrep
	    genfit::AbsTrackRep* rep = new genfit::RKTrackRep(pdg);

	    // smeared start state
	    genfit::MeasuredStateOnPlane stateSmeared(rep);
	    rep->setPosMomCov(stateSmeared, posM, momM, covM);
	    
	    if(debug)std::cout<<"Before create a track "<<std::endl;

	    // create track
	    TVectorD seedState(6);
	    TMatrixDSym seedCov(6);
	    rep->get6DStateCov(stateSmeared, seedState, seedCov);

	    new(trackArray[iTrack]) genfit::Track(rep, seedState, seedCov); // the syntax here is strange ! Guoaq - 2021/Apr/26
	    genfit::Track* trackPtr(static_cast<genfit::Track*>(trackArray.At(iTrack)));
	    
	    //tracks.push_back(trackPtr);

	    // // create random measurement types
	    // std::vector<genfit::eMeasurementType> measurementTypes;
	    // for (unsigned int i = 0; i < nMeasurements; ++i)
	    //     measurementTypes.push_back(genfit::eMeasurementType(gRandom->Uniform(8)));
	    // // create smeared measurements and add to track
	    // try{
	    //     for (unsigned int i=1; i<measurementTypes.size(); ++i){
	    //         std::vector<genfit::AbsMeasurement*> measurements = measurementCreator.create(measurementTypes[i], i*5.);
	    //         trackPtr->insertPoint(new genfit::TrackPoint(measurements, trackPtr));
	    //     }
	    // }
	    // catch(genfit::Exception& e){
	    //     std::cerr<<"Exception, next track"<<std::endl;
	    //     std::cerr << e.what();
	    //     continue; // here is a memleak!
	    // }
	    if(debug)std::cout<<"Before loop the hits in a track "<<std::endl;

	    // create the measurement from input file
	    for (int i = 0; i < nHit; ++i)
	    { 
                if(debug)std::cout<<"iTrack is "<<TrackIDCol[iTrack]<<std::endl;

		if(TrackID[i]!=TrackIDCol[iTrack]) continue;

		const int detId(0); // detector ID
		int planeId(0); // detector plane ID
		int hitId(0); // hit ID

		double detectorResolution(resolution); // resolution of planar detectors
		TMatrixDSym hitCov(2);
		hitCov.UnitMatrix();
		hitCov *= detectorResolution*detectorResolution; // what's the role of hitCov ? -- Guoaq/2021/04/19

		// add some planar hits to track with coordinates I just made up
		TVectorD hitCoords(2);
		hitCoords[0] = 0;
		hitCoords[1] = 0;

		genfit::PlanarMeasurement* measurement = new genfit::PlanarMeasurement(hitCoords, hitCov, detId, ++hitId, nullptr);
		
		// remove the measurement at the origin
		//if(sqrt(X[i]*X[i]+Y[i]*Y[i])<0.01) continue;

		double sm_X(0), sm_Y(0), sm_Z(0);
		smearpixel_gauss(pixel_size, DetID[i], X[i],Y[i],Z[i],sm_X, sm_Y, sm_Z);	
		//std::cout<<"X, Y, Z are "<<X[i]<<", "<<Y[i]<<", "<<Z[i]<<std::endl;

		//   O, position of the virtual plane, U and V direction of the virtual plane 
		TVector3 O(0,0,0), U(1,0,0), V(0,1,0);

		if(smearOn)
		{
		    O.SetX(sm_X);
		    O.SetY(sm_Y);
		    O.SetZ(sm_Z);
		}
		else
		{
		    O.SetX(X[i]);
		    O.SetY(Y[i]);
		    O.SetZ(Z[i]);
		}

		if(DetID[i]==0)  // for the barrel part
		{
		    // for barrel part, V points to Z direction	
		    V.SetX(0);
		    V.SetY(0);
		    V.SetZ(1);
		    U = O.Unit().Cross(V);
		}
		if(DetID[i]==2) // for the backward part
		{
		    U.SetX(-1);
		    U.SetY(0);
		    U.SetZ(0);

		    V.SetX(0);
		    V.SetY(1);
		    V.SetZ(0);
		}
		if(DetID[i]==1) // for the forward part
		{
		    U.SetX(1);
		    U.SetY(0);
		    U.SetZ(0);

		    V.SetX(0);
		    V.SetY(1);
		    V.SetZ(0);
		}

		//std::cout<<"O "<<O.X()<<", "<<O.Y()<<", "<<O.Z()<<"  U "<<U.X()<<", "<<U.Y()<<", "<<U.Z()<<" V "<<V.X()<<", "<<V.Y()<<", "<<V.Z()<<std::endl;
		measurement->setPlane(genfit::SharedPlanePtr(new genfit::DetPlane(O, U, V)), ++planeId);
		measurements.push_back(measurement);
		//delete measurement;

	    }


	    if(debug) std::cout<<"size of measurement is "<<measurements.size()<<std::endl;
	    if(measurements.size()>NHits_High || measurements.size()<NHits_Low) {t_out_eff->Fill(); continue;}  // questionanble

	    // add measurements
	    for(unsigned int i=0; i<measurements.size(); ++i){
		
		trackPtr->insertPoint(new genfit::TrackPoint(measurements[i], trackPtr));
		trackPtr->checkConsistency();
		if (debug) trackPtr->Print("C");
	    }


	    //check
	    //assert(trackPtr->checkConsistency());

	    // do the fit
	    try{
		fitter->processTrack(trackPtr);
	    }
	    catch(genfit::Exception& e){
		std::cerr << e.what();
		std::cerr << "Exception, next track" << std::endl;
		t_out_eff->Fill();
		continue;
	    }


	    if (refit && !trackPtr->getFitStatus(rep)->isFitConverged()) {
		    std::cout<<"Trying to fit again "<<std::endl;
		    fitter->processTrack(trackPtr, resort);
	    }

	    if (!trackPtr->getFitStatus(rep)->isFitConverged()) {
		    std::cout << "Track could not be fitted successfully! Fit is not converged! \n";
		    t_out_eff->Fill();
		    continue;
	    }

	    Isfitted = 1;

	    // // make the estimation of the vertex of the each track from origin
	    
	    //std::cout<<"get tp "<<std::endl;
	    genfit::TrackPoint* tp = trackPtr->getPointWithMeasurementAndFitterInfo(0, rep);
	    if (tp == nullptr) {
	            std::cout << "Track has no TrackPoint with fitterInfo! \n";
		    t_out_eff->Fill();
	            continue;
	    }

	    //std::cout<<"get kfsop "<<std::endl;
	    genfit::KalmanFittedStateOnPlane kfsop(*(static_cast<genfit::KalmanFitterInfo*>(tp->getFitterInfo(rep))->getBackwardUpdate()));
	    if (debug) {
	            std::cout << "state before extrapolating back to reference plane \n";
	            kfsop.Print();
	    }

	    //std::cout<<"extroplate to origin "<<std::endl;
	    // extrapolate back to reference plane.
	    try{
	            //rep->extrapolateToPlane(kfsop, stateRefOrig.getPlane());;
	            rep->extrapolateToPoint(kfsop, TVector3(0, 0, 0),false); // to the origin  Changed by Guoaq to get the DCA
		    //rep->extrapolateToLine(kfsop, TVector3(0, 0, 0),TVector3(0,0,1),false,false); // to the beam line
	    }
	    catch(genfit::Exception& e){
	            std::cerr<<"Exception, next track"<<std::endl;
	            std::cerr << e.what();
		    t_out_eff->Fill();
	            continue;
	    }


	    // //std::cout<<"calculate dca "<<std::endl;
	    TVector3 GenFit_mom = kfsop.getMom();
	    TVector3 DCA_local(kfsop.getState()[3],kfsop.getState()[4],0);
	    DCA_local.RotateUz(GenFit_mom.Unit());
	    
	    double dca_rphi = DCA_local.X();
	    double dca_z = DCA_local.Z();
            //std::cout<<"dca_rphi, dca_z are "<<dca_rphi<<",  "<<dca_z <<std::endl;
	    
	    Achi2  = trackPtr->getFitStatus(rep)->getChi2();
	    dcaz = dca_z;
	    dcar = dca_rphi;
	    p    = GenFit_mom.Mag();
	    pt   = GenFit_mom.Pt();
	    eta = GenFit_mom.PseudoRapidity();
	    pid  = pdg; 
	    t_track->Fill();
	    
	    // if(fabs(dca_rphi)>1||fabs(dca_z)>1) continue;

	    genfit::MeasuredStateOnPlane* sta_kfsop = new genfit::MeasuredStateOnPlane(kfsop.getState(), kfsop.getCov(), kfsop.getPlane(), rep);
	    
	    if(debug) std::cout<<"the fit status of the "<<iTrack <<" track is "<<trackPtr->getFitStatus(rep)->isFitConverged()<<std::endl;

	    if (trackPtr->getFitStatus(rep)->isFitConverged()) {
		    tracks.push_back(trackPtr);
		    states.push_back(sta_kfsop);
		    pdgs.push_back(pdg);
		    //StateAtOrigin.push_back(kfsop);
	    }

	    //check
	    //assert(trackPtr->checkConsistency());
            // clean up measurements array !
	    t_out_eff->Fill();
	    
	    // delete rep;
	    // delete sta_kfsop;
	
	} // end loop over tracks




        std::cout<<"Ntrack is "<<states.size()<<std::endl;
	
	if(states.size()==0) continue;
        fout<<nEvent<<" "<<states.size()<<std::endl;
	
	for(int i=0; i<states.size();i++)
	{
		TVector3 pos_ori, mom_ori;
		TMatrixDSym cov_ori;
		states[i]->getPosMomCov(pos_ori, mom_ori, cov_ori);
		//tracks[i]->getFittedState().getPosMomCov(pos_ori, mom_ori, cov_ori);
                double A_Eta = mom_ori.PseudoRapidity();
                if(A_Eta<-3||A_Eta>3) continue;
		
		//std::cout<<"\n"<<std::endl;
		//std::cout<<"position of origin are "<<pos_ori.X()<<", "<<pos_ori.Y()<<", "<<pos_ori.Z()<<std::endl;
		//std::cout<<"momentum of origin are "<<mom_ori.X()<<", "<<mom_ori.Y()<<", "<<mom_ori.Z()<<std::endl;
		//std::cout<<"covariance of origin are "<<cov_ori(0,0)<<", "<<cov_ori(1,0)<<", "<<cov_ori(2,0)<<", "<<cov_ori(4,4)<<", "<<cov_ori(5,4)<<", "<<cov_ori(5,5)<<std::endl;

		fout<<i<<" "<<pdgs[i]<<" "<<pos_ori.X()<<" "<<pos_ori.Y()<<" "<<pos_ori.Z()<<" "<<mom_ori.X()<<" "<<mom_ori.Y()<<" "<<mom_ori.Z()<<" "<<cov_ori(0,0)<<" "<<cov_ori(1,0)<<" "<<cov_ori(2,0)<<" "<<cov_ori(1,1)<<" "<<cov_ori(2,1)<<" "<<cov_ori(2,2)<<" "<<cov_ori(3,0)<<" "<<cov_ori(4,0)<<" "<<cov_ori(5,0)<<" "<<cov_ori(3,1)<<" "<<cov_ori(4,1)<<" "<<cov_ori(5,1)<<" "<<cov_ori(3,2)<<" "<<cov_ori(4,2)<<" "<<cov_ori(5,2)<<" "<<cov_ori(3,3)<<" "<<cov_ori(4,3)<<" "<<cov_ori(5,3)<<" "<<cov_ori(4,4)<<" "<<cov_ori(5,4)<<" "<<cov_ori(5,5)<<std::endl;
		fout1<<nEvent<<","<<pdgs[i]<<","<<p<<","<<pt<<","<<eta<<","<<Achi2<<","<<pos_ori.X()<<","<<pos_ori.Y()<<","<<pos_ori.Z()<<","<<mom_ori.X()<<","<<mom_ori.Y()<<","<<mom_ori.Z()<<","<<cov_ori(0,0)<<","<<cov_ori(1,0)<<","<<cov_ori(2,0)<<","<<cov_ori(1,1)<<","<<cov_ori(2,1)<<","<<cov_ori(2,2)<<","<<cov_ori(3,0)<<","<<cov_ori(4,0)<<","<<cov_ori(5,0)<<","<<cov_ori(3,1)<<","<<cov_ori(4,1)<<","<<cov_ori(5,1)<<","<<cov_ori(3,2)<<","<<cov_ori(4,2)<<","<<cov_ori(5,2)<<","<<cov_ori(3,3)<<","<<cov_ori(4,3)<<","<<cov_ori(5,3)<<","<<cov_ori(4,4)<<","<<cov_ori(5,4)<<","<<cov_ori(5,5)<<std::endl;
	}


	fout<<"====================event finished======================="<<std::endl;

	
	//std::cout<<"initial array"<<std::endl;
	for(int ik=0;ik<nMaxHit;ik++)
	{
		X[ik]=-100;
		Y[ik]=-100;
		Z[ik]=-100;
		PX[ik]=-100;
		PY[ik]=-100;
		PZ[ik]=-100;
		DetID[ik]=-100;
	}

	if(debug)std::cout<<"We find "<<tracks.size()<<" tracks !"<<std::endl;

	// vertexing
	//vertexFactory.findVertices(&vertices, tracks);
	vertexFactory.findVertices(&vertices, tracks, states);

	for (unsigned int i=0; i<vertices.size(); ++i) {
	    new(vertexArray[i]) genfit::GFRaveVertex(*(vertices[i]));

	    genfit::GFRaveVertex* vtx = static_cast<genfit::GFRaveVertex*>(vertices[i]);
	    for (unsigned int j=0; j<vtx->getNTracks(); ++j) {
		if(debug)std::cout << "track parameters uniqueID: " << vtx->getParameters(j)->GetUniqueID() << "\n";
	    }
	}

	for (unsigned int i=0; i<tracks.size(); ++i) {
	    genfit::Track* trk = static_cast<genfit::Track*>(tracks[i]);
	    if(debug)std::cout << "track uniqueID: " << trk->GetUniqueID() << "\n";
	}

	// fill
	if(debug)std::cout << "trackArray nr of entries: " << trackArray.GetEntries() << "\n";
	tree->Fill();


	// fill the t_out tree
	//std::cout<<"vertice No. is "<<vertices.size()<<std::endl;
	for (unsigned int i=0; i<vertices.size(); ++i) {
		
		x_truth = 0;	
		y_truth = 0;	
		z_truth = 0;	
		
		x_rec = vertices[i]->getPos().X();	
		y_rec = vertices[i]->getPos().Y();	
		z_rec = vertices[i]->getPos().Z();	
		
		x_res = vertices[i]->getPos().X() - x_truth;	
		y_res = vertices[i]->getPos().Y() - y_truth;	
		z_res = vertices[i]->getPos().Z() - z_truth;	
		
		N_Trk = tracks.size();
		chi2  = vertices[i]->getChi2();	
		I_Evt = iEvent;

	}
	if(vertices.size()>0) t_out->Fill();

	if (iEvent < 1000 ) {
	    // add tracks to event display
	    // display->addEvent(tracks); //display_2
	}
    
    nEvent++;
    } // end loop over events
    fout.close();
    fout1.close();
    delete fitter;
    
    std::cout << "total track number is : " <<TotTrack << "\n";

    // write and close files
    // t_track->Write();
    // t_out_eff->Write();
    // t_out->Write();
    
    trackFile->Write();
    trackFile->Close();
    /*vertexFile->Write();
      vertexFile->Close();*/

    // open event display
    //display->open(); //display_3_end

}


