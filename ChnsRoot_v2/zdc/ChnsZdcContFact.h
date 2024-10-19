/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
#ifndef CHNSZDCCONTFACT_H
#define CHNSZDCCONTFACT_H

#include "FairContFact.h"

class FairContainer;

class ChnsZdcContFact : public FairContFact
{
  private:
    void setAllContainers();

  public:
    ChnsZdcContFact();
    ~ChnsZdcContFact() {}
    FairParSet* createContainer(FairContainer*);
    ClassDef(ChnsZdcContFact, 0);   // Factory for all ChnsZdc parameter containers
};

#endif
