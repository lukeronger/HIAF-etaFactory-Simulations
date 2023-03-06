

double xLeft_at_Y(double _Y){
	ifstream in;
	in.open("X_Y_N.txt");
	double x,y,n, xleft;
	xleft = 100;
	while(in>>x>>y>>n){
		if(fabs(y-_Y)<1e-4  &&  x<xleft) xleft = x;
	}
	in.close();

	return xleft;
}
double xRight_at_Y(double _Y){
	ifstream in;
	in.open("X_Y_N.txt");
	double x,y,n, xright;
	xright = -100;
	while(in>>x>>y>>n){
		if(fabs(y-_Y)<1e-4  &&  x>xright) xright = x;
	}
	in.close();

	return xright;
}
double NMean_at_Y(double _Y){
	ifstream in;
	in.open("X_Y_N.txt");
	double x,y,n, nsum=0;
	int i = 0;
	while(in>>x>>y>>n){
		if(fabs(y-_Y)<1e-4){
			nsum += n;
			i++;
		}
	}
	in.close();

	return nsum/i;
}

int Draw_at_Y(double _Y){
	ifstream in;
	in.open("X_Y_N.txt");
	TGraphErrors *g = new TGraphErrors();
	double x,y,n;
	int i=0;
	while(in>>x>>y>>n){
		if(fabs(y-_Y)<1e-4){
			g->SetPoint(i, x, n);
			g->SetPointError(i, 0, sqrt(n));
			i++;
		}
	}

	g->SetMarkerStyle(21);
	g->SetLineWidth(2);
	g->Draw("psame");

	in.close();
	return i;
}





int fit(){
	ifstream in("X_Y_N.txt");
	TGraph2DErrors *g = new TGraph2DErrors();
	double x,y,n;
	int i=0;
	while(in>>x>>y>>n){
		g->SetPoint(i, x, y, n);
		g->SetPointError(i, 0, 0, sqrt(n));
		i++;
	}

	TF2 model("model","[0]*(1+[1]*y+[2]*y*y+[3]*x+[4]*x*x+[5]*x*y+[6]*y*y*y+[7]*x*x*y+[8]*x*y*y+[9]*x*x*x)");
	TF2 model2("model2","[0]*(1+[1]*y+[2]*y*y+[3]*x+[4]*x*x+[5]*x*y)");
	model2.SetParNames("N","a","b","c","d","e");
	model2.SetParameters(1e9, -1, 0, 0, 0, 0);
	model.SetParNames("N","a","b","c","d","e",  "f","g","h","i");
	model.SetParameters(1e9, -1, 0, 0, 0, 0,  0,0,0,0);


	g->Draw();
	g->Fit("model2");
	double pars[20];
	model2.GetParameters(pars);


	TCanvas *c2 = new TCanvas("c2","c2",900,680);
	TH2F *h2 = new TH2F("h2","h2",200,-1,1.3,  200,1e10,7e10);
	h2->SetTitle("");
	h2->Draw("");
	h2->GetXaxis()->SetTitle("X");
	h2->GetXaxis()->SetTitleSize(0.06);
	h2->GetXaxis()->CenterTitle();
	h2->GetXaxis()->SetTitleOffset(1.05);
	h2->GetXaxis()->SetLabelSize(0.06);
	h2->GetYaxis()->SetTitle("Counts");
	h2->GetYaxis()->SetTitleSize(0.06);
	h2->GetYaxis()->CenterTitle();
	h2->GetYaxis()->SetTitleOffset(1.05);
	h2->GetYaxis()->SetLabelSize(0.06);
	h2->GetZaxis()->SetLabelSize(0.05);

	//h2->SetMinimum(1e7);

	gPad->SetLeftMargin(0.135);
	gPad->SetBottomMargin(0.14);
	gPad->SetTopMargin(0.08);
	gPad->SetRightMargin(0.08);
	gStyle->SetOptStat(0);
	gStyle->SetNdivisions(505,"XY");



	TLatex *tex;
	for(double Y=-0.75;  Y<0.8; Y=Y+0.1){
		TF1 *model_at_Y = new TF1("model_at_Y","[0]*(1+ [1]*[6] +[2]*[6]*[6] +[3]*x +[4]*x*x +[5]*x*[6])", xLeft_at_Y(Y), xRight_at_Y(Y));
		pars[6] = Y;
		model_at_Y->SetParameters(pars);
		model_at_Y->Draw("lsame");
		cout<<Draw_at_Y(Y)<<endl;

		tex = new TLatex(0.9, NMean_at_Y(Y), Form("Y = %5.2f",Y));
		tex->SetTextSize(0.04);
		tex->Draw();
	}



	return 0;
}
