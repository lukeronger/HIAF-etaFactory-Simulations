#include "select_3pi.h"

int run_select_3pi(){

	TFile file("/data2/rwang/githubs/HIAF-etaFactory-Simulations-localData/ChnsRoot-data/HIAF-pdTo3HeEta-3piChannel-part1.root");

	TTree *tree = (TTree*) file.Get("tree");
	tree->Process("select_3pi.C");








	return 0;
}
