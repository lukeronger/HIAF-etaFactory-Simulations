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
	}

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

	//endcap
	const int N_layer=240, N_row=80, N_col=80;
	const double thickness_lead=0.035, thickness_scin=0.15;
	const double length_side=4;

	TGeoVolume* ecal_lead_endcap = gGeoManager->MakeBox("ecal_lead_endcap", Lead, length_side/2.0, length_side/2.0, thickness_lead/2.0); // the sequence decide ID
	TGeoVolume* ecal_scin_endcap = gGeoManager->MakeBox("ecal_scin_endcap", Scin, length_side/2.0, length_side/2.0, thickness_scin/2.0);
	ecal_scin_endcap->SetLineColor(kRed);
	ecal_lead_endcap->SetLineColor(kGreen);

	TGeoVolume *module_endcap = new TGeoVolumeAssembly("MODULE_ENDCAP");
	double position_z=0;
	for(int i=0; i<N_layer; i++){
		module_endcap->AddNode(ecal_lead_endcap, N_layer+i+1, new TGeoTranslation( 0, 0, position_z+thickness_lead/2.0));
		position_z+=thickness_lead;
		module_endcap->AddNode(ecal_scin_endcap, i+1, new TGeoTranslation( 0, 0, position_z+thickness_scin/2.0));
		position_z+=thickness_scin;
	}

	TGeoVolume *emc_endcap = new TGeoVolumeAssembly("EMC_ENDCAP"); 
	for(int i=0; i<N_row; i++){
		for(int j=0; j<N_col; j++){
			double x_endcap=-(N_col-1)*length_side*0.5 + j*length_side;  //x: colume position
			double y_endcap=-(N_row-1)*length_side*0.5 + i*length_side;
			emc_endcap->AddNode(module_endcap, i*N_col+j+1, new TGeoTranslation(x_endcap, y_endcap, 0));
		}
	}
	
	top->AddNode(emc_endcap, 1, new TGeoTranslation(0, 0, 200));

	// sensitive vaccum detector
	/*
	   TGeoVolume* vacuum_box = gGeoManager->MakeBox("vacuum_box", Vaccum, length_side*N_col/2.0, length_side*N_row/2.0, 0.01/2.0);
	   top->AddNode(vacuum_box, 2*N_layer+1, new TGeoTranslation(0, 0, -1));
	   top->AddNode(vacuum_box, 2*N_layer+2, new TGeoTranslation(0, 0, N_layer*(thickness_lead+thickness_scin)+1));	
	 */

	AddSensitiveVolume(ecal_scin_endcap);
	AddSensitiveVolume(ecal_lead_endcap);
	//AddSensitiveVolume(vacuum_box);

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
