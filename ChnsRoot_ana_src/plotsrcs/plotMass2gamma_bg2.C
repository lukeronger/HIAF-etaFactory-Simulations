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

	TFile file("../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-etaDecay-3pi-background-with-neutron-results.root");
	hmpi0->Draw();
	hmpi0->SetTitle("");
	hmpi0->GetXaxis()->SetTitle("M(#gamma#gamma) / GeV");
	hmpi0->GetXaxis()->SetTitleSize(0.06);
	hmpi0->GetXaxis()->CenterTitle();
	hmpi0->GetXaxis()->SetTitleOffset(1.05);
	hmpi0->GetXaxis()->SetLabelSize(0.06);
	hmpi0->GetYaxis()->SetTitle("Counts");
	hmpi0->GetYaxis()->SetTitleSize(0.06);
	hmpi0->GetYaxis()->CenterTitle();
	hmpi0->GetYaxis()->SetTitleOffset(1.05);
	hmpi0->GetYaxis()->SetLabelSize(0.06);
	hmpi0->GetZaxis()->SetLabelSize(0.05);

	hmpi0->GetXaxis()->SetNdivisions(505);

	hmpi0->Rebin(2);
	//hmpi0->GetXaxis()->SetRangeUser(0.48, 0.7);
	hmpi0->GetXaxis()->SetRangeUser(0.1, 0.2);
	hmpi0->SetLineWidth(2);
	hmpi0->SetLineColor(4);

	//gPad->SetLogy();

	gPad->SetLeftMargin(0.145);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.08);
	gPad->SetRightMargin(0.06);


	double height = 1.05 * hmpi0->GetMaximum();
	cout<<height<<endl;
	double mpi0_a = 0.12;
	double mpi0_b = 0.155;
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

	//hmpi0->Fit("gaus");



	TF1 model0("model0","[0]*TMath::Gaus(x,[1],[2])");
	TF1 model("model","[0]*TMath::Gaus(x,[1],[2]) + [3]*x+[4]");
	model.SetParNames("N","mean","sigma","a","b");
	TF1 *bgmodel = new TF1("bgmodel","[0]*x+[1]", 0.1,0.17);

	model0.SetParameters(1e5,0.135,0.01);
	hmpi0->Fit("model0","","",0.1,0.17);
	double pars[6] = {0};
	model0.GetParameters(pars);
	model.SetParameters(pars);
	//model.SetParLimits(1,0.4,0.6);
	hmpi0->Fit("model","","",0.1,0.17);
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

	double Nsignal = model.Integral(xa, xb) / hmpi0->GetBinWidth(1);
	double Nbg  = bgmodel->Integral(xa, xb) / hmpi0->GetBinWidth(1);

	cout<<"Nsignal:   "<< Nsignal - Nbg <<endl;
	cout<<"Nbg:       "<< Nbg <<endl;
	cout<<"s/b ratio: "<< (Nsignal - Nbg)  / Nbg <<endl;



	

}
