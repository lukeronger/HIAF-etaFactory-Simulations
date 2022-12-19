{

TFile file("../hiaf_MCdata/pp_to_ppeta_DileptonGamma_1.8GeV.root");











data->Draw("sqrt(    pow(Particles.TLorentzVector[7].E()+Particles.TLorentzVector[6].E(),2) -pow(Particles.TLorentzVector[7].Px()+Particles.TLorentzVector[6].Px(),2) -pow(Particles.TLorentzVector[7].Py()+Particles.TLorentzVector[6].Py(),2) -pow(Particles.TLorentzVector[7].Pz()+Particles.TLorentzVector[6].Pz(),2)      )>>h1(200,0,0.6)","");
gPad->SetLogy();


//TF1 model("model","[0]*pow(x,[1])*TMath::Gaus(x,0,[2],1)/(1+exp(x-[3])/[4])/(1+exp(x-[5])/[6])");
//TF1 model("model","[0]*pow(x,[1])*TMath::Gaus(x,0,[2],1)*pow(fabs(x-0.547862), [3])");
TF1 model("model","[0]*pow(x,[1])*pow(fabs(x-0.5478),[2])");
model.SetParameters(76, -0.9, 2);


h1->Fit("model","","",0.01,0.54);


model.Draw("lsame");

}
