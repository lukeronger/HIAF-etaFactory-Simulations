void run_sim_EvtGen(Int_t nEvents = 100, TString mcEngine = "TGeant4", Bool_t isMT = false)
{

    // Output file name
    TString outFile = "test.root";

    // Parameter file name
    TString parFile = "params.root";

    Bool_t UseEvtGen            =kFALSE;
    Bool_t UseEvtGenBox         =kTRUE;
    Bool_t UseEvtGenDirect      =kFALSE;
    Bool_t UseDpm               =kFALSE;
    Bool_t UseFtf               =kFALSE;
    Bool_t UseBoxGenerator      =kFALSE;
    Bool_t UseAsciiGen          =kFALSE;



    // -----   Timer   --------------------------------------------------------
    TStopwatch timer;
    timer.Start();
    // ------------------------------------------------------------------------

    // -----   Create simulation run   ----------------------------------------
    FairRunSim* run = new FairRunSim();
    run->SetName(mcEngine);                        // Transport engine
    run->SetSink(new FairRootFileSink(outFile));   // Output file
    run->SetIsMT(isMT);
    FairRuntimeDb* rtdb = run->GetRuntimeDb();
    // ------------------------------------------------------------------------

    // -----   Create media   -------------------------------------------------
    run->SetMaterials("media.geo");   // Materials
    // ------------------------------------------------------------------------

    cout<<"set materials... yutie"<<endl;
    // -----   Create geometry   ----------------------------------------------

    FairModule* cave = new ChnsCave("CAVE");
    cave->SetGeometryFileName("cave.geo");
    run->AddModule(cave);

    FairModule* magnet = new ChnsMagnet("Magnet");
    magnet->SetGeometryFileName("FullSuperconductingSolenoid_v831_Panda.root");
    //run->AddModule(magnet);

    FairModule* pipe = new ChnsPipe("Pipe");
    //run->AddModule(pipe);

    FairDetector* emc = new ChnsEmc("ChnsEmc", kTRUE);
    //run->AddModule(emc);

    FairDetector* mvd = new ChnsMvd("ChnsMvd", kTRUE);
    run->AddModule(mvd);

    // ------------------------------------------------------------------------

    // -----   Magnetic field   -------------------------------------------
    // Constant Field
    ChnsConstField* fMagField = new ChnsConstField();
    fMagField->SetField(0., 0., 15.);                             // values are in kG
    fMagField->SetFieldRegion(-70, 70, -70, 70, -200, 200);   // values are in cm
                                                                  //  (xmin,xmax,ymin,ymax,zmin,zmax)
    run->SetField(fMagField);
    // --------------------------------------------------------------------

    // -----   Create PrimaryGenerator   --------------------------------------
    FairPrimaryGenerator* primGen = new FairPrimaryGenerator();

    

    if(UseBoxGenerator){
	    // Add a box generator also to the run
	    FairBoxGenerator* boxGen = new FairBoxGenerator(13, 1);   // 13 = muon; 1 = multipl.
	    boxGen->SetPRange(0, 15.);                                // GeV/c
	    boxGen->SetPhiRange(0., 360.);                            // Azimuth angle range [degree]
	    boxGen->SetThetaRange(0., 180.);                           // Polar angle in lab system range [degree]
	    boxGen->SetXYZ(0., 0., 0.);                               // cm
	    primGen->AddGenerator(boxGen);
    }
    if(UseEvtGen){
	    TString  EvtInput =gSystem->Getenv("VMCWORKDIR");
	    EvtInput+="/macro/psi2s_jpsi2pi_1k.evt";
	    cout<<EvtInput<<endl;
	    FairEvtGenGenerator* evtGen = new FairEvtGenGenerator(EvtInput.Data());
	    primGen->AddGenerator(evtGen);
    }
    if(UseEvtGenBox){
            TString  EvtInput =gSystem->Getenv("VMCWORKDIR");
            EvtInput+="/macro/D0_EvtGen.dec";
            ChnsEvtGenBox *EvtGen = new ChnsEvtGenBox("D0", EvtInput.Data(), 1);
	    EvtGen->SetPRange(0.1, 2);
	    EvtGen->SetPhiRange(0., 360.);                            // Azimuth angle range [degree]
            EvtGen->SetThetaRange(10., 170.);                           // Polar angle in lab system range [degree]
            EvtGen->SetXYZ(0., 0., 0.);
	    EvtGen->SetMass(1.8648400e+00);
            EvtGen->SetStoreTree(kFALSE);
            primGen->AddGenerator(EvtGen);
  }
    if(UseEvtGenDirect){
	    TString  EvtInput =gSystem->Getenv("VMCWORKDIR");
	    EvtInput+="/macro/psi2s_Jpsi2pi_Jpsi_mumu.dec";
	    //EvtInput+="/macro/D0_EvtGen.dec";
	    ChnsEvtGenDirect *EvtGen = new ChnsEvtGenDirect("epSystem", EvtInput.Data(), 2.0);
	    EvtGen->SetStoreTree(kFALSE);
	    primGen->AddGenerator(EvtGen);
  }


    run->SetGenerator(primGen);
    // ------------------------------------------------------------------------

    //---Store the visualiztion info of the tracks, this make the output file very large!!
    //--- Use it only to display but not for production!
    run->SetStoreTraj(kTRUE);

    // -----   Initialize simulation run   ------------------------------------
    run->Init();
    // ------------------------------------------------------------------------

    // -----   Runtime database   ---------------------------------------------

    Bool_t kParameterMerged = kTRUE;
    FairParRootFileIo* parOut = new FairParRootFileIo(kParameterMerged);
    parOut->open(parFile.Data());
    rtdb->setOutput(parOut);
    rtdb->saveOutput();
    rtdb->print();
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
