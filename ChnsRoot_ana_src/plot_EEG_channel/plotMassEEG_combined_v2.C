{
	gStyle->SetOptStat(1);
	gStyle->SetOptFit(1);
	gStyle->SetStatY(0.91);
	gStyle->SetStatX(0.93);
	//gStyle->SetStatW(0.4);
	//gStyle->SetStatH(0.4);
	gStyle->SetNdivisions(505,"XY");
	TCanvas c1("c1","c1",630,500);

	TFile file("../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-GiBUU-EEG-background-with-neutrons-results.root");
	hmEEG_2->Draw();
	hmEEG_2->SetTitle("");
	hmEEG_2->GetXaxis()->SetTitle("M(e^{+}e^{-}#gamma) / GeV");
	hmEEG_2->GetXaxis()->SetTitleSize(0.06);
	hmEEG_2->GetXaxis()->CenterTitle();
	hmEEG_2->GetXaxis()->SetTitleOffset(1.05);
	hmEEG_2->GetXaxis()->SetLabelSize(0.06);
	hmEEG_2->GetYaxis()->SetTitle("Counts");
	hmEEG_2->GetYaxis()->SetTitleSize(0.06);
	hmEEG_2->GetYaxis()->CenterTitle();
	hmEEG_2->GetYaxis()->SetTitleOffset(1.05);
	hmEEG_2->GetYaxis()->SetLabelSize(0.06);
	hmEEG_2->GetZaxis()->SetLabelSize(0.05);

	//hmEEG_2->Rebin(2);
	hmEEG_2->GetXaxis()->SetRangeUser(0.4, 0.75);
	hmEEG_2->GetYaxis()->SetRangeUser(0, 20);
	hmEEG_2->SetLineWidth(2);
	hmEEG_2->SetLineColor(4);


	//gPad->SetLogy();

	gPad->SetLeftMargin(0.145);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.08);
	gPad->SetRightMargin(0.06);


//	hmEEG_2->Fit("gaus");

	TH1D *hbg = (TH1D *) hmEEG_2->Clone();


	TFile file2("../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-etaDecay-EEG-results.root");
	hmeta_2->Draw("same");
	//hmeta_2->Rebin(2);
	hmeta_2->SetLineColor(2);
	hmeta_2->SetLineWidth(2);



	TCanvas c2("c2","c2",630,500);
	hbg->Add(hmeta_2);
	hbg->Draw();


	hbg->GetXaxis()->SetNdivisions(505);
	hbg->GetYaxis()->SetNdivisions(505);
	hbg->GetXaxis()->SetRangeUser(0.35,0.85);


	gPad->SetLeftMargin(0.145);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.08);
	gPad->SetRightMargin(0.06);



	TF1 model0("model0","[0]*TMath::Gaus(x,[1],[2])");
	TF1 model("model","[0]*TMath::Gaus(x,[1],[2]) + [3]*exp(-[4]*x)");
	model.SetParNames("N","mean","sigma","k","lambda");
	TF1 *bgmodel = new TF1("bgmodel","[0]*exp(-[1]*x)", 0.45,0.65);

	model0.SetParameters(1e1,0.547,0.01);
	hbg->Fit("model0","","",0.45,0.65);
	double pars[6] = {0};
	model0.GetParameters(pars);
	model.SetParameters(pars);
	//model.SetParLimits(1,0.4,0.6);
	hbg->Fit("model","","",0.45,0.65);
	model.GetParameters(pars);

	bgmodel->SetParameters(pars+3);
	bgmodel->SetLineWidth(2);
	bgmodel->SetLineStyle(7);
	bgmodel->SetLineColor(2);
	bgmodel->Draw("lsame");


	/// now, we calculate the signal to bg ratio
	double xa = pars[1] - 3*pars[2];
	double xb = pars[1] + 3*pars[2];
	cout<<"Integration range: ["<<xa<<", "<<xb<<"]"<<endl;

	double Nsignal = model.Integral(xa, xb) / hbg->GetBinWidth(1);
	double Nbg  = bgmodel->Integral(xa, xb) / hbg->GetBinWidth(1);

	cout<<"Nsignal:   "<< Nsignal - Nbg <<endl;
	cout<<"Nbg:       "<< Nbg <<endl;
	cout<<"s/b ratio: "<< (Nsignal - Nbg)  / Nbg <<endl;




}
