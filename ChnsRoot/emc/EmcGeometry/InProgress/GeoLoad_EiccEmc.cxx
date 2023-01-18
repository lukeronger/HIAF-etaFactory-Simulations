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
#include "EmcDetPar.h"

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
}

Bool_t EiccEmc::ProcessHits(FairVolume* vol)
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


		// Increment number of EiccEmc det points in TParticle
		EiccStack* stack = (EiccStack*)TVirtualMC::GetMC()->GetStack();
		stack->AddPoint(kEiccEmc);
	}
	return kTRUE;
}

void EiccEmc::EndOfEvent()
{

	LOG(info) << "EiccEmc: " << fEiccEmcPointCollection->GetEntriesFast() << " points registered in this event";

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

	TString fileName = GetGeometryFileName();
	cout<<fileName<<endl;

	// barrel
	TGeoVolume *barrel = TGeoVolumeAssembly::Import(fileName, "BARREL");
	TGeoTranslation t_barrel(0,0,0);
	TGeoRotation r_barrel;  r_barrel.SetAngles(90, 90, 0);
	TGeoCombiTrans c_barrel(t_barrel, r_barrel);
	TGeoHMatrix* h_barrel = new TGeoHMatrix(c_barrel);
	top->AddNode(barrel, 0, h_barrel);

	// hadron endcap
	TGeoVolume *endcap_hadron = TGeoVolumeAssembly::Import(fileName, "Endcap_Hadron");
	top->AddNode(endcap_hadron, 1, new TGeoTranslation(0,0, DetPar::Zdist_hadron));

	// e endcap
	TGeoVolume *endcap_e = TGeoVolumeAssembly::Import(fileName, "E_endcap");
	double xrot = 180;
	double zmov = -DetPar::Zdist_e;
	TGeoRotation *rot0 = new TGeoRotation();
	rot0 -> RotateZ(0);
	rot0 -> RotateX(xrot);
	TGeoCombiTrans *capMatrix0 = new TGeoCombiTrans("", 0.0, 0.0, zmov, rot0);
	top->AddNode(endcap_e, 2, capMatrix0);
	
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
		Int_t moduleID,  Int_t segmentID, Int_t fLocationID,
		Int_t copyID)
{
	TClonesArray& clref = *fEiccEmcPointCollection;
	Int_t size = clref.GetEntriesFast();
	return new (clref[size]) EiccEmcPoint(trackID, detID, pos, mom, time, length, eLoss, eventID, moduleID, segmentID, fLocationID, copyID);
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
	if (name.find("SEN") != std::string::npos) { //?????????
		return kTRUE;
	}
	return kFALSE;
}

ClassImp(EiccEmc);