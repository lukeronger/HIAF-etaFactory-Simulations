
int runGiBUU2evt(){
	TChain *chain = new TChain("RootTuple","RootTuple");

	ifstream listin("/data/rwang/simulation_works/HIAF-etaFactory-Simulations-localData2/GiBUU-data-evt/filelist_combined");
	int N_files = 311;
	for(int i=0; i<N_files; i++){
	//for(int i=0;i<10;i++){
		string filename;
		listin>>filename;
		chain->AddFile(filename.c_str());
		cout<<"Adding \n   "<<filename<<endl<<"Done!"<<endl;
	}


	//chain->GetEntries();
	//chain->Print(); 

	cout<<endl<<"Converting to evt file..."<<endl;

	chain->Process("GiBUU2evt.C");

	cout<<"Convertion done!!"<<endl;

	return 0;
}
