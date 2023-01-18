// Run parameters: (run events, energy for single value, output file name)
void run_sim_emc(Int_t nEvents = 50, Double_t input_energy=1.0, TString outFile = "test.root")
{
	Bool_t isMT = kTRUE;

	// Parameter file name
	TString EmcParFile = "./EmcParams.par";
	TString parFile = "params.root";

	Bool_t UseBoxGenerator      =kFALSE;
	Bool_t UseEvtGenBox         =kTRUE;

	// -----   Timer   --------------------------------------------------------
	TStopwatch timer;
	timer.Start();

	// -----   Create simulation run   ----------------------------------------
	FairRunSim* run = new FairRunSim();
	run->SetName("TGeant4");                        // Transport engine
	run->SetSink(new FairRootFileSink(outFile));   // Output file
	run->SetIsMT(isMT);
	FairRuntimeDb* rtdb = run->GetRuntimeDb();
	FairParAsciiFileIo* parIo1 = new FairParAsciiFileIo();
	parIo1->open(EmcParFile.Data(),"in");
	rtdb->setFirstInput(parIo1);

	// -----   Create media   -------------------------------------------------
	run->SetMaterials("media.geo");   // Materials
	// -----   Create geometry   ----------------------------------------------

	FairModule* cave = new EiccCave("CAVE");
	cave->SetGeometryFileName("cave.geo");
	run->AddModule(cave);

	//FairModule* magnet = new EiccMagnet("Magnet");
	//magnet->SetGeometryFileName("FullSuperconductingSolenoid_v831_Panda.root");
	//run->AddModule(magnet);

	//FairModule* pipe = new EiccPipe("Pipe");
	//run->AddModule(pipe);

	// -----   Magnetic field   -------------------------------------------
	// Constant Field
	/*
	EiccConstField* fMagField = new EiccConstField();
	fMagField->SetField(0., 20., 0.);                             // values are in kG
	fMagField->SetFieldRegion(-200, 200, -200, 200, -200, 200);   // values are in cm (xmin,xmax,ymin,ymax,zmin,zmax)
	run->SetField(fMagField);
	*/

	// -----   Create PrimaryGenerator   --------------------------------------
	FairPrimaryGenerator* primGen = new FairPrimaryGenerator();

	if(UseBoxGenerator){
		FairBoxGenerator* boxGen = new FairBoxGenerator(11, 1);   //  1 = multipl. (13 muon, 22 photon, 11 e-, 211 pi+, -211 pi-, -321 k-)
		boxGen->SetPRange(input_energy, input_energy);        // GeV/c
		boxGen->SetPhiRange(0., 360.);                            // Azimuth angle range [degree]
		boxGen->SetThetaRange(0.,180.);                           // Polar angle in lab system range [degree]
		boxGen->SetXYZ(0., 0., 0.);                               // cm
		//boxGen->SetBoxXYZ(-2., -2., 2., 2., -10.);  // area source; x1, y1, x2, y2, z(constant)
		primGen->AddGenerator(boxGen);
	}
	if(UseEvtGenBox){
		//TString  EvtInput =gSystem->Getenv("VMCWORKDIR");
		TString EvtInput="./pi0_EvtGen.dec";
		EiccEvtGenBox *EvtGen = new EiccEvtGenBox("pi0", EvtInput.Data(), 1);
		EvtGen->SetPRange(2., 2.);
		EvtGen->SetPhiRange(0., 360.);                            // Azimuth angle range [degree]
		EvtGen->SetThetaRange(0., 180.);                           // Polar angle in lab system range [degree]
		EvtGen->SetXYZ(0., 0., 0.);
		EvtGen->SetMass(0.1349768e+00);
		EvtGen->SetStoreTree(kFALSE);
		EvtGen->SetVerbose(0);//change output level for debug
		primGen->AddGenerator(EvtGen);
	}
	run->SetGenerator(primGen);
	// ------------------------------------------------------------------------

	//---Store the visualiztion info of the tracks, this make the output file very large!!
	//--- Use it only to display but not for production!
	run->SetStoreTraj(kTRUE);
	
	// ---------EMC Simu and Reco---------------------------------------------------------------
    EiccEmc* EmcDet = new EiccEmc("EMcDet", kTRUE);
	EmcDet->SetGeometryFileName("emc_v0.root"); // default path location is /geometry
	EmcDet->SetPersistance(kFALSE); // close this will extremely decrease the storage usage 
    run->AddModule(EmcDet);
    EiccEmcDigiTask* emcDigi = new EiccEmcDigiTask();
    emcDigi->SetPersistance(kTRUE);
    run->AddTask(emcDigi);
    EiccEmcClusterTask* emcCluster = new EiccEmcClusterTask();
    emcCluster->SetPersistance(kTRUE);
    run->AddTask(emcCluster);
    EiccEmcParticleTask* emcParticle = new EiccEmcParticleTask();
    emcParticle->SetPersistance(kTRUE);
    run->AddTask(emcParticle);

	// -----   Initialize simulation run   ------------------------------------
	run->Init();
	
	// -----   Runtime database   ---------------------------------------------
	Bool_t kParameterMerged = kTRUE; // kTRUE: new parameters will be added including previous one; kFALSE: ??
	FairParRootFileIo* parOut = new FairParRootFileIo(kParameterMerged);
	parOut->open(parFile.Data());  // file option for kFALSE????
	rtdb->setOutput(parOut);
	rtdb->saveOutput();
	//rtdb->print();
	// ------------------------------------------------------------------------

	// -----   Start run   ----------------------------------------------------
	run->Run(nEvents);

	// You can export your ROOT geometry ot a separate file
	run->CreateGeometryFile("geofile_full.root");
	// ------------------------------------------------------------------------

	// -----   Finish   -------------------------------------------------------
	timer.Stop();
	Double_t rtime = timer.RealTime();
	Double_t ctime = timer.CpuTime();
	cout << endl << endl;
	cout << "Macro finished succesfully." << endl;
	cout << "Output file is " << outFile << endl;
	cout << "Parameter file is " << parFile << endl;
	cout << "Real time " << rtime << " s, CPU time " << ctime << "s" << endl << endl;
	// ------------------------------------------------------------------------
}
