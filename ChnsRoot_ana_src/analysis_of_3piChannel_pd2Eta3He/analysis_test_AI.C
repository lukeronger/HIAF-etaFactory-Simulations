#include <TFile.h>  
#include <TTree.h>  
#include <TLorentzVector.h>  
#include <TH1F.h>  
#include <TCanvas.h>  

TLorentzVector *mom;

void analyze_lorentz_vectors(const char* filename, const char* treename) {  
    TFile* file = TFile::Open(filename);  
    if (!file || file->IsZombie()) {  
        Error("analyze_lorentz_vectors", "Failed to open file %s", filename);  
        return;  
    }  
  
    TTree* tree = (TTree*)file->Get(treename);  
    if (!tree) {  
        Error("analyze_lorentz_vectors", "Tree %s not found in file %s", treename, filename);  
        return;  
    }  
  
    //TLorentzVector momentum;  
    tree->SetBranchAddress("Pim_REC", &mom); // 假设分支名为"Momentum"  
    //tree->SetBranchAddress("Pip_REC", &mom_pip); // 假设分支名为"Momentum"  
  
    TH1F* h_pt = new TH1F("h_pt", "Momentum Magnitude (p_{T})", 100, 0, 1); // 示例直方图  
    TH1F* h_pt = new TH1F("h_pt", "Momentum Magnitude (p_{T})", 100, 0, 1); // 示例直方图  
  
    Long64_t nentries = 10000;   //tree->GetEntries();  
    for (Long64_t i = 0; i < nentries; ++i) {  
        tree->GetEntry(i);  
        h_pt->Fill(mom->Pt()); // 填充动量大小的直方图  
        // ... 可以添加其他计算和绘图代码 ...  
    }  
  
    TCanvas* c1 = new TCanvas("c1", "Momentum Magnitude Distribution", 800, 600);  
    h_pt->Draw();  
    c1->SaveAs("momentum_magnitude_distribution.pdf");  
  
    file->Close();  
}  
  
int analysis_test_AI() { 
    mom = new TLorentzVector();	
    analyze_lorentz_vectors("/data2/rwang/githubs/HIAF-etaFactory-Simulations-localData/ChnsRoot-data/HIAF-pdTo3HeEta-3piChannel-part1.root", "tree");  
    return 0;  
}
