#ifndef CHNSANACONTFACT_H
#define CHNSANACONTFACT_H

#include "FairContFact.h"

class FairContainer;
//class FairParIo;

class ChnsAnaContFact : public FairContFact
{
  public:
    ChnsAnaContFact();
    ~ChnsAnaContFact();
    FairParSet* createContainer(FairContainer* c);
  private:
    void setAllContainers();
    ClassDef(ChnsAnaContFact,1); // Factory for all libAnalysis parameter containers
};

#endif  
