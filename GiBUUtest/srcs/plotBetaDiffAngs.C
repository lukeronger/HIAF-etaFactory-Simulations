{
	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(505,"XY");
	



	TFile filen("anaData/GiBUU_p7Li_1.8GeV.root");
	TFile fileg("../../pluto6_ana_src/anaData/Eta_1.8GeV.root");

	TCanvas c1("c1","c1", 970,600);
	c1.Divide(3,3);


	TString opts, cuts, names;
	TLegend *le; TF1 model;
	for(int i=1; i<9; i++){
		double thetaa = i * 10;
		double thetab = (i+1) * 10;
		
		c1.cd(i);

		opts = Form("beta200_gamma>>h200g_%d(200,0,2)", i);
		cuts = Form("Egamma1>0.05 && thetagamma1*TMath::RadToDeg()>%lg && thetagamma1*TMath::RadToDeg()<%lg", thetaa, thetab);
		fileg.cd();
		tree->SetLineColor(2);
		tree->Draw(opts, cuts);
		names = Form("h200g_%d", i);
		TH1F *hist = (TH1F *)gPad->GetPrimitive(names.Data());
		hist->Scale(0.02);
		hist->Draw("hist");
		hist->SetTitle("");
		hist->GetXaxis()->SetLabelSize(0.08);
		hist->GetXaxis()->SetTitle("#beta      ");
		hist->GetXaxis()->SetTitleSize(0.08);
		hist->GetXaxis()->SetTitleOffset(0.5);
		hist->GetXaxis()->CenterTitle();

		opts = Form("beta200_n>>h200n_%d(200,0,2)", i);
		cuts = Form("KineEn>0.05 && thetan*TMath::RadToDeg()>%lg && thetan*TMath::RadToDeg()<%lg", thetaa, thetab);
		filen.cd();
		tree->SetLineColor(4);
		tree->Draw(opts, cuts, "same");


		le = new TLegend(0.54,0.65,0.88,0.85);
		le->SetFillColor(0);
		le->SetBorderSize(0);
		names = Form("[%lg#circ, %lg#circ]", thetaa, thetab);
		le->AddEntry(&model,names,"");
		le->Draw();
	}












}
