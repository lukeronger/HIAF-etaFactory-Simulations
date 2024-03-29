#define GiBUUn2Evt_cxx
// The class definition in GiBUUn2Evt.h has been generated automatically
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
// root> T->Process("GiBUUn2Evt.C")
// root> T->Process("GiBUUn2Evt.C","some options")
// root> T->Process("GiBUUn2Evt.C+")
//


#include "GiBUUn2Evt.h"
#include <TH2.h>
#include <TStyle.h>
#include <string.h>
#include <TString.h>

void GiBUUn2Evt::Begin(TTree * /*tree*/)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

   TString directory_path = "/data/rwang/simulation_works/HIAF-etaFactory-Simulations-localData2/GiBUU-data/evt-data/";
   fout = new ofstream(directory_path + "n_v2.evt");
   fout_pi0 = new ofstream(directory_path + "pi0_gamma_v2.evt");
   Nn = Npi0 = 0;

   event = new TGenPhaseSpace();
}

void GiBUUn2Evt::SlaveBegin(TTree * /*tree*/)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

}

Bool_t GiBUUn2Evt::Process(Long64_t entry)
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


   int N = barcode.GetSize();
   //cout<<N<<endl;
   for(int i=0; i<N; i++){
	   //cout<<barcode[i]<<endl;

	   if(barcode[i]==2112){
		   (*fout)<<Nn<<"\t"<<1<<endl;
		   (*fout)<<"  "<<"N\t"<<"Id\t"<<"Ist\t"<<"M1\t"<<"M2\t"<<"DF\t"<<"DL\t";
		   (*fout)<<"px\t"<<"py\t"<<"pz\t"<<"E\t"<<"t\t"<<"x\t"<<"y\t"<<"z"<<endl;
		   (*fout)<<"  "<<0<<"\t"<<2112<<"\t"<<1<<"\t"<<0<<"\t"<<0<<"\t"<<-1<<"\t"<<-1<<"\t";
		   (*fout)<<Px[i]<<" "<<Py[i]<<" "<<Pz[i]<<" "<<E[i]<<" ";
		   (*fout)<<0<<" "<<0<<" "<<0<<" "<<0<<endl;
		   Nn++;
	   }

	   if(barcode[i]==111){
		   TLorentzVector W(Px[i], Py[i], Pz[i], E[i]);
		   double masses[2] = {0, 0};
		   event->SetDecay(W, 2, masses);
		   double weight = event->Generate();

		   (*fout_pi0)<<Npi0<<"\t"<<2<<endl;
		   (*fout_pi0)<<"  "<<"N\t"<<"Id\t"<<"Ist\t"<<"M1\t"<<"M2\t"<<"DF\t"<<"DL\t";
		   (*fout_pi0)<<"px\t"<<"py\t"<<"pz\t"<<"E\t"<<"t\t"<<"x\t"<<"y\t"<<"z"<<endl;
		   (*fout_pi0)<<"  "<<0<<"\t"<<22<<"\t"<<1<<"\t"<<0<<"\t"<<0<<"\t"<<-1<<"\t"<<-1<<"\t";
		   (*fout_pi0)<<(event->GetDecay(0)->Px())<<" "<<(event->GetDecay(0)->Py())<<" "<<(event->GetDecay(0)->Pz())<<" "<<(event->GetDecay(0)->E())<<" ";
		   (*fout_pi0)<<0<<" "<<0<<" "<<0<<" "<<0<<endl;
		   (*fout_pi0)<<"  "<<1<<"\t"<<22<<"\t"<<1<<"\t"<<0<<"\t"<<0<<"\t"<<-1<<"\t"<<-1<<"\t";
		   (*fout_pi0)<<(event->GetDecay(1)->Px())<<" "<<(event->GetDecay(1)->Py())<<" "<<(event->GetDecay(1)->Pz())<<" "<<(event->GetDecay(1)->E())<<" ";
		   (*fout_pi0)<<0<<" "<<0<<" "<<0<<" "<<0<<endl;


		   Npi0++;
	   }


   }



   return kTRUE;
}

void GiBUUn2Evt::SlaveTerminate()
{
   // The SlaveTerminate() function is called after all entries or objects
   // have been processed. When running with PROOF SlaveTerminate() is called
   // on each slave server.

}

void GiBUUn2Evt::Terminate()
{
   // The Terminate() function is the last function to be called during
   // a query. It always runs on the client, it can be used to present
   // the results graphically or save the results to file.

	fout->close();
	fout_pi0->close();
}
