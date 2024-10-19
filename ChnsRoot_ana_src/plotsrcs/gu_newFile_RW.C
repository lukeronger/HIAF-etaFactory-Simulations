#include "TMath.h"
//#include "DrawTools.C"
#include"../plot_templates/myDrawTools.C"

using namespace TMath;


double lambda(double a,double b,double c){

        double value = a*a + b*b + c*c - 2*a*b - 2*a*c - 2*b*c;
        return value;

}

void gu_newFile_RW(){


	TFile *f1 = TFile::Open("/data/liuyang/Dark_Particle_Analysis/DarkHiggs/Pics/darHiggs_sensitivity_3Pi.root","read");
	TGraph *g1 = (TGraph*)f1->Get("Graph");

	if(g1!=NULL) cout<<"read successfully"<<endl;
	double BR[15];
	double m_h[15];
	double g[15];
	double g_u[15];
	double pi = TMath::Pi();
	double meta = 0.5478;
	double mpi = 0.135;
	double B = 2.6;
	double GAMMAeta = 1.31e-6;
	cout << GAMMAeta << endl;
    double angle = (-20.0/180)*pi;
	double C = sqrt(1.0/3)*cos(angle) - sqrt(2.0/3)*sin(angle);
	cout << "C = "  << C << endl;
	double angle2 = ASin(sqrt(1.0/3));
	cout << "angle = " << angle << endl;
	C = sin(angle - angle2);
	cout << "C = "  << C << endl;
	double manyCoefficient = 0.056 / (49 * 10e-8);
	//cout << "初次coefficient = "  << manyCoefficient << endl;
	cout << lambda(2,2,2) << endl;

	for(int i=0;i<15;++i){

		BR[i] = g1->GetY()[i];
		m_h[i] =  (g1->GetX()[i]);

		g[i] = sqrt((16.0*pi*meta*GAMMAeta*BR[i]) / (C*C*B*B*sqrt(lambda(1.0,  (m_h[i]*m_h[i]) / (meta*meta),  (mpi*mpi)/(meta*meta)))));
		g_u[i] = sqrt( BR[i] * 0.056) * 7 * 0.0001;

		// manyCoefficient = (C*C*B*B)/(16*pi*meta*GAMMAeta) * sqrt( lambda(1, (m_h[i]*m_h[i])/(meta*meta), (mpi*mpi)/(meta*meta)) );
		// cout << "coefficient = "  << manyCoefficient << endl;

	
	}


	





	TGraph *g2 = new TGraph(15,m_h,g);
	TGraph *g33 = new TGraph(15,m_h, g_u);
	TGraph *g3 = new TGraph();
	double xx,yy;
	g33->GetPoint(0,xx,yy);
	g3->SetPoint(0, xx,1.0);
	for(int i=0;i<g33->GetN();i++){
		g33->GetPoint(i,xx,yy);
		g3->SetPoint(i+1,xx,yy);
	}
	g33->GetPoint(g33->GetN()-1,xx,yy);
	g3->SetPoint(g33->GetN()+1, xx,1.0);




	CreateCanvas();
	CreateFrame(0.1, 1, 9e-10,0.05,   "M(#pi^{+}#pi^{-}) [GeV/c^{2}]", "g_{#mu}");


	TLatex tex; 
	tex.SetTextSize(0.05);
	tex.SetTextFont(42);


	TGraphErrors *gMAMI = new TGraphErrors("exp-data/gu_MAMI.txt.dat");
	gMAMI->SetFillColor(2);
	gMAMI->SetFillStyle(3002);
	gMAMI->Draw("3same"); 
	tex.SetTextColor(2);
	tex.DrawLatex(0.137,0.0048,"MAMI");
	TGraphErrors *gCHARM = new TGraphErrors("exp-data/gu_CHARM.txt.dat");
	gCHARM->SetFillColor(7);
	gCHARM->SetFillStyle(3003);
	gCHARM->Draw("3same");
	tex.SetTextColor(7);
	tex.DrawLatex(0.137,6.8e-6,"CHARM");
	TGraphErrors *gSN1987A = new TGraphErrors("exp-data/gu_SN1987A.txt.dat");
	gSN1987A->SetFillColor(11);
	gSN1987A->SetFillStyle(3002);
	gSN1987A->Draw("3same");
	tex.SetTextColor(11);
	tex.DrawLatex(0.137,4.23e-9,"SN1987A");

	TGraphErrors *gBESIII = new TGraphErrors("exp-data/gu_BESIII.txt.dat");
	gBESIII->SetFillColor(4);
	gBESIII->SetFillStyle(3005);
	gBESIII->Draw("3same");
	tex.SetTextColor(4);
	tex.DrawLatex(0.59,2.5e-3,"BESIII");
	TGraphErrors *gKLOE = new TGraphErrors("exp-data/gu_KLOE.txt.dat");
	gKLOE->SetFillColor(8);
	gKLOE->SetFillStyle(3002);
	gKLOE->Draw("3same");
	tex.SetTextColor(8);
	tex.DrawLatex(0.30,1.75e-4,"KLOE");
	
	
	tex.SetTextColor(1);
	tex.DrawLatex(0.30,2.76e-8,"This work");



	/*
	exp-data/epsilon2_E141.txt.dat
	exp-data/epsilon2_KLOE2013.txt.dat
	exp-data/epsilon2_KLOE2014.txt.dat
	exp-data/epsilon2_NA64.txt.dat
	exp-data/epsilon_CHARM.txt.dat
	exp-data/epsilon_NA48_2.txt.dat
	exp-data/epsilon_NuCal.txt.dat
	*/

	g3->SetLineWidth(2);
	g3->SetLineColor(1);
	g3->Draw("l same");
	gPad->SetLogx();
	gPad->SetLogy();
	gPad->SetTickx();
	gPad->SetTicky();







}
