//
//  ChnsAnaPidSelector.cxx
//  PANDAROOT
//
//  Created by Ralf Kliemt on 12/16/11.
//
//  This class does charged PID selection on RhoCandList objects.
//  The cut parameters are taken from the RTDB
//
//
//

#include <math.h>
#include "TDatabasePDG.h"

#include "ChnsAnaPidSelector.h"

#include "RhoBase/RhoCandidate.h"
#include "FairRecoCandidate.h"

#include "FairRun.h"
#include "FairRuntimeDb.h"

#include "ChnsAnaContFact.h"
#include "ChnsAnaSelectorPar.h"
//#include "ChnsAnaFluxPar.h"

#include "TString.h"
#include "TList.h"


ClassImp ( ChnsAnaPidSelector )

TBuffer& operator>> ( TBuffer& buf,ChnsAnaPidSelector  *&obj )
{
  obj = ( ChnsAnaPidSelector* ) buf.ReadObject ( ChnsAnaPidSelector::Class() );
  return buf;
}

ChnsAnaPidSelector::ChnsAnaPidSelector ( const char* name, const char* type, const char*  ) : // paramid //[R.K.03/2017] unused variable(s)
    RhoParticleSelectorBase ( name,type ) ,
    fChargeCrit ( 0.0 ),
    fPidSelect ( 99 )   // some silly default number here

{
  // reading parameters from RTDB
  FairRun* ana = FairRun::Instance();
  FairRuntimeDb* rtdb=ana->GetRuntimeDb();
  fSelectPar = ( ChnsAnaSelectorPar* ) ( rtdb->getContainer ( "ANAPidSelections" ) );

  if ( ! fSelectPar ) {
    Fatal ( "ChnsAnaPidSelector","No ANAPidSelections* parameter found: %s","ANAPidSelections" );
  }

  //      ChnsAnaFluxPar* fFluxPar = (ChnsAnaFluxPar*)(rtdb->getContainer("ANAPidSelectionFlux"));
  //      if ( ! fFluxPar ) Fatal("SetParContainers","No ANAPidFlux parameter found: %s",parsetname.Data());
  //    }

  // Caution: The Parameter Set is not filled from the DB IO, yet.
  Int_t runID = ana->GetRunId();

  // actually fill the containers.
  //We might want to do that at another point, because multiple
  //instnces will multiply call the RTDB init. That's bad in a loop!
  rtdb->initContainers ( runID );
}

Bool_t ChnsAnaPidSelector::SetSelection ( TString& crit )
{
  //Default setting for criterion
  RhoParticleSelectorBase::SetCriterion ( all );
  TString critcopy(crit);

  // parse criterion string to criteria flags...

  if ( crit.Contains ( "VeryLoose" ) ) {
    RhoParticleSelectorBase::SetCriterion ( veryLoose );
    critcopy.ReplaceAll("VeryLoose","");
  } else if ( crit.Contains ( "Loose" ) ) {
    RhoParticleSelectorBase::SetCriterion ( loose );
    critcopy.ReplaceAll("Loose","");
  } else if ( crit.Contains ( "VeryTight" ) ) {
    RhoParticleSelectorBase::SetCriterion ( veryTight );
    critcopy.ReplaceAll("VeryTight","");
  } else if ( crit.Contains ( "Tight" ) ) {
    RhoParticleSelectorBase::SetCriterion ( tight );
    critcopy.ReplaceAll("Tight","");
  } else if ( crit.Contains ( "Variable" ) ) {
    RhoParticleSelectorBase::SetCriterion ( variable );
    critcopy.ReplaceAll("Variable","");
  } else if ( crit.Contains ( "Best" ) ) {
    RhoParticleSelectorBase::SetCriterion ( best );
    critcopy.ReplaceAll("Best","");
  } else if ( crit.Contains ( "All" ) ) {
    RhoParticleSelectorBase::SetCriterion ( all );
    critcopy.ReplaceAll("All","");
  } // well, that's default anyway

  //TODO: make a 2d array of the criterion numbers for faster access

  fTypePlus=0;

  fTypeMinus=0;

  // Name convention for TDatabsePDG found at $ROOTSYS/etc/pdg_table.txt
  fPidSelect=99;// some silly number here

  if ( crit.Contains ( "Proton" ) ) {
    fTypePlus=TDatabasePDG::Instance()->GetParticle ( "p+" );
    if ( 0==fTypePlus ) {
      fTypePlus=TDatabasePDG::Instance()->GetParticle ( "proton" );
    }
    if ( 0==fTypePlus ) {
      fTypePlus=TDatabasePDG::Instance()->GetParticle (2212);
    }
    fPidSelect=4;
    critcopy.ReplaceAll("Proton","");
  } else if ( crit.Contains ( "Kaon" ) ) {
    fTypePlus=TDatabasePDG::Instance()->GetParticle ( "K+" );
    if ( 0==fTypePlus ) {
      fTypePlus=TDatabasePDG::Instance()->GetParticle (321);
    }
    fPidSelect=3;
    critcopy.ReplaceAll("Kaon","");
  } else if ( crit.Contains ( "Pion" ) ) {
    fTypePlus=TDatabasePDG::Instance()->GetParticle ( "pi+" );
    if ( 0==fTypePlus ) {
      fTypePlus=TDatabasePDG::Instance()->GetParticle (211);
    }
    fPidSelect=2;
    critcopy.ReplaceAll("Pion","");
  } else if ( crit.Contains ( "Muon" ) ) {
    fTypePlus=TDatabasePDG::Instance()->GetParticle ( "mu+" );
    if ( 0==fTypePlus ) {
      fTypePlus=TDatabasePDG::Instance()->GetParticle (-13);
    }
    fPidSelect=1;
    critcopy.ReplaceAll("Muon","");
  } else if ( crit.Contains ( "Electron" ) ) {
    fTypePlus=TDatabasePDG::Instance()->GetParticle ( "e+" );
    if ( 0==fTypePlus ) {
      fTypePlus=TDatabasePDG::Instance()->GetParticle (-11);
    }
    fPidSelect=0;
    critcopy.ReplaceAll("Electron","");
  }

//std::cout<<"ChnsAnaPidSelector: fPidSelect="<<fPidSelect<<std::endl;

  if ( fTypePlus!=0 ) {
    fTypeMinus = CPConjugate ( fTypePlus );
  }

  if ( crit.Contains ( "Plus" ) ) {
    fChargeCrit=1.;
    critcopy.ReplaceAll("Plus","");
  } else if ( crit.Contains ( "Minus" ) ) {
    fChargeCrit=-1.;
    critcopy.ReplaceAll("Minus","");
  } else {
    fChargeCrit=0;
  }

  if(critcopy.Length()>0){
    std::cout<<"Analysis PID selection criteria setting failed. "<<std::endl;
    std::cout<<"Selection String: \""<<crit.Data()<<"\""<<std::endl;
    std::cout<<"Invalid piece:    \""<<critcopy.Data()<<"\""<<std::endl;
    std::cout<<"Viable optios are:"<<std::endl;
    std::cout<<"\tProton,Kaon,Pion,Muon,Electron"<<std::endl;
    std::cout<<"\tVeryLoose,Loose,Tight,VeryTight,Variable,Best,All"<<std::endl;
    std::cout<<"\tPlus,Minus,Charged,Neutral,(All)"<<std::endl;
    Error("SetSelection()","Invalid selection string.");
    return kFALSE;
  }

  return kTRUE;
}


