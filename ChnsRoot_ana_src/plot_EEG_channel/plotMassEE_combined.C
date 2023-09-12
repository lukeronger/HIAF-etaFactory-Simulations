{

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






	TCanvas *c2 = CreateCanvas();
	hbg->Add(hmEE_2);
	CreateFrame(0,0.5, 0,1.2*hbg->GetMaximum(),    "M(e^{+}e^{-}) (GeV)", "Counts");
	hbg->SetLineColor(4);
	hbg->SetLineWidth(2);
	hbg->Draw("same");




}
