//////////////////////////////////////////////////////////////////////////
//                                                                      //
// ChnsPidProbability	                                                  //
//                                                                      //
// Definition of the Panda pid probabilities .	                        //
//                                                                      //
// Author: Ralf Kliemt, Dresden/Turin/Bonn, 01.09.09                    //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "ChnsPidProbability.h"


ChnsPidProbability::ChnsPidProbability() :
  fElectronPdf(0.2),
  fMuonPdf(0.2),
  fPionPdf(0.2),
  fKaonPdf(0.2),
  fProtonPdf(0.2),
  fIndex(-1)
{}

ChnsPidProbability::ChnsPidProbability(Double_t e, Double_t mu, Double_t pi, Double_t k, Double_t p, Int_t idx) :
  fElectronPdf(e),
  fMuonPdf(mu),
  fPionPdf(pi),
  fKaonPdf(k),
  fProtonPdf(p),
  fIndex(idx)
{}

ChnsPidProbability::~ChnsPidProbability()
{
}

ChnsPidProbability ChnsPidProbability::operator*(const ChnsPidProbability& a)
{
  return ChnsPidProbability(
                           a.GetElectronPdf() * fElectronPdf,
                           a.GetMuonPdf()     * fMuonPdf,
                           a.GetPionPdf()     * fPionPdf,
                           a.GetKaonPdf()     * fKaonPdf,
                           a.GetProtonPdf()   * fProtonPdf,
                           a.GetIndex()  );
}
ChnsPidProbability& ChnsPidProbability::operator*=(const ChnsPidProbability& a)
{
  fElectronPdf *= a.GetElectronPdf();
  fMuonPdf     *= a.GetMuonPdf();
  fPionPdf     *= a.GetPionPdf();
  fKaonPdf     *= a.GetKaonPdf();
  fProtonPdf   *= a.GetProtonPdf();
  return *this;
}

void ChnsPidProbability::Print()
{
  std::cout <<"ChnsPidProbability pdf's:   "
  <<"p(e)="<<fElectronPdf<<"  "
  <<"p(mu)="<<fMuonPdf<<"  "
  <<"p(pi)="<<fPionPdf<<"  "
  <<"p(K)="<<fKaonPdf<<"  "
  <<"p(P)="<<fProtonPdf<<"  "
  <<"index="<<fIndex
  <<std::endl;
}

void ChnsPidProbability::Reset()
{
  fElectronPdf = 0.2 ;
  fMuonPdf = 0.2 ;
  fPionPdf = 0.2 ;
  fKaonPdf = 0.2 ;
  fProtonPdf = 0.2 ;
  fIndex = -1;
}

void ChnsPidProbability::NormalizeTo(Double_t N)
{
  Double_t scalefactor = GetSumProb();
  if (scalefactor == 0) return;
  scalefactor = N / scalefactor;
  fElectronPdf*=scalefactor;
  fMuonPdf*=scalefactor;
  fPionPdf*=scalefactor;
  fKaonPdf*=scalefactor;
  fProtonPdf*=scalefactor;
  return;
}


ClassImp(ChnsPidProbability)

