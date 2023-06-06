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
	
	TFile ff("../../MesonSF-at-EicC-localData/tagged-neutron-DIS/TaggedNeutron-DIS-crossing0.05-EicC.root");

	TCanvas c1("c1","c1",1000,840);
	c1.Divide(2, 2);

	c1.cd(1);
	tree->Draw("Q2:xB>>h(60,0,1.0, 60,0,50)","0.1*  d4sigma*(d4sigma>0)","colz",2000000);
	gPad->SetLogz();
	h->SetTitle("");
	h->GetXaxis()->SetTitle("x_{B}");
	h->GetXaxis()->SetTitleSize(0.08);
	h->GetXaxis()->CenterTitle();
	h->GetXaxis()->SetTitleOffset(0.92);
	h->GetXaxis()->SetLabelSize(0.08);
	h->GetYaxis()->SetTitle("Q^{2} (GeV^{2})");
	h->GetYaxis()->SetTitleSize(0.08);
	h->GetYaxis()->CenterTitle();
	h->GetYaxis()->SetTitleOffset(1.0);
	h->GetYaxis()->SetLabelSize(0.08);
	h->GetZaxis()->SetLabelSize(0.07);

	gPad->SetLeftMargin(0.165);
	gPad->SetBottomMargin(0.15);
	gPad->SetTopMargin(0.03);
	gPad->SetRightMargin(0.145);

	c1.cd(2);
	tree->Draw("Q2:xpi>>h2(60,0,1.0, 60,0,50)","0.1*  d4sigma*(d4sigma>0)","colz",2000000);
	gPad->SetLogz();
	h2->SetTitle("");
	h2->GetXaxis()->SetTitle("x_{#pi}");
	h2->GetXaxis()->SetTitleSize(0.08);
	h2->GetXaxis()->CenterTitle();
	h2->GetXaxis()->SetTitleOffset(0.92);
	h2->GetXaxis()->SetLabelSize(0.08);
	h2->GetYaxis()->SetTitle("Q^{2} (GeV^{2})");
	h2->GetYaxis()->SetTitleSize(0.08);
	h2->GetYaxis()->CenterTitle();
	h2->GetYaxis()->SetTitleOffset(1.0);
	h2->GetYaxis()->SetLabelSize(0.08);
	h2->GetZaxis()->SetLabelSize(0.07);

	gPad->SetLeftMargin(0.165);
	gPad->SetBottomMargin(0.15);
	gPad->SetTopMargin(0.03);
	gPad->SetRightMargin(0.145);



	c1.cd(3);
	tree->Draw("y:(xpi-xB)/xpi>>h3(55,0.4,1,55,1.1)","0.1*  d4sigma*(d4sigma>0)","colz",2000000);
	gPad->SetLogz();
	h3->SetTitle("");
	h3->GetXaxis()->SetTitle("x_{L}");
	h3->GetXaxis()->SetTitleSize(0.08);
	h3->GetXaxis()->CenterTitle();
	h3->GetXaxis()->SetTitleOffset(0.92);
	h3->GetXaxis()->SetLabelSize(0.08);
	h3->GetYaxis()->SetTitle("y");
	h3->GetYaxis()->SetTitleSize(0.08);
	h3->GetYaxis()->CenterTitle();
	h3->GetYaxis()->SetTitleOffset(1.0);
	h3->GetYaxis()->SetLabelSize(0.08);
	h3->GetZaxis()->SetLabelSize(0.07);

	gPad->SetLeftMargin(0.165);
	gPad->SetBottomMargin(0.15);
	gPad->SetTopMargin(0.03);
	gPad->SetRightMargin(0.145);

	c1.cd(4);
	tree->Draw("-t:xpi>>h4(55,0,1.1,55,1.1)","0.1*  d4sigma*(d4sigma>0)","colz",2000000);
	gPad->SetLogz();
	h4->SetTitle("");
	h4->GetXaxis()->SetTitle("x_{#pi}");
	h4->GetXaxis()->SetTitleSize(0.08);
	h4->GetXaxis()->CenterTitle();
	h4->GetXaxis()->SetTitleOffset(0.92);
	h4->GetXaxis()->SetLabelSize(0.08);
	h4->GetYaxis()->SetTitle("-t (GeV^{2})");
	h4->GetYaxis()->SetTitleSize(0.08);
	h4->GetYaxis()->CenterTitle();
	h4->GetYaxis()->SetTitleOffset(1.0);
	h4->GetYaxis()->SetLabelSize(0.08);
	h4->GetZaxis()->SetLabelSize(0.07);

	gPad->SetLeftMargin(0.165);
	gPad->SetBottomMargin(0.15);
	gPad->SetTopMargin(0.03);
	gPad->SetRightMargin(0.145);


}
