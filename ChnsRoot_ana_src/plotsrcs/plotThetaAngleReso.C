{
	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(505,"Y");
	gStyle->SetNdivisions(502,"X");
	TCanvas c1("c1","c1",630,500);

	TFile file("../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-etaDecay-3pi-results.root");
	hDeltaTheta_gamma->Draw();
	hDeltaTheta_gamma->SetTitle("");
	hDeltaTheta_gamma->GetXaxis()->SetTitle("#theta^{REC} - #theta^{MC} (rad)");
	hDeltaTheta_gamma->GetXaxis()->SetTitleSize(0.06);
	hDeltaTheta_gamma->GetXaxis()->SetNdivisions(505);
	hDeltaTheta_gamma->GetXaxis()->CenterTitle();
	hDeltaTheta_gamma->GetXaxis()->SetTitleOffset(1.05);
	hDeltaTheta_gamma->GetXaxis()->SetLabelSize(0.06);
	hDeltaTheta_gamma->GetYaxis()->SetTitle("Counts");
	hDeltaTheta_gamma->GetYaxis()->SetTitleSize(0.06);
	hDeltaTheta_gamma->GetYaxis()->CenterTitle();
	hDeltaTheta_gamma->GetYaxis()->SetTitleOffset(1.05);
	hDeltaTheta_gamma->GetYaxis()->SetLabelSize(0.06);
	hDeltaTheta_gamma->GetZaxis()->SetLabelSize(0.05);

	//gPad->SetLogy();

	//hDeltaTheta_gamma->GetXaxis()->SetRangeUser(-0.1,1.1);
	hDeltaTheta_gamma->GetXaxis()->SetRangeUser(-0.2,0.2);
	hDeltaTheta_gamma->SetLineColor(4);
	hDeltaTheta_gamma->SetLineWidth(2);

/*	double y_maximum = 1.8*hDeltaTheta_gamma->GetMaximum();
	TLine *li = new TLine(0.05,0,  0.05,y_maximum);
	li->SetLineWidth(2);
	li->SetLineColor(2);
	li->SetLineStyle(2);
	li->Draw();  */

	gPad->SetLeftMargin(0.145);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.08);
	gPad->SetRightMargin(0.04);


}
