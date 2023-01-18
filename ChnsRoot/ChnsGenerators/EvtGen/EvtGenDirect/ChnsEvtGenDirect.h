// -------------------------------------------------------------------------
// -----                 ChnsEvtGenDirect header file                  -----
// -----               Created 11/04/08  by M.Al-Turany              -----
// -------------------------------------------------------------------------

/** ChnsEvtGenDirect.h
 *@author M.Al-Turany <m.al-turany@gsi.de>
 *
 The ChnsEvtGenDirect generates EVT event using the EVT fortran code
 and inserts the tracks into the ChnsStack via the FairPrimaryGenerator.
 Derived from FairGenerator.
**/

#ifndef CHNS_EVTDIRECT_H
#define CHNS_EVTDIRECT_H

#include "FairGenerator.h"
#include "TF1.h"

class TVirtualMCStack;
class FairPrimaryGenerator;

#include "EvtGenBase/EvtStdHep.hh"
#include "EvtGenBase/EvtId.hh"

class EvtGen;

class ChnsEvtGenDirect : public FairGenerator
{

 public: 

  /** Default constructor (should not be used) **/
  ChnsEvtGenDirect();

  ChnsEvtGenDirect(TString particle,TString decfile="",Double_t Mom=0, Long_t Seed=-1,TString defDECAY="",TString defPDL="",Double_t ATarg=0.0); // Mom>0 -> pbar Momentum; Mom<0 -> cms Energy
  // ATarg is for nuclear target, value is 0 for p and d, and between 3 and 238 for heavier nuclei
 
  /** Destructor **/
  virtual ~ChnsEvtGenDirect();

  /** Generate one event using EVT
   ** @param primGen  pointer to the FairPrimaryGenerator
   **/
  virtual Bool_t ReadEvent(FairPrimaryGenerator* primGen);

  void SetStoreTree(Bool_t store=true){ fStoreTree=store;};
  inline void SetVerbose(int v=1){verbose=v;};

 private:

  Bool_t fStoreTree;
  Int_t verbose;
  /**
   * P_lab(GeV/c)
  */
  Double_t fEnergy;	//! Energy of System
  Double_t fMomentum; 	//! Momentum of System
  
  EvtGen *myGenerator;	//! Pointer to the actual EvtGen
  EvtStdHep evtstdhep;  //! The decay tree
  EvtId PART;		    //! The mother particle
	
  ClassDef(ChnsEvtGenDirect,1);

};

#endif
