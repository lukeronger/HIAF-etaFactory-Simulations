
#include "ChnsEmc.h"

#include "FairGeoInterface.h"
#include "FairGeoLoader.h"
#include "FairGeoNode.h"
#include "FairGeoVolume.h"
#include "FairRootManager.h"
#include "FairRun.h"
#include "FairRuntimeDb.h"
#include "FairVolume.h"
#include "ChnsDetectorList.h"
#include "ChnsStack.h"
#include "ChnsEmcGeo.h"
#include "ChnsEmcGeoPar.h"
#include "ChnsEmcPoint.h"
#include "par/ParEmcDet.h"

#include <TClonesArray.h>
#include <TGeoBBox.h>
#include <TGeoCompositeShape.h>
#include <TGeoManager.h>
#include <TGeoMaterial.h>
#include <TGeoMedium.h>
#include <TGeoTube.h>
#include <TVirtualMC.h>
#include <TFile.h>
#include <iostream>
using std::cout;
using std::endl;

ChnsEmc::ChnsEmc()
	: FairDetector("ChnsEmc", kTRUE, kChnsEmc)
	, fEventID(-1)
	, fTrackID(-1)
	, fVolumeID(-1)
	, fPos()
	, fMom()
	, fTime(-1.)
	, fLength(-1.)
	  , fELoss(-1)
	  , fChnsEmcPointCollection(new TClonesArray("ChnsEmcPoint"))
{}

ChnsEmc::ChnsEmc(const char* name, Bool_t active)
	: FairDetector(name, active, kChnsEmc)
	, fEventID(-1)	
	, fTrackID(-1)
	, fVolumeID(-1)
	, fPos()
	, fMom()
	, fTime(-1.)
	, fLength(-1.)
	  , fELoss(-1)
	  , fChnsEmcPointCollection(new TClonesArray("ChnsEmcPoint"))
{}

ChnsEmc::ChnsEmc(const ChnsEmc& right)
	: FairDetector(right)
	, fEventID(-1)
	, fTrackID(-1)
	, fVolumeID(-1)
	, fPos()
	, fMom()
	, fTime(-1.)
	, fLength(-1.)
	  , fELoss(-1)
	  , fChnsEmcPointCollection(new TClonesArray("ChnsEmcPoint"))
{}

ChnsEmc::~ChnsEmc()
{
	if (fChnsEmcPointCollection) {
		fChnsEmcPointCollection->Delete();
		delete fChnsEmcPointCollection;
	}
}

void ChnsEmc::Initialize()
{
	/**
	 * WORKAROUND needed for Geant4 in MT mode
	 * Call AddSensitiveVolume for sensitive volumes in order to fill
	 * thread-local FairModule::svList.
	 */
	DefineSensitiveVolumes();

	FairDetector::Initialize();
	FairRuntimeDb* rtdb = FairRun::Instance()->GetRuntimeDb();
	ChnsEmcGeoPar* par = (ChnsEmcGeoPar*)(rtdb->getContainer("ChnsEmcGeoPar"));
}

Bool_t ChnsEmc::ProcessHits(FairVolume* vol)
{
	/** This method is called from the MC stepping */

	// Set parameters at entrance of volume. Reset ELoss.
	if (TVirtualMC::GetMC()->IsTrackEntering()) {
		fELoss = 0.;
		fTime = TVirtualMC::GetMC()->TrackTime() * 1.0e09;
		fLength = TVirtualMC::GetMC()->TrackLength();
		TVirtualMC::GetMC()->TrackPosition(fPos);
		TVirtualMC::GetMC()->TrackMomentum(fMom);
	}

	// Sum energy loss for all steps in the active volume
	fELoss += TVirtualMC::GetMC()->Edep();

	// Create ChnsEmcPoint at exit of active volume
	// IsTrackExiting(): Return true if this is the last step of the track in the current volume.
	// IsTrackStop(): Return true if the track energy has fallen below the threshold
	// IsTrackDisappeared(): Return true if the current particle has disappeared either because it decayed or because it underwent an inelastic collision
	if (TVirtualMC::GetMC()->IsTrackExiting() || TVirtualMC::GetMC()->IsTrackStop()
			|| TVirtualMC::GetMC()->IsTrackDisappeared()) {
		if (fELoss == 0.) {
			return kFALSE;
		}
		fTrackID = TVirtualMC::GetMC()->GetStack()->GetCurrentTrackNumber();
		fVolumeID = vol->getMCid();
		fEventID = gMC->CurrentEvent();
		Int_t fModuleID = 0;        Int_t fSegmentID = 0;     Int_t fLocationID = 0;   
		Int_t copyNo= -1;

		if(TVirtualMC::GetMC()->CurrentVolName() == "crysModule"){  //crystal, depth==3;
			TVirtualMC::GetMC()->CurrentVolID(fModuleID);
            TVirtualMC::GetMC()->CurrentVolOffID(1,fSegmentID);
            TVirtualMC::GetMC()->CurrentVolOffID(2,fLocationID);
		}
		else{               // shashlik, depth == 4
			TVirtualMC::GetMC()->CurrentVolID(copyNo);
			TVirtualMC::GetMC()->CurrentVolOffID(1,fModuleID);
			TVirtualMC::GetMC()->CurrentVolOffID(2,fSegmentID);
			TVirtualMC::GetMC()->CurrentVolOffID(3,fLocationID);
		}
	
		AddHit( 
				fTrackID,
				fVolumeID,
				TVector3(fPos.X(), fPos.Y(), fPos.Z()),
				TVector3(fMom.Px(), fMom.Py(), fMom.Pz()),
				fTime,
				fLength,
				fELoss,
				fEventID,
				fModuleID, fSegmentID, fLocationID, copyNo);


		// Increment number of ChnsEmc det points in TParticle
		ChnsStack* stack = (ChnsStack*)TVirtualMC::GetMC()->GetStack();
		stack->AddPoint(kChnsEmc);
	}
	return kTRUE;
}

