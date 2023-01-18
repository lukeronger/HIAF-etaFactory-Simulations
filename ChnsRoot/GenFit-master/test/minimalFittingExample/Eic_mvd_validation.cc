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

#include <TDatabasePDG.h>
#include <TEveManager.h>
#include <TGeoManager.h>
#include <TRandom.h>
#include <TVector3.h>
#include <vector>

#include "TDatabasePDG.h"
#include <TMath.h>

#include <iostream>
#include <fstream>

#include <TFile.h>
#include <TTree.h>


int main() {

	gRandom->SetSeed(14);

	// init MeasurementCreator
	genfit::MeasurementCreator measurementCreator;


	// init geometry and mag. field
	new TGeoManager("Geometry", "Geane geometry");
	//TGeoManager::Import("genfitGeom.root");
	TGeoManager::Import("geofile_full.root");
	genfit::FieldManager::getInstance()->init(new genfit::ConstField(0.,0., 20.)); // 15 kGauss
	genfit::MaterialEffects::getInstance()->init(new genfit::TGeoMaterialInterface());


	// init event display
	genfit::EventDisplay* display = genfit::EventDisplay::getInstance();


	// init fitter
	genfit::AbsKalmanFitter* fitter = new genfit::KalmanFitterRefTrack();


	// read the input file
	TFile *f_data=new TFile("/home/guoaq/software/EiccRoot/macro/test.root");
	TTree *t_data=(TTree*)f_data->Get("eiccsim");
	//TBranch *b_data=t_data->GetBranch("EiccMvdPoint");
	
	//int Event, nHit;
	double X[10],Y[10],Z[10];
	double PX[10],PY[10],PZ[10];
	
	for(int k=0;k<10;k++)
	{
		X[k]=-100;
		Y[k]=-100;
		Z[k]=-100;
		PX[k]=-100;
		PY[k]=-100;
		PZ[k]=-100;
	}

	t_data->SetBranchAddress("EiccMvdPoint.fX",                 X);
	t_data->SetBranchAddress("EiccMvdPoint.fY",                 Y);
	t_data->SetBranchAddress("EiccMvdPoint.fZ",                 Z);
	t_data->SetBranchAddress("EiccMvdPoint.fPx",                PX);
	t_data->SetBranchAddress("EiccMvdPoint.fPy",                PY);
	t_data->SetBranchAddress("EiccMvdPoint.fPz",                PZ);
	
	// main loop
	for (unsigned int iEvent=0; iEvent<10; ++iEvent){


		// create  measurement frome input file
		t_data->GetEntry(iEvent);
		int nHit = 0;	
		for(int ib=0; ib<10;ib++)
		{
			if(X[ib]!=-100) nHit++;
		}
		std::cout<<"nHit is "<<nHit<<std::endl;	
		
		std::cout<<"event"<<iEvent<<" nHit"<<nHit<<" X0, Y0, Z0 "<<X[0]<<", "<<Y[0]<<", "<<Z[0]<<std::endl;


		// true start values
		TVector3 pos(0, 0, 0);
		TVector3 mom(PX[0],PY[0],PZ[0]);
		mom.SetPhi(gRandom->Uniform(0.,2*TMath::Pi()));
		mom.SetTheta(gRandom->Uniform(0.4*TMath::Pi(),0.6*TMath::Pi()));
		mom.SetMag(gRandom->Uniform(0.2, 1.));

		// helix track model
		const int pdg = 13;               // particle pdg code
		const double charge = TDatabasePDG::Instance()->GetParticle(pdg)->Charge()/(3.);
		genfit::HelixTrackModel* helix = new genfit::HelixTrackModel(pos, mom, charge);
		measurementCreator.setTrackModel(helix);

		//unsigned int nMeasurements = gRandom->Uniform(5, 15);
		unsigned int nMeasurements = nHit;// we only have 4 layer

		// smeared start values
		const bool smearPosMom = true;     // init the Reps with smeared pos and mom
		const double posSmear = 0.1;     // cm
		const double momSmear = 3. /180.*TMath::Pi();     // rad
		const double momMagSmear = 0.1;   // relative

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
		stateSmeared.setPosMomCov(posM, momM, covM);

		// create track
		TVectorD seedState(6);
		TMatrixDSym seedCov(6);
		stateSmeared.get6DStateCov(seedState, seedCov);
		genfit::Track fitTrack(rep, seedState, seedCov);

		std::vector<genfit::eMeasurementType> measurementTypes;
		
		for (int i = 0; i < nHit; ++i)
		{ 

			const int detId(0); // detector ID
			int planeId(0); // detector plane ID
			int hitId(0); // hit ID

			double detectorResolution(0.001); // resolution of planar detectors
			TMatrixDSym hitCov(2);
			hitCov.UnitMatrix();
			hitCov *= detectorResolution*detectorResolution;

			// add some planar hits to track with coordinates I just made up
			TVectorD hitCoords(2);
			hitCoords[0] = 0;
			hitCoords[1] = 0;
			genfit::PlanarMeasurement* measurement = new genfit::PlanarMeasurement(hitCoords, hitCov, detId, ++hitId, nullptr);
			//                                                                    origin                 u                 v
			TVector3 O(X[i],Y[i],Z[i]);
			TVector3 U(0,0,0);
			TVector3 V(0,0,1);
			U = O.Unit().Cross(V);
			std::cout<<"O "<<O.X()<<", "<<O.Y()<<", "<<O.Z()<<"  U "<<U.X()<<", "<<U.Y()<<", "<<U.Z()<<" V "<<V.X()<<", "<<V.Y()<<", "<<V.Z()<<std::endl;
			measurement->setPlane(genfit::SharedPlanePtr(new genfit::DetPlane(O, U, V)), ++planeId);
			fitTrack.insertPoint(new genfit::TrackPoint(measurement, &fitTrack));

			//catch(genfit::Exception& e){
			//	std::cerr<<"Exception, next track"<<std::endl;
			//	std::cerr << e.what();
			//	continue;
			//} 

		}

		//check
		fitTrack.checkConsistency();

		fitTrack.Print("C");

		// do the fit
		fitter->processTrack(&fitTrack);

		//check
		fitTrack.checkConsistency();


		if (iEvent < 1000) {
			// add track to event display
			display->addEvent(&fitTrack);
		}


		for(int k=0;k<10;k++)
		{
			X[k]=-100;
			Y[k]=-100;
			Z[k]=-100;
		}

	}// end loop over events

	delete fitter;

	// open event display
	display->open();

}



