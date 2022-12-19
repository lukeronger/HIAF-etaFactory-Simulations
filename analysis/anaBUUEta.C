#define anaBUUEta_cxx
// The class definition in anaBUUEta.h has been generated automatically
// by the ROOT utility TTree::MakeSelector(). This class is derived
// from the ROOT class TSelector. For more information on the TSelector
// framework see $ROOTSYS/README/README.SELECTOR or the ROOT User Manual.


// The following methods are defined in this file:
//    Begin():        called every time a loop on the tree starts,
//                    a convenient place to create your histograms.
//    SlaveBegin():   called after Begin(), when on PROOF called only on the
//                    slave servers.
//    Process():      called for each event, in this function you decide what
//                    to read and fill your histograms.
//    SlaveTerminate: called at the end of the loop on the tree, when on PROOF
//                    called only on the slave servers.
//    Terminate():    called at the end of the loop on the tree,
//                    a convenient place to draw/fit your histograms.
//
// To use this file, try the following session on your Tree T:
//
// root> T->Process("anaBUUEta.C")
// root> T->Process("anaBUUEta.C","some options")
// root> T->Process("anaBUUEta.C+")
//


#include "anaBUUEta.h"
#include <TH2.h>
#include <TStyle.h>

void anaBUUEta::Begin(TTree * /*tree*/)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

   M2PipPi0 = M2PimPi0 = M2PipPim = 0;
   M2EpG = M2EmG = M2EpEm = 0;

   outputfile = new TFile("output.root", "recreate");
   hmassmumu = new TH1D("hmassmumu","",100,0,1);
   tree = new TTree("tree","analysis results");
   tree->Branch("M2PipPi0", &M2PipPi0, "M2PipPi0/D");
   tree->Branch("M2PimPi0", &M2PimPi0, "M2PimPi0/D");
   tree->Branch("M2PipPim", &M2PipPim, "M2PipPim/D");
   tree->Branch("M2EpG", &M2EpG, "M2EpG/D");
   tree->Branch("M2EmG", &M2EmG, "M2EmG/D");
   tree->Branch("M2EpEm", &M2EpEm, "M2EpEm/D");


}

void anaBUUEta::SlaveBegin(TTree * /*tree*/)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

}

Bool_t anaBUUEta::Process(Long64_t entry)
{
   // The Process() function is called for each entry in the tree (or possibly
   // keyed object in the case of PROOF) to be processed. The entry argument
   // specifies which entry in the currently loaded tree is to be processed.
   // When processing keyed objects with PROOF, the object is already loaded
   // and is available via the fObject pointer.
   //
   // This function should contain the \"body\" of the analysis. It can contain
   // simple or elaborate selection criteria, run algorithms on the data
   // of the event and typically fill histograms.
   //
   // The processing can be stopped by calling Abort().
   //
   // Use fStatus to set the return value of TTree::Process().
   //
   // The return value is currently not used.

   fReader.SetLocalEntry(entry);


   M2PipPi0 = ((*eta_3piPip) + (*eta_3piPi0)).M2();
   M2PimPi0 = ((*eta_3piPim) + (*eta_3piPi0)).M2();
   M2PipPim = ((*eta_3piPip) + (*eta_3piPim)).M2();
   M2EpG    = ((*eta_EEGEp)  + (*eta_EEGGamma)).M2();
   M2EmG    = ((*eta_EEGEm)  + (*eta_EEGGamma)).M2();
   M2EpEm   = ((*eta_EEGEp)  + (*eta_EEGEm)).M2();

   tree->Fill();

   TLorentzVector mup_and_mum = (*eta_MuMuGMup) + (*eta_MuMuGMum);
   hmassmumu->Fill( mup_and_mum.M() );


   return kTRUE;
}

void anaBUUEta::SlaveTerminate()
{
   // The SlaveTerminate() function is called after all entries or objects
   // have been processed. When running with PROOF SlaveTerminate() is called
   // on each slave server.

}

void anaBUUEta::Terminate()
{
   // The Terminate() function is the last function to be called during
   // a query. It always runs on the client, it can be used to present
   // the results graphically or save the results to file.

	outputfile->cd();
	hmassmumu->Write();
	tree->Write();
	outputfile->Close();
}
