#include "TH1F.h"
#include "TH2F.h"
#include "TString.h"
#include "TCanvas.h"
#include "TProfile.h"
#include <vector>

void ana_etaDecay_EEG()
{

	/// Input the simulation data from ChnsRoot
	gSystem->Load("libfsim");
	TChain* t = new TChain("chnssim");
	t->Add("/data/rwang/simulation_works/HIAF-etaFactory-Simulations-localData2/ChnsRoot-data/run_fsim_EvtGen_HIAFeta_EEG_1.8GeV_2023.root");

	/// The output file:
	TString output_file = "../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-etaDecay-EEG-results.root";

	gStyle->SetOptStat(1);



	
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



	/// define some vectors
	vector<TLorentzVector>  eta_Ep;
	vector<TLorentzVector>  eta_Em;
	vector<TLorentzVector>  eta_gamma;
	vector<TLorentzVector>  eta_Ep_MC;
	vector<TLorentzVector>  eta_Em_MC;
	vector<TLorentzVector>  eta_gamma_MC;

	/// define some histograms
	TH1D * hmEE = new TH1D("hmEE","m_{ee}",300,0.01,0.58);
	TH1D * hmEE_2 = new TH1D("hmEE_2","",300,0.01,0.58);
	TH1D * hmeta = new TH1D("hmeta","m_{#eta}",300,0.0,0.9);
	TH1D * hmeta_MC = new TH1D("hmeta_MC","m_{#eta}",300,0.4,0.8);
	TH1D * hmeta_2 = new TH1D("hmeta_2","",300,0.0,0.9);
	TH1D * helec_prob = new TH1D("helec_prob","",400,-1,5);
	TH1D * helec_PionPID_prob = new TH1D("helec_PionPID_prob","",400,-1,5);
	TH1D * helec_charge = new TH1D("helec_charge","",200,-10,10);
	TH1D * hposi_prob = new TH1D("hposi_prob","",400,-1,5);
	TH1D * hposi_charge = new TH1D("hposi_charge","",200,-10,10);

	TH1D * hgamma_energy = new TH1D("hgamma_energy","",200,0,2);


	/// define some variables for particle counting
	int Nep_tot = 0;
	int Nep_selected = 0;
	int Nem_tot = 0;
	int Nem_selected = 0;
	int Ngamma_tot = 0;
	int Ngamma_selected = 0;
	int Ngamma_tot2 = 0;
	int Ngamma_selected2 = 0;
	int Neta_final = 0; 
	


	/// event loop starts
	/// doing the analysis and dumping the results into the histograms
	Int_t num = t->GetEntries();
	cout<<"  "<<num<<" total input events"<<endl;
	Int_t nn(0);
	//num = 10000;
	for(Int_t j=0; j<num;j++)
	{
		t->GetEntry(j);

		eta_Ep.clear();
		eta_Em.clear();
		eta_gamma.clear();
		eta_Ep_MC.clear();
		eta_Em_MC.clear();
		eta_gamma_MC.clear();

		

		if(fCands->GetEntriesFast()>=2)
		for (Int_t i1=0; i1<fCands->GetEntriesFast(); i1++)
		{
			iCand1 = (ChnsPidCandidate*)fCands->At(i1);
			iCand1_prob = (ChnsPidProbability*)fCands_prob->At(i1);

			int mcindex = iCand1->GetMcIndex();
			iMC = (ChnsMCTrack*)fMC->At(mcindex);
			int pdg = iMC->GetPdgCode();



			if(pdg==-11 && iCand1_prob->GetElectronPidProb()>0.1 && iCand1->GetCharge()>0) {
//				cout<<"e^+ find,    ";
				TLorentzVector ep = iCand1->GetLorentzVector();
				ep.SetE( sqrt(ep.E()*ep.E() - ep.M()*ep.M() + 0.000511*0.000511)  );
				//cout<<ep.M()<<endl;
				eta_Ep.push_back(ep);
				eta_Ep_MC.push_back(iMC->Get4Momentum());
				Nep_selected++;
			}
			else if(pdg==11 && iCand1_prob->GetElectronPidProb()>0.1 && iCand1->GetCharge()<0) {
//				cout<<"e^- find,    ";
				TLorentzVector em = iCand1->GetLorentzVector();
				em.SetE( sqrt(em.E()*em.E() - em.M()*em.M() + 0.000511*0.000511)  );
				eta_Em.push_back(em);
				eta_Em_MC.push_back(iMC->Get4Momentum());
				Nem_selected++;
			}

			if(pdg==-11 ) {
				hposi_prob -> Fill(iCand1_prob->GetElectronPidProb());
				hposi_charge -> Fill(iCand1->GetCharge() );
				Nep_tot++;
			}
			else if(pdg==11 ) {
				helec_prob -> Fill(iCand1_prob->GetElectronPidProb());
				helec_PionPID_prob -> Fill(iCand1_prob->GetPionPidProb());
				helec_charge -> Fill(iCand1->GetCharge() );
				Nem_tot++;
			}
		} // end of charged track loop
//		cout<<"Ncharged_tracks="<<fCands->GetEntriesFast()<<",   ";


		if(fNeuts->GetEntriesFast()>=1)
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
				eta_gamma_MC.push_back(iMC->Get4Momentum());	

				Ngamma_tot++;
			}
			if(pdg==22 &&  iCand1->GetMomentum().Mag()>0.05  )  Ngamma_selected++;
		} // end of neutral track loop
