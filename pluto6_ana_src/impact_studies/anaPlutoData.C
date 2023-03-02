#define anaPlutoData_cxx
// The class definition in anaPlutoData.h has been generated automatically
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
// root> T->Process("anaPlutoData.C")
// root> T->Process("anaPlutoData.C","some options")
// root> T->Process("anaPlutoData.C+")
//


#include "anaPlutoData.h"
#include <TH2.h>
#include <TStyle.h>

#include <TVector3.h>
#include <vector>
#include <cmath>




void anaPlutoData::Begin(TTree * /*tree*/)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

   _mpi0 = 0.1349768;
   _mpip = 0.13957039;
   _meta = 0.547862;
   _Qeta = _meta - 2*_mpip - _mpi0;

   s = t = u = 0;
   X = Y = 0;
   twogamma_angle = 0;

   M2EpG = M2EmG = M2EpEm = 0;

   L = 0;
   TOF200 = 0;
   TOF500 = 0;
   TOF1000 = 0;
   beta200_gamma = 0;
   beta500_gamma = 0;
   beta1000_gamma = 0;

   Egamma1 = 0;
   thetagamma1 = 0;

   random3 = new TRandom3(321);


   fileout = new TFile("/data2/rwang/githubs/HIAF-etaFactory-Simulations-localData/Eta_1.8GeV.root","recreate");
   tree = new TTree("tree","analysis results");
   tree->Branch("s", &s, "s/D");
   tree->Branch("t", &t, "t/D");
   tree->Branch("u", &u, "u/D");
   tree->Branch("twogamma_angle", &twogamma_angle, "twogamma_angle/D");
   tree->Branch("X", &X, "X/D");
   tree->Branch("Y", &Y, "Y/D");
//   tree->Branch("M2EpG", &M2EpG, "M2EpG/D");
//   tree->Branch("M2EmG", &M2EmG, "M2EmG/D");
//   tree->Branch("M2EpEm", &M2EpEm, "M2EpEm/D");
//   tree->Branch("beta200_gamma",  &beta200_gamma,  "beta200_gamma/D");
//   tree->Branch("beta500_gamma",  &beta500_gamma,  "beta500_gamma/D");
//   tree->Branch("beta1000_gamma", &beta1000_gamma, "beta1000_gamma/D");
   tree->Branch("Egamma1", &Egamma1, "Egamma1/D");
   tree->Branch("thetagamma1", &thetagamma1, "thetagamma1/D");



}

void anaPlutoData::SlaveBegin(TTree * /*tree*/)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

}



Bool_t anaPlutoData::Process(Long64_t entry)
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

   int N = Particles_pid.GetSize();
   TLorentzVector pip;
   TLorentzVector pim;
   TLorentzVector pi0;
   TLorentzVector ep, em;

   vector<TLorentzVector> gammas;
   TLorentzVector gamma;
   vector<TVector3> v3gammas;
   TVector3 gammav3;



   gammas.clear();
   v3gammas.clear();

   for(int i=0;i<N;i++){
	   if(Particles_pid[i]==7)pi0.SetPxPyPzE(Particles_TLorentzVector[i].Px(),
			                         Particles_TLorentzVector[i].Py(),
						 Particles_TLorentzVector[i].Pz(),
						 Particles_TLorentzVector[i].E() );
	   else if(Particles_pid[i]==8)pip.SetPxPyPzE(Particles_TLorentzVector[i].Px(),
                                                    Particles_TLorentzVector[i].Py(),
                                                    Particles_TLorentzVector[i].Pz(),
                                                    Particles_TLorentzVector[i].E() );
	   else if(Particles_pid[i]==9)pim.SetPxPyPzE(Particles_TLorentzVector[i].Px(),
                                                    Particles_TLorentzVector[i].Py(),
                                                    Particles_TLorentzVector[i].Pz(),
                                                    Particles_TLorentzVector[i].E() );
	   else if(Particles_pid[i]==1){
	   	   gamma.SetPxPyPzE(Particles_TLorentzVector[i].Px(),
			            Particles_TLorentzVector[i].Py(),
				    Particles_TLorentzVector[i].Pz(),
				    Particles_TLorentzVector[i].E() );
		   gammas.push_back(gamma);
  		   gammav3.SetXYZ(Particles_TLorentzVector[i].Px(),Particles_TLorentzVector[i].Py(),Particles_TLorentzVector[i].Pz());
		   v3gammas.push_back(gammav3);
	   }
	   else if(Particles_pid[i]==2)ep.SetPxPyPzE(Particles_TLorentzVector[i].Px(),
			                         Particles_TLorentzVector[i].Py(),
						 Particles_TLorentzVector[i].Pz(),
						 Particles_TLorentzVector[i].E() );
	   else if(Particles_pid[i]==3)em.SetPxPyPzE(Particles_TLorentzVector[i].Px(),
			                         Particles_TLorentzVector[i].Py(),
						 Particles_TLorentzVector[i].Pz(),
						 Particles_TLorentzVector[i].E() );
	   else {}


   }


   if(pip.M()>0.01){
      s = (pip + pim).M2();
      t = (pim + pi0).M2();
      u = (pip + pi0).M2();
      X = (u-t) * sqrt(3) / 2.0 / _meta / _Qeta;
      Y = 3.0/2.0/_meta/_Qeta * ((_meta-_mpi0)*(_meta-_mpi0)-s) - 1;
   }


   beta200_gamma = beta500_gamma = beta1000_gamma = 0;
   if(v3gammas.size()>=2){
      thetagamma1 = v3gammas.at(0).Theta();
      if(v3gammas.at(0).Theta()*TMath::RadToDeg()>17)  L = 30 / sin(v3gammas.at(0).Theta()) + 5;
      else L = 100 / cos(v3gammas.at(0).Theta()) + 5;

      double _time = L/30.0;
      double _delta = random3->Gaus(0, 0.2);
      if(_delta<(-0.95*_time)) _delta = -0.99*_time;
      TOF200  = _time + _delta;

      _delta = random3->Gaus(0, 0.5);
      if(_delta<(-0.95*_time)) _delta = -0.99*_time;
      TOF500  = _time + _delta;
      
      _delta = random3->Gaus(0, 1);
      if(_delta<(-0.95*_time)) _delta = -0.99*_time;
      TOF1000 = _time + _delta;
      
      beta200_gamma = L / TOF200 / 30.0;
      beta500_gamma = L / TOF500 / 30.0;
      beta1000_gamma = L / TOF1000 / 30.0;

      Egamma1 = v3gammas.at(0).Mag();

      twogamma_angle = acos(  v3gammas.at(0).Dot(v3gammas.at(1))/v3gammas.at(0).Mag()/v3gammas.at(1).Mag()  );
   }

   if(ep.M()>1e-6){
      M2EpG  = (ep + gamma).M2();
      M2EmG  = (em + gamma).M2();
      M2EpEm = (ep +    em).M2();
   }



   tree->Fill();



   return kTRUE;
}

void anaPlutoData::SlaveTerminate()
{
   // The SlaveTerminate() function is called after all entries or objects
   // have been processed. When running with PROOF SlaveTerminate() is called
   // on each slave server.

}

void anaPlutoData::Terminate()
{
   // The Terminate() function is the last function to be called during
   // a query. It always runs on the client, it can be used to present
   // the results graphically or save the results to file.


	fileout->cd();
	fileout->Write();
	fileout->Close();
}
