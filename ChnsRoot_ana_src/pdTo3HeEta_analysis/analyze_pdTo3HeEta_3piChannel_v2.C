#include "TH1F.h"
#include "TH2F.h"
#include "TString.h"
#include "TCanvas.h"
#include "TProfile.h"
#include <vector>



TFile *fout;
TTree *tree;

int N3He_MC, Npip_MC, Npim_MC, Ngamma_MC;
int N3He_REC, Npip_REC, Npim_REC, Ngamma_REC;
TLorentzVector *He3_MC;
TLorentzVector *Pip_MC;
TLorentzVector *Pim_MC;
TLorentzVector *Gamma1_MC;
TLorentzVector *Gamma2_MC;
TLorentzVector *He3_REC;
TLorentzVector *Pip_REC;
TLorentzVector *Pim_REC;
TLorentzVector *Gamma1_REC;
TLorentzVector *Gamma2_REC;


void Initialization(){
	He3_MC = new TLorentzVector();;
	Pip_MC = new TLorentzVector();;
	Pim_MC = new TLorentzVector();;
	Gamma1_MC = new TLorentzVector();;
	Gamma2_MC = new TLorentzVector();;
	He3_REC = new TLorentzVector();;
	Pip_REC = new TLorentzVector();;
	Pim_REC = new TLorentzVector();;
	Gamma1_REC = new TLorentzVector();;
	Gamma2_REC = new TLorentzVector();;
}

void ResetBranchVars(){
	N3He_MC = Npip_MC = Npim_MC = Ngamma_MC = 0;
	N3He_REC = Npip_REC = Npim_REC = Ngamma_REC = 0;

	He3_MC->SetXYZT(0,0,0,0);
	Pip_MC->SetXYZT(0,0,0,0);
	Pim_MC->SetXYZT(0,0,0,0);
	Gamma1_MC->SetXYZT(0,0,0,0);
	Gamma2_MC->SetXYZT(0,0,0,0);

	He3_REC->SetXYZT(0,0,0,0);
	Pip_REC->SetXYZT(0,0,0,0);
	Pim_REC->SetXYZT(0,0,0,0);
	Gamma1_REC->SetXYZT(0,0,0,0);
	Gamma2_REC->SetXYZT(0,0,0,0);
}

void MakeROOTFile(string filename){
	//// create the output file and the output TTree
	cout<<"    Creating the output file: "<<filename<<endl<<endl;
	fout = new TFile(filename.c_str(),"recreate");
	tree = new TTree("tree","selection of 3He pi+ pi- gamma1 gamma2");

	tree->Branch("N3He_MC", &N3He_MC, "N3He_MC/I");
	tree->Branch("Npip_MC", &Npip_MC, "Npip_MC/I");
	tree->Branch("Npim_MC", &Npim_MC, "Npim_MC/I");
	tree->Branch("Ngamma_MC", &Ngamma_MC, "Ngamma_MC/I");

	tree->Branch("N3He_REC", &N3He_REC, "N3He_REC/I");
	tree->Branch("Npip_REC", &Npip_REC, "Npip_REC/I");
	tree->Branch("Npim_REC", &Npim_REC, "Npim_REC/I");
	tree->Branch("Ngamma_REC", &Ngamma_REC, "Ngamma_REC/I");

	tree->Branch("He3_MC", "TLorentzVector", He3_MC);
	tree->Branch("Pip_MC", "TLorentzVector", Pip_MC);
	tree->Branch("Pim_MC", "TLorentzVector", Pim_MC);
	tree->Branch("Gamma1_MC", "TLorentzVector", Gamma1_MC);
	tree->Branch("Gamma2_MC", "TLorentzVector", Gamma2_MC);

	tree->Branch("He3_REC", "TLorentzVector", He3_REC);
	tree->Branch("Pip_REC", "TLorentzVector", Pip_REC);
	tree->Branch("Pim_REC", "TLorentzVector", Pim_REC);
	tree->Branch("Gamma1_REC", "TLorentzVector", Gamma1_REC);
	tree->Branch("Gamma2_REC", "TLorentzVector", Gamma2_REC);
}













