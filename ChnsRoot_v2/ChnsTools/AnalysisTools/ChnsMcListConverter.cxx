/******************************************************
Converts the MCTracks to a TCA holding RhoCandidates
*******************************************************/

#include "TClonesArray.h"

#include "FairRootManager.h"
#include "FairRunAna.h"
#include "FairRuntimeDb.h"

#include "FairRun.h"
#include "FairRuntimeDb.h"
#include "ChnsMcListConverter.h"
#include <string>
#include <iostream>
#include "ChnsMCTrack.h"

//Root stuff
#include "TClonesArray.h"
#include "TParticle.h"
#include "TDatabasePDG.h"
#include "TParticlePDG.h"

//RHO stuff
#include "RhoBase/RhoCandidate.h"


using std::cout;
using std::endl;


// -----   Default constructor   -------------------------------------------
ChnsMcListConverter::ChnsMcListConverter() :
  FairTask("Panda MCTracks to RhoCandidates Converter")
{
}
// -------------------------------------------------------------------------

// -----   Destructor   ----------------------------------------------------
ChnsMcListConverter::~ChnsMcListConverter()
{
  if(fMcCandidates) { delete fMcCandidates; }
}
// -------------------------------------------------------------------------



// -----   Public method Init   --------------------------------------------
InitStatus ChnsMcListConverter::Init()
{

  //cout << " Inside the Init function****" << endl;

  //FairDetector::Initialize();
  //FairRun* sim = FairRun::Instance();
  //FairRuntimeDb* rtdb=sim->GetRuntimeDb();

  // Get RootManager
  FairRootManager* ioman = FairRootManager::Instance();
  if ( ! ioman ) {
    cout << "-E- ChnsMcListConverter::Init: "
         << "RootManager not instantiated!" << endl;
    return kFATAL;
  }

// Get input array
  fMcTracks = (TClonesArray*) ioman->GetObject("MCTrack");


  if ( !fMcTracks ) {
    cout << "-W- ChnsMcListConverter::Init: "
         << "No MCTracks array!" << endl;
    return kERROR;
  }

  fMcCandidates =new TClonesArray("RhoCandidate");
  ioman->Register("ChnsMcTracks","ChnsMcTracks", fMcCandidates, kTRUE);

  // Create and register output array
  cout << "-I- ChnsMcListConverter: Intialization successfull" << endl;

  return kSUCCESS;

}

void ChnsMcListConverter::SetParContainers()
{

  // Get run and runtime database
  FairRun* run = FairRun::Instance();
  if ( ! run ) { Fatal("SetParContainers", "No analysis run"); }

  //FairRuntimeDb* db = run->GetRuntimeDb();
  //if ( ! db ) Fatal("SetParContainers", "No runtime database");


}

// -------------------------------------------------------------------------

// -----   Public method Exec   --------------------------------------------
void ChnsMcListConverter::Exec(Option_t*)
{

  if(fVerbose) { cout << "-I- Start ChnsMcListConverter. "<<endl; }
  if(fVerbose) { cout <<"-I- ChnsMcListConverter: nMcTracks="<<fMcTracks->GetEntriesFast()<<endl; }

  // Get the Candidates
  for(Int_t i=0; i<fMcTracks->GetEntriesFast(); i++) {
    ChnsMCTrack* part = (ChnsMCTrack*)fMcTracks->At(i);
    if (part->GetMotherID()!=-1) { continue; }

    TLorentzVector p4 = part->Get4Momentum();
    TVector3    stvtx = part->GetStartVertex();

    TParticlePDG* ppdg = TDatabasePDG::Instance()->GetParticle(part->GetPdgCode());

    double charge=0.0;

    if (ppdg) { charge=ppdg->Charge(); }
    else if (fVerbose) { cout <<"-W- ChnsMcListConverter: strange PDG code:"<<part->GetPdgCode()<<endl; }
    if (fabs(charge)>2) { charge/=3.; }

    TClonesArray& ref = *fMcCandidates;
    Int_t size = ref.GetEntriesFast();

    RhoCandidate* pmc=new (ref[size]) RhoCandidate(p4,charge);

    pmc->SetMcTruth(0);// Mc truth has no truth object....
    pmc->SetPos(stvtx);
    pmc->SetType(part->GetPdgCode());//mass is overwirtten internally
    pmc->SetP4(p4);//reset to generator output
  }

  if(fVerbose) { cout <<"-I- ChnsMcListConverter: found primaries="<<fMcCandidates->GetEntriesFast()<<endl; }

}
// -------------------------------------------------------------------------

void ChnsMcListConverter::FinishEvent()
{
  fMcCandidates->Delete();
}

ClassImp(ChnsMcListConverter)
