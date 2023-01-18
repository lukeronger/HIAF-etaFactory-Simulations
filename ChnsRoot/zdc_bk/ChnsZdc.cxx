/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
#include "ChnsZdc.h"

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
#include "ChnsZdcGeo.h"
#include "ChnsZdcGeoPar.h"
#include "ChnsZdcPoint.h"

#include <TClonesArray.h>
#include <TGeoBBox.h>
#include <TGeoCompositeShape.h>
#include <TGeoManager.h>
#include <TGeoMaterial.h>
#include <TGeoMedium.h>
#include <TGeoTube.h>
#include <TGDMLParse.h>
#include <TVirtualMC.h>
#include <iostream>
using std::cout;
using std::endl;

ChnsZdc::ChnsZdc()
    : FairDetector("ChnsZdc", kTRUE, kChnsZdc)
    , fTrackID(-1)
    , fEventID(-1)
    , fVolumeID(-1)
    , fPos()
    , fMom()
    , fTime(-1.)
    , fLength(-1.)
    , fELoss(-1)
    , fChnsZdcPointCollection(new TClonesArray("ChnsZdcPoint"))
{}

ChnsZdc::ChnsZdc(const char* name, Bool_t active)
    : FairDetector(name, active, kChnsZdc)
    , fTrackID(-1)
    , fEventID(-1)
    , fVolumeID(-1)
    , fPos()
    , fMom()
    , fTime(-1.)
    , fLength(-1.)
    , fELoss(-1)
    , fChnsZdcPointCollection(new TClonesArray("ChnsZdcPoint"))
{}

ChnsZdc::ChnsZdc(const ChnsZdc& right)
    : FairDetector(right)
    , fTrackID(-1)
    , fEventID(-1)
    , fVolumeID(-1)
    , fPos()
    , fMom()
    , fTime(-1.)
    , fLength(-1.)
    , fELoss(-1)
    , fChnsZdcPointCollection(new TClonesArray("ChnsZdcPoint"))
{}

ChnsZdc::~ChnsZdc()
{
    if (fChnsZdcPointCollection) {
        fChnsZdcPointCollection->Delete();
        delete fChnsZdcPointCollection;
    }
}

void ChnsZdc::Initialize()
{
    /**
     * WORKAROUND needed for Geant4 in MT mode
     * Call AddSensitiveVolume for sensitive volumes in order to fill
     * thread-local FairModule::svList.
     */
    DefineSensitiveVolumes();

    FairDetector::Initialize();
    FairRuntimeDb* rtdb = FairRun::Instance()->GetRuntimeDb();
    ChnsZdcGeoPar* par = (ChnsZdcGeoPar*)(rtdb->getContainer("ChnsZdcGeoPar"));
}

Bool_t ChnsZdc::ProcessHits(FairVolume* vol)
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

    // Create ChnsZdcPoint at exit of active volume
    if ( (TVirtualMC::GetMC()->IsTrackExiting() || TVirtualMC::GetMC()->IsTrackStop()
        || TVirtualMC::GetMC()->IsTrackDisappeared())&& TVirtualMC::GetMC()->TrackCharge()!=0 ) {
    //if ( (TVirtualMC::GetMC()->IsTrackExiting() || TVirtualMC::GetMC()->IsTrackStop()
    //    || TVirtualMC::GetMC()->IsTrackDisappeared()) ) {
        fTrackID = TVirtualMC::GetMC()->GetStack()->GetCurrentTrackNumber();
        fVolumeID = vol->getMCid();
//	std::cout<<"=====================================name:  "<<(vol->getGeoNode())->rootVolume()->GetName()<<"    "<<std::endl;

	//std::cout<<"XYZ are "<<fPos.X()<<", "<<fPos.Y()<<", "<<fPos.Z()<<",  R is "<<sqrt(fPos.X()*fPos.X()+fPos.Y()*fPos.Y())<<", ID is "<<fVolumeID<<std::endl;
	fEventID = gMC->CurrentEvent(); //yutie 0407
        if (fELoss == 0.) {
            return kFALSE;
        }

	//std::cout<<"XYZ are "<<fPos.X()<<", "<<fPos.Y()<<", "<<fPos.Z()<<std::endl;
        AddHit(fTrackID,
               fVolumeID,
               TVector3(fPos.X(), fPos.Y(), fPos.Z()),
               TVector3(fMom.Px(), fMom.Py(), fMom.Pz()),
               fTime,
               fLength,
               fELoss,
	       fEventID); 

        // Increment number of ChnsZdc det points in TParticle
        ChnsStack* stack = (ChnsStack*)TVirtualMC::GetMC()->GetStack();
        stack->AddPoint(kChnsZdc);
    }

    return kTRUE;
}

