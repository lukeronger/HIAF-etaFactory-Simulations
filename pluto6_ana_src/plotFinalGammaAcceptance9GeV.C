{
	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(505,"Y");
	gStyle->SetNdivisions(510,"X");
	


	TFile ff("../../hiaf_MCdata/pp_to_ppeta_PipPimPi0_9GeV.root");






	TCanvas c1("c1","c1",630,500);

	data->SetLineWidth(1);
	data->SetLineColor(1);
	data->SetFillColor(921);
	int NN;
	cout<<(NN = data->Draw("Particles.TLorentzVector.Theta()*TMath::RadToDeg()>>h(18,0,180)","Particles.pid==1","b"))<<endl;

	data->SetLineWidth(1);
	data->SetLineColor(2);
	data->SetFillColor(623);
	cout<<data->Draw("Particles.TLorentzVector.Theta()*TMath::RadToDeg()>>h2(18,0,180)","Particles.pid==1 && Particles.TLorentzVector.P()>0.05","bsame")<<endl;

	data->SetLineWidth(1);
	data->SetLineColor(3);
	data->SetFillColor(407);
	cout<<data->Draw("Particles.TLorentzVector.Theta()*TMath::RadToDeg()>>h3(18,0,180)","Particles.pid==1 && Particles.TLorentzVector.P()>0.1","bsame")<<endl;



	h->Scale(100.0/NN);
	h2->Scale(100.0/NN);
	h3->Scale(100.0/NN);
	for(int i=1;i<=36;i++) {
		h->SetBinError(i,0);
		h2->SetBinError(i,0);
		h3->SetBinError(i,0);
	}
	h->Draw("bar");
	h2->Draw("barsame");
	h3->Draw("barsame");


	//gPad->SetLogz();
	h->SetTitle("");
	h->GetXaxis()->SetTitle("#theta^{#gamma} (#circ)");
	h->GetXaxis()->SetTitleSize(0.06);
	h->GetXaxis()->CenterTitle();
	h->GetXaxis()->SetTitleOffset(1.05);
	h->GetXaxis()->SetLabelSize(0.06);
	h->GetYaxis()->SetTitle("N_{i} / N_{tot.}  (%)");
	h->GetYaxis()->SetTitleSize(0.06);
	h->GetYaxis()->CenterTitle();
	h->GetYaxis()->SetTitleOffset(1.05);
	h->GetYaxis()->SetLabelSize(0.06);
	h->GetZaxis()->SetLabelSize(0.05);

	gPad->SetLeftMargin(0.135);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.04);
	gPad->SetRightMargin(0.04);
	gPad->SetGrid();


	
	TH1D _h1, _h2, _h3;
	_h1.SetFillColor(921);
	_h2.SetFillColor(623);
	_h3.SetFillColor(407);
	TLegend *le = new TLegend(0.65,0.64,  0.94,0.94);
	le->SetFillColor(0);
	le->SetBorderSize(1);
	le->AddEntry(&_h1,"No E_{#gamma} cut",  "f");
	le->AddEntry(&_h2,"E_{#gamma}>50MeV",   "f");
	le->AddEntry(&_h3,"E_{#gamma}>100MeV ",  "f");
	le->Draw();



}
