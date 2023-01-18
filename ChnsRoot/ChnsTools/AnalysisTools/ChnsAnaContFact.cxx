/////////////////////////////////////////////////////////////
//
//  ChnsAnaContFact
//
//  Factory for the parameter containers in libAnalysisTools
//
/////////////////////////////////////////////////////////////

//using namespace std;
#include "ChnsAnaContFact.h"
#include "ChnsAnaSelectorPar.h"
#include "FairRuntimeDb.h"
#include "FairParRootFileIo.h"
#include "FairParAsciiFileIo.h"
#include "TList.h"
#include "TObjString.h"
#include <iostream>
#include <iomanip>

ClassImp(ChnsAnaContFact);

static ChnsAnaContFact gChnsAnaContFact;

ChnsAnaContFact::ChnsAnaContFact()
{
  // Constructor (called when the library is loaded)
  fName="ChnsAnaContFact";
  fTitle="Factory for parameter containers in analysis tools";
  setAllContainers();
  FairRuntimeDb::instance()->addContFactory(this);
}
ChnsAnaContFact::~ChnsAnaContFact()
{
}


void ChnsAnaContFact::setAllContainers()
{
  /** Creates the Container objects with all accepted contexts and adds them to
   *  the list of containers for the analysis pid selction criteria library.*/

//  FairContainer* p= new FairContainer("ANAPidSelectionFlux","Flux weights", "TestDefaultContext");
//  p->addContext("TestNonDefaultContext");
//  fSelectParNames->Add(new TObjString(p->GetName()));
//  containers->Add(p);

  FairContainer* p2 = new FairContainer("ANAPidSelections","PID selctrion criteria parameters", "TestDefaultContext");
  p2->addContext("TestNonDefaultContext");
  containers->Add(p2);

}

FairParSet* ChnsAnaContFact::createContainer(FairContainer* c)
{
  /** Calls the constructor of the corresponding parameter container.
   * For an actual context, which is not an empty string and not the default context
   * of this container, the name is concatinated with the context. */
  const char* name=c->GetName();
  FairParSet* p=NULL;

//  if (strcmp(name,"ANAPidSelectionFlux")==0) {
//  p=new ChnsAnaSelectorPar(c->getConcatName().Data(),c->GetTitle(),c->getContext());
//  }

  if (strcmp(name,"ANAPidSelections")==0) {
    p=new ChnsAnaSelectorPar(c->getConcatName().Data(),c->GetTitle(),c->getContext());
  }


  return p;
}
