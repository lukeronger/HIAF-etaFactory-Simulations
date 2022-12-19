{
	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(505,"XY");



	TCanvas c1("c1","c1",730,500);
	TFile file("EtaDecayDalitz_TwoGammaAngle_1.8GeV.root");
	tree->SetLineColor(1);
	tree->Draw("twogamma_angle*TMath::RadToDeg()>>h(200,0,180)");

	TFile file3("EtaDecayDalitz_TwoGammaAngle_3GeV.root");
	tree->SetLineColor(2);
	tree->Draw("twogamma_angle*TMath::RadToDeg()>>h3(200,0,180)","","same");

	TFile file6("EtaDecayDalitz_TwoGammaAngle_6GeV.root");
	tree->SetLineColor(3);
	tree->Draw("twogamma_angle*TMath::RadToDeg()>>h6(200,0,180)","","same");

	TFile file9("EtaDecayDalitz_TwoGammaAngle_9GeV.root");
	tree->SetLineColor(4);
	tree->Draw("twogamma_angle*TMath::RadToDeg()>>h9(200,0,180)","","same");

	h9->Draw();
	file6.cd();
	h6->Draw("same");
	file3.cd();
	h3->Draw("same");
	file.cd();
	h->Draw("same");

	//h9->SetMinimum(40);
	//h9->SetMaximum(100);
	//gPad->SetLogz();
	h9->SetTitle("");
	h9->GetXaxis()->SetTitle("Angle between two photons (#circ)");
	h9->GetXaxis()->SetTitleSize(0.06);
	h9->GetXaxis()->CenterTitle();
	h9->GetXaxis()->SetTitleOffset(1.05);
	h9->GetXaxis()->SetLabelSize(0.06);
	h9->GetYaxis()->SetTitle("Counts");
	h9->GetYaxis()->SetTitleSize(0.06);
	h9->GetYaxis()->CenterTitle();
	h9->GetYaxis()->SetTitleOffset(1.4);
	h9->GetYaxis()->SetLabelSize(0.06);
	//h9->GetZaxis()->SetLabelSize(0.05);

	gPad->SetLeftMargin(0.155);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.03);
	gPad->SetRightMargin(0.03);







	TF1 f1;
	TF1 f2;
	TF1 f3;
	TF1 f4;
	f1.SetLineColor(1);
	f2.SetLineColor(2);
	f3.SetLineColor(3);
	f4.SetLineColor(4);

	TLegend *le = new TLegend(0.55,0.62,0.94,0.92);
	le->SetFillColor(0);
	le->SetBorderSize(1);
	le->AddEntry(&f1,"Beam Energy 1.8GeV","l");
	le->AddEntry(&f2,"Beam Energy 3GeV","l");
	le->AddEntry(&f3,"Beam Energy 6GeV","l");
	le->AddEntry(&f4,"Beam Energy 9GeV","l");
	le->Draw();

}
