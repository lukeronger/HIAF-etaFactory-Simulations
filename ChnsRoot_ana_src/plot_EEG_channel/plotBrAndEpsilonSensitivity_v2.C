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


	TCanvas *c2 = CreateCanvas_for_1Times2Pads_noseparation();
	hbg->Add(hmEE_2);
	for(int i=1;  i<=43;  i++) hbg->SetBinError(i, sqrt(hbg->GetBinContent(i)));
	TH1D *hbg_2 = (TH1D *) hbg->Clone();


	c2->cd(1);
	//for(int i=1;  i<=43;  i++) if(hbg->GetBinContent(i)<=1) hbg->SetBinContent(i, 1);
	for(int i=1;  i<=43;  i++){
		double nbg = hbg->GetBinContent(i);
		double effi = heffi->GetBinContent(i) / 100.; cout<<"  "<<effi<<endl;
		double sensi = 3*sqrt(nbg) / Neta_produced / effi;
		hbg->SetBinContent(i, sensi);
	}
	hbg->SetLineColor(4);
	hbg->SetLineWidth(2);
	//heffi->Draw();
	heffi->Print();

	CreateFrame_for_1Times2Pads_noseparation(0,0.52, 0.6*hbg->GetMinimum(),3*hbg->GetMaximum(),    "M(e^{+}e^{-}) [GeV/c^{2}]", "Branching ratio uplimit");
	hbg->Draw("hist same");
	//hbg->Draw("same");
	gPad->SetLogy();
	//gPad->SetTopMargin(0.05);

	//tex.DrawLatex(0.3,4e-7, "#eta#rightarrowA#gamma#rightarrowe^{+}e^{-}#gamma");



	c2->cd(2);
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

	CreateFrame_for_1Times2Pads_noseparation_bottom(0,0.52, 0.2*hbg_2->GetMinimum(),2*hbg_2->GetMaximum(),    "M(e^{+}e^{-}) [GeV/c^{2}]", "Sensitivity of #varepsilon^{2}");
	hbg_2->Draw("hist same");
	gPad->SetLogy();
	gPad->SetBottomMargin(0.185);

	//tex.DrawLatex(0.05,7e-6, "#eta#rightarrowA#gamma#rightarrowe^{+}e^{-}#gamma");




}
