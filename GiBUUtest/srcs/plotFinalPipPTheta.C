{
	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(505,"XY");
	


	TFile ff("../mcdata/EventOutput.Real.00000001.root");



	TCanvas c1("c1","c1",630,500);


	cout<<RootTuple->Draw("sqrt(Px*Px+Py*Py+Pz*Pz):acos(Pz/sqrt(Px*Px+Py*Py+Pz*Pz))*TMath::RadToDeg()>>h(100,0,180,100,0,2)","barcode==211","colz")<<endl;

	TLine * li = new TLine(10,0.05, 80,0.05);
	li->SetLineWidth(2);
	li->SetLineColor(2);
//	li->Draw();
	li = new TLine(10,1,80,1);
	li->SetLineWidth(2);
	li->SetLineColor(2);
//	li->Draw();
	li = new TLine(10,0.05,10,1);
	li->SetLineWidth(2);
	li->SetLineColor(2);
//	li->Draw();
	li = new TLine(80,0.05,80,1);
	li->SetLineWidth(2);
	li->SetLineColor(2);
//	li->Draw();

	//gPad->SetLogz();
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


	//TCanvas c2;
	//cout<<data->Draw("Particles.TLorentzVector.P():Particles.TLorentzVector.Theta()*TMath::RadToDeg()>>h2(500,0,180,500,0,2.5)","Particles.pid==1 && Particles.TLorentzVector.P()>0.05&&Particles.TLorentzVector.P()<1 && Particles.TLorentzVector.Theta()*TMath::RadToDeg()>10 && Particles.TLorentzVector.Theta()*TMath::RadToDeg()<80","colz")<<endl;

}
