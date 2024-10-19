void eventDisplay()
{
    //-----User Settings:-----------------------------------------------
    TString InputFile = "test.root";
	//TString InputFile = "/data2/ytian/barrel_run/test_e_1G_40-140_magnet.root";
    TString ParFile = "params.root";
    TString OutFile = "tst.root";
	
	//gGeoManager->SetVisLevel(5); // not work here

    // -----   Reconstruction run   -------------------------------------------
    FairRunAna *fRun = new FairRunAna();
    FairFileSource *fFileSource = new FairFileSource(InputFile);
    fRun->SetSource(fFileSource);
    fRun->SetSink(new FairRootFileSink(OutFile.Data()));

    FairRuntimeDb *rtdb = fRun->GetRuntimeDb();
    FairParRootFileIo *parInput1 = new FairParRootFileIo();
    parInput1->open(ParFile.Data());
    rtdb->setFirstInput(parInput1);

    FairEventManager *fMan = new FairEventManager();

    //----------------------Traks and points -------------------------------------
    FairMCTracks *Track = new FairMCTracks("Monte-Carlo Tracks");
    //  FairMCPointDraw *TorinoDetectorPoints = new FairMCPointDraw("FairTestDetectorPoint", kRed, kFullSquare);

    fMan->AddTask(Track);
    //  fMan->AddTask(TorinoDetectorPoints);

    fMan->Init();
}
