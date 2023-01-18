void eventDisplay_Eicc()
{
    //-----User Settings:-----------------------------------------------
    TString InputFile = "test.root";
    TString ParFile = "params.root";
    TString OutFile = "tst.root";

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
    FairMCTracks *Track = new FairMCTracks("MCTracks", kGreen);

    FairMCPointDraw *MvdPoints =          new FairMCPointDraw ("EiccMvdPoint", kRed, kFullSquare);
    FairMCPointDraw *EmcPoints =          new FairMCPointDraw ("EiccEmcPoint", kBlue, kFullSquare);
    FairMCPointDraw *TofPoints =          new FairMCPointDraw ("EiccTofPoint", kBlue, kFullSquare);

    fMan->AddTask(Track);
    fMan->AddTask(MvdPoints);
    fMan->AddTask(EmcPoints);
    fMan->AddTask(TofPoints);
    //  fMan->AddTask(TorinoDetectorPoints);

    fMan->Init();

    gGeoManager->SetVisLevel(5);
    fRun->Run(10);

fMan->GotoEvent(5);
}
