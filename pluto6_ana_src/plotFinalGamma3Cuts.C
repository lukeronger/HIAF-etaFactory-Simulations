{
	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(505,"XY");
	


	TFile ff("../../hiaf_MCdata/pp_to_ppeta_PipPimPi0_3GeV.root");



	TCanvas c1("c1","c1",630,500);


	cout<<data->Draw("Particles.TLorentzVector.P():Particles.TLorentzVector.Theta()*TMath::RadToDeg()>>h(200,0,180,200,0,2)","Particles.pid==1","colz")<<endl;

	int NEcuts = 3;
	int Nthetacuts = 7;
	double Ecuts[3] = {0.05, 0.1, 2};
	double thetacuts[7] = {2, 5, 10, 90, 100, 120, 150};

	TLine * li;
        for(int i=0;i<NEcuts;i++){
		li = new TLine(thetacuts[0], Ecuts[i], thetacuts[Nthetacuts-1], Ecuts[i]);
		li->SetLineWidth(1);
		li->SetLineColor(2);
		li->Draw();
	}
        for(int i=0;i<Nthetacuts;i++){
		li = new TLine(thetacuts[i], Ecuts[0], thetacuts[i], Ecuts[NEcuts-1]);
		li->SetLineWidth(1);
		li->SetLineColor(2);
		li->Draw();
	}

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







	TCanvas c2;
	double theta0 = 10;
	double theta1 = 90;
	double e0 = 0.1;
	double e1 = 1;

	for(int i=3;i<Nthetacuts;i++){
		int NN1=0;
		e0 = Ecuts[0];
		e1 = 100; //Ecuts[1];
		theta0 = thetacuts[2];
		theta1 = thetacuts[i];
		TCut cut = Form("Particles.pid==1 && Particles.TLorentzVector.P()>%lg && Particles.TLorentzVector.P()<%lg && Particles.TLorentzVector.Theta()*TMath::RadToDeg()>%lg && Particles.TLorentzVector.Theta()*TMath::RadToDeg()<%lg", e0, e1, theta0, theta1);
		cout<<"E ["<<e0<<","<<e1<<"];    ";
		cout<<"theta ["<<theta0<<","<<theta1<<"]."<<endl;	
		cout<<"  "<<(NN1=data->Draw("Particles.TLorentzVector.P():Particles.TLorentzVector.Theta()*TMath::RadToDeg()>>h2(500,0,180,500,0,2.5)",cut,"colz") )<<endl;
		cout<<"  "<<(NN1/2000000.0*100)<<endl;
	}
	for(int i=0;i<2;i++){
		int NN1=0;
		e0 = Ecuts[0];
		e1 = 100; //Ecuts[1];
		theta0 = thetacuts[i];
		theta1 = thetacuts[Nthetacuts-1];
		TCut cut = Form("Particles.pid==1 && Particles.TLorentzVector.P()>%lg && Particles.TLorentzVector.P()<%lg && Particles.TLorentzVector.Theta()*TMath::RadToDeg()>%lg && Particles.TLorentzVector.Theta()*TMath::RadToDeg()<%lg", e0, e1, theta0, theta1);
		cout<<"E ["<<e0<<","<<e1<<"];    ";
		cout<<"theta ["<<theta0<<","<<theta1<<"]."<<endl;	
		cout<<"  "<<(NN1=data->Draw("Particles.TLorentzVector.P():Particles.TLorentzVector.Theta()*TMath::RadToDeg()>>h2(500,0,180,500,0,2.5)",cut,"colz") )<<endl;
		cout<<"  "<<(NN1/2000000.0*100)<<endl;
	}


	for(int i=3;i<Nthetacuts;i++){
		int NN1=0;
		e0 = Ecuts[1];
		e1 = 100; //Ecuts[1];
		theta0 = thetacuts[2];
		theta1 = thetacuts[i];
		TCut cut = Form("Particles.pid==1 && Particles.TLorentzVector.P()>%lg && Particles.TLorentzVector.P()<%lg && Particles.TLorentzVector.Theta()*TMath::RadToDeg()>%lg && Particles.TLorentzVector.Theta()*TMath::RadToDeg()<%lg", e0, e1, theta0, theta1);
		cout<<"E ["<<e0<<","<<e1<<"];    ";
		cout<<"theta ["<<theta0<<","<<theta1<<"]."<<endl;	
		cout<<"  "<<(NN1=data->Draw("Particles.TLorentzVector.P():Particles.TLorentzVector.Theta()*TMath::RadToDeg()>>h2(500,0,180,500,0,2.5)",cut,"colz") )<<endl;
		cout<<"  "<<(NN1/2000000.0*100)<<endl;
	}
	for(int i=0;i<2;i++){
		int NN1=0;
		e0 = Ecuts[1];
		e1 = 100; //Ecuts[1];
		theta0 = thetacuts[i];
		theta1 = thetacuts[Nthetacuts-1];
		TCut cut = Form("Particles.pid==1 && Particles.TLorentzVector.P()>%lg && Particles.TLorentzVector.P()<%lg && Particles.TLorentzVector.Theta()*TMath::RadToDeg()>%lg && Particles.TLorentzVector.Theta()*TMath::RadToDeg()<%lg", e0, e1, theta0, theta1);
		cout<<"E ["<<e0<<","<<e1<<"];    ";
		cout<<"theta ["<<theta0<<","<<theta1<<"]."<<endl;	
		cout<<"  "<<(NN1=data->Draw("Particles.TLorentzVector.P():Particles.TLorentzVector.Theta()*TMath::RadToDeg()>>h2(500,0,180,500,0,2.5)",cut,"colz") )<<endl;
		cout<<"  "<<(NN1/2000000.0*100)<<endl;
	}

}
