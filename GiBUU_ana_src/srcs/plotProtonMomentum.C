{
	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(505,"XY");
	



	TCanvas c1("c1","c1",630,500);


	TFile ff("../anaDataBG/hiaf-bg-results.root");
	hProtonMomentum->Draw();
	

	//gPad->SetLogz();
	hProtonMomentum->SetTitle("");
	hProtonMomentum->GetXaxis()->SetTitle("Momentum of proton (GeV/c)");
	hProtonMomentum->GetXaxis()->SetTitleSize(0.06);
	hProtonMomentum->GetXaxis()->CenterTitle();
	hProtonMomentum->GetXaxis()->SetTitleOffset(1.05);
	hProtonMomentum->GetXaxis()->SetLabelSize(0.06);
	hProtonMomentum->GetYaxis()->SetTitle("Counts");
	hProtonMomentum->GetYaxis()->SetTitleSize(0.06);
	hProtonMomentum->GetYaxis()->CenterTitle();
	hProtonMomentum->GetYaxis()->SetTitleOffset(1.28);
	hProtonMomentum->GetYaxis()->SetLabelSize(0.06);
	hProtonMomentum->GetZaxis()->SetLabelSize(0.05);


	hProtonMomentum->SetLineColor(30);
	hProtonMomentum->SetFillColor(30);


	gPad->SetLeftMargin(0.155);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.07);
	gPad->SetRightMargin(0.04);






}
