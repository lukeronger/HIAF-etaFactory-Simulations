void run_fsim_Pluto(Int_t nEvents = 1, TString mcEngine = "TGeant4")
{
  // Output file name
  TString dir = getenv("VMCWORKDIR");
  TString inFile = dir + "/input/pp2pkLam_Ep2.5GeV_Evt1000.root";
  //Double_t ekin = 2.5;
  Double_t ekin = 0.;

  TString outFile ="test_ChnsPluto.root";
    
  // Parameter file name
  TString parFile="params_ChnsPluto.root";
  
  // -----   Timer   --------------------------------------------------------
  TStopwatch timer;
  timer.Start();

  // -----   Create simulation run   ----------------------------------------
  FairRunSim* run = new FairRunSim();
  run->SetName(mcEngine);              // Transport engine
  run->SetOutputFile(outFile.Data());
  FairRuntimeDb* rtdb = run->GetRuntimeDb();
  run->SetMaterials("media.geo");       // Materials
  // -----   Runtime database   ---------------------------------------------
  Bool_t kParameterMerged = kTRUE;
  FairParRootFileIo* parOut = new FairParRootFileIo(kParameterMerged);
  parOut->open(parFile.Data());
  rtdb->setOutput(parOut);
  rtdb->saveOutput();
  rtdb->print();

  // -----   Create geometry   ----------------------------------------------
  FairModule* cave= new ChnsCave("CAVE");
  cave->SetGeometryFileName("cave.geo");
  run->AddModule(cave);

  // -----   Create PrimaryGenerator   --------------------------------------
  FairPrimaryGenerator* primGen = new FairPrimaryGenerator();
  ChnsPlutoGenerator* PlutoGen = new ChnsPlutoGenerator(inFile.Data(), ekin);
  primGen->AddGenerator(PlutoGen);
  run->SetGenerator(primGen);
  
	//---Store the visualiztion info of the tracks, this make the output file very large!!
  //--- Use it only to display but not for production!
  run->SetStoreTraj(kTRUE);

  // ------- Setup the Fast Simulation Task ---------------------------------
  ChnsFastSim* fastSim = new ChnsFastSim();
  
  //increasing verbosity increases the amount of console output (mainly for debugging)
  fastSim->SetVerbosity(0);  

  //Tracking, Vertexing, dE/dx
  fastSim->AddDetector("Tpc", "efficiency=1.0"); 
  //PID detectors
  fastSim->AddDetector("Tof","efficiency=1.0");
  //EM Calorimeters (aPar and bPar for dE should be set: CsI(aPar = 0.0161, bPar = 0.0152), lead glass(aPar=0.0279, bPar=0.05567)) 
  fastSim->AddDetector("EmcBarrel","efficiency=1.0 aPar=0.02 bPar=0.02");
    
  run->AddTask(fastSim);
    
  // -----   Initialize simulation run   ------------------------------------
  run->Init();

  // -----   Start run   ----------------------------------------------------
   run->Run(nEvents);
    
  // -----   Finish   -------------------------------------------------------
  timer.Stop();
  Double_t rtime = timer.RealTime();
  Double_t ctime = timer.CpuTime();
  cout << endl << endl;
  cout << "Macro finished succesfully." << endl;
  cout << "Output file is "    << outFile << endl;
  cout << "Parameter file is " << parFile << endl;
  cout << "Real time " << rtime << " s, CPU time " << ctime 
       << "s" << endl << endl;
  // ------------------------------------------------------------------------
}


