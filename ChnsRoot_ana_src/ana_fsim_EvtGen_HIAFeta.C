#include "TH1F.h"
#include "TH2F.h"
#include "TString.h"
#include "TCanvas.h"
#include "TProfile.h"
#include <vector>

void ana_fsim_EvtGen_HIAFeta()
{
	gStyle->SetOptStat(1);

	gSystem->Load("libfsim");
	TChain* t = new TChain("chnssim");
	t->Add("../../../HIAF-etaFactory-Simulations-localData/run_fsim_EvtGen_HIAFeta_2001.root");

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


	vector<TLorentzVector>  eta_pip;
	vector<TLorentzVector>  eta_pim;
	vector<TLorentzVector>  eta_gamma;



	TH1D * hmpi0 = new TH1D("","m_{#pi0}",200,0,0.3);
	TH1D * hmpi0_2 = new TH1D("","",200,0,0.3);
	TH1D * hmeta = new TH1D("","m_{#eta}",200,0,15);
	TH1D * hmeta_2 = new TH1D("","",200,0,15);



	Int_t num = t->GetEntries();
	Int_t nn(0);
	for(Int_t j=0; j<300;j++)
	{
		t->GetEntry(j);

		eta_pip.clear();
		eta_pim.clear();
		eta_gamma.clear();

		

		if(fCands->GetEntriesFast()>=2)
		for (Int_t i1=0; i1<fCands->GetEntriesFast(); i1++)
		{
			iCand1 = (ChnsPidCandidate*)fCands->At(i1);
			iCand1_prob = (ChnsPidProbability*)fCands_prob->At(i1);

			int mcindex = iCand1->GetMcIndex();
			iMC = (ChnsMCTrack*)fMC->At(mcindex);
			int pdg = iMC->GetPdgCode();



			if(pdg==211 && iCand1_prob->GetPionPidProb()>0.1 && iCand1->GetCharge()>0) {
//				cout<<"pi+ find,    ";
				//TLorentzVector pip = iCand1->GetLorentzVector();
				TLorentzVector pip = iMC->Get4Momentum();
				//TVector3 _pip = iCand1->GetMomentum(); //LorentzVector();
				//TLorentzVector pip(_pip, sqrt(0.139*0.139+_pip.Mag2() )); 
				eta_pip.push_back(pip);
			}
			else if(pdg==-211 && iCand1_prob->GetPionPidProb()>0.1 && iCand1->GetCharge()<0) {
//				cout<<"pi- find,    ";
				//TLorentzVector pim = iCand1->GetLorentzVector();
				TLorentzVector pim = iMC->Get4Momentum();
				//TVector3 _pim = iCand1->GetMomentum(); 
				//TLorentzVector pim(_pim, sqrt(0.139*0.139+_pim.Mag2() )); 
				eta_pim.push_back(pim);
			}
		} // end of charged track loop
//		cout<<"Ncharged_tracks="<<fCands->GetEntriesFast()<<",   ";


		if(fNeuts->GetEntriesFast()>=2)
		for (Int_t i1=0; i1<fNeuts->GetEntriesFast(); i1++)
		{
			iCand1 = (ChnsPidCandidate*)fNeuts->At(i1);

			int mcindex = iCand1->GetMcIndex();
			iMC = (ChnsMCTrack*)fMC->At(mcindex);
			int pdg = iCand1->GetPdgCode();

			if(pdg==22){
//				cout<<"gamma find,   ";
				TVector3 v3_gamma = iCand1->GetMomentum();
				TLorentzVector gamma(v3_gamma, v3_gamma.Mag());
				eta_gamma.push_back(gamma);	
			}
		} // end of neutral track loop
//		cout<<"Nneutral_tracks="<<fNeuts->GetEntriesFast()<<endl;


		if(eta_pip.size()>=1 && eta_pim.size()>=1 && eta_gamma.size()>=2){
			hmpi0->Fill((eta_gamma.at(0) + eta_gamma.at(1)).M());
			hmeta->Fill((eta_gamma.at(0) + eta_gamma.at(1) + eta_pip.at(0) + eta_pim.at(0)).M());
		}


	} // end of event loop




	TCanvas *c1 = new TCanvas("c1","c1");
	hmpi0->Draw();
	TCanvas *c2 = new TCanvas("c2","c2");
	hmeta->Draw();

/*
	TCanvas *c1 = new TCanvas("c1", "", 600, 400);
	c1->cd();
	tpc_dedx->Draw("col");

	TCanvas *c2 = new TCanvas("c2", "", 600, 400);
	c2->cd();
	gPad->SetLogy();
	lh_pion->Draw("");

	TCanvas *c3 = new TCanvas("c3", "", 600, 400);
	c3->cd();
	gPad->SetLogy();
	lh_e->Draw("");

	TCanvas *c4 = new TCanvas("c4", "", 600, 400);
	c4->cd();
	mpsi->Draw("");
	
	for(Int_t j=0; j<1000;j++)
	{
		t->GetEntry(j);

		for (Int_t i1=0; i1<fNeuts->GetEntriesFast(); i1++)
		{
			iCand1 = (ChnsPidCandidate*)fNeuts->At(i1);

			int mcindex = iCand1->GetMcIndex();
			iMC = (ChnsMCTrack*)fMC->At(mcindex);
			int pdg = iCand1->GetPdgCode();

			float Raw_energy = iCand1->GetEmcRawEnergy();
			float Cal_energy = iCand1->GetEmcCalEnergy();
			float Rec_energy = iCand1->GetMomentum().Mag();
			E_raw->Fill(Raw_energy);
			E_emc->Fill(Cal_energy);
			E_rec->Fill(Rec_energy);
		} // end of track loop
	} // end of event loop

	TCanvas *c5 = new TCanvas("c5", "", 600, 400);
	c5->cd();
	E_emc->SetLineColor(2);
	E_emc->Draw();
	E_raw->Draw("same");
	E_rec->SetLineColor(8);
	E_rec->Draw("same");
	E_emc->Draw("same");

	*/
}
