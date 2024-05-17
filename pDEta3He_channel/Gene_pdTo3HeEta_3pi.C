//////  p d --> ^3He eta (pi^+ pi^- pi^0)
//////  contact: rwang@impcas.ac.cn
//
//


#include"../ChnsRoot_ana_src/plot_templates/myDrawTools.C"



TFile *fout;
TTree *tree;

double s;
TLorentzVector *eta_out;
TLorentzVector *he3_out;
TLorentzVector *pip_out;
TLorentzVector *pim_out;
TLorentzVector *pi0_out;
TLorentzVector *gamma1_out;
TLorentzVector *gamma2_out;


void Initialization(){
	s = 0;
	eta_out = new TLorentzVector();
	he3_out = new TLorentzVector();;
	pip_out = new TLorentzVector();;
	pim_out = new TLorentzVector();;
	pi0_out = new TLorentzVector();;
	gamma1_out = new TLorentzVector();;
	gamma2_out = new TLorentzVector();;
}


void MakeROOTFile(string filename){
	//// create the output file and the output TTree
	cout<<"    Creating the output file: "<<filename<<endl<<endl;
	fout = new TFile(filename.c_str(),"recreate");
	tree = new TTree("tree","p d --> 3He eta (pi+ pi- pi0)");
	tree->Branch("s", &s, "s/D");
	tree->Branch("eta_out", "TLorentzVector", eta_out);
	tree->Branch("he3_out", "TLorentzVector", he3_out);
	tree->Branch("pip_out", "TLorentzVector", pip_out);
	tree->Branch("pim_out", "TLorentzVector", pim_out);
	tree->Branch("pi0_out", "TLorentzVector", pi0_out);
	tree->Branch("gamma1_out", "TLorentzVector", gamma1_out);
	tree->Branch("gamma2_out", "TLorentzVector", gamma2_out);
}




double MeeDist(double *x, double *par){
	double meta = 0.547862;
	double me = 0.00051099895;
	double q2 = x[0]*x[0];
	double Lambda2 = 0.75*0.75; 

	double Feta = 1.0 / (1 - q2/Lambda2);

	return 1.0/x[0] *sqrt(1-4*me*me/q2) * (1+2*me*me/q2) *pow(1-q2/meta/meta, 3) *Feta*Feta; 
}


/// eta Dalitz plot function
double etaDalitz3Pi(double X, double Y){
	return 1 - 0.9*Y + 0.02*Y*Y - 0.05*X*X;
}




