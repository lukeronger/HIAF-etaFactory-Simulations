
int runGiBUU2Evt(){
	TChain *chain = new TChain("RootTuple","RootTuple");

	ifstream listin("/mnt/c/work2/githubs/HIAF-etaFactory-Simulations/GiBUUtest/release/testRun2/filelist_p7Li_1.8GeV");
	for(int i=0;i<50;i++){
		string filename;
		listin>>filename;
		chain->AddFile(filename.c_str());
		cout<<"Adding \n   "<<filename<<endl<<"Done!"<<endl;
	}


	//chain->GetEntries();
	//chain->Print(); 

	cout<<endl<<"Converting to evt file..."<<endl;

	chain->Process("GiBUUn2Evt.C");

	cout<<"Done!!"<<endl;

	return 0;
}
