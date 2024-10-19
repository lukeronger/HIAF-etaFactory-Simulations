/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
#include "ChnsTpc.h"

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
#include "ChnsTpcGeo.h"
#include "ChnsTpcGeoPar.h"
#include "ChnsTpcPoint.h"

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

ChnsTpc::ChnsTpc()
    : FairDetector("ChnsTpc", kTRUE, kChnsTpc)
    , fTrackID(-1)
    , fEventID(-1)
    , fVolumeID(-1)
    , fPos()
    , fMom()
    , fTime(-1.)
    , fLength(-1.)
    , fELoss(-1)
    , fChnsTpcPointCollection(new TClonesArray("ChnsTpcPoint"))
{}

ChnsTpc::ChnsTpc(const char* name, Bool_t active)
    : FairDetector(name, active, kChnsTpc)
    , fTrackID(-1)
    , fEventID(-1)
    , fVolumeID(-1)
    , fPos()
    , fMom()
    , fTime(-1.)
    , fLength(-1.)
    , fELoss(-1)
    , fChnsTpcPointCollection(new TClonesArray("ChnsTpcPoint"))
{}

ChnsTpc::ChnsTpc(const ChnsTpc& right)
    : FairDetector(right)
    , fTrackID(-1)
    , fEventID(-1)
    , fVolumeID(-1)
    , fPos()
    , fMom()
    , fTime(-1.)
    , fLength(-1.)
    , fELoss(-1)
    , fChnsTpcPointCollection(new TClonesArray("ChnsTpcPoint"))
{}

ChnsTpc::~ChnsTpc()
{
    if (fChnsTpcPointCollection) {
        fChnsTpcPointCollection->Delete();
        delete fChnsTpcPointCollection;
    }
}

void ChnsTpc::Initialize()
{
    /**
     * WORKAROUND needed for Geant4 in MT mode
     * Call AddSensitiveVolume for sensitive volumes in order to fill
     * thread-local FairModule::svList.
     */
    DefineSensitiveVolumes();

    FairDetector::Initialize();
    FairRuntimeDb* rtdb = FairRun::Instance()->GetRuntimeDb();
    ChnsTpcGeoPar* par = (ChnsTpcGeoPar*)(rtdb->getContainer("ChnsTpcGeoPar"));
}

Bool_t ChnsTpc::ProcessHits(FairVolume* vol)
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

    // Create ChnsTpcPoint at exit of active volume
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

        // Increment number of ChnsTpc det points in TParticle
        ChnsStack* stack = (ChnsStack*)TVirtualMC::GetMC()->GetStack();
        stack->AddPoint(kChnsTpc);
    }

    return kTRUE;
}

void ChnsTpc::EndOfEvent()
{

    LOG(info) << "ChnsTpc: " << fChnsTpcPointCollection->GetEntriesFast() << " points registered in this event";

    fChnsTpcPointCollection->Clear();
}

void ChnsTpc::Register()
{

    /** This will create a branch in the output tree called
      ChnsTpcPoint, setting the last parameter to kFALSE means:
      this collection will not be written to the file, it will exist
      only during the simulation.
  */

    if (!gMC->IsMT()) {
        FairRootManager::Instance()->Register("ChnsTpcPoint", "ChnsTpc", fChnsTpcPointCollection, kTRUE);
    } else {
        FairRootManager::Instance()->RegisterAny("ChnsTpcPoint", fChnsTpcPointCollection, kTRUE);
    }
}

TClonesArray* ChnsTpc::GetCollection(Int_t iColl) const
{
    if (iColl == 0) {
        return fChnsTpcPointCollection;
    } else {
        return NULL;
    }
}

void ChnsTpc::Reset() { fChnsTpcPointCollection->Clear(); }

void ChnsTpc::ConstructGeometry()
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

