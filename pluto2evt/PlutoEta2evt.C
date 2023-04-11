#define PlutoEta2evt_cxx
// The class definition in PlutoEta2evt.h has been generated automatically
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
// root> T->Process("PlutoEta2evt.C")
// root> T->Process("PlutoEta2evt.C","some options")
// root> T->Process("PlutoEta2evt.C+")
//


#include<iostream>
#include<fstream>
using namespace std;

#include "PlutoEta2evt.h"
#include <TH2.h>
#include <TStyle.h>

void PlutoEta2evt::Begin(TTree * /*tree*/)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();
   evtout.open("../../HIAF-etaFactory-Simulations-localData/pluto6-data/pp_to_ppeta_PipPimPi0_1.8GeV_Random2023.root.evt");
}

void PlutoEta2evt::SlaveBegin(TTree * /*tree*/)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

}

Bool_t PlutoEta2evt::Process(Long64_t entry)
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
   vector<TVector3> v3gammas;
   TVector3 gammav3;

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
			gammav3.SetXYZ(Particles_TLorentzVector[i].Px(),Particles_TLorentzVector[i].Py(),Particles_TLorentzVector[i].Pz());
			v3gammas.push_back(gammav3);
	   }
	   else{}
   }

   evtout<<entry<<"\t"<<4<<endl;
   evtout<<"  "<<"N\t"<<"Id\t"<<"Ist\t"<<"M1\t"<<"M2\t"<<"DF\t"<<"DL\t";
   evtout<<"px\t"<<"py\t"<<"pz\t"<<"E\t"<<"t\t"<<"x\t"<<"y\t"<<"z"<<endl;

   evtout<<"  "<<0<<"\t"<<211<<"\t"<<1<<"\t"<<0<<"\t"<<0<<"\t"<<-1<<"\t"<<-1<<"\t";
   evtout<<pip.Px()<<" "<<pip.Py()<<" "<<pip.Pz()<<" "<<pip.E()<<" ";
   evtout<<0<<" "<<0<<" "<<0<<" "<<0<<endl;

   evtout<<"  "<<1<<"\t"<<-211<<"\t"<<1<<"\t"<<0<<"\t"<<0<<"\t"<<-1<<"\t"<<-1<<"\t";
   evtout<<pim.Px()<<" "<<pim.Py()<<" "<<pim.Pz()<<" "<<pim.E()<<" ";
   evtout<<0<<" "<<0<<" "<<0<<" "<<0<<endl;

   evtout<<"  "<<2<<"\t"<<22<<"\t"<<1<<"\t"<<0<<"\t"<<0<<"\t"<<-1<<"\t"<<-1<<"\t";
   evtout<<v3gammas.at(0).Px()<<" "<<v3gammas.at(0).Py()<<" "<<v3gammas.at(0).Pz()<<" "<<v3gammas.at(0).Mag()<<" ";
   evtout<<0<<" "<<0<<" "<<0<<" "<<0<<endl;

   evtout<<"  "<<3<<"\t"<<22<<"\t"<<1<<"\t"<<0<<"\t"<<0<<"\t"<<-1<<"\t"<<-1<<"\t";
   evtout<<v3gammas.at(1).Px()<<" "<<v3gammas.at(1).Py()<<" "<<v3gammas.at(1).Pz()<<" "<<v3gammas.at(1).Mag()<<" ";
   evtout<<0<<" "<<0<<" "<<0<<" "<<0<<endl;


   return kTRUE;
}

void PlutoEta2evt::SlaveTerminate()
{
   // The SlaveTerminate() function is called after all entries or objects
   // have been processed. When running with PROOF SlaveTerminate() is called
   // on each slave server.

}

void PlutoEta2evt::Terminate()
{
   // The Terminate() function is the last function to be called during
   // a query. It always runs on the client, it can be used to present
   // the results graphically or save the results to file.
   evtout.close();
}
