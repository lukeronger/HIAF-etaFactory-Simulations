{
	


	TFile ff("/data2/ytian/geant4_sim/SSS/CsI_all/n_sampling/n_plot.root");

	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(502,"XY");
	gStyle->SetPalette(55); 


	TCanvas c1("c1","c1",630,500);
	h2_e_sampling->Draw("colz");
	gPad->SetLogz();
	h2_e_sampling->SetTitle("");
	h2_e_sampling->GetXaxis()->SetTitle("Kine. energy of n (GeV)");
	h2_e_sampling->GetXaxis()->SetTitleSize(0.06);
	h2_e_sampling->GetXaxis()->CenterTitle();
	h2_e_sampling->GetXaxis()->SetTitleOffset(1.05);
	h2_e_sampling->GetXaxis()->SetLabelSize(0.06);
	h2_e_sampling->GetXaxis()->SetNdivisions(505);  
	h2_e_sampling->GetYaxis()->SetTitle("Depo. energy in EMCal (GeV)");
	h2_e_sampling->GetYaxis()->SetTitleSize(0.06);
	h2_e_sampling->GetYaxis()->CenterTitle();
	h2_e_sampling->GetYaxis()->SetTitleOffset(1.05);
	h2_e_sampling->GetYaxis()->SetLabelSize(0.06);
	h2_e_sampling->GetYaxis()->SetNdivisions(505);  
	h2_e_sampling->GetZaxis()->SetLabelSize(0.05);



	h2_e_sampling->GetYaxis()->SetRangeUser(0,1.6);   

	gPad->SetLeftMargin(0.135);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.03);
	gPad->SetRightMargin(0.137);


	//TCanvas c2;
	//cout<<data->Draw("Particles.TLorentzVector.P():Particles.TLorentzVector.Theta()*TMath::RadToDeg()>>h2(500,0,180,500,0,2.5)","Particles.pid==1 && Particles.TLorentzVector.P()>0.05&&Particles.TLorentzVector.P()<1 && Particles.TLorentzVector.Theta()*TMath::RadToDeg()>10 && Particles.TLorentzVector.Theta()*TMath::RadToDeg()<80","colz")<<endl;

}