void ChnsZdc::EndOfEvent()
{

    LOG(info) << "ChnsZdc: " << fChnsZdcPointCollection->GetEntriesFast() << " points registered in this event";

    fChnsZdcPointCollection->Clear();
}

void ChnsZdc::Register()
{

    /** This will create a branch in the output tree called
      ChnsZdcPoint, setting the last parameter to kFALSE means:
      this collection will not be written to the file, it will exist
      only during the simulation.
  */

    if (!gMC->IsMT()) {
        FairRootManager::Instance()->Register("ChnsZdcPoint", "ChnsZdc", fChnsZdcPointCollection, kTRUE);
    } else {
        FairRootManager::Instance()->RegisterAny("ChnsZdcPoint", fChnsZdcPointCollection, kTRUE);
    }
}

TClonesArray* ChnsZdc::GetCollection(Int_t iColl) const
{
    if (iColl == 0) {
        return fChnsZdcPointCollection;
    } else {
        return NULL;
    }
}

void ChnsZdc::Reset() { fChnsZdcPointCollection->Clear(); }

void ChnsZdc::ConstructGeometry()
{

    TString fileName=GetGeometryFileName();
    if(fileName.EndsWith(".root")) {
	    ConstructRootGeometry();
    } else if(fileName.EndsWith(".gdml")) {
	    ConstructGDMLGeometry();
    } else {
	    ConstructAsciiGeometry();
    }

}

void ChnsZdc::ConstructGDMLGeometry(){

    //Open GDML file in ChnsRoot/geometry   "genfitGeom_AllSi_v3.gdml"
    TString fileName=GetGeometryFileName().Data();
    TGeoVolume* top = gGeoManager->GetTopVolume();
    TGDMLParse parser;
    TGeoVolume *mvd_with_pipe = parser.GDMLReadFile(fileName);
    if(mvd_with_pipe){
	    top->AddNode(mvd_with_pipe, 0);
    }

    //TGeoManager::Import("genfitGeom_AllSi_v3.gdml");
    //TGeoVolume* top = gGeoManager->GetTopVolume();
}

void ChnsZdc::ConstructAsciiGeometry(){
/*

	 std::cout<<"i and j: ==================="<<std::endl;
	TGeoVolume* top = gGeoManager->GetTopVolume();

        TGeoMaterial *vacuum=new TGeoMaterial("vacuum",0,0,0);
        TGeoMaterial *Fe=new TGeoMaterial("Fe",55.845,26,7.87);

        TGeoMedium *Air=new TGeoMedium("Vacuum",0,vacuum);
        TGeoMedium *Iron=new TGeoMedium("Iron",1,Fe);

        TGeoVolume* Zdc_endcap = gGeoManager->MakeBox("Zdc_endcap",Air,200,200,100);

        const double R_inner = 0, R_outer = 10, dist_z = 300;  //cm

        double module_short = 2, module_length = 20;  //cm   X2
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

*/


}


ChnsZdcPoint* ChnsZdc::AddHit(Int_t trackID,
                                      Int_t detID,
                                      TVector3 pos,
                                      TVector3 mom,
                                      Double_t time,
                                      Double_t length,
                                      Double_t eLoss,
				      Int_t eventID)
{
    TClonesArray& clref = *fChnsZdcPointCollection;
    Int_t size = clref.GetEntriesFast();
    return new (clref[size]) ChnsZdcPoint(trackID, detID, pos, mom, time, length, eLoss, eventID);
}

FairModule* ChnsZdc::CloneModule() const { return new ChnsZdc(*this); }

void ChnsZdc::DefineSensitiveVolumes()
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

Bool_t ChnsZdc::IsSensitive(const std::string& name)
{
    //if (name.find("Det") != std::string::npos) {
    if (name.find("VstCellFlexLayer") != std::string::npos) {
        return kTRUE;
    }
    return kFALSE;
}

ClassImp(ChnsZdc);
