//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Mar 15 20:51:40 2022 by ROOT version 6.18/04
// from TTree data/event branch
// found on file: ../macros/pp_to_ppeta_PipPimPi0.root
//////////////////////////////////////////////////////////

#ifndef anaPlutoData_h
#define anaPlutoData_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TTreeReader.h>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>

#include <TLorentzVector.h>

#include <TVector3.h>
// Headers needed by this particular selector
#include "TClonesArray.h"



class anaPlutoData : public TSelector {
public :
   TTreeReader     fReader;  //!the tree reader
   TTree          *fChain = 0;   //!pointer to the analyzed TTree or TChain

   // Readers to access the data (delete the ones you do not need).
   TTreeReaderValue<Int_t> Npart = {fReader, "Npart"};
   TTreeReaderValue<Double_t> Impact = {fReader, "Impact"};
   TTreeReaderValue<Double_t> Phi = {fReader, "Phi"};
   TTreeReaderArray<TLorentzVector> Particles_TLorentzVector = {fReader, "Particles.TLorentzVector"};
   TTreeReaderArray<Int_t> Particles_pid = {fReader, "Particles.pid"};
   TTreeReaderArray<Int_t> Particles_sourceId = {fReader, "Particles.sourceId"};
   TTreeReaderArray<Int_t> Particles_parentId = {fReader, "Particles.parentId"};
   TTreeReaderArray<Int_t> Particles_parentIndex = {fReader, "Particles.parentIndex"};
   TTreeReaderArray<Int_t> Particles_decayModeIndex = {fReader, "Particles.decayModeIndex"};
   TTreeReaderArray<Int_t> Particles_destroyDecayModeIndex = {fReader, "Particles.destroyDecayModeIndex"};
   TTreeReaderArray<Int_t> Particles_daughterIndex = {fReader, "Particles.daughterIndex"};
   TTreeReaderArray<Int_t> Particles_siblingIndex = {fReader, "Particles.siblingIndex"};
   TTreeReaderArray<Double_t> Particles_decayTime = {fReader, "Particles.decayTime"};
   TTreeReaderArray<Double_t> Particles_wt = {fReader, "Particles.wt"};
   TTreeReaderArray<TVector3> Particles_fV = {fReader, "Particles.fV"};
   TTreeReaderArray<Double_t> Particles_fT = {fReader, "Particles.fT"};

   double _mpi0, _mpip, _meta;
   double _Qeta;
   double s, t, u, twogamma_angle;
   double X, Y;

   double M2EpG, M2EmG, M2EpEm;

   TFile *fileout;
   TTree *tree;



   anaPlutoData(TTree * /*tree*/ =0) { }
   virtual ~anaPlutoData() { }
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

   ClassDef(anaPlutoData,0);

};

#endif

#ifdef anaPlutoData_cxx
void anaPlutoData::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the reader is initialized.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   fReader.SetTree(tree);
}

Bool_t anaPlutoData::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}


#endif // #ifdef anaPlutoData_cxx
