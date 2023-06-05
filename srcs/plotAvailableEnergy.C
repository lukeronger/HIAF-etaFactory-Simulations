double cm_energy(double *x,  double *par){
	double beam_energy = x[0];
	double mp = 0.938272;
	double E = mp + beam_energy;
	TLorentzVector target(0, 0, 0, mp);
	TLorentzVector beam(0, 0, sqrt(E*E - mp*mp),  E);
	TLorentzVector total = target + beam;

	return total.M() - 2*mp;
}



int plotAvailableEnergy(){
	TF1 *myfun = new TF1("myfun",cm_energy,1,10,0);
	myfun->Draw();
	myfun->GetXaxis()->SetTitle("beam kine. energy");
	myfun->GetYaxis()->SetTitle("Available energy");

	cout<<1.8<<" GeV,  c.m. energy = "<<myfun->Eval(1.8)<<endl;
	cout<<3.5<<" GeV,  c.m. energy = "<<myfun->Eval(3.5)<<endl;
	cout<<6<<" GeV,  c.m. energy = "<<myfun->Eval(6)<<endl;
	cout<<9<<" GeV,  c.m. energy = "<<myfun->Eval(9)<<endl;
	cout<<3<<" GeV,  c.m. energy = "<<myfun->Eval(3)<<endl;



	return 0;
}
