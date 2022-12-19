{

	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(505,"XY");





	TFile file("out_GammaGamma.root");
	//tree->Draw("X","Y>-0.6 && Y<-0.5","lego2");

	tree->Draw("X>>h2", "Y>-0.6 && Y<-0.5","e");

	TF1 model("model","[0]*(1+[1]*x)");
	model.SetParNames("N","c"); 
	h2->Fit("model","","",-0.6,0.6);




	h2->SetLineColor(1);
	h2->SetMarkerStyle(20);
	h2->SetMarkerSize(0.8);
	//gPad->SetLogz();
	h2->SetTitle("");
	h2->GetXaxis()->SetTitle("X");
	h2->GetXaxis()->SetTitleSize(0.06);
	h2->GetXaxis()->CenterTitle();
	h2->GetXaxis()->SetTitleOffset(1.05);
	h2->GetXaxis()->SetLabelSize(0.06);
	h2->GetYaxis()->SetTitle("Counts");
	h2->GetYaxis()->SetTitleSize(0.06);
	h2->GetYaxis()->CenterTitle();
	h2->GetYaxis()->SetTitleOffset(1.05);
	h2->GetYaxis()->SetLabelSize(0.06);
	h2->GetZaxis()->SetLabelSize(0.05);

	gPad->SetLeftMargin(0.135);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.03);
	gPad->SetRightMargin(0.137);


	TLatex tex(0, h2->GetMaximum()*0.25, "-0.6 < Y < -0.5");
	tex.SetTextColor(4);
	tex.Draw();
}