//// the main function start here!
void Gene_pdTo3HeEta_3pi() {

	long totalEveNumber = 10000000;
	Initialization();

	double T_p = 1.8;

	double mp = 0.938272;
	double mn = 0.939565;
	double meta = 0.547862;
	double mDeuteron = mp + mn - 2*0.001112283;
	double m3He = 2*mp + mn - 3*0.002572680;
	cout<< mp <<"\t"<< mn <<"\t"<< meta <<"\t"<< mDeuteron <<"\t"<< m3He <<endl;


	double me = 0.000510999;
	double mpip = 0.13957039;
	double mpi0 = 0.1349768;




	//Set initial kinematics, collision setting
	TLorentzVector target(0.0, 0.0, 0.0, mDeuteron);
	TLorentzVector beam(0.0, 0.0, sqrt(pow(mp+T_p, 2) - pow(mp,2)), mp+T_p);
	TLorentzVector W = beam + target;


	//masses of decay particles
	Double_t masses[2]  = {meta, m3He};
	Double_t masses2[3] = {mpip, mpip, mpi0};
	Double_t masses3[2] = {0, 0};


	//construct phase space generator
	TGenPhaseSpace event;
	event.SetDecay(W, 2, masses);


	TRandom3 *random3 = new TRandom3();   /// (342085);
	TF1 *dileptonMassDist_TF1 = new TF1("dileptonMassDist_TF1", MeeDist,  0.01,0.547,   0);



	TH2F *h2 = new TH2F("h2","h2", 50,1.1,1.8, 50,1.1,1.8);
	TH1F *hweight = new TH1F("hweight","",100,0,10);
	TH2F *heta_kine = new TH2F("heta_kine","",100,0,180,100,0,10);
	TH2F *h3He_kine = new TH2F("h3He_kine","",100,0,180,100,0,10);




  
	string dir = "/data/rwang/simulation_works/HIAF-etaFactory-Simulations-localData2/pdTo3HeEta_data/";
	string filename = "pd_to_3He_eta_3piChannel-part4.evt";
	ofstream evtout(dir+filename);

	filename = dir + "pd_to_3He_eta_3piChannel-part4.root";
	MakeROOTFile(filename);




   

	//Now start the event generation
	for (Int_t n=0; n<totalEveNumber; n++) {
		event.SetDecay(W, 2, masses);
		Double_t weight = event.Generate();

		s = W.M2();

		hweight->Fill(weight);

		TLorentzVector *pEta = event.GetDecay(0);
		TLorentzVector *p3He = event.GetDecay(1);
		//heta_kine->Fill(TMath::RadToDeg()*pEta->Theta(),  pEta->P());
		//h3He_kine->Fill(TMath::RadToDeg()*p3He->Theta(),  p3He->P());
		
		(*eta_out) = (*pEta);
		(*he3_out) = (*p3He);

		//dump 3He information into evt file
		evtout<<n<<"\t"<<5<<endl;
		evtout<<"  "<<"N\t"<<"Id\t"<<"Ist\t"<<"M1\t"<<"M2\t"<<"DF\t"<<"DL\t";
		evtout<<"px\t"<<"py\t"<<"pz\t"<<"E\t"<<"t\t"<<"x\t"<<"y\t"<<"z"<<endl;

		evtout<<"  "<<0<<"\t"<<1000020030<<"\t"<<1<<"\t"<<-1<<"\t"<<-1<<"\t"<<-1<<"\t"<<-1<<"\t";
		evtout<<p3He->Px()<<" "<<p3He->Py()<<" "<<p3He->Pz()<<" "<<p3He->E()<<" ";
		evtout<<0<<" "<<0<<" "<<0<<" "<<0<<endl;



		//Do eta --> pi+ pi- pi0 decay
		TLorentzVector W2(pEta->Px(), pEta->Py(), pEta->Pz(), pEta->E());
		double dielectronmass = dileptonMassDist_TF1->GetRandom(2*me+0.001, meta-0.001); 
		event.SetDecay(W2, 3, masses2);
		double Qeta, uu, tt, ss, X, Y; 
		TLorentzVector *pip, *pim, *pi0;
		while(1){
			weight = event.Generate();  //cout<<weight<<endl;
			if(random3->Uniform(0,0.48)>weight)continue;
			pip = event.GetDecay(0);
			pim = event.GetDecay(1);
			pi0 = event.GetDecay(2);
			Qeta = meta - masses2[0] - masses2[1] - masses2[2];
			ss = (*pip+*pim).M2();
			tt = (*pim+*pi0).M2();
			uu = (*pip+*pi0).M2();
			X = sqrt(3) / 2.0 / meta / Qeta * (uu-tt);
			Y = 3 / 2.0 / meta / Qeta * ((meta-masses2[2])*(meta-masses2[2])-ss) - 1;
			//cout<<etaDalitz3Pi(X, Y)<<endl;
			if(random3->Uniform(0,2) < etaDalitz3Pi(X, Y))  break;
		}


		//dump pi+ and pi- into output evt file
		evtout<<"  "<<1<<"\t"<<211<<"\t"<<1<<"\t"<<-1<<"\t"<<-1<<"\t"<<-1<<"\t"<<-1<<"\t";
		evtout<<(event.GetDecay(0)->Px())<<" "<<(event.GetDecay(0)->Py())<<" "<<(event.GetDecay(0)->Pz())<<" "<<(event.GetDecay(0)->E())<<" ";
		evtout<<0<<" "<<0<<" "<<0<<" "<<0<<endl;
		(*pip_out) = (*(event.GetDecay(0)));
		evtout<<"  "<<2<<"\t"<<-211<<"\t"<<1<<"\t"<<-1<<"\t"<<-1<<"\t"<<-1<<"\t"<<-1<<"\t";
		evtout<<(event.GetDecay(1)->Px())<<" "<<(event.GetDecay(1)->Py())<<" "<<(event.GetDecay(1)->Pz())<<" "<<(event.GetDecay(1)->E())<<" ";
		evtout<<0<<" "<<0<<" "<<0<<" "<<0<<endl;
		(*pim_out) = (*(event.GetDecay(1)));
		(*pi0_out) = (*(event.GetDecay(2)));


		//Do pi0 --> gamma1 gamma2 decay
		TLorentzVector W3(event.GetDecay(2)->Px(), event.GetDecay(2)->Py(), event.GetDecay(2)->Pz(), event.GetDecay(2)->E());
		event.SetDecay(W3, 2, masses3);
		weight = event.Generate();
		//dump two gammas into output evt file
		evtout<<"  "<<3<<"\t"<<22<<"\t"<<1<<"\t"<<-1<<"\t"<<-1<<"\t"<<-1<<"\t"<<-1<<"\t";
		evtout<<(event.GetDecay(0)->Px())<<" "<<(event.GetDecay(0)->Py())<<" "<<(event.GetDecay(0)->Pz())<<" "<<(event.GetDecay(0)->E())<<" ";
		evtout<<0<<" "<<0<<" "<<0<<" "<<0<<endl;
		evtout<<"  "<<4<<"\t"<<22<<"\t"<<1<<"\t"<<-1<<"\t"<<-1<<"\t"<<-1<<"\t"<<-1<<"\t";
		evtout<<(event.GetDecay(1)->Px())<<" "<<(event.GetDecay(1)->Py())<<" "<<(event.GetDecay(1)->Pz())<<" "<<(event.GetDecay(1)->E())<<" ";
		evtout<<0<<" "<<0<<" "<<0<<" "<<0<<endl;
		(*gamma1_out) = (*(event.GetDecay(0)));
		(*gamma2_out) = (*(event.GetDecay(1)));



		//fill the final-state particles into the tree
		tree->Fill();
	}


	//write TTree into file and close the file
	tree->Write();
	fout->Close();



#if 0
   CreateCanvas();
   CreateFrame(0,10,0, hweight->GetMaximum()*1.2, "weight","counts");
   hweight->Draw("same");

   
   CreateCanvas();
   TH2F *hframe_eta = CreateFrame(0,180,0,2, "#theta of #eta (#circ)","P of #eta (GeV/c)");
   hframe_eta->SetMaximum(1.1 * heta_kine->GetMaximum());
   heta_kine->Draw("col same");

   CreateCanvas();
   TH2F *hframe_3He = CreateFrame(0,30,0,3.5, "#theta of ^{3}He (#circ)","P of ^{3}He (GeV/c)");
   hframe_3He->SetMaximum(1.1 * h3He_kine->GetMaximum());
   h3He_kine->Draw("col same");
#endif


}




