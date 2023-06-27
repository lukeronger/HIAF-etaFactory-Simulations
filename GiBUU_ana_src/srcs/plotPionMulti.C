{
	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(505,"XY");
	



	TCanvas c1("c1","c1",630,500);


	TFile ff("../anaDataBG/hiaf-bg-results.root");
	hChargedPionMulti->Draw();
	

	//gPad->SetLogz();
	hChargedPionMulti->SetTitle("");
	hChargedPionMulti->GetXaxis()->SetTitle("Multiplicity of #pi^{#pm} ");
	hChargedPionMulti->GetXaxis()->SetTitleSize(0.06);
	hChargedPionMulti->GetXaxis()->CenterTitle();
	hChargedPionMulti->GetXaxis()->SetTitleOffset(1.05);
	hChargedPionMulti->GetXaxis()->SetLabelSize(0.06);
	hChargedPionMulti->GetYaxis()->SetTitle("Counts");
	hChargedPionMulti->GetYaxis()->SetTitleSize(0.06);
	hChargedPionMulti->GetYaxis()->CenterTitle();
	hChargedPionMulti->GetYaxis()->SetTitleOffset(1.28);
	hChargedPionMulti->GetYaxis()->SetLabelSize(0.06);
	hChargedPionMulti->GetZaxis()->SetLabelSize(0.05);


	hChargedPionMulti->SetLineColor(30);
	hChargedPionMulti->SetFillColor(30);


	gPad->SetLeftMargin(0.155);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.07);
	gPad->SetRightMargin(0.04);




	gStyle->SetNdivisions(505,"X");
	gStyle->SetNdivisions(505,"Y");


}