void ChnsTpc::ConstructGDMLGeometry(){

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

void ChnsTpc::ConstructAsciiGeometry(){

    TGeoVolume* top = gGeoManager->GetTopVolume();
    TGeoMedium* Si = gGeoManager->GetMedium("Si");
    TGeoMedium* Carbon = gGeoManager->GetMedium("C");
    TGeoMedium* Aluminium = gGeoManager->GetMedium("aluminium"); //26.98 13. 2.7

    if (Si == 0) {
        TGeoMaterial* matSi = new TGeoMaterial("Si", 28.0855, 14, 2.33);
        Si = new TGeoMedium("Si", 2, matSi);
    }
    if (Carbon == 0) {
        TGeoMaterial* matCarbon = new TGeoMaterial("C", 12.011, 6.0, 2.265);
        Carbon = new TGeoMedium("C", 3, matCarbon);
    }
    if (Aluminium == 0) {
        TGeoMaterial* matAlum = new TGeoMaterial("Aluminium", 26.98, 13., 2.7);
        Aluminium = new TGeoMedium("C", 3, matAlum);
    }


    double thickness = 0.005;//0.005cm  =  0.00005m = 50 um
    double thickness_alum = 0.02; //set alum thickness to be 4 time of the pixel chip.

    TGeoVolume* det0_mvd = gGeoManager->MakeTubs("Det0_mvd", Si, 0, 0.001, 0.001, 0, 360);
    TGeoRotation r0;
    r0.SetAngles(0, 0, 0);
    TGeoTranslation t0(0, 0, 0);
    TGeoCombiTrans c0(t0, r0);
    TGeoHMatrix* h0 = new TGeoHMatrix(c0);
    top->AddNode(det0_mvd, 1, h0);
    det0_mvd->SetLineColor(kGreen);


    TGeoVolume* det1_mvd = gGeoManager->MakeTubs("Det1_mvd", Si, 3.3, 3.3+thickness, 15, 0, 360);
    TGeoRotation r1;
    r1.SetAngles(0, 0, 0);
    TGeoTranslation t1(0, 0, 0);
    TGeoCombiTrans c1(t1, r1);
    TGeoHMatrix* h1 = new TGeoHMatrix(c1);
    top->AddNode(det1_mvd, 1, h1);
    det1_mvd->SetLineColor(kGreen);
    AddSensitiveVolume(det1_mvd);


    TGeoVolume* det2_mvd = gGeoManager->MakeTubs("Det2_mvd", Si, 5.7, 5.7+thickness, 15, 0, 360);
    TGeoRotation r2;
    r2.SetAngles(0, 0, 0);
    TGeoTranslation t2(0, 0, 0);
    TGeoCombiTrans c2(t2, r2);
    TGeoHMatrix* h2 = new TGeoHMatrix(c2);
    top->AddNode(det2_mvd, 1, h2);
    det2_mvd->SetLineColor(kGreen);
    AddSensitiveVolume(det2_mvd);

    TGeoVolume* det3_mvd = gGeoManager->MakeTubs("Det3_mvd", Si, 21, 21+thickness, 54/2., 0, 360);
    TGeoRotation r3;
    r3.SetAngles(0, 0, 0);
    TGeoTranslation t3(0, 0, 0);
    TGeoCombiTrans c3(t3, r3);
    TGeoHMatrix* h3 = new TGeoHMatrix(c3);
    top->AddNode(det3_mvd, 1, h3);
    det3_mvd->SetLineColor(kGreen);
    AddSensitiveVolume(det3_mvd);

    TGeoVolume* det4_mvd = gGeoManager->MakeTubs("Det4_mvd", Si, 22.68, 22.68+thickness, 60/2., 0, 360);
    TGeoRotation r4;
    r4.SetAngles(0, 0, 0);
    TGeoTranslation t4(0, 0, 0);
    TGeoCombiTrans c4(t4, r4);
    TGeoHMatrix* h4 = new TGeoHMatrix(c4);
    top->AddNode(det4_mvd, 1, h4);
    det4_mvd->SetLineColor(kGreen);
    AddSensitiveVolume(det4_mvd);

    // ====================================================================================

    TGeoVolume* det5_mvd = gGeoManager->MakeTubs("Det5_mvd", Si, 39.3, 39.3+thickness, 105/2., 0, 360);
    TGeoRotation r5;
    r5.SetAngles(0, 0, 0);
    TGeoTranslation t5(0, 0, 0);
    TGeoCombiTrans c5(t5, r5);
    TGeoHMatrix* h5 = new TGeoHMatrix(c5);
    top->AddNode(det5_mvd, 1, h5);
    det5_mvd->SetLineColor(kGreen);
    AddSensitiveVolume(det5_mvd);

    TGeoVolume* det6_mvd = gGeoManager->MakeTubs("Det6_mvd", Si, 43.23, 43.23+thickness, 114/2., 0, 360);
    TGeoRotation r6;
    r6.SetAngles(0, 0, 0);
    TGeoTranslation t6(0, 0, 0);
    TGeoCombiTrans c6(t6, r6);
    TGeoHMatrix* h6 = new TGeoHMatrix(c6);
    top->AddNode(det6_mvd, 1, h6);
    det6_mvd->SetLineColor(kGreen);
    AddSensitiveVolume(det6_mvd);

   // creat the forward and backward disk
   //======================================================================================


    TGeoVolume* det_m5_mvd = gGeoManager->MakeTubs("Det_m5_mvd", Si, 4.41, 43.23, thickness/2, 0, 360);
    TGeoRotation r_m5;
    r_m5.SetAngles(0, 0, 0);
    TGeoTranslation t_m5(0, 0, -121);
    TGeoCombiTrans c_m5(t_m5, r_m5);
    TGeoHMatrix* h_m5 = new TGeoHMatrix(c_m5);
    top->AddNode(det_m5_mvd, 1, h_m5);
    det_m5_mvd->SetLineColor(kGreen);
    AddSensitiveVolume(det_m5_mvd);

    TGeoVolume* det_m4_mvd = gGeoManager->MakeTubs("Det_m4_mvd", Si, 3.70, 43.23, thickness/2, 0, 360);
    TGeoRotation r_m4;
    r_m4.SetAngles(0, 0, 0);
    TGeoTranslation t_m4(0, 0, -97);
    TGeoCombiTrans c_m4(t_m4, r_m4);
    TGeoHMatrix* h_m4 = new TGeoHMatrix(c_m4);
    top->AddNode(det_m4_mvd, 1, h_m4);
    det_m4_mvd->SetLineColor(kGreen);
    AddSensitiveVolume(det_m4_mvd);


    TGeoVolume* det_m3_mvd = gGeoManager->MakeTubs("Det_m3_mvd", Si, 3.18, 43.23, thickness/2, 0, 360);
    TGeoRotation r_m3;
    r_m3.SetAngles(0, 0, 0);
    TGeoTranslation t_m3(0, 0, -73);
    TGeoCombiTrans c_m3(t_m3, r_m3);
    TGeoHMatrix* h_m3 = new TGeoHMatrix(c_m3);
    top->AddNode(det_m3_mvd, 1, h_m3);
    det_m3_mvd->SetLineColor(kGreen);
    AddSensitiveVolume(det_m3_mvd);


    TGeoVolume* det_m2_mvd = gGeoManager->MakeTubs("Det_m2_mvd", Si, 3.18, 36.26, thickness/2, 0, 360);
    TGeoRotation r_m2;
    r_m2.SetAngles(0, 0, 0);
    TGeoTranslation t_m2(0, 0, -49);
    TGeoCombiTrans c_m2(t_m2, r_m2);
    TGeoHMatrix* h_m2 = new TGeoHMatrix(c_m2);
    top->AddNode(det_m2_mvd, 1, h_m2);
    det_m2_mvd->SetLineColor(kGreen);
    AddSensitiveVolume(det_m2_mvd);


    TGeoVolume* det_m1_mvd = gGeoManager->MakeTubs("Det_m1_mvd", Si, 3.18, 18.50, thickness/2, 0, 360);
    TGeoRotation r_m1;
    r_m1.SetAngles(0, 0, 0);
    TGeoTranslation t_m1(0, 0, -25);
    TGeoCombiTrans c_m1(t_m1, r_m1);
    TGeoHMatrix* h_m1 = new TGeoHMatrix(c_m1);
    top->AddNode(det_m1_mvd, 1, h_m1);
    det_m1_mvd->SetLineColor(kGreen);
    AddSensitiveVolume(det_m1_mvd);

    TGeoVolume* det_p5_mvd = gGeoManager->MakeTubs("Det_p5_mvd", Si, 5.91, 43.23, thickness/2, 0, 360);
    TGeoRotation r_p5;
    r_p5.SetAngles(0, 0, 0);
    TGeoTranslation t_p5(0, 0, 121);
    TGeoCombiTrans c_p5(t_p5, r_p5);
    TGeoHMatrix* h_p5 = new TGeoHMatrix(c_p5);
    top->AddNode(det_p5_mvd, 1, h_p5);
    det_p5_mvd->SetLineColor(kGreen);
    AddSensitiveVolume(det_p5_mvd);

    TGeoVolume* det_p4_mvd = gGeoManager->MakeTubs("Det_p4_mvd", Si, 4.70, 43.23, thickness/2, 0, 360);
    TGeoRotation r_p4;
    r_p4.SetAngles(0, 0, 0);
    TGeoTranslation t_p4(0, 0, 97);
    TGeoCombiTrans c_p4(t_p4, r_p4);
    TGeoHMatrix* h_p4 = new TGeoHMatrix(c_p4);
    top->AddNode(det_p4_mvd, 1, h_p4);
    det_p4_mvd->SetLineColor(kGreen);
    AddSensitiveVolume(det_p4_mvd);


    TGeoVolume* det_p3_mvd = gGeoManager->MakeTubs("Det_p3_mvd", Si, 3.50, 43.23, thickness/2, 0, 360);
    TGeoRotation r_p3;
    r_p3.SetAngles(0, 0, 0);
    TGeoTranslation t_p3(0, 0, 73);
    TGeoCombiTrans c_p3(t_p3, r_p3);
    TGeoHMatrix* h_p3 = new TGeoHMatrix(c_p3);
    top->AddNode(det_p3_mvd, 1, h_p3);
    det_p3_mvd->SetLineColor(kGreen);
    AddSensitiveVolume(det_p3_mvd);


    TGeoVolume* det_p2_mvd = gGeoManager->MakeTubs("Det_p2_mvd", Si, 3.18, 36.26, thickness/2, 0, 360);
    TGeoRotation r_p2;
    r_p2.SetAngles(0, 0, 0);
    TGeoTranslation t_p2(0, 0, 49);
    TGeoCombiTrans c_p2(t_p2, r_p2);
    TGeoHMatrix* h_p2 = new TGeoHMatrix(c_p2);
    top->AddNode(det_p2_mvd, 1, h_p2);
    det_p2_mvd->SetLineColor(kGreen);
    AddSensitiveVolume(det_p2_mvd);


    TGeoVolume* det_p1_mvd = gGeoManager->MakeTubs("Det_p1_mvd", Si, 3.18, 18.50, thickness/2, 0, 360);
    TGeoRotation r_p1;
    r_p1.SetAngles(0, 0, 0);
    TGeoTranslation t_p1(0, 0, 25);
    TGeoCombiTrans c_p1(t_p1, r_p1);
    TGeoHMatrix* h_p1 = new TGeoHMatrix(c_p1);
    top->AddNode(det_p1_mvd, 1, h_p1);
    det_p1_mvd->SetLineColor(kGreen);
    AddSensitiveVolume(det_p1_mvd);

    //add other materials
    TGeoVolume* det1_mvd_appendix = gGeoManager->MakeTubs("Support1_mvd_appendix", Aluminium, 3.3+thickness, 3.3+thickness+thickness_alum, 15, 0, 360);
    top->AddNode(det1_mvd_appendix, 1, h1);   //provide the material of PCB and others. Do not set as sensitive.

    TGeoVolume* det2_mvd_appendix = gGeoManager->MakeTubs("Support2_mvd_appendix", Aluminium, 5.7+thickness, 5.7+thickness+thickness_alum, 15, 0, 360);
    top->AddNode(det2_mvd_appendix, 1, h2);   //provide the material of PCB and others. Do not set as sensitive.

    TGeoVolume* det3_mvd_appendix = gGeoManager->MakeTubs("Support3_mvd_appendix", Aluminium, 21+thickness, 21+thickness+thickness_alum, 54/2., 0, 360);
    top->AddNode(det3_mvd_appendix, 1, h3);   //provide the material of PCB and others. Do not set as sensitive.

    TGeoVolume* det4_mvd_appendix = gGeoManager->MakeTubs("Support4_mvd_appendix", Aluminium, 22.68+thickness, 22.68+thickness+thickness_alum, 60/2., 0, 360);
    top->AddNode(det4_mvd_appendix, 1, h4);   //provide the material of PCB and others. Do not set as sensitive.

    TGeoVolume* det5_mvd_appendix = gGeoManager->MakeTubs("Support5_mvd_appendix", Aluminium, 39.3+thickness, 39.3+thickness+thickness_alum, 105/2., 0, 360);
    top->AddNode(det5_mvd_appendix, 1, h5);   //provide the material of PCB and others. Do not set as sensitive.

    TGeoVolume* det6_mvd_appendix = gGeoManager->MakeTubs("Support6_mvd_appendix", Aluminium, 43.23+thickness, 43.23+thickness+thickness_alum, 114/2., 0, 360);
    top->AddNode(det6_mvd_appendix, 1, h6);   //provide the material of PCB and others. Do not set as sensitive.



    TGeoVolume* det_m5_mvd_appendix = gGeoManager->MakeTubs("Support_m5_mvd_appendix", Aluminium, 4.41, 43.23, thickness_alum/2, 0, 360);
    TGeoTranslation t_m5_appendix(0, 0, -121-thickness/2.-thickness_alum/2.);
    TGeoCombiTrans c_m5_appendix(t_m5_appendix, r_m5);
    TGeoHMatrix* h_m5_appendix = new TGeoHMatrix(c_m5_appendix);
    top->AddNode(det_m5_mvd_appendix, 1, h_m5_appendix);

    TGeoVolume* det_m4_mvd_appendix = gGeoManager->MakeTubs("Support_m4_mvd_appendix", Aluminium, 3.70, 43.23, thickness_alum/2, 0, 360);
    TGeoTranslation t_m4_appendix(0, 0, -97-thickness/2.-thickness_alum/2.);
    TGeoCombiTrans c_m4_appendix(t_m4_appendix, r_m4);
    TGeoHMatrix* h_m4_appendix = new TGeoHMatrix(c_m4_appendix);
    top->AddNode(det_m4_mvd_appendix, 1, h_m4_appendix);

    TGeoVolume* det_m3_mvd_appendix = gGeoManager->MakeTubs("Support_m3_mvd_appendix", Aluminium, 3.18, 43.23, thickness_alum/2, 0, 360);
    TGeoTranslation t_m3_appendix(0, 0, -73-thickness/2.-thickness_alum/2.);
    TGeoCombiTrans c_m3_appendix(t_m3_appendix, r_m3);
    TGeoHMatrix* h_m3_appendix = new TGeoHMatrix(c_m3_appendix);
    top->AddNode(det_m3_mvd_appendix, 1, h_m3_appendix);

    TGeoVolume* det_m2_mvd_appendix = gGeoManager->MakeTubs("Support_m2_mvd_appendix", Aluminium, 3.18, 36.26, thickness_alum/2, 0, 360);
    TGeoTranslation t_m2_appendix(0, 0, -49-thickness/2.-thickness_alum/2.);
    TGeoCombiTrans c_m2_appendix(t_m2_appendix, r_m2);
    TGeoHMatrix* h_m2_appendix = new TGeoHMatrix(c_m2_appendix);
    top->AddNode(det_m2_mvd_appendix, 1, h_m2_appendix);

    TGeoVolume* det_m1_mvd_appendix = gGeoManager->MakeTubs("Support_m1_mvd_appendix", Aluminium, 3.18, 18.50, thickness_alum/2, 0, 360);
    TGeoTranslation t_m1_appendix(0, 0, -25-thickness/2.-thickness_alum/2.);
    TGeoCombiTrans c_m1_appendix(t_m1_appendix, r_m1);
    TGeoHMatrix* h_m1_appendix = new TGeoHMatrix(c_m1_appendix);
    top->AddNode(det_m1_mvd_appendix, 1, h_m1_appendix);


    TGeoVolume* det_p5_mvd_appendix = gGeoManager->MakeTubs("Support_p5_mvd_appendix", Aluminium, 5.91, 43.23, thickness_alum/2, 0, 360);
    TGeoTranslation t_p5_appendix(0, 0, 121+thickness/2.+thickness_alum/2.);
    TGeoCombiTrans c_p5_appendix(t_p5_appendix, r_p5);
    TGeoHMatrix* h_p5_appendix = new TGeoHMatrix(c_p5_appendix);
    top->AddNode(det_p5_mvd_appendix, 1, h_p5_appendix);

    TGeoVolume* det_p4_mvd_appendix = gGeoManager->MakeTubs("Support_p4_mvd_appendix", Aluminium, 4.70, 43.23, thickness_alum/2, 0, 360);
    TGeoTranslation t_p4_appendix(0, 0, 97+thickness/2.+thickness_alum/2.);
    TGeoCombiTrans c_p4_appendix(t_p4_appendix, r_p4);
    TGeoHMatrix* h_p4_appendix = new TGeoHMatrix(c_p4_appendix);
    top->AddNode(det_p4_mvd_appendix, 1, h_p4_appendix);

    TGeoVolume* det_p3_mvd_appendix = gGeoManager->MakeTubs("Support_p3_mvd_appendix", Aluminium, 3.50, 43.23, thickness_alum/2, 0, 360);
    TGeoTranslation t_p3_appendix(0, 0, 73+thickness/2.+thickness_alum/2.);
    TGeoCombiTrans c_p3_appendix(t_p3_appendix, r_p3);
    TGeoHMatrix* h_p3_appendix = new TGeoHMatrix(c_p3_appendix);
    top->AddNode(det_p3_mvd_appendix, 1, h_p3_appendix);

    TGeoVolume* det_p2_mvd_appendix = gGeoManager->MakeTubs("Support_p2_mvd_appendix", Aluminium, 3.18, 36.26, thickness_alum/2, 0, 360);
    TGeoTranslation t_p2_appendix(0, 0, 49+thickness/2.+thickness_alum/2.);
    TGeoCombiTrans c_p2_appendix(t_p2_appendix, r_p2);
    TGeoHMatrix* h_p2_appendix = new TGeoHMatrix(c_p2_appendix);
    top->AddNode(det_p2_mvd_appendix, 1, h_p2_appendix);

    TGeoVolume* det_p1_mvd_appendix = gGeoManager->MakeTubs("Support_p1_mvd_appendix", Aluminium, 3.18, 18.50, thickness_alum/2, 0, 360);
    TGeoTranslation t_p1_appendix(0, 0, 25+thickness/2.+thickness_alum/2.);
    TGeoCombiTrans c_p1_appendix(t_p1_appendix, r_p1);
    TGeoHMatrix* h_p1_appendix = new TGeoHMatrix(c_p1_appendix);
    top->AddNode(det_p1_mvd_appendix, 1, h_p1_appendix);




}


ChnsTpcPoint* ChnsTpc::AddHit(Int_t trackID,
                                      Int_t detID,
                                      TVector3 pos,
                                      TVector3 mom,
                                      Double_t time,
                                      Double_t length,
                                      Double_t eLoss,
				      Int_t eventID)
{
    TClonesArray& clref = *fChnsTpcPointCollection;
    Int_t size = clref.GetEntriesFast();
    return new (clref[size]) ChnsTpcPoint(trackID, detID, pos, mom, time, length, eLoss, eventID);
}

FairModule* ChnsTpc::CloneModule() const { return new ChnsTpc(*this); }

void ChnsTpc::DefineSensitiveVolumes()
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

Bool_t ChnsTpc::IsSensitive(const std::string& name)
{
    //if (name.find("Det") != std::string::npos) {
    if (name.find("VstCellFlexLayer") != std::string::npos) {
        return kTRUE;
    }
    return kFALSE;
}

ClassImp(ChnsTpc);
