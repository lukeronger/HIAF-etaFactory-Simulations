{

	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(505,"XY");





TFile file("out_GammaGamma.root");
//tree->Draw("X","Y>-0.6 && Y<-0.5","lego2");

tree->Draw("Y:X>>h2","","colz");

TF2 model("model","[0]*(1+[1]*y+[2]*y*y+[3]*x+[4]*x*x+[5]*x*y+[6]*y*y*y+[7]*x*x*y+[8]*x*y*y+[9]*x*x*x)");
//h2->Fit("model");

TLine *li = new TLine(0, -1.1, 0, 1);
li->SetLineStyle(7);
li->SetLineColor(2);
li->SetLineWidth(2);
li->Draw();


	//gPad->SetLogz();
	h2->SetTitle("");
	h2->GetXaxis()->SetTitle("X");
	h2->GetXaxis()->SetTitleSize(0.06);
	h2->GetXaxis()->CenterTitle();
	h2->GetXaxis()->SetTitleOffset(1.05);
	h2->GetXaxis()->SetLabelSize(0.06);
	h2->GetYaxis()->SetTitle("Y");
	h2->GetYaxis()->SetTitleSize(0.06);
	h2->GetYaxis()->CenterTitle();
	h2->GetYaxis()->SetTitleOffset(1.05);
	h2->GetYaxis()->SetLabelSize(0.06);
	h2->GetZaxis()->SetLabelSize(0.05);

	gPad->SetLeftMargin(0.135);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.03);
	gPad->SetRightMargin(0.137);

}
