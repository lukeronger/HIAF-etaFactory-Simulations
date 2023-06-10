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

	TFile file("../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-etaDecay-3pi-background-with-neutron-results.root");
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


	double height = 1.05 * hmpi0_2->GetMaximum();
	cout<<height<<endl;
	double mpi0_a = 0.12;
	double mpi0_b = 0.155;
	TLine *li = new TLine(mpi0_a,0,  mpi0_a,height);
	li->SetLineWidth(2);
	li->SetLineColor(2);
	li->SetLineStyle(3);
	li->Draw();
	li = new TLine(mpi0_b,0,  mpi0_b,height);
	li->SetLineWidth(2);
	li->SetLineColor(2);
	li->SetLineStyle(3);
	li->Draw();

	//hmpi0_2->Fit("gaus");


}
