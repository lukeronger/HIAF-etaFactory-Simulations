#ifndef ChnsMyAnalysisTask_H
#define ChnsMyAnalysisTask_H 1


#include "FairTask.h"
#include <map>
#include <string>

class TClonesArray;
class TObjectArray;
class TH1F;
class TH2F;

#include "RhoSelector/RhoMassParticleSelector.h"
class ChnsAnalysis;
class RhoCandList;
class TStopwatch;
class RhoTuple;

class ChnsMyAnalysisTask : public FairTask
{

  public:
    typedef std::map<Int_t, Float_t> mapper;

    /** Default constructor **/
    ChnsMyAnalysisTask();


    /** Destructor **/
    ~ChnsMyAnalysisTask();


    /** Virtual method Init **/
    virtual InitStatus Init();


    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    virtual void Finish();
    //void CreateStructure();

  protected:

    int evcount;
    int epmax, emmax, pipmax, pimmax, mcmax;


    // **** mass selectors for the resonances/composites
    //

  private:

    void FillMassHisto(TH1F* h, RhoCandList& l);
    int  SelectPdgCode(RhoCandList& mct, RhoCandList& l);

    RhoMassParticleSelector* jpsiMassSel;

    /**book all the histograms**/
    TH1F* hjpsim_nopid;
    TH1F* hpsim_nopid;
    TH1F* hjpsim_lpid;
    TH1F* hpsim_lpid;
    TH1F* hjpsim_tpid;
    TH1F* hpsim_tpid;

    TH1F* hjpsim_ftm;
    TH1F* hpsim_ftm;
    TH1F* hjpsim_nm;
    TH1F* hpsim_nm;

    TH1F* hjpsim_diff;
    TH1F* hpsim_diff;

    TH1F* hjpsim_vf;
    TH1F* hjpsim_4cf;
    TH1F* hjpsim_mcf;

    TH1F* hjpsi_chi2_vf;
    TH1F* hpsi_chi2_4c;
    TH1F* hjpsi_chi2_mf;

    TH2F* hvpos;

    RhoTuple* ntp;
    RhoTuple* ntp2;

    /*  TH1F *hjpsimass;
      TH1F *hpsimass;*/

    ChnsAnalysis* theAnalysis;
    TStopwatch* timer;

    /** Get parameter containers **/
    virtual void SetParContainers();


    ClassDef(ChnsMyAnalysisTask,1);

};

#endif
