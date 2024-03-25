/// \file
/// \ingroup tutorial_physics
/// \notebook -js
/// Example of use of TGenPhaseSpace
///
/// \macro_image
/// \macro_code
///
/// \author Valerio Filippini

#include"../ChnsRoot_ana_src/plot_templates/myDrawTools.C"

double MeeDist(double *x, double *par){
	double meta = 0.547862;
	double me = 0.00051099895;
	double q2 = x[0]*x[0];
	double Lambda2 = 0.75*0.75; 

	double Feta = 1.0 / (1 - q2/Lambda2);

	return 1.0/x[0] *sqrt(1-4*me*me/q2) * (1+2*me*me/q2) *pow(1-q2/meta/meta, 3) *Feta*Feta; 
}




void Gene_pdTo3HeEta() {

	double T_p = 1.8;

	double mp = 0.938272;
	double mn = 0.939565;
	double meta = 0.547862;
	double mDeuteron = mp + mn - 2*0.001112283;
	double m3He = 2*mp + mn - 3*0.002572680;
       cout<< mp <<"\t"<< mn <<"\t"<< meta <<"\t"<< mDeuteron <<"\t"<< m3He <<endl;


       double me = 0.000510999;

   TLorentzVector target(0.0, 0.0, 0.0, mDeuteron);
   TLorentzVector beam(0.0, 0.0, sqrt(pow(mp+T_p, 2) - pow(mp,2)), mp+T_p);
   TLorentzVector W = beam + target;


   //(Momentum, Energy units are Gev/C, GeV)
   Double_t masses[2] = {meta, m3He};
   Double_t masses2[2] = {0, 0};
   Double_t masses3[2] = {me, me};


   TGenPhaseSpace event;
   event.SetDecay(W, 2, masses);


   TRandom3 *random3 = new TRandom3();   /// (342085);
   //TF1 *dileptonMassDist_TF1 = new TF1("dileptonMassDist_TF1","[0]*pow(x,[1])*pow(fabs(x-0.5478),[2])");
   //dileptonMassDist_TF1->SetParameters(2.52264e+03, -8.64483e-01, 1.54142);
   TF1 *dileptonMassDist_TF1 = new TF1("dileptonMassDist_TF1", MeeDist,  0.01,0.547,   0);
   ///dileptonMassDist_TF1->SetParameters(2.52264e+03, -8.64483e-01, 1.54142);



   TH2F *h2 = new TH2F("h2","h2", 50,1.1,1.8, 50,1.1,1.8);
   TH1F *hweight = new TH1F("hweight","",100,0,10);
   TH2F *heta_kine = new TH2F("heta_kine","",100,0,180,100,0,10);
   TH2F *h3He_kine = new TH2F("h3He_kine","",100,0,180,100,0,10);




  
   string dir = "/data/rwang/simulation_works/HIAF-etaFactory-Simulations-localData2/pdTo3HeEta_data/";
   string filename = "pd_to_3He_eta.evt";
   ofstream evtout(dir+filename);

   for (Int_t n=0;n<10000000;n++) {
      event.SetDecay(W, 2, masses);
      Double_t weight = event.Generate();
      hweight->Fill(weight);
      TLorentzVector *pEta = event.GetDecay(0);
      TLorentzVector *p3He = event.GetDecay(1);
      //heta_kine->Fill(TMath::RadToDeg()*pEta->Theta(),  pEta->P());
      //h3He_kine->Fill(TMath::RadToDeg()*p3He->Theta(),  p3He->P());

      evtout<<n<<"\t"<<4<<endl;
      evtout<<"  "<<"N\t"<<"Id\t"<<"Ist\t"<<"M1\t"<<"M2\t"<<"DF\t"<<"DL\t";
      evtout<<"px\t"<<"py\t"<<"pz\t"<<"E\t"<<"t\t"<<"x\t"<<"y\t"<<"z"<<endl;

      evtout<<"  "<<0<<"\t"<<1000020030<<"\t"<<1<<"\t"<<-1<<"\t"<<-1<<"\t"<<-1<<"\t"<<-1<<"\t";
      evtout<<p3He->Px()<<" "<<p3He->Py()<<" "<<p3He->Pz()<<" "<<p3He->E()<<" ";
      evtout<<0<<" "<<0<<" "<<0<<" "<<0<<endl;



	TLorentzVector W2(pEta->Px(), pEta->Py(), pEta->Pz(), pEta->E());
	//double dielectronmass = dileptonMassDist_TF1->GetRandom(2*me+0.0001, meta-0.0001); 
	double dielectronmass = dileptonMassDist_TF1->GetRandom(2*me+0.001, meta-0.001); 
	masses2[1] = dielectronmass;
	event.SetDecay(W2, 2, masses2);
	weight = event.Generate();

	evtout<<"  "<<1<<"\t"<<22<<"\t"<<1<<"\t"<<-1<<"\t"<<-1<<"\t"<<-1<<"\t"<<-1<<"\t";
	evtout<<(event.GetDecay(0)->Px())<<" "<<(event.GetDecay(0)->Py())<<" "<<(event.GetDecay(0)->Pz())<<" "<<(event.GetDecay(0)->E())<<" ";
	evtout<<0<<" "<<0<<" "<<0<<" "<<0<<endl;




	TLorentzVector W3(event.GetDecay(1)->Px(), event.GetDecay(1)->Py(), event.GetDecay(1)->Pz(), event.GetDecay(1)->E());
	event.SetDecay(W3, 2, masses3);
	weight = event.Generate();

	evtout<<"  "<<2<<"\t"<<-11<<"\t"<<1<<"\t"<<-1<<"\t"<<-1<<"\t"<<-1<<"\t"<<-1<<"\t";
	evtout<<(event.GetDecay(0)->Px())<<" "<<(event.GetDecay(0)->Py())<<" "<<(event.GetDecay(0)->Pz())<<" "<<(event.GetDecay(0)->E())<<" ";
	evtout<<0<<" "<<0<<" "<<0<<" "<<0<<endl;
	evtout<<"  "<<3<<"\t"<<11<<"\t"<<1<<"\t"<<-1<<"\t"<<-1<<"\t"<<-1<<"\t"<<-1<<"\t";
	evtout<<(event.GetDecay(1)->Px())<<" "<<(event.GetDecay(1)->Py())<<" "<<(event.GetDecay(1)->Pz())<<" "<<(event.GetDecay(1)->E())<<" ";
	evtout<<0<<" "<<0<<" "<<0<<" "<<0<<endl;


/*      
      evtout<<"  "<<0<<"\t"<<-11<<"\t"<<1<<"\t"<<0<<"\t"<<0<<"\t"<<-1<<"\t"<<-1<<"\t";
      evtout<<ep.Px()<<" "<<ep.Py()<<" "<<ep.Pz()<<" "<<ep.E()<<" ";
      evtout<<0<<" "<<0<<" "<<0<<" "<<0<<endl;

      evtout<<"  "<<1<<"\t"<<11<<"\t"<<1<<"\t"<<0<<"\t"<<0<<"\t"<<-1<<"\t"<<-1<<"\t";
      evtout<<em.Px()<<" "<<em.Py()<<" "<<em.Pz()<<" "<<em.E()<<" ";
      evtout<<0<<" "<<0<<" "<<0<<" "<<0<<endl;

      evtout<<"  "<<2<<"\t"<<22<<"\t"<<1<<"\t"<<0<<"\t"<<0<<"\t"<<-1<<"\t"<<-1<<"\t";
      evtout<<v3gammas.at(0).Px()<<" "<<v3gammas.at(0).Py()<<" "<<v3gammas.at(0).Pz()<<" "<<v3gammas.at(0).Mag()<<" ";
      evtout<<0<<" "<<0<<" "<<0<<" "<<0<<endl;



			TLorentzVector W(pi0s[j].Px(), pi0s[j].Py(), pi0s[j].Pz(), pi0s[j].E());
			double dielectronmass = dileptonMassDist_TF1->GetRandom(2*0.000510999+0.0001, 0.134977-0.0001);
			double masses[2] = {0, dielectronmass};
			phase_generator->SetDecay(W, 2, masses);
			double weight = phase_generator->Generate();
			   (*file_evt)<<"  "<<i<<"\t"<<22<<"\t"<<1<<"\t"<<0<<"\t"<<0<<"\t"<<-1<<"\t"<<-1<<"\t";
			   (*file_evt)<<(phase_generator->GetDecay(0)->Px())<<" "<<(phase_generator->GetDecay(0)->Py())<<" "<<(phase_generator->GetDecay(0)->Pz())<<" "<<(phase_generator->GetDecay(0)->E())<<" ";
			   (*file_evt)<<0<<" "<<0<<" "<<0<<" "<<0<<endl;
			   i++;

			TLorentzVector Wdielectron(phase_generator->GetDecay(1)->Px(), phase_generator->GetDecay(1)->Py(), phase_generator->GetDecay(1)->Pz(), phase_generator->GetDecay(1)->E());
			double masses2[2] = {0.000510999, 0.000510999};
			phase_generator->SetDecay(Wdielectron, 2, masses2);
			weight = phase_generator->Generate();
			   (*file_evt)<<"  "<<i<<"\t"<<-11<<"\t"<<1<<"\t"<<0<<"\t"<<0<<"\t"<<-1<<"\t"<<-1<<"\t";
			   (*file_evt)<<(phase_generator->GetDecay(0)->Px())<<" "<<(phase_generator->GetDecay(0)->Py())<<" "<<(phase_generator->GetDecay(0)->Pz())<<" "<<(phase_generator->GetDecay(0)->E())<<" ";
			   (*file_evt)<<0<<" "<<0<<" "<<0<<" "<<0<<endl;
			   i++;
			   (*file_evt)<<"  "<<i<<"\t"<<11<<"\t"<<1<<"\t"<<0<<"\t"<<0<<"\t"<<-1<<"\t"<<-1<<"\t";
			   (*file_evt)<<(phase_generator->GetDecay(1)->Px())<<" "<<(phase_generator->GetDecay(1)->Py())<<" "<<(phase_generator->GetDecay(1)->Pz())<<" "<<(phase_generator->GetDecay(1)->E())<<" ";
			   (*file_evt)<<0<<" "<<0<<" "<<0<<" "<<0<<endl;
			   i++;
*/
   }




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

