/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/

// -------------------------------------------------------------------------
// -----                    ChnsPipe file                                -----
// -----                Created by M. Al-Turany  June 2014             -----
// -------------------------------------------------------------------------

#ifndef PIPE_H
#define PIPE_H

#include "FairModule.h"

class ChnsPipe : public FairModule
{
  public:
    ChnsPipe(const char* name, const char* Title = "Chns Pipe");
    ChnsPipe();

    virtual ~ChnsPipe();
    virtual void ConstructGeometry();

    virtual FairModule* CloneModule() const;

  private:
    ChnsPipe(const ChnsPipe&);
    ChnsPipe& operator=(const ChnsPipe&);

    ClassDef(ChnsPipe, 1);   // ChnsPIPE
};

#endif   // PIPE_H
