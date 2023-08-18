//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Oct 10 16:38:58 2022 by ROOT version 6.18/04
// from TTree data/event branch
// found on file: ../../hiaf_MCdata/pp_to_ppeta_PipPimPi0_1.8GeV.root
//////////////////////////////////////////////////////////

#ifndef PlutoEtaDarkPhotonEEG2evt_h
#define PlutoEtaDarkPhotonEEG2evt_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TTreeReader.h>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>

// Headers needed by this particular selector
#include "TClonesArray.h"

#include <TLorentzVector.h>
#include <TVector3.h>

#include <TGenPhaseSpace.h>
#include <TRandom3.h>

#include<iostream>
#include<fstream>
using namespace std;

class PlutoEtaDarkPhotonEEG2evt : public TSelector {
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

   ofstream evtout;
   TGenPhaseSpace *phase_generator;
   TRandom3 *random3;
   double mDarkPhoton = 0.1;

   PlutoEtaDarkPhotonEEG2evt(TTree * /*tree*/ =0) { }
   virtual ~PlutoEtaDarkPhotonEEG2evt() { }
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

   ClassDef(PlutoEtaDarkPhotonEEG2evt,0);

};

#endif

#ifdef PlutoEtaDarkPhotonEEG2evt_cxx
void PlutoEtaDarkPhotonEEG2evt::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the reader is initialized.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   fReader.SetTree(tree);
}

Bool_t PlutoEtaDarkPhotonEEG2evt::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}


#endif // #ifdef PlutoEtaDarkPhotonEEG2evt_cxx
