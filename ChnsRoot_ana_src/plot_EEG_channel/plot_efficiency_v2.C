{
	int Nbins = 43;

	gROOT->ProcessLine(".L ../plot_templates/myDrawTools.C");



	TCanvas *c = CreateCanvas_for_2Times2Pads();
	TFile file("/data2/rwang/githubs/HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-etaDecay-EEG-MC-and-rec-results.root");

	c->cd(1);
	TH2F *frame = CreateFrame_for_2Times2Pads(0,0.53, 0,1.2*hmEE_MC->GetMaximum(),  "M(e^{+}e^{-}) (GeV/c^{2})","Counts");
	hmEE_MC->Draw("same");
	hmEE_MC->SetFillColor(4);
	hmEE_MC->SetLineColor(4);
	hmEE_2->Draw("same");
	hmEE_2->SetFillColor(2);
	hmEE_2->SetLineColor(2);

	c->cd(2);
	TH2F *frame2 = CreateFrame_for_2Times2Pads(0,0.53, 1,1.2*hmEE_MC->GetMaximum(),  "M(e^{+}e^{-}) (GeV/c^{2})","Counts");
	hmEE_MC->Draw("same");
	hmEE_MC->SetFillColor(4);
	hmEE_MC->SetLineColor(4);
	hmEE_2->Draw("same");
	hmEE_2->SetFillColor(2);
	hmEE_2->SetLineColor(2);
	gPad->SetLogy();

	c->cd(3);
	TH2F *frame3 = CreateFrame_for_2Times2Pads(0,0.53, 0,100,  "M(e^{+}e^{-}) (GeV/c^{2})","Efficiency");
	TH1D hRatio("hRatio","",Nbins,0,0.53);
	for(int i=1; i<=Nbins; i++){
		if(hmEE_MC->GetBinContent(i)>1 )
			hRatio.SetBinContent(i,  100.0*hmEE_2->GetBinContent(i) / hmEE_MC->GetBinContent(i));
	}
	hRatio.Draw("hist same");

	TFile fileout("efficiency.root","recreate");
	hRatio.Write();
	fileout.Close();

#if 0
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


#endif



}
