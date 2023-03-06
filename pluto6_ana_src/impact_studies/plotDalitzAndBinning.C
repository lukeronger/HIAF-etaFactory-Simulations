{

	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(505,"XY");




	TFile file("/data2/rwang/githubs/HIAF-etaFactory-Simulations-localData/Eta_1.8GeV.root");
	//tree->Draw("X","Y>-0.6 && Y<-0.5","lego2");
	tree->Draw("Y:X>>h2(20,-1,1,20,-1,1)","","colz");

	TF2 model("model","[0]*(1+[1]*y+[2]*y*y+[3]*x+[4]*x*x+[5]*x*y+[6]*y*y*y+[7]*x*x*y+[8]*x*y*y+[9]*x*x*x)");
	//h2->Fit("model");

	TLine *li = new TLine(0, -1., 0, 1);
	li->SetLineStyle(7);
	li->SetLineColor(2);
	li->SetLineWidth(2);
	li->Draw();


	//gPad->SetLogz();
	h2->SetTitle("");
	h2->GetXaxis()->SetTitle("X");
	h2->GetXaxis()->SetTitleSize(0.06);
	h2->GetXaxis()->CenterTitle();
	h2->GetXaxis()->SetTitleOffset(1.05);
	h2->GetXaxis()->SetLabelSize(0.06);
	h2->GetYaxis()->SetTitle("Y");
	h2->GetYaxis()->SetTitleSize(0.06);
	h2->GetYaxis()->CenterTitle();
	h2->GetYaxis()->SetTitleOffset(1.05);
	h2->GetYaxis()->SetLabelSize(0.06);
	h2->GetZaxis()->SetLabelSize(0.05);

	gPad->SetLeftMargin(0.135);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.03);
	gPad->SetRightMargin(0.145);


	int ia, ib;
	TH2F *h2_2 = new TH2F("h2_2","h2_2",20,-1,1,20,-1,1);
	ofstream fout("X_Y_N.txt");
	ofstream fout2("X_Y.txt");
	for(int i=3; i<=18; i++){
		ia = ib = 0;
		for(int j=1; j<=20; j++){
			cout<<h2->GetBinContent(j,i)<<"   "; //<<endl;
			if(ia==0 && h2->GetBinContent(j,i)>0) ia = j+2;
		}
		cout<<endl<<ia<<endl;
		for(int j=ia; j<=21-ia; j++){
			h2_2->SetBinContent(j,i,  1e6*h2->GetBinContent(j,i));
			fout<<(j*0.1-1.05)<<"  "<<(i*0.1-1.05)<<"  "<<  1e6*h2->GetBinContent(j,i)  <<endl;
			fout2<<(j*0.1-1.05)<<"  "<<(i*0.1-1.05)<<endl;  //// "  "<<h2->GetBinContent(j,i)<<endl;
		}
	}


	TCanvas *c2 = new TCanvas("c2","c2");
	h2_2->Draw("colz");
	gPad->SetLogz();
	h2_2->SetTitle("");
	h2_2->GetXaxis()->SetTitle("X");
	h2_2->GetXaxis()->SetTitleSize(0.06);
	h2_2->GetXaxis()->CenterTitle();
	h2_2->GetXaxis()->SetTitleOffset(1.05);
	h2_2->GetXaxis()->SetLabelSize(0.06);
	h2_2->GetYaxis()->SetTitle("Y");
	h2_2->GetYaxis()->SetTitleSize(0.06);
	h2_2->GetYaxis()->CenterTitle();
	h2_2->GetYaxis()->SetTitleOffset(1.05);
	h2_2->GetYaxis()->SetLabelSize(0.06);
	h2_2->GetZaxis()->SetLabelSize(0.05);

	h2_2->SetMinimum(1e7);

	gPad->SetLeftMargin(0.135);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.03);
	gPad->SetRightMargin(0.136);



	TCanvas *c3 = new TCanvas("c3","c3");
	TH2F *h2_3 = (TH2F *)h2_2->Clone();
	h2_3->Draw("lego2");
	TF2 model2("model2","[0]*(1+[1]*y+[2]*y*y+[3]*x+[4]*x*x+[5]*x*y)");
	model2.SetParNames("N","a","b","c","d","e");
	//h2_3->Fit("model2");
	

	gPad->SetPhi(220);



}
