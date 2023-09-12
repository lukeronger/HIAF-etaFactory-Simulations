#include"myDrawTools_bak.C"

void plot_sample_multiPads_noseparation(){
	//create a canvas of two pads
	TCanvas *c = CreateCanvas_for_1Times2Pads_noseparation();
	c->cd(1);
	gPad->SetGridx();
	//create a sample histogram
	TH1D *hist = new TH1D("hist","hist",100,-5,5);
	hist->FillRandom("gaus",10000);
	double ymin = hist->GetMinimum();
	double ymax = hist->GetMaximum();
	//create a frame with axises of -5<x<5, ymin<y<1.2*ymax, xtitle="X title", ytitle="Y title"
	TH2F *frame = CreateFrame_for_1Times2Pads_noseparation(-5, 5, 0.001, ymax*1.2, "X title", "Y title");
	hist->Draw("same");
	hist->SetLineWidth(2);
	c->cd(2);
	gPad->SetGridx();
	//create another sample histogram
	TH1D *hist2 = new TH1D("hist2","hist2",100,-5,15);
	hist2->FillRandom("landau",10000);
	ymin = hist2->GetMinimum();
	ymax = hist2->GetMaximum();
	//create a frame with axises of -5<x<5, ymin<y<1.2*ymax, xtitle="X title", ytitle="Y title"
	TH2F *frame2 = CreateFrame_for_1Times2Pads_noseparation_bottom(-5, 5, ymin-50, ymax*1.2, "X title", "Y title");
	hist2->Draw("same");
	hist2->SetLineColor(43);
	hist2->SetFillColor(43);
	hist2->SetLineWidth(2);



}
