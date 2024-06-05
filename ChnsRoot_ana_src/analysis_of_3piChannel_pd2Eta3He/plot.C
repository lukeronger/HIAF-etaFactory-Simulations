{

	TFile *file = new TFile("/data2/rwang/githubs/HIAF-etaFactory-Simulations-localData/ChnsRoot-data/HIAF-pdTo3HeEta-3piChannel-part1.root","read");

	tree->Draw("Pim_REC.Pt() : Pim_REC.Theta()", "Npim_REC>0", "col");













}
