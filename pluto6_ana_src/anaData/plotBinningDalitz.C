{

	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(505,"XY");

TH2F *h2 = new TH2F("","",500,-1,1,500,0,8000);
h2->Draw();


TString filename;
TGraphErrors *gg;
for(int i=2;i<=18;i++){
	filename = Form("N_vs_X_Y_%d.txt", i);
	gg = new TGraphErrors(filename.Data());
	gg->SetMarkerStyle(7);
	gg->Draw("psame");
}




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
	h2->GetYaxis()->SetTitleOffset(1.5);
	h2->GetYaxis()->SetLabelSize(0.06);
	h2->GetZaxis()->SetLabelSize(0.05);

	gPad->SetLeftMargin(0.17);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.03);
	gPad->SetRightMargin(0.03);

}
