void run_fsim_electron(Int_t nEvents = 1, int seed_num=1000)
{

	TStopwatch timer;
  timer.Start();
  gDebug=0;
  // Load basic libraries
  //gROOT->LoadMacro("$VMCWORKDIR/gconfig/basiclibs.C");
  //basiclibs();
  // Load this example libraries
  TString outfile;
  if (outfile=="") {
  outfile="../Data/HyperNuclei/run_fsim_H3L"; //1.root";
    outfile+= seed_num;
  outfile+=".root";
  }

  int abslund=211, mult = 10;
  int soff = 0;

  TString  MediaFile      ="media.geo";
  TString digiFile        = "all.par"; //The emc run the hit producer directly

  TString  ParOutputfile  ="simparams.root";

  gRandom->SetSeed(seed_num);
  FairRunSim *run = new FairRunSim();
  run->SetOutputFile(outfile.Data());
  run->SetMaterials(MediaFile.Data());
	//run->SetUserDecay(kTRUE);
  FairRuntimeDb *rtdb=run->GetRuntimeDb();

  run->SetName("TGeant3");

  //---------------------Set Parameter output      ----------
  Bool_t kParameterMerged=kTRUE;
  FairParRootFileIo* output=new FairParRootFileIo(kParameterMerged);
  output->open(ParOutputfile.Data());
  rtdb->setOutput(output);

  FairModule *Cave= new ChnsCave("CAVE");
  Cave->SetGeometryFileName("cave.geo");
  run->AddModule(Cave);


  // -----   Create PrimaryGenerator   --------------------------------------
  FairPrimaryGenerator* primGen = new FairPrimaryGenerator();

	// Add a box generator also to the run
	ChnsBoxGenerator* boxGen1 = new ChnsBoxGenerator(-11, 1); // 1 = multipl.
	boxGen1->SetPtRange(0.2,3.50); // GeV/c
	boxGen1->SetYRange(-0.2,1.20); // Rapidity
	//boxGen1->SetPhiRange(0., 360.); // Azimuth angle range [degree]
	//boxGen1->SetThetaRange(0., 150.); // Polar angle in lab system range [degree]
	boxGen1->SetXYZ(0., 0., 0.); // cm
	//boxGen1->SetDebug(1);
	primGen->AddGenerator(boxGen1);

	// Add a box generator also to the run
   run->SetGenerator(primGen);
// ------------------------------------------------------------------------

//Setup the Fast Simulation Task
//-----------------------------
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

  //---Store the visualiztion info of the tracks, this make the output file very large!!
  //--- Use it only to display but not for production!
  run->SetStoreTraj(kTRUE);

   //--------------------Set some cuts for the visualization------------------
//  FairTrajFilter* trajFilter = FairTrajFilter::Instance();
//  trajFilter->SetStepSizeCut(0.001); //1 mm


  // -----   Initialize simulation run   ------------------------------------
  run->Init();

  //--------------------Set some cuts for the visualization------------------
  FairTrajFilter* trajFilter = FairTrajFilter::Instance();
  trajFilter->SetStepSizeCut(0.1); //1 mm
//  trajFilter->SetStorePrimaries(kTURE);
//  trajFilter->SetStoreSecondaries(kTURE);

  // ------------------------------------------------------------------------

  // ------------------------------------------------------------------------

  // -----   Start run   ----------------------------------------------------
   run->Run(nEvents);

  //You can export your ROOT geometry to a separate file
  run->CreateGeometryFile("geofile_full.root");
  // ------------------------------------------------------------------------

  // -----   Finish   -------------------------------------------------------
  timer.Stop();
  Double_t rtime = timer.RealTime();
  Double_t ctime = timer.CpuTime();
  cout << endl << endl;
  cout << "Real time " << rtime << " s, CPU time " << ctime
       << "s" << endl << endl;
  // ------------------------------------------------------------------------
}
