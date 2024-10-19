#ifndef ChnsSoftTriggerTask_H
#define ChnsSoftTriggerTask_H 1


#include "FairTask.h"
#include <map>
#include <vector>
#include <string>
#include "TLorentzVector.h"
#include "RhoCandList.h"
#include "TDatabasePDG.h"
#include "ChnsVtxPoca.h"
#include "TFile.h"

class TClonesArray;
class TObjectArray;
class TH1F;
class TH2F;

class RhoMassParticleSelector;
class RhoEnergyParticleSelector;
class RhoMomentumParticleSelector;
class ChnsAnalysis;
class RhoCandList;
class RhoTuple;
class RhoCandidate;
class ChnsEventShape;
class TDatabasePDG;
class ChnsRhoTupleQA;
class ChnsSoftTriggerLine;

class ChnsSoftTriggerTask : public FairTask
{

 public:
	
	// *** Default constructor   
	ChnsSoftTriggerTask(double pmom, int mode=0, int runnum=0, TString trigfilename="");
	
	// *** Destructor 
	~ChnsSoftTriggerTask();	
	
	// *** Virtual method Init 
	virtual InitStatus Init();
	
	// *** Virtual method Exec 
	virtual void Exec(Option_t* opt);
	
	virtual void Finish();
	
	// *** set default settings for fast and full sim
	void SetFastSimDefaults();
	void SetFullSimDefaults();
	
	// *** read selection configuration from file
	void SetConfigurationFile(TString fname) {fCfgFileName = fname;}
	
	// switches between mass window only of full selection (selection defined in cfg file)
	// 0: detailed selection turned off
	// 1: exclusive mode (modes w/o detailed cut definitions are rejected)
	// 2: open mode (modes w/o detailed cut definitions just have to fulfill their mass window criterion)
	void ApplyFullSelection(int selmode=1) {fApplyFullSelection = selmode;}  
	
	// *** set max number of sigmas deviation for tag
	void SetTagNSigMode(int mode, double nsig);
	void SetTagNSigAll(double nsig);
	void SetAuxNSig(double nsig) {fNsigAux = nsig;}  // n sigma cut for KS, pi0, eta
	void SetDstMDiffCut(double cut) {fDstMDiffCut = cut;} // cut on delta M(D*, D); default = 10. GeV/c^2
	
	// *** set selection parameters for QA tuple
	void SetPi0QASelection(double min, double max) {fPi0QaMin=min; fPi0QaMax=max;}
	void SetKs0QASelection(double min, double max) {fKs0QaMin=min; fKs0QaMax=max;}
	void SetEtaQASelection(double min, double max) {fEtaQaMin=min; fEtaQaMax=max;}
	
	void SetQASelectionDefaults();
	
	// *** set mean and sigma for tagging algos
	void SetPi0SignalParams(double mean, double sigma) {fPi0Mean=mean; fPi0Sigma=sigma;}
	void SetKs0SignalParams(double mean, double sigma) {fKs0Mean=mean; fKs0Sigma=sigma;}
	void SetEtaSignalParams(double mean, double sigma) {fEtaMean=mean; fEtaSigma=sigma;}
	
	void SetSignalParamsDefaults();
	
	// *** pre selection of neutral and charged + PID cut
	void SetGammaMinE(double min) {fGammaMinE = min;}
	void SetTrackMinP(double min) {fTrackMinP = min;}
	void SetInitialPidCut(double cut) {fIniPidCut = cut;}
	
	// *** modifiers for PID selection string
	void SetPidAlgoAll(TString algo);
	
	void SetPidAlgoElectron(TString algo) {fAlgoElectron=algo;}
	void SetPidAlgoMuon(TString algo) {fAlgoMuon=algo;}
	void SetPidAlgoPion(TString algo) {fAlgoPion=algo;}
	void SetPidAlgoKaon(TString algo) {fAlgoKaon=algo;}
	void SetPidAlgoProton(TString algo) {fAlgoProton=algo;}
	
	// *** Switch Tagging methods
	void SetTagAll(bool tag=true);
	// mode code as in triggerlines configuration file
	void SetTagMode(int mode, bool tag=true);
	
	// *** Enable/Disable QA output	
	void SetQAPi0(bool qa=true) { fQAPi0 = qa;}
	void SetQAEta(bool qa=true) { fQAEta = qa;}
	void SetQAKs0(bool qa=true) { fQAKs0 = qa;}
	void SetQAMc(bool qa=true)  { fQAMc  = qa;}
	void SetQAMctOnly(bool qa=true)  { fQAMctOnly  = qa;}

