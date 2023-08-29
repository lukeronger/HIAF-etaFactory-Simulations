//TStyle *myStyle = new TStyle();
//myStyle->SetOptStat(0);
//myStyle->SetNdivisions(505,"X");
//myStyle->SetNdivisions(505,"Y");

int ncanvas = 0;
int nframe = 0;

TCanvas *CreateCanvas(int xsize=630, int ysize=500, string name=" ", string title=" "){
	double lmargin = 0.145;
	double bmargin = 0.14;
	double tmargin = 0.04;
	double rmargin = 0.04;
	TCanvas *c1;
	if(name != " ") c1 = new TCanvas(name.c_str(),title.c_str(),xsize,ysize);
	else {
		c1 = new TCanvas(Form("c%d",ncanvas),title.c_str(),xsize,ysize);
		ncanvas++;
	}
	gStyle->SetOptStat(0);
	gStyle->SetPalette(55);
	gPad->SetLeftMargin(lmargin);
	gPad->SetBottomMargin(bmargin);
	gPad->SetTopMargin(tmargin);
	gPad->SetRightMargin(rmargin);
	return c1;
}
TH2F *CreateFrame(double xmin=0, double xmax=2, double ymin=0, double ymax=10, string xtitle="x", string ytitle="y", string name=" ", string title=" "){
	TH2F *hframe;
	if(name != " ") hframe = new TH2F(name.c_str(),title.c_str(),400,xmin,xmax,400,ymin,ymax);
	else {
		hframe = new TH2F(Form("h2_%d",nframe),title.c_str(),400,xmin,xmax,400,ymin,ymax);
		nframe++;
	}
	hframe->Draw();
        hframe->GetXaxis()->SetTitle(xtitle.c_str());
	hframe->GetXaxis()->SetTitleSize(0.06);
	hframe->GetXaxis()->CenterTitle();
	hframe->GetXaxis()->SetTitleOffset(1.05);
	hframe->GetXaxis()->SetLabelSize(0.06);
	hframe->GetXaxis()->SetNdivisions(505);
	hframe->GetYaxis()->SetTitle(ytitle.c_str());
	hframe->GetYaxis()->SetTitleSize(0.06);
	hframe->GetYaxis()->CenterTitle();
	hframe->GetYaxis()->SetTitleOffset(1.18);
	hframe->GetYaxis()->SetLabelSize(0.06);
	hframe->GetYaxis()->SetNdivisions(505);
	hframe->GetZaxis()->SetLabelSize(0.05);
	return hframe;
}



TCanvas *CreateCanvas_for_2Times1Pads(int xsize=950, int ysize=500, string name=" ", string title=" "){
	double lmargin = 0.165;
	double bmargin = 0.15;
	double tmargin = 0.03;
	double rmargin = 0.05;
	TCanvas *c1;
	if(name != " ") c1 = new TCanvas(name.c_str(),title.c_str(),xsize,ysize);
	else {
		c1 = new TCanvas(Form("c%d",ncanvas),title.c_str(),xsize,ysize);
		ncanvas++;
	}
	gStyle->SetOptStat(0);
	gStyle->SetPalette(55);
	c1->Divide(2, 1);
	c1->cd(1);
	gPad->SetLeftMargin(lmargin);
	gPad->SetBottomMargin(bmargin);
	gPad->SetTopMargin(tmargin);
	gPad->SetRightMargin(rmargin);
	c1->cd(2);
	gPad->SetLeftMargin(lmargin);
	gPad->SetBottomMargin(bmargin);
	gPad->SetTopMargin(tmargin);
	gPad->SetRightMargin(rmargin);
	return c1;
}
TH2F *CreateFrame_for_2Times1Pads(double xmin=0, double xmax=2, double ymin=0, double ymax=10, string xtitle="x", string ytitle="y", string name=" ", string title=" "){
	TH2F *hframe;
	if(name != " ") hframe = new TH2F(name.c_str(),title.c_str(),400,xmin,xmax,400,ymin,ymax);
	else {
		hframe = new TH2F(Form("h2_%d",nframe),title.c_str(),400,xmin,xmax,400,ymin,ymax);
		nframe++;
	}
	hframe->Draw();
        hframe->GetXaxis()->SetTitle(xtitle.c_str());
	hframe->GetXaxis()->SetTitleSize(0.07);
	hframe->GetXaxis()->CenterTitle();
	hframe->GetXaxis()->SetTitleOffset(1);
	hframe->GetXaxis()->SetLabelSize(0.07);
	hframe->GetXaxis()->SetNdivisions(505);
	hframe->GetYaxis()->SetTitle(ytitle.c_str());
	hframe->GetYaxis()->SetTitleSize(0.07);
	hframe->GetYaxis()->CenterTitle();
	hframe->GetYaxis()->SetTitleOffset(1.2);
	hframe->GetYaxis()->SetLabelSize(0.07);
	hframe->GetYaxis()->SetNdivisions(505);
	hframe->GetZaxis()->SetLabelSize(0.06);
	return hframe;
}





