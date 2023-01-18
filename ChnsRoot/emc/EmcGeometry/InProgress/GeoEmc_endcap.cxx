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
	TGeoMedium* Air = gGeoManager->GetMedium("air");

	// cross section of a shashlik module~4cm X 4cm
	const int N_layer_barrel=240;
    const double thickness_scin = 0.15,  thickness_lead = 0.035;
    const double module_length = N_layer_barrel*(thickness_scin+thickness_lead);

	const double R_inner_xy = 20, R_outer_xy = 120, dist_z = 150;  //cm
	double module_short = 4;  //cm
    double module_long = module_short * (1 + module_length / dist_z);
    double module_shrink = 0.99;
    double theta_bin = 2 * TMath::ATan((module_long-module_short)/2/module_length);

	// build layers
	TGeoVolume* ecal_lead_layer[N_layer_barrel];
	TGeoVolume* ecal_scin_layer[N_layer_barrel];

	double L_lead_short_min = 0;
	for(int i=0; i<N_layer_barrel; i++){
		double L_lead_short = module_short * (1 + i*(thickness_lead+thickness_scin) / dist_z);
		double L_lead_long = module_short * (1 + (i*(thickness_lead+thickness_scin)+thickness_lead) / dist_z);
		double L_scin_long = module_short * (1 + (i+1)*(thickness_lead+thickness_scin) / dist_z);
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

	const int N_max_row = 50;  // max in loop, not actual max
    TGeoVolume *row[N_max_row];// = new TGeoVolumeAssembly("ROW");
    double module_x = 0, module_y = 0;

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
            if(radius_module>R_outer_xy || radius_module<R_inner_xy) continue;

            TGeoTranslation t_module( module_x,  0, module_short*0.5*sin(angle_j));
            TGeoRotation r_module;
            r_module.SetAngles(90, angle_j*180/TMath::Pi(), 0);
            TGeoCombiTrans c_module(t_module, r_module);
            TGeoHMatrix* h_module = new TGeoHMatrix(c_module);

            TGeoTranslation t_module_2( -module_x,  0, module_short*0.5*sin(angle_j));
            TGeoRotation r_module_2;
            r_module_2.SetAngles(90, 360-angle_j*180/TMath::Pi(), 0);
            TGeoCombiTrans c_module_2(t_module_2, r_module_2);
            TGeoHMatrix* h_module_2 = new TGeoHMatrix(c_module_2);

            row[i]->AddNode(module, 2*j, h_module);
            row[i]->AddNode(module, 2*j+1, h_module_2);

            std::cout<<"i: "<<i<<"   "<<module_y<<"  "<<" j: "<<j<<"   "<<module_x<<"  "<<std::endl; 
			//module_short*0.5*sin(angle_j)<<std::endl;
        }

        TGeoTranslation t_module_row( module_y, 0, module_short*0.5*sin(angle_i));
        TGeoRotation r_module_row;
        r_module_row.SetAngles(90, angle_i*180/TMath::Pi(), 0);

        TGeoCombiTrans c_module_row(t_module_row, r_module_row);
        TGeoHMatrix* h_module_row = new TGeoHMatrix(c_module_row);
        segment->AddNode(row[i], 2*i, h_module_row);

        TGeoTranslation t_module_row_2( -module_y, 0, module_short*0.5*sin(angle_i));
        TGeoRotation r_module_row_2;
        r_module_row_2.SetAngles(90, 360-angle_i*180/TMath::Pi(), 0);

        TGeoCombiTrans c_module_row_2(t_module_row_2, r_module_row_2);
        TGeoHMatrix* h_module_row_2 = new TGeoHMatrix(c_module_row_2);
        segment->AddNode(row[i], 2*i+1, h_module_row_2);
    }
/*
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
*/


	top->AddNode(segment, 0, new TGeoTranslation(0,0, dist_z));
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
