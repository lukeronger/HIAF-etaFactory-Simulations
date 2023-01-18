
#include "ChnsEmcGeo.h"

#include "FairGeoNode.h"

ClassImp(ChnsEmcGeo);

// -----   Default constructor   -------------------------------------------
ChnsEmcGeo::ChnsEmcGeo()
    : FairGeoSet()
{
    // Constructor
    // fName has to be the name used in the geometry for all volumes.
    // If there is a mismatch the geometry cannot be build.
    fName = "newdetector";
    strcpy(modName, "ChnsEmc");
    strcpy(eleName, "ChnsEmc");
    maxSectors = 0;
    maxModules = 10;
}

// -------------------------------------------------------------------------

const char* ChnsEmcGeo::getModuleName(Int_t m)
{
    /** Returns the module name of ChnsEmc number m
      Setting ChnsEmc here means that all modules names in the
      ASCII file should start with ChnsEmc otherwise they will
      not be constructed
  */
    sprintf(modName, "ChnsEmc%i", m + 1);
    return modName;
}

const char* ChnsEmcGeo::getEleName(Int_t m)
{
    /** Returns the element name of Det number m */
    sprintf(eleName, "ChnsEmc%i", m + 1);
    return eleName;
}
