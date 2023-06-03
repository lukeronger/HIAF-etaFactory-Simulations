{
	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(505,"Y");
	gStyle->SetNdivisions(502,"X");
	TCanvas c1("c1","c1",630,500);

	TFile file("../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-etaDecay-3pi-results.root");
	hgamma_energy->Draw();
	hgamma_energy->SetTitle("");
	hgamma_energy->GetXaxis()->SetTitle("Photon energy (GeV)");
	hgamma_energy->GetXaxis()->SetTitleSize(0.06);
	hgamma_energy->GetXaxis()->CenterTitle();
	hgamma_energy->GetXaxis()->SetTitleOffset(1.05);
	hgamma_energy->GetXaxis()->SetLabelSize(0.06);
	hgamma_energy->GetYaxis()->SetTitle("Counts");
	hgamma_energy->GetYaxis()->SetTitleSize(0.06);
	hgamma_energy->GetYaxis()->CenterTitle();
	hgamma_energy->GetYaxis()->SetTitleOffset(1.05);
	hgamma_energy->GetYaxis()->SetLabelSize(0.06);
	hgamma_energy->GetZaxis()->SetLabelSize(0.05);

	gPad->SetLogy();

	//hgamma_energy->GetXaxis()->SetRangeUser(-0.1,1.1);
	hgamma_energy->GetXaxis()->SetRangeUser(0,1);
	hgamma_energy->SetLineColor(4);
	hgamma_energy->SetLineWidth(2);

	double y_maximum = 1.8*hgamma_energy->GetMaximum();
	TLine *li = new TLine(0.05,0,  0.05,y_maximum);
	li->SetLineWidth(2);
	li->SetLineColor(2);
	li->SetLineStyle(2);
	li->Draw();

	gPad->SetLeftMargin(0.145);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.03);
	gPad->SetRightMargin(0.03);


}
