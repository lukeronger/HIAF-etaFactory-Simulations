/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
#include "EiccEmc.h"

#include "FairGeoInterface.h"
#include "FairGeoLoader.h"
#include "FairGeoNode.h"
#include "FairGeoVolume.h"
#include "FairRootManager.h"
#include "FairRun.h"
#include "FairRuntimeDb.h"
#include "FairVolume.h"
#include "EiccDetectorList.h"
#include "EiccStack.h"
#include "EiccEmcGeo.h"
#include "EiccEmcGeoPar.h"
#include "EiccEmcPoint.h"

#include <TClonesArray.h>
#include <TGeoBBox.h>
#include <TGeoCompositeShape.h>
#include <TGeoManager.h>
#include <TGeoMaterial.h>
#include <TGeoMedium.h>
#include <TGeoTube.h>
#include <TGeoTrd1.h>
#include <TVirtualMC.h>
#include <iostream>
using std::cout;
using std::endl;

EiccEmc::EiccEmc()
	: FairDetector("EiccEmc", kTRUE, kEiccEmc)
	, fEventID(-1)
	, fTrackID(-1)
	, fVolumeID(-1)
	, fPos()
	, fMom()
	, fTime(-1.)
	, fLength(-1.)
	  , fELoss(-1)
	  , fEiccEmcPointCollection(new TClonesArray("EiccEmcPoint"))
{}

EiccEmc::EiccEmc(const char* name, Bool_t active)
	: FairDetector(name, active, kEiccEmc)
	, fEventID(-1)	
	, fTrackID(-1)
	, fVolumeID(-1)
	, fPos()
	, fMom()
	, fTime(-1.)
	, fLength(-1.)
	  , fELoss(-1)
	  , fEiccEmcPointCollection(new TClonesArray("EiccEmcPoint"))
{}

EiccEmc::EiccEmc(const EiccEmc& right)
	: FairDetector(right)
	, fEventID(-1)
	, fTrackID(-1)
	, fVolumeID(-1)
	, fPos()
	, fMom()
	, fTime(-1.)
	, fLength(-1.)
	  , fELoss(-1)
	  , fEiccEmcPointCollection(new TClonesArray("EiccEmcPoint"))
{}

EiccEmc::~EiccEmc()
{
	if (fEiccEmcPointCollection) {
		fEiccEmcPointCollection->Delete();
		delete fEiccEmcPointCollection;
	}
}

void EiccEmc::Initialize()
{
	/**
	 * WORKAROUND needed for Geant4 in MT mode
	 * Call AddSensitiveVolume for sensitive volumes in order to fill
	 * thread-local FairModule::svList.
	 */
	DefineSensitiveVolumes();

	FairDetector::Initialize();
	FairRuntimeDb* rtdb = FairRun::Instance()->GetRuntimeDb();
	EiccEmcGeoPar* par = (EiccEmcGeoPar*)(rtdb->getContainer("EiccEmcGeoPar"));

	ELoss_all=0;
}

