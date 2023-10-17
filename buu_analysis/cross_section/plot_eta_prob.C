{


	ifstream fin("filelist_56Fe");
	TString filename;


	TGraph gFe;

	int Npoint = 0;
	while(fin>>filename){
		ifstream fin2(filename.Data());
		double b;
		sscanf(filename.Data(),  "/data/rwang/simulation_works/HIAF-etaFactory-Simulations-localData2/BUU-data/p56Fe_1.8GeV_b%lffm.txt",  &b);
		cout<<"b = "<<b<<" fm"<<endl;


		int i = 0;
		int eventNO, particleNO;
		double px, py, pz;
		int pid;
		while(fin2>>eventNO>>particleNO){
			fin2>>px>>py>>pz>>pid;
			if(!fin2.good())break;
			i++;
		}

		double prob = 1.0*i/200000;

		gFe.SetPoint(Npoint, b, prob);
		Npoint++;
	}

	gFe.Draw("AP*");




}
