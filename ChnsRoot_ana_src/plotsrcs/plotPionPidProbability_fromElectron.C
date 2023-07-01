{
	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(505,"XY");
	TCanvas c1("c1","c1",630,500);

	TFile file("../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-etaDecay-EEG-results.root");
	helec_PionPID_prob->Draw();
	helec_PionPID_prob->SetTitle("");
	helec_PionPID_prob->GetXaxis()->SetTitle("PionPidProb");
	helec_PionPID_prob->GetXaxis()->SetTitleSize(0.06);
	helec_PionPID_prob->GetXaxis()->CenterTitle();
	helec_PionPID_prob->GetXaxis()->SetTitleOffset(1.05);
	helec_PionPID_prob->GetXaxis()->SetLabelSize(0.06);
	helec_PionPID_prob->GetYaxis()->SetTitle("Counts");
	helec_PionPID_prob->GetYaxis()->SetTitleSize(0.06);
	helec_PionPID_prob->GetYaxis()->CenterTitle();
	helec_PionPID_prob->GetYaxis()->SetTitleOffset(1.25);
	helec_PionPID_prob->GetYaxis()->SetLabelSize(0.06);
	helec_PionPID_prob->GetZaxis()->SetLabelSize(0.05);

	//gPad->SetLogy();

	helec_PionPID_prob->GetXaxis()->SetRangeUser(-0.1,1.1);
	helec_PionPID_prob->SetLineColor(4);
	helec_PionPID_prob->SetLineWidth(2);

	double y_maximum = 1.8*helec_PionPID_prob->GetMaximum();
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