Bool_t EiccEmc::ProcessHits(FairVolume* vol)
{
	/** This method is called from the MC stepping */
	Int_t copyNo= -1, copyNo2= -1;

	// Set parameters at entrance of volume. Reset ELoss.
	if (TVirtualMC::GetMC()->IsTrackEntering()) {
		fELoss = 0.;
		fTime = TVirtualMC::GetMC()->TrackTime() * 1.0e09;
		fLength = TVirtualMC::GetMC()->TrackLength();
		TVirtualMC::GetMC()->TrackPosition(fPos);
		TVirtualMC::GetMC()->TrackMomentum(fMom);
		/*
		   Int_t copyNo_vacuum;
		   TVirtualMC::GetMC()->CurrentVolID(copyNo_vacuum);
		   fTrackID = TVirtualMC::GetMC()->GetStack()->GetCurrentTrackNumber();
		   if((copyNo_vacuum==701 || copyNo_vacuum==702) && fTrackID!=0 ){
		   fVolumeID = vol->getMCid();
		   fEventID = gMC->CurrentEvent(); //yutie 0406
		   Int_t fModuleID = 0;        Short_t fRowID = 0;
		   copyNo= -1;
		   TVirtualMC::GetMC()->CurrentVolID(copyNo);
		   TVirtualMC::GetMC()->CurrentVolOffID(1,fModuleID);

		   fELoss = TVirtualMC::GetMC()->Etot();
		   ELoss_all+=fELoss;

		   AddHit(
		   fTrackID,
		   fVolumeID,
		   TVector3(fPos.X(), fPos.Y(), fPos.Z()),
		   TVector3(fMom.Px(), fMom.Py(), fMom.Pz()),
		   fTime,
		   fLength,
		   fELoss,
		   fEventID,
		   fModuleID, fRowID, copyNo);

		// Increment number of EiccEmc det points in TParticle
		EiccStack* stack = (EiccStack*)TVirtualMC::GetMC()->GetStack();
		stack->AddPoint(kEiccEmc);
		}
		 */
	}

	//output test
	/*
	   if(TVirtualMC::GetMC()->IsNewTrack()){
	   if(TVirtualMC::GetMC()->Etot()>0.01){
	   std::cout<<"fEventID: "<<gMC->CurrentEvent()<<"  fTrackID: "<<TVirtualMC::GetMC()->GetStack()->GetCurrentTrackNumber()<<"  "<<TVirtualMC::GetMC()->Etot()<<std::endl;
	   std::cout<<": "<<TVirtualMC::GetMC()->CurrentVolID(copyNo)<<"    "<<copyNo<<"   "<<TVirtualMC::GetMC()->CurrentVolOffID(1,copyNo2)<<"   "<<copyNo2<<endl;
	   }
	   }
	 */

	// Sum energy loss for all steps in the active volume
	fELoss += TVirtualMC::GetMC()->Edep();

	// Create EiccEmcPoint at exit of active volume
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
		fEventID = gMC->CurrentEvent(); //yutie 0406
		Int_t fModuleID = 0;        Int_t fSegmentID = 0;        
		copyNo= -1;
		TVirtualMC::GetMC()->CurrentVolID(copyNo);
		TVirtualMC::GetMC()->CurrentVolOffID(1,fModuleID);
		TVirtualMC::GetMC()->CurrentVolOffID(2,fSegmentID);
		/*	
			if(fTrackID==0){
			std::cout<<"fEventID: "<<fEventID<<"  fTrackID: "<<fTrackID<<"  "<<TVirtualMC::GetMC()->Etot()<<std::endl;
			std::cout<<": "<<TVirtualMC::GetMC()->CurrentVolID(copyNo)<<"  "<<TVirtualMC::GetMC()->CurrentVolOffID(1,copyNo2)<<endl;
			std::cout<<": "<<copyNo<<": "<<copyNo2;
			std::cout<<": "<<fELoss<<endl;
			ELoss_all+=fELoss;
			}
		 */
		AddHit( 
				fTrackID,
				fVolumeID,
				TVector3(fPos.X(), fPos.Y(), fPos.Z()),
				TVector3(fMom.Px(), fMom.Py(), fMom.Pz()),
				fTime,
				fLength,
				fELoss,
				fEventID,
				fModuleID, fSegmentID, copyNo);


		// Increment number of EiccEmc det points in TParticle
		EiccStack* stack = (EiccStack*)TVirtualMC::GetMC()->GetStack();
		stack->AddPoint(kEiccEmc);
	}
	return kTRUE;
}

void EiccEmc::EndOfEvent()
{

	LOG(info) << "EiccEmc: " << fEiccEmcPointCollection->GetEntriesFast() << " points registered in this event";

	//cout<<"energy_loss:  "<<ELoss_all<<endl;
	//ELoss_all=0;

	fEiccEmcPointCollection->Clear();

}

void EiccEmc::Register()
{

	/** This will create a branch in the output tree called
	  EiccEmcPoint, setting the last parameter to kFALSE means:
	  this collection will not be written to the file, it will exist
	  only during the simulation.
	 */

	if (!gMC->IsMT()) {
		FairRootManager::Instance()->Register("EiccEmcPoint", "EiccEmc", fEiccEmcPointCollection, kTRUE);
	} else {
		FairRootManager::Instance()->RegisterAny("EiccEmcPoint", fEiccEmcPointCollection, kTRUE);
	}
}

TClonesArray* EiccEmc::GetCollection(Int_t iColl) const
{
	if (iColl == 0) {
		return fEiccEmcPointCollection;
	} else {
		return NULL;
	}
}

void EiccEmc::Reset() { fEiccEmcPointCollection->Clear(); }

