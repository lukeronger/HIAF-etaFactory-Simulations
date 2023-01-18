
/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/

// -------------------------------------------------------------------------
// -----                    ChnsCave  file                               -----
// -----                Created 26/03/14  by M. Al-Turany              -----
// -------------------------------------------------------------------------
#include "ChnsCave.h"

#include "FairGeoInterface.h"   // for FairGeoInterface
#include "FairGeoLoader.h"      // for FairGeoLoader
#include "FairGeoNode.h"        // for FairGeoNode
#include "FairGeoVolume.h"      // for FairGeoVolume
#include "FairRun.h"            // for FairRun
#include "FairRuntimeDb.h"      // for FairRuntimeDb
#include "ChnsGeoCave.h"          // for ChnsGeoCave

#include <TList.h>       // for TListIter, TList (ptr only)
#include <TObjArray.h>   // for TObjArray
#include <TString.h>     // for TString
#include <stddef.h>      // for NULL

#include "FairGeoMedia.h"
#include "FairGeoRootBuilder.h"

ClassImp(ChnsCave);

void ChnsCave::ConstructGeometry()
{
    FairGeoLoader* loader = FairGeoLoader::Instance();
    FairGeoInterface* GeoInterface = loader->getGeoInterface();

    static FairGeoMedia *media= GeoInterface->getMedia();    //create medium  yutie 0401
    static FairGeoBuilder *geoBuild= loader->getGeoBuilder();

    FairGeoMedium *medium_carbon = media->getMedium("carbon");
    geoBuild->createMedium(medium_carbon);

    FairGeoMedium *medium_FscScint = media->getMedium("FscScint");
    geoBuild->createMedium(medium_FscScint);

    FairGeoMedium *medium_beryllium = media->getMedium("beryllium");
    geoBuild->createMedium(medium_beryllium);

    FairGeoMedium *medium_steel = media->getMedium("steel");
    geoBuild->createMedium(medium_steel);

    FairGeoMedium *medium_lead = media->getMedium("lead");
    geoBuild->createMedium(medium_lead);

    FairGeoMedium *medium_CsI = media->getMedium("CsI");
    geoBuild->createMedium(medium_CsI);



    ChnsGeoCave* MGeo = new ChnsGeoCave();
    MGeo->setGeomFile(GetGeometryFileName());
    GeoInterface->addGeoModule(MGeo);
    Bool_t rc = GeoInterface->readSet(MGeo);
    if (rc) {
        MGeo->create(loader->getGeoBuilder());
    }
}
ChnsCave::ChnsCave()
    : FairModule()
{}

ChnsCave::~ChnsCave() {}
ChnsCave::ChnsCave(const char* name, const char* Title)
    : FairModule(name, Title)
{
    world[0] = 0;
    world[1] = 0;
    world[2] = 0;
}

ChnsCave::ChnsCave(const ChnsCave& right)
    : FairModule(right)
{
    world[0] = right.world[0];
    world[1] = right.world[1];
    world[2] = right.world[2];
}

FairModule* ChnsCave::CloneModule() const { return new ChnsCave(*this); }
