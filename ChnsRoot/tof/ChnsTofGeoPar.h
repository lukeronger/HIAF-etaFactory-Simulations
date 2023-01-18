/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
#ifndef CHNSTOFGEOPAR_H
#define CHNSTOFGEOPAR_H

#include "FairParGenericSet.h"

class TObjArray;
class FairParamList;

class ChnsTofGeoPar : public FairParGenericSet
{
  public:
    /** List of FairGeoNodes for sensitive  volumes */
    TObjArray* fGeoSensNodes;

    /** List of FairGeoNodes for sensitive  volumes */
    TObjArray* fGeoPassNodes;

    ChnsTofGeoPar(const char* name = "ChnsTofGeoPar",
                      const char* title = "ChnsTof Geometry Parameters",
                      const char* context = "TestDefaultContext");
    ~ChnsTofGeoPar(void);
    void clear(void);
    void putParams(FairParamList*);
    Bool_t getParams(FairParamList*);
    TObjArray* GetGeoSensitiveNodes() { return fGeoSensNodes; }
    TObjArray* GetGeoPassiveNodes() { return fGeoPassNodes; }

  private:
    ChnsTofGeoPar(const ChnsTofGeoPar&);
    ChnsTofGeoPar& operator=(const ChnsTofGeoPar&);

    ClassDef(ChnsTofGeoPar, 1);
};

#endif
