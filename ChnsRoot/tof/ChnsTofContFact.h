/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
#ifndef CHNSTOFCONTFACT_H
#define CHNSTOFCONTFACT_H

#include "FairContFact.h"

class FairContainer;

class ChnsTofContFact : public FairContFact
{
  private:
    void setAllContainers();

  public:
    ChnsTofContFact();
    ~ChnsTofContFact() {}
    FairParSet* createContainer(FairContainer*);
    ClassDef(ChnsTofContFact, 0);   // Factory for all ChnsTof parameter containers
};

#endif
