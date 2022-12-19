double model(double *x, double *par){
	double xx = x[0];
	double yy = par[0];
	double N = par[1];
	double a = par[2];
	double b = par[3];
	double c = par[4];
	double d = par[5];
	double e = par[6];

	return N*( 1 + a*yy + b*yy*yy + c*xx + d*xx*xx + e*xx*yy );
}

int plotBinningDalitz2(){

	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(505,"XY");



TCanvas * c = new TCanvas("c","c", 800, 720);	


TH2F *h2 = new TH2F("","",500,-1,1.5,500,0,8000);
h2->Draw();




double x,y,ex,ey;
ifstream in;
//ofstream out("N_vs_X_Y_v2.txt");
TString filename;
TGraphErrors *gg;
TF1 *f1;
TLatex *tex;
double xa[20]={-0.85, -0.4, -0.45, -0.45, -0.5, -0.6, -0.65, -0.65, -0.75, -0.75, -0.85, -0.85, -0.85, -0.85, -0.85, -0.85, -0.85, -0.7, -0.6, -0.85};
double xb[20]={0.85,   0.4,  0.45,  0.45,  0.5,  0.6,  0.65,  0.65,  0.75,  0.75,  0.85,  0.85,  0.85,  0.85,  0.85,  0.85,  0.85,  0.7,  0.6, 0.85};
for(int i=2;i<=18;i++){
	filename = Form("N_vs_X_Y_%d.txt", i);
	gg = new TGraphErrors(filename.Data());
	gg->SetMarkerStyle(7);
	gg->Draw("psame");
	f1 = new TF1("",model,xa[i],xb[i],7);
	//f1->SetParameters(-1+i*0.1-0.05,   3.70260e+03, -8.92818e-01, -9.17866e-03, -3.12710e-03, -6.09242e-02, 5.40678e-03);
	f1->SetParameters(-1+i*0.1-0.05,   3.67822e+03, -8.93524e-01, 2.42462e-02, -3.14125e-03, -5.78943e-02, 5.97489e-03);
	f1->Draw("lsame");

//	in.open(filename.Data());
//	while(in>>x>>y>>ex>>ey)out<<x<<"  "<<(-1+i*0.1-0.05)<<"  "<<y<<"  "<<0<<"  "<<0<<"  "<<ey<<endl;
//	in.close();



	filename = Form("Y = %lg ", -1+i*0.1-0.05);
	tex = new TLatex(1, gg->GetY()[3]-200, filename.Data());
	tex->SetTextFont(42);
	tex->SetTextSize(0.035);
	tex->Draw();

}

	//gPad->SetLogz();
	h2->SetTitle("");
	h2->GetXaxis()->SetTitle("X");
	h2->GetXaxis()->SetTitleSize(0.06);
	h2->GetXaxis()->CenterTitle();
	h2->GetXaxis()->SetTitleOffset(1.05);
	h2->GetXaxis()->SetLabelSize(0.06);
	h2->GetYaxis()->SetTitle("Counts");
	h2->GetYaxis()->SetTitleSize(0.06);
	h2->GetYaxis()->CenterTitle();
	h2->GetYaxis()->SetTitleOffset(1.5);
	h2->GetYaxis()->SetLabelSize(0.06);
	h2->GetZaxis()->SetLabelSize(0.05);

	gPad->SetLeftMargin(0.17);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.03);
	gPad->SetRightMargin(0.04);

	return 0;
}
