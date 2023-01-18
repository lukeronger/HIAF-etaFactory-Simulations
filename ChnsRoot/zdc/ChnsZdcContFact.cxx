/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
#include "ChnsZdcContFact.h"

#include "FairRuntimeDb.h"
#include "ChnsZdcGeoPar.h"

#include <iostream>

ClassImp(ChnsZdcContFact);

static ChnsZdcContFact gChnsZdcContFact;

ChnsZdcContFact::ChnsZdcContFact()
    : FairContFact()
{
    /** Constructor (called when the library is loaded) */
    fName = "ChnsZdcContFact";
    fTitle = "Factory for parameter containers in libChnsZdc";
    setAllContainers();
    FairRuntimeDb::instance()->addContFactory(this);
}

void ChnsZdcContFact::setAllContainers()
{
    /** Creates the Container objects with all accepted
      contexts and adds them to
      the list of containers for the ChnsZdc library.
  */

    FairContainer* p = new FairContainer("ChnsZdcGeoPar", "ChnsZdc Geometry Parameters", "TestDefaultContext");
    p->addContext("TestNonDefaultContext");

    containers->Add(p);
}

FairParSet* ChnsZdcContFact::createContainer(FairContainer* c)
{
    /** Calls the constructor of the corresponding parameter container.
      For an actual context, which is not an empty string and not
      the default context
      of this container, the name is concatinated with the context.
  */
    const char* name = c->GetName();
    FairParSet* p = NULL;
    if (strcmp(name, "ChnsZdcGeoPar") == 0) {
        p = new ChnsZdcGeoPar(c->getConcatName().Data(), c->GetTitle(), c->getContext());
    }
    return p;
}
