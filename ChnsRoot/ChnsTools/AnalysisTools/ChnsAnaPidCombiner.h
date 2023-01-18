//
//  ChnsAnaPidCombiner.h
//  PANDAROOT
//
//  Created by Ralf Kliemt on 12/16/11.
//
#ifndef CHNSANAPIDCOMBINER_H
#define CHNSANAPIDCOMBINER_H

#include <iostream>
#include "TNamed.h"
#include "FairRootManager.h"
#include <map>
#include <vector>

class RhoCandidate;
class RhoCandList;
class FairRecoCandidate;
class TClonesArray;
class ChnsPidProbability;
class TString;

class ChnsAnaPidCombiner : public TNamed
{

  public:
    //Constructor
    ChnsAnaPidCombiner(const char* name="ChnsAnaPidCombiner", TString tcanames="");
    //Destructor
    ~ChnsAnaPidCombiner() {/*empty*/};
    //void AddTcaName(const TString& tcaname) {fPidArrays[tcaname]=0;};
    void SetTcaNames(TString& names);
    void SetDefaults();
    void ClearNames() {fPidArrays.clear(); };
    void Init();

    void ApplyFlat(RhoCandidate* tc);
    Bool_t Apply(RhoCandidate* tc);
    Bool_t Apply(RhoCandList& tcl);

  private:
    TClonesArray* ReadTCA(const TString& tcaname);
    FairRootManager*   fRootManager; //!
    std::map<TString,TClonesArray*> fPidArrays; //! pid data map, full
    std::vector<TString> fCurrentPidArrays; //! pid data current request
    ChnsPidProbability* fPidResult; //!
    Bool_t fInitialized;

  public:
    ClassDef(ChnsAnaPidCombiner,1)
};


#endif
