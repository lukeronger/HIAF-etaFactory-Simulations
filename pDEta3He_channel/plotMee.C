double MeeDist(double *x, double *par){
	double meta = 0.547862;
	double me = 0.00051099895;
	double q2 = x[0]*x[0];
	double Lambda2 = 0.75*0.75; 

	double Feta = 1.0 / (1 - q2/Lambda2);

	return 1.0/x[0] *sqrt(1-4*me*me/q2) * (1+2*me*me/q2) *pow(1-q2/meta/meta, 3) *Feta*Feta; 
}



void plotMee(){
   TF1 *dileptonMassDist_TF1 = new TF1("dileptonMassDist_TF1", MeeDist,  0,0.6,   0);
   ///dileptonMassDist_TF1->SetParameters(2.52264e+03, -8.64483e-01, 1.54142);

   dileptonMassDist_TF1->Draw();
   gPad->SetLogy();
}
