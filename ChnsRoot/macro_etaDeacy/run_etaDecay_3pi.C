/** Macro for running fast simulation it will only fill the 
*   ChnsData without any transport(Y. Liang)
*/


//int run_etaDecay_3pi(int nevts=1000000, int seed_num = 2023)
int run_etaDecay_3pi(int nevts=10000000, int seed_num = 2023)
{
  TString input_file = "../../../HIAF-etaFactory-Simulations-localData/pluto6-data/pp_to_ppeta_PipPimPi0_1.8GeV_Random2023.root.evt";

  TStopwatch timer;
  timer.Start();
  gDebug=0;
  // Load basic libraries
  //gROOT->LoadMacro("$VMCWORKDIR/gconfig/basiclibs.C");
  //basiclibs();
  // Load this example libraries
  TString outfile;
  if (outfile=="") {
	outfile="../../../HIAF-etaFactory-Simulations-localData/ChnsRoot-data/run_fsim_EvtGen_HIAFeta_"; //1.root";
	outfile+=1.8;
	outfile+="GeV_";
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



    // Create and Set Event Generator
    //-------------------------------

  Bool_t UseEvtGen            = kTRUE;

  FairPrimaryGenerator* primGen = new FairPrimaryGenerator();
  run->SetGenerator(primGen);

/*
  FairBoxGenerator *boxGen0=new FairBoxGenerator();
  boxGen0->SetMultiplicity(mult);
  boxGen0->SetPDGType(11);
  boxGen0->SetThetaRange(5,178);
  boxGen0->SetPhiRange(0, 360);
  boxGen0->SetPRange(0.3, 15);
  primGen->AddGenerator(boxGen0);

  FairBoxGenerator *boxGen1=new FairBoxGenerator();
  boxGen1->SetMultiplicity(mult);
  boxGen1->SetPDGType(abslund);  
  boxGen1->SetThetaRange(5,178);
  boxGen1->SetPhiRange(0, 360);
  boxGen1->SetPRange(0.3, 15);
  primGen->AddGenerator(boxGen1);

  FairBoxGenerator *boxGen2=new FairBoxGenerator();
  boxGen2->SetMultiplicity(mult);
  boxGen2->SetPDGType(321);  
  boxGen2->SetThetaRange(5,90);
  boxGen2->SetPhiRange(0, 360);
  boxGen2->SetPRange(1.0,1.01);
  primGen->AddGenerator(boxGen2);

  FairBoxGenerator *boxGen3=new FairBoxGenerator();
  boxGen3->SetMultiplicity(mult);
  boxGen3->SetPDGType(2212);
  boxGen3->SetThetaRange(5,178);
  boxGen3->SetPhiRange(0, 360);
  boxGen3->SetPRange(.3,15);
  primGen->AddGenerator(boxGen3);

  FairBoxGenerator *boxGen4=new FairBoxGenerator();
  boxGen4->SetMultiplicity(mult);
  boxGen4->SetPDGType(13);
  boxGen4->SetThetaRange(5,178);
  boxGen4->SetPhiRange(0, 360);
  boxGen4->SetPRange(.3,15);
  primGen->AddGenerator(boxGen4);
*/
  if(UseEvtGen){
    FairEvtGenGenerator* evtGen = new FairEvtGenGenerator(input_file);
    primGen->AddGenerator(evtGen);
  }
  
  primGen->DoTracking(kFALSE);

  //Setup the Fast Simulation Task
  //-----------------------------
  ChnsFastSim* fastSim = new ChnsFastSim();
  
  //increasing verbosity increases the amount of console output (mainly for debugging)
  fastSim->SetVerbosity(0);  

  //enable the producting of parametrized neutral (hadronic) split offs
  if (soff) 
    fastSim->EnableSplitoffs("../../fsim/splitpars.dat");

  //Tracking, Vertexing, dE/dx
  fastSim->AddDetector("Tpc", "efficiency=1.0"); 
  //PID detectors
  fastSim->AddDetector("Tof","efficiency=1.0");
  //EM Calorimeters (aPar and bPar for dE should be set: CsI(aPar = 0.0161, bPar = 0.0152), lead glass(aPar=0.0279, bPar=0.05567)) 
  fastSim->AddDetector("EmcBarrel","efficiency=1.0 aPar=0.02 bPar=0.02");

/*
  //EM Calorimeters w/ default parameters (don't have to be set, just to list the available parameters)
  //fastSim->AddDetector("EmcBarrel","thtMin=20.0 thtMax=140.0 efficiency=1.0 aPar=0.02 bPar=0.02 cPar=0.02 xtalDim=0.02 Emin=0.03 barrelRadius=0.9 resFactor=0.25");
  fastSim->AddDetector("EmcFwCap", "thtMin=5.0 thtMax=22.0 efficiency=1.0 aPar=0.03 bPar=0.03 cPar=0.03 xtalDim=0.02 Emin=0.03 dist=3.5 resFactor=0.25");
  //fastSim->AddDetector("EmcBwCap", "thtMin=135.0 thtMax=160.0 efficiency=1.0 aPar=0.02 bPar=0.02 cPar=0.02 xtalDim=0.02 Emin=0.03 dist=2 resFactor=0.25");
  fastSim->AddDetector("EmcFS",    "thtMin=158 thtMax=178.0 efficiency=1.0 aPar=0.01 bPar=0.01 xtalDim=0.1 Emin=0.03 dist=2.0 resFactor=0.25");

  //Tracking, Vertexing, dE/dx
  fastSim->AddDetector("Mvd",  "thtMin=0.0 thtMax=180.0 efficiency=1.0 pmin=0.0 vtxRes=0.0001 pRes=0.1 phiRes=0.01 thetaRes=0.01 dEdxRes=0.25");
//  fastSim->AddDetector("Stt", "thtMin=7.765 thtMax=169.44 efficiency=1.0 pmin=0.1 n=11 sigXY=0.00015 Bfield=2.0 Lpath=0.27 X0=0.0 sigTht=0.0006 dEdxRes=0.07");
  fastSim->AddDetector("Tpc", "thtMin=15 thtMax=160 efficiency=1.0 pmin=0.1 n=30 sigXY=0.00015 Bfield=1.5 Lpath=0.6 X0=0.02 sigTht=0.0006 dEdxRes=0.07");  //X0 is defined at the number of radiation length:  2% for tracking detector used here
  fastSim->AddDetector("GemFwCap", "thtMin=2 thtMax=15 efficiency=1.0 pmin=0.1 n=11 sigXY=0.00015 Bfield=2.0 Lpath=0.27 X0=0.02 sigTht=0.0006 dEdxRes=0.20");
  fastSim->AddDetector("GemBwCap", "thtMin=160 thtMax=178 efficiency=1.0 pmin=0.1 n=11 sigXY=0.00015 Bfield=2.0 Lpath=0.27 X0=0.02 sigTht=0.0006 dEdxRes=0.20");
  //PID detectors
  fastSim->AddDetector("DrcBarrel","thtMin=20.0 thtMax=140.0 pmin=0.0 dthtc=0.003 nPhotMin=1 nRefrac=1.47 Bfield=1.5 effNPhotons=0.15 rBarrel=0.78 dSlab=0.017");
  fastSim->AddDetector("DrcDisc","thtMin=135.0 thtMax=175.0 pmin=0.0 dthtc=0.003 nPhotMin=1 nRefrac=1.47 Bfield=1.5 effNPhotons=0.15 dDisc=0.017");
  fastSim->AddDetector("Rich","angleMin=5.0 angleMax=25.0 efficiency=1.0 pmin=0.0 dthtc=0.002 nPhotMin=1 nRefrac=1.02 Bfield=1.5 effNPhotons=0.15 dRich=0.05");
  fastSim->AddDetector("Tof","thtMin=20.0 thtMax=140.0 efficiency=1.0 pmin=0.0 Bfield=1.5 rBarrel=0.78 dSlab=0.01 dp=0.01 dt=20");
  fastSim->AddDetector("TofBwCap","thtMin=135.0 thtMax=175.0 efficiency=1.0 pmin=0.0 Bfield=1.5 distToZero=1.5 dSlab=0.01 dp=0.01 dt=20");
  fastSim->AddDetector("TofFwCap","thtMin=5.0 thtMax=25.0 efficiency=1.0 pmin=0.0 Bfield=1.5 distToZero=3.0 dSlab=0.01 dp=0.01 dt=20");
*/
  
  run->AddTask(fastSim);
 
  run->Init();

  if (nevts==0) nevts=1000;
  run->Run(nevts);		
  
  timer.Stop();
  Double_t rtime = timer.RealTime();
  Double_t ctime = timer.CpuTime();
  printf("RealTime=%f seconds, CpuTime=%f seconds\n",rtime,ctime);
  return 0;
}  
  
