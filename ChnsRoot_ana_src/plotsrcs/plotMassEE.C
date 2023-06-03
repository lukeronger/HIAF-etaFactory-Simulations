{
	gStyle->SetOptStat("emr");
	//gStyle->SetOptStat(1);
	gStyle->SetOptFit(1);
	gStyle->SetStatY(0.91);
	gStyle->SetStatX(0.93);
	//gStyle->SetStatW(0.4);
	//gStyle->SetStatH(0.4);
	gStyle->SetNdivisions(505,"XY");


	TCanvas c1("c1","c1",630,500);

	TFile file("../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-etaDecay-EEG-results.root");
	hmEE_2->Draw();
	hmEE_2->SetTitle("");
	hmEE_2->GetXaxis()->SetTitle("M(e^{+}e^{-}) / GeV");
	hmEE_2->GetXaxis()->SetTitleSize(0.06);
	hmEE_2->GetXaxis()->CenterTitle();
	hmEE_2->GetXaxis()->SetTitleOffset(1.05);
	hmEE_2->GetXaxis()->SetLabelSize(0.06);
	hmEE_2->GetYaxis()->SetTitle("Counts");
	hmEE_2->GetYaxis()->SetTitleSize(0.06);
	hmEE_2->GetYaxis()->CenterTitle();
	hmEE_2->GetYaxis()->SetTitleOffset(1.05);
	hmEE_2->GetYaxis()->SetLabelSize(0.06);
	hmEE_2->GetZaxis()->SetLabelSize(0.05);

	//hmEE_2->GetXaxis()->SetRangeUser(0.48, 0.7);
	hmEE_2->SetLineWidth(2);
	hmEE_2->SetLineColor(4);

	//gPad->SetLogy();

	gPad->SetLeftMargin(0.145);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.08);
	gPad->SetRightMargin(0.06);


	//hmEE_2->Fit("gaus");



	//TPaveStats *statsbox = (TPaveStats *)(gPad->GetPrimitive("stats"));
	//statsbox->Print();
	//statsbox->SetName("invariant mass");

}
