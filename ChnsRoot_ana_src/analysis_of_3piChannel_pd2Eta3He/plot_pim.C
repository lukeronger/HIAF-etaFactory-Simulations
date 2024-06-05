int plot_pim(){

	TFile *file = new TFile("/data2/rwang/githubs/HIAF-etaFactory-Simulations-localData/ChnsRoot-data/HIAF-pdTo3HeEta-3piChannel-part1.root","read");
	
	TTree * mytree = (TTree*) file->Get("tree");
	mytree->Draw("Pim_REC.Pt() : Pim_REC.Theta()", "Npim_REC>0", "col");












	return 0;
}
