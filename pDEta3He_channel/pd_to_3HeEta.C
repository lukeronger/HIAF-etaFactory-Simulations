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

void pd_to_3HeEta() {

	double T_p = 1.7;

	double mp = 0.938272;
	double mn = 0.939565;
	double meta = 0.547862;
	double mDeuteron = mp + mn - 2*0.001112283;
	double m3He = 2*mp + mn - 3*0.002572680;
       cout<< mp <<"\t"<< mn <<"\t"<< meta <<"\t"<< mDeuteron <<"\t"<< m3He <<endl;

   TLorentzVector target(0.0, 0.0, 0.0, mDeuteron);
   TLorentzVector beam(0.0, 0.0, sqrt(pow(mp+T_p, 2) - pow(mp,2)), mp+T_p);
   TLorentzVector W = beam + target;

   //(Momentum, Energy units are Gev/C, GeV)
   Double_t masses[2] = {meta, m3He};

   TGenPhaseSpace event;
   event.SetDecay(W, 2, masses);

   TH2F *h2 = new TH2F("h2","h2", 50,1.1,1.8, 50,1.1,1.8);
   TH1F *hweight = new TH1F("hweight","",100,0,10);
   TH2F *heta_kine = new TH2F("heta_kine","",100,0,180,100,0,10);
   TH2F *h3He_kine = new TH2F("h3He_kine","",100,0,180,100,0,10);

   for (Int_t n=0;n<1000000;n++) {
      Double_t weight = event.Generate();

      hweight->Fill(weight);
      TLorentzVector *pEta = event.GetDecay(0);
      TLorentzVector *p3He = event.GetDecay(1);
      heta_kine->Fill(TMath::RadToDeg()*pEta->Theta(),  pEta->P());
      h3He_kine->Fill(TMath::RadToDeg()*p3He->Theta(),  p3He->P());
   }


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

}