	void SetQAEvent(bool qa=true) { fQAEvent = qa;}
	
	void SetQAAll(bool qa=true);
	// mode code as in triggerlines configuration file
	void SetQAMode(int mode, bool qa=true);
	
	// passed to ChnsAnalysis: this also allows mct match, when some soft photons are missing in decay
	void McMatchAllowPhotos(int maxn=1, double thresh=0.05){fPhotosMax=maxn;fPhotosThresh=thresh;}  
	
	void SetVerbose(int verb=10) {fVerbose=verb;}

 protected:
	
	
 private: 
	// *** List preparation methods
	void FillGlobalLists();
	bool ReadConfiguration();
	bool ReadTriggerLines();
	
	// *** methods for full candidate selection
	int DoCombinatorics(RhoCandList &l, ChnsSoftTriggerLine *tl);         // do combinatorics for certain trigger line
	void CombineList(RhoCandList &l, int mothpdg, int amothpdg, std::vector<int> &idx, std::vector<int> &aidx, bool cc=false);
	int AntiPdg(int pdg);                                                // gives pdg code of antiparticle if exists
	double GetVarValue(RhoCandidate *c, int id);                               // fill single candidate variable with index id 
	void FillVarArray(RhoCandidate *c, int id, Bool_t tmva=false);     // fill candidate variable array for selection
	void FillEventShapeVarArray();                        			     // fill event shape variable array for selection
	
	bool AcceptCandidate(int mode, RhoCandidate *c, RhoParticleSelectorBase *sel=0); // accept candidate for full selection
	bool AcceptDstCut(RhoCandidate *c);                                  // accept the D* mass diff cut?
	double GetPocaVtx(RhoCandidate* c, double &dist, double &ctau);
    void GetAngles(RhoCandidate *c, double &oang, double &decang);
	
	// *** some helper functions
	int SelectTruePid(RhoCandList &l);
	int SelectPidProb(RhoCandList &l, int pididx, double cut);
	int MultPidProb(RhoCandList &l, int pididx, double prob);
	double DbMass(TString name) {if (fPdg->GetParticle(name)) return fPdg->GetParticle(name)->Mass(); else return 0.;}
	int SplitString(TString s, TString delim, TString *toks, int maxtoks); 
	int DetermineRecoilMode(int &mode);
	TLorentzVector BoostCms(TLorentzVector in);	
	int CodeVariable(TString v);
	
	// *** Created necessary composites
	int CreateKs0Cands(RhoTuple *n);
	
	// *** General tagging method
	int TagMode(ChnsSoftTriggerLine *tl, int &npre);
	
    // ----------------------------
	// *** global vars
	int      fVerbose;			 // create verbose output
	int      fMode;				 // the signal or background mode code, to be set in the constructor
	int      fRecoilMode;		 // recoil mode code (0 = %, 1=gamma, 2=pi0, 3=eta, 4=2pi0, 5=2eta, 6=pi+pi-, 7=2pipi0, 8=K+K-, 9=K0 K0b)
	int      fRecoilCnt;		 // recoil counter (1*Ngamma + 10*Npi0 + 100*Npi+ + 1000*NK+ + 10000*NK0 + 100000*Neta)
	int      fEvtCount;			 // global event counter
	int      fRunNum;			 // run number
	int      fSigCount;	         // counter, unused for the time being
	double   fNsigTag;			 // max number of sigmas deviation of candidate to be tagged
	double   fNsigAux;			 // max number of sigmas deviation for auxilliary particle = pi0, K_S, eta
	double   fDstMDiffCut;       // optional upper limit cut for D* -> DX decays on M(D*) - M(D) (explicit PDG codes 413, 423, 433)
	
	TString  fCfgFileName;		 // file containing the detailed selection cuts 
	TString  fTriggerFileName;	 // file containing the trigger setup
	Int_t    fPhotosMax;         // passed over to ChnsAnalysis for MC match with photos on
	Double_t fPhotosThresh;      // passed over to ChnsAnalysis for MC match with photos on
	
	int     fApplyFullSelection; // 0: detailed selection turned off
                                 // 1: exclusive mode (modes w/o detailed cut definitions are rejected)
	                             // 2: open mode (modes w/o detailed cut definitions just have to fulfill their mass window criterion)
		
	// *** initial pbar p system info
	TLorentzVector fIniP4;
	double fEcm;
	double fPbarMom;
	TVector3 fPrimVtx;   // primary vertex estimate of all charged tracks by ChnsVtxPoca
	double   fPrimVtxQa; // and primary vtx quality

