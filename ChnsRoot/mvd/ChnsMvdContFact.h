/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
#ifndef CHNSMVDCONTFACT_H
#define CHNSMVDCONTFACT_H

#include "FairContFact.h"

class FairContainer;

class ChnsMvdContFact : public FairContFact
{
  private:
    void setAllContainers();

  public:
    ChnsMvdContFact();
    ~ChnsMvdContFact() {}
    FairParSet* createContainer(FairContainer*);
    ClassDef(ChnsMvdContFact, 0);   // Factory for all ChnsMvd parameter containers
};

#endif
