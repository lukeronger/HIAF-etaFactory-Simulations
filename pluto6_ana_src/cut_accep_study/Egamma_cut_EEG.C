{

	TFile *file = new TFile("../../../HIAF-etaFactory-Simulations-localData/pluto6-data/pp_to_ppeta_DileptonGamma_1.8GeV_Random2023.root");

	long Ntot = 1000000;
	double Ethred = 0.05;
	TString cut = Form("Particles.pid==1 && Particles.TLorentzVector.E()>%lg", Ethred);
	cout<<cut.Data()<<endl;
	data->Draw("Particles.TLorentzVector.P() >> h",cut.Data(),"", Ntot);
	cout<<"Effi. = "<<(1.0*h->GetEntries()/Ntot)<<endl;

	Ethred = 0.1;
	cut = Form("Particles.pid==1 && Particles.TLorentzVector.E()>%lg", Ethred);
	cout<<cut.Data()<<endl;
	data->Draw("Particles.TLorentzVector.P() >> h",cut.Data(),"", Ntot);
	cout<<"Effi. = "<<(1.0*h->GetEntries()/Ntot)<<endl;



}
