{
	gStyle->SetOptStat(1);
	gStyle->SetOptFit(1);
	gStyle->SetStatY(0.91);
	gStyle->SetStatX(0.93);
	//gStyle->SetStatW(0.4);
	//gStyle->SetStatH(0.4);
	gStyle->SetNdivisions(505,"Y");
	gStyle->SetNdivisions(502,"X");
	TCanvas c1("c1","c1",630,500);

	TFile file("../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-GiBUU-PipPimPi0-background-with-neutrons-results.root");
	hmTwoGammas_2->Draw();
	hmTwoGammas_2->SetTitle("");
	hmTwoGammas_2->GetXaxis()->SetTitle("M(#gamma#gamma) / GeV");
	hmTwoGammas_2->GetXaxis()->SetTitleSize(0.06);
	hmTwoGammas_2->GetXaxis()->CenterTitle();
	hmTwoGammas_2->GetXaxis()->SetTitleOffset(1.05);
	hmTwoGammas_2->GetXaxis()->SetLabelSize(0.06);
	hmTwoGammas_2->GetYaxis()->SetTitle("Counts");
	hmTwoGammas_2->GetYaxis()->SetTitleSize(0.06);
	hmTwoGammas_2->GetYaxis()->CenterTitle();
	hmTwoGammas_2->GetYaxis()->SetTitleOffset(1.5);
	hmTwoGammas_2->GetYaxis()->SetLabelSize(0.06);
	hmTwoGammas_2->GetZaxis()->SetLabelSize(0.05);

	hmTwoGammas_2->GetXaxis()->SetNdivisions(505);
	hmTwoGammas_2->GetYaxis()->SetNdivisions(505);

	hmTwoGammas_2->Rebin(2);
	hmTwoGammas_2->GetXaxis()->SetRangeUser(0., 0.7);
	//hmTwoGammas_2->GetXaxis()->SetRangeUser(0.1, 0.2);
	hmTwoGammas_2->SetLineWidth(2);
	hmTwoGammas_2->SetLineColor(4);

	//gPad->SetLogy();

	gPad->SetLeftMargin(0.17);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.08);
	gPad->SetRightMargin(0.06);



	//hmTwoGammas_2->Fit("gaus");



	TF1 model0("model0","[0]*TMath::Gaus(x,[1],[2])");
	TF1 model("model","[0]*TMath::Gaus(x,[1],[2]) + [3]*x+[4]");
	model.SetParNames("N","mean","sigma","a","b");
	TF1 *bgmodel = new TF1("bgmodel","[0]*x+[1]", 0.08,0.2);

	model0.SetParameters(1e5,0.135,0.01);
	hmTwoGammas_2->Fit("model0","","",0.08,0.2);
	double pars[6] = {0};
	model0.GetParameters(pars);
	model.SetParameters(pars);
	//model.SetParLimits(1,0.4,0.6);
	hmTwoGammas_2->Fit("model","","",0.08,0.2);
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

	double Nsignal = model.Integral(xa, xb) / hmTwoGammas_2->GetBinWidth(1);
	double Nbg  = bgmodel->Integral(xa, xb) / hmTwoGammas_2->GetBinWidth(1);

	cout<<"Nsignal:   "<< Nsignal - Nbg <<endl;
	cout<<"Nbg:       "<< Nbg <<endl;
	cout<<"s/b ratio: "<< (Nsignal - Nbg)  / Nbg <<endl;



	double height = 1.05 * hmTwoGammas_2->GetMaximum();
	cout<<height<<endl;
	double mpi0_a = xa; //0.12;
	double mpi0_b = xb; // 0.155;
	TLine *li = new TLine(mpi0_a,0,  mpi0_a,height);
	li->SetLineWidth(2);
	li->SetLineColor(2);
	li->SetLineStyle(3);
	li->Draw();
	li = new TLine(mpi0_b,0,  mpi0_b,height);
	li->SetLineWidth(2);
	li->SetLineColor(2);
	li->SetLineStyle(3);
	li->Draw();
	

}
