/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
#include "ChnsTpcGeo.h"

#include "FairGeoNode.h"

ClassImp(ChnsTpcGeo);

// -----   Default constructor   -------------------------------------------
ChnsTpcGeo::ChnsTpcGeo()
    : FairGeoSet()
{
    // Constructor
    // fName has to be the name used in the geometry for all volumes.
    // If there is a mismatch the geometry cannot be build.
    fName = "newdetector";
    strcpy(modName, "ChnsTpc");
    strcpy(eleName, "ChnsTpc");
    maxSectors = 0;
    maxModules = 10;
}

// -------------------------------------------------------------------------

const char* ChnsTpcGeo::getModuleName(Int_t m)
{
    /** Returns the module name of ChnsTpc number m
      Setting ChnsTpc here means that all modules names in the
      ASCII file should start with ChnsTpc otherwise they will
      not be constructed
  */
    sprintf(modName, "ChnsTpc%i", m + 1);
    return modName;
}

const char* ChnsTpcGeo::getEleName(Int_t m)
{
    /** Returns the element name of Det number m */
    sprintf(eleName, "ChnsTpc%i", m + 1);
    return eleName;
}
