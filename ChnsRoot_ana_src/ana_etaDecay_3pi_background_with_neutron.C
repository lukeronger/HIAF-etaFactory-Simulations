#include "TH1F.h"
#include "TH2F.h"
#include "TString.h"
#include "TCanvas.h"
#include "TProfile.h"
#include <vector>

void ana_etaDecay_3pi_background_with_neutron()
{
	TString output_file = "../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-etaDecay-3pi-background-with-neutron-results.root";

	gStyle->SetOptStat(1);

	gSystem->Load("libfsim");
	TChain* t = new TChain("chnssim");
	t->Add("/data/rwang/simulation_works/HIAF-etaFactory-Simulations-localData2/ChnsRoot-data/run_fsim_EvtGen_HIAFeta3pideacy_background_with_neutron_1.8GeV_2023.root");

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
	vector<TLorentzVector>  eta_gamma_pure;



	TH1D * hmpi0 = new TH1D("hmpi0","m_{#pi0}",600,0,0.3);
	TH1D * hmpi0_2 = new TH1D("hmpi0_2","",600,0,0.3);
	TH1D * hmpi0_3PiChannel = new TH1D("hmpi0_3PiChannel","m_{#pi0}",600,0,0.3);
	TH1D * hmpi0_3PiChannel_2 = new TH1D("hmpi0_3PiChannel_2","",600,0,0.3);
	TH1D * hmeta = new TH1D("hmeta","m_{#eta}",600,0.2,1.2);
	TH1D * hmeta_2 = new TH1D("hmeta_2","",600,0.2,1.2);
	TH1D * hmeta_WO_neutrons = new TH1D("hmeta_WO_neutrons","",600,0.2,1.2);
	TH1D * hmeta_WO_neutrons_2 = new TH1D("hmeta_WO_neutrons_2","",600,0.2,1.2);
	TH1D * hn_energy = new TH1D("hn_energy","",600,0,2);

	TH1D * hDeltaTheta_n = new TH1D("hDeltaTheta_n","",1000,-1,1);

	
	long Ntrigered = 0;
	int EMCal_hit;

	Int_t num = t->GetEntries();
	cout<< num <<"  input events "<<endl<<endl;
	Int_t nn(0);
	//num = 100000;
	for(Int_t j=0; j<num;j++)
	{
		t->GetEntry(j);

		eta_pip.clear();
		eta_pim.clear();
		eta_gamma.clear();
		eta_gamma_pure.clear();
		
		EMCal_hit = 0;
		

		//if(fCands->GetEntriesFast()>=2)
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
				if(iCand1->GetEmcCalEnergy()>0.05) EMCal_hit = 1;
			}
			else if(pdg==-211 && iCand1_prob->GetPionPidProb()>0.1 && iCand1->GetCharge()<0) {
//				cout<<"pi- find,    ";
				TLorentzVector pim = iCand1->GetLorentzVector();
				eta_pim.push_back(pim);
				if(iCand1->GetEmcCalEnergy()>0.05) EMCal_hit = 1;
			}
			else if(pdg==2212  ) {
//				cout<<"proton find,    ";
				//TLorentzVector prot = iCand1->GetLorentzVector();
				//eta_pim.push_back(pim);
				if(iCand1->GetEmcCalEnergy()>0.06) EMCal_hit = 1;
			}
		} // end of charged track loop
//		cout<<"Ncharged_tracks="<<fCands->GetEntriesFast()<<",   ";


		//if(fNeuts->GetEntriesFast()>=2)
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
				eta_gamma_pure.push_back(gamma);	
				if(gamma.E()>0.05) EMCal_hit = 1;
			}
			if(pdg==2112){
//				cout<<"miss-identified neutorn find,   ";
				TVector3 v3_gamma = iCand1->GetMomentum();
				double theta = v3_gamma.Theta();
				double phi = v3_gamma.Phi();
				double energy = iCand1->GetEmcCalEnergy();
				hn_energy -> Fill(energy);
				v3_gamma.SetX(energy * sin(theta) * cos(phi));
				v3_gamma.SetY(energy * sin(theta) * sin(phi));
				v3_gamma.SetZ(energy * cos(theta) );
				hDeltaTheta_n->Fill(theta - iMC->Get4Momentum().Theta() );

				TLorentzVector gamma(v3_gamma, v3_gamma.Mag());
				eta_gamma.push_back(gamma);	
				if(energy>0.05) EMCal_hit = 1;
			}
		} // end of neutral track loop
