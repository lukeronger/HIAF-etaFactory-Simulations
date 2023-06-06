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
	
	TFile ff("../../../HIAF-etaFactory-Simulations-localData/pluto6-data/pp_to_ppeta_DileptonGamma_1.8GeV_Random2023.root");

	TCanvas c1("c1","c1",1000,840);
	c1.Divide(2, 2);

	c1.cd(1);
	data->Draw("Particles.TLorentzVector.P()>>h(100,0,1.4)","Particles.pid==1","",2000000);
	data->Draw("Particles.TLorentzVector.P()>>hh(100,0,1.4)","Particles.pid==3","same",2000000);
	hh->SetLineColor(4);
	h->SetLineColor(2);
	hh->SetLineWidth(2);
	h->SetLineWidth(2);
	gPad->SetLogy();
	h->SetTitle("");
	h->GetXaxis()->SetTitle("P (GeV/c)");
	h->GetXaxis()->SetTitleSize(0.08);
	h->GetXaxis()->CenterTitle();
	h->GetXaxis()->SetTitleOffset(0.92);
	h->GetXaxis()->SetLabelSize(0.08);
	h->GetYaxis()->SetTitle("Counts");
	h->GetYaxis()->SetTitleSize(0.08);
	h->GetYaxis()->CenterTitle();
	h->GetYaxis()->SetTitleOffset(1.0);
	h->GetYaxis()->SetLabelSize(0.08);
	h->GetZaxis()->SetLabelSize(0.07);

	//h->SetMaximum(2e6);
	//h->GetYaxis()->SetRangeUser(0,2e6); 

	gPad->SetLeftMargin(0.165);
	gPad->SetBottomMargin(0.15);
	gPad->SetTopMargin(0.03);
	gPad->SetRightMargin(0.145);

	TLatex *tex = new TLatex(100,0.8, "electron");
	tex->SetTextSize(0.07);
	//tex->Draw();

	TLegend *le = new TLegend(0.2,0.2,0.55,0.38);
	le->SetFillColor(0);
	le->SetBorderSize(1);
	le->AddEntry(hh,"electron","l");
	le->AddEntry(h,"photon","l");
	le->Draw();

	
	h->Draw("same");
	hh->Draw("same");








	
	c1.cd(2);
	data->Draw("Particles.TLorentzVector.Theta()*TMath::RadToDeg()>>h2(100,0,180)","Particles.pid==1","",2000000);
	data->Draw("Particles.TLorentzVector.Theta()*TMath::RadToDeg()>>hh2(100,0,180)","Particles.pid==3","same",2000000);
	hh2->SetLineColor(4);
	h2->SetLineColor(2);
	hh2->SetLineWidth(2);
	h2->SetLineWidth(2);
	gPad->SetLogy();
	h2->SetTitle("");
	h2->GetXaxis()->SetTitle("#theta (#circ)");
	h2->GetXaxis()->SetTitleSize(0.08);
	h2->GetXaxis()->CenterTitle();
	h2->GetXaxis()->SetTitleOffset(0.92);
	h2->GetXaxis()->SetLabelSize(0.08);
	h2->GetYaxis()->SetTitle("Counts");
	h2->GetYaxis()->SetTitleSize(0.08);
	h2->GetYaxis()->CenterTitle();
	h2->GetYaxis()->SetTitleOffset(1.0);
	h2->GetYaxis()->SetLabelSize(0.08);
	h2->GetZaxis()->SetLabelSize(0.07);

	//h->GetYaxis()->SetRangeUser(0,1.2e5); 

	gPad->SetLeftMargin(0.165);
	gPad->SetBottomMargin(0.15);
	gPad->SetTopMargin(0.03);
	gPad->SetRightMargin(0.145);

	tex = new TLatex(100,0.8, "photon");
	tex->SetTextSize(0.07);
	//tex->Draw();



	c1.cd(3);
	data->Draw("Particles.TLorentzVector.Eta()>>h3(100,-5,7)","Particles.pid==1","",2000000);
	data->Draw("Particles.TLorentzVector.Eta()>>hh3(100,-5,7)","Particles.pid==3","same",2000000);
	hh3->SetLineColor(4);
	h3->SetLineColor(2);
	hh3->SetLineWidth(2);
	h3->SetLineWidth(2);
	gPad->SetLogy();
	h3->SetTitle("");
	h3->GetXaxis()->SetTitle("Pseudo-rapidity");
	h3->GetXaxis()->SetTitleSize(0.08);
	h3->GetXaxis()->CenterTitle();
	h3->GetXaxis()->SetTitleOffset(0.92);
	h3->GetXaxis()->SetLabelSize(0.08);
	h3->GetYaxis()->SetTitle("Counts");
	h3->GetYaxis()->SetTitleSize(0.08);
	h3->GetYaxis()->CenterTitle();
	h3->GetYaxis()->SetTitleOffset(1.0);
	h3->GetYaxis()->SetLabelSize(0.08);
	h3->GetZaxis()->SetLabelSize(0.07);

	//h->GetYaxis()->SetRangeUser(0,1.2e5); 

	gPad->SetLeftMargin(0.165);
	gPad->SetBottomMargin(0.15);
	gPad->SetTopMargin(0.03);
	gPad->SetRightMargin(0.145);

	tex = new TLatex(100,0.8, "electron");
	tex->SetTextSize(0.07);
	//tex->Draw();



}
