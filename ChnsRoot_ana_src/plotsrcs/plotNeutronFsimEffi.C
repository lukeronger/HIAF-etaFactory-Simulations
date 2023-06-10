{
	


	TFile ff("../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/hiaf-UserDefined-neutrons-results.root");

	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(502,"XY");
	gStyle->SetPalette(55); 


	TCanvas c1("c1","c1",630,500);
	hn_MC->Draw();
	hn_rec->Draw();
	hn_rec->Divide(hn_MC);

	hn_rec->Draw();

	//gPad->SetLogz();
	hn_rec->SetTitle("");
	hn_rec->GetXaxis()->SetTitle("Kine. energy of n (GeV)");
	hn_rec->GetXaxis()->SetTitleSize(0.06);
	hn_rec->GetXaxis()->CenterTitle();
	hn_rec->GetXaxis()->SetTitleOffset(1.05);
	hn_rec->GetXaxis()->SetLabelSize(0.06);
	hn_rec->GetXaxis()->SetNdivisions(505);  
	hn_rec->GetYaxis()->SetTitle("Efficiency in EMCal");
	hn_rec->GetYaxis()->SetTitleSize(0.06);
	hn_rec->GetYaxis()->CenterTitle();
	hn_rec->GetYaxis()->SetTitleOffset(1.05);
	hn_rec->GetYaxis()->SetLabelSize(0.06);
	hn_rec->GetYaxis()->SetNdivisions(505);  
	hn_rec->GetZaxis()->SetLabelSize(0.05);


	hn_rec->SetLineWidth(2);
	hn_rec->SetLineColor(4);

	hn_rec->GetYaxis()->SetRangeUser(0,1);   

	gPad->SetLeftMargin(0.135);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.03);
	gPad->SetRightMargin(0.137);


}
