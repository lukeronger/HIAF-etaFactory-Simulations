#define anaGiBUU_cxx
// The class definition in anaGiBUU.h has been generated automatically
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
// root> T->Process("anaGiBUU.C")
// root> T->Process("anaGiBUU.C","some options")
// root> T->Process("anaGiBUU.C+")
//


#include "anaGiBUU.h"
#include <TH2.h>
#include <TStyle.h>

#include <iostream>
using namespace std;



void anaGiBUU::Begin(TTree * /*tree*/)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();


   L = 0;
   TOF200 = 0;
   TOF500 = 0;
   TOF1000 = 0;
   beta200_n = 0;
   beta500_n = 0;
   beta1000_n = 0;

   KineEn = 0;
   thetan = 0;
   massn = 0;

   random3 = new TRandom3(321);


   file = new TFile("GiBUU_p7Li_1.8GeV.root","recreate");
   tree = new TTree("tree","analysis results GiBUU");
   tree->Branch("beta200_n",  &beta200_n,  "beta200_n/D");
   tree->Branch("beta500_n",  &beta500_n,  "beta500_n/D");
   tree->Branch("beta1000_n", &beta1000_n, "beta1000_n/D");
   tree->Branch("KineEn", &KineEn, "KineEn/D");
   tree->Branch("thetan", &thetan, "thetan/D");
   tree->Branch("massn", &massn, "massn/D");

}

void anaGiBUU::SlaveBegin(TTree * /*tree*/)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

}

Bool_t anaGiBUU::Process(Long64_t entry)
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

   //cout<<barcode[0]<<endl;


   beta200_n = beta500_n = beta1000_n = 0;
   if(barcode[0] == 2112){
      KineEn = E[0] - 0.939;

      double _P = sqrt(Px[0]*Px[0] + Py[0]*Py[0] + Pz[0]*Pz[0]);
      double _theta = acos(Pz[0]/_P);
      thetan = _theta;
      massn = sqrt(E[0]*E[0] - _P*_P);

      if(_theta*TMath::RadToDeg()>17)  L = 30 / sin(_theta) + 5;
      else L = 100 / cos(_theta) + 5;

      double _beta = _P / E[0];
      double _time = L / 30.0 / _beta;
      double _delta = random3->Gaus(0, 0.2);
      if(_delta<(-0.95*_time)) _delta = -0.99*_time;
      TOF200  = _time + _delta;

      _delta = random3->Gaus(0, 0.5);
      if(_delta<(-0.95*_time)) _delta = -0.99*_time;
      TOF500  = _time + _delta;
      
      _delta = random3->Gaus(0, 1);
      if(_delta<(-0.95*_time)) _delta = -0.99*_time;
      TOF1000 = _time + _delta;
      
      beta200_n = L / TOF200 / 30.0;
      beta500_n = L / TOF500 / 30.0;
      beta1000_n = L / TOF1000 / 30.0;
   }


   tree->Fill();






   return kTRUE;
}

void anaGiBUU::SlaveTerminate()
{
   // The SlaveTerminate() function is called after all entries or objects
   // have been processed. When running with PROOF SlaveTerminate() is called
   // on each slave server.

}

void anaGiBUU::Terminate()
{
   // The Terminate() function is the last function to be called during
   // a query. It always runs on the client, it can be used to present
   // the results graphically or save the results to file.

	file->cd();
	file->Write();
	file->Close();
}
