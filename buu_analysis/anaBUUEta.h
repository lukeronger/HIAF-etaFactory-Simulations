//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Nov 17 16:29:05 2022 by ROOT version 6.18/04
// from TTree buudata/IBUU
// found on file: ../data/BUU_eta_1.8GeV_all.mom.root
//////////////////////////////////////////////////////////

#ifndef anaBUUEta_h
#define anaBUUEta_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TTreeReader.h>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>

// Headers needed by this particular selector
#include "TLorentzVector.h"
#include "TH1D.h"
#include "TTree.h"


class anaBUUEta : public TSelector {
public :
   TTreeReader     fReader;  //!the tree reader
   TTree          *fChain = 0;   //!pointer to the analyzed TTree or TChain

   // Readers to access the data (delete the ones you do not need).
   TTreeReaderValue<Long64_t> eventNO = {fReader, "eventNO"};
   TTreeReaderValue<TLorentzVector> eta = {fReader, "eta"};
   TTreeReaderValue<TLorentzVector> eta_3piPip = {fReader, "eta_3piPip"};
   TTreeReaderValue<TLorentzVector> eta_3piPim = {fReader, "eta_3piPim"};
   TTreeReaderValue<TLorentzVector> eta_3piPi0 = {fReader, "eta_3piPi0"};
   TTreeReaderValue<TLorentzVector> eta_3piPi0Gamma1 = {fReader, "eta_3piPi0Gamma1"};
   TTreeReaderValue<TLorentzVector> eta_3piPi0Gamma2 = {fReader, "eta_3piPi0Gamma2"};
   TTreeReaderValue<TLorentzVector> eta_MuMuGGamma = {fReader, "eta_MuMuGGamma"};
   TTreeReaderValue<TLorentzVector> eta_MuMuGMup = {fReader, "eta_MuMuGMup"};
   TTreeReaderValue<TLorentzVector> eta_MuMuGMum = {fReader, "eta_MuMuGMum"};
   TTreeReaderValue<TLorentzVector> eta_EEGGamma = {fReader, "eta_EEGGamma"};
   TTreeReaderValue<TLorentzVector> eta_EEGEp = {fReader, "eta_EEGEp"};
   TTreeReaderValue<TLorentzVector> eta_EEGEm = {fReader, "eta_EEGEm"};




   double M2PipPi0, M2PimPi0, M2PipPim;
   double M2EpG, M2EmG, M2EpEm;

   TFile *outputfile;
   TTree *tree;
   TH1D *hmassmumu;




   anaBUUEta(TTree * /*tree*/ =0) { }
   virtual ~anaBUUEta() { }
   virtual Int_t   Version() const { return 2; }
   virtual void    Begin(TTree *tree);
   virtual void    SlaveBegin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Notify();
   virtual Bool_t  Process(Long64_t entry);
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
   virtual void    SetOption(const char *option) { fOption = option; }
   virtual void    SetObject(TObject *obj) { fObject = obj; }
   virtual void    SetInputList(TList *input) { fInput = input; }
   virtual TList  *GetOutputList() const { return fOutput; }
   virtual void    SlaveTerminate();
   virtual void    Terminate();

   ClassDef(anaBUUEta,0);

};

#endif

#ifdef anaBUUEta_cxx
void anaBUUEta::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the reader is initialized.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   fReader.SetTree(tree);
}

Bool_t anaBUUEta::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}


#endif // #ifdef anaBUUEta_cxx
