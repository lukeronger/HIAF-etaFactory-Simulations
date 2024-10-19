
#include "ChnsEmcContFact.h"

#include "FairRuntimeDb.h"
#include "ChnsEmcGeoPar.h"
#include "ChnsEmcReadPar.h"

#include <iostream>

ClassImp(ChnsEmcContFact)

static ChnsEmcContFact gChnsEmcContFact;

ChnsEmcContFact::ChnsEmcContFact()
    : FairContFact()
{
    /** Constructor (called when the library is loaded) */
    fName = "ChnsEmcContFact";
    fTitle = "Factory for parameter containers in libChnsEmc";
    setAllContainers();
    FairRuntimeDb::instance()->addContFactory(this);
}

void ChnsEmcContFact::setAllContainers()
{
    /** Creates the Container objects with all accepted
      contexts and adds them to
      the list of containers for the ChnsEmc library.
  */

    FairContainer* p = new FairContainer("ChnsEmcGeoPar", "ChnsEmc Geometry Parameters", "TestDefaultContext");
    p->addContext("TestNonDefaultContext");
    containers->Add(p);

    FairContainer* p1= new FairContainer("ChnsEmcReadPar", "Emc Digitalization Parameters", "TestDefaultContext");
    p1->addContext("TestNonDefaultContext");
    containers->Add(p1);
}

FairParSet* ChnsEmcContFact::createContainer(FairContainer* c)
{
    /** Calls the constructor of the corresponding parameter container.
      For an actual context, which is not an empty string and not
      the default context
      of this container, the name is concatinated with the context.
  */
    // output test
    const char* name = c->GetName();
    std::cout<<"name: "<<name<<std::endl;
    FairParSet* p = NULL;
    if (strcmp(name, "ChnsEmcGeoPar") == 0) {
        p = new ChnsEmcGeoPar(c->getConcatName().Data(), c->GetTitle(), c->getContext());
    }
    if (strcmp(name, "ChnsEmcReadPar") == 0) {
        p = new ChnsEmcReadPar(c->getConcatName().Data(), c->GetTitle(), c->getContext());
        std::cout<<"In ConsFact"<<std::endl;
    }
    return p;
}
