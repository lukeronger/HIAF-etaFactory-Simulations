#include "TH1F.h"
#include "TH2F.h"
#include "TString.h"
#include "TCanvas.h"
#include "TProfile.h"
#include <vector>

void ana_etaDecay_3pi()
{
	TString output_file = "../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-etaDecay-3pi-results.root";

	gStyle->SetOptStat(1);

	gSystem->Load("libfsim");
	TChain* t = new TChain("chnssim");
	t->Add("../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/run_fsim_EvtGen_HIAFeta_1.8GeV_2023.root");

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


	/// define some histograms
	TH1D * hmpi0 = new TH1D("hmpi0","m_{#pi0}",300,0.05,0.3);
	TH1D * hmpi0_2 = new TH1D("hmpi0_2","",300,0.05,0.3);
	TH1D * hmeta = new TH1D("hmeta","m_{#eta}",300,0.4,0.8);
	TH1D * hmeta_2 = new TH1D("hmeta_2","",300,0.4,0.8);
	TH1D * hpim_prob = new TH1D("hpim_prob","",400,-1,5);
	TH1D * hpim_charge = new TH1D("hpim_charge","",200,-10,10);
	TH1D * hpip_prob = new TH1D("hpip_prob","",400,-1,5);
	TH1D * hpip_charge = new TH1D("hpip_charge","",200,-10,10);

	TH1D * hgamma_energy = new TH1D("hgamma_energy","",200,0,2);

	TH1D * hDeltaTheta_pip = new TH1D("hDeltaTheta_pip","", 1000,-1,1);
	TH1D * hDeltaTheta_gamma = new TH1D("hDeltaTheta_gamma","",1000,-1,1);

	/// define some variables for particle counting
	int Npip_tot = 0;
	int Npip_selected = 0;
	int Npim_tot = 0;
	int Npim_selected = 0;
	int Ngamma_tot = 0;
	int Ngamma_selected = 0;
	int Ngamma_tot2 = 0;
	int Ngamma_selected2 = 0;
	int Neta_final = 0; 


	/// start of event loop
	Int_t num = t->GetEntries();
	cout<<"  "<<num<<" total input events"<<endl;
	Int_t nn(0);
	//num = 100000;
	for(Int_t j=0; j<num;j++)
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
				TLorentzVector pip = iCand1->GetLorentzVector();
				eta_pip.push_back(pip);
				hDeltaTheta_pip->Fill(pip.Theta() - iMC->Get4Momentum().Theta());

				Npip_selected++;
			}
			else if(pdg==-211 && iCand1_prob->GetPionPidProb()>0.1 && iCand1->GetCharge()<0) {
//				cout<<"pi- find,    ";
				TLorentzVector pim = iCand1->GetLorentzVector();
				eta_pim.push_back(pim);

				Npim_selected++;
			}

			if(pdg==211 ) {
				hpip_prob -> Fill (iCand1_prob->GetPionPidProb());
				hpip_charge -> Fill (iCand1->GetCharge());
				Npip_tot++;
			}
			else if(pdg==-211 ) {
				hpim_prob -> Fill (iCand1_prob->GetPionPidProb());
				hpim_charge -> Fill (iCand1->GetCharge());
				Npim_tot++;
			}
		} // end of charged track loop
//		cout<<"Ncharged_tracks="<<fCands->GetEntriesFast()<<",   ";


		if(fNeuts->GetEntriesFast()>=2)
		for (Int_t i1=0; i1<fNeuts->GetEntriesFast(); i1++)
		{
			iCand1 = (ChnsPidCandidate*)fNeuts->At(i1);

			int mcindex = iCand1->GetMcIndex();
			iMC = (ChnsMCTrack*)fMC->At(mcindex);
			//int pdg = iCand1->GetPdgCode();
			int pdg = iMC->GetPdgCode();

			if(pdg==22){
//				cout<<"gamma find,   ";
				TVector3 v3_gamma = iCand1->GetMomentum();
				TLorentzVector gamma(v3_gamma, v3_gamma.Mag());
				eta_gamma.push_back(gamma);	
				hDeltaTheta_gamma->Fill(gamma.Theta() - iMC->Get4Momentum().Theta());

				Ngamma_tot++;
			}
			if(pdg==22 &&  iCand1->GetMomentum().Mag()>0.05  )  Ngamma_selected++;

		} // end of neutral track loop
//		cout<<"Nneutral_tracks="<<fNeuts->GetEntriesFast()<<endl;



		/// calculate the invariant mass and fill the histograms
		if(eta_pip.size()>=1 && eta_pim.size()>=1 && eta_gamma.size()>=2){
			double mpi0 = (eta_gamma.at(0) + eta_gamma.at(1)).M();
			double meta = (eta_gamma.at(0) + eta_gamma.at(1) + eta_pip.at(0) + eta_pim.at(0)).M();
			hmpi0->Fill(mpi0);
			hmeta->Fill(meta);

			hgamma_energy->Fill(eta_gamma.at(0).E());
			hgamma_energy->Fill(eta_gamma.at(1).E());

			Ngamma_tot2 += 2;
			if(eta_gamma.at(0).E()>0.05)Ngamma_selected2++;
			if(eta_gamma.at(1).E()>0.05)Ngamma_selected2++;


			if(eta_gamma.at(0).E()>0.05 && eta_gamma.at(1).E()>0.05){
				hmpi0_2->Fill(mpi0);
				hmeta_2->Fill(meta);
				Neta_final++;
			}
		}


	} // end of event loop



/*
	TCanvas *c1 = new TCanvas("c1","c1");
	hmpi0->Draw();
	hmpi0_2->SetLineColor(2);
	hmpi0_2->Draw("same");
	TCanvas *c2 = new TCanvas("c2","c2");
	hmeta->Draw();  */

	cout<<"Efficiency: "<<endl;
	cout<<num<<" "<<hmeta->GetEntries()<<" "<<(1.0*hmeta->GetEntries()/num)<<endl;
	cout<<num<<" "<<hmeta_2->GetEntries()<<" "<<(1.0*hmeta_2->GetEntries()/num)<<endl;

	cout<<endl<<endl<<" pip pid effi.: "<<1.0*Npip_selected/Npip_tot<<"   ="<<Npip_selected<<"/"<<Npip_tot<<endl;
	cout<<" pim pid effi.: "<<1.0*Npim_selected/Npim_tot<<"   ="<<Npim_selected<<"/"<<Npim_tot<<endl;
	cout<<" gamma Ecut effi.: "<<1.0*Ngamma_selected/Ngamma_tot<<"   ="<<Ngamma_selected<<"/"<<Ngamma_tot<<endl;
	cout<<" gamma Ecut effi. (v2): "<<1.0*Ngamma_selected2/Ngamma_tot2<<"   ="<<Ngamma_selected2<<"/"<<Ngamma_tot2<<endl;
	cout<<" total effi.: "<<1.0*Neta_final/num <<"   ="<<Neta_final<<"/"<<num<<endl;

	TFile outfile(output_file,"recreate");
	hmpi0->Write();
	hmpi0_2->Write();
	hmeta->Write();
	hmeta_2->Write();
	hpip_prob -> Write();
	hpip_charge -> Write();
	hpim_prob -> Write();
	hpim_charge -> Write();
	hgamma_energy -> Write();
	hDeltaTheta_pip->Write();
	hDeltaTheta_gamma->Write();

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
