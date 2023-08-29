#include"myDrawTools.C"

void plot_sample(){
	//create a canvas
	TCanvas *c = CreateCanvas();
	//create a sample histogram
	TH1D *hist = new TH1D("hist","hist",100,-5,5);
	hist->FillRandom("gaus",10000);
	double ymin = hist->GetMinimum();
	double ymax = hist->GetMaximum();
	//create a frame with axises of -5<x<5, ymin<y<1.2*ymax, xtitle="X title", ytitle="Y title"
	TH2F *frame = CreateFrame(-5, 5, ymin, ymax*1.2, "X title", "Y title");
	hist->Draw("same");
	hist->SetLineWidth(3);


	//create another canvas
	TCanvas *c2 = CreateCanvas();
	//create anthoer frame 
	TH2F *frame2 = CreateFrame(-10, 10, -1.5, 1.5, "#theta", "sin(x)");
	TF1 *fun = new TF1("fun","sin(x)",-10,10);
	fun->SetLineColor(6);
	fun->Draw("l same");

}
