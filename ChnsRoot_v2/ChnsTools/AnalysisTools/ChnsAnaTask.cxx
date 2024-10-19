#include "ChnsAnaTask.h"

#include <string>
#include <iostream>

using std::cout;
using std::endl;

//FAIR headers
#include "FairRootManager.h"
#include "FairRunAna.h"
#include "FairRuntimeDb.h"
#include "FairRun.h"

// ROOT headers
#include "TTree.h"
#include "TChain.h"
#include "TClonesArray.h"

// RHO headers
#include "RhoFactory.h"
#include "RhoCandidate.h"
#include "RhoCandList.h"
#include "RhoParticleSelectorBase.h"
#include "FairRecoCandidate.h"

#include "ChnsPidCandidate.h"
#include "ChnsPidProbability.h"
#include "ChnsPidListMaker.h"

ClassImp(ChnsAnaTask);

ChnsAnaTask::ChnsAnaTask() :
  fPidListMaker(0),
  fEventRead(kFALSE)
//fCurrentEventInfo(0)
{
}

ChnsAnaTask::~ChnsAnaTask()
{
  if(0!=fPidListMaker) { delete fPidListMaker; }
}

InitStatus ChnsAnaTask::Init()
{
  return kSUCCESS;
}

void ChnsAnaTask::Exec(Option_t*)
{
}

void ChnsAnaTask::Finish()
{
}


void ChnsAnaTask::InitArrays()
{
  std::cout << "-I- ChnsAnaTask: Initialization" << std::endl;

  FairRootManager* fRootManager = FairRootManager::Instance();

  if ( 0 == fRootManager ) {
    std::cout << "-E- ChnsAnaTask: No FairRootManager found!" << std::endl;
    return;
  }

  //read
  fChargedCands = (TClonesArray*) fRootManager->GetObject("PidChargedCand");
  fNeutralCands = (TClonesArray*) fRootManager->GetObject("PidNeutralCand");
  fChargedProbability = (TClonesArray*) fRootManager->GetObject("PidChargedProbability");
  fNeutralProbability = (TClonesArray*) fRootManager->GetObject("PidNeutralProbability");
  fMcCands = (TClonesArray*) fRootManager->GetObject("ChnsMcTracks");

  fPidListMaker = new ChnsPidListMaker();

}

int ChnsAnaTask::GetEvent()
{
  RhoFactory::Instance()->Reset();

  fLAllCands.Cleanup();
  fLChargedCands.Cleanup();
  fLNeutralCands.Cleanup();
  fLMcCands.Cleanup();

  return 0;
}

