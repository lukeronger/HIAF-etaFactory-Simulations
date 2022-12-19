{

	TFile *ff;
	double Ebeam[4] = {1.8, 3, 6, 9};
/*
	ofstream f_10_90_005("gamma_Acc_thetalow10_high90_EThr0.05.txt");
	ofstream f_10_90_01("gamma_Acc_thetalow10_high90_EThr0.1.txt");
	ofstream f_5_120_005("gamma_Acc_thetalow5_high120_EThr0.05.txt");
	ofstream f_5_120_01("gamma_Acc_thetalow5_high120_EThr0.1.txt");

	for(int i=0;i<4;i++){
		TString filename = Form("../../hiaf_MCdata/pp_to_ppeta_PipPimPi0_%gGeV.root", Ebeam[i]);
		cout<<filename<<endl;
		ff = new TFile(filename);
		data->SetAlias("g1_theta","Particles.TLorentzVector[7].Theta()*TMath::RadToDeg()");
		data->SetAlias("g2_theta","Particles.TLorentzVector[8].Theta()*TMath::RadToDeg()");
		data->SetAlias("g1_P","Particles.TLorentzVector[7].P()");
		data->SetAlias("g2_P","Particles.TLorentzVector[8].P()");

		int NN = data->GetEntries();
		cout<<NN<<endl;

		double Ra, Rb;

		f_10_90_005<<Ebeam[i]<<" ";
		Ra = data->Draw("g1_theta","g1_theta>10 && g1_theta<90 && g1_P>0.05 ")*100.0/NN;
		Rb = data->Draw("g2_theta","g2_theta>10 && g2_theta<90 && g2_P>0.05 ")*100.0/NN;
		f_10_90_005<<(Ra+Rb)/2.0<<endl;
		f_10_90_01<<Ebeam[i]<<" ";
		Ra = data->Draw("g1_theta","g1_theta>10 && g1_theta<90 && g1_P>0.1 ")*100.0/NN;
		Rb = data->Draw("g2_theta","g2_theta>10 && g2_theta<90 && g2_P>0.1 ")*100.0/NN;
		f_10_90_01<<(Ra+Rb)/2.0<<endl;

		f_5_120_005<<Ebeam[i]<<" ";
		Ra = data->Draw("g1_theta","g1_theta>5 && g1_theta<120 && g1_P>0.05 ")*100.0/NN;
		Rb = data->Draw("g2_theta","g2_theta>5 && g2_theta<120 && g2_P>0.05 ")*100.0/NN;
		f_5_120_005<<(Ra+Rb)/2.0<<endl;
		f_5_120_01<<Ebeam[i]<<" ";
		Ra = data->Draw("g1_theta","g1_theta>5 && g1_theta<120 && g1_P>0.1 ")*100.0/NN;
		Rb = data->Draw("g2_theta","g2_theta>5 && g2_theta<120 && g2_P>0.1 ")*100.0/NN;
		f_5_120_01<<(Ra+Rb)/2.0<<endl;


		//cout<<Ebeam[i]<<" ";
		//cout<<data->Draw("g1_theta","g1_theta>5 && g1_theta<90 && g2_theta>10 && g2_theta<90 && g1_P>0.05 && g2_P>0.05");
		//cout<<endl;
		//cout<<Ebeam[i]<<" ";
		//cout<<data->Draw("g1_theta","g1_theta>5 && g1_theta<90 && g2_theta>10 && g2_theta<90 && g1_P>0.1 && g2_P>0.1");
		//cout<<endl;
		//cout<<Ebeam[i]<<" ";
		//cout<<data->Draw("g1_theta","g1_theta>10 && g1_theta<120 && g2_theta>10 && g2_theta<90 && g1_P>0.05 && g2_P>0.05");
		//cout<<endl;
		//cout<<Ebeam[i]<<" ";
		//cout<<data->Draw("g1_theta","g1_theta>10 && g1_theta<120 && g2_theta>10 && g2_theta<90 && g1_P>0.1 && g2_P>0.1");
		//cout<<endl; 

		ff->Close();
	}
	f_10_90_005.close();
	f_10_90_01.close();
	f_5_120_005.close();
	f_5_120_01.close();
*/




	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(505,"XY");
	//gStyle->SetNdivisions(510,"X");

	TCanvas c1("c1","c1",630,500);

	TH2F *h = new TH2F("h","",400,1,11,400,40,100);
	h->Draw();
	h->SetTitle("");
	h->GetXaxis()->SetTitle("Beam Energy T (GeV)");
	h->GetXaxis()->SetTitleSize(0.06);
	h->GetXaxis()->CenterTitle();
	h->GetXaxis()->SetTitleOffset(1.05);
	h->GetXaxis()->SetLabelSize(0.06);
	h->GetYaxis()->SetTitle("Acceptance (%)");
	h->GetYaxis()->SetTitleSize(0.06);
	h->GetYaxis()->CenterTitle();
	h->GetYaxis()->SetTitleOffset(1.05);
	h->GetYaxis()->SetLabelSize(0.06);
	h->GetZaxis()->SetLabelSize(0.05);

	//gPad->SetLogy();

	gPad->SetLeftMargin(0.145);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.03);
	gPad->SetRightMargin(0.03);

	TGraph *g1090_005 = new TGraph("gamma_Acc_thetalow10_high90_EThr0.05.txt");
	TGraph *g1090_01 =  new TGraph("gamma_Acc_thetalow10_high90_EThr0.1.txt");
	TGraph *g5120_005 = new TGraph("gamma_Acc_thetalow5_high120_EThr0.05.txt");
	TGraph *g5120_01 =  new TGraph("gamma_Acc_thetalow5_high120_EThr0.1.txt");

	g1090_005->SetMarkerStyle(20);
	g1090_005->SetLineColor(1);
	g1090_005->SetMarkerColor(1);
	g5120_005->SetMarkerStyle(21);
	g5120_005->SetLineColor(2);
	g5120_005->SetMarkerColor(2);
	g1090_01->SetMarkerStyle(24);
	g1090_01->SetLineColor(3);
	g1090_01->SetMarkerColor(3);
	g5120_01->SetMarkerStyle(25);
	g5120_01->SetLineColor(4);
	g5120_01->SetMarkerColor(4);
	g1090_005->Draw("plsame");
	g1090_01->Draw("plsame");
	g5120_005->Draw("plsame");
	g5120_01->Draw("plsame");


	TLegend *le = new TLegend(0.49,0.18,0.92,0.48);
	le->SetFillColor(0);
	le->SetBorderSize(0);
	le->AddEntry(g1090_005,"E>50MeV,   #theta [10#circ,90#circ]","p");
	le->AddEntry(g1090_01,"E>100MeV, #theta [10#circ,90#circ]","p");
	le->AddEntry(g5120_005,"E>50MeV,   #theta [5#circ,120#circ]","p");
	le->AddEntry(g5120_01,"E>100MeV, #theta [5#circ,120#circ]","p");
	le->Draw();



}
