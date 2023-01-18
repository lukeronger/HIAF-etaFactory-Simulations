/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
#include "ChnsTof.h"

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
#include "ChnsTofGeo.h"
#include "ChnsTofGeoPar.h"
#include "ChnsTofPoint.h"

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

ChnsTof::ChnsTof()
	: FairDetector("ChnsTof", kTRUE, kChnsTof)
	, fEventID(-1)
	, fTrackID(-1)
	, fVolumeID(-1)
	, fPos()
	, fMom()
	, fTime(-1.)
	, fLength(-1.)
	  , fELoss(-1)
	  , fChnsTofPointCollection(new TClonesArray("ChnsTofPoint"))
{}

ChnsTof::ChnsTof(const char* name, Bool_t active)
	: FairDetector(name, active, kChnsTof)
	, fEventID(-1)	
	, fTrackID(-1)
	, fVolumeID(-1)
	, fPos()
	, fMom()
	, fTime(-1.)
	, fLength(-1.)
	  , fELoss(-1)
	  , fChnsTofPointCollection(new TClonesArray("ChnsTofPoint"))
{}

ChnsTof::ChnsTof(const ChnsTof& right)
	: FairDetector(right)
	, fEventID(-1)
	, fTrackID(-1)
	, fVolumeID(-1)
	, fPos()
	, fMom()
	, fTime(-1.)
	, fLength(-1.)
	  , fELoss(-1)
	  , fChnsTofPointCollection(new TClonesArray("ChnsTofPoint"))
{}

ChnsTof::~ChnsTof()
{
	if (fChnsTofPointCollection) {
		fChnsTofPointCollection->Delete();
		delete fChnsTofPointCollection;
	}
}

void ChnsTof::Initialize()
{
	/**
	 * WORKAROUND needed for Geant4 in MT mode
	 * Call AddSensitiveVolume for sensitive volumes in order to fill
	 * thread-local FairModule::svList.
	 */
	DefineSensitiveVolumes();

	FairDetector::Initialize();
	FairRuntimeDb* rtdb = FairRun::Instance()->GetRuntimeDb();
	ChnsTofGeoPar* par = (ChnsTofGeoPar*)(rtdb->getContainer("ChnsTofGeoPar"));

	ELoss_all=0;
}

Bool_t ChnsTof::ProcessHits(FairVolume* vol)
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

		// Increment number of ChnsTof det points in TParticle
		ChnsStack* stack = (ChnsStack*)TVirtualMC::GetMC()->GetStack();
		stack->AddPoint(kChnsTof);
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

	// Create ChnsTofPoint at exit of active volume
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


		// Increment number of ChnsTof det points in TParticle
		ChnsStack* stack = (ChnsStack*)TVirtualMC::GetMC()->GetStack();
		stack->AddPoint(kChnsTof);
	}
	return kTRUE;
}

void ChnsTof::EndOfEvent()
{

	LOG(info) << "ChnsTof: " << fChnsTofPointCollection->GetEntriesFast() << " points registered in this event";

	//cout<<"energy_loss:  "<<ELoss_all<<endl;
	//ELoss_all=0;

	fChnsTofPointCollection->Clear();

}

void ChnsTof::Register()
{

	/** This will create a branch in the output tree called
	  ChnsTofPoint, setting the last parameter to kFALSE means:
	  this collection will not be written to the file, it will exist
	  only during the simulation.
	 */

	if (!gMC->IsMT()) {
		FairRootManager::Instance()->Register("ChnsTofPoint", "ChnsTof", fChnsTofPointCollection, kTRUE);
	} else {
		FairRootManager::Instance()->RegisterAny("ChnsTofPoint", fChnsTofPointCollection, kTRUE);
	}
}

TClonesArray* ChnsTof::GetCollection(Int_t iColl) const
{
	if (iColl == 0) {
		return fChnsTofPointCollection;
	} else {
		return NULL;
	}
}

void ChnsTof::Reset() { fChnsTofPointCollection->Clear(); }

void ChnsTof::ConstructGeometry()
{
	TGeoVolume* top = gGeoManager->GetTopVolume();
	TGeoMedium* Si = gGeoManager->GetMedium("Si");
	TGeoMedium* Carbon = gGeoManager->GetMedium("C");
	TGeoMedium* Lead = gGeoManager->GetMedium("lead");
	TGeoMedium* Scin = gGeoManager->GetMedium("FscScint");
	TGeoMedium* Vaccum = gGeoManager->GetMedium("vacuum");

	if (Si == 0) {
		TGeoMaterial* matSi = new TGeoMaterial("Si", 28.0855, 14, 2.33);
		Si = new TGeoMedium("Si", 2, matSi);
	}
	if (Carbon == 0) {
		TGeoMaterial* matCarbon = new TGeoMaterial("C", 12.011, 6.0, 2.265);
		Carbon = new TGeoMedium("C", 3, matCarbon);
	}


	TGeoVolume* det0_tof = gGeoManager->MakeTubs("Det0_tof", Scin, 45, 50, 80, 0, 360);
	TGeoRotation r0;
	r0.SetAngles(0, 0, 0);
	TGeoTranslation t0(0, 0, 30);
	TGeoCombiTrans c0(t0, r0);
	TGeoHMatrix* h0 = new TGeoHMatrix(c0);
	top->AddNode(det0_tof, 1, h0);
	det0_tof->SetLineColor(kGreen+1);

	AddSensitiveVolume(det0_tof);



}
ChnsTofPoint* ChnsTof::AddHit(
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
	TClonesArray& clref = *fChnsTofPointCollection;
	Int_t size = clref.GetEntriesFast();
	return new (clref[size]) ChnsTofPoint(trackID, detID, pos, mom, time, length, eLoss, eventID, moduleID, segmentID, copyID);
}

FairModule* ChnsTof::CloneModule() const { return new ChnsTof(*this); }

void ChnsTof::DefineSensitiveVolumes()
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

Bool_t ChnsTof::IsSensitive(const std::string& name)
{
	if (name.find("Det") != std::string::npos) {
		return kTRUE;
	}
	return kFALSE;
}

ClassImp(ChnsTof);
