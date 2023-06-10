#include <iostream>

void run_fsim_ChnsJam_H3L(Int_t nEvents = 1000000, int seed_num=1111)
{
  TString dir = getenv("VMCWORKDIR");
  TString Urqd_Conversion_table= dir + "/input/urqmd_pdg.dat";

	TString infilelist = "file.list";
	
  TString  MediaFile      ="media.geo";
  TString digiFile        = "all.par"; //The emc run the hit producer directly
  TString outFile ="output/fsim_ChnsJam_H3L_1M.root";

  // Paraeter file name
  TString ParOutputfile="paras_ChnasJam_H3L.root";
 
  // -----   Timer   --------------------------------------------------------
  TStopwatch timer;
  timer.Start();
  // ------------------------------------------------------------------------

  // -----   Create simulation run   ----------------------------------------
  gRandom->SetSeed(seed_num);
  FairRunSim *run = new FairRunSim();
  run->SetOutputFile(outFile.Data());
  run->SetMaterials(MediaFile.Data());
	run->SetUserDecay(kTRUE);
  FairRuntimeDb *rtdb=run->GetRuntimeDb();

  run->SetName("TGeant3");
  
	Bool_t kParameterMerged=kTRUE;
  FairParRootFileIo* output=new FairParRootFileIo(kParameterMerged);
  output->open(ParOutputfile.Data());
  rtdb->setOutput(output);

  FairModule *Cave= new ChnsCave("CAVE");
  Cave->SetGeometryFileName("cave_vacuum.geo");
  //Cave->SetGeometryFileName("cave.geo");
  run->AddModule(Cave);
  
 // --------------------------------------------------------------------

  // -----   Create PrimaryGenerator   --------------------------------------
  FairPrimaryGenerator* primGen = new FairPrimaryGenerator();
  primGen->SetTarget(-15, 0.01);

	ChnsJamGenerator* jamGen1 = new ChnsJamGenerator(infilelist.Data());
	//jamGen1->ChooseParticle(1010010030);
	primGen->AddGenerator(jamGen1);

	run->SetGenerator(primGen);
// ------------------------------------------------------------------------
 
  //---Store the visualiztion info of the tracks, this make the output file very large!!
  //--- Use it only to display but not for production!
  run->SetStoreTraj(0);
  

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
	 //fastSim->AddDetector("EmcBarrel","efficiency=1.0 aPar=0.02 bPar=0.02");

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

