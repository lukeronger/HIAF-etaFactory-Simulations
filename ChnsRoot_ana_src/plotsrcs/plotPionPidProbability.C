{
	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(505,"XY");
	TCanvas c1("c1","c1",630,500);

	TFile file("../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-etaDecay-3pi-results.root");
	hpip_prob->Draw();
	hpip_prob->SetTitle("");
	hpip_prob->GetXaxis()->SetTitle("PionPidProb");
	hpip_prob->GetXaxis()->SetTitleSize(0.06);
	hpip_prob->GetXaxis()->CenterTitle();
	hpip_prob->GetXaxis()->SetTitleOffset(1.05);
	hpip_prob->GetXaxis()->SetLabelSize(0.06);
	hpip_prob->GetYaxis()->SetTitle("Counts");
	hpip_prob->GetYaxis()->SetTitleSize(0.06);
	hpip_prob->GetYaxis()->CenterTitle();
	hpip_prob->GetYaxis()->SetTitleOffset(1.25);
	hpip_prob->GetYaxis()->SetLabelSize(0.06);
	hpip_prob->GetZaxis()->SetLabelSize(0.05);

	//gPad->SetLogy();

	hpip_prob->GetXaxis()->SetRangeUser(-0.1,1.1);
	hpip_prob->SetLineColor(4);
	hpip_prob->SetLineWidth(2);

	double y_maximum = 1.8*hpip_prob->GetMaximum();
	TLine *li = new TLine(0.1,0, 0.1,y_maximum);
	li->SetLineWidth(2);
	li->SetLineColor(2);
	li->SetLineStyle(2);
	li->Draw();

	gPad->SetLeftMargin(0.145);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.08);
	gPad->SetRightMargin(0.04);


}
