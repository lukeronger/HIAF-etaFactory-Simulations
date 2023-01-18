/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/

// -------------------------------------------------------------------------
// -----                    ChnsCave  file                               -----
// -----                Created 26/03/14  by M. Al-Turany              -----
// -------------------------------------------------------------------------

#ifndef Cave_H
#define Cave_H

#include "FairModule.h"   // for FairModule

#include <Rtypes.h>   // for ChnsCave::Class, ClassDef, etc

class ChnsCave : public FairModule
{
  public:
    ChnsCave(const char* name, const char* Title = "Exp Cave");
    ChnsCave();
    virtual ~ChnsCave();
    virtual void ConstructGeometry();

    virtual FairModule* CloneModule() const;

  private:
    Double_t world[3];

    ChnsCave(const ChnsCave&);
    ChnsCave& operator=(const ChnsCave&);

    ClassDef(ChnsCave, 1);
};

#endif   // Cave_H
