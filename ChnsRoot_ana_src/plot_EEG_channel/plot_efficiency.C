{

        gStyle->SetOptStat(0);
        gStyle->SetNdivisions(505,"XY");
        gStyle->SetPalette(55);

        TCanvas c1("c1","c1",1000,840);
        c1.Divide(2, 2);

	TFile file("/data2/rwang/githubs/HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-etaDecay-EEG-MC-and-rec-results.root");

	TH1D *hmEE_MC_cpy = hmEE_MC->Clone();
	TH1D *hmEE_2_cpy  = hmEE_2->Clone();

	c1.cd(1);
	hmEE_MC_cpy->Draw();
        hmEE_MC_cpy->SetTitle("");
        hmEE_MC_cpy->GetXaxis()->SetTitle("M(e^{+}e^{-}) [GeV/c^{2}]");
        hmEE_MC_cpy->GetXaxis()->SetTitleSize(0.08);
        hmEE_MC_cpy->GetXaxis()->CenterTitle();
        hmEE_MC_cpy->GetXaxis()->SetTitleOffset(0.92);
        hmEE_MC_cpy->GetXaxis()->SetLabelSize(0.08);
        hmEE_MC_cpy->GetYaxis()->SetTitle("Counts");
        hmEE_MC_cpy->GetYaxis()->SetTitleSize(0.08);
        hmEE_MC_cpy->GetYaxis()->CenterTitle();
        hmEE_MC_cpy->GetYaxis()->SetTitleOffset(1.0);
        hmEE_MC_cpy->GetYaxis()->SetLabelSize(0.08);
        hmEE_MC_cpy->GetZaxis()->SetLabelSize(0.07);
	hmEE_MC_cpy->SetFillColor(4);
	hmEE_MC_cpy->SetLineColor(4);

	hmEE_2_cpy->Draw("same");
	hmEE_2_cpy->SetFillColor(2);
	hmEE_2_cpy->SetLineColor(2);

        gPad->SetLeftMargin(0.165);
        gPad->SetBottomMargin(0.15);
        gPad->SetTopMargin(0.03);
        gPad->SetRightMargin(0.145);	



	c1.cd(2);
	hmEE_MC_cpy->Draw();
        hmEE_MC_cpy->SetTitle("");
        hmEE_MC_cpy->GetXaxis()->SetTitle("M(e^{+}e^{-}) [GeV/c^{2}]");
        hmEE_MC_cpy->GetXaxis()->SetTitleSize(0.08);
        hmEE_MC_cpy->GetXaxis()->CenterTitle();
        hmEE_MC_cpy->GetXaxis()->SetTitleOffset(0.92);
        hmEE_MC_cpy->GetXaxis()->SetLabelSize(0.08);
        hmEE_MC_cpy->GetYaxis()->SetTitle("Counts");
        hmEE_MC_cpy->GetYaxis()->SetTitleSize(0.08);
        hmEE_MC_cpy->GetYaxis()->CenterTitle();
        hmEE_MC_cpy->GetYaxis()->SetTitleOffset(1.0);
        hmEE_MC_cpy->GetYaxis()->SetLabelSize(0.08);
        hmEE_MC_cpy->GetZaxis()->SetLabelSize(0.07);
	hmEE_MC_cpy->SetFillColor(4);
	hmEE_MC_cpy->SetLineColor(4);

	hmEE_2_cpy->Draw("same");
	hmEE_2_cpy->SetFillColor(2);
	hmEE_2_cpy->SetLineColor(2);

        gPad->SetLeftMargin(0.165);
        gPad->SetBottomMargin(0.15);
        gPad->SetTopMargin(0.03);
        gPad->SetRightMargin(0.145);	

	gPad->SetLogy();






	c1.cd(3);
	TH1D hRatio("hRatio","",30,0.01,0.58);
	for(int i=1;i<=30;i++){
		if(hmEE_MC_cpy->GetBinContent(i)>1 )
			hRatio.SetBinContent(i,  100.0*hmEE_2_cpy->GetBinContent(i) / hmEE_MC_cpy->GetBinContent(i));
	}
	hRatio.Draw("hist");

        hRatio.SetTitle("");
        hRatio.GetXaxis()->SetTitle("M(e^{+}e^{-}) [GeV/c^{2}]");
        hRatio.GetXaxis()->SetTitleSize(0.08);
        hRatio.GetXaxis()->CenterTitle();
        hRatio.GetXaxis()->SetTitleOffset(0.92);
        hRatio.GetXaxis()->SetLabelSize(0.08);
        hRatio.GetYaxis()->SetTitle("Efficiency of the e^{+}e^{-}#gamma channel");
        hRatio.GetYaxis()->SetTitleSize(0.08);
        hRatio.GetYaxis()->CenterTitle();
        hRatio.GetYaxis()->SetTitleOffset(1.0);
        hRatio.GetYaxis()->SetLabelSize(0.08);
        hRatio.GetZaxis()->SetLabelSize(0.07);

        gPad->SetLeftMargin(0.165);
        gPad->SetBottomMargin(0.15);
        gPad->SetTopMargin(0.03);
        gPad->SetRightMargin(0.145);	






}
