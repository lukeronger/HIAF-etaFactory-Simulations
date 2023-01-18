/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/

// -------------------------------------------------------------------------
// -----                    ChnsMagnet  file                               -----
// -----                Created 26/03/14  by M. Al-Turany              -----
// -------------------------------------------------------------------------

#include "ChnsMagnet.h"

#include "FairRun.h"         // for FairRun
#include "FairRuntimeDb.h"   // for FairRuntimeDb

#include <TGeoBBox.h>
#include <TGeoCompositeShape.h>
#include <TGeoElement.h>
#include <TGeoManager.h>
#include <TGeoMaterial.h>
#include <TGeoMedium.h>
#include <TGeoTube.h>
#include <TList.h>       // for TListIter, TList (ptr only)
#include <TObjArray.h>   // for TObjArray
#include <TString.h>     // for TString
#include <iosfwd>        // for ostream
#include <iostream>      // for operator<<, basic_ostream, etc
#include <stddef.h>      // for NULL

ChnsMagnet::~ChnsMagnet() {}
ChnsMagnet::ChnsMagnet()
    : FairModule("ChnsMagnet", "")
{}

ChnsMagnet::ChnsMagnet(const char *name, const char *Title)
    : FairModule(name, Title)
{}

ChnsMagnet::ChnsMagnet(const ChnsMagnet &right)
    : FairModule(right)
{}

void ChnsMagnet::ConstructGeometry()    //use panda solenoid, new added at 2021-03-23
{
  TString fileName=GetGeometryFileName();
  if(fileName.EndsWith(".root")) {
      ConstructRootGeometry();
  } else {
      ConstructAsciiGeometry();
  }
}

void ChnsMagnet::ConstructAsciiGeometry(){


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


        TGeoVolume* magnet = gGeoManager->MakeTubs("magnet", Lead, 54, 68, 120, 0, 360);
        TGeoRotation r0;
        r0.SetAngles(0, 0, 0);
        TGeoTranslation t0(0, 0, 60);
        TGeoCombiTrans c0(t0, r0);
        TGeoHMatrix* h0 = new TGeoHMatrix(c0);
        top->AddNode(magnet, 1, h0);
        magnet->SetLineColor(kYellow-5);



}

/*
void ChnsMagnet::ConstructGeometry()    //comment out at 2021-03-23
{

    TGeoVolume *top = gGeoManager->GetTopVolume();

    // define some materials
    TGeoMaterial *matFe = new TGeoMaterial("Fe", 55.84, 26, 7.9);

    // define some media
    TGeoMedium *Fe = new TGeoMedium("Fe", 5, matFe);

    // magnet yoke
    TGeoBBox *magyoke1 = new TGeoBBox("magyoke1", 350, 350, 125);
    TGeoBBox *magyoke2 = new TGeoBBox("magyoke2", 250, 250, 126);

    TGeoCompositeShape *magyokec = new TGeoCompositeShape("magyokec", "magyoke1-magyoke2");
    TGeoVolume *magyoke = new TGeoVolume("magyoke", magyokec, Fe);
    magyoke->SetLineColor(kBlue);
    // magyoke->SetTransparency(50);
    top->AddNode(magyoke, 1, new TGeoTranslation(0, 0, 0));

    // magnet
    TGeoTubeSeg *magnet1a = new TGeoTubeSeg("magnet1a", 250, 300, 35, 45, 135);
    TGeoTubeSeg *magnet1b = new TGeoTubeSeg("magnet1b", 250, 300, 35, 45, 135);
    TGeoTubeSeg *magnet1c = new TGeoTubeSeg("magnet1c", 250, 270, 125, 45, 60);
    TGeoTubeSeg *magnet1d = new TGeoTubeSeg("magnet1d", 250, 270, 125, 120, 135);

    // magnet composite shape matrices
    TGeoTranslation *m1 = new TGeoTranslation(0, 0, 160);
    m1->SetName("m1");
    m1->RegisterYourself();
    TGeoTranslation *m2 = new TGeoTranslation(0, 0, -160);
    m2->SetName("m2");
    m2->RegisterYourself();

    TGeoCompositeShape *magcomp1 = new TGeoCompositeShape("magcomp1", "magnet1a:m1+magnet1b:m2+magnet1c+magnet1d");
    TGeoVolume *magnet1 = new TGeoVolume("magnet1", magcomp1, Fe);
    magnet1->SetLineColor(kYellow);
    top->AddNode(magnet1, 1, new TGeoTranslation(0, 0, 0));

    TGeoRotation m3;
    m3.SetAngles(180, 0, 0);
    TGeoTranslation m4(0, 0, 0);
    TGeoCombiTrans m5(m4, m3);
    TGeoHMatrix *m6 = new TGeoHMatrix(m5);
    top->AddNode(magnet1, 2, m6);
}
*/
FairModule *ChnsMagnet::CloneModule() const { return new ChnsMagnet(*this); }

ClassImp(ChnsMagnet);
