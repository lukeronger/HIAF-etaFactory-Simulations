#include"myDrawTools.C"

void plot_sample_multiPads(){
	//create a canvas of two pads
	TCanvas *c = CreateCanvas_for_2Times1Pads();
	c->cd(1);
	//create a sample histogram
	TH1D *hist = new TH1D("hist","hist",100,-5,5);
	hist->FillRandom("gaus",10000);
	double ymin = hist->GetMinimum();
	double ymax = hist->GetMaximum();
	//create a frame with axises of -5<x<5, ymin<y<1.2*ymax, xtitle="X title", ytitle="Y title"
	TH2F *frame = CreateFrame_for_2Times1Pads(-5, 5, ymin, ymax*1.2, "X title", "Y title");
	hist->Draw("same");
	hist->SetLineWidth(3);
	c->cd(2);
	//create another sample histogram
	TH1D *hist2 = new TH1D("hist2","hist2",100,-5,15);
	hist2->FillRandom("landau",10000);
	ymin = hist2->GetMinimum();
	ymax = hist2->GetMaximum();
	//create a frame with axises of -5<x<5, ymin<y<1.2*ymax, xtitle="X title", ytitle="Y title"
	TH2F *frame2 = CreateFrame_for_2Times1Pads(-5, 15, ymin-50, ymax*1.2, "X title", "Y title");
	hist2->Draw("same");
	hist2->SetLineColor(30);
	hist2->SetFillColor(30);
	hist2->SetLineWidth(2);



	//create a canvas of four pads
	TCanvas *c2 = CreateCanvas_for_2Times2Pads();
	//go to one pad
	c2->cd(1);
	//create a frame
	TH2F *frame3 = CreateFrame_for_2Times2Pads(-10, 10, -1.5, 1.5, "#theta", "sin(#theta)");
	TF1 *fun = new TF1("fun","sin(x)",-10,10);
	fun->SetLineColor(kRed+2);
	fun->Draw("l same");
	//go to one pad
	c2->cd(2);
	//create a frame
	TH2F *frame4 = CreateFrame_for_2Times2Pads(-10, 10, -1.5, 1.5, "#theta", "cos(#theta)");
	TF1 *fun2 = new TF1("fun2","cos(x)",-10,10);
	fun2->SetLineColor(kGreen+2);
	fun2->Draw("l same");
	//go to one pad
	c2->cd(3);
	//create a frame
	TH2F *frame5 = CreateFrame_for_2Times2Pads(-10, 10, -1.5, 1.5, "#theta", "tan(#theta)");
	TF1 *fun3 = new TF1("fun3","tan(x)",-10,10);
	fun3->SetLineColor(kBlue+1);
	fun3->Draw("l same");
	//go to one pad
	c2->cd(4);
	//create a frame
	TH2F *frame6 = CreateFrame_for_2Times2Pads(-10, 10, -1.5, 1.5, "x", "atan(x)");
	TF1 *fun4 = new TF1("fun4","atan(x)",-10,10);
	fun4->SetLineColor(kYellow+1);
	fun4->Draw("l same");



	//create a canvas of six pads
	TCanvas *c3 = CreateCanvas_for_3Times2Pads();
	//go to one pad
	c3->cd(1);
	//create a frame
	TH2F *frame7 = CreateFrame_for_3Times2Pads();
	//go to one pad
	c3->cd(2);
	//create a frame
	TH2F *frame8 = CreateFrame_for_3Times2Pads();
	//go to one pad
	c3->cd(3);
	//create a frame
	TH2F *frame9 = CreateFrame_for_3Times2Pads();
	//go to one pad
	c3->cd(4);
	//create a frame
	TH2F *frame10 = CreateFrame_for_3Times2Pads();
	//go to one pad
	c3->cd(5);
	//create a frame
	TH2F *frame11 = CreateFrame_for_3Times2Pads();
	//go to one pad
	c3->cd(6);
	//create a frame
	TH2F *frame12 = CreateFrame_for_3Times2Pads();




	//create a canvas of six pads
	TCanvas *c4 = CreateCanvas_for_2Times3Pads();
	//go to one pad
	c4->cd(1);
	//create a frame
	TH2F *frame13 = CreateFrame_for_2Times3Pads();
	//go to one pad
	c4->cd(2);
	//create a frame
	TH2F *frame14 = CreateFrame_for_2Times3Pads();
	//go to one pad
	c4->cd(3);
	//create a frame
	TH2F *frame15 = CreateFrame_for_2Times3Pads();
	//go to one pad
	c4->cd(4);
	//create a frame
	TH2F *frame16 = CreateFrame_for_2Times3Pads();
	//go to one pad
	c4->cd(5);
	//create a frame
	TH2F *frame17 = CreateFrame_for_2Times3Pads();
	//go to one pad
	c4->cd(6);
	//create a frame
	TH2F *frame18 = CreateFrame_for_2Times3Pads(-5,5,  -5,5,  "random-x","random-y");
	TH2D *h2_example = new TH2D("","",40,-5,5,40,-5,5);
	for(int i=0; i<100000; i++){
		h2_example->Fill(gRandom->Gaus(0,1), gRandom->Gaus(0,1));
	}
	frame18->SetMinimum(h2_example->GetMinimum() + 1);
	frame18->SetMaximum(h2_example->GetMaximum()*1.1 );
	h2_example->Draw("col same");

}
