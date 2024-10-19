/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
#ifndef CHNSTPCCONTFACT_H
#define CHNSTPCCONTFACT_H

#include "FairContFact.h"

class FairContainer;

class ChnsTpcContFact : public FairContFact
{
  private:
    void setAllContainers();

  public:
    ChnsTpcContFact();
    ~ChnsTpcContFact() {}
    FairParSet* createContainer(FairContainer*);
    ClassDef(ChnsTpcContFact, 0);   // Factory for all ChnsTpc parameter containers
};

#endif
