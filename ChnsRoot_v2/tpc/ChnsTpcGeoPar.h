/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
#ifndef CHNSTPCGEOPAR_H
#define CHNSTPCGEOPAR_H

#include "FairParGenericSet.h"

class TObjArray;
class FairParamList;

class ChnsTpcGeoPar : public FairParGenericSet
{
  public:
    /** List of FairGeoNodes for sensitive  volumes */
    TObjArray* fGeoSensNodes;

    /** List of FairGeoNodes for sensitive  volumes */
    TObjArray* fGeoPassNodes;

    ChnsTpcGeoPar(const char* name = "ChnsTpcGeoPar",
                      const char* title = "ChnsTpc Geometry Parameters",
                      const char* context = "TestDefaultContext");
    ~ChnsTpcGeoPar(void);
    void clear(void);
    void putParams(FairParamList*);
    Bool_t getParams(FairParamList*);
    TObjArray* GetGeoSensitiveNodes() { return fGeoSensNodes; }
    TObjArray* GetGeoPassiveNodes() { return fGeoPassNodes; }

  private:
    ChnsTpcGeoPar(const ChnsTpcGeoPar&);
    ChnsTpcGeoPar& operator=(const ChnsTpcGeoPar&);

    ClassDef(ChnsTpcGeoPar, 1);
};

#endif
