//
//  ChnsAnaPidSelector.h
//  PANDAROOT
//
//  Created by Ralf Kliemt on 12/16/11.
//

#ifndef CHNSANAPIDSELECTOR_H
#define CHNSANAPIDSELECTOR_H

#include <iostream>
#include <float.h>
#include "TNamed.h"
#include "TString.h"
#include "RhoBase/RhoParticleSelectorBase.h"

class RhoCandidate;
class FairRecoCandidate;
class ChnsAnaSelectorPar;

class ChnsAnaPidSelector : public RhoParticleSelectorBase
{

  public:
    //Constructor
    ChnsAnaPidSelector(const char* name="ChnsAnaPidSelector", const char* type="", const char* paramid="Default");
    //Destructor
    virtual ~ChnsAnaPidSelector() {}

    //operations
    virtual Bool_t Accept(RhoCandidate* b);
    virtual Bool_t Accept(FairRecoCandidate* b);
    Bool_t SetCriterion(TString& crit) {return SetSelection(crit);};
    Bool_t SetSelection(TString& crit);

  protected:

    ChnsAnaSelectorPar* fSelectPar; //! Pointer to the current parameter object

    //ChnsAnaFluxPar* fFluxPar; //! Pointer to the current parameter object

    Double_t fChargeCrit;

    Int_t fPidSelect;

  public:
    ClassDef(ChnsAnaPidSelector,1)  // Particle selector
};



#endif
