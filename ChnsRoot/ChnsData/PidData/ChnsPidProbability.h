#ifndef CHNSPIDPROBABILITY_H
#define CHNSPIDPROBABILITY_H
//////////////////////////////////////////////////////////////////////////
//                                                                      //
// ChnsPidProbability	                                                  //
//                                                                      //
// Definition of the Panda pid probabilities .	                        //
//                                                                      //
// Author: Ralf Kliemt, Dresden/Turin/Bonn, 01.09.09                    //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "TObject.h"

class ChnsPidProbability : public TObject 
{

 public:

  ChnsPidProbability();
  ChnsPidProbability(Double_t e, Double_t mu, Double_t pi, Double_t k, Double_t p, Int_t idx = -1);
  ~ChnsPidProbability();

  Double_t		GetElectronPdf() const { return fElectronPdf; }
  Double_t		GetMuonPdf()     const { return fMuonPdf; }
  Double_t		GetPionPdf()     const { return fPionPdf; } 
  Double_t		GetKaonPdf()     const { return fKaonPdf; }
  Double_t		GetProtonPdf()   const { return fProtonPdf; }
  Int_t                 GetIndex()       const { return fIndex;}

  Double_t   GetElectronPidProb(ChnsPidProbability* flux = NULL) const { if(flux==NULL) return fElectronPdf/GetSumProb(flux); else return fElectronPdf * flux->GetElectronPdf() / GetSumProb(flux); }
  Double_t   GetMuonPidProb    (ChnsPidProbability* flux = NULL) const { if(flux==NULL) return fMuonPdf/GetSumProb(flux);     else return fMuonPdf     * flux->GetMuonPdf() / GetSumProb(flux); }
  Double_t   GetPionPidProb    (ChnsPidProbability* flux = NULL) const { if(flux==NULL) return fPionPdf/GetSumProb(flux);     else return fPionPdf     * flux->GetPionPdf() / GetSumProb(flux); } 
  Double_t   GetKaonPidProb    (ChnsPidProbability* flux = NULL) const { if(flux==NULL) return fKaonPdf/GetSumProb(flux);     else return fKaonPdf     * flux->GetKaonPdf() / GetSumProb(flux); }
  Double_t   GetProtonPidProb  (ChnsPidProbability* flux = NULL) const { if(flux==NULL) return fProtonPdf/GetSumProb(flux);   else return fProtonPdf   * flux->GetProtonPdf() / GetSumProb(flux); }

  Double_t   GetSumProb        (ChnsPidProbability* flux = NULL) const 
  { 
    if(flux==NULL) 
    return fElectronPdf + fMuonPdf + fPionPdf + fKaonPdf + fProtonPdf;
    else return 
      fElectronPdf * flux->GetElectronPdf() + 
      fMuonPdf     * flux->GetMuonPdf()     +
      fPionPdf     * flux->GetPionPdf()     +
      fKaonPdf     * flux->GetKaonPdf()     +
      fProtonPdf   * flux->GetProtonPdf(); 
  }
  
  void NormalizeTo(Double_t N=1.);
  
  void	SetElectronPdf(Double_t val) { fElectronPdf= (Double_t) val; }
  void	SetMuonPdf(Double_t val)     { fMuonPdf=     (Double_t) val; }
  void	SetPionPdf(Double_t val)     { fPionPdf=     (Double_t) val; } 
  void	SetKaonPdf(Double_t val)     { fKaonPdf=     (Double_t) val; }
  void	SetProtonPdf(Double_t val)   { fProtonPdf=   (Double_t) val; }
  void  SetIndex(Int_t idx)          { fIndex = idx; }

  ChnsPidProbability& operator*=(const ChnsPidProbability& a);
  ChnsPidProbability operator*(const ChnsPidProbability& a);
  
  void Print();
  void Reset();
 protected:
  
  Double_t		fElectronPdf; // e  Probability density function
  Double_t		fMuonPdf;     // mu Probability density function
  Double_t		fPionPdf;     // pi Probability density function
  Double_t		fKaonPdf;     // k  Probability density function
  Double_t		fProtonPdf;   // p  Probability density function
  Int_t       fIndex;       // Candidate Index
  ClassDef(ChnsPidProbability,3) // 
    
    };



#endif                                           


