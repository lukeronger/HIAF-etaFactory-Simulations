//
//  ChnsAnaPidCombiner.cxx
//  PANDAROOT
//
//  Created by Ralf Kliemt on 12/16/11.
//
//  This class reads the different information from the PID algorithms
//  and combines them according to the users specifications
//
//

#include "ChnsAnaPidCombiner.h"

#include <cmath>
#include "TDatabasePDG.h"

#include "RhoBase/RhoCandidate.h"
#include "RhoBase/RhoCandList.h"

#include "FairRecoCandidate.h"

#include "TClonesArray.h"
#include "TPRegexp.h"

#include "ChnsPidProbability.h"


ClassImp ( ChnsAnaPidCombiner )

ChnsAnaPidCombiner::ChnsAnaPidCombiner ( const char* name, TString tcanames ) :
    TNamed ( name,"Panda PID Combiner" ) ,
    fRootManager ( 0 ),
    fPidArrays(),//FIXME: What should the initializing constructor contain here?
    fPidResult ( 0 ),
    fInitialized ( kFALSE )
{
  if ( tcanames=="" ) {
    SetDefaults();
  } else {
    SetTcaNames ( tcanames );
  }

  fRootManager=FairRootManager::Instance();

  fPidResult = new ChnsPidProbability();
}

void ChnsAnaPidCombiner::Init()
{
  // Initialize the TClonesArray lists
  if ( fInitialized ) {
    return;
  } //if we did initilize, don't do it again.

  for ( std::vector<TString>::iterator iter=fCurrentPidArrays.begin();
        iter!=fCurrentPidArrays.end()&&fCurrentPidArrays.size()>0; iter++ )
    {
    //std::cout<<"Init: Item name is \""<<(*iter).Data()<<"\" with array size "<<fCurrentPidArrays.size()<<std::endl;
    if (!fPidArrays[*iter]){
      TClonesArray * tmpar = ReadTCA((*iter).Data());
      if(tmpar) {
        fPidArrays[*iter]=tmpar;
        fRootManager->ReadBranchEvent((*iter).Data());
      } else {
        fCurrentPidArrays.erase(iter);
      }
    }
  }
  //std::cout<<"PidCombiner initialized."<<std::endl;
  fInitialized=kTRUE;
}

Bool_t ChnsAnaPidCombiner::Apply ( RhoCandList& tcl )
{
  if ( !fInitialized ) {
    Init();
  }

  Bool_t check = kTRUE;
  Bool_t chack = kTRUE;
  for ( int j=0; j<tcl.GetLength(); j++ ) {
    chack = Apply( tcl[j] );
    check = check && chack;
  }

  return check;
}

