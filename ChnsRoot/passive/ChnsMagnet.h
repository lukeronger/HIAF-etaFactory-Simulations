/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/

// -------------------------------------------------------------------------
// -----                    ChnsMagnet  file                               -----
// -----                Created 26/03/14  by M. Al-Turany              -----
// -------------------------------------------------------------------------

#ifndef CHNSMAGNET_H
#define CHNSMAGNET_H

#include "FairModule.h"   // for FairModule

#include <Rtypes.h>   // for ChnsMagnet::Class, Bool_t, etc
#include <string>     // for string

class ChnsMagnet : public FairModule
{
  public:
    ChnsMagnet(const char* name, const char* Title = "MY Magnet");
    ChnsMagnet();
    virtual ~ChnsMagnet();
    void ConstructGeometry();

    void ConstructAsciiGeometry();
    virtual FairModule* CloneModule() const;

  private:
    ChnsMagnet(const ChnsMagnet&);
    ChnsMagnet& operator=(const ChnsMagnet&);

    ClassDef(ChnsMagnet, 1);
};

#endif   // MAGNET_H
