// -------------------------------------------------------------------------
// -----                 ChnsEvtGenBox header file                  -----
// -----               Created 19/04/21  by Y. Liang                -----
// -------------------------------------------------------------------------

/** ChnsEvtGenBox.h
 *@author Y. Liang <liangyt@impcas.ac.cn>
 *
 The ChnsEvtGenBox generates EVT event using the EVT fortran code
 and inserts the tracks into the ChnsStack via the FairPrimaryGenerator.
 Derived from FairGenerator.
**/

#ifndef CHNS_EVTBOX_H
#define CHNS_EVTBOX_H

#include "FairGenerator.h"
#include "FairBaseMCGenerator.h"
#include "TF1.h"
#include <Rtypes.h>

class TVirtualMCStack;
class FairPrimaryGenerator;

#include "EvtGenBase/EvtStdHep.hh"
#include "EvtGenBase/EvtId.hh"

class EvtGen;

class ChnsEvtGenBox : public FairBaseMCGenerator
{

 public: 

  /** Default constructor (should not be used) **/
  ChnsEvtGenBox();

  ChnsEvtGenBox(TString particle,TString decfile="", Int_t Multi=1, Long_t Seed=-1,TString defDECAY="",TString defPDL="",Double_t ATarg=0.0); // Mom>0 -> pbar Momentum; Mom<0 -> cms Energy
  // ATarg is for nuclear target, value is 0 for p and d, and between 3 and 238 for heavier nuclei
 
  /** Destructor **/
  virtual ~ChnsEvtGenBox();

  /** Generate one event using EVT
   ** @param primGen  pointer to the FairPrimaryGenerator
   **/
  virtual Bool_t ReadEvent(FairPrimaryGenerator* primGen);

  void SetStoreTree(Bool_t store=true){ fStoreTree=store;};
  inline void SetVerbose(int v=1){verbose=v;};



      void SetPRange(Double32_t pmin = 0, Double32_t pmax = 10)
    {
        fPMin = pmin;
        fPMax = pmax;
        fPRangeIsSet = kTRUE;
    }

    void SetPtRange(Double32_t ptmin = 0, Double32_t ptmax = 10)
    {
        fPtMin = ptmin;
        fPtMax = ptmax;
        fPtRangeIsSet = kTRUE;
    }

    void SetEkinRange(Double32_t kmin = 0, Double32_t kmax = 10)
    {
        fEkinMin = kmin;
        fEkinMax = kmax;
        fEkinRangeIsSet = kTRUE;
    }

    void SetPhiRange(Double32_t phimin = 0, Double32_t phimax = 360)
    {
        fPhiMin = phimin;
        fPhiMax = phimax;
    }

    void SetEtaRange(Double32_t etamin = -5, Double32_t etamax = 7)
    {
        fEtaMin = etamin;
        fEtaMax = etamax;
        fEtaRangeIsSet = kTRUE;
    }

    void SetYRange(Double32_t ymin = -5, Double32_t ymax = 7)
    {
        fYMin = ymin;
        fYMax = ymax;
        fYRangeIsSet = kTRUE;
    }

    void SetThetaRange(Double32_t thetamin = 0, Double32_t thetamax = 90)
    {
        fThetaMin = thetamin;
        fThetaMax = thetamax;
        fThetaRangeIsSet = kTRUE;
    }

    void SetCosTheta() { fCosThetaIsSet = kTRUE; }

    void SetXYZ(Double32_t x = 0, Double32_t y = 0, Double32_t z = 0);

    void SetBoxXYZ(Double32_t x1 = 0, Double32_t y1 = 0, Double32_t x2 = 0, Double32_t y2 = 0, Double32_t z = 0);

    void SetMass(Double32_t mass) {fMass = mass;}

    void SetMulti(Int_t multi) {fMulti = multi;}

    Bool_t Init();
//    virtual void GenerateEventParameters();
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




  Int_t fMulti; //multiplicity
  Double32_t fMass; //mass of the mother particle.   20210419  yutie
  Double32_t fPtMin, fPtMax;         // Transverse momentum range [GeV]
  Double32_t fPhiMin, fPhiMax;       // Azimuth angle range [degree]
  Double32_t fEtaMin, fEtaMax;       // Pseudorapidity range in lab system
  Double32_t fYMin, fYMax;           // Rapidity range in lab system
  Double32_t fPMin, fPMax;           // Momentum range in lab system
  Double32_t fThetaMin, fThetaMax;   // Polar angle range in lab system [degree]
  Double32_t fEkinMin, fEkinMax;     // Kinetic Energy range in lab system [GeV]

  Bool_t fEtaRangeIsSet;     // True if eta range is set
  Bool_t fYRangeIsSet;       // True if rapidity range is set
  Bool_t fThetaRangeIsSet;   // True if theta range is set
  Bool_t fCosThetaIsSet;     // True if uniform distribution in
  // cos(theta) is set (default -> not set)
  Bool_t fPtRangeIsSet;     // True if transverse momentum range is set
  Bool_t fPRangeIsSet;      // True if abs.momentum range is set
  Bool_t fEkinRangeIsSet;   // True if kinetic energy range is set




  ClassDef(ChnsEvtGenBox, 6);

};

#endif
