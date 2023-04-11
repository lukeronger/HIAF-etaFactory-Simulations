#include "TH1F.h"
#include "TH2F.h"
#include "TString.h"
#include "TCanvas.h"
#include "TProfile.h"

void ana_fsim_EvtGen()
{
	gStyle->SetOptStat(1);

	gSystem->Load("libfsim");
	TChain* t = new TChain("chnssim");
	t->Add("run_fsim_BoxGen1000_EMCtest.root");

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

	TH2D *tpc_dedx = new TH2D("tpc_dedx"," ",  200 , -2, 2, 200, 0, 40);

	TH1D *lh_pion = new TH1D("lh_pion", "", 50, 0, 4); 
	TH1D *lh_e = new TH1D("lh_e", "", 50, 0, 4); 

	TH1D *mpsi = new TH1D("mjpsi", "", 100, 2.8, 3.3);
	TH1D *mpsi2s = new TH1D("mpsi2s", "", 100, 2.8, 4.3);

	TH1D *E_emc = new TH1D("E_emc", "", 100, 0, 1);
	TH1D *E_raw = new TH1D("E_raw", "", 100, 0, 1);
	TH1D *E_rec = new TH1D("E_rec", "", 100, 0, 1);

	Int_t num= t->GetEntries();
	Int_t nn(0);
	for(Int_t j=0; j<1000;j++)
	{
		t->GetEntry(j);

		for (Int_t i1=0; i1<fCands->GetEntriesFast()-1; i1++)
		{
			iCand1 = (ChnsPidCandidate*)fCands->At(i1);
			iCand1_prob = (ChnsPidProbability*)fCands_prob->At(i1);

			int mcindex = iCand1->GetMcIndex();
			iMC = (ChnsMCTrack*)fMC->At(mcindex);
			int pdg = iMC->GetPdgCode();

			float tpc_DEDX = iCand1->GetTpcMeanDEDX();
			float mom = (iCand1->GetMomentum()).Mag();
			if(tpc_DEDX !=0) {
				if(iCand1->GetCharge()>0) tpc_dedx->Fill(mom, tpc_DEDX);
				else if(iCand1->GetCharge()<0) tpc_dedx->Fill(-mom, tpc_DEDX);
			}

			lh_pion->Fill(iCand1_prob->GetPionPidProb());
			lh_e->Fill(iCand1_prob->GetElectronPidProb());

			if(iCand1_prob->GetElectronPidProb()>0.1 && iCand1->GetCharge()>0) {
				TLorentzVector mom1 = iCand1->GetLorentzVector(); //e+

				for (Int_t i2=i1+1; i2<fCands->GetEntriesFast(); i2++)
				{
					iCand2 = (ChnsPidCandidate*)fCands->At(i2);
					iCand2_prob = (ChnsPidProbability*)fCands_prob->At(i2);

					if(iCand2_prob->GetElectronPidProb()>0.1 && iCand2->GetCharge()<0) { //e-
						TLorentzVector mom2 = iCand2->GetLorentzVector();

						float invM = (mom1+mom2).M();
						mpsi->Fill(invM);
					}
				} // end of e- loop
			} // end of e+ loop
		} // end of track loop
	} // end of event loop


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
}