TCanvas *CreateCanvas_for_2Times2Pads(int xsize=920, int ysize=720, string name=" ", string title=" "){
	double lmargin = 0.165;
	double bmargin = 0.15;
	double tmargin = 0.03;
	double rmargin = 0.05;
	TCanvas *c1;
	if(name != " ") c1 = new TCanvas(name.c_str(),title.c_str(),xsize,ysize);
	else {
		c1 = new TCanvas(Form("c%d",ncanvas),title.c_str(),xsize,ysize);
		ncanvas++;
	}
	gStyle->SetOptStat(0);
	gStyle->SetPalette(55);
	c1->Divide(2, 2);
	c1->cd(1);
	gPad->SetLeftMargin(lmargin);
	gPad->SetBottomMargin(bmargin);
	gPad->SetTopMargin(tmargin);
	gPad->SetRightMargin(rmargin);
	c1->cd(2);
	gPad->SetLeftMargin(lmargin);
	gPad->SetBottomMargin(bmargin);
	gPad->SetTopMargin(tmargin);
	gPad->SetRightMargin(rmargin);
	c1->cd(3);
	gPad->SetLeftMargin(lmargin);
	gPad->SetBottomMargin(bmargin);
	gPad->SetTopMargin(tmargin);
	gPad->SetRightMargin(rmargin);
	c1->cd(4);
	gPad->SetLeftMargin(lmargin);
	gPad->SetBottomMargin(bmargin);
	gPad->SetTopMargin(tmargin);
	gPad->SetRightMargin(rmargin);
	return c1;
}
TH2F *CreateFrame_for_2Times2Pads(double xmin=0, double xmax=2, double ymin=0, double ymax=10, string xtitle="x", string ytitle="y", string name=" ", string title=" "){
	///////////////////////////////////////////////////////////////////
	//coded by Rong WANG at Institute of Modern Physics, CAS, China////
	///////////////////////////////////////////////////////////////////
	TH2F *hframe;
	if(name != " ") hframe = new TH2F(name.c_str(),title.c_str(),400,xmin,xmax,400,ymin,ymax);
	else {
		hframe = new TH2F(Form("h2_%d",nframe),title.c_str(),400,xmin,xmax,400,ymin,ymax);
		nframe++;
	}
	hframe->Draw();
        hframe->GetXaxis()->SetTitle(xtitle.c_str());
	hframe->GetXaxis()->SetTitleSize(0.08);
	hframe->GetXaxis()->CenterTitle();
	hframe->GetXaxis()->SetTitleOffset(0.92);
	hframe->GetXaxis()->SetLabelSize(0.08);
	hframe->GetXaxis()->SetNdivisions(505);
	hframe->GetYaxis()->SetTitle(ytitle.c_str());
	hframe->GetYaxis()->SetTitleSize(0.08);
	hframe->GetYaxis()->CenterTitle();
	hframe->GetYaxis()->SetTitleOffset(1.03);
	hframe->GetYaxis()->SetLabelSize(0.08);
	hframe->GetYaxis()->SetNdivisions(505);
	hframe->GetZaxis()->SetLabelSize(0.07);
	return hframe;
}








TCanvas *CreateCanvas_for_3Times2Pads(int xsize=1300, int ysize=800, string name=" ", string title=" "){
	double lmargin = 0.175;
	double bmargin = 0.165;
	double tmargin = 0.04;
	double rmargin = 0.06;
	TCanvas *c1;
	if(name != " ") c1 = new TCanvas(name.c_str(),title.c_str(),xsize,ysize);
	else {
		c1 = new TCanvas(Form("c%d",ncanvas),title.c_str(),xsize,ysize);
		ncanvas++;
	}
	gStyle->SetOptStat(0);
	gStyle->SetPalette(55);
	c1->Divide(3, 2);
	c1->cd(1);
	gPad->SetLeftMargin(lmargin);
	gPad->SetBottomMargin(bmargin);
	gPad->SetTopMargin(tmargin);
	gPad->SetRightMargin(rmargin);
	c1->cd(2);
	gPad->SetLeftMargin(lmargin);
	gPad->SetBottomMargin(bmargin);
	gPad->SetTopMargin(tmargin);
	gPad->SetRightMargin(rmargin);
	c1->cd(3);
	gPad->SetLeftMargin(lmargin);
	gPad->SetBottomMargin(bmargin);
	gPad->SetTopMargin(tmargin);
	gPad->SetRightMargin(rmargin);
	c1->cd(4);
	gPad->SetLeftMargin(lmargin);
	gPad->SetBottomMargin(bmargin);
	gPad->SetTopMargin(tmargin);
	gPad->SetRightMargin(rmargin);
	c1->cd(5);
	gPad->SetLeftMargin(lmargin);
	gPad->SetBottomMargin(bmargin);
	gPad->SetTopMargin(tmargin);
	gPad->SetRightMargin(rmargin);
	c1->cd(6);
	gPad->SetLeftMargin(lmargin);
	gPad->SetBottomMargin(bmargin);
	gPad->SetTopMargin(tmargin);
	gPad->SetRightMargin(rmargin);
	return c1;
}
TH2F *CreateFrame_for_3Times2Pads(double xmin=0, double xmax=2, double ymin=0, double ymax=10, string xtitle="x", string ytitle="y", string name=" ", string title=" "){
	///////////////////////////////////////////////////////////////////
	//coded by Rong WANG at Institute of Modern Physics, CAS, China////
	///////////////////////////////////////////////////////////////////
	TH2F *hframe;
	if(name != " ") hframe = new TH2F(name.c_str(),title.c_str(),400,xmin,xmax,400,ymin,ymax);
	else {
		hframe = new TH2F(Form("h2_%d",nframe),title.c_str(),400,xmin,xmax,400,ymin,ymax);
		nframe++;
	}
	hframe->Draw();
        hframe->GetXaxis()->SetTitle(xtitle.c_str());
	hframe->GetXaxis()->SetTitleSize(0.08);
	hframe->GetXaxis()->CenterTitle();
	hframe->GetXaxis()->SetTitleOffset(0.92);
	hframe->GetXaxis()->SetLabelSize(0.08);
	hframe->GetXaxis()->SetNdivisions(505);
	hframe->GetYaxis()->SetTitle(ytitle.c_str());
	hframe->GetYaxis()->SetTitleSize(0.08);
	hframe->GetYaxis()->CenterTitle();
	hframe->GetYaxis()->SetTitleOffset(1.0);
	hframe->GetYaxis()->SetLabelSize(0.08);
	hframe->GetYaxis()->SetNdivisions(505);
	hframe->GetZaxis()->SetLabelSize(0.07);
	return hframe;
}














