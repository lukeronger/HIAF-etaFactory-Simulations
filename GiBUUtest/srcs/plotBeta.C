{
	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(505,"XY");
	



	TFile filen("anaData/GiBUU_p7Li_1.8GeV.root");
	TFile fileg("../../pluto6_ana_src/anaData/Eta_1.8GeV.root");

	TCanvas c1("c1","c1", 970,600);
	c1.Divide(3,1);

	c1.cd(1);
	fileg.cd();
	tree->SetLineColor(2);
	tree->Draw("beta200_gamma>>h200g(200,0,2)", "Egamma1>0.05 && thetagamma1*TMath::RadToDeg()>10 && thetagamma1*TMath::RadToDeg()<90");
	h200g->Scale(0.02);
	h200g->Draw("hist");
	h200g->SetTitle("");
	h200g->GetXaxis()->SetLabelSize(0.06);
	h200g->GetXaxis()->SetTitle("#beta");
	h200g->GetXaxis()->SetTitleSize(0.06);
	h200g->GetXaxis()->SetTitleOffset(0.8);
	h200g->GetXaxis()->CenterTitle();
       
	filen.cd();
	tree->SetLineColor(4);
	tree->Draw("beta200_n>>h200n(200,0,2)","KineEn>0.05 && thetan*TMath::RadToDeg()>10 && thetan*TMath::RadToDeg()<90","same");



	c1.cd(2);
	fileg.cd();
	tree->SetLineColor(2);
	tree->Draw("beta500_gamma>>h500g(200,0,2)", "Egamma1>0.05 && thetagamma1*TMath::RadToDeg()>10 && thetagamma1*TMath::RadToDeg()<90");
	h500g->Scale(0.02);
	h500g->Draw("hist");
	h500g->SetTitle("");
	h500g->GetXaxis()->SetLabelSize(0.06);
	h500g->GetXaxis()->SetTitle("#beta");
	h500g->GetXaxis()->SetTitleSize(0.06);
	h500g->GetXaxis()->SetTitleOffset(0.8);
	h500g->GetXaxis()->CenterTitle();
       
	filen.cd();
	tree->SetLineColor(4);
	tree->Draw("beta500_n>>h500n(200,0,2)","KineEn>0.05 && thetan*TMath::RadToDeg()>10 && thetan*TMath::RadToDeg()<90","same");






	c1.cd(3);
	fileg.cd();
	tree->SetLineColor(2);
	tree->Draw("beta1000_gamma>>h1000g(200,0,2)", "Egamma1>0.05 && thetagamma1*TMath::RadToDeg()>10 && thetagamma1*TMath::RadToDeg()<90");
	h1000g->Scale(0.02);
	h1000g->Draw("hist");
	h1000g->SetTitle("");
	h1000g->GetXaxis()->SetLabelSize(0.06);
	h1000g->GetXaxis()->SetTitle("#beta");
	h1000g->GetXaxis()->SetTitleSize(0.06);
	h1000g->GetXaxis()->SetTitleOffset(0.8);
	h1000g->GetXaxis()->CenterTitle();
       
	filen.cd();
	tree->SetLineColor(4);
	tree->Draw("beta1000_n>>h1000n(200,0,2)","KineEn>0.05 && thetan*TMath::RadToDeg()>10 && thetan*TMath::RadToDeg()<90","same");








}
