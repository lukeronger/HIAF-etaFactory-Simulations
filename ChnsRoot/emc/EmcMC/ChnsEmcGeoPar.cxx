
#include "ChnsEmcGeoPar.h"

#include "FairParamList.h"

#include <TObjArray.h>
#include <iostream>

ClassImp(ChnsEmcGeoPar);

ChnsEmcGeoPar ::ChnsEmcGeoPar(const char* name, const char* title, const char* context)
    : FairParGenericSet(name, title, context)
    , fGeoSensNodes(new TObjArray())
    , fGeoPassNodes(new TObjArray())
{}

ChnsEmcGeoPar::~ChnsEmcGeoPar(void) {}

void ChnsEmcGeoPar::clear(void)
{
    delete fGeoSensNodes;
    delete fGeoPassNodes;
}

void ChnsEmcGeoPar::putParams(FairParamList* l)
{
    if (!l) {
        return;
    }
    l->addObject("FairGeoNodes Sensitive List", fGeoSensNodes);
    l->addObject("FairGeoNodes Passive List", fGeoPassNodes);
}

Bool_t ChnsEmcGeoPar::getParams(FairParamList* l)
{
    if (!l) {
        return kFALSE;
    }
    if (!l->fillObject("FairGeoNodes Sensitive List", fGeoSensNodes)) {
        return kFALSE;
    }
    if (!l->fillObject("FairGeoNodes Passive List", fGeoPassNodes)) {
        return kFALSE;
    }
    return kTRUE;
}
