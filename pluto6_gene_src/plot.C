{
	gROOT->ProcessLine(".L ../ChnsRoot_ana_src/plot_templates/myDrawTools.C");
	TFile file("pp_to_ppetaprime_DileptonGamma_3.5GeV_Random2023.root");

	data->Draw("Particles.TLorentzVector.P():Particles.TLorentzVector.Theta()*TMath::RadToDeg()>>h","Particles.pid==1","col");
	CreateCanvas();
	TH2F *frame =CreateFrame(0,190,0,3,  "#theta (#circ)","P_{#gamma} (GeV)");
	h->Draw("colz same");
	//data->Draw("Particles.TLorentzVector.P():Particles.TLorentzVector.Theta()*TMath::RadToDeg()>>h","Particles.pid==1","col");
	frame->SetMinimum(1);
	frame->SetMaximum(1.0001*h->GetMaximum());
	gPad->SetLogz();


}

