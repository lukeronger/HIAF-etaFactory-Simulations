#include "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_ana_src/plot_templates/myDrawTools.C"

int plot_mass_EE(){

	TFile *file = new TFile("../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-pdTo3HeEta-MC-and-rec-results.root");
	CreateCanvas();
	file->cd();
	TH1D *hmEE_MC = (TH1D*)file->Get("hmEE_MC");
	TH1D *hmEE_2 = (TH1D*)file->Get("hmEE_2");
	CreateFrame(0,0.6, 1e-1,hmEE_MC->GetMaximum()*1.2,    "M_{e^{+}e^{-}} (GeV/c^{2})","Counts");
	hmEE_MC->SetLineColor(4);
	hmEE_MC->SetLineWidth(2);
	hmEE_2->SetLineColor(2);
	hmEE_2->SetLineStyle(7);
	hmEE_2->SetLineWidth(2);
	hmEE_MC->Draw("same");
	hmEE_2->Draw("same");
	gPad->SetTopMargin(0.07);
	gPad->SetLogy();	


	TLegend *le = new TLegend(0.22,0.23,0.55,0.4);
	le->SetFillColor(0);
	le->SetBorderSize(0);
	le->AddEntry(hmEE_MC,"MC input events","l");
	le->AddEntry(hmEE_2,"Rec. events","l");
	le->Draw();






	TH1D *heffi = (TH1D*)hmEE_2->Clone();
	for(int i=1; i<hmEE_2->GetNbinsX(); i++){
		if(hmEE_MC->GetBinContent(i)>=1) 
			heffi->SetBinContent(i, 100.0*hmEE_2->GetBinContent(i)/hmEE_MC->GetBinContent(i));
	}
	CreateCanvas();
	CreateFrame(0,0.6, 0,100.0,    "M_{e^{+}e^{-}} (GeV/c^{2})","Efficiency (%)");
	heffi->SetLineStyle(1);
	heffi->SetLineColor(2);
	heffi->SetLineWidth(2);
	heffi->Draw("same");





	return 0;
}
