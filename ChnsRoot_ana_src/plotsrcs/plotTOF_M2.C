{
	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(505,"XY");
	TCanvas c1("c1","c1",630,500);

	TChain *chain = new TChain("chnssim", "chnssim");
	chain->AddFile("/data2/rwang/githubs/HIAF-etaFactory-Simulations-localData/ChnsRoot-data/run_fsim_EvtGen_HIAFeta_1.8GeV_2023.root");
	chain->AddFile("/data/rwang/simulation_works/HIAF-etaFactory-Simulations-localData2/ChnsRoot-data/run_fsim_EvtGen_HIAFeta_EEG_1.8GeV_2023.root");
	//TFile file("/data2/rwang/githubs/HIAF-etaFactory-Simulations-localData/ChnsRoot-data/run_fsim_EvtGen_HIAFeta_1.8GeV_2023.root");
	chain->Draw("PidChargedCand.fTofM2  >>hpip(500,-0.05,0.1)","","");
	hpip->Draw("col");
	hpip->SetTitle("");
	hpip->GetXaxis()->SetTitle("m^{2} / GeV^{2}c^{-4}");
	hpip->GetXaxis()->SetTitleSize(0.06);
	hpip->GetXaxis()->CenterTitle();
	hpip->GetXaxis()->SetTitleOffset(1.05);
	hpip->GetXaxis()->SetLabelSize(0.06);
	hpip->GetYaxis()->SetTitle("Counts");
	hpip->GetYaxis()->SetTitleSize(0.06);
	hpip->GetYaxis()->CenterTitle();
	hpip->GetYaxis()->SetTitleOffset(1.05);
	hpip->GetYaxis()->SetLabelSize(0.06);
	hpip->GetZaxis()->SetLabelSize(0.05);

	gPad->SetLogy();

	//hpip->GetXaxis()->SetRangeUser(-0.1,1.1);
	//hpip->SetLineColor(4);
	//hpip->SetLineWidth(2);

	/*double y_maximum = 1.8*hpip->GetMaximum();
	TLine *li = new TLine(0.1,0, 0.1,y_maximum);
	li->SetLineWidth(2);
	li->SetLineColor(2);
	li->SetLineStyle(2);
	li->Draw();  */

	gPad->SetLeftMargin(0.145);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.03);
	gPad->SetRightMargin(0.03);


	double y_maximum = 1e5; //0.5  * hpip->GetMaximum();
	TLatex *tex = new TLatex(0.05, y_maximum, "TOF");
	tex->SetTextSize(0.07);
	tex->Draw();




	//TFile file2("/data/rwang/simulation_works/HIAF-etaFactory-Simulations-localData2/ChnsRoot-data/run_fsim_EvtGen_HIAFeta_EEG_1.8GeV_2023.root");
	//chnssim->Draw("PidChargedCand.fTpcMeanDEDX:sqrt(pow(PidChargedCand.fEnergy,2) - 0.139*0.139) >>hele(200,0,1,500,0,30)","","colsame");
	//chnssim->Draw("PidChargedCand.fTpcMeanDEDX:PidChargedCand.fEnergy >>hele(200,0,1,500,0,30)","","col");

}
