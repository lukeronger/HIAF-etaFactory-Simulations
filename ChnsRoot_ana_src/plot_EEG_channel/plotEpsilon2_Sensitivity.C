{
	double Neta_produced = 5.9e11;

	gROOT->ProcessLine(".L ../plot_templates/myDrawTools.C");

	TFile file_effi("efficiency.root");
	TH1D *heffi = (TH1D *) hRatio->Clone();
	//heffi->Draw();

	TCanvas *c = CreateCanvas();

	TFile file("../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-GiBUU-EEG-background-with-neutrons-results-v2.root");
	hmEE_2->Draw();
	hmEE_2->Scale(5.9e11/39150000/0.0076);
//	hmEEG_2->Fit("gaus");
	TH1D *hbg = (TH1D *) hmEE_2->Clone();

	TFile file2("../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-etaDecay-EEG-MC-and-rec-results.root");
	hmEE_2->Draw("same");
	//for(int i=1;  i<=43;  i++) if(hmEE_2->GetBinContent(i)<=1) hmEE_2->SetBinContent(i, 1);
	hmEE_2->Scale(0.0069 * 5.9e11/1.0e7);
	hmEE_2->SetLineColor(2);
	hmEE_2->SetLineWidth(2);



	TLatex tex;
	tex.SetTextSize(0.06);
	tex.SetTextFont(42);


	hbg->Add(hmEE_2);
	for(int i=1;  i<=43;  i++) hbg->SetBinError(i, sqrt(hbg->GetBinContent(i)));
	TH1D *hbg_2 = (TH1D *) hbg->Clone();


	double Meta = 0.547862;
	double Br_Eta2GG = 0.3936;
	TF1 tff_eta("tff_eta", "1 / (1+x/0.722/0.722)");
	TF1 tff_eta_v1("tff_eta_v1", "(1 - [1]*x/pow([0],2) + [2]*pow(x,2)/pow([0],4) - [3]*pow(x,3)/pow([0],6)) * 0.25");
	tff_eta_v1.SetParameters(0.547862,  0.576, 0.339, 0.2);


	//for(int i=1;  i<=43;  i++) if(hbg_2->GetBinContent(i)<=1) hbg_2->SetBinContent(i, 1);
	for(int i=1;  i<=43;  i++){
		double nbg = hbg_2->GetBinContent(i);
		double effi = heffi->GetBinContent(i) / 100.; cout<<"  "<<effi<<endl;
		double sensi = 3*sqrt(nbg) / Neta_produced / effi;

		double MA = hbg_2->GetBinCenter(i);
		double tff = tff_eta(-MA*MA);  cout<<i<<"\t"<<MA<<"\t"<<tff<<endl; 
		double kine_factor = pow(1-MA*MA/Meta/Meta,  3); cout<<i<<"\t"<<kine_factor<<"   kine"<<endl;

		sensi /= 2.0;
		sensi /= (tff*tff);
		sensi /= kine_factor;
		sensi /= Br_Eta2GG;
		hbg_2->SetBinContent(i, sensi);
	}
	hbg_2->SetLineColor(4);
	hbg_2->SetLineWidth(2);
	//heffi->Draw();
	heffi->Print();

	CreateCanvas();
	CreateFrame(0,0.52, 0.2*hbg_2->GetMinimum(),2*hbg_2->GetMaximum(),    "M(e^{+}e^{-}) [GeV/c^{2}]", "Sensitivity of #varepsilon^{2}");

	TGraphErrors *gE141 = new TGraphErrors("exp-data/epsilon2_E141.txt.dat");
	gE141->SetFillColor(3);
	gE141->Draw("3same");

	/*
	exp-data/epsilon2_E141.txt.dat
	exp-data/epsilon2_KLOE2013.txt.dat
	exp-data/epsilon2_KLOE2014.txt.dat
	exp-data/epsilon2_NA64.txt.dat
	exp-data/epsilon_CHARM.txt.dat
	exp-data/epsilon_NA48_2.txt.dat
	exp-data/epsilon_NuCal.txt.dat
	*/

	hbg_2->Draw("hist same");
	gPad->SetLogy();
	gPad->SetTickx();
	gPad->SetTicky();
	//gPad->SetBottomMargin(0.185);

	//tex.DrawLatex(0.05,7e-6, "#eta#rightarrowA#gamma#rightarrowe^{+}e^{-}#gamma");




}
