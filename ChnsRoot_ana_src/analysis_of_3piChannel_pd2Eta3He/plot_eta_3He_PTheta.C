{
	gROOT->ProcessLine(".L /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_ana_src/plot_templates/myDrawTools.C");


	TFile file("results_from_selector.root");


	TLatex tex;
	tex.SetTextSize(0.08);
	tex.SetTextFont(42);

	TCanvas *c = CreateCanvas_for_1Times2Pads();


	c->cd(1);
	TH2F *frame = CreateFrame_for_1Times2Pads(0,35, 0.5,3, "#theta [#circ]","P [GeV/c]");
	frame->SetMinimum(1);
	frame->SetMaximum(1.1 * h3He_PTheta->GetMaximum());
	h3He_PTheta->Draw("col same");

	tex.DrawLatex(35*0.6, 0.5+2.5*0.16, "^{3}He from p d #rightarrow #eta ^{3}He");



	c->cd(2);
	TH2F *frame2 = CreateFrame_for_1Times2Pads(0,110, 0,2, "#theta [#circ]","P [GeV/c]");
	frame2->SetMinimum(1);
	frame2->SetMaximum(1.1 * heta_PTheta->GetMaximum());
	heta_PTheta->Draw("col same");

	tex.DrawLatex(110*0.6, 2*0.65, "#eta from p d #rightarrow #eta ^{3}He");
}
