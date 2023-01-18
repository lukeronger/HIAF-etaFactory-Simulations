/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
#include "ChnsMvdContFact.h"

#include "FairRuntimeDb.h"
#include "ChnsMvdGeoPar.h"

#include <iostream>

ClassImp(ChnsMvdContFact);

static ChnsMvdContFact gChnsMvdContFact;

ChnsMvdContFact::ChnsMvdContFact()
    : FairContFact()
{
    /** Constructor (called when the library is loaded) */
    fName = "ChnsMvdContFact";
    fTitle = "Factory for parameter containers in libChnsMvd";
    setAllContainers();
    FairRuntimeDb::instance()->addContFactory(this);
}

void ChnsMvdContFact::setAllContainers()
{
    /** Creates the Container objects with all accepted
      contexts and adds them to
      the list of containers for the ChnsMvd library.
  */

    FairContainer* p = new FairContainer("ChnsMvdGeoPar", "ChnsMvd Geometry Parameters", "TestDefaultContext");
    p->addContext("TestNonDefaultContext");

    containers->Add(p);
}

FairParSet* ChnsMvdContFact::createContainer(FairContainer* c)
{
    /** Calls the constructor of the corresponding parameter container.
      For an actual context, which is not an empty string and not
      the default context
      of this container, the name is concatinated with the context.
  */
    const char* name = c->GetName();
    FairParSet* p = NULL;
    if (strcmp(name, "ChnsMvdGeoPar") == 0) {
        p = new ChnsMvdGeoPar(c->getConcatName().Data(), c->GetTitle(), c->getContext());
    }
    return p;
}
