//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sat May 13 20:06:33 2023 by ROOT version 6.18/04
// from TTree RootTuple/RootTuple
// found on file: /data/rwang/simulation_works/HIAF-etaFactory-Simulations-localData2/GiBUU-data/EventOutput.Real.00000001.root
//////////////////////////////////////////////////////////

#ifndef GiBUU2evt_h
#define GiBUU2evt_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TTreeReader.h>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>

// Headers needed by this particular selector
#include <vector>


#include <TTree.h>
#include <TLorentzVector.h>
#include <TGenPhaseSpace.h>
#include <TRandom3.h>
#include <fstream>

class GiBUU2evt : public TSelector {
public :
   TTreeReader     fReader;  //!the tree reader
   TTree          *fChain = 0;   //!pointer to the analyzed TTree or TChain

   // Readers to access the data (delete the ones you do not need).
   TTreeReaderValue<Double_t> weight = {fReader, "weight"};
   TTreeReaderArray<int> barcode = {fReader, "barcode"};
   TTreeReaderArray<double> Px = {fReader, "Px"};
   TTreeReaderArray<double> Py = {fReader, "Py"};
   TTreeReaderArray<double> Pz = {fReader, "Pz"};
   TTreeReaderArray<double> E = {fReader, "E"};
   TTreeReaderValue<Double_t> b = {fReader, "b"};


   GiBUU2evt(TTree * /*tree*/ =0) { }
   virtual ~GiBUU2evt() { }
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

   ClassDef(GiBUU2evt,0);



   long Nevents;
   double BR_pi0_2gammas;
   double BR_pi0_epgamma;

   ofstream *file_evt;
   TGenPhaseSpace *phase_generator;
   TRandom3 *random3;
   TF1 *dileptonMassDist_TF1;
};

#endif

#ifdef GiBUU2evt_cxx
void GiBUU2evt::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the reader is initialized.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   fReader.SetTree(tree);
}

Bool_t GiBUU2evt::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}


#endif // #ifdef GiBUU2evt_cxx
