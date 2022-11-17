{
	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(505,"XY");
	TCanvas c1("c1","c1",630,500);

	TChain chain("buudata","buudata");
	chain.AddFile("../data/BUU_eta_1.8GeV_all.mom.root");

	chain.Draw("eta_3piPip.P() : eta_3piPip.Theta()*TMath::RadToDeg() >> h(40,0,180,40,0,1)", "", "colz");
	h->SetTitle("");
	h->GetXaxis()->SetTitle("#theta^{#pi^{#pm}} (#circ)");
	h->GetXaxis()->SetTitleSize(0.06);
	h->GetXaxis()->CenterTitle();
	h->GetXaxis()->SetTitleOffset(1.05);
	h->GetXaxis()->SetLabelSize(0.06);
	h->GetYaxis()->SetTitle("P^{#pi^{#pm}} (GeV/c)");
	h->GetYaxis()->SetTitleSize(0.06);
	h->GetYaxis()->CenterTitle();
	h->GetYaxis()->SetTitleOffset(1.05);
	h->GetYaxis()->SetLabelSize(0.06);
	h->GetZaxis()->SetLabelSize(0.05);

	gPad->SetLeftMargin(0.135);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.03);
	gPad->SetRightMargin(0.137);
}