void EiccEmc::ConstructGeometry()
{
	TGeoVolume* top = gGeoManager->GetTopVolume();
	TGeoMedium* Si = gGeoManager->GetMedium("Si");
	TGeoMedium* Carbon = gGeoManager->GetMedium("C");
	TGeoMedium* Lead = gGeoManager->GetMedium("lead");
	TGeoMedium* Scin = gGeoManager->GetMedium("FscScint");
	TGeoMedium* Vaccum = gGeoManager->GetMedium("vacuum");
	TGeoMedium* Air = gGeoManager->GetMedium("air");

	if (Air == 0) {
		cout<<endl<<"############################################WRONG"<<endl;
		//TGeoMaterial* matSi = new TGeoMaterial("Si", 28.0855, 14, 2.33);
		//Si = new TGeoMedium("Si", 2, matSi);
	}

	// barrel  inner_radius : 100cm, cross section of a shashlik module~4cm X 4cm


	//----configuration_I
	const double R_inner=90, R_outer=125, L_z=300; //outer is not used

	//----configuration_II
	//const double R_inner=70, R_outer=105, L_z=300;

	//----configuration_III
	//const double R_inner=110, R_outer=105, L_z=300;

	const int N_phi= int(2*TMath::Pi()*R_inner/4);  //cross seection at R_inner : 4X4cm 

	const int N_layer_barrel=240;
	const double thickness_scin = 0.15,  thickness_lead = 0.035;
	const double module_length = N_layer_barrel*(thickness_scin+thickness_lead);
	double theta_coverage = atan(L_z/2. /R_inner);  //0- 
	double theta_bin = TMath::Pi()*2.0/N_phi;
	const int N_z = int(theta_coverage/theta_bin);
	double tan_theta = TMath::Tan(theta_bin/2.0);

	// build layers
	TGeoVolume* ecal_lead_layer[N_layer_barrel];
	TGeoVolume* ecal_scin_layer[N_layer_barrel];

	double L_lead_short_min = 0;
	for(int i=0; i<N_layer_barrel; i++){
		double L_lead_short = (R_inner+i*(thickness_lead+thickness_scin))*tan_theta * 2;
		double L_lead_long = (R_inner+i*(thickness_lead+thickness_scin)+thickness_lead)*tan_theta * 2;
		double L_scin_long = (R_inner+(i+1)*(thickness_lead+thickness_scin))*tan_theta * 2;
		ecal_lead_layer[i]=gGeoManager->MakeTrd2(Form("ecal_lead_layer_%d",i), Lead, L_lead_short/2, L_lead_long/2, L_lead_short/2, L_lead_long/2,  thickness_lead/2); //half length
		ecal_scin_layer[i]=gGeoManager->MakeTrd2(Form("ecal_scin_layer_%d",i), Scin, L_lead_long/2, L_scin_long/2, L_lead_long/2, L_scin_long/2, thickness_scin/2); //half length
		ecal_lead_layer[i]->SetLineColor(kGreen);
		ecal_scin_layer[i]->SetLineColor(kRed);

		if(i==0) L_lead_short_min = L_lead_short;
	}

	//build module
	TGeoVolume *module = new TGeoVolumeAssembly("MODULE");
	for(int i=0; i<N_layer_barrel; i++){
		double z_deviation=i*(thickness_scin+thickness_lead);
		module->AddNode(ecal_lead_layer[i], N_layer_barrel+i+1, new TGeoTranslation(0,0,z_deviation+thickness_lead/2));
		module->AddNode(ecal_scin_layer[i], i+1, new TGeoTranslation(0,0,z_deviation+thickness_lead+thickness_scin/2));// check the deviation, where is the center point; if N_layer is necessary?
	}  

	// build segment
	TGeoVolume *segment = new TGeoVolumeAssembly("SEGMENT");
	double module_x = 0;
	//for(int i=0; i<N_z; i++){// max x =111.693
	int j=0;
	while(1){
		double angle_j=	(2*j+1)*theta_bin/2;

		if(j==0) module_x = L_lead_short_min*0.5*cos(angle_j/2);
		else 	module_x += L_lead_short_min*0.5*cos(angle_j-theta_bin) + L_lead_short_min*0.5*cos(angle_j) + L_lead_short_min*sin(angle_j)*tan(j*theta_bin); 

		if(module_x>L_z/2.0){ break;}

		TGeoTranslation t_module( module_x,  0, L_lead_short_min*0.5*sin(angle_j));
		TGeoRotation r_module;
		r_module.SetAngles(90, angle_j*180/TMath::Pi(), 0);

		TGeoCombiTrans c_module(t_module, r_module);
		TGeoHMatrix* h_module = new TGeoHMatrix(c_module);
		segment->AddNode(module, 2*j+1, h_module);


		TGeoTranslation t_module_2( -1*module_x,  0, L_lead_short_min*0.5*sin(angle_j));
		TGeoRotation r_module_2;
		r_module_2.SetAngles(90, 360-1*angle_j*180/TMath::Pi(), 0);

		TGeoCombiTrans c_module_2(t_module_2, r_module_2);
		TGeoHMatrix* h_module_2 = new TGeoHMatrix(c_module_2);
		segment->AddNode(module, 2*j+2, h_module_2);
		std::cout<<"j: "<<j<<"   "<<module_x<<"  "<<R_inner + L_lead_short_min*0.5*sin(angle_j)<<std::endl;
		j++;
	}

	//build a virtual volume to re-shape the segment
	double dz_height = R_inner+module_length+5;
	double x2_bottom_half = dz_height*tan_theta;
	TGeoVolume *segment_shaping = gGeoManager->MakeTrd1("segment_shaping", Air, 0, x2_bottom_half, L_z/2.+module_length, dz_height/2.0); //(x1, x2, dy, dz). x1 need to tune. can't use material vaccum
	//segment_shaping->SetInvisible();
	//segment_shaping->VisibleDaughters(kTRUE);


	TGeoTranslation t_shape(0, 0, R_inner-dz_height/2.0);
    TGeoRotation r_shape;  r_shape.SetAngles(90, 0, 0);
    TGeoCombiTrans c_shape(t_shape, r_shape);
    TGeoHMatrix* h_shape = new TGeoHMatrix(c_shape);
	segment_shaping->AddNode(segment, 1, h_shape);

	TGeoVolume *barrel = new TGeoVolumeAssembly("BARREL");
	
	for(int i=0; i<N_phi; i++){
        double angle_ring=360.0/(double)N_phi*i+360.0/(double)N_phi/2.0;
        TGeoTranslation t_seg(dz_height/2.0*TMath::Cos(angle_ring/360.0*2*TMath::Pi()), dz_height/2.0*TMath::Sin(angle_ring/360.0*2*TMath::Pi()), 0);
        TGeoRotation r_seg;  r_seg.SetAngles(90+angle_ring, 90, 0);
        TGeoCombiTrans c_seg(t_seg, r_seg);
        TGeoHMatrix* h_seg = new TGeoHMatrix(c_seg);
        barrel->AddNode(segment_shaping, i+1, h_seg);
    }

	TGeoTranslation t_barrel(0,0,0);
	TGeoRotation r_barrel;  r_barrel.SetAngles(90, 90, 0);
	TGeoCombiTrans c_barrel(t_barrel, r_barrel);
	TGeoHMatrix* h_barrel = new TGeoHMatrix(c_barrel);

	top->AddNode(barrel, 1, 0);
	//top->AddNode(barrel, 1, h_barrel);
	//top->AddNode(segment_shaping, 2, 0);
	//AddSensitiveVolume(segment_shaping);

	for(int i=0; i<N_layer_barrel; i++){
		AddSensitiveVolume(ecal_scin_layer[i]);
		AddSensitiveVolume(ecal_lead_layer[i]);
	}
	

}

EiccEmcPoint* EiccEmc::AddHit(
		Int_t trackID,
		Int_t detID,
		TVector3 pos,
		TVector3 mom,
		Double_t time,
		Double_t length,
		Double_t eLoss,
		Int_t eventID,
		Int_t moduleID,  Int_t segmentID, Int_t copyID)
{
	TClonesArray& clref = *fEiccEmcPointCollection;
	Int_t size = clref.GetEntriesFast();
	return new (clref[size]) EiccEmcPoint(trackID, detID, pos, mom, time, length, eLoss, eventID, moduleID, segmentID, copyID);
}

FairModule* EiccEmc::CloneModule() const { return new EiccEmc(*this); }

void EiccEmc::DefineSensitiveVolumes()
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

Bool_t EiccEmc::IsSensitive(const std::string& name)
{
	if (name.find("Det") != std::string::npos) {
		return kTRUE;
	}
	return kFALSE;
}

ClassImp(EiccEmc);