void ChnsEmc::EndOfEvent()
{

	LOG(info) << "ChnsEmc: " << fChnsEmcPointCollection->GetEntriesFast() << " points registered in this event";

	fChnsEmcPointCollection->Clear();

}

void ChnsEmc::Register()
{
	/** This will create a branch in the output tree called
	  ChnsEmcPoint, setting the last parameter to kFALSE means:
	  this collection will not be written to the file, it will exist
	  only during the simulation.
	 */

	if (!gMC->IsMT()) {
		FairRootManager::Instance()->Register("ChnsEmcPoint", "ChnsEmc", fChnsEmcPointCollection, fPersistance);
	} 
	else {
		FairRootManager::Instance()->RegisterAny("ChnsEmcPoint", fChnsEmcPointCollection, fPersistance);
	}
}

TClonesArray* ChnsEmc::GetCollection(Int_t iColl) const
{
	if (iColl == 0) {
		return fChnsEmcPointCollection;
	} else {
		return NULL;
	}
}

void ChnsEmc::Reset() { fChnsEmcPointCollection->Clear(); }

void ChnsEmc::ConstructGeometry()
{
	TGeoVolume* top = gGeoManager->GetTopVolume();

	TGeoMaterial *vacuum=new TGeoMaterial("vacuum",0,0,0);
	TGeoMaterial *Fe=new TGeoMaterial("Fe",55.845,26,7.87);

	TGeoMedium *Air=new TGeoMedium("Vacuum",0,vacuum);
	TGeoMedium *Iron=new TGeoMedium("Iron",1,Fe);

	TGeoVolume* Emc_endcap = gGeoManager->MakeBox("Emc_endcap",Air,200,200,100);

	const double R_inner = 20, R_outer = 50, dist_z = 120;  //cm

	double module_short = 2, module_length = 15;  //cm   X2
	double module_long = module_short * (1 + module_length / dist_z);
	double module_shrink = 0.99;
	double theta_bin = 2 * TMath::ATan((module_long-module_short)/2/module_length);

	TGeoVolume *module = gGeoManager->MakeTrd2("module", Iron, module_short/2*module_shrink, module_long/2*module_shrink, module_short/2*module_shrink, module_long/2*module_shrink,  module_length/2*module_shrink);

	module->SetLineColor(kCyan);
	// 1/4 of the end_cap : 1 segment

	TGeoVolume *segment = new TGeoVolumeAssembly("SEGMENT");

	const int N_max_row = 100;

	TGeoVolume *row[N_max_row];// = new TGeoVolumeAssembly("ROW");
	double module_x = 0, module_y = 0;

	//for(int i = 0; i < N_max_row; i++){
	for(int i = 0; i < N_max_row; i++){

		row[i] = new TGeoVolumeAssembly(Form("ROW_%d", i));

		double angle_i = (2*i+1)*theta_bin/2;
		if(i==0) module_y = module_short*0.5*cos(angle_i/2);
		else    module_y += module_short*0.5*cos(angle_i-theta_bin) + module_short*0.5*cos(angle_i) + module_short*sin(angle_i)*tan(i*theta_bin);

		for(int j = 0; j < N_max_row; j++){

			double angle_j= (2*j+1)*theta_bin/2;
			if(j==0) module_x = module_short*0.5*cos(angle_j/2);
			else    module_x += module_short*0.5*cos(angle_j-theta_bin) + module_short*0.5*cos(angle_j) + module_short*sin(angle_j)*tan(j*theta_bin);

			double radius_module = sqrt(module_x*module_x + module_y*module_y);
			if(radius_module>R_outer || radius_module<R_inner) continue;

			TGeoTranslation t_module( module_x,  0, module_short*0.5*sin(angle_j));
			TGeoRotation r_module;
			r_module.SetAngles(90, angle_j*180/TMath::Pi(), 0);

			TGeoCombiTrans c_module(t_module, r_module);
			TGeoHMatrix* h_module = new TGeoHMatrix(c_module);
			row[i]->AddNode(module, j, h_module);

			// a temple length
			double blength = sqrt(module_x*module_x + module_y*module_y) - module_length/2 - module_short/tan(angle_j)/2;
			double x1 = blength * cos(angle_j);
			double y1 = blength * sin(angle_j) + module_short*sin(angle_j)/2;

			//std::cout<<"j: "<<j<<"   "<<module_x<<"  "<<R_inner + module_short*0.5*sin(angle_j)<<std::endl;
			std::cout<<"i and j: "<< i << " " <<j<<"   "<<module_x<<"  "<<module_y << "; x1, y1: " << x1 << " " << y1 <<std::endl;

		}

		TGeoTranslation t_module_row( module_y, 0, module_short*0.5*sin(angle_i));
		TGeoRotation r_module_row;
		r_module_row.SetAngles(90, angle_i*180/TMath::Pi(), 0);

		TGeoCombiTrans c_module_row(t_module_row, r_module_row);
		TGeoHMatrix* h_module_row = new TGeoHMatrix(c_module_row);
		segment->AddNode(row[i], i, h_module_row);


	}


	//segment->AddNode(test_box, 0, h_box);

	TGeoRotation r0;
        r0.SetAngles(0, 0, 0);
        TGeoTranslation t0(0, 0, dist_z);
        TGeoCombiTrans c0(t0, r0);
        TGeoHMatrix* h0 = new TGeoHMatrix(c0);
	top->AddNode(segment, 0, h0);

	TGeoRotation r1;
        r1.SetAngles(0, 0, 90);
	TGeoCombiTrans c1(t0, r1);
        TGeoHMatrix* h1 = new TGeoHMatrix(c1);
	top->AddNode(segment, 1, h1);


	TGeoRotation r2;
        r2.SetAngles(0, 0, 180);
        TGeoCombiTrans c2(t0, r2);
        TGeoHMatrix* h2 = new TGeoHMatrix(c2);
        top->AddNode(segment, 2, h2);

	TGeoRotation r3;
        r3.SetAngles(0, 0, 270);
        TGeoCombiTrans c3(t0, r3);
        TGeoHMatrix* h3 = new TGeoHMatrix(c3);
        top->AddNode(segment, 3, h3);




	segment->SetLineColor(kCyan);







}

