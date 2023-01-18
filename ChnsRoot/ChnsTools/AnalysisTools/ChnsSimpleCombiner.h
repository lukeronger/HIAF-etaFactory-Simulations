// ************************************************************************
//
// PANDA Simple Particle Combiner Class
//
// Offers simple combinatorics
//
// ************************************************************************
//
// Parameters: 
// - fAna   : ChnsAnalysis instance
// - decay  : decay specification, e.g. "phi -> K+ K-; D_s+ -> phi pi+ cc" (cc indicates charged conjugate; particle used have to be defined beforehand)
// - params : configuration parameters, e.g. "mwin=0.5:mwin(phi)=0.2:emin=0.1:pid=Loose:pide=Tight:algo=PidChargedProbability"
//   - mwin     : mass window for all composites
//   - mwin(X)  : mass window for composite 'X'; X (or cc of X) has to appear in decay 
//   - emin     : minimum energy threshold for neutrals
//   - pmin     : minimum momentum threshold for charged
//   - pid      : PID criterion ("All","VeryLoose","Loose","Tight","VeryTight","Best") for all species
//   - pide, pidmu, pidpi, pidk, pidp : PID criterion for specific species
//   - algo     : PID algorithm (e.g. "PidAlgoEmcBayes;PidAlgoDrc" or "PidChargedProbability") for all species
//   - algoe, ... algop : PID algorithm for specific species
//
//
// K.Goetzen 01/2015
//
// ************************************************************************

#ifndef ChnsSimpleCombiner_H
#define ChnsSimpleCombiner_H 1

#include "TString.h"
#include "RhoCandList.h"
#include "TDatabasePDG.h"
#include <vector>
#include <map>

#define MAXLISTS 30

class ChnsAnalysis;
class RhoEnergyParticleSelector;
class RhoMomentumParticleSelector;
class RhoMassParticleSelector;

typedef std::vector<TString> StringList;

struct SCDecayInfo
{
	int mpdg;                       // mother(this) pdg code
	int midx;                       // list index
	int ndaug;                      // number of daughters
	bool daucc;                     // do daughters have a cc?
	double mwin;                    // mass selection window width
	double mwinlo;                  // selection window low edge
	double mwinhi;                  // selection window high edge
	RhoMassParticleSelector *msel;  // mass selector
	std::vector<int> dpdg;          // pdg codes of daughters
	std::vector<int> didx;          // list indeces of daughters
};

class ChnsSimpleCombiner
{
public:
	// *** Constructors   
	ChnsSimpleCombiner(ChnsAnalysis *fAna, TString decay, TString params="", double Ecm=0);
	
	// *** Destructor 
	~ChnsSimpleCombiner();	
	
	// *** general methods
	void SetVerbose(int verb=1) {fVerbose = verb;}
	void Combine();
	void Print();
	void SetPid(TString crit="", TString algo="");
	void SetPidElectron(TString crit="", TString algo="");  
	void SetPidMuon(TString crit="", TString algo="") ;     
	void SetPidPion(TString crit="", TString algo="") ;     
	void SetPidKaon(TString crit="", TString algo="") ;     
	void SetPidProton(TString crit="", TString algo="") ;   
	
	int GetNLists() {return fNLists-11;}
	bool GetList(RhoCandList &l, TString comp);
	bool GetList(RhoCandList &l, int pdg);
	bool GetListN(RhoCandList &l, int idx);
	
private:
	void InitDecayInfo(SCDecayInfo &info, int pdg, int idx);
	void FillGenericLists();                                    // fills generic lists (e+, e-, ... gamma) which are needed for combinatorics
	int  CombineList(RhoCandList &l, int mpdg, std::vector<int> &idx);	// do combinatorics for one mode
	int  SplitString(TString s, TString delim, StringList &toks);// routine to split a string in pieces
	bool ParseDecay(TString decay);                             // parse the combinatorics setup
	bool ParseParams(TString params);
	bool CCInvariant(std::vector<int> &vpdg);                   // is FS its own charged conjugate?
	bool CCInvariant(int pdg) {return (pdg == AntiPdg(pdg));}   // is pdg = pdg of anti-particle
	int  AntiPdg(int pdg);                                      // pdg of anti-particle

	ChnsAnalysis  *fAnalysis;
	TString      fDecay;
	TString      fGlobParams;
	int          fNLists;
	RhoCandList  fList[MAXLISTS];
	int          fVerbose;
	double       fEmin;
	double       fPmin;
	double       fEcm;
	
	RhoEnergyParticleSelector   *fESel;
	RhoMomentumParticleSelector *fPSel;
	
	std::map<int,int>     fPdgIdxMap;
	std::map<int,int>     fIdxPdgMap;
	
	std::map<int,TString> fIdxListNameMap;
	std::map<int,TString> fIdxPidCritMap;
	std::map<int,TString> fIdxPidAlgoMap;
	
	std::vector<SCDecayInfo> fDecayInfoArray;
};

#endif
