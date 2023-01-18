/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
#include "ChnsTpcContFact.h"

#include "FairRuntimeDb.h"
#include "ChnsTpcGeoPar.h"

#include <iostream>

ClassImp(ChnsTpcContFact);

static ChnsTpcContFact gChnsTpcContFact;

ChnsTpcContFact::ChnsTpcContFact()
    : FairContFact()
{
    /** Constructor (called when the library is loaded) */
    fName = "ChnsTpcContFact";
    fTitle = "Factory for parameter containers in libChnsTpc";
    setAllContainers();
    FairRuntimeDb::instance()->addContFactory(this);
}

void ChnsTpcContFact::setAllContainers()
{
    /** Creates the Container objects with all accepted
      contexts and adds them to
      the list of containers for the ChnsTpc library.
  */

    FairContainer* p = new FairContainer("ChnsTpcGeoPar", "ChnsTpc Geometry Parameters", "TestDefaultContext");
    p->addContext("TestNonDefaultContext");

    containers->Add(p);
}

FairParSet* ChnsTpcContFact::createContainer(FairContainer* c)
{
    /** Calls the constructor of the corresponding parameter container.
      For an actual context, which is not an empty string and not
      the default context
      of this container, the name is concatinated with the context.
  */
    const char* name = c->GetName();
    FairParSet* p = NULL;
    if (strcmp(name, "ChnsTpcGeoPar") == 0) {
        p = new ChnsTpcGeoPar(c->getConcatName().Data(), c->GetTitle(), c->getContext());
    }
    return p;
}
