{
	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(505,"XY");



	TCanvas c1("c1","c1",630,500);

	int N= 4;
	double ee[4] = {1.8, 3, 6, 9};
	double acc1[4] = {56.60, 66.01, 76.02, 79.68};
	double acc2[4] = {57.40, 67.27, 78.24, 82.84};
	double acc3[4] = {85.43, 86.89, 88.84, 89.36};
	double acc4[4] = {86.30, 88.22, 91.13, 92.58};
	TGraph g1(N,ee,acc1);
	TGraph g2(N,ee,acc2);
	TGraph g3(N,ee,acc3);
	TGraph g4(N,ee,acc4);

	g1.SetMarkerStyle(24);
	g2.SetMarkerStyle(25);
	g3.SetMarkerStyle(20);
	g4.SetMarkerStyle(21);
	g1.SetMarkerColor(1);
	g2.SetMarkerColor(4);
	g3.SetMarkerColor(3);
	g4.SetMarkerColor(2);
	g1.SetLineColor(1);
	g2.SetLineColor(4);
	g3.SetLineColor(3);
	g4.SetLineColor(2);

	g1.Draw("apl");
	g2.Draw("plsame");
	g3.Draw("plsame");
	g4.Draw("plsame");



	g1.SetMinimum(40);
	g1.SetMaximum(100);
	//gPad->SetLogz();
	g1.SetTitle("");
	g1.GetXaxis()->SetTitle("Beam Energy T (GeV)");
	g1.GetXaxis()->SetTitleSize(0.06);
	g1.GetXaxis()->CenterTitle();
	g1.GetXaxis()->SetTitleOffset(1.05);
	g1.GetXaxis()->SetLabelSize(0.06);
	g1.GetYaxis()->SetTitle("Acceptance for Photon (%)");
	g1.GetYaxis()->SetTitleSize(0.06);
	g1.GetYaxis()->CenterTitle();
	g1.GetYaxis()->SetTitleOffset(1.05);
	g1.GetYaxis()->SetLabelSize(0.06);
	//g1.GetZaxis()->SetLabelSize(0.05);

	gPad->SetLeftMargin(0.145);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.03);
	gPad->SetRightMargin(0.03);





	TLegend *le = new TLegend(0.45,0.18,0.94,0.48);
	le->SetFillColor(0);
	le->SetBorderSize(1);
	le->AddEntry(&g4,"E_{#gamma}>50MeV,   #theta [2#circ, 150#circ]","p");
	le->AddEntry(&g3,"E_{#gamma}>50MeV,   #theta [5#circ, 150#circ]","p");
	le->AddEntry(&g2,"E_{#gamma}>100MeV, #theta [2#circ, 150#circ]","p");
	le->AddEntry(&g1,"E_{#gamma}>100MeV, #theta [5#circ, 150#circ]","p");
	le->Draw();

}
