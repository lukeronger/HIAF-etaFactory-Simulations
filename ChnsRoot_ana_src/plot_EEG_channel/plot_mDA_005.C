{
	gROOT->ProcessLine(".L ../plot_templates/myDrawTools.C");


	TFile file("../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-etaDecay-EEG-mDarkPhoton005-results.root");



	TLatex tex;
	tex.SetTextSize(0.06);
	tex.SetTextFont(42);

	gStyle->SetOptFit(1);	

	TCanvas *c = CreateCanvas();

	hmEE_2->Draw("hist ");
	hmEE_2->Fit("gaus","","+");
	TH2F *frame = CreateFrame_for_3Times2Pads(0,0.1,0,1200, "M(e^{+}e^{-}) (GeV)", "Counts");
	//frame->SetMinimum(1);
	//frame->SetMaximum(1.1 * helecMC->GetMaximum());
	hmEE_2->SetLineColor(4);
	hmEE_2->SetLineWidth(2);
	hmEE_2->Draw("hist same");
	//hmEE_2->Fit("gaus","","+");
	//gPad->SetRightMargin(0.14);
	//tex.DrawLatex(96,1.3, "MC events");

gaus->Draw("same");




}
