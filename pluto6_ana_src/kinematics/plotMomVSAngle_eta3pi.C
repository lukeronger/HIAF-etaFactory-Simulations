{
	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(505,"XY");
	gStyle->SetPalette(55);
	//gStyle->SetPalette(67);
	//gStyle->SetPalette(61);
	//gStyle->SetPalette(113);
	//gStyle->SetPalette(108);
	//gStyle->SetPalette(103);
	//gStyle->SetPalette(79);
	//gStyle->SetPalette(71);
	//gStyle->SetPalette(77);
	//gStyle->SetPalette(111);
	//gStyle->SetPalette(61);
	//gStyle->SetPalette(69);
	//gStyle->SetPalette(76);
	//gStyle->SetPalette(71);
	
	TFile ff("../../../HIAF-etaFactory-Simulations-localData/pluto6-data/pp_to_ppeta_PipPimPi0_1.8GeV_Random2023.root");

	TCanvas c1("c1","c1",1000,840);
	c1.Divide(2, 2);

	c1.cd(1);
	data->Draw("Particles.TLorentzVector.P():Particles.TLorentzVector.Theta()*TMath::RadToDeg()>>h(100,0,180, 100,0,1)","Particles.pid==8","colz",2000000);
	gPad->SetLogz();
	h->SetTitle("");
	h->GetXaxis()->SetTitle("#theta (#circ)");
	h->GetXaxis()->SetTitleSize(0.08);
	h->GetXaxis()->CenterTitle();
	h->GetXaxis()->SetTitleOffset(0.92);
	h->GetXaxis()->SetLabelSize(0.08);
	h->GetYaxis()->SetTitle("P (GeV/c)");
	h->GetYaxis()->SetTitleSize(0.08);
	h->GetYaxis()->CenterTitle();
	h->GetYaxis()->SetTitleOffset(1.0);
	h->GetYaxis()->SetLabelSize(0.08);
	h->GetZaxis()->SetLabelSize(0.07);

	gPad->SetLeftMargin(0.165);
	gPad->SetBottomMargin(0.15);
	gPad->SetTopMargin(0.03);
	gPad->SetRightMargin(0.145);

	TLatex *tex = new TLatex(100,0.8, "pion");
	tex->SetTextSize(0.07);
	tex->Draw();

	c1.cd(2);
	data->Draw("Particles.TLorentzVector.P():Particles.TLorentzVector.Theta()*TMath::RadToDeg()>>h2(100,0,180, 100,0,1)","Particles.pid==1","colz",2000000);
	gPad->SetLogz();
	h2->SetTitle("");
	h2->GetXaxis()->SetTitle("#theta (#circ)");
	h2->GetXaxis()->SetTitleSize(0.08);
	h2->GetXaxis()->CenterTitle();
	h2->GetXaxis()->SetTitleOffset(0.92);
	h2->GetXaxis()->SetLabelSize(0.08);
	h2->GetYaxis()->SetTitle("P (GeV/c)");
	h2->GetYaxis()->SetTitleSize(0.08);
	h2->GetYaxis()->CenterTitle();
	h2->GetYaxis()->SetTitleOffset(1.0);
	h2->GetYaxis()->SetLabelSize(0.08);
	h2->GetZaxis()->SetLabelSize(0.07);

	gPad->SetLeftMargin(0.165);
	gPad->SetBottomMargin(0.15);
	gPad->SetTopMargin(0.03);
	gPad->SetRightMargin(0.145);

	tex = new TLatex(100,0.8, "photon");
	tex->SetTextSize(0.07);
	tex->Draw();



	c1.cd(3);
	data->Draw("Particles.TLorentzVector.Pt():Particles.TLorentzVector.Theta()*TMath::RadToDeg()>>h3(100,0,180, 100,0,1)","Particles.pid==8","colz",2000000);
	gPad->SetLogz();
	h3->SetTitle("");
	h3->GetXaxis()->SetTitle("#theta (#circ)");
	h3->GetXaxis()->SetTitleSize(0.08);
	h3->GetXaxis()->CenterTitle();
	h3->GetXaxis()->SetTitleOffset(0.92);
	h3->GetXaxis()->SetLabelSize(0.08);
	h3->GetYaxis()->SetTitle("P_{t} (GeV/c)");
	h3->GetYaxis()->SetTitleSize(0.08);
	h3->GetYaxis()->CenterTitle();
	h3->GetYaxis()->SetTitleOffset(1.0);
	h3->GetYaxis()->SetLabelSize(0.08);
	h3->GetZaxis()->SetLabelSize(0.07);

	gPad->SetLeftMargin(0.165);
	gPad->SetBottomMargin(0.15);
	gPad->SetTopMargin(0.03);
	gPad->SetRightMargin(0.145);

	tex = new TLatex(100,0.8, "pion");
	tex->SetTextSize(0.07);
	tex->Draw();





	c1.cd(4);
	data->Draw("Particles.TLorentzVector.Pt():Particles.TLorentzVector.Theta()*TMath::RadToDeg()>>h4(100,0,180, 100,0,1)","Particles.pid==1","colz",2000000);
	gPad->SetLogz();
	h4->SetTitle("");
	h4->GetXaxis()->SetTitle("#theta (#circ)");
	h4->GetXaxis()->SetTitleSize(0.08);
	h4->GetXaxis()->CenterTitle();
	h4->GetXaxis()->SetTitleOffset(0.92);
	h4->GetXaxis()->SetLabelSize(0.08);
	h4->GetYaxis()->SetTitle("P_{t} (GeV/c)");
	h4->GetYaxis()->SetTitleSize(0.08);
	h4->GetYaxis()->CenterTitle();
	h4->GetYaxis()->SetTitleOffset(1.0);
	h4->GetYaxis()->SetLabelSize(0.08);
	h4->GetZaxis()->SetLabelSize(0.07);

	gPad->SetLeftMargin(0.165);
	gPad->SetBottomMargin(0.15);
	gPad->SetTopMargin(0.03);
	gPad->SetRightMargin(0.145);

	tex = new TLatex(100,0.8, "photon");
	tex->SetTextSize(0.07);
	tex->Draw();

}
