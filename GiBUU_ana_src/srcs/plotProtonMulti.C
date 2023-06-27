{
	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(505,"XY");
	



	TCanvas c1("c1","c1",630,500);


	TFile ff("../anaDataBG/hiaf-bg-results.root");
	hProtonMulti->Draw();
	

	//gPad->SetLogz();
	hProtonMulti->SetTitle("");
	hProtonMulti->GetXaxis()->SetTitle("Multiplicity of proton");
	hProtonMulti->GetXaxis()->SetTitleSize(0.06);
	hProtonMulti->GetXaxis()->CenterTitle();
	hProtonMulti->GetXaxis()->SetTitleOffset(1.05);
	hProtonMulti->GetXaxis()->SetLabelSize(0.06);
	hProtonMulti->GetYaxis()->SetTitle("Counts");
	hProtonMulti->GetYaxis()->SetTitleSize(0.06);
	hProtonMulti->GetYaxis()->CenterTitle();
	hProtonMulti->GetYaxis()->SetTitleOffset(1.28);
	hProtonMulti->GetYaxis()->SetLabelSize(0.06);
	hProtonMulti->GetZaxis()->SetLabelSize(0.05);


	hProtonMulti->SetLineColor(46);
	hProtonMulti->SetFillColor(46);


	gPad->SetLeftMargin(0.155);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.07);
	gPad->SetRightMargin(0.04);






}
