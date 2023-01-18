#ifndef CHNSANATASK_H
#define CHNSANATASK_H 1

#include <string>
#include <vector>

#include "TString.h"

#include "RhoCandList.h"
#include "FairRootManager.h"
#include "FairTask.h"

class TClonesArray;
class TBranch;

class ChnsPidListMaker;
class ChnsEventInfo;


class ChnsAnaTask: public FairTask
{
  public:
    ChnsAnaTask();
    ~ChnsAnaTask();

    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    virtual void Finish();

  protected:

    void InitArrays();
    int  GetEvent();
    bool FillList(RhoCandList& l, std::string listkey="All");


    //TClonesArray *fEventInfo;
    //ChnsEventInfo *fCurrentEventInfo;


  private:

    TClonesArray* fChargedCands;
    TClonesArray* fNeutralCands;
    TClonesArray* fChargedProbability;
    TClonesArray* fNeutralProbability;
    TClonesArray* fMcCands;

    RhoCandList fLAllCands;
    RhoCandList fLChargedCands;
    RhoCandList fLNeutralCands;
    RhoCandList fLMcCands;

    ChnsPidListMaker* fPidListMaker;
    Bool_t fEventRead;
    //void SetupBranchNames();

    // Private Member Variables


    ClassDef(ChnsAnaTask,0);
};


#endif
