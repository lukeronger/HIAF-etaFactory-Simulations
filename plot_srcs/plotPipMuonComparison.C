{
	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(505,"XY");
	TCanvas c1("c1","c1",630,500);

	TChain chain("buudata","buudata");
	chain.AddFile("../data/BUU_eta_1.8GeV_all.mom.root");

	chain.SetLineColor(1);
	//TH1D *h = new TH1D("h","",60,0,1);
	chain.Draw("eta_3piPip.P()>>h(60,0,1)", "", "");
	chain.SetLineColor(2);
	chain.Draw("eta_MuMuGMup.P()>>hmu(60,0,1)", "", "same");
	h->SetTitle("");
	h->GetXaxis()->SetTitle("P (GeV/c)");
	h->GetXaxis()->SetTitleSize(0.06);
	h->GetXaxis()->CenterTitle();
	h->GetXaxis()->SetTitleOffset(1.05);
	h->GetXaxis()->SetLabelSize(0.06);
	h->GetYaxis()->SetTitle("Counts");
	h->GetYaxis()->SetTitleSize(0.06);
	h->GetYaxis()->CenterTitle();
	h->GetYaxis()->SetTitleOffset(1.05);
	h->GetYaxis()->SetLabelSize(0.06);
	h->GetZaxis()->SetLabelSize(0.05);

	gPad->SetLogy();

	gPad->SetLeftMargin(0.145);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.03);
	gPad->SetRightMargin(0.03);


	TF1 *f1 = new TF1("f1","0");
	f1->SetLineWidth(1);
	f1->SetLineColor(1);
	TF1 *f2 = new TF1("f2","0");
	f2->SetLineWidth(1);
	f2->SetLineColor(2);
	TLegend *le = new TLegend(0.22,0.18,0.55,0.4);
	le->SetFillColor(0);
	le->SetBorderSize(0);
	le->AddEntry(f1,"#pi","l");
	le->AddEntry(f2,"#mu","l");
	le->Draw();
}
