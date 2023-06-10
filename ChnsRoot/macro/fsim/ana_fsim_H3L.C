#include "TH1F.h"
#include "TH2F.h"
#include "TString.h"
#include "TCanvas.h"
#include "TProfile.h"

void
set_plot_style()
{
    const Int_t NRGBs = 5;
    const Int_t NCont = 255;

    Double_t stops[NRGBs] = { 0.00, 0.34, 0.61, 0.84, 1.00 };
    Double_t red[NRGBs]   = { 0.00, 0.00, 0.87, 1.00, 0.51 };
    Double_t green[NRGBs] = { 0.00, 0.81, 1.00, 0.20, 0.00 };
    Double_t blue[NRGBs]  = { 0.51, 1.00, 0.12, 0.00, 0.00 };
    TColor::CreateGradientColorTable(NRGBs, stops, red, green, blue, NCont);
    gStyle->SetNumberContours(NCont);
    /*Double_t stops[9] = { 0.00, 0.2, 0.3, 0.4,0.5,0.6,0.7,0.8,1.0 };
    Double_t red[9]   = { 0.2082, 0.0592, 0.0780, 0.0232, 0.1802,
    0.5301, 0.8186, 0.9956, 0.9764};
    Double_t green[9] = { 0.1664, 0.3599, 0.5041, 0.6419, 0.7178,
    0.7492, 0.7328, 0.7862, 0.9832};
    Double_t blue[9]  = { 0.5293, 0.8684, 0.8385, 0.7914,
        0.6425, 0.4662, 0.3499, 0.1968, 0.0539};
    TColor::CreateGradientColorTable(9, stops, red,
            green, blue, 255);
*/}

