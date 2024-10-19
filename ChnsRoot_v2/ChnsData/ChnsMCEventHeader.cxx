/** ChnsMCEventHeader.cxx
 *@author Xionghong He
 **/

#include "ChnsMCEventHeader.h"
#include "FairRootManager.h"
#include <iostream>
using std::cout;
using std::endl;

// -----   Default constructor   ------------------------------------------
ChnsMCEventHeader::ChnsMCEventHeader()
  : FairMCEventHeader(),
  fNPart(0),
  fNColl(0),
	fPhi(0)
{
}
// ------------------------------------------------------------------------


// -----   Constructor with run identifier   ------------------------------
ChnsMCEventHeader::ChnsMCEventHeader(UInt_t runId)
  : FairMCEventHeader(runId),
  fNPart(0),
  fNColl(0),
	fPhi(0)
{
}
// ------------------------------------------------------------------------


// -----   Standard constructor   -----------------------------------------
ChnsMCEventHeader::ChnsMCEventHeader(Int_t iEvent, Double_t x, Double_t y, Double_t z, Double_t t, Double_t b, Int_t nPrim, Int_t nPart, Int_t nColl, Double_t phi)
  : FairMCEventHeader(iEvent, x, y, z, t, b, nPrim),
  fNPart(nPart),
  fNColl(nColl),
	fPhi(phi)
{
}
// ------------------------------------------------------------------------


// -----   Destructor   ---------------------------------------------------
ChnsMCEventHeader::~ChnsMCEventHeader() {}
// ------------------------------------------------------------------------


// -----   Public method Reset   ------------------------------------------
void ChnsMCEventHeader::Reset()
{
	FairMCEventHeader::Reset();
  fNPart = fNColl = 0;
	fPhi = 0;
}
// ------------------------------------------------------------------------


// ---- Register the class as data branch to output -----------------------
void ChnsMCEventHeader::Register() 
{
	cout << "Register ChnsMCEventHeader " << endl;
	FairRootManager::Instance()->Register("MCEventHeader.", "MCEvent", this, kTRUE);
	//FairRootManager::Instance()->Register("MCEventHeader.", "Event", this,kTRUE);
}


ClassImp(ChnsMCEventHeader)
