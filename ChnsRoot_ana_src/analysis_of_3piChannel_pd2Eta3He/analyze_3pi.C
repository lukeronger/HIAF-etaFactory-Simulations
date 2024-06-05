{
//////////////////////////////////////////////////////////
//   This file has been automatically generated 
//     (Mon May 20 11:22:42 2024 by ROOT version6.18/04)
//   from TTree tree/selection of 3He pi+ pi- gamma1 gamma2
//   found on file: /data2/rwang/githubs/HIAF-etaFactory-Simulations-localData/ChnsRoot-data/HIAF-pdTo3HeEta-3piChannel-part1.root
//////////////////////////////////////////////////////////
   TTree * tree;

//Reset ROOT and connect tree file
   gROOT->Reset();
   TFile *f = new TFile("/data2/rwang/githubs/HIAF-etaFactory-Simulations-localData/ChnsRoot-data/HIAF-pdTo3HeEta-3piChannel-part1.root");
   if (!f) {
      f = new TFile("/data2/rwang/githubs/HIAF-etaFactory-Simulations-localData/ChnsRoot-data/HIAF-pdTo3HeEta-3piChannel-part1.root");
   }
    f->GetObject("tree",tree);

//Declaration of leaves types
   Int_t           N3He_MC;
   Int_t           Npip_MC;
   Int_t           Npim_MC;
   Int_t           Ngamma_MC;
   Int_t           N3He_REC;
   Int_t           Npip_REC;
   Int_t           Npim_REC;
   Int_t           Ngamma_REC;
   TLorentzVector  *He3_MC = new TLorentzVector();
   TLorentzVector  *Pip_MC = new TLorentzVector();
   TLorentzVector  *Pim_MC = new TLorentzVector();
   TLorentzVector  *Gamma1_MC = new TLorentzVector();
   TLorentzVector  *Gamma2_MC = new TLorentzVector();
   TLorentzVector  *He3_REC = new TLorentzVector();
   TLorentzVector  *Pip_REC = new TLorentzVector();
   TLorentzVector  *Pim_REC = new TLorentzVector();
   TLorentzVector  *Gamma1_REC = new TLorentzVector();
   TLorentzVector  *Gamma2_REC = new TLorentzVector();

   // Set branch addresses.
   tree->SetBranchAddress("N3He_MC",&N3He_MC);
   tree->SetBranchAddress("Npip_MC",&Npip_MC);
   tree->SetBranchAddress("Npim_MC",&Npim_MC);
   tree->SetBranchAddress("Ngamma_MC",&Ngamma_MC);
   tree->SetBranchAddress("N3He_REC",&N3He_REC);
   tree->SetBranchAddress("Npip_REC",&Npip_REC);
   tree->SetBranchAddress("Npim_REC",&Npim_REC);
   tree->SetBranchAddress("Ngamma_REC",&Ngamma_REC);
   tree->SetBranchAddress("He3_MC",&He3_MC);
   tree->SetBranchAddress("Pip_MC",&Pip_MC);
   tree->SetBranchAddress("Pim_MC",&Pim_MC);
   tree->SetBranchAddress("Gamma1_MC",&Gamma1_MC);
   tree->SetBranchAddress("Gamma2_MC",&Gamma2_MC);
   tree->SetBranchAddress("He3_REC",&He3_REC);
   tree->SetBranchAddress("Pip_REC",&Pip_REC);
   tree->SetBranchAddress("Pim_REC",&Pim_REC);
   tree->SetBranchAddress("Gamma1_REC",&Gamma1_REC);
   tree->SetBranchAddress("Gamma2_REC",&Gamma2_REC);

//     This is the loop skeleton
//       To read only selected branches, Insert statements like:
// tree->SetBranchStatus("*",0);  // disable all branches
// TTreePlayer->SetBranchStatus("branchname",1);  // activate branchname

   Long64_t nentries = 10000; ///tree->GetEntries();


   TH1F *h1 = new TH1F("h1","Mass of two #gamma's",200,0,0.5);

   Long64_t nbytes = 0;
   for (Long64_t i=0; i<nentries;i++) {
      nbytes += tree->GetEntry(i);
      if(Ngamma_REC>=2){
	      TLorentzVector twogamma;
	      twogamma = (*Gamma1_REC) + (*Gamma2_REC);
	      h1->Fill(twogamma.M());

      }
   }

   h1->Draw();


}
