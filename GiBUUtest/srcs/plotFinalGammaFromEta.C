{
	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(505,"XY");
	

	TFile ff("/mnt/c/work2/HIAF-eta-factory/pluto_v6.00/hiaf_MCdata/pp_to_ppeta_PipPimPi0_1.8GeV.root");

	TCanvas c1("c1","c1",630,500);

	cout<<data->Draw("Particles.TLorentzVector.P():Particles.TLorentzVector.Theta()*TMath::RadToDeg()>>h(200,0,180,200,0,1)","Particles.pid==1","colz")<<endl;
	//gPad->SetLogz();
	h->SetTitle("");
	h->GetXaxis()->SetTitle("#theta^{#gamma} (#circ)");
	h->GetXaxis()->SetTitleSize(0.06);
	h->GetXaxis()->CenterTitle();
	h->GetXaxis()->SetTitleOffset(1.05);
	h->GetXaxis()->SetLabelSize(0.06);
	h->GetYaxis()->SetTitle("E^{#gamma} (GeV)");
	h->GetYaxis()->SetTitleSize(0.06);
	h->GetYaxis()->CenterTitle();
	h->GetYaxis()->SetTitleOffset(1.05);
	h->GetYaxis()->SetLabelSize(0.06);
	h->GetZaxis()->SetLabelSize(0.05);

	gPad->SetLeftMargin(0.135);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.03);
	gPad->SetRightMargin(0.137);

	TLine * li;
	int NN = 2;
	double thetas[2]={10,90};
	double moms[2]={0.05,1};
	for(int i=0;i<2;i++){
		li = new TLine(thetas[i], moms[0], thetas[i], moms[NN-1]);
		li->SetLineWidth(2);
		li->SetLineColor(2);
		li->Draw();
	}
	for(int i=0;i<2;i++){
		li = new TLine(thetas[0], moms[i], thetas[NN-1], moms[i]);
		li->SetLineWidth(2);
		li->SetLineColor(2);
		li->Draw();
	}


	//TCanvas c2;
	//cout<<data->Draw("Particles.TLorentzVector.P():Particles.TLorentzVector.Theta()*TMath::RadToDeg()>>h2(500,0,180,500,0,2.5)","Particles.pid==1 && Particles.TLorentzVector.P()>0.05&&Particles.TLorentzVector.P()<1 && Particles.TLorentzVector.Theta()*TMath::RadToDeg()>10 && Particles.TLorentzVector.Theta()*TMath::RadToDeg()<80","colz")<<endl;

}
