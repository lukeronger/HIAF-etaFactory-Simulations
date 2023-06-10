#include "TH1F.h"
#include "TH2F.h"
#include "TString.h"
#include "TCanvas.h"
#include "TProfile.h"
#include <vector>

void ana_UserDefined_neutrons()
{
	TString output_file = "../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-UserDefined-neutrons-results.root";

	gStyle->SetOptStat(1);

	gSystem->Load("libfsim");
	TChain* t = new TChain("chnssim");
	t->Add("/data/rwang/simulation_works/HIAF-etaFactory-Simulations-localData2/ChnsRoot-data/run_fsim_EvtGen_UserDefined_neutrons_1.8GeV_2023.root");

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
	vector<TLorentzVector>  neutrons;



	TH1D * hn_MC = new TH1D("hn_MC","kine. energy",100,0,2);
	TH1D * hn_rec = new TH1D("hn_rec","kine. energy",100,0,2);
	TH1D * h1_effi = new TH1D("h1_effi","efficiency",100,0,2);
	TH2D * h2_Edep_vs_En = new TH2D("h2_Edep_vs_En","Edep vs En",100,0,2,200,0,2);



	Int_t num = t->GetEntries();
	Int_t nn(0);
	/// num = 1000000;
	for(Int_t j=0; j<num;j++)
	{
		t->GetEntry(j);

		iMC = (ChnsMCTrack*)fMC->At(0);
		hn_MC->Fill(iMC->GetEnergy()-0.93957);


		if(fNeuts->GetEntriesFast()>=1)
		for (Int_t i1=0; i1<fNeuts->GetEntriesFast(); i1++)
		{
			iCand1 = (ChnsPidCandidate*)fNeuts->At(i1);

			int mcindex = iCand1->GetMcIndex();
			iMC = (ChnsMCTrack*)fMC->At(mcindex);
			//int pdg = iCand1->GetPdgCode();
			int pdg = iMC->GetPdgCode();

			if(pdg==2112){
				h2_Edep_vs_En->Fill(iMC->GetEnergy()-0.93957,  iCand1->GetEmcCalEnergy());
				hn_rec->Fill(iMC->GetEnergy()-0.93957);
			}
		} // end of neutral track loop
//		cout<<"Nneutral_tracks="<<fNeuts->GetEntriesFast()<<endl;




	} // end of event loop



/*
	TCanvas *c1 = new TCanvas("c1","c1");
	hmpi0->Draw();
	hmpi0_2->SetLineColor(2);
	hmpi0_2->Draw("same");
	TCanvas *c2 = new TCanvas("c2","c2");
	hmeta->Draw();  */



	TFile outfile(output_file,"recreate");
	hn_MC->Write();
	hn_rec->Write();
	h2_Edep_vs_En->Write();
	outfile.Close();

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
