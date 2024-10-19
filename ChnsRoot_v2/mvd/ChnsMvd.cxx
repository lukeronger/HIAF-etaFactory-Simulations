/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
#include "ChnsMvd.h"

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
#include "ChnsMvdGeo.h"
#include "ChnsMvdGeoPar.h"
#include "ChnsMvdPoint.h"

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

ChnsMvd::ChnsMvd()
    : FairDetector("ChnsMvd", kTRUE, kChnsMvd)
    , fTrackID(-1)
    , fEventID(-1)
    , fVolumeID(-1)
    , fPos()
    , fMom()
    , fTime(-1.)
    , fLength(-1.)
    , fELoss(-1)
    , fChnsMvdPointCollection(new TClonesArray("ChnsMvdPoint"))
{}

ChnsMvd::ChnsMvd(const char* name, Bool_t active)
    : FairDetector(name, active, kChnsMvd)
    , fTrackID(-1)
    , fEventID(-1)
    , fVolumeID(-1)
    , fPos()
    , fMom()
    , fTime(-1.)
    , fLength(-1.)
    , fELoss(-1)
    , fChnsMvdPointCollection(new TClonesArray("ChnsMvdPoint"))
{}

ChnsMvd::ChnsMvd(const ChnsMvd& right)
    : FairDetector(right)
    , fTrackID(-1)
    , fEventID(-1)
    , fVolumeID(-1)
    , fPos()
    , fMom()
    , fTime(-1.)
    , fLength(-1.)
    , fELoss(-1)
    , fChnsMvdPointCollection(new TClonesArray("ChnsMvdPoint"))
{}

ChnsMvd::~ChnsMvd()
{
    if (fChnsMvdPointCollection) {
        fChnsMvdPointCollection->Delete();
        delete fChnsMvdPointCollection;
    }
}

void ChnsMvd::Initialize()
{
    /**
     * WORKAROUND needed for Geant4 in MT mode
     * Call AddSensitiveVolume for sensitive volumes in order to fill
     * thread-local FairModule::svList.
     */
    DefineSensitiveVolumes();

    FairDetector::Initialize();
    FairRuntimeDb* rtdb = FairRun::Instance()->GetRuntimeDb();
    ChnsMvdGeoPar* par = (ChnsMvdGeoPar*)(rtdb->getContainer("ChnsMvdGeoPar"));
}

Bool_t ChnsMvd::ProcessHits(FairVolume* vol)
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

    // Create ChnsMvdPoint at exit of active volume
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

        // Increment number of ChnsMvd det points in TParticle
        ChnsStack* stack = (ChnsStack*)TVirtualMC::GetMC()->GetStack();
        stack->AddPoint(kChnsMvd);
    }

    return kTRUE;
}

void ChnsMvd::EndOfEvent()
{

    LOG(info) << "ChnsMvd: " << fChnsMvdPointCollection->GetEntriesFast() << " points registered in this event";

    fChnsMvdPointCollection->Clear();
}

void ChnsMvd::Register()
{

    /** This will create a branch in the output tree called
      ChnsMvdPoint, setting the last parameter to kFALSE means:
      this collection will not be written to the file, it will exist
      only during the simulation.
  */

    if (!gMC->IsMT()) {
        FairRootManager::Instance()->Register("ChnsMvdPoint", "ChnsMvd", fChnsMvdPointCollection, kTRUE);
    } else {
        FairRootManager::Instance()->RegisterAny("ChnsMvdPoint", fChnsMvdPointCollection, kTRUE);
    }
}

TClonesArray* ChnsMvd::GetCollection(Int_t iColl) const
{
    if (iColl == 0) {
        return fChnsMvdPointCollection;
    } else {
        return NULL;
    }
}

void ChnsMvd::Reset() { fChnsMvdPointCollection->Clear(); }

void ChnsMvd::ConstructGeometry()
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

