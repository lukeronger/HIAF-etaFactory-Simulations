
#ifndef NEWDETECTORCONTFACT_H
#define NEWDETECTORCONTFACT_H

#include "FairContFact.h"

class FairContainer;

class ChnsEmcContFact : public FairContFact
{
  private:
    void setAllContainers();

  public:
    ChnsEmcContFact();
    ~ChnsEmcContFact() {}
    FairParSet* createContainer(FairContainer*);
    ClassDef(ChnsEmcContFact, 0);   // Factory for all ChnsEmc parameter containers
};

#endif
