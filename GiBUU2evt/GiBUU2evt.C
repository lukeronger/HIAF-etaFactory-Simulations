#define GiBUU2evt_cxx
// The class definition in GiBUU2evt.h has been generated automatically
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
// root> T->Process("GiBUU2evt.C")
// root> T->Process("GiBUU2evt.C","some options")
// root> T->Process("GiBUU2evt.C+")
//


#include "GiBUU2evt.h"
#include <TH2.h>
#include <TStyle.h>

void GiBUU2evt::Begin(TTree * /*tree*/)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

   TString directory_path = "/data/rwang/simulation_works/HIAF-etaFactory-Simulations-localData2/GiBUU-data/evt-data/";
   file_evt = new ofstream(directory_path + "GiBUU_final_states.evt");

   phase_generator = new TGenPhaseSpace();
   random3 = new TRandom3();   /// (342085);
   dileptonMassDist_TF1 = new TF1("dileptonMassDist_TF1","[0]*pow(x,[1])*pow(fabs(x-0.5478),[2])");
   dileptonMassDist_TF1->SetParameters(2.52264e+03, -8.64483e-01, 1.54142);

   Nevents = 0;
   BR_pi0_epgamma = 0.01174;
   BR_pi0_2gammas = 1.0 - BR_pi0_epgamma;
}



void GiBUU2evt::SlaveBegin(TTree * /*tree*/)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

}



