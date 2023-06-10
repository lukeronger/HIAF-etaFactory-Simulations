{

	long Nevents = 1000000;
	ofstream *file_evt = new ofstream("../../HIAF-etaFactory-Simulations-localData/evt_files/user-defined-neutrons.evt");

	double Emin = 0.001;
	double Emax = 1.7;
	double theta_min = 10; ///  deg
	double theta_max = 90; /// deg


	double costheta_min = cos(theta_max * TMath::DegToRad());
	double costheta_max = cos(theta_min * TMath::DegToRad());

	for(int i=0; i<Nevents; i++){
		double E = 0.93957 + gRandom->Uniform(Emin, Emax);
		double costheta = gRandom->Uniform(costheta_min, costheta_max);
		double sintheta = sqrt(1 - costheta*costheta);
		double phi = gRandom->Uniform(-TMath::Pi(), TMath::Pi());
		double P = sqrt(E*E - 0.93957*0.93957);
		double px = P * sintheta * cos(phi);
		double py = P * sintheta * sin(phi);
		double pz = P * costheta;

		(*file_evt)<<i<<"\t"<<1<<endl;
		(*file_evt)<<"  "<<"N\t"<<"Id\t"<<"Ist\t"<<"M1\t"<<"M2\t"<<"DF\t"<<"DL\t";
		(*file_evt)<<"px\t"<<"py\t"<<"pz\t"<<"E\t"<<"t\t"<<"x\t"<<"y\t"<<"z"<<endl;
		(*file_evt)<<"  "<<0<<"\t"<<2112<<"\t"<<1<<"\t"<<0<<"\t"<<0<<"\t"<<-1<<"\t"<<-1<<"\t";
		(*file_evt)<<px<<" "<<py<<" "<<pz<<" "<<E<<" ";
		(*file_evt)<<0<<" "<<0<<" "<<0<<" "<<0<<endl;
	}




}
