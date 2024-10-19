/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
#ifndef CHNSZDCGEOPAR_H
#define CHNSZDCGEOPAR_H

#include "FairParGenericSet.h"

class TObjArray;
class FairParamList;

class ChnsZdcGeoPar : public FairParGenericSet
{
  public:
    /** List of FairGeoNodes for sensitive  volumes */
    TObjArray* fGeoSensNodes;

    /** List of FairGeoNodes for sensitive  volumes */
    TObjArray* fGeoPassNodes;

    ChnsZdcGeoPar(const char* name = "ChnsZdcGeoPar",
                      const char* title = "ChnsZdc Geometry Parameters",
                      const char* context = "TestDefaultContext");
    ~ChnsZdcGeoPar(void);
    void clear(void);
    void putParams(FairParamList*);
    Bool_t getParams(FairParamList*);
    TObjArray* GetGeoSensitiveNodes() { return fGeoSensNodes; }
    TObjArray* GetGeoPassiveNodes() { return fGeoPassNodes; }

  private:
    ChnsZdcGeoPar(const ChnsZdcGeoPar&);
    ChnsZdcGeoPar& operator=(const ChnsZdcGeoPar&);

    ClassDef(ChnsZdcGeoPar, 1);
};

#endif
