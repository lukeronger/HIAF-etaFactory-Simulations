#include "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_ana_src/plot_templates/myDrawTools.C"

int plot_theta_of_3He(){

	TFile *file = new TFile("../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-pdTo3HeEta-MC-and-rec-results.root");
	CreateCanvas();
	file->cd();
	TH1D *h3He_theta_MC = (TH1D*)file->Get("h3He_theta_MC");
	TH1D *h3He_theta = (TH1D*)file->Get("h3He_theta");
	CreateFrame(0,35, 1e-4,h3He_theta_MC->GetMaximum()*1.2,    "#theta of ^{3}He (#circ)","Counts");
	h3He_theta_MC->SetLineColor(4);
	h3He_theta_MC->SetLineWidth(2);
	h3He_theta->SetLineColor(2);
	h3He_theta->SetLineStyle(7);
	h3He_theta->SetLineWidth(2);
	h3He_theta_MC->Draw("same");
	h3He_theta->Draw("same");
	gPad->SetTopMargin(0.07);	


	TLegend *le = new TLegend(0.22,0.63,0.55,0.8);
	le->SetFillColor(0);
	le->SetBorderSize(0);
	le->AddEntry(h3He_theta_MC,"MC input ^{3}He","l");
	le->AddEntry(h3He_theta,"Rec. ^{3}He","l");
	le->Draw();



	return 0;
}
