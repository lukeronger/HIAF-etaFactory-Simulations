{
	gROOT->ProcessLine(".L ../plot_templates/myDrawTools.C");




	TFile file("../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-GiBUU-PipPimPi0-background-with-neutrons-results.root");

	TLatex tex;
	tex.SetTextSize(0.08);
	tex.SetTextFont(42);
	

	TCanvas *c = CreateCanvas_for_1Times2Pads();


	c->cd(1);
	double ymax = 1.1 * hmTwoGammas_2->GetMaximum();
	TH2F *frame = CreateFrame_for_1Times2Pads(0,0.45, 0,ymax, "Mass(#gamma#gamma) [GeV/c^{2}]", "Counts");
	//frame->SetMinimum(1);
	//frame->SetMaximum(1.1 * hmTwoGammas_2->GetMaximum());
	hmTwoGammas_2->SetLineWidth(1);
	hmTwoGammas_2->SetLineColor(4);
	hmTwoGammas_2->Draw("same");
	TFile file2("../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-GiBUU-PipPimPi0-background-without-neutrons-results.root");
	hmTwoGammas_2->SetLineWidth(1);
	hmTwoGammas_2->SetLineColor(2);
	hmTwoGammas_2->SetLineStyle(7);
	hmTwoGammas_2->Draw("same");


	gPad->SetTopMargin(0.08);
	tex.DrawLatex(0.2, ymax/1.1*0.9, "p ^{7}Li #rightarrow #gamma #gamma X");





	c->cd(2);
	file.cd();
	ymax = 1.1 * hmTwoGammas_PipPimTwoGammas_2->GetMaximum();
	TH2F *frame2 = CreateFrame_for_1Times2Pads(0,0.45, 0,ymax, "Mass(#gamma#gamma) [GeV/c^{2}]", "Counts");
	//frame2->SetMinimum(1);
	//frame2->SetMaximum(1.1 * hmTwoGammas_PipPimTwoGammas_2->GetMaximum());
	hmTwoGammas_PipPimTwoGammas_2->SetLineWidth(1);
	hmTwoGammas_PipPimTwoGammas_2->SetLineColor(4);
	hmTwoGammas_PipPimTwoGammas_2->Draw("same");
	file2.cd();
	hmTwoGammas_PipPimTwoGammas_2->SetLineWidth(1);
	hmTwoGammas_PipPimTwoGammas_2->SetLineColor(2);
	hmTwoGammas_PipPimTwoGammas_2->SetLineStyle(7);
	hmTwoGammas_PipPimTwoGammas_2->Draw("same");

	tex.DrawLatex(0.2, ymax/1.1*0.9, "p ^{7}Li #rightarrow #pi^{+} #pi^{-} #gamma #gamma X");

	TF1 *f1 = new TF1();
	f1->SetLineWidth(1);
	f1->SetLineColor(4);
	TF1 *f2 = new TF1();
	f2->SetLineWidth(1);
	f2->SetLineColor(2);
	f2->SetLineStyle(7);

	TLegend *le = new TLegend(0.5,0.24,0.94,0.5);
	le->SetFillColor(0);
	le->SetBorderSize(0);
	le->AddEntry(f1,"With neutron background","l");
	le->AddEntry(f2,"W/O neutron background","l");
	le->Draw();

	file.cd();
	hmTwoGammas_PipPimTwoGammas_2->Draw("same");
	file2.cd();
	hmTwoGammas_PipPimTwoGammas_2->Draw("same");


}
