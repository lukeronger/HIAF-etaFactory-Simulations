#ifndef ChnsAnaWithTrigger_H
#define ChnsAnaWithTrigger_H 1


#include "FairTask.h"
#include <map>
#include <string>
#include "TLorentzVector.h"
#include "TFile.h"

class TClonesArray;
class TH1F;
class TH2F;
class TDatabasePDG;

class RhoMassParticleSelector;
class ChnsAnalysis;
class RhoCandList;
class RhoCandidate;
class RhoTuple;
class ChnsRhoTupleQA;



class ChnsAnaWithTrigger : public FairTask
{

 public:
	
	// ** Default constructor   
	ChnsAnaWithTrigger(double pbarmom, TString outname);
	
	// ** Destructor 
	~ChnsAnaWithTrigger();	
	
	// ** Virtual method Init 
	virtual InitStatus Init();
	
	// ** Virtual method Exec 
	virtual void Exec(Option_t* opt);
	
	virtual void Finish();

 protected:
	
	
 private: 
	// *** event counter
	int fEvtCount;	
	
	// *** the initial 4-vector
	TLorentzVector fIni;
	
	// *** the ChnsAnalysis object
	ChnsAnalysis   *fAnalysis;
	TDatabasePDG  *fPdg;
	TFile 		  *fFile;
	TString		  fOutName;
	
	
	// *******
	// ******* DECLARE THE STUFF YOU NEED
	// *******
	
	RhoTuple *ntp1;
	RhoTuple *ntp2;
	RhoTuple *nmc;
	
	RhoMassParticleSelector *jpsiMassSel;
	RhoMassParticleSelector *jpsiPreMassSel;
	
	// TCA to access software trigger info
	TClonesArray *fOnlineFilterInfo;	
	
	ClassDef(ChnsAnaWithTrigger,1);
  
};

#endif
