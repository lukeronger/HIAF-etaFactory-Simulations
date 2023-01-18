/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
#ifndef CHNSMVDGEOPAR_H
#define CHNSMVDGEOPAR_H

#include "FairParGenericSet.h"

class TObjArray;
class FairParamList;

class ChnsMvdGeoPar : public FairParGenericSet
{
  public:
    /** List of FairGeoNodes for sensitive  volumes */
    TObjArray* fGeoSensNodes;

    /** List of FairGeoNodes for sensitive  volumes */
    TObjArray* fGeoPassNodes;

    ChnsMvdGeoPar(const char* name = "ChnsMvdGeoPar",
                      const char* title = "ChnsMvd Geometry Parameters",
                      const char* context = "TestDefaultContext");
    ~ChnsMvdGeoPar(void);
    void clear(void);
    void putParams(FairParamList*);
    Bool_t getParams(FairParamList*);
    TObjArray* GetGeoSensitiveNodes() { return fGeoSensNodes; }
    TObjArray* GetGeoPassiveNodes() { return fGeoPassNodes; }

  private:
    ChnsMvdGeoPar(const ChnsMvdGeoPar&);
    ChnsMvdGeoPar& operator=(const ChnsMvdGeoPar&);

    ClassDef(ChnsMvdGeoPar, 1);
};

#endif