// main function starts here!
void analyze_pdTo3HeEta_3piChannel_v2()
{
	// Number of events
	int total_events = 1000000; 

	double mp = 0.938272;
	double mn = 0.939565;
	double meta = 0.547862;
	double mDeuteron = mp + mn - 2*0.001112283;
	double m3He = 2*mp + mn - 3*0.002572680;
	cout<< mp <<"\t"<< mn <<"\t"<< meta <<"\t"<< mDeuteron <<"\t"<< m3He <<endl;
	double me = 0.000510999;
	double mpip = 0.13957039;
	double mpi0 = 0.1349768;

	Initialization();
	

	/// Input the simulation data from ChnsRoot
	gSystem->Load("libfsim");
	TChain* t = new TChain("chnssim");
	t->Add("/data/rwang/simulation_works/HIAF-etaFactory-Simulations-localData2/ChnsRoot-data/run_fsim_pdTo3HeEta_3piChannel_part1_1.8GeV_2023.root");

	/// Set the output file and directory
	string output_file = "../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/HIAF-pdTo3HeEta-3piChannel-part1.root";
	MakeROOTFile(output_file);




	// Prepare the branches for reading the TTree data
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



	/// define some vectors for found particles
	vector<TLorentzVector>  he3;
	vector<TLorentzVector>  he3_MC;
	vector<TLorentzVector>  pip;
	vector<TLorentzVector>  pip_MC;
	vector<TLorentzVector>  pim;
	vector<TLorentzVector>  pim_MC;
	vector<TLorentzVector>  gamma;
	vector<TLorentzVector>  gamma_MC;


	


	/// event loop starts here
	/// analyze the TTree data and dump the results into the output file
	Int_t num = t->GetEntries();
	cout<<"  "<<num<<" total input events in the file"<<endl;
	num = total_events;  /// 10000;

	for(Int_t j=0; j<num; j++)
	{
		ResetBranchVars();
		// get the entry j from the file
		t->GetEntry(j);
		// clear the vectors for the particles
		he3.clear();
		he3_MC.clear();
		pip.clear();
		pip_MC.clear();
		pim.clear();
		pim_MC.clear();
		gamma.clear();
		gamma_MC.clear();


		// get the input MC particles 
		for (Int_t i1=0; i1<fMC->GetEntries(); i1++){
			iMC = (ChnsMCTrack*)fMC->At(i1);
			int pdg = iMC->GetPdgCode();
			if(pdg == -211) {pim_MC.push_back(iMC->Get4Momentum());  Npim_MC++;}
			if(pdg == 211)  {pip_MC.push_back(iMC->Get4Momentum());  Npip_MC++;}
			if(pdg==1000020030)  {he3_MC.push_back(iMC->Get4Momentum());   N3He_MC++;}
			//if(pdg==1000020030) {cout<<"MC 3He, "<<endl; (iMC->Get4Momentum()).Print();}
			if(pdg == 22)  {gamma_MC.push_back(iMC->Get4Momentum());  Ngamma_MC++;}
		}// end the loop for MC particles


		// get the reconstructed particles which are from the detector simulation
		// start the loop for charged tracks
		for (Int_t i1=0; i1<fCands->GetEntriesFast(); i1++)
		{
			iCand1 = (ChnsPidCandidate*)fCands->At(i1);
			iCand1_prob = (ChnsPidProbability*)fCands_prob->At(i1);

			int mcindex = iCand1->GetMcIndex();
			iMC = (ChnsMCTrack*)fMC->At(mcindex);
			int pdg = iMC->GetPdgCode();


			if(pdg==-211 && iCand1_prob->GetPionPidProb()>0.1 && iCand1->GetCharge()<0) {
				TLorentzVector particle = iCand1->GetLorentzVector();
				particle.SetE( sqrt(pow(particle.E(),2) - pow(particle.M(),2) + mpip*mpip)  );
				pim.push_back(particle);
				Npim_REC++;
			}
			else if(pdg==211 && iCand1_prob->GetPionPidProb()>0.1 && iCand1->GetCharge()>0) {
				TLorentzVector particle = iCand1->GetLorentzVector();
				particle.SetE( sqrt(pow(particle.E(),2) - pow(particle.M(),2) + mpip*mpip)  );
				pip.push_back(particle);
				Npip_REC++;
			}
			else if(pdg==1000020030 && iCand1->GetCharge()>0) {
				TLorentzVector particle = iCand1->GetLorentzVector();
				particle.SetE( sqrt(pow(particle.E(),2) - pow(particle.M(),2) + m3He*m3He)  );
				he3.push_back(particle);
				N3He_REC++;
				//cout<<"REC 3He, "<<endl; particle.Print();
			}

		} // end of the charged track loop
//		cout<<"Ncharged_tracks="<<fCands->GetEntriesFast()<<",   ";

		// start the loop for neutral tracks
		if(fNeuts->GetEntriesFast()>=1)
		for (Int_t i1=0; i1<fNeuts->GetEntriesFast(); i1++)
		{
			iCand1 = (ChnsPidCandidate*)fNeuts->At(i1);

			int mcindex = iCand1->GetMcIndex();
			iMC = (ChnsMCTrack*)fMC->At(mcindex);
			//int pdg = iCand1->GetPdgCode();
			int pdg = iMC->GetPdgCode();

			if(pdg==22){
				TVector3 v3_gamma = iCand1->GetMomentum();
				TLorentzVector particle(v3_gamma, v3_gamma.Mag());
				gamma.push_back(particle);
				Ngamma_REC++;
			}
		} // end of the neutral track loop
//		cout<<"Nneutral_tracks="<<fNeuts->GetEntriesFast()<<endl;





		// set the TTree branches
		if(he3_MC.size() >= 1){
			(*He3_MC) = he3_MC.at(0);
		}
		if(pip_MC.size() >= 1){
			(*Pip_MC) = pip_MC.at(0);
		}
		if(pim_MC.size() >= 1){
			(*Pim_MC) = pim_MC.at(0);
		}
		if(gamma_MC.size() >= 1){
			(*Gamma1_MC) = gamma_MC.at(0);
			if(gamma_MC.size() >= 2){
				(*Gamma2_MC) = gamma_MC.at(1);
			}
		}
		if(he3.size() >= 1){
			(*He3_REC) = he3.at(0);
		}
		if(pip.size() >= 1){
			(*Pip_REC) = pip.at(0);
		}
		if(pim.size() >= 1){
			(*Pim_REC) = pim.at(0);
		}
		if(gamma.size() >= 1){
			(*Gamma1_REC) = gamma.at(0);
			if(gamma.size() >= 2){
				(*Gamma2_REC) = gamma.at(1);
			}
		}

		// fill the TTree file
		tree->Fill();

	} // end of event loop



	// wirte the output TTree file and close the file
	tree->Write();
	fout->Close();
	

}
