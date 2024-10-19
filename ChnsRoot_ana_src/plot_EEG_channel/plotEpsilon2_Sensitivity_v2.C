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
	hbg_2->SetLineColor(1);
	hbg_2->SetLineWidth(2);
	//heffi->Draw();
	heffi->Print();

	CreateCanvas();
	CreateFrame(5e-3, 1, 1e-11,1e-2,    "M(e^{+}e^{-}) [GeV/c^{2}]", "Sensitivity of #varepsilon^{2}");


	//TLatex *tex = new TLatex();
	tex.SetTextSize(0.05);
	tex.SetTextFont(42);


	TGraphErrors *gKLOE2013 = new TGraphErrors("exp-data/epsilon2_KLOE2013.txt.dat");
	gKLOE2013->SetFillColor(2);
	gKLOE2013->SetFillStyle(3001);
	gKLOE2013->Draw("3same"); 
	tex.SetTextColor(2);
	tex.DrawLatex(0.446,3.7e-4,"KLOE");
	TGraphErrors *gA1 = new TGraphErrors("exp-data/epsilon2_A1.txt.dat");
	gA1->SetFillColor(8);
	gA1->SetFillStyle(3003);
	gA1->Draw("3same");
	tex.SetTextColor(8);
	tex.DrawLatex(0.167,3.7e-4,"A1");
	TGraphErrors *gNA48_2 = new TGraphErrors("exp-data/epsilon2_NA48_2.txt.dat");
	gNA48_2->SetFillColor(7);
	gNA48_2->SetFillStyle(3004);
	gNA48_2->Draw("3same");
	tex.SetTextColor(7);
	tex.DrawLatex(0.01,2.2e-6,"NA48/2");
	TGraphErrors *gHPS2015 = new TGraphErrors("exp-data/epsilon2_HPS2015.txt.dat");
	gHPS2015->SetFillColor(4);
	gHPS2015->SetFillStyle(3005);
	gHPS2015->Draw("3same");
	tex.SetTextColor(4);
	tex.DrawLatex(0.025,3.7e-4,"HPS2015");

	TGraphErrors *gNA64 = new TGraphErrors("exp-data/epsilon2_NA64.txt.dat");
	gNA64->SetFillColor(3);
	gNA64->SetFillStyle(3001);
	gNA64->Draw("3same");
	tex.SetTextColor(3);
	tex.DrawLatex(0.0245,2.92e-8,"NA64");
	TGraphErrors *gE141 = new TGraphErrors("exp-data/epsilon2_E141.txt.dat");
	gE141->SetFillColor(880);
	gE141->SetFillStyle(3003);
	gE141->Draw("3same");
	tex.SetTextColor(880);
	tex.DrawLatex(0.0198,5.3e-9,"E141");
	TGraphErrors *gNuCal = new TGraphErrors("exp-data/epsilon_NuCal.txt.dat");
	gNuCal->SetFillColor(11);
	gNuCal->SetFillStyle(3006);
	gNuCal->Draw("3same");
	tex.SetTextColor(11);
	tex.DrawLatex(0.0587,3.1e-10,"NuCal");
	TGraphErrors *gCHARM = new TGraphErrors("exp-data/epsilon_CHARM.txt.dat");
	gCHARM->SetFillColor(6);
	gCHARM->SetFillStyle(3007);
	gCHARM->Draw("3same");
	tex.SetTextColor(6);
	tex.DrawLatex(0.011,3.53e-11,"CHARM");
	
	
	tex.SetTextColor(1);
	tex.DrawLatex(0.277,2e-8,"This work");



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
	gPad->SetLogx();
	gPad->SetLogy();
	gPad->SetTickx();
	gPad->SetTicky();
	//gPad->SetBottomMargin(0.185);

	//tex.DrawLatex(0.05,7e-6, "#eta#rightarrowA#gamma#rightarrowe^{+}e^{-}#gamma");




}
