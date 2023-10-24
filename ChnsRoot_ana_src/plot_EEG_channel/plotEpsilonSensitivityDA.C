{
	double Neta_produced = 3.11e11;
	double Neta_sim = 84235;
	double scaleup = Neta_produced  /  Neta_sim ;
	double effi = 0.6;

	double Meta = 0.547862;
	double Br_Eta2GG = 0.3936;
	TF1 tff_eta("tff_eta", "1 - [1]*x/pow([0],2) + [2]*pow(x,2)/pow([0],4) - [3]*pow(x,3)/pow([0],6)");
	tff_eta.SetParameters(0.547862,  0.576, 0.339, 0.2);

	gROOT->ProcessLine(".L ../plot_templates/myDrawTools.C");


	TCanvas *c = CreateCanvas();

	TFile file_effi("efficiency.root");
	TH1D *heffi = (TH1D *) hRatio->Clone();
	//heffi->Draw();


	TFile file("../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-GiBUU-EEG-background-with-neutrons-results.root");
	hmEE_2->Draw();
//	hmEEG_2->Fit("gaus");
	TH1D *hbg = (TH1D *) hmEE_2->Clone();

	TFile file2("../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-etaDecay-EEG-results.root");
	hmEE_2->Draw("same");
	hmEE_2->SetLineColor(2);
	hmEE_2->SetLineWidth(2);




	TLatex tex;
	tex.SetTextSize(0.06);
	tex.SetTextFont(42);


	TCanvas *c2 = CreateCanvas();
	hbg->Add(hmEE_2);
	for(int i=1;  i<=43;  i++) if(hbg->GetBinContent(i)<=1) hbg->SetBinContent(i, 1);
	for(int i=1;  i<=43;  i++){
		double nbg = hbg->GetBinContent(i);
		nbg *= scaleup;
		effi = heffi->GetBinContent(i) / 100.; cout<<"  "<<effi<<endl;
		double sensi = 3*sqrt(nbg) / Neta_produced / effi;

		double MA = hbg->GetBinCenter(i);
		double tff = tff_eta(-MA*MA);  cout<<i<<"\t"<<MA<<"\t"<<tff<<endl; 
		double kine_factor = pow(1-MA*MA/Meta/Meta,  3); cout<<i<<"\t"<<kine_factor<<"   kine"<<endl;

		sensi /= 2.0;
		sensi /= (tff*tff);
		sensi /= kine_factor;
		sensi /= Br_Eta2GG;
		hbg->SetBinContent(i, sensi);
	}
	hbg->SetLineColor(4);
	hbg->SetLineWidth(2);
	//heffi->Draw();
	heffi->Print();

	CreateFrame(0,0.52, 0.2*hbg->GetMinimum(),2*hbg->GetMaximum(),    "M(e^{+}e^{-}) (GeV)", "Uplimit of #varepsilon^{2}");
	hbg->Draw("same");
	gPad->SetLogy();
	gPad->SetTopMargin(0.05);

	tex.DrawLatex(0.05,7e-6, "#eta#rightarrowA#gamma#rightarrowe^{+}e^{-}#gamma");



}
