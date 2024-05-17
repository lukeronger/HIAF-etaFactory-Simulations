
int runGiBUU2evt_v2(){
	TChain *chain = new TChain("RootTuple","RootTuple");

	ifstream listin("/data/rwang/simulation_works/HIAF-etaFactory-Simulations-localData2/GiBUU-data-RandSeed2023/filelist-3");

	string filename;
	while(listin>>filename){
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
