/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
#include "ChnsTofGeo.h"

#include "FairGeoNode.h"

ClassImp(ChnsTofGeo);

// -----   Default constructor   -------------------------------------------
ChnsTofGeo::ChnsTofGeo()
    : FairGeoSet()
{
    // Constructor
    // fName has to be the name used in the geometry for all volumes.
    // If there is a mismatch the geometry cannot be build.
    fName = "newdetector";
    strcpy(modName, "ChnsTof");
    strcpy(eleName, "ChnsTof");
    maxSectors = 0;
    maxModules = 10;
}

// -------------------------------------------------------------------------

const char* ChnsTofGeo::getModuleName(Int_t m)
{
    /** Returns the module name of ChnsTof number m
      Setting ChnsTof here means that all modules names in the
      ASCII file should start with ChnsTof otherwise they will
      not be constructed
  */
    sprintf(modName, "ChnsTof%i", m + 1);
    return modName;
}

const char* ChnsTofGeo::getEleName(Int_t m)
{
    /** Returns the element name of Det number m */
    sprintf(eleName, "ChnsTof%i", m + 1);
    return eleName;
}
