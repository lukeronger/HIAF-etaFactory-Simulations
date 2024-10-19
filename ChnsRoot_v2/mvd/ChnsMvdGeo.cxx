/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
#include "ChnsMvdGeo.h"

#include "FairGeoNode.h"

ClassImp(ChnsMvdGeo);

// -----   Default constructor   -------------------------------------------
ChnsMvdGeo::ChnsMvdGeo()
    : FairGeoSet()
{
    // Constructor
    // fName has to be the name used in the geometry for all volumes.
    // If there is a mismatch the geometry cannot be build.
    fName = "newdetector";
    strcpy(modName, "ChnsMvd");
    strcpy(eleName, "ChnsMvd");
    maxSectors = 0;
    maxModules = 10;
}

// -------------------------------------------------------------------------

const char* ChnsMvdGeo::getModuleName(Int_t m)
{
    /** Returns the module name of ChnsMvd number m
      Setting ChnsMvd here means that all modules names in the
      ASCII file should start with ChnsMvd otherwise they will
      not be constructed
  */
    sprintf(modName, "ChnsMvd%i", m + 1);
    return modName;
}

const char* ChnsMvdGeo::getEleName(Int_t m)
{
    /** Returns the element name of Det number m */
    sprintf(eleName, "ChnsMvd%i", m + 1);
    return eleName;
}
