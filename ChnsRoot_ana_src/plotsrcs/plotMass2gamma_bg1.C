{
	gStyle->SetOptStat(1);
	gStyle->SetOptFit(1);
	gStyle->SetStatY(0.91);
	gStyle->SetStatX(0.93);
	//gStyle->SetStatW(0.4);
	//gStyle->SetStatH(0.4);
	gStyle->SetNdivisions(505,"Y");
	gStyle->SetNdivisions(502,"X");
	TCanvas c1("c1","c1",630,500);

	TFile file("../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-etaDecay-3pi-background-results.root");
	hmpi0_2->Draw();
	hmpi0_2->SetTitle("");
	hmpi0_2->GetXaxis()->SetTitle("M(#gamma#gamma) / GeV");
	hmpi0_2->GetXaxis()->SetTitleSize(0.06);
	hmpi0_2->GetXaxis()->CenterTitle();
	hmpi0_2->GetXaxis()->SetTitleOffset(1.05);
	hmpi0_2->GetXaxis()->SetLabelSize(0.06);
	hmpi0_2->GetYaxis()->SetTitle("Counts");
	hmpi0_2->GetYaxis()->SetTitleSize(0.06);
	hmpi0_2->GetYaxis()->CenterTitle();
	hmpi0_2->GetYaxis()->SetTitleOffset(1.05);
	hmpi0_2->GetYaxis()->SetLabelSize(0.06);
	hmpi0_2->GetZaxis()->SetLabelSize(0.05);

	hmpi0_2->GetXaxis()->SetNdivisions(505);

	hmpi0_2->Rebin(2);
	//hmpi0_2->GetXaxis()->SetRangeUser(0.48, 0.7);
	hmpi0_2->GetXaxis()->SetRangeUser(0.1, 0.2);
	hmpi0_2->SetLineWidth(2);
	hmpi0_2->SetLineColor(4);

	//gPad->SetLogy();

	gPad->SetLeftMargin(0.145);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.08);
	gPad->SetRightMargin(0.06);



	hmpi0_2->Fit("gaus");


}
