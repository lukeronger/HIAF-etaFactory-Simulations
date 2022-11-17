double beamP;

//// global variables
Long_t eventNO; int multi; int pid; double mass; double px; double py; double pz; double E;
double px_tot; double py_tot; double pz_tot;
TFile *rootfile; TTree *outtree;

vector<int> pid_arrary;
vector<double> px_arrary;
vector<double> py_arrary;
vector<double> pz_arrary;
vector<double> E_arrary;
vector<double> mass_arrary;

TGenPhaseSpace event;
TRandom3* grandom3;


/// eta Dalitz plot function
double etaDalitz3Pi(double X, double Y){
	return 1 - 0.9*Y + 0.02*Y*Y - 0.05*X*X;
}
//TF1 *etaDalitz3Pi_TF1;
/// dilepton mass distribtion
//double dileptonMassDist(double mass){
//	return 1; 
//}
TF1 *dileptonMassDist_TF1;




int initialization(){
	beamP = 2.57;
	grandom3 = new TRandom3(0);
	dileptonMassDist_TF1 = new TF1("dileptonMassDist_TF1","[0]*pow(x,[1])*pow(fabs(x-0.5478),[2])");
	dileptonMassDist_TF1->SetParameters(2.52264e+03, -8.64483e-01, 1.54142);

	return 0;
}




//// get the particle mass
double particleMass(int PID){
	if(PID==0)return 0.547862;
	else if(PID==1)return 0.938272088;
	else if(PID==2)return 0.9395654205;
	else if(PID==3)return 0.13957039;
	else if(PID==4)return 0.1349768;
	else if(PID==5)return 0.13957039;
	else if(PID==6)return 1.232;
	else if(PID==7)return 1.232;
	else if(PID==8)return 1.232;
	else if(PID==9)return 1.232;
	else if(PID==10)return 1.44;
	else if(PID==11)return 1.44;
	else if(PID==14)return 1.115683;
	else if(PID==15)return 1.197449;
	else if(PID==16)return 1.192642;
	else if(PID==17)return 1.18937;
	else if(PID==21)return 0.493677;
	else if(PID==23)return 0.493677;
	else if(PID==24)return 0.497611;
	else if(PID==25)return 0.775;
	else if(PID==26)return 0.775;
	else if(PID==27)return 0.775;
	else if(PID==28)return 0.78266;
	else if(PID==29)return 1.019461;

	else return 0.0;
}

//// create an empty ROOT file and TTree
int createROOTFile(string filename){
	string rootfilename = filename+"_withEtaDeacyEEGamma.root";
	rootfile = new TFile(rootfilename.c_str(),"recreate");
	outtree = new TTree("buudata","IBUU");
	outtree->Branch("eventNO",&eventNO,"eventNO/L");
	outtree->Branch("multi",&multi,"multi/I");
	outtree->Branch("pid",&pid,"pid/I");
	outtree->Branch("mass",&mass,"mass/D");
	outtree->Branch("px",&px,"px/D");
	outtree->Branch("py",&py,"py/D");
	outtree->Branch("pz",&pz,"pz/D");
	outtree->Branch("E",&E,"E/D");
	//outtree->Branch("px_tot",&px_tot,"px_tot/D");
	//outtree->Branch("py_tot",&py_tot,"py_tot/D");
	//outtree->Branch("pz_tot",&pz_tot,"pz_tot/D");
	return 0;
}

