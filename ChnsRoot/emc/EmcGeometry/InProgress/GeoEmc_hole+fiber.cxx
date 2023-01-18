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

    TGeoMedium* Lead = gGeoManager->GetMedium("lead");
    TGeoMedium* Scin = gGeoManager->GetMedium("FscScint");
	TGeoMedium* Vaccum = gGeoManager->GetMedium("vacuum");
	TGeoMedium* Steel = gGeoManager->GetMedium("steel");
	TGeoMedium* Aluminum = gGeoManager->GetMedium("Aluminum");
	TGeoMedium* Tyvek = gGeoManager->GetMedium("tyvek");
	TGeoMedium* Fiber = gGeoManager->GetMedium("FscFiber");

    //endcap
    const int N_layer=240, N_row=7, N_col=7; //array use odd number
    const double thickness_lead=0.035, thickness_scin=0.15, thickness_reflector=0.0075;  //cm, reflector is tyvek now
	const double diameter_fiber_hole=0.16, diameter_rod_hole=0.17;
	const double diameter_fiber=0.12, diameter_rod=0.15;
	const double Aluminum_plate_thickness=0.4;
    const double length_side=4;
	const double total_hole_length = N_layer * (thickness_lead + thickness_scin + 2*thickness_reflector);
	const double fiber_length = total_hole_length + 5;

	TGeoBBox *ecal_lead_endcap_geo = new TGeoBBox("Lead_Box", length_side/2.0, length_side/2.0, thickness_lead/2.0);
	TGeoBBox *ecal_scin_endcap_geo = new TGeoBBox("Scin_Box", length_side/2.0, length_side/2.0, thickness_scin/2.0);
	TGeoBBox *ecal_reflector_endcap_geo = new TGeoBBox("Reflector_Box", length_side/2.0, length_side/2.0, thickness_reflector/2.0);
	TGeoTube *hole_scin = new TGeoTube("hole_scin", 0, diameter_fiber_hole/2.0, (thickness_scin+0.02)/2.0);
	TGeoTube *hole_lead = new TGeoTube("hole_lead", 0, diameter_fiber_hole/2.0, (thickness_lead+0.02)/2.0);
	TGeoTube *Rod_hole_scin = new TGeoTube("Rod_hole_scin", 0, diameter_rod_hole/2.0, (thickness_scin+0.02)/2.0);
    TGeoTube *Rod_hole_lead = new TGeoTube("Rod_hole_lead", 0, diameter_rod_hole/2.0, (thickness_lead+0.02)/2.0);

	const int nfiber=4;
	TGeoTranslation *tr[nfiber][nfiber];
	for(int i=0; i<nfiber; i++){
		double x_hole= -length_side/2.0 + length_side/(2.0*double(nfiber)) + i*length_side/double(nfiber);
		for(int j=0; j<nfiber; j++){
			double y_hole= -length_side/2.0 + length_side/(2.0*double(nfiber)) + j*length_side/double(nfiber);
			tr[i][j]= new TGeoTranslation( Form("tr_%d_%d",i,j), x_hole, y_hole, 0);
			tr[i][j]->RegisterYourself();
		}
	}

	const int nrod=2;
    TGeoTranslation *tr_rod[nrod][nrod];
    for(int i=0; i<nrod; i++){
        double x_hole= -length_side/2.0 + length_side/(2.0*double(nrod)) + i*length_side/double(nrod);
        for(int j=0; j<nrod; j++){
            double y_hole= -length_side/2.0 + length_side/(2.0*double(nrod)) + j*length_side/double(nrod);
            tr_rod[i][j]= new TGeoTranslation( Form("tr_rod_%d_%d",i,j), x_hole, y_hole, 0);
            tr_rod[i][j]->RegisterYourself();
        }
    }

	// TGeoCompositeShap, subtract the holes
	TGeoCompositeShape *scin_layer = new TGeoCompositeShape("scin_layer", "Scin_Box - hole_scin:tr_0_0 - hole_scin:tr_0_1 - hole_scin:tr_0_2 - hole_scin:tr_0_3 - hole_scin:tr_1_0 - hole_scin:tr_1_1 - hole_scin:tr_1_2 - hole_scin:tr_1_3 - hole_scin:tr_2_0 - hole_scin:tr_2_1 - hole_scin:tr_2_2 - hole_scin:tr_2_3 - hole_scin:tr_3_0 - hole_scin:tr_3_1 - hole_scin:tr_3_2 - hole_scin:tr_3_3 - Rod_hole_scin:tr_rod_0_0 - Rod_hole_scin:tr_rod_0_1 - Rod_hole_scin:tr_rod_1_0 - Rod_hole_scin:tr_rod_1_1");
	TGeoCompositeShape *lead_layer = new TGeoCompositeShape("lead_layer", "Lead_Box - hole_lead:tr_0_0 - hole_lead:tr_0_1 - hole_lead:tr_0_2 - hole_lead:tr_0_3 - hole_lead:tr_1_0 - hole_lead:tr_1_1 - hole_lead:tr_1_2 - hole_lead:tr_1_3 - hole_lead:tr_2_0 - hole_lead:tr_2_1 - hole_lead:tr_2_2 - hole_lead:tr_2_3 - hole_lead:tr_3_0 - hole_lead:tr_3_1 - hole_lead:tr_3_2 - hole_lead:tr_3_3 - Rod_hole_lead:tr_rod_0_0 - Rod_hole_lead:tr_rod_0_1 - Rod_hole_lead:tr_rod_1_0 - Rod_hole_lead:tr_rod_1_1");
	TGeoCompositeShape *reflector_layer = new TGeoCompositeShape("reflector_layer", "Reflector_Box - hole_lead:tr_0_0 - hole_lead:tr_0_1 - hole_lead:tr_0_2 - hole_lead:tr_0_3 - hole_lead:tr_1_0 - hole_lead:tr_1_1 - hole_lead:tr_1_2 - hole_lead:tr_1_3 - hole_lead:tr_2_0 - hole_lead:tr_2_1 - hole_lead:tr_2_2 - hole_lead:tr_2_3 - hole_lead:tr_3_0 - hole_lead:tr_3_1 - hole_lead:tr_3_2 - hole_lead:tr_3_3 - Rod_hole_lead:tr_rod_0_0 - Rod_hole_lead:tr_rod_0_1 - Rod_hole_lead:tr_rod_1_0 - Rod_hole_lead:tr_rod_1_1");  // subtract the lead hole

    TGeoVolume* ecal_lead_endcap = new TGeoVolume("ecal_lead_endcap", lead_layer, Lead); // the sequence decide ID
    TGeoVolume* ecal_scin_endcap = new TGeoVolume("ecal_scin_endcap", scin_layer, Scin);
	TGeoVolume* ecal_reflector = new TGeoVolume("ecal_Reflector", reflector_layer, Tyvek);  //the name ecal_reflector has a bug, can't figure out why?????????????????????????
    ecal_scin_endcap->SetLineColor(kYellow);
    //ecal_lead_endcap->SetLineColor(kGreen);

	// build module
    TGeoVolume *module = new TGeoVolumeAssembly("MODULE");
	double position_z=0;

	// Aluminum front plate
    TGeoBBox *ecal_Aluminum_plate_geo = new TGeoBBox("Front_Plate_Box", length_side/2.0, length_side/2.0, Aluminum_plate_thickness/2.0);
    TGeoVolume* ecal_Aluminum_plate = new TGeoVolume("ecal_Aluminum_plate", ecal_Aluminum_plate_geo, Aluminum);
    module->AddNode(ecal_Aluminum_plate, 0, new TGeoTranslation( 0, 0, Aluminum_plate_thickness/2.0));
    ecal_Aluminum_plate->SetLineColor(kBlue);
	position_z += Aluminum_plate_thickness;

	// No. description: 0,Aluminum; 1-N_layer,scin; N_layer+1-2*N_layer,lead; 2*N_layer-4*N_layer,reflector.
    for(int i=0; i<N_layer; i++){
		module->AddNode(ecal_reflector, N_layer*2 + 2*i+1, new TGeoTranslation( 0, 0, position_z+thickness_reflector/2.0));
		position_z += thickness_reflector;
		module->AddNode(ecal_scin_endcap, i+1, new TGeoTranslation( 0, 0, position_z+thickness_scin/2.0));
		position_z += thickness_scin;
		module->AddNode(ecal_reflector, N_layer*2 + 2*i+2, new TGeoTranslation( 0, 0, position_z+thickness_reflector/2.0)); // 2=1+1
		position_z += thickness_reflector;
		module->AddNode(ecal_lead_endcap, N_layer+i+1, new TGeoTranslation( 0, 0, position_z+thickness_lead/2.0));
		position_z+=thickness_lead;
    }

	// fiber
	TGeoTube *fiber_geo = new TGeoTube("fiber_geo", 0, diameter_fiber/2.0, fiber_length/2.0);
	TGeoVolume* fiber_volume = new TGeoVolume("fiber_volume", fiber_geo, Fiber);

	// Steel Rod
	TGeoTube *rod_geo = new TGeoTube("rod_geo", 0, diameter_rod/2.0, fiber_length/2.0);
    TGeoVolume* rod_volume = new TGeoVolume("rod_volume", rod_geo, Steel);

	// Add fiber and rod to module
    for(int i=0; i<nfiber; i++){
        double x_hole= -length_side/2.0 + length_side/(2.0*double(nfiber)) + i*length_side/double(nfiber);
        for(int j=0; j<nfiber; j++){
            double y_hole= -length_side/2.0 + length_side/(2.0*double(nfiber)) + j*length_side/double(nfiber);
			module->AddNode(fiber_volume, 2000+nfiber*i+j, new TGeoTranslation( x_hole, y_hole, fiber_length/2.0 + Aluminum_plate_thickness)); 
        }
    }

	for(int i=0; i<nrod; i++){
        double x_hole= -length_side/2.0 + length_side/(2.0*double(nrod)) + i*length_side/double(nrod);
        for(int j=0; j<nrod; j++){
            double y_hole= -length_side/2.0 + length_side/(2.0*double(nrod)) + j*length_side/double(nrod);
            module->AddNode(rod_volume, 3000+nrod*i+j, new TGeoTranslation( x_hole, y_hole, fiber_length/2.0 + Aluminum_plate_thickness));
        }
    }


    TGeoVolume *emc_endcap = new TGeoVolumeAssembly("EMC_ENDCAP"); 
    for(int i=0; i<N_row; i++){
		for(int j=0; j<N_col; j++){
			double x_endcap=-(N_row-1)*length_side*0.5 + i*length_side;
			double y_endcap=-(N_col-1)*length_side*0.5 + j*length_side;
			emc_endcap->AddNode(module, i*N_row+j, new TGeoTranslation(x_endcap, y_endcap, 0));
		}
    }
    top->AddNode(emc_endcap, 1, 0);
	//top->AddNode(module, 1, 0);

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
