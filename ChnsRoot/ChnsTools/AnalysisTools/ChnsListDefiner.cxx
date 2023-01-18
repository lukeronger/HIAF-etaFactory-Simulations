#include <iostream>
#include <string>
#include "ChnsListDefiner.h"

#include "TH1F.h"
#include "RhoBase/RhoParticleSelectorBase.h"

using std::cout;
using std::endl;

ChnsListDefiner::ChnsListDefiner() :
  fName(""),
  fPdgCode(0),
  fCharge(0.0),
  fAntiIdx(-1),
  fIsAntiList(false),
  fIsUsed(false),
  fIsFilled(false),
  fIsGeneric(false),
  fIsMerged(false),
  fDumpList(false)
{
  fList.Cleanup();
  fSelector.clear();
  fHisto.clear();
}

ChnsListDefiner::ChnsListDefiner(std::string name) :
  fName(name),
  fPdgCode(0),
  fCharge(0.0),
  fAntiIdx(-1),
  fIsAntiList(false),
  fIsUsed(false),
  fIsFilled(false),
  fIsGeneric(false),
  fIsMerged(false),
  fDumpList(false)
{
  fList.Cleanup();
  fSelector.clear();
  fHisto.clear();
}

ChnsListDefiner::~ChnsListDefiner()
{
  unsigned int i=0;

  for (i=0; i<fHisto.size(); i++) { delete fHisto[i]; }
  for (i=0; i<fSelector.size(); i++) { delete fSelector[i]; }
}


void ChnsListDefiner::Print()
{
  cout << fName << " (" << fPdgCode << ", " << fCharge << ") : ";
  cout << GetNDau() << " ( ";
  for (int i=0; i<GetNDau(); i++) { cout <<fDauIdx[i]<<" "; }
  cout << ") ";
  cout << " CC " << fAntiIdx << " (";
  cout << (fIsAntiList ? "A" : "L") << "/";
  cout << (fIsUsed ? "U" : "-") << "/";
  cout << (fIsFilled ? "F" : "-") << ") #Sel="<<GetNSels()<<" - " << GetLength() << endl;
}
int ChnsListDefiner::GetLength()
{
  return fList.GetLength();
}

int  ChnsListDefiner::GetNDau()
{
  return fDauIdx.size();
}

int  ChnsListDefiner::GetNSels()
{
  return fSelector.size();
}

int  ChnsListDefiner::GetNHistos()
{
  return fHisto.size();
}

