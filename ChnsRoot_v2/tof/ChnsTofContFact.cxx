/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
#include "ChnsTofContFact.h"

#include "FairRuntimeDb.h"
#include "ChnsTofGeoPar.h"

#include <iostream>

ClassImp(ChnsTofContFact);

static ChnsTofContFact gChnsTofContFact;

ChnsTofContFact::ChnsTofContFact()
    : FairContFact()
{
    /** Constructor (called when the library is loaded) */
    fName = "ChnsTofContFact";
    fTitle = "Factory for parameter containers in libChnsTof";
    setAllContainers();
    FairRuntimeDb::instance()->addContFactory(this);
}

void ChnsTofContFact::setAllContainers()
{
    /** Creates the Container objects with all accepted
      contexts and adds them to
      the list of containers for the ChnsTof library.
  */

    FairContainer* p = new FairContainer("ChnsTofGeoPar", "ChnsTof Geometry Parameters", "TestDefaultContext");
    p->addContext("TestNonDefaultContext");

    containers->Add(p);
}

FairParSet* ChnsTofContFact::createContainer(FairContainer* c)
{
    /** Calls the constructor of the corresponding parameter container.
      For an actual context, which is not an empty string and not
      the default context
      of this container, the name is concatinated with the context.
  */
    const char* name = c->GetName();
    FairParSet* p = NULL;
    if (strcmp(name, "ChnsTofGeoPar") == 0) {
        p = new ChnsTofGeoPar(c->getConcatName().Data(), c->GetTitle(), c->getContext());
    }
    return p;
}
