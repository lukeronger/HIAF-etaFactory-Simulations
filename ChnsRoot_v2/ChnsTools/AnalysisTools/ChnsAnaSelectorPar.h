//
// C++ Interface: ChnsAnaSelectorPar
//
#ifndef CHNSANASELECTORPAR_H
#define CHNSANASELECTORPAR_H

#include <TVector2.h>
#include <TObjString.h>
#include "TArrayD.h"

#include "FairParGenericSet.h"
#include "FairParamList.h"

class ChnsAnaSelectorPar : public FairParGenericSet
{
  public :
    ChnsAnaSelectorPar (const char* name="ChnsAnaSelectorParName",
                       const char* title="Analysis pid Selectorr parameter",
                       const char* context="TestDefaultContext");
    ~ChnsAnaSelectorPar(void) {clear();};
    void clear(void);
    void putParams(FairParamList* list);
    Bool_t getParams(FairParamList* list);

    void Print();
    /** Accessor functions **/
    Double_t GetVeryLooseCrit(Int_t ptype) {return fVeryLoose.At(ptype);};
    Double_t GetLooseCrit(Int_t ptype) {return fLoose.At(ptype);};
    Double_t GetTightCrit(Int_t ptype) {return fTight.At(ptype);};
    Double_t GetVeryTightCrit(Int_t ptype) {return fVeryTight.At(ptype);};
    Double_t GetVariableCrit(Int_t ptype) {return fVariable.At(ptype);};

  private:
    // Strip Parameters
    TArrayD fVeryLoose;   // "VeryLoose" pid selection criterion
    TArrayD fLoose;       // "Loose" pid selection criterion
    TArrayD fTight;       // "Tight" pid selection criterion
    TArrayD fVeryTight;   // "VeryTight" pid selection criterion
    TArrayD fVariable;    // "Variable" pid user selection criterion

    ClassDef(ChnsAnaSelectorPar,1);
};

#endif 