TCanvas *CreateCanvas_for_2Times3Pads(int xsize=780, int ysize=800, string name=" ", string title=" "){
	double lmargin = 0.15;
	double bmargin = 0.162;
	double tmargin = 0.04;
	double rmargin = 0.06;
	TCanvas *c1;
	if(name != " ") c1 = new TCanvas(name.c_str(),title.c_str(),xsize,ysize);
	else {
		c1 = new TCanvas(Form("c%d",ncanvas),title.c_str(),xsize,ysize);
		ncanvas++;
	}
	gStyle->SetOptStat(0);
	gStyle->SetPalette(55);
	c1->Divide(2, 3);
	c1->cd(1);
	gPad->SetLeftMargin(lmargin);
	gPad->SetBottomMargin(bmargin);
	gPad->SetTopMargin(tmargin);
	gPad->SetRightMargin(rmargin);
	c1->cd(2);
	gPad->SetLeftMargin(lmargin);
	gPad->SetBottomMargin(bmargin);
	gPad->SetTopMargin(tmargin);
	gPad->SetRightMargin(rmargin);
	c1->cd(3);
	gPad->SetLeftMargin(lmargin);
	gPad->SetBottomMargin(bmargin);
	gPad->SetTopMargin(tmargin);
	gPad->SetRightMargin(rmargin);
	c1->cd(4);
	gPad->SetLeftMargin(lmargin);
	gPad->SetBottomMargin(bmargin);
	gPad->SetTopMargin(tmargin);
	gPad->SetRightMargin(rmargin);
	c1->cd(5);
	gPad->SetLeftMargin(lmargin);
	gPad->SetBottomMargin(bmargin);
	gPad->SetTopMargin(tmargin);
	gPad->SetRightMargin(rmargin);
	c1->cd(6);
	gPad->SetLeftMargin(lmargin);
	gPad->SetBottomMargin(bmargin);
	gPad->SetTopMargin(tmargin);
	gPad->SetRightMargin(rmargin);
	return c1;
}
TH2F *CreateFrame_for_2Times3Pads(double xmin=0, double xmax=2, double ymin=0, double ymax=10, string xtitle="x", string ytitle="y", string name=" ", string title=" "){
	TH2F *hframe;
	if(name != " ") hframe = new TH2F(name.c_str(),title.c_str(),400,xmin,xmax,400,ymin,ymax);
	else {
		hframe = new TH2F(Form("h2_%d",nframe),title.c_str(),400,xmin,xmax,400,ymin,ymax);
		nframe++;
	}
	hframe->Draw();
        hframe->GetXaxis()->SetTitle(xtitle.c_str());
	hframe->GetXaxis()->SetTitleSize(0.08);
	hframe->GetXaxis()->CenterTitle();
	hframe->GetXaxis()->SetTitleOffset(0.96);
	hframe->GetXaxis()->SetLabelSize(0.08);
	hframe->GetXaxis()->SetNdivisions(505);
	hframe->GetYaxis()->SetTitle(ytitle.c_str());
	hframe->GetYaxis()->SetTitleSize(0.08);
	hframe->GetYaxis()->CenterTitle();
	hframe->GetYaxis()->SetTitleOffset(0.93);
	hframe->GetYaxis()->SetLabelSize(0.08);
	hframe->GetYaxis()->SetNdivisions(505);
	hframe->GetZaxis()->SetLabelSize(0.07);
	return hframe;
}




