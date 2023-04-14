#define anaDataBG_cxx
// The class definition in anaDataBG.h has been generated automatically
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
// root> T->Process("anaDataBG.C")
// root> T->Process("anaDataBG.C","some options")
// root> T->Process("anaDataBG.C+")
//

#include <vector>


#include "anaDataBG.h"
#include <TH2.h>
#include <TStyle.h>

#include <TLorentzVector.h>

void anaDataBG::Begin(TTree * /*tree*/)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();


   Nevents = Npip = Npim = Npi0 = Npippimpi0 = 0;

   out_file = new TFile("hiaf-bg-results.root","recreate");
   hm3pi = new TH1F("hm3pi","hm3pi",500,  0, 3);
   hm2gammas = new TH1F("hm2gammas","hm2gammas",500,  0, 3);

}

void anaDataBG::SlaveBegin(TTree * /*tree*/)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

}

Bool_t anaDataBG::Process(Long64_t entry)
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


   int npip = 0;
   int npim = 0;
   int npi0 = 0;
   int ngamma = 0;
   TLorentzVector pip;
   TLorentzVector pim;
   TLorentzVector pi0;
   TLorentzVector gamma;
   vector<TLorentzVector> gammas;


   int instance = barcode.GetSize();

   gammas.clear();
   for(int i=0; i<instance; i++){
	   if(barcode[i]==211){
		   npip++;
		   pip.SetXYZT(Px[i], Py[i], Pz[i], E[i]);
	   }
	   if(barcode[i]==-211){
		   npim++;
		   pim.SetXYZT(Px[i], Py[i], Pz[i], E[i]);
	   }
	   if(barcode[i]==111){
		   npi0++;
		   pi0.SetXYZT(Px[i], Py[i], Pz[i], E[i]);
	   }
	   if(barcode[i]==22){
		   ngamma++;
		   gamma.SetXYZT(Px[i], Py[i], Pz[i], E[i]);
		   gammas.push_back(gamma);
	   }
   }
   if(npip>0) Npip++;
   if(npim>0) Npim++;
   if(npi0>0) Npi0++;
   if(npip>0 && npim>0 && npi0>0){
	   Npippimpi0++;
	   hm3pi->Fill((pip+pim+pi0).M());
   }
   if(ngamma>=2){
	   hm2gammas->Fill((gammas.at(0)+gammas.at(1)).M());

   }
   Nevents++;





   return kTRUE;
}

void anaDataBG::SlaveTerminate()
{
   // The SlaveTerminate() function is called after all entries or objects
   // have been processed. When running with PROOF SlaveTerminate() is called
   // on each slave server.

}

void anaDataBG::Terminate()
{
   // The Terminate() function is the last function to be called during
   // a query. It always runs on the client, it can be used to present
   // the results graphically or save the results to file.
   out_file->cd();
   hm3pi->Write();
   hm2gammas->Write();
   out_file->Close();
   cout<<"Nevnets: "<<Nevents<<endl;
   cout<<"Npip: "<<Npip<<endl;
   cout<<"Npim: "<<Npim<<endl;
   cout<<"Npi0: "<<Npi0<<endl;
   cout<<"Npippimpi0: "<<Npippimpi0<<endl;


}
