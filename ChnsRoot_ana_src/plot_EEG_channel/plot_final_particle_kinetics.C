{
	gROOT->ProcessLine(".L ../plot_templates/myDrawTools.C");


	TFile file("../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-etaDecay-EEG-kinematics-results.root");



	TLatex tex;
	tex.SetTextSize(0.06);
	tex.SetTextFont(42);
	

	TCanvas *c = CreateCanvas_for_3Times2Pads();

	c->cd(1);
	TH2F *frame = CreateFrame_for_3Times2Pads(0,180,0,1.5, "#theta_{electron} (#circ)", "P_{electron} (GeV/c)");
	frame->SetMinimum(1);
	frame->SetMaximum(1.1 * helecMC->GetMaximum());
	helecMC->Draw("colz same");
	gPad->SetRightMargin(0.14);
	tex.DrawLatex(96,1.3, "MC events");


	c->cd(2);
	TH2F *frame2 = CreateFrame_for_3Times2Pads(0,180,0,1.5, "#theta_{positron} (#circ)", "P_{positron} (GeV/c)");
	frame2->SetMinimum(1);
	frame2->SetMaximum(1.1 * hposiMC->GetMaximum());
	hposiMC->Draw("colz same");
	gPad->SetRightMargin(0.14);
	tex.DrawLatex(96,1.3, "MC events");

	c->cd(3);
	TH2F *frame3 = CreateFrame_for_3Times2Pads(0,180,0,1.5, "#theta_{#gamma} (#circ)", "P_{#gamma} (GeV/c)");
	frame3->SetMinimum(1);
	frame3->SetMaximum(1.1 * hgammaMC->GetMaximum());
	hgammaMC->Draw("colz same");
	gPad->SetRightMargin(0.14);
	tex.DrawLatex(96,1.3, "MC events");

	c->cd(4);
	TH2F *frame4 = CreateFrame_for_3Times2Pads(0,180,0,1.5, "#theta_{electron} (#circ)", "P_{electron} (GeV/c)");
	frame4->SetMinimum(1);
	frame4->SetMaximum(1.1 * helec->GetMaximum());
	helec->Draw("colz same");
	gPad->SetRightMargin(0.14);
	tex.DrawLatex(96,1.3, "REC. events");

	c->cd(5);
	TH2F *frame5 = CreateFrame_for_3Times2Pads(0,180,0,1.5, "#theta_{positron} (#circ)", "P_{positron} (GeV/c)");
	frame5->SetMinimum(1);
	frame5->SetMaximum(1.1 * hposi->GetMaximum());
	hposi->Draw("colz same");
	gPad->SetRightMargin(0.14);
	tex.DrawLatex(96,1.3, "REC. events");

	c->cd(6);
	TH2F *frame6 = CreateFrame_for_3Times2Pads(0,180,0,1.5, "#theta_{#gamma} (#circ)", "P_{#gamma} (GeV/c)");
	frame6->SetMinimum(1);
	frame6->SetMaximum(1.1 * hgamma->GetMaximum());
	hgamma->Draw("colz same");
	gPad->SetRightMargin(0.14);
	tex.DrawLatex(96,1.3, "REC. events");






}
