//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu May 23 15:07:51 2024 by ROOT version 6.18/04
// from TTree tree/selection of 3He pi+ pi- gamma1 gamma2
// found on file: ../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/HIAF-pdTo3HeEta-3piChannel-part1.root
//////////////////////////////////////////////////////////

#ifndef ana_h
#define ana_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TTreeReader.h>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>

// Headers needed by this particular selector
#include "TLorentzVector.h"



class ana : public TSelector {
public :
   TTreeReader     fReader;  //!the tree reader
   TTree          *fChain = 0;   //!pointer to the analyzed TTree or TChain

   // Readers to access the data (delete the ones you do not need).
   TTreeReaderValue<Int_t> N3He_MC = {fReader, "N3He_MC"};
   TTreeReaderValue<Int_t> Npip_MC = {fReader, "Npip_MC"};
   TTreeReaderValue<Int_t> Npim_MC = {fReader, "Npim_MC"};
   TTreeReaderValue<Int_t> Ngamma_MC = {fReader, "Ngamma_MC"};
   TTreeReaderValue<Int_t> N3He_REC = {fReader, "N3He_REC"};
   TTreeReaderValue<Int_t> Npip_REC = {fReader, "Npip_REC"};
   TTreeReaderValue<Int_t> Npim_REC = {fReader, "Npim_REC"};
   TTreeReaderValue<Int_t> Ngamma_REC = {fReader, "Ngamma_REC"};
   TTreeReaderValue<TLorentzVector> He3_MC = {fReader, "He3_MC"};
   TTreeReaderValue<TLorentzVector> Pip_MC = {fReader, "Pip_MC"};
   TTreeReaderValue<TLorentzVector> Pim_MC = {fReader, "Pim_MC"};
   TTreeReaderValue<TLorentzVector> Gamma1_MC = {fReader, "Gamma1_MC"};
   TTreeReaderValue<TLorentzVector> Gamma2_MC = {fReader, "Gamma2_MC"};
   TTreeReaderValue<TLorentzVector> He3_REC = {fReader, "He3_REC"};
   TTreeReaderValue<TLorentzVector> Pip_REC = {fReader, "Pip_REC"};
   TTreeReaderValue<TLorentzVector> Pim_REC = {fReader, "Pim_REC"};
   TTreeReaderValue<TLorentzVector> Gamma1_REC = {fReader, "Gamma1_REC"};
   TTreeReaderValue<TLorentzVector> Gamma2_REC = {fReader, "Gamma2_REC"};


   ana(TTree * /*tree*/ =0) { }
   virtual ~ana() { }
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

   ClassDef(ana,0);

};

#endif

#ifdef ana_cxx
void ana::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the reader is initialized.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   fReader.SetTree(tree);
}

Bool_t ana::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}


#endif // #ifdef ana_cxx
