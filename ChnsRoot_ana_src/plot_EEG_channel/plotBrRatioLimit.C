{
	double Neta_produced = 5.9e11;

	gROOT->ProcessLine(".L ../plot_templates/myDrawTools.C");

	TFile file_effi("efficiency.root");
	TH1D *heffi = (TH1D *) hRatio->Clone();
	//heffi->Draw();

	TCanvas *c = CreateCanvas();

	TFile file("../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-GiBUU-EEG-background-with-neutrons-results-v2.root");
	hmEE_2->Draw();
	hmEE_2->Scale(5.9e11/39150000/0.0076);
//	hmEEG_2->Fit("gaus");
	TH1D *hbg = (TH1D *) hmEE_2->Clone();

	TFile file2("../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-etaDecay-EEG-MC-and-rec-results.root");
	hmEE_2->Draw("same");
	//for(int i=1;  i<=43;  i++) if(hmEE_2->GetBinContent(i)<=1) hmEE_2->SetBinContent(i, 1);
	hmEE_2->Scale(0.0069 * 5.9e11/1.0e7);
	hmEE_2->SetLineColor(2);
	hmEE_2->SetLineWidth(2);



	TLatex tex;
	tex.SetTextSize(0.06);
	tex.SetTextFont(42);


	hbg->Add(hmEE_2);
	for(int i=1;  i<=43;  i++) hbg->SetBinError(i, sqrt(hbg->GetBinContent(i)));
	TH1D *hbg_2 = (TH1D *) hbg->Clone();


	//for(int i=1;  i<=43;  i++) if(hbg->GetBinContent(i)<=1) hbg->SetBinContent(i, 1);
	for(int i=1;  i<=43;  i++){
		double nbg = hbg->GetBinContent(i);
		double effi = heffi->GetBinContent(i) / 100.; cout<<"  "<<effi<<endl;
		double sensi = 3*sqrt(nbg) / Neta_produced / effi;
		hbg->SetBinContent(i, sensi);
	}
	hbg->SetLineColor(4);
	hbg->SetLineWidth(2);
	//heffi->Draw();
	heffi->Print();

	CreateCanvas();
	CreateFrame(0,0.52, 0.6*hbg->GetMinimum(),3*hbg->GetMaximum(),    "M(e^{+}e^{-}) [GeV/c^{2}]", "Branching Ratio Upperlimit");
	hbg->Draw("hist same");
	//hbg->Draw("same");
	gPad->SetLogy();
	gPad->SetTickx();
	gPad->SetTicky();
	//gPad->SetTopMargin(0.05);

	//tex.DrawLatex(0.3,4e-7, "#eta#rightarrowA#gamma#rightarrowe^{+}e^{-}#gamma");







}