//		cout<<"Nneutral_tracks="<<fNeuts->GetEntriesFast()<<endl;


		if(EMCal_hit>0)Ntrigered++;


		vector<TLorentzVector>  eta_gamma_cpy;
		eta_gamma_cpy.clear();
		for(int i=0; i<eta_gamma.size(); i++) eta_gamma_cpy.push_back( eta_gamma.at(i) );



		if(eta_pip.size()>=1 && eta_pim.size()>=1 && eta_gamma.size()>=2){
			while(eta_gamma.size()>=2){
				for(int i=1;i<eta_gamma.size();i++){
					double mpi0 = (eta_gamma.at(0) + eta_gamma.at(i)).M();
					double meta = (eta_gamma.at(0) + eta_gamma.at(i) + eta_pip.at(0) + eta_pim.at(0)).M();
					//cout<<mpi0<<"    "<<meta<<endl;
					hmpi0_3PiChannel->Fill(mpi0);
					hmeta->Fill(meta);

					if(eta_gamma.at(0).E()>0.05 && eta_gamma.at(i).E()>0.05){
						hmpi0_3PiChannel_2->Fill(mpi0);
						if(mpi0>0.12 && mpi0<0.155)
							hmeta_2->Fill(meta);
					}

				}
				eta_gamma.erase(eta_gamma.begin());
			}

		}

		if(eta_pip.size()>=1 && eta_pim.size()>=1 && eta_gamma_pure.size()>=2){
			double mpi0 = (eta_gamma_pure.at(0) + eta_gamma_pure.at(1)).M();
			double meta = (eta_gamma_pure.at(0) + eta_gamma_pure.at(1) + eta_pip.at(0) + eta_pim.at(0)).M();
			//cout<<mpi0<<"    "<<meta<<endl;
			hmeta_WO_neutrons->Fill(meta);

			if(eta_gamma_pure.at(0).E()>0.05 && eta_gamma_pure.at(1).E()>0.05){
				if(mpi0>0.12 && mpi0<0.155) hmeta_WO_neutrons_2->Fill(meta);
			}
		}




		while(eta_gamma_cpy.size()>=2){
			for(int i=1;i<eta_gamma_cpy.size();i++){
				double mpi0 = (eta_gamma_cpy.at(0) + eta_gamma_cpy.at(i)).M();
				hmpi0->Fill(mpi0);

				if(eta_gamma_cpy.at(0).E()>0.05 && eta_gamma_cpy.at(i).E()>0.05){
					hmpi0_2->Fill(mpi0);
				}
			}
			eta_gamma_cpy.erase(eta_gamma_cpy.begin());
		}











	} // end of event loop



/*
	TCanvas *c1 = new TCanvas("c1","c1");
	hmpi0_3PiChannel->Draw();
	hmpi0_3PiChannel_2->SetLineColor(2);
	hmpi0_3PiChannel_2->Draw("same");
	TCanvas *c2 = new TCanvas("c2","c2");
	hmeta->Draw();  */

	cout<<"Efficiency: "<<endl;
	cout<<num<<" "<<hmeta->GetEntries()<<" "<<(1.0*hmeta->GetEntries()/num)<<endl;
	cout<<num<<" "<<hmeta_2->GetEntries()<<" "<<(1.0*hmeta_2->GetEntries()/num)<<endl;


	TFile outfile(output_file,"recreate");
	hmpi0_3PiChannel->Write();
	hmpi0_3PiChannel_2->Write();
	hmpi0->Write();
	hmpi0_2->Write();
	hmeta->Write();
	hmeta_2->Write();
	hn_energy->Write();
	hDeltaTheta_n->Write();
	hmeta_WO_neutrons->Write();
	hmeta_WO_neutrons_2->Write();

	outfile.Close();


	cout<<"total events: "<< num <<endl;
	cout<<"triggeer: "<< Ntrigered <<endl;

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