/// create decay particles of pion0
int pion0Decay(double _px, double _py, double _pz, double _E){
	/// TGenPhaseSpace event;
	TLorentzVector W(_px, _py, _pz, _E);
	Double_t masses[2] = {0, 0};
	event.SetDecay(W, 2, masses);
	Double_t weight = event.Generate();
	TLorentzVector *gamma1 = event.GetDecay(0);
	TLorentzVector *gamma2 = event.GetDecay(1);
	px = gamma1->Px();
	py = gamma1->Py();
	pz = gamma1->Pz();
	E = gamma1->E();
	mass = 0; // gamma1->M();
	pid = 50*100 + 4;
	rootfile->cd();
	outtree->Fill();
	px = gamma2->Px();
	py = gamma2->Py();
	pz = gamma2->Pz();
	E = gamma2->E();
	mass = 0; //gamma2->M();
	pid = 50*100 + 4;
	rootfile->cd();
	outtree->Fill();

	return 0;
}
int etaDecay(double _px, double _py, double _pz, double _E){
	/// TGenPhaseSpace event;
	TLorentzVector W(_px, _py, _pz, _E);
	Double_t masses[3] = {0.13957039, 0.13957039, 0.1349768};
	Double_t etamass = 0.547862;
	event.SetDecay(W, 3, masses);
	Double_t weight, Qeta, u, t, s, X, Y; 
	TLorentzVector *pip, *pim, *pi0;
	while(1){
		weight = event.Generate();
		if(grandom3->Uniform(0,0.48)>weight)continue;
		pip = event.GetDecay(0);
		pim = event.GetDecay(1);
		pi0 = event.GetDecay(2);
		Qeta = etamass - masses[0] - masses[1] - masses[2];
		s = (*pip+*pim).M2();
		t = (*pim+*pi0).M2();
		u = (*pip+*pi0).M2();
		X = sqrt(3)/2.0/etamass/Qeta*(u-t);
		Y = 3/2.0/etamass/Qeta*((etamass-masses[2])*(etamass-masses[2])-s) - 1;
		if(grandom3->Uniform(0,2)<etaDalitz3Pi(X, Y))break;
	}
	px = pip->Px();
	py = pip->Py();
	pz = pip->Pz();
	E =  pip->E();
	mass = 0.13957039 ; // pip->M();
	pid = 5*100 + 0;
	rootfile->cd();
	outtree->Fill();
	px = pim->Px();
	py = pim->Py();
	pz = pim->Pz();
	E =  pim->E();
	mass = 0.13957039 ; // pim->M();
	pid = 3*100 + 0;
	rootfile->cd();
	outtree->Fill();
	px = pi0->Px();
	py = pi0->Py();
	pz = pi0->Pz();
	E =  pi0->E();
	mass = 0.1349768 ; // pi0->M();
	pid = 4*100 + 0;
	rootfile->cd();
	outtree->Fill();

	TLorentzVector Wpi0(pi0->Px(), pi0->Py(), pi0->Pz(), pi0->E());
	Double_t masses2[2] = {0, 0};
	event.SetDecay(Wpi0, 2, masses2);
	weight = event.Generate();
	TLorentzVector *gamma1 = event.GetDecay(0);
	TLorentzVector *gamma2 = event.GetDecay(1);
	px = gamma1->Px();
	py = gamma1->Py();
	pz = gamma1->Pz();
	E = gamma1->E();
	mass = 0; // gamma1->M();
	pid = 50*10000 + 4*100 + 0;
	rootfile->cd();
	outtree->Fill();
	px = gamma2->Px();
	py = gamma2->Py();
	pz = gamma2->Pz();
	E = gamma2->E();
	mass = 0; //gamma2->M();
	pid = 50*10000 + 4*100 + 0;
	rootfile->cd();
	outtree->Fill();

	return 0;
}
int etaDecayDimuonGamma(double _px, double _py, double _pz, double _E){
	/// TGenPhaseSpace event;
	TLorentzVector W(_px, _py, _pz, _E);
	Double_t dimuonmass = dileptonMassDist_TF1->GetRandom(2*0.1056584, 0.547);
	Double_t masses[2] = {0, dimuonmass};
	event.SetDecay(W, 2, masses);
	Double_t weight = event.Generate();
	TLorentzVector *gamma = event.GetDecay(0);
	TLorentzVector *dimuon = event.GetDecay(1);
	px = gamma->Px();
	py = gamma->Py();
	pz = gamma->Pz();
	E = gamma->E();
	mass = 0; // gamma->M();
	pid = 50*100 + 0;
	rootfile->cd();
	outtree->Fill();

	TLorentzVector Wdimuon(dimuon->Px(), dimuon->Py(), dimuon->Pz(), dimuon->E());
	Double_t masses2[2] = {0.1056584, 0.1056584};
	event.SetDecay(Wdimuon, 2, masses2);
	weight = event.Generate();
	TLorentzVector *muon1 = event.GetDecay(0);
	TLorentzVector *muon2 = event.GetDecay(1);
	px = muon1->Px();
	py = muon1->Py();
	pz = muon1->Pz();
	E = muon1->E();
	mass = 0.1056584; // muon1->M();
	pid = 54*100 + 0;
	rootfile->cd();
	outtree->Fill();
	px = muon2->Px();
	py = muon2->Py();
	pz = muon2->Pz();
	E = muon2->E();
	mass = 0.1056584; //muon2->M();
	pid = 53*100 + 0;
	rootfile->cd();
	outtree->Fill();

	return 0;
}
int etaDecayDielectronGamma(double _px, double _py, double _pz, double _E){
	/// TGenPhaseSpace event;
	TLorentzVector W(_px, _py, _pz, _E);
	Double_t dielectronmass = dileptonMassDist_TF1->GetRandom(2*0.000510999, 0.547);
	Double_t masses[2] = {0, dielectronmass};
	event.SetDecay(W, 2, masses);
	Double_t weight = event.Generate();
	TLorentzVector *gamma = event.GetDecay(0);
	TLorentzVector *dielectron = event.GetDecay(1);
	px = gamma->Px();
	py = gamma->Py();
	pz = gamma->Pz();
	E = gamma->E();
	mass = 0; // gamma->M();
	pid = 50*100 + 0;
	rootfile->cd();
	outtree->Fill();

	TLorentzVector Wdielectron(dielectron->Px(), dielectron->Py(), dielectron->Pz(), dielectron->E());
	Double_t masses2[2] = {0.000510999, 0.000510999};
	event.SetDecay(Wdielectron, 2, masses2);
	weight = event.Generate();
	TLorentzVector *electron1 = event.GetDecay(0);
	TLorentzVector *electron2 = event.GetDecay(1);
	px = electron1->Px();
	py = electron1->Py();
	pz = electron1->Pz();
	E = electron1->E();
	mass = 0.000510999; // electron1->M();
	pid = 52*100 + 0;
	rootfile->cd();
	outtree->Fill();
	px = electron2->Px();
	py = electron2->Py();
	pz = electron2->Pz();
	E = electron2->E();
	mass = 0.000510999; //electron2->M();
	pid = 51*100 + 0;
	rootfile->cd();
	outtree->Fill();

	return 0;
}










