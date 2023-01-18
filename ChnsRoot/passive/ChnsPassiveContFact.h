/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/

// -------------------------------------------------------------------------
// -----                    ChnsPassiveContFact  file                    -----
// -----                Created 26/03/14  by M. Al-Turany              -----
// -------------------------------------------------------------------------

#ifndef Chns_PASSIVECONTFACT_H
#define Chns_PASSIVECONTFACT_H

#include "FairContFact.h"   // for FairContFact, etc

#include <Rtypes.h>   // for ChnsPassiveContFact::Class, etc

class FairParSet;

class ChnsPassiveContFact : public FairContFact
{
  private:
    void setAllContainers();

  public:
    ChnsPassiveContFact();
    ~ChnsPassiveContFact() {}
    FairParSet* createContainer(FairContainer*);
    ClassDef(ChnsPassiveContFact, 0);   // Factory for all Passive parameter containers
};

#endif /* !Chns_PASSIVECONTFACT_H */
