{
	gROOT->ProcessLine(".L ../plot_templates/myDrawTools.C");

	gStyle->SetOptStat(0);
	gStyle->SetOptFit(0);
	gStyle->SetStatY(0.91);
	gStyle->SetStatX(0.93);
	//gStyle->SetStatW(0.4);
	//gStyle->SetStatH(0.4);
	gStyle->SetNdivisions(505,"XY");
	TCanvas c1("c1","c1",630,500);

	TFile file("../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-GiBUU-PipPimPi0-background-with-neutrons-results_v2.root");
	hmPipPimPi0_2->Draw("hist");
	hmPipPimPi0_2->SetTitle("");
	hmPipPimPi0_2->GetXaxis()->SetTitle("M(#pi^{+}#pi^{-}#pi^{0}) / GeV");
	hmPipPimPi0_2->GetXaxis()->SetTitleSize(0.06);
	hmPipPimPi0_2->GetXaxis()->CenterTitle();
	hmPipPimPi0_2->GetXaxis()->SetTitleOffset(1.05);
	hmPipPimPi0_2->GetXaxis()->SetLabelSize(0.06);
	hmPipPimPi0_2->GetYaxis()->SetTitle("Counts");
	hmPipPimPi0_2->GetYaxis()->SetTitleSize(0.06);
	hmPipPimPi0_2->GetYaxis()->CenterTitle();
	hmPipPimPi0_2->GetYaxis()->SetTitleOffset(1.2);
	hmPipPimPi0_2->GetYaxis()->SetLabelSize(0.06);
	hmPipPimPi0_2->GetZaxis()->SetLabelSize(0.05);


	hmPipPimPi0_2->GetXaxis()->SetNdivisions(505);
	hmPipPimPi0_2->GetYaxis()->SetNdivisions(505);



	hmPipPimPi0_2->Scale(5.9e11/39150000/0.0076);
	hmPipPimPi0_2->Rebin(2);
	//hmPipPimPi0_2->GetXaxis()->SetRangeUser(0.48, 0.7);
	hmPipPimPi0_2->GetXaxis()->SetRangeUser(0.4, 1.2);
	hmPipPimPi0_2->SetLineWidth(2);
	hmPipPimPi0_2->SetLineColor(4);

	//gPad->SetLogy();

	gPad->SetLeftMargin(0.145);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.08);
	gPad->SetRightMargin(0.06);




	TH1D *hbg = (TH1D*) hmPipPimPi0_2->Clone();
	TCanvas *c2 = CreateCanvas();
	CreateFrame(0.4,1.2, 0,1.2*hbg->GetMaximum(),    "M(#pi^{+}#pi^{-}#pi^{0}) [GeV]", "Counts");
	hbg->SetFillColor(8);
	hbg->SetLineColor(8);
	hbg->SetLineWidth(0);
	hbg->Draw("hist same");

	TLatex tex;
	tex.SetTextSize(0.08);
	tex.DrawLatex(0.62, 6e9, "#eta");


#if 0	
	TF1 model0("model0","[0]*TMath::Gaus(x,[1],[2])");
	TF1 model("model","[0]*TMath::Gaus(x,[1],[2]) + [3]*x+[4]");
	model.SetParNames("N","mean","sigma","a","b");
	TF1 *bgmodel = new TF1("bgmodel","[0]*x+[1]", 0.45,0.65);

	model0.SetParameters(1e5,0.547,0.01);
	hmPipPimPi0_2->Fit("model0","","",0.45,0.65);
	double pars[6] = {0};
	model0.GetParameters(pars);
	model.SetParameters(pars);
	//model.SetParLimits(1,0.4,0.6);
	hmPipPimPi0_2->Fit("model","","",0.45,0.65);
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

	double Nsignal = model.Integral(xa, xb) / hmPipPimPi0_2->GetBinWidth(1);
	double Nbg  = bgmodel->Integral(xa, xb) / hmPipPimPi0_2->GetBinWidth(1);

	cout<<"Nsignal:   "<< Nsignal - Nbg <<endl;
	cout<<"Nbg:       "<< Nbg <<endl;
	cout<<"s/b ratio: "<< (Nsignal - Nbg)  / Nbg <<endl;
#endif



}
