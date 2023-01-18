/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
#include "ChnsZdcGeo.h"

#include "FairGeoNode.h"

ClassImp(ChnsZdcGeo);

// -----   Default constructor   -------------------------------------------
ChnsZdcGeo::ChnsZdcGeo()
    : FairGeoSet()
{
    // Constructor
    // fName has to be the name used in the geometry for all volumes.
    // If there is a mismatch the geometry cannot be build.
    fName = "newdetector";
    strcpy(modName, "ChnsZdc");
    strcpy(eleName, "ChnsZdc");
    maxSectors = 0;
    maxModules = 10;
}

// -------------------------------------------------------------------------

const char* ChnsZdcGeo::getModuleName(Int_t m)
{
    /** Returns the module name of ChnsZdc number m
      Setting ChnsZdc here means that all modules names in the
      ASCII file should start with ChnsZdc otherwise they will
      not be constructed
  */
    sprintf(modName, "ChnsZdc%i", m + 1);
    return modName;
}

const char* ChnsZdcGeo::getEleName(Int_t m)
{
    /** Returns the element name of Det number m */
    sprintf(eleName, "ChnsZdc%i", m + 1);
    return eleName;
}
