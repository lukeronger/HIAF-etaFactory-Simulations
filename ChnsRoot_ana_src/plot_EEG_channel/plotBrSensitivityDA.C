{
	double Neta_produced = 3.11e11;
	double Neta_sim = 84235;
	double scaleup = Neta_produced  /  Neta_sim ;
	double effi = 0.6;



	gROOT->ProcessLine(".L ../plot_templates/myDrawTools.C");


	TCanvas *c = CreateCanvas();
	TFile file("../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-GiBUU-EEG-background-with-neutrons-results.root");
	hmEE_2->Draw();
//	hmEEG_2->Fit("gaus");
	TH1D *hbg = (TH1D *) hmEE_2->Clone();

	TFile file2("../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-etaDecay-EEG-results.root");
	hmEE_2->Draw("same");
	hmEE_2->SetLineColor(2);
	hmEE_2->SetLineWidth(2);




	TLatex tex;
	tex.SetTextSize(0.06);
	tex.SetTextFont(42);


	TCanvas *c2 = CreateCanvas();
	hbg->Add(hmEE_2);
	for(int i=1;  i<=43;  i++) if(hbg->GetBinContent(i)<=1) hbg->SetBinContent(i, 1);
	for(int i=1;  i<=43;  i++){
		double nbg = hbg->GetBinContent(i);
		nbg *= scaleup;
		double sensi = 3*sqrt(nbg) / Neta_produced / effi;
		hbg->SetBinContent(i, sensi);
	}
	hbg->SetLineColor(4);
	hbg->SetLineWidth(2);

	CreateFrame(0,0.5, 0.6*hbg->GetMinimum(),3*hbg->GetMaximum(),    "M(e^{+}e^{-}) (GeV)", "Branching ratio uplimit");
	hbg->Draw("same");
	gPad->SetLogy();
	gPad->SetTopMargin(0.05);

	tex.DrawLatex(0.3,4e-7, "#eta#rightarrowA#gamma#rightarrowe^{+}e^{-}#gamma");



}
