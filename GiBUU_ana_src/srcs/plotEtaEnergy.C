{
	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(505,"XY");
	



	TCanvas c1("c1","c1",630,500);


	TFile ff("../../../HIAF-etaFactory-Simulations-localData/pluto6-data/pp_to_ppeta_PipPimPi0_1.8GeV_Random2023.root");
	data->Draw("Particles.TLorentzVector.E() >>h(30,0.5,1.6)","Particles.pid==17","",50000);
	

	//gPad->SetLogz();
	h->SetTitle("");
	h->GetXaxis()->SetTitle("E of #eta (GeV)");
	h->GetXaxis()->SetTitleSize(0.06);
	h->GetXaxis()->CenterTitle();
	h->GetXaxis()->SetTitleOffset(1.05);
	h->GetXaxis()->SetLabelSize(0.06);
	h->GetYaxis()->SetTitle("Counts");
	h->GetYaxis()->SetTitleSize(0.06);
	h->GetYaxis()->CenterTitle();
	h->GetYaxis()->SetTitleOffset(1.28);
	h->GetYaxis()->SetLabelSize(0.06);
	h->GetZaxis()->SetLabelSize(0.05);


	h->SetLineColor(30);
	h->SetFillColor(30);


	gPad->SetLeftMargin(0.155);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.04);
	gPad->SetRightMargin(0.04);






}
