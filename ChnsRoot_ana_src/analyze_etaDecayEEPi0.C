#include "TH1F.h"
#include "TH2F.h"
#include "TString.h"
#include "TCanvas.h"
#include "TProfile.h"
#include <vector>

void analyze_etaDecayEEPi0(){

	int total_EEPi0Decay_events = 530; 

	/// Load ChnsRoot simulation data into TChain *t
	gSystem->Load("libfsim");
	TChain* t = new TChain("chnssim");
	t->Add("/data/rwang/simulation_works/HIAF-etaFactory-Simulations-localData2/ChnsRoot-data/run_fsim_EvtGen_HIAFeta_EEPi0_1.8GeV_2023.root");
	/// Set output file directory and name
	TString output_file = "../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-etaDecay-EEPi0-results.root";


	gStyle->SetOptStat(1);
	/// Define some arrays and get the branches from TChain *t
	TClonesArray *fMC=new TClonesArray("ChnsMCTrack");
	TClonesArray *fCands=new TClonesArray("ChnsPidCandidate");
	TClonesArray *fNeuts=new TClonesArray("ChnsPidCandidate");
	TClonesArray *fCands_prob=new TClonesArray("ChnsPidProbability");
	t->GetBranch("MCTrack")->SetAutoDelete(kFALSE);
	t->SetBranchAddress("MCTrack",&fMC);
	t->GetBranch("PidChargedCand")->SetAutoDelete(kFALSE);
	t->SetBranchAddress("PidChargedCand",&fCands);
	t->GetBranch("PidNeutralCand")->SetAutoDelete(kFALSE);
	t->SetBranchAddress("PidNeutralCand",&fNeuts);
	t->GetBranch("PidChargedProbability")->SetAutoDelete(kFALSE);
	t->SetBranchAddress("PidChargedProbability",&fCands_prob);
	ChnsMCTrack* iMC;
	ChnsPidCandidate* iCand1;
	ChnsPidCandidate* iCand2;
	ChnsPidProbability* iCand1_prob;
	ChnsPidProbability* iCand2_prob;


	/// Define some arrays of TLorentzVectors for the analysis
	vector<TLorentzVector> positrons; 
	vector<TLorentzVector> electrons; 
	vector<TLorentzVector> gammas; 

	/// Define some histograms for output file
	TH1D *hmTwoGammas  = new TH1D("hmTwoGammas","m_{#gamma#gamma}",600,0,2); 
	TH1D *hmTwoGammas_EETwoGammas  = new TH1D("hmTwoGammas_EETwoGammas","m_{#gamma#gamma}",600,0,2); 
	TH1D *hmTwoGammas_2  = new TH1D("hmTwoGammas_2","m_{#gamma#gamma}",600,0,2); 
	TH1D *hmTwoGammas_EETwoGammas_2  = new TH1D("hmTwoGammas_EETwoGammas_2","m_{#gamma#gamma}",600,0,2); 
	TH1D *hmEEPi0 = new TH1D("hmEEPi0","m_{e+e-#pi0}",600,0,2); 
	TH1D *hmEEPi0_2 = new TH1D("hmEEPi0_2","m_{e+e-#pi0}",600,0,2); 




	/// Get the number of events
	long num = t->GetEntries();
	cout<<"  "<<num<<" total events from the input file"<<endl;
	num = total_EEPi0Decay_events;  /// 10000;
	/// Loop of events, analyze every event in the file
	/// Compute the invariant masses and fill the histograms
	for(long i=0; i<num; i++){
		positrons.clear();
		electrons.clear();
		gammas.clear();

		t->GetEntry(i);

		/// Analyze the event with more than two charged tracks
		if(fCands->GetEntriesFast()>=2)
		for (Int_t i1=0; i1<fCands->GetEntriesFast(); i1++){
			iCand1 = (ChnsPidCandidate*)fCands->At(i1);
			iCand1_prob = (ChnsPidProbability*)fCands_prob->At(i1);
			int mcindex = iCand1->GetMcIndex();
			iMC = (ChnsMCTrack*)fMC->At(mcindex);
			int pdg = iMC->GetPdgCode();

			/// Get the 4-momentum of positron and push back to array positrons
			if(pdg==-11 && iCand1_prob->GetElectronPidProb()>0.1 && iCand1->GetCharge()>0) {
//				cout<<"e^+ found,    ";
				TLorentzVector positron = iCand1->GetLorentzVector();
				/// Reset the particle mass
				positron.SetE( sqrt(positron.E()*positron.E() - positron.M()*positron.M() + 0.000511*0.000511)  );
				positrons.push_back(positron);
			}
			/// Get the 4-momentum of electron and push back to array electrons
			else if(pdg==11 && iCand1_prob->GetElectronPidProb()>0.1 && iCand1->GetCharge()<0) {
//				cout<<"e^- found,    ";
				TLorentzVector electron = iCand1->GetLorentzVector();
				/// Reset the particle mass
				electron.SetE( sqrt(electron.E()*electron.E() - electron.M()*electron.M() + 0.000511*0.000511)  );
				electrons.push_back(electron);
			}
		} // end of charged track loop
//		cout<<"N charged_tracks="<<fCands->GetEntriesFast()<<",   ";


		/// Analyze the event with more than two neutral particles
		if(fNeuts->GetEntriesFast()>=2)
		for (Int_t i1=0; i1<fNeuts->GetEntriesFast(); i1++)
		{
			iCand1 = (ChnsPidCandidate*)fNeuts->At(i1);
			int mcindex = iCand1->GetMcIndex();
			iMC = (ChnsMCTrack*)fMC->At(mcindex);
			//int pdg = iCand1->GetPdgCode();
			int pdg = iMC->GetPdgCode();

			/// Get the 4-momentum of gamma and push back to array gammas
			if(pdg==22){
//				cout<<"gamma found,   ";
				TVector3 v3_gamma = iCand1->GetMomentum();
				TLorentzVector gamma(v3_gamma, v3_gamma.Mag());
				gammas.push_back(gamma);	
			}
			/// Neutrons miss-identified as gammas
			if(pdg==2112){
//				cout<<"miss-identified neutorn found,   ";
				TVector3 v3_gamma = iCand1->GetMomentum();
				double theta = v3_gamma.Theta();
				double phi = v3_gamma.Phi();
				double energy = iCand1->GetEmcCalEnergy();
				v3_gamma.SetX(energy * sin(theta) * cos(phi));
				v3_gamma.SetY(energy * sin(theta) * sin(phi));
				v3_gamma.SetZ(energy * cos(theta) );

				TLorentzVector gamma(v3_gamma, v3_gamma.Mag());
				gammas.push_back(gamma);	
			}
		} // end of neutral track loop
//		cout<<"N neutral_tracks="<<fNeuts->GetEntriesFast()<<endl;








		/// Compute the invariant masses and fill the histograms
		vector<TLorentzVector>  gammas_copy;
		gammas_copy.clear();
		for(int i=0; i<gammas.size(); i++) gammas_copy.push_back( gammas.at(i) );	
		/// pi+ pi- gamma gamma X channel
		for(int i=0; i<positrons.size(); i++){
			for(int j=0; j<electrons.size(); j++){
				while(gammas_copy.size()>=2){
					for(int k=1; k<gammas_copy.size();k++){
						double mpi0 = (gammas_copy.at(0) + gammas_copy.at(k)).M();
						double meta = (gammas_copy.at(0) + gammas_copy.at(k) + positrons.at(i) + electrons.at(j)).M();
						//cout<<mpi0<<"    "<<meta<<endl;
						hmTwoGammas_EETwoGammas->Fill(mpi0);
						if(mpi0>0.11  && mpi0<0.17)
							hmEEPi0->Fill(meta);
	
						if(gammas_copy.at(0).E()>0.05 && gammas_copy.at(k).E()>0.05){
							hmTwoGammas_EETwoGammas_2->Fill(mpi0);
							if(mpi0>0.11  && mpi0<0.17)
								hmEEPi0_2->Fill(meta);
						}
					}
					gammas_copy.erase(gammas_copy.begin());
				}
			}  /// End of pi^- loop
		}  /// End of pi^+ loop
		gammas_copy.clear();
		for(int i=0; i<gammas.size(); i++) gammas_copy.push_back( gammas.at(i) );	
		/// gamma gamma X channel
		while(gammas_copy.size()>=2){
			for(int k=1; k<gammas_copy.size();k++){
				double mpi0 = (gammas_copy.at(0) + gammas_copy.at(k)).M();
				hmTwoGammas->Fill(mpi0);
	
				if(gammas_copy.at(0).E()>0.05 && gammas_copy.at(k).E()>0.05){
					hmTwoGammas_2->Fill(mpi0);
				}
			}
			gammas_copy.erase(gammas_copy.begin());
		}









	}/// End of the event loop







	/// Create an output file, write the histograms and then close the file
	TFile outfile(output_file,"recreate");
	hmTwoGammas->Write(); 
	hmTwoGammas_EETwoGammas ->Write();
	hmTwoGammas_2 ->Write();
	hmTwoGammas_EETwoGammas_2 ->Write();
	hmEEPi0 ->Write();
	hmEEPi0_2 ->Write();
	outfile.Close();





}