ChnsEmcPoint* ChnsEmc::AddHit(
		Int_t trackID,
		Int_t detID,
		TVector3 pos,
		TVector3 mom,
		Double_t time,
		Double_t length,
		Double_t eLoss,
		Int_t eventID,
		Int_t moduleID,  Int_t segmentID, Int_t fLocationID,
		Int_t copyID)
{
	TClonesArray& clref = *fChnsEmcPointCollection;
	Int_t size = clref.GetEntriesFast();
	return new (clref[size]) ChnsEmcPoint(trackID, detID, pos, mom, time, length, eLoss, eventID, moduleID, segmentID, fLocationID, copyID);
}

FairModule* ChnsEmc::CloneModule() const { return new ChnsEmc(*this); }

void ChnsEmc::DefineSensitiveVolumes()
{
	TObjArray* volumes = gGeoManager->GetListOfVolumes();
	TIter next(volumes);
	TGeoVolume* volume;
	while ((volume = static_cast<TGeoVolume*>(next()))) {
		if (IsSensitive(volume->GetName())) {
			LOG(debug2) << "Sensitive Volume " << volume->GetName();
			AddSensitiveVolume(volume);
		}
	}
}

Bool_t ChnsEmc::IsSensitive(const std::string& name)
{
	if (name.find("SEN") != std::string::npos) { //if not found, return npos which is a very large value
		return kTRUE;
	}
	return kFALSE;
}

ClassImp(ChnsEmc);
