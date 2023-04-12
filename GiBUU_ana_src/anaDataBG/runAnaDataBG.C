
int runAnaDataBG(){
	TChain *chain = new TChain("RootTuple","RootTuple");

	ifstream listin("/data2/rwang/githubs/HIAF-etaFactory-Simulations/GiBUUtest/release/testRun2/filelist_p7Li_1.8GeV");
	for(int i=0;i<50;i++){
		string filename;
		listin>>filename;
		chain->AddFile(filename.c_str());
		cout<<"Adding \n   "<<filename<<endl<<"Done!"<<endl;
	}


	//chain->GetEntries();
	//chain->Print(); 

	chain->Process("anaDataBG.C");

	cout<<"Done!!"<<endl;

	return 0;
}