bool ChnsAnaTask::FillList(RhoCandList& l, std::string listkey)
{
  // Reads the specified List for the current event

  l.Cleanup();
  UInt_t uid=1;

  // when the first list is requested read in the event
  /*
  if (!fEventRead)
  {
    fRootManager->ReadEvent(fEvtCount-1);
    fEventRead=true;
  }
  */

  if (listkey=="McTruth") {
    if (fMcCands) {
      //cout <<"ChnsAnaTask::FillList: "<<fMcCands->GetEntriesFast()<<" mc cands"<<endl;
      for (int i1=0; i1<fMcCands->GetEntriesFast(); i1++) {
        RhoCandidate* tc = (RhoCandidate*)fMcCands->At(i1);
        l.Add(tc);
      }
      return true;
    } else { return false; }
  }

  // fill all, neutral and charged from the ChnsPidCandidate Array
//  if (fMicroCands && allCands.GetLength()==0)
//  {
//    for (int i1=0; i1<fMicroCands->GetEntriesFast(); i1++)
//    {
//      VAbsMicroCandidate *mic = (VAbsMicroCandidate *)fMicroCands->At(i1);
//      RhoCandidate tc(*mic,i1+1);
//
//      allCands.Add(tc);
//
//      if (fabs(tc.Charge())>0.01)
//        chargedCands.Add(tc);
//      else
//        neutralCands.Add(tc);
//    }
//  }
  //else
  if (fLAllCands.GetLength() == 0) { // do only when we didn't read something yet.
    // removed now compatibility to RhoCandidate readin ... instead read ChnsPidCandidates
    if (fNeutralCands && fLNeutralCands.GetLength()==0)
      for (int i1=0; i1<fNeutralCands->GetEntriesFast(); i1++) {
        FairRecoCandidate* mic = (FairRecoCandidate*)fNeutralCands->At(i1);
        RhoCandidate tc(*mic,uid++);

        // TODO: Do we want to set something here? It is neutrals anyway.
        if(0!=fNeutralProbability && i1<fNeutralProbability->GetEntriesFast()) {
          ChnsPidProbability* neuProb = (ChnsPidProbability*)fNeutralProbability->At(i1);
          // numbering see ChnsPidListMaker
          tc.SetPidInfo(0,neuProb->GetElectronPidProb());
          tc.SetPidInfo(1,neuProb->GetMuonPidProb());
          tc.SetPidInfo(2,neuProb->GetPionPidProb());
          tc.SetPidInfo(3,neuProb->GetKaonPidProb());
          tc.SetPidInfo(4,neuProb->GetProtonPidProb());
        }
        fLNeutralCands.Add(&tc);
        fLAllCands.Add(&tc);
      }

    if (fChargedCands && fLChargedCands.GetLength()==0) {
      for (int i1=0; i1<fChargedCands->GetEntriesFast(); i1++) {
        FairRecoCandidate* mic = (FairRecoCandidate*)fChargedCands->At(i1);
        RhoCandidate tc(*mic,uid++);

        if(0!=fChargedProbability && i1<fChargedProbability->GetEntriesFast()) {
          ChnsPidProbability* chProb = (ChnsPidProbability*)fChargedProbability->At(i1);
          // numbering see ChnsPidListMaker
          tc.SetPidInfo(0,chProb->GetElectronPidProb());
          tc.SetPidInfo(1,chProb->GetMuonPidProb());
          tc.SetPidInfo(2,chProb->GetPionPidProb());
          tc.SetPidInfo(3,chProb->GetKaonPidProb());
          tc.SetPidInfo(4,chProb->GetProtonPidProb());
        }
        fLChargedCands.Add(&tc);
        fLAllCands.Add(&tc);
      }
    }
  }


  // set the base list for the PID list maker
  fPidListMaker->SetBaseList(fLChargedCands);

  if (listkey=="All" ) {
    l=fLAllCands;
    return true;
  }

  if (listkey=="Neutral") {
    l=fLNeutralCands;
    return true;
  }

  if (listkey=="Charged") {
    l=fLChargedCands;
    return true;
  }

  return fPidListMaker->FillList(l,listkey);
}




//const ChnsEventInfo* ChnsAnaTask::GetEventInfo()
//{
//  if (fCurrentEventInfo) return fCurrentEventInfo;
//
//  TClonesArray* aArray = (TClonesArray*) fRootManager->GetObject("ChnsEventSummary");
//  fRootManager->ReadEvent(fEvtCount-1);
//
//  if (aArray){
//    fCurrentEventInfo = (ChnsEventInfo*) aArray->At(0);
//  }
//  return fCurrentEventInfo;
//}
//
//Float_t ChnsAnaTask::GetTag(const char* bname)
//{
//  TChain* theChain = fRootManager->GetInChain();
//  Long64_t localEntry = theChain->LoadTree(fEvtCount-1);
//  theChain = fRootManager->GetInChain();
//  TBranch *b=theChain->GetBranch(bname);
//
//  Float_t val=0;
//  if (b)
//  {
//    Float_t *tmpad=(Float_t*)b->GetAddress();
//    b->GetEntry(localEntry);
//    val=*tmpad;
//  }
//  return val;
//}
//
//Int_t ChnsAnaTask::GetTagI(const char* bname)
//{
//  TChain* theChain = fRootManager->GetInChain();
//  Long64_t localEntry = theChain->LoadTree(fEvtCount-1);
//  TBranch *b=theChain->GetBranch(bname);
//
//  Int_t val=0;
//  if (b)
//  {
//    Int_t *tmpad=(Int_t*)b->GetAddress();
//    b->GetEntry(localEntry);
//    val=*tmpad;
//  }
//  return val;
//}
//