//// the main function starts here...
int BUU2root_withEtaDeacyEEGamma(string filename="IBUUk.mom"){
	initialization();
	//// open the IBUU output file
	ifstream filein(filename.c_str());
	//// create the output ROOT file
	createROOTFile(filename);
	//// read the IBUU file and dump into the TTree
	string str[3];
	double _px[1000], _py[1000], _pz[1000];
	int _pid[1000];
	Long_t count = 0;
	while(1){
		filein>>eventNO>>multi;
		if(!filein.good())break;
	       	//cout<<eventNO<<" "<<multi<<endl;
		if(eventNO%1000==0)cout<<eventNO<<endl;
		px_tot = py_tot = pz_tot = 0.0;
		for(int i=0;i<multi;i++){
			//filein>>str[0]>>str[1]>>str[2]>>pid;
			filein>>_px[i]>>_py[i]>>_pz[i]>>_pid[i]; 
			if(!filein.good())break;
			//if(str[0]=="********")px=0; else px=atof(str[0].c_str());
			//if(str[1]=="********")py=0; else py=atof(str[1].c_str());
			//if(str[2]=="********")pz=0; else pz=atof(str[2].c_str());
			//filein>>px>>py>>pz>>pid; 
			//cout<<px<<" "<<py<<" "<<pz<<" "<<pid<<endl;
			px_tot += _px[i]; py_tot += _py[i]; pz_tot += _pz[i];
		}
		//// check the momentum conservation
		if(fabs(px_tot)>0.32 || fabs(py_tot)>0.32 || fabs(pz_tot-beamP)>0.32)continue;
		count++;

		eventNO = count;
		for(int i=0;i<multi;i++){
			if(_pid[i]==4){
				px = _px[i];
				py = _py[i];
				pz = _pz[i];
				pid = _pid[i];
				mass = particleMass(pid);
				E = sqrt(px*px+py*py+pz*pz+mass*mass);
				rootfile->cd();
				outtree->Fill();
				pion0Decay(px, py, pz, E);
			}
			else if(_pid[i]==0){
				px = _px[i];
				py = _py[i];
				pz = _pz[i];
				pid = _pid[i];
				mass = particleMass(pid);
				E = sqrt(px*px+py*py+pz*pz+mass*mass);
				rootfile->cd();
				outtree->Fill();
				etaDecayDielectronGamma(px, py, pz, E);
			}
			else{
				px = _px[i];
				py = _py[i];
				pz = _pz[i];
				pid = _pid[i];
				mass = particleMass(pid);
				E = sqrt(px*px+py*py+pz*pz+mass*mass);
				rootfile->cd();
				outtree->Fill();
			}
		}
	}
	//// close output ROOT file
	outtree->Write();
	//rootfile->Flush();
	rootfile->Close();
	//// close the IBUU file
	filein.close();
	//// return 0 with zero errors
	return 0;
}
