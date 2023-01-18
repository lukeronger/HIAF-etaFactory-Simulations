
#ifndef NEWDETECTORGEOPAR_H
#define NEWDETECTORGEOPAR_H

#include "FairParGenericSet.h"

class TObjArray;
class FairParamList;

class ChnsEmcGeoPar : public FairParGenericSet
{
  public:
    /** List of FairGeoNodes for sensitive  volumes */
    TObjArray* fGeoSensNodes;

    /** List of FairGeoNodes for sensitive  volumes */
    TObjArray* fGeoPassNodes;

    ChnsEmcGeoPar(const char* name = "ChnsEmcGeoPar",
                      const char* title = "ChnsEmc Geometry Parameters",
                      const char* context = "TestDefaultContext");
    ~ChnsEmcGeoPar(void);
    void clear(void);
    void putParams(FairParamList*);
    Bool_t getParams(FairParamList*);
    TObjArray* GetGeoSensitiveNodes() { return fGeoSensNodes; }
    TObjArray* GetGeoPassiveNodes() { return fGeoPassNodes; }

  private:
    ChnsEmcGeoPar(const ChnsEmcGeoPar&);
    ChnsEmcGeoPar& operator=(const ChnsEmcGeoPar&);

    ClassDef(ChnsEmcGeoPar, 1);
};

#endif
