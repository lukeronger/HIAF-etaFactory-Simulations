{
	gStyle->SetOptStat(1);
	gStyle->SetOptFit(1);
	gStyle->SetStatY(0.91);
	gStyle->SetStatX(0.93);
	//gStyle->SetStatW(0.4);
	//gStyle->SetStatH(0.4);
	gStyle->SetNdivisions(505,"XY");
	TCanvas c1("c1","c1",630,500);

	TFile file("../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-etaDecay-EEG-results.root");
	hmeta_2->Draw();
	hmeta_2->SetTitle("");
	hmeta_2->GetXaxis()->SetTitle("M(e^{+}e^{-}#gamma) / GeV");
	hmeta_2->GetXaxis()->SetTitleSize(0.06);
	hmeta_2->GetXaxis()->CenterTitle();
	hmeta_2->GetXaxis()->SetTitleOffset(1.05);
	hmeta_2->GetXaxis()->SetLabelSize(0.06);
	hmeta_2->GetYaxis()->SetTitle("Counts");
	hmeta_2->GetYaxis()->SetTitleSize(0.06);
	hmeta_2->GetYaxis()->CenterTitle();
	hmeta_2->GetYaxis()->SetTitleOffset(1.05);
	hmeta_2->GetYaxis()->SetLabelSize(0.06);
	hmeta_2->GetZaxis()->SetLabelSize(0.05);

	hmeta_2->GetXaxis()->SetRangeUser(0.48, 0.7);
	hmeta_2->SetLineWidth(2);
	hmeta_2->SetLineColor(4);

	//gPad->SetLogy();

	gPad->SetLeftMargin(0.145);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.08);
	gPad->SetRightMargin(0.06);


	hmeta_2->Fit("gaus");




}
