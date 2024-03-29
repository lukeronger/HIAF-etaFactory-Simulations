#ifndef Rho4CFitter_H
#define Rho4CFitter_H
//////////////////////////////////////////////////////////////////////////
//                                                                      //
// Rho4CFitter                  //
//                                                                      //
// Author: K. Goetzen, GSI, 2008                //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "RhoBase/RhoFitterBase.h"
#include "TVector3.h"
#include "TMatrixDSym.h"
#include "TMatrixD.h"
#include "TLorentzVector.h"
#include "RhoBase/RhoCandList.h"

class RhoCandidate;

class Rho4CFitter : public RhoFitterBase
{
  public:
    Rho4CFitter( RhoCandidate* b , TLorentzVector lv) ;
    virtual ~Rho4CFitter();// {if(fHeadOfTree) delete fHeadOfTree;}
    Bool_t Fit(); // fits final state particles to initial state, States inbetween are modified.
    Bool_t FitConserveMasses(); // fits final state particles threemomenta to initial state, States inbetween are modified.
    Bool_t FitAll() {Fatal("Rho4CFitter::FitAll()","Not applicable. Please use Fit() or FitConserveMasses()."); return kFALSE;};
    void PrintTree(RhoCandidate* c, int l=0);
    double Chi2Contribution ( const RhoCandidate& ) const {Error("Rho4CFitter::Chi2Contribution","No chi2 contribution available.");return -9999.;};

  private:

    Bool_t Do4CFit(); //Fit, can freely change energy
    Bool_t Do4CFitWithMassConservation(); //Fit, conserving daughter masses

    TLorentzVector fLv4C;
    int            fNDau;
    double         fConserveDaughterMasses; //true = energy of daughters cannot be modified by fit

    ClassDef(Rho4CFitter,1) //A 4c fitter
};

#endif
