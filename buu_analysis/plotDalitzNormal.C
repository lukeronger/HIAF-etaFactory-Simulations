{
	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(505,"XYZ");

	TCanvas c1("c1","c1",630,500);



	TFile file("output.root");
	tree->Draw("M2PipPi0 : M2PimPi0 >> h2(50,0.06,0.18, 50,0.06,0.18)","","colz");


	//gPad->SetLogz();
	h2->SetTitle("");
	h2->GetXaxis()->SetTitle("M^{2}(#pi^{-}#pi^{0}) / GeV^{2}");
	h2->GetXaxis()->SetTitleSize(0.06);
	h2->GetXaxis()->CenterTitle();
	h2->GetXaxis()->SetTitleOffset(1.05);
	h2->GetXaxis()->SetLabelSize(0.06);
	h2->GetYaxis()->SetTitle("M^{2}(#pi^{+}#pi^{0}) / GeV^{2}");
	h2->GetYaxis()->SetTitleSize(0.06);
	h2->GetYaxis()->CenterTitle();
	h2->GetYaxis()->SetTitleOffset(1.05);
	h2->GetYaxis()->SetLabelSize(0.06);
	h2->GetZaxis()->SetLabelSize(0.05);

	gPad->SetLeftMargin(0.135);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.03);
	gPad->SetRightMargin(0.137);

}
