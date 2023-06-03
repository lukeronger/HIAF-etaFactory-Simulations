//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Feb 21 21:50:48 2023 by ROOT version 6.18/04
// from TTree RootTuple/RootTuple
// found on file: ../../release/testRun2/EventOutput.Real.00000001.root
//////////////////////////////////////////////////////////

#ifndef GiBUUn2Evt_h
#define GiBUUn2Evt_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TTreeReader.h>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>

#include <TGenPhaseSpace.h>
#include <TLorentzVector.h>

#include <fstream>

// Headers needed by this particular selector
#include <vector>



class GiBUUn2Evt : public TSelector {
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

   ofstream *fout;
   ofstream *fout_pi0;
   int Nn;
   int Npi0;

   TGenPhaseSpace *event;

   GiBUUn2Evt(TTree * /*tree*/ =0) { }
   virtual ~GiBUUn2Evt() { }
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

   ClassDef(GiBUUn2Evt,0);

};

#endif

#ifdef GiBUUn2Evt_cxx
void GiBUUn2Evt::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the reader is initialized.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   fReader.SetTree(tree);
}

Bool_t GiBUUn2Evt::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}


#endif // #ifdef GiBUUn2Evt_cxx