//		cout<<"Nneutral_tracks="<<fNeuts->GetEntriesFast()<<endl;


		if(eta_Ep.size()>=1 && eta_Em.size()>=1 && eta_gamma.size()>=1){
			double mEE = (eta_Ep.at(0) + eta_Em.at(0)).M();
			double meta = (eta_gamma.at(0) + eta_Ep.at(0) + eta_Em.at(0)).M();
			double meta_MC = (eta_gamma_MC.at(0) + eta_Ep_MC.at(0) + eta_Em_MC.at(0)).M();
			hmEE->Fill(mEE);
			hmeta->Fill(meta);
			hmeta_MC->Fill(meta_MC);

			hgamma_energy->Fill(eta_gamma.at(0).E());

			Ngamma_tot2 ++;
			if(eta_gamma.at(0).E()>0.05)Ngamma_selected2++;

			//if(eta_gamma.at(0).E()>0.05 && eta_Ep.at(0).E()>0.05 && eta_Em.at(0).E()>0.05){
			if(eta_gamma.at(0).E()>0.05 ){
				hmEE_2->Fill(mEE);
				hmeta_2->Fill(meta);
				Neta_final++;
			}
		}






	} // end of event loop



/*
	TCanvas *c1 = new TCanvas("c1","c1");
	hmEE->Draw();
	hmEE_2->SetLineColor(2);
	hmEE_2->Draw("same");
	TCanvas *c2 = new TCanvas("c2","c2");
	hmeta->Draw();  */

	cout<<"Efficiency: "<<endl;
	cout<<num<<" "<<hmeta->GetEntries()<<" "<<(1.0*hmeta->GetEntries()/num)<<endl;
	cout<<num<<" "<<hmeta_2->GetEntries()<<" "<<(1.0*hmeta_2->GetEntries()/num)<<endl;

	cout<<endl<<endl<<" positron pid effi.: "<<1.0*Nep_selected/Nep_tot<<"   ="<<Nep_selected<<"/"<<Nep_tot<<endl;
	cout<<" electron pid effi.: "<<1.0*Nem_selected/Nem_tot<<"   ="<<Nem_selected<<"/"<<Nem_tot<<endl;
	cout<<" gamma Ecut effi.: "<<1.0*Ngamma_selected/Ngamma_tot<<"   ="<<Ngamma_selected<<"/"<<Ngamma_tot<<endl;
	cout<<" gamma Ecut effi. (v2): "<<1.0*Ngamma_selected2/Ngamma_tot2<<"   ="<<Ngamma_selected2<<"/"<<Ngamma_tot2<<endl;
	cout<<" total effi.: "<<1.0*Neta_final/num <<"   ="<<Neta_final<<"/"<<num<<endl;



	TFile outfile(output_file,"recreate");
	hmEE->Write();
	hmEE_2->Write();
	hmeta->Write();
	hmeta_MC->Write();
	hmeta_2->Write();
	helec_prob -> Write(); 
	helec_charge -> Write(); 
	hposi_prob -> Write(); 
	hposi_charge -> Write(); 
	hgamma_energy -> Write(); 
	helec_PionPID_prob -> Write();

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
