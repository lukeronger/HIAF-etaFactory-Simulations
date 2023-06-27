{
	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(505,"XY");
	



	TCanvas c1("c1","c1",630,500);


	TFile ff("../anaDataBG/hiaf-bg-results.root");
	hChargedPionMomentum->Draw();
	

	//gPad->SetLogz();
	hChargedPionMomentum->SetTitle("");
	hChargedPionMomentum->GetXaxis()->SetTitle("Momentum of #pi^{#pm} (GeV/c)");
	hChargedPionMomentum->GetXaxis()->SetTitleSize(0.06);
	hChargedPionMomentum->GetXaxis()->CenterTitle();
	hChargedPionMomentum->GetXaxis()->SetTitleOffset(1.05);
	hChargedPionMomentum->GetXaxis()->SetLabelSize(0.06);
	hChargedPionMomentum->GetYaxis()->SetTitle("Counts");
	hChargedPionMomentum->GetYaxis()->SetTitleSize(0.06);
	hChargedPionMomentum->GetYaxis()->CenterTitle();
	hChargedPionMomentum->GetYaxis()->SetTitleOffset(1.28);
	hChargedPionMomentum->GetYaxis()->SetLabelSize(0.06);
	hChargedPionMomentum->GetZaxis()->SetLabelSize(0.05);


	hChargedPionMomentum->SetLineColor(42);
	hChargedPionMomentum->SetFillColor(42);


	gPad->SetLeftMargin(0.155);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.07);
	gPad->SetRightMargin(0.04);






}