Bool_t ChnsAnaPidSelector::Accept ( RhoCandidate* b )
{
  // Accept or reject one candidate based on it's PID hypothesis, the pid
  // pdf values and the selection criterion.
  // This might be not performant, since each time we access an object to
  // read the criterion value. Is a field of values faster?

  if ( b == 0 ) {
    Error ( "ChnsAnaPidSelector::Accept","Candiate missing." ); return kFALSE;
  }
  //Info("ChnsAnaPidSelector::Accept","Request: Q=%g pid=%i crit=%i",fChargeCrit,fPidSelect,fCriterion);
  // too stringent on charge with +-1. ??
  if ( fChargeCrit!=0 && fChargeCrit!=b->GetCharge() ) {
    //std::cout<<"ChnsAnaPidSelector::Accept: charge reject. fChargeCrit="<<fChargeCrit<<" b.GetCharge()"<<b.GetCharge() <<std::endl;
    return kFALSE;
  }

  if ( fPidSelect==99 ) {
    return kTRUE;
  } // no PID requested? Fine!

  // if e, mu, pi, k or p (but no + or -) is requested we reject neutrals
  if ( fPidSelect!=99 && fabs ( b->GetCharge() ) <0.001 ) {
    return kFALSE;
  }

  SetTypeAndMass ( b );

  double Lcheck = b->GetPidInfo ( fPidSelect );
  //std::cout<<"ChnsAnaPidSelector::Accept: Lcheck="<<Lcheck<<" fPidSelect="<<fPidSelect<<std::endl;

  if ( fCriterion == veryLoose ) {
    if ( Lcheck<fSelectPar->GetVeryLooseCrit ( fPidSelect ) ) {
      return kFALSE;
    }
  } else if ( fCriterion == loose ) {
    if ( Lcheck<fSelectPar->GetLooseCrit ( fPidSelect ) ) {
      return kFALSE;
    }
  } else if ( fCriterion == tight ) {
    if ( Lcheck<fSelectPar->GetTightCrit ( fPidSelect ) ) {
      return kFALSE;
    }
  } else if ( fCriterion == veryTight ) {
    if ( Lcheck<fSelectPar->GetVeryTightCrit ( fPidSelect ) ) {
      return kFALSE;
    }
  } else if ( fCriterion == variable ) {
    if ( Lcheck<fSelectPar->GetVariableCrit ( fPidSelect ) ) {
      return kFALSE;
    }
  } else if ( fCriterion == all ) {
    return kTRUE;
  } else if ( fCriterion == best ) {
    double Le  = b->GetPidInfo ( 0 );
    double Lmu = b->GetPidInfo ( 1 );
    double Lpi = b->GetPidInfo ( 2 );
    double Lk  = b->GetPidInfo ( 3 );
    double Lp  = b->GetPidInfo ( 4 );

    if ( Lcheck<Le || Lcheck<Lmu || Lcheck<Lpi || Lcheck<Lk || Lcheck<Lp ) {
      return kFALSE;
    }
  }

  return kTRUE;
}

Bool_t ChnsAnaPidSelector::Accept ( FairRecoCandidate*  )
{
  Warning ( "ChnsAnaPidSelector::Accept(VAbsMicroCandidate&)","No implementation for this. Please use ChnsAnaPidSelector::Accept(RhoCandidate&)" );
  return kFALSE;
}



