//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Jan 10 15:44:42 2023 by ROOT version 6.18/04
// from TTree RootTuple/RootTuple
// found on file: ../../release/testRun2/EventOutput.Real.00000001.root
//////////////////////////////////////////////////////////

#ifndef anaGiBUU_h
#define anaGiBUU_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TTreeReader.h>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>

// Headers needed by this particular selector
#include <vector>


#include "TFile.h"
#include "TTree.h"
#include "TRandom3.h"


class anaGiBUU : public TSelector {
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


   TFile *file;
   TTree *tree;

   TRandom3 *random3;

   double KineEn, thetan, massn;
   double L, TOF200, TOF500, TOF1000, beta200_n, beta500_n, beta1000_n;




   anaGiBUU(TTree * /*tree*/ =0) { }
   virtual ~anaGiBUU() { }
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

   ClassDef(anaGiBUU,0);

};

#endif

#ifdef anaGiBUU_cxx
void anaGiBUU::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the reader is initialized.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   fReader.SetTree(tree);
}

Bool_t anaGiBUU::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}


#endif // #ifdef anaGiBUU_cxx