void ana_fsim_H3L()
{
	gStyle->SetOptStat(1);
  set_plot_style();

	gSystem->Load("libfsim");
	TChain* t = new TChain("chnssim");
	t->Add("./output/run_fsim_H3L10000.root");
	//t->Add("./output/fsim_ChnsJam_H3L_10000_onlyH3l.root");
	//
	int nevents = 10000;

	TClonesArray *fMC=new TClonesArray("ChnsMCTrack");
	TClonesArray *fCands=new TClonesArray("ChnsPidCandidate");
	TClonesArray *fCands_prob=new TClonesArray("ChnsPidProbability");

	t->GetBranch("MCTrack")->SetAutoDelete(kFALSE);
	t->SetBranchAddress("MCTrack",&fMC);
	t->GetBranch("PidChargedCand")->SetAutoDelete(kFALSE);
	t->SetBranchAddress("PidChargedCand",&fCands);
	t->GetBranch("PidChargedProbability")->SetAutoDelete(kFALSE);
	t->SetBranchAddress("PidChargedProbability",&fCands_prob);

	ChnsMCTrack* iMC;
	ChnsMCTrack* i1MC;
	ChnsMCTrack* i2MC;
	ChnsPidCandidate* iCand1;
	ChnsPidCandidate* iCand2;
	ChnsPidProbability* iCand1_prob;
	ChnsPidProbability* iCand2_prob;

	TH2D *h3l_pty_gen = new TH2D("h3l_pty_gen", "", 100, -0.9, 3.4, 100, 0, 4.5);
	TH2D *he3_pty_gen = new TH2D("he3_pty_gen", "", 100, -0.9, 3.4, 100, 0, 4.5);
	TH2D *pim_pty_gen = new TH2D("pim_pty_gen", "", 100, -0.9, 3.4, 100, 0, 0.8);
	
	TH2D *h3l_pty_rec = new TH2D("h3l_pty_rec", "", 100, -0.9, 3.4, 100, 0, 4.5);
	TH2D *h3l_pty_bkg = new TH2D("h3l_pty_bkg", "", 100, -0.9, 3.4, 100, 0, 4.5);
	TH2D *he3_pteta_rec = new TH2D("he3_pteta_rec", "", 100, -0.7, 3.4, 100, 0, 4.5);
	TH2D *pim_pteta_rec = new TH2D("pim_pteta_rec", "", 100, -0.7, 3.4, 100, 0, 0.8);
	
	TH2D *h3l_pty_effi = new TH2D("h3l_pty_effi", "", 100, -0.9, 3.4, 100, 0, 4.5);
	TH2D *h3l_pty_sob = new TH2D("h3l_pty_sob", "", 100, -0.9, 3.4, 100, 0, 4.5);

	TH2D *tpc_dedx = new TH2D("tpc_dedx"," ",  100 , -0.8, 3., 100, 0, 70);
	TH2D *tof_mass2 = new TH2D("tof_mass2"," ",  100 , -1, 3., 100, -0.15, 7);

	TH1D *lh_pion = new TH1D("lh_pion", "", 50, 0, 4); 
	TH1D *lh_he3 = new TH1D("lh_he3", "", 50, 0, 4); 

	TH1D *mh3l = new TH1D("mh3l", "", 100, 2.9, 3.1);
	TH1D *mh3l_real = new TH1D("mh3l_real", "", 100, 2.9, 3.1);
	TH1D *mh3l_bkg = new TH1D("mh3l_bkg", "", 100, 2.9, 3.1);

	TH1D *P_raw = new TH1D("P_raw", "", 100, 0, 1);
	TH1D *P_rec = new TH1D("P_rec", "", 100, 0, 1);
	
	Int_t num= t->GetEntries();
	Int_t nn(0);
	for(Int_t j=0; j<nevents;j++)
	{
		t->GetEntry(j);
		
		for (Int_t i1=0; i1<fMC->GetEntriesFast(); i1++)
		{
			iMC = (ChnsMCTrack*)fMC->At(i1);
			int pdg = iMC->GetPdgCode();
			int momid = iMC->GetMotherID();
			int mompdg = 0;
			if(momid != -1) mompdg = ((ChnsMCTrack*)fMC->At(momid))->GetPdgCode();
			TLorentzVector mom = iMC->Get4Momentum();

			if(pdg == 1010010030)
				h3l_pty_gen->Fill(mom.Rapidity()-0.69, mom.Pt());
			else if(pdg == -211 && mompdg == 1010010030)
				pim_pty_gen->Fill(mom.Rapidity(), mom.Pt());
			else if(pdg == 1000020030 && mompdg == 1010010030)
				he3_pty_gen->Fill(mom.Rapidity(), mom.Pt());
		}

		int p1_mom;
		int p2_mom;

		for (Int_t i1=0; i1<fCands->GetEntriesFast(); i1++)
		{
			p1_mom = 0;

			iCand1 = (ChnsPidCandidate*)fCands->At(i1);
			iCand1_prob = (ChnsPidProbability*)fCands_prob->At(i1);

			int mcindex = iCand1->GetMcIndex();
			i1MC = (ChnsMCTrack*)fMC->At(mcindex);
			if(i1MC->GetMotherID() != -1 )
				p1_mom = ((ChnsMCTrack*)fMC->At(i1MC->GetMotherID()))->GetPdgCode();
				
			int pdg = iCand1->GetPdgCode();

			float tpc_DEDX = iCand1->GetTpcMeanDEDX();
			float tof_Mass2 = iCand1->GetTofM2();
			
			float mom = (iCand1->GetMomentum()).Mag();
			if(tpc_DEDX !=0) {
				tpc_dedx->Fill(mom/iCand1->GetCharge(), tpc_DEDX);
			}
			if(tof_Mass2 !=0) {
				tof_mass2->Fill(mom/iCand1->GetCharge(), tof_Mass2);
			}

			lh_pion->Fill(iCand1_prob->GetPionPidProb());
			lh_he3->Fill(iCand1_prob->GetHe3PidProb());

			if(iCand1_prob->GetPionPidProb()>0.05 && iCand1->GetCharge()<0 && tof_Mass2>0 && tof_Mass2<0.2) {
			//if(pdg==-211) {
				TLorentzVector mom1 = iCand1->GetLorentzVector(); 
				mom1.SetE(sqrt(iCand1->GetMomentum().Mag2()+0.134*0.134));
				//P_rec->Fill(iCand1->GetMomentum().Mag());
				//P_raw->Fill(iMC->GetP());
				pim_pteta_rec->Fill(mom1.Eta(), mom1.Pt());

				for (Int_t i2=0; i2<fCands->GetEntriesFast(); i2++)
				{
					p2_mom = 0;
					iCand2 = (ChnsPidCandidate*)fCands->At(i2);
					int pdg2 = iCand2->GetPdgCode();
					iCand2_prob = (ChnsPidProbability*)fCands_prob->At(i2);
					int mc1index = iCand2->GetMcIndex();
					float tof_Mass2_2 = iCand2->GetTofM2();
				
			//if(pdg2==1000020030) {
					if(iCand2_prob->GetHe3PidProb()>0.02 && iCand2->GetCharge()>0 && tof_Mass2_2>1 && tof_Mass2_2<3) {
					//if(iCand2_prob->GetHe3PidProb()>0.02 && iCand2->GetCharge()>0) {
						TLorentzVector mom2 = iCand2->GetLorentzVector();
						//mom2.SetPxPyPzE(2*mom2.Px(), 2*mom2.Py(), 2*mom2.Pz(), sqrt(iCand2->GetMomentum().Mag2()+2.80923*2.80923));
						mom2.SetE(sqrt(iCand2->GetMomentum().Mag2()+2.80923*2.80923));

						i2MC = (ChnsMCTrack*)fMC->At(mc1index);
						if(i2MC->GetMotherID() != -1 )
							p2_mom = ((ChnsMCTrack*)fMC->At(i2MC->GetMotherID()))->GetPdgCode();

						float invM = (mom1+mom2).M();
						mh3l->Fill(invM);
						if(p1_mom == p2_mom && p1_mom==1010010030){
							mh3l_real->Fill(invM);
							h3l_pty_rec->Fill((mom1+mom2).Rapidity()-0.69, (mom1+mom2).Pt());
						}
						else{
							mh3l_bkg->Fill(invM);
							h3l_pty_bkg->Fill((mom1+mom2).Rapidity()-0.69, (mom1+mom2).Pt());
						}
					}
				} // end of He3 loop
			} // end of pi- loop
			//if(iCand1_prob->GetHe3PidProb()>0.12 && iCand1->GetCharge()>0) {
			if(pdg==1000020030) {
				he3_pteta_rec->Fill(iCand1->GetLorentzVector().Eta(), iCand1->GetLorentzVector().Pt());
			}
		} // end of track loop
	} // end of event loop

	*h3l_pty_effi = (*h3l_pty_rec)/(*h3l_pty_gen);
	*h3l_pty_sob = (*h3l_pty_rec)/(*h3l_pty_bkg);

	TCanvas *c0 = new TCanvas("c0", "", 600, 400);
	c0->cd();
	h3l_pty_gen->Draw("col");
	
	TCanvas *c0_rec = new TCanvas("c0_rec", "", 600, 400);
	c0_rec->cd();
	h3l_pty_rec->Draw("col");
	
	TCanvas *c0_effi = new TCanvas("c0_effi", "", 600, 400);
	c0_effi->cd();
	h3l_pty_effi->GetZaxis()->SetRangeUser(0,1);
	h3l_pty_effi->Draw("col");
	
	TCanvas *c0_sob = new TCanvas("c0_sob", "", 600, 400);
	c0_sob->cd();
	//h3l_pty_sob->GetZaxis()->SetRangeUser(0,1);
	h3l_pty_sob->Draw("col");
	
	
	TCanvas *c0_pim = new TCanvas("c0_pim", "", 600, 400);
	c0_pim->cd();
	pim_pty_gen->Draw("col");
	
	TCanvas *c0_he3 = new TCanvas("c0_he3", "", 600, 400);
	c0_he3->cd();
	he3_pty_gen->Draw("col");

	TCanvas *c0_dau_rec = new TCanvas("c0_dau_rec", "", 800, 400);
	c0_dau_rec->cd();
	c0_dau_rec->Divide(2,1);
	c0_dau_rec->cd(1);
	pim_pteta_rec->Draw("col");
	c0_dau_rec->cd(2);
	he3_pteta_rec->Draw("col");

	TCanvas *c1 = new TCanvas("c1", "", 600, 400);
	c1->cd();
	tpc_dedx->Draw("col");

	TCanvas *c2 = new TCanvas("c2", "", 600, 400);
	c2->cd();
	tof_mass2->Draw("col");

	TCanvas *c4 = new TCanvas("c4", "", 600, 400);
	c4->cd();
	mh3l->Draw("");
	mh3l_real->SetLineColor(2);
	mh3l_real->Draw("same");
	mh3l_bkg->SetLineColor(4);
	mh3l_bkg->Draw("same");
	
}