Bool_t ChnsAnaPidCombiner::Apply ( RhoCandidate* tc )
{
  // Apply the multiplied pdf's to the RhoCandidate
  // If on of the pdf's is not available, it is skipped

  if ( !fInitialized ) {
    Init();
  }

  Bool_t check=kTRUE;

  //TODO: Merge PID info now.
  fPidResult->Reset();
  // combine algorithms
  TClonesArray* aTca=0;
  ChnsPidProbability* aProb=0;
  Int_t trackIndex = tc->GetTrackNumber();
  //std::cout<<"PidCombiner: Try RhoCandidate uid:"<<tc->Uid()<<" trknr:"<<trackIndex<<std::endl;
  //std::cout<<tc<<std::endl;
  fPidResult->SetIndex(trackIndex);
  if ( fCurrentPidArrays.size()==0 || trackIndex<0 ) {
    ApplyFlat ( tc );
    return kFALSE;
  }

  for ( std::vector<TString>::iterator iter=fCurrentPidArrays.begin();
  iter!=fCurrentPidArrays.end(); iter++ ){
    aTca=fPidArrays[*iter];
    //Info ( "Apply","try tca %s at %p",*iter.Data(),aTca );

    if ( 0==aTca ) {
      Error ( "Apply", "PID Probability array not found, skip setting pid for candidate %i.",trackIndex );
      check=kFALSE;
      continue;
    }

    if ( 0==aTca->GetEntriesFast() ) {
      Error ( "Apply", "PID Probability array '%s' at %p of size zero, skip setting pid for candidate %i.", aTca->GetName(), aTca, trackIndex );
      continue;
      check=kFALSE;
    }

    if ( trackIndex>=aTca->GetEntriesFast() ) {
      Error ( "Apply", "Index out of '%s' array (%p) bounds, skip setting pid for candidate %i.",aTca->GetName(),aTca,trackIndex );
      continue;
      check=kFALSE;
    }

    aProb= ( ChnsPidProbability* ) aTca->At ( trackIndex );

    if ( aProb == 0 ) {
      Error ( "Apply", "PID Probability object in array '%s' at %p not found, skip setting pid for candidate %i.",aTca->GetName(),aTca,trackIndex );
      continue;
      check=kFALSE;
    }

    if ( trackIndex!=aProb->GetIndex() ) {
      Error ( "Apply", "PID Probability object index (%i) is not the track index (%i). Is that bad?",aProb->GetIndex(),trackIndex );
      continue;
      check=kFALSE;
    }

    // catch Zeros to avoid NAN from Div/Zero
    if ( aProb->GetSumProb() == 0 ) {
      continue;
    }

    // avoid numerics with low numbers
    //aProb->NormalizeTo(1.);
    //now multiply
    *fPidResult *= *aProb;
  }
  //std::cout<<"ChnsAnaPidCombiner: ";  fPidResult->Print();
  //TODO renormalizing is done in the Pid object upon request ???
  //fPidResult->NormalizeTo(1.);
  //std::cout<<"ChnsAnaPisCombiner: scaled = ";  fPidResult->Print();
  // numbering see ChnsPidListMaker
  // No flux implemented! To come for each Detector!
  tc->SetPidInfo ( 0,fPidResult->GetElectronPidProb() );
  tc->SetPidInfo ( 1,fPidResult->GetMuonPidProb() );
  tc->SetPidInfo ( 2,fPidResult->GetPionPidProb() );
  tc->SetPidInfo ( 3,fPidResult->GetKaonPidProb() );
  tc->SetPidInfo ( 4,fPidResult->GetProtonPidProb() );
  //std::cout<<"ChnsAnaPidCombiner: "<<tc<<std::endl;

  return check;
}

void ChnsAnaPidCombiner::ApplyFlat ( RhoCandidate* tc )
{
  tc->SetPidInfo ( 0,0.2 );
  tc->SetPidInfo ( 1,0.2 );
  tc->SetPidInfo ( 2,0.2 );
  tc->SetPidInfo ( 3,0.2 );
  tc->SetPidInfo ( 4,0.2 );
  return;
}


void ChnsAnaPidCombiner::SetDefaults()
{
  // Set list of names and weights to the default PANDA
  //TString names = "PidAlgoMvd;PidAlgoStt;PidAlgoEmcBayes;PidAlgoDrc;PidAlgoDisc;PidAlgoMdtHardCuts;";
  //TString names = "PidAlgoIdealCharged";
  //TString names = "PidMvaChargedProbability";
  //SetTcaNames ( names );

  fCurrentPidArrays.clear();
  fInitialized=kFALSE;
  return;
}

void ChnsAnaPidCombiner::SetTcaNames ( TString& names )
{
  fCurrentPidArrays.clear();
  // Tokenizer, cool thingy!
  TStringToken list ( names,";" );
  //use TString class part (inherited, Tokenizer stores data there)
  while ( list.NextToken() ) {
    if ((TString) list == "") continue;
    fCurrentPidArrays.push_back ( ( TString ) list );
  }
  fInitialized=kFALSE;
  return;
}

TClonesArray* ChnsAnaPidCombiner::ReadTCA ( const TString& tcaname )
{
  // Fetch a TCLonesArray from the framework by its root name
  if (tcaname == "") {
    Warning ( "ChnsAnaPidCombiner::ReadTCA()","Empty TCA name." );
    return NULL;
  }
  TClonesArray* tca = ( TClonesArray* ) fRootManager->GetObject ( tcaname.Data() );

  if ( ! tca ) {
    Warning ( "ChnsAnaPidCombiner::ReadTCA()","No \"%s\" array found.",tcaname.Data() );
    return NULL;
  }

  return tca;
}