Bool_t GiBUU2evt::Process(Long64_t entry)
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


   vector<TLorentzVector> protons;
   vector<TLorentzVector> neutrons;
   vector<TLorentzVector> pips;
   vector<TLorentzVector> pims;
   vector<TLorentzVector> pi0s;
   vector<TLorentzVector> Kps;
   protons.clear();
   neutrons.clear();
   pips.clear();
   pims.clear();
   pi0s.clear();
   Kps.clear();
   TLorentzVector vector4;

   int N = barcode.GetSize();
   //cout<<N<<endl;
   for(int i=0; i<N; i++){
	   //cout<<barcode[i]<<endl;

	   if(barcode[i]==2112  &&  (E[i]-0.93957)>0.001){
	   //if(barcode[i]==2112){
   		   vector4.SetXYZT(Px[i], Py[i], Pz[i], E[i]);
	   	   neutrons.push_back(vector4);
	   }
	   if(barcode[i]==2212  &&  (E[i]-0.93827)>0.001){
	   //if(barcode[i]==2212){
   		   vector4.SetXYZT(Px[i], Py[i], Pz[i], E[i]);
	   	   protons.push_back(vector4);
	   }
	   if(barcode[i]==211){
   		   vector4.SetXYZT(Px[i], Py[i], Pz[i], E[i]);
	   	   pips.push_back(vector4);
	   }
	   if(barcode[i]==-211){
   		   vector4.SetXYZT(Px[i], Py[i], Pz[i], E[i]);
	   	   pims.push_back(vector4);
	   }
	   if(barcode[i]==111){
   		   vector4.SetXYZT(Px[i], Py[i], Pz[i], E[i]);
	   	   pi0s.push_back(vector4);
	   }
	   if(barcode[i]==321){
   		   vector4.SetXYZT(Px[i], Py[i], Pz[i], E[i]);
	   	   Kps.push_back(vector4);
	   }
   }



   int Ntot = neutrons.size() + protons.size() + pips.size() + pims.size() + pi0s.size() + Kps.size();
   if(Ntot>0){
	   int i = 0;

	   vector<int> pi0DecayMode;
	   pi0DecayMode.clear();
	   int Npi0DecayFinals;
	   Npi0DecayFinals = 0;
	   for(int j=0;j<pi0s.size();j++){
		   if(random3->Rndm()<BR_pi0_epgamma) {
			   pi0DecayMode.push_back(0);
			   Npi0DecayFinals += 3;
		   }
		   else {
			   pi0DecayMode.push_back(1);
			   Npi0DecayFinals += 2;
		   }
	   }
	   int N = protons.size() + neutrons.size() + pips.size() + pims.size() + Kps.size();
	   N += Npi0DecayFinals;

	   (*file_evt)<<Nevents<<"\t"<<N<<endl;
	   (*file_evt)<<"  "<<"N\t"<<"Id\t"<<"Ist\t"<<"M1\t"<<"M2\t"<<"DF\t"<<"DL\t";
	   (*file_evt)<<"px\t"<<"py\t"<<"pz\t"<<"E\t"<<"t\t"<<"x\t"<<"y\t"<<"z"<<endl;

	   for(int j=0;j<pips.size();j++){
		   (*file_evt)<<"  "<<i<<"\t"<<211<<"\t"<<1<<"\t"<<0<<"\t"<<0<<"\t"<<-1<<"\t"<<-1<<"\t";
		   (*file_evt)<<pips[j].Px()<<" "<<pips[j].Py()<<" "<<pips[j].Pz()<<" "<<pips[j].E()<<" ";
		   (*file_evt)<<0<<" "<<0<<" "<<0<<" "<<0<<endl;
		   i++;
	   }
	   for(int j=0;j<pims.size();j++){
		   (*file_evt)<<"  "<<i<<"\t"<<-211<<"\t"<<1<<"\t"<<0<<"\t"<<0<<"\t"<<-1<<"\t"<<-1<<"\t";
		   (*file_evt)<<pims[j].Px()<<" "<<pims[j].Py()<<" "<<pims[j].Pz()<<" "<<pims[j].E()<<" ";
		   (*file_evt)<<0<<" "<<0<<" "<<0<<" "<<0<<endl;
		   i++;
	   }
	   for(int j=0;j<pi0s.size();j++){
		   if(pi0DecayMode.at(j) == 1){
			   TLorentzVector W(pi0s[j].Px(), pi0s[j].Py(), pi0s[j].Pz(), pi0s[j].E());
			   double masses[2] = {0, 0};
			   phase_generator->SetDecay(W, 2, masses);
			   double weight = phase_generator->Generate();

			   (*file_evt)<<"  "<<i<<"\t"<<22<<"\t"<<1<<"\t"<<0<<"\t"<<0<<"\t"<<-1<<"\t"<<-1<<"\t";
			   (*file_evt)<<(phase_generator->GetDecay(0)->Px())<<" "<<(phase_generator->GetDecay(0)->Py())<<" "<<(phase_generator->GetDecay(0)->Pz())<<" "<<(phase_generator->GetDecay(0)->E())<<" ";
			   (*file_evt)<<0<<" "<<0<<" "<<0<<" "<<0<<endl;
			   i++;
			   (*file_evt)<<"  "<<i<<"\t"<<22<<"\t"<<1<<"\t"<<0<<"\t"<<0<<"\t"<<-1<<"\t"<<-1<<"\t";
			   (*file_evt)<<(phase_generator->GetDecay(1)->Px())<<" "<<(phase_generator->GetDecay(1)->Py())<<" "<<(phase_generator->GetDecay(1)->Pz())<<" "<<(phase_generator->GetDecay(1)->E())<<" ";
			   (*file_evt)<<0<<" "<<0<<" "<<0<<" "<<0<<endl;
			   i++;
		   }
		   else if(pi0DecayMode.at(j) == 0){
			TLorentzVector W(pi0s[j].Px(), pi0s[j].Py(), pi0s[j].Pz(), pi0s[j].E());
			double dielectronmass = dileptonMassDist_TF1->GetRandom(2*0.000510999+0.0001, 0.134977-0.0001);
			double masses[2] = {0, dielectronmass};
			phase_generator->SetDecay(W, 2, masses);
			double weight = phase_generator->Generate();
			   (*file_evt)<<"  "<<i<<"\t"<<22<<"\t"<<1<<"\t"<<0<<"\t"<<0<<"\t"<<-1<<"\t"<<-1<<"\t";
			   (*file_evt)<<(phase_generator->GetDecay(0)->Px())<<" "<<(phase_generator->GetDecay(0)->Py())<<" "<<(phase_generator->GetDecay(0)->Pz())<<" "<<(phase_generator->GetDecay(0)->E())<<" ";
			   (*file_evt)<<0<<" "<<0<<" "<<0<<" "<<0<<endl;
			   i++;

			TLorentzVector Wdielectron(phase_generator->GetDecay(1)->Px(), phase_generator->GetDecay(1)->Py(), phase_generator->GetDecay(1)->Pz(), phase_generator->GetDecay(1)->E());
			double masses2[2] = {0.000510999, 0.000510999};
			phase_generator->SetDecay(Wdielectron, 2, masses2);
			weight = phase_generator->Generate();
			   (*file_evt)<<"  "<<i<<"\t"<<-11<<"\t"<<1<<"\t"<<0<<"\t"<<0<<"\t"<<-1<<"\t"<<-1<<"\t";
			   (*file_evt)<<(phase_generator->GetDecay(0)->Px())<<" "<<(phase_generator->GetDecay(0)->Py())<<" "<<(phase_generator->GetDecay(0)->Pz())<<" "<<(phase_generator->GetDecay(0)->E())<<" ";
			   (*file_evt)<<0<<" "<<0<<" "<<0<<" "<<0<<endl;
			   i++;
			   (*file_evt)<<"  "<<i<<"\t"<<11<<"\t"<<1<<"\t"<<0<<"\t"<<0<<"\t"<<-1<<"\t"<<-1<<"\t";
			   (*file_evt)<<(phase_generator->GetDecay(1)->Px())<<" "<<(phase_generator->GetDecay(1)->Py())<<" "<<(phase_generator->GetDecay(1)->Pz())<<" "<<(phase_generator->GetDecay(1)->E())<<" ";
			   (*file_evt)<<0<<" "<<0<<" "<<0<<" "<<0<<endl;
			   i++;

		   }
	   }
	   for(int j=0;j<neutrons.size();j++){
		   (*file_evt)<<"  "<<i<<"\t"<<2112<<"\t"<<1<<"\t"<<0<<"\t"<<0<<"\t"<<-1<<"\t"<<-1<<"\t";
		   (*file_evt)<<neutrons[j].Px()<<" "<<neutrons[j].Py()<<" "<<neutrons[j].Pz()<<" "<<neutrons[j].E()<<" ";
		   (*file_evt)<<0<<" "<<0<<" "<<0<<" "<<0<<endl;
		   i++;
	   }
	   for(int j=0;j<protons.size();j++){
		   (*file_evt)<<"  "<<i<<"\t"<<2212<<"\t"<<1<<"\t"<<0<<"\t"<<0<<"\t"<<-1<<"\t"<<-1<<"\t";
		   (*file_evt)<<protons[j].Px()<<" "<<protons[j].Py()<<" "<<protons[j].Pz()<<" "<<protons[j].E()<<" ";
		   (*file_evt)<<0<<" "<<0<<" "<<0<<" "<<0<<endl;
		   i++;
	   }
	   for(int j=0;j<Kps.size();j++){
		   (*file_evt)<<"  "<<i<<"\t"<<321<<"\t"<<1<<"\t"<<0<<"\t"<<0<<"\t"<<-1<<"\t"<<-1<<"\t";
		   (*file_evt)<<Kps[j].Px()<<" "<<Kps[j].Py()<<" "<<Kps[j].Pz()<<" "<<Kps[j].E()<<" ";
		   (*file_evt)<<0<<" "<<0<<" "<<0<<" "<<0<<endl;
		   i++;
	   }


	   Nevents++;
   }





   return kTRUE;
}

void GiBUU2evt::SlaveTerminate()
{
   // The SlaveTerminate() function is called after all entries or objects
   // have been processed. When running with PROOF SlaveTerminate() is called
   // on each slave server.

}

void GiBUU2evt::Terminate()
{
   // The Terminate() function is the last function to be called during
   // a query. It always runs on the client, it can be used to present
   // the results graphically or save the results to file.


	cout<<"Total events: "<<Nevents<<endl;
}