    // ----------------------------
	// *** flags for enable/disable QA ntuple output	
	bool fQAPi0;         // QA tuple for pi0
	bool fQAEta;         // QA tuple for eta
	bool fQAKs0;         // QA tuple for KS
	bool fQAEvent;       // QA tuple for event (with tag info)
	bool fQAMc;          // QA tuple for MC lists
	bool fQAMctOnly;     // store QA info only for MCT
	
    // ----------------------------
	// *** parameters for ntuple QA window	
	double fPi0QaMin;		// min value for pi0 selection
	double fPi0QaMax;		// max value for pi0 selection
	
	double fEtaQaMin;		// min value for eta(gg) selection
	double fEtaQaMax;		// max value for eta(gg) selection
	
	double fKs0QaMin;		// min value for Ks selection
	double fKs0QaMax;		// max value for Ks selection
	

    // ----------------------------
	// *** signal parameters for different channels
	double fPi0Mean;		// mean value for pi0 signal
	double fPi0Sigma;		// sigma value for pi0 signal
	
	double fEtaMean;		// mean value for eta(gg) signal
	double fEtaSigma;		// sigma value for eta(gg) signal
	
	double fKs0Mean;		// mean value for Ks signal
	double fKs0Sigma;		// sigma value for Ks signal
	
	// *** general cuts
	double fGammaMinE;		// minimum energy for gamma candidates
	double fPi0MinE;		// minimum energy for pi0 candidates
	double fEtaMinE;		// minimum energy for eta candidates
	double fTrackMinP;		// minimum momentum for charged candidates
	double fIniPidCut;		// Tightness of initial PID (cut on probability)
	
	// *** global mass selectors
	RhoMassParticleSelector 		*fPi0Sel;		// pi0 selector (g g)
	RhoMassParticleSelector 		*fPi0PreSel;	// pi0 pre selector

	RhoMassParticleSelector 		*fEtaSel;		// eta selector (g g)
	RhoMassParticleSelector 		*fEtaPreSel;	// eta pre selector
	
	RhoMassParticleSelector 		*fKs0Sel;		// Ks0 selector (pi pi)
	RhoMassParticleSelector 		*fKs0PreSel;	// Ks0 pre selector


	// *** global kin selectors
	RhoMomentumParticleSelector 	*fMomentumSel;  // cut for minimum p
	RhoEnergyParticleSelector   	*fEnergySel;    // cut for minimum E

	// *** pid algos
	TString fAlgoElectron;	// Pid algo definition string electrons
	TString fAlgoMuon;		// Pid algo definition string muons
	TString fAlgoPion;		// Pid algo definition string pions
	TString fAlgoKaon;		// Pid algo definition string kaons
	TString fAlgoProton;	// Pid algo definition string protons
	
	
	Int_t fPidMult_025[5];	// cache for the PID multiplicities with P>=0.25
	
	
	// *** declare NTuples
	RhoTuple *ntp;			// overall info
	RhoTuple *nks0;			// Ks0 QA
	RhoTuple *npi0;			// pi0 QA
	RhoTuple *neta;			// eta QA
	RhoTuple *nmc;			// MC QA
	
	// *** the ChnsAnalysis object
	ChnsAnalysis *fAnalysis;
	
	// *** Pointer to event shape object
	ChnsEventShape *fEventShape;
	
	// *** RhoTuple QA helper class
	ChnsRhoTupleQA *fQA;
	
	// *** Poca vertexer
	ChnsVtxPoca *fPocaVertexer;
	
	// PDG database object
	TDatabasePDG  *fPdg;
	
	// *** global RhoCandLists
	RhoCandList fMcTruth;
	RhoCandList fAllCands;
	RhoCandList fChargedCands;
	RhoCandList fNeutralCands;
	RhoCandList fGammaCands;
		
	RhoCandList fKs0Cands;
	RhoCandList fPi0Cands;
	RhoCandList fEtaCands;
	
	// *** index PID lists with ordering: e+  e-  mu+  mu- pi+   pi-  K+    K-    p     pb   gam  pi0  KS   eta
	RhoCandList fPidList[16];
	
	
	// *** Get parameter containers
	virtual void SetParContainers();
	
    FairRootManager*   fRootManager;
    TClonesArray* fTcaOnlineFilterInfo;
	
	ClassDef(ChnsSoftTriggerTask,1);
  
};

#endif
