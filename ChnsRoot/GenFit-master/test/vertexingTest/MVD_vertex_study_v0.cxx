/*
   This program is aimed ot study the vertex finding and fitting at the EicC detector


*/ 


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


void smearpixel(double pixelsize, int det_id, double input_X, double input_Y, double input_Z, double &output_X, double &output_Y, double &output_Z)
{
    //for the barrel part
    if(det_id>=3&&det_id<=8)
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
    if(det_id>=9&&det_id<=18)
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

int main(int argc, char ** argv) {

    // User defined paramters

    int nEvents = 1000;
    int nGenTracks = 2;
    const int nMaxHit = 100;
    bool smearOn =true;
    bool debug =false;
    double momentum = 0.1;     // GeV
    double pixel_size = 0.001;   // cm; size of the pixel 10 micron

    TString fin_name = "input_file/test_D0_decay.root";
    TString fout_name = "tracks.root";

    if(argc >= 2) fin_name = argv[1]; 
    if(argc >= 3) fout_name = argv[2];

    // User defined paramters


    gRandom->SetSeed(14);

    // init MeasurementCreator
    genfit::MeasurementCreator measurementCreator;


    // init geometry and mag. field
    new TGeoManager("Geometry", "Geane geometry");
    //TGeoManager::Import("genfitGeom.root");
    TGeoManager::Import("geofile_full.root");
    genfit::FieldManager::getInstance()->init(new genfit::ConstField(0.,0., 30.)); // 15 kGauss
    genfit::MaterialEffects::getInstance()->init(new genfit::TGeoMaterialInterface());

    // init event display
    genfit::EventDisplay* display = genfit::EventDisplay::getInstance();


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
    double chi2;
    t_out->Branch("x_truth", &x_truth, "x_truth/D");
    t_out->Branch("y_truth", &y_truth, "y_truth/D");
    t_out->Branch("z_truth", &z_truth, "z_truth/D");
    t_out->Branch("x_rec",   &x_rec,   "x_rec/D");
    t_out->Branch("y_rec",   &y_rec,   "y_rec/D");
    t_out->Branch("z_rec",   &z_rec,   "z_rec/D");
    t_out->Branch("chi2",    &chi2,    "chi2/D");

    //const unsigned int nEvents = t_data->GetEntries();


    std::vector<genfit::Track*> tracks;
    std::vector<genfit::GFRaveVertex*> vertices;


    // read the input file
    TFile *f_data=new TFile(fin_name);
    TTree *t_data=(TTree*)f_data->Get("eiccsim");

    //int Event, nHit;
    double X[nMaxHit],Y[nMaxHit],Z[nMaxHit];
    double PX[nMaxHit],PY[nMaxHit],PZ[nMaxHit];
    int DetID[nMaxHit], TrackID[nMaxHit];

    for(int k=0;k<nMaxHit;k++)
    {
	X[k]=-100;
	Y[k]=-100;
	Z[k]=-100;
	PX[k]=-100;
	PY[k]=-100;
	PZ[k]=-100;
	DetID[k]=-100;
    }

    t_data->SetBranchAddress("EiccMvdPoint.fX",           X);
    t_data->SetBranchAddress("EiccMvdPoint.fY",           Y);
    t_data->SetBranchAddress("EiccMvdPoint.fZ",           Z);
    t_data->SetBranchAddress("EiccMvdPoint.fPx",          PX);
    t_data->SetBranchAddress("EiccMvdPoint.fPy",          PY);
    t_data->SetBranchAddress("EiccMvdPoint.fPz",          PZ);
    t_data->SetBranchAddress("EiccMvdPoint.fDetectorID",  DetID);
    t_data->SetBranchAddress("EiccMvdPoint.fTrackID",     TrackID);

    //    const unsigned int nEvents = t_data->GetEntries();


    int nHit = 0;	
    // main loop
    for (unsigned int iEvent=0; iEvent<nEvents; ++iEvent){

	std::cout << "Event Nr. " << iEvent << std::endl;

	// clean up
	trackArray.Delete();
	vertexArray.Delete();
	tracks.clear();
	vertices.clear();

	// access data from tree
	t_data->GetEntry(iEvent);
	// get the number of hit, it will be better to record this value !! 
	nHit = 0;	
	for(int ib=0; ib<nMaxHit;ib++)
	{
	    if(X[ib]!=-100) nHit++;
	}


	//unsigned int nTracks = gRandom->Uniform(2, 10);
	unsigned int nTracks = nGenTracks;
	std::vector<genfit::PlanarMeasurement*>  measurements;

	for (unsigned int iTrack=0; iTrack<nTracks; iTrack++){

            measurements.clear();

	    int itr = 0;
	    for(int m=0; m<nHit;m++)
	    {
		    if(TrackID[m]==iTrack) 
		    {
			    itr=m;
			    break;
		    }
	    }
            std::cout<<"the first hit is "<<itr<<" in the "<<iTrack<<" track"<<std::endl;
	    // true start values : how to get this value directly from the tree  -- Guoaq 2021/Apr/26
	    momentum  = sqrt(PX[itr]*PX[itr]+PY[itr]*PY[itr]+PZ[itr]*PZ[itr]);
	    //TVector3 pos(0, 0, 0);
	    TVector3 pos(X[itr], Y[itr], Z[itr]);
	    TVector3 mom(PX[itr],PY[itr],PZ[itr]);
            
	    std::cout<<"the initial position is  "<<X[itr]<<", "<<Y[itr]<<", "<<Z[itr]<<" in the "<<iTrack<<" track"<<std::endl;
	    std::cout<<"the initial momentum is  "<<PX[itr]<<", "<<PY[itr]<<", "<<PZ[itr]<<" in the "<<iTrack<<" track"<<std::endl;

	    // helix track model
	    int pdg ;               // particle pdg code
	    if(iTrack==0) pdg = -321;               // particle pdg code
	    else if(iTrack==1) pdg = 211;               // particle pdg code
            
	    const double charge = TDatabasePDG::Instance()->GetParticle(pdg)->Charge()/(3.);
	    genfit::HelixTrackModel* helix = new genfit::HelixTrackModel(pos, mom, charge);
	    measurementCreator.setTrackModel(helix);

	    unsigned int nMeasurements = nHit;

	    // smeared start values
	    const bool smearPosMom = false;     // init the Reps with smeared pos and mom
	    const double posSmear = 0.01;     // cm
	    const double momSmear = 1. /180.*TMath::Pi();     // rad
	    const double momMagSmear = 0.01;   // relative

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
	    double resolution = 0.01;
	    for (int i = 0; i < 3; ++i)
		covM(i,i) = resolution*resolution;
	    for (int i = 3; i < 6; ++i)
		covM(i,i) = pow(resolution / nMeasurements / sqrt(3), 2);


	    // trackrep
	    genfit::AbsTrackRep* rep = new genfit::RKTrackRep(pdg);

	    // smeared start state
	    genfit::MeasuredStateOnPlane stateSmeared(rep);
	    rep->setPosMomCov(stateSmeared, posM, momM, covM);


	    // create track
	    TVectorD seedState(6);
	    TMatrixDSym seedCov(6);
	    rep->get6DStateCov(stateSmeared, seedState, seedCov);

	    new(trackArray[iTrack]) genfit::Track(rep, seedState, seedCov); // the syntax here is strange ! Guoaq - 2021/Apr/26
	    genfit::Track* trackPtr(static_cast<genfit::Track*>(trackArray.At(iTrack)));
	    tracks.push_back(trackPtr);

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


	    // create the measurement from input file
	    for (int i = 0; i < nHit; ++i)
	    { 
                std::cout<<"iTrack is "<<iTrack<<std::endl;

		if(TrackID[i]!=iTrack) continue;

		const int detId(0); // detector ID
		int planeId(0); // detector plane ID
		int hitId(0); // hit ID

		double detectorResolution(0.001); // resolution of planar detectors
		TMatrixDSym hitCov(2);
		hitCov.UnitMatrix();
		hitCov *= detectorResolution*detectorResolution; // what's the role of hitCov ? -- Guoaq/2021/04/19

		// add some planar hits to track with coordinates I just made up
		TVectorD hitCoords(2);
		hitCoords[0] = 0;
		hitCoords[1] = 0;

		genfit::PlanarMeasurement* measurement = new genfit::PlanarMeasurement(hitCoords, hitCov, detId, ++hitId, nullptr);
		
		// remove the measurement at the origin
		if(sqrt(X[i]*X[i]+Y[i]*Y[i])<0.01) continue;

		double sm_X(0), sm_Y(0), sm_Z(0);
		smearpixel(pixel_size, DetID[i], X[i],Y[i],Z[i],sm_X, sm_Y, sm_Z);	

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

		if(DetID[i]>=3&&DetID[i]<=8)  // for the barrel part
		{
		    // for barrel part, V points to Z direction	
		    V.SetX(0);
		    V.SetY(0);
		    V.SetZ(1);
		    U = O.Unit().Cross(V);
		}
		if(DetID[i]>=9&&DetID[i]<=13) // for the backward part
		{
		    U.SetX(-1);
		    U.SetY(0);
		    U.SetZ(0);

		    V.SetX(0);
		    V.SetY(1);
		    V.SetZ(0);
		}
		if(DetID[i]>=14&&DetID[i]<=18) // for the forward part
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

	    }



	    std::cout<<"size of measurement is "<<measurements.size()<<std::endl;
	    if(measurements.size()>8 || measurements.size()<4) continue;

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
		continue;
	    }

	    //check
	    //assert(trackPtr->checkConsistency());
            // clean up measurements array !
	} // end loop over tracks
	    
	std::cout<<"initial array"<<std::endl;
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

	std::cout<<"We find "<<tracks.size()<<" tracks !"<<std::endl;

	// vertexing
	vertexFactory.findVertices(&vertices, tracks);

	for (unsigned int i=0; i<vertices.size(); ++i) {
	    new(vertexArray[i]) genfit::GFRaveVertex(*(vertices[i]));

	    genfit::GFRaveVertex* vtx = static_cast<genfit::GFRaveVertex*>(vertices[i]);
	    for (unsigned int j=0; j<vtx->getNTracks(); ++j) {
		std::cout << "track parameters uniqueID: " << vtx->getParameters(j)->GetUniqueID() << "\n";
	    }
	}

	for (unsigned int i=0; i<tracks.size(); ++i) {
	    genfit::Track* trk = static_cast<genfit::Track*>(tracks[i]);
	    std::cout << "track uniqueID: " << trk->GetUniqueID() << "\n";
	}

	// fill
	std::cout << "trackArray nr of entries: " << trackArray.GetEntries() << "\n";
	tree->Fill();


	// fill the t_out tree
	for (unsigned int i=0; i<vertices.size(); ++i) {
		x_truth = 0;	
		y_truth = 0;	
		z_truth = 0;	
		
		x_rec = vertices[i]->getPos().X();	
		y_rec = vertices[i]->getPos().Y();	
		z_rec = vertices[i]->getPos().Z();	
		chi2  = vertices[i]->getChi2();	

	}
	t_out->Fill();

	if (iEvent < 1000) {
	    // add tracks to event display
	    display->addEvent(tracks);
	}

    } // end loop over events

    delete fitter;

    // write and close files
    trackFile->Write();
    trackFile->Close();
    /*vertexFile->Write();
      vertexFile->Close();*/

    // open event display
    display->open();

}

