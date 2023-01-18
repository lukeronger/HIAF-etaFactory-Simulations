
#ifndef NEWDETECTORGEO_H
#define NEWDETECTORGEO_H

#include "FairGeoSet.h"

class ChnsEmcGeo : public FairGeoSet
{

  protected:
    char modName[20];   // name of module
    char eleName[20];   // substring for elements in module
  public:
    ChnsEmcGeo();
    ~ChnsEmcGeo() {}
    const char* getModuleName(Int_t);
    const char* getEleName(Int_t);
    inline Int_t getModNumInMod(const TString&);
    ClassDef(ChnsEmcGeo, 1);
};

inline Int_t ChnsEmcGeo::getModNumInMod(const TString& name)
{
    /** returns the module index from module name
   ?? in name[??] has to be the length of the detector name in the
   .geo file. For example if all nodes in this file starts with
   newdetector ?? has to be 11.
  */
    return (Int_t)(name[11] - '0') - 1;   //
}

#endif