void ChnsMvd::ConstructGDMLGeometry(){

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

void ChnsMvd::ConstructAsciiGeometry(){

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


    double thickness = 0.8;//0.005cm  =  0.00005m = 50 um
    double thickness_alum = 0.02; //set alum thickness to be 4 time of the pixel chip.
   
   int icolor = 1; 

    TGeoVolume* det1_mvd = gGeoManager->MakeTubs("Det1_mvd", Si, 5, 14, thickness*0.5, 0, 360);
    TGeoRotation r1;
    r1.SetAngles(0, 0, 0);
    TGeoTranslation t1(0, 0, 112);
    TGeoCombiTrans c1(t1, r1);
    TGeoHMatrix* h1 = new TGeoHMatrix(c1);
    top->AddNode(det1_mvd, 1, h1);
    det1_mvd->SetLineColor(kYellow-5);
    AddSensitiveVolume(det1_mvd);

    TGeoVolume* det2_mvd = gGeoManager->MakeTubs("Det2_mvd", Si, 5, 15, thickness*0.5, 0, 360);
    TGeoRotation r2;
    r2.SetAngles(0, 0, 0);
    TGeoTranslation t2(0, 0, 117);
    TGeoCombiTrans c2(t2, r2);
    TGeoHMatrix* h2 = new TGeoHMatrix(c2);
    top->AddNode(det2_mvd, 1, h2);
    det2_mvd->SetLineColor(kYellow-5);
    AddSensitiveVolume(det2_mvd);

    TGeoVolume* det3_mvd = gGeoManager->MakeTubs("Det3_mvd", Si, 5, 16, thickness, 0, 360);
    TGeoRotation r3;
    r3.SetAngles(0, 0, 0);
    TGeoTranslation t3(0, 0, 122);
    TGeoCombiTrans c3(t3, r3);
    TGeoHMatrix* h3 = new TGeoHMatrix(c3);
    top->AddNode(det3_mvd, 1, h3);
    det3_mvd->SetLineColor(kMagenta+icolor);
    AddSensitiveVolume(det3_mvd);

    

   // creat the forward and backward disk
   //======================================================================================


    TGeoVolume* det_m5_mvd = gGeoManager->MakeTubs("Det_m5_mvd", Si, 5, 25, thickness, 0, 360);
    TGeoRotation r_m5;
    r_m5.SetAngles(0, 0, 0);
    TGeoTranslation t_m5(0, 0, 130);
    TGeoCombiTrans c_m5(t_m5, r_m5);
    TGeoHMatrix* h_m5 = new TGeoHMatrix(c_m5);
    top->AddNode(det_m5_mvd, 1, h_m5);
    det_m5_mvd->SetLineColor(kMagenta+icolor);
    AddSensitiveVolume(det_m5_mvd);

    TGeoVolume* det_m4_mvd = gGeoManager->MakeTubs("Det_m4_mvd", Si, 5, 25, thickness, 0, 360);
    TGeoRotation r_m4;
    r_m4.SetAngles(0, 0, 0);
    TGeoTranslation t_m4(0, 0, 138);
    TGeoCombiTrans c_m4(t_m4, r_m4);
    TGeoHMatrix* h_m4 = new TGeoHMatrix(c_m4);
    top->AddNode(det_m4_mvd, 1, h_m4);
    det_m4_mvd->SetLineColor(kMagenta+icolor);
    AddSensitiveVolume(det_m4_mvd);


    TGeoVolume* det_m3_mvd = gGeoManager->MakeTubs("Det_m3_mvd", Si, 5, 25, thickness, 0, 360);
    TGeoRotation r_m3;
    r_m3.SetAngles(0, 0, 0);
    TGeoTranslation t_m3(0, 0, 146);
    TGeoCombiTrans c_m3(t_m3, r_m3);
    TGeoHMatrix* h_m3 = new TGeoHMatrix(c_m3);
    top->AddNode(det_m3_mvd, 1, h_m3);
    det_m3_mvd->SetLineColor(kMagenta+icolor);
    AddSensitiveVolume(det_m3_mvd);


    TGeoVolume* det_m2_mvd = gGeoManager->MakeTubs("Det_m2_mvd", Si, 5, 25, thickness, 0, 360);
    TGeoRotation r_m2;
    r_m2.SetAngles(0, 0, 0);
    TGeoTranslation t_m2(0, 0, 154);
    TGeoCombiTrans c_m2(t_m2, r_m2);
    TGeoHMatrix* h_m2 = new TGeoHMatrix(c_m2);
    top->AddNode(det_m2_mvd, 1, h_m2);
    det_m2_mvd->SetLineColor(kMagenta+icolor);
    AddSensitiveVolume(det_m2_mvd);


    TGeoVolume* det_m1_mvd = gGeoManager->MakeTubs("Det_m1_mvd", Si, 5, 25, thickness, 0, 360);
    TGeoRotation r_m1;
    r_m1.SetAngles(0, 0, 0);
    TGeoTranslation t_m1(0, 0, 162);
    TGeoCombiTrans c_m1(t_m1, r_m1);
    TGeoHMatrix* h_m1 = new TGeoHMatrix(c_m1);
    top->AddNode(det_m1_mvd, 1, h_m1);
    det_m1_mvd->SetLineColor(kMagenta+icolor);
    AddSensitiveVolume(det_m1_mvd);

    TGeoVolume* det_p5_mvd = gGeoManager->MakeTubs("Det_p5_mvd", Si, 5, 25, thickness, 0, 360);
    TGeoRotation r_p5;
    r_p5.SetAngles(0, 0, 0);
    TGeoTranslation t_p5(0, 0, 170);
    TGeoCombiTrans c_p5(t_p5, r_p5);
    TGeoHMatrix* h_p5 = new TGeoHMatrix(c_p5);
    top->AddNode(det_p5_mvd, 1, h_p5);
    det_p5_mvd->SetLineColor(kMagenta+icolor);
    AddSensitiveVolume(det_p5_mvd);

    TGeoVolume* det_p4_mvd = gGeoManager->MakeTubs("Det_p4_mvd", Si, 5, 25, thickness*1.5, 0, 360);
    TGeoRotation r_p4;
    r_p4.SetAngles(0, 0, 0);
    TGeoTranslation t_p4(0, 0, 178);
    TGeoCombiTrans c_p4(t_p4, r_p4);
    TGeoHMatrix* h_p4 = new TGeoHMatrix(c_p4);
    top->AddNode(det_p4_mvd, 1, h_p4);
    det_p4_mvd->SetLineColor(kCyan-8);
    AddSensitiveVolume(det_p4_mvd);



    //
    //
/*

    TGeoMaterial *vacuum=new TGeoMaterial("vacuum",0,0,0);
        TGeoMaterial *Fe=new TGeoMaterial("Fe",55.845,26,7.87);

        TGeoMedium *Air=new TGeoMedium("Vacuum",0,vacuum);
        TGeoMedium *Iron=new TGeoMedium("Iron",1,Fe);

        TGeoVolume* Zdc_endcap = gGeoManager->MakeBox("Zdc_endcap",Air,200,200,100);

        const double R_inner = 0, R_outer = 15, dist_z = 220;  //cm

        double module_short = 2, module_length = 25;  //cm   X2
        double module_long = module_short * (1 + module_length / dist_z);
        double module_shrink = 0.85;
        double theta_bin = 2 * TMath::ATan((module_long-module_short)/2/module_length);

        TGeoVolume *module = gGeoManager->MakeTrd2("module", Iron, module_short/2*module_shrink, module_long/2*module_shrink, module_short/2*module_shrink, module_long/2*module_shrink,  module_length/2*module_shrink);

        module->SetLineColor(kAzure+5);
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
                        //if(radius_module>R_outer || radius_module<R_inner) continue;

			if(module_x > R_outer || module_y > R_outer) continue;

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


	TGeoRotation r0_zdc;
        r0_zdc.SetAngles(0, 0, 0);
        TGeoTranslation t0_zdc(0, 0, dist_z);
        TGeoCombiTrans c0_zdc(t0_zdc, r0_zdc);
        TGeoHMatrix* h0_zdc = new TGeoHMatrix(c0_zdc);
        top->AddNode(segment, 0, h0_zdc);

        TGeoRotation r1_zdc;
        r1_zdc.SetAngles(0, 0, 90);
        TGeoCombiTrans c1_zdc(t0_zdc, r1_zdc);
        TGeoHMatrix* h1_zdc = new TGeoHMatrix(c1_zdc);
        top->AddNode(segment, 1, h1_zdc);


        TGeoRotation r2_zdc;
        r2_zdc.SetAngles(0, 0, 180);
        TGeoCombiTrans c2_zdc(t0_zdc, r2_zdc);
        TGeoHMatrix* h2_zdc = new TGeoHMatrix(c2_zdc);
        top->AddNode(segment, 2, h2_zdc);

        TGeoRotation r3_zdc;
        r3_zdc.SetAngles(0, 0, 270);
        TGeoCombiTrans c3_zdc(t0_zdc, r3_zdc);
        TGeoHMatrix* h3_zdc = new TGeoHMatrix(c3_zdc);
        top->AddNode(segment, 3, h3_zdc);

*/

/*
    TGeoVolume* det_p3_mvd = gGeoManager->MakeTubs("Det_p3_mvd", Si, 3.50, 43.23, thickness/2, 0, 360);
    TGeoRotation r_p3;
    r_p3.SetAngles(0, 0, 0);
    TGeoTranslation t_p3(0, 0, 73);
    TGeoCombiTrans c_p3(t_p3, r_p3);
    TGeoHMatrix* h_p3 = new TGeoHMatrix(c_p3);
    top->AddNode(det_p3_mvd, 1, h_p3);
    det_p3_mvd->SetLineColor(kMagenta+icolor);
    AddSensitiveVolume(det_p3_mvd);


    TGeoVolume* det_p2_mvd = gGeoManager->MakeTubs("Det_p2_mvd", Si, 3.18, 36.26, thickness/2, 0, 360);
    TGeoRotation r_p2;
    r_p2.SetAngles(0, 0, 0);
    TGeoTranslation t_p2(0, 0, 49);
    TGeoCombiTrans c_p2(t_p2, r_p2);
    TGeoHMatrix* h_p2 = new TGeoHMatrix(c_p2);
    top->AddNode(det_p2_mvd, 1, h_p2);
    det_p2_mvd->SetLineColor(kMagenta+icolor);
    AddSensitiveVolume(det_p2_mvd);


    TGeoVolume* det_p1_mvd = gGeoManager->MakeTubs("Det_p1_mvd", Si, 3.18, 18.50, thickness/2, 0, 360);
    TGeoRotation r_p1;
    r_p1.SetAngles(0, 0, 0);
    TGeoTranslation t_p1(0, 0, 25);
    TGeoCombiTrans c_p1(t_p1, r_p1);
    TGeoHMatrix* h_p1 = new TGeoHMatrix(c_p1);
    top->AddNode(det_p1_mvd, 1, h_p1);
    det_p1_mvd->SetLineColor(kMagenta+icolor);
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

*/


}


ChnsMvdPoint* ChnsMvd::AddHit(Int_t trackID,
                                      Int_t detID,
                                      TVector3 pos,
                                      TVector3 mom,
                                      Double_t time,
                                      Double_t length,
                                      Double_t eLoss,
				      Int_t eventID)
{
    TClonesArray& clref = *fChnsMvdPointCollection;
    Int_t size = clref.GetEntriesFast();
    return new (clref[size]) ChnsMvdPoint(trackID, detID, pos, mom, time, length, eLoss, eventID);
}

FairModule* ChnsMvd::CloneModule() const { return new ChnsMvd(*this); }

void ChnsMvd::DefineSensitiveVolumes()
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

Bool_t ChnsMvd::IsSensitive(const std::string& name)
{
    //if (name.find("Det") != std::string::npos) {
    if (name.find("VstCellFlexLayer") != std::string::npos) {
        return kTRUE;
    }
    return kFALSE;
}

ClassImp(ChnsMvd);
