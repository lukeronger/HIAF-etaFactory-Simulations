
int runGiBUUn2Evt(){
	TChain *chain = new TChain("RootTuple","RootTuple");

	ifstream listin("/data/rwang/simulation_works/HIAF-etaFactory-Simulations-localData2/GiBUU-data/filelist_p7Li_1.8GeV");
	for(int i=0;i<10;i++){
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
