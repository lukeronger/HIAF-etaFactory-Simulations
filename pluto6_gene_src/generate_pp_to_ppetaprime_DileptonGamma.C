//TITLE <b>Setting up reactions:</b> Use the one-liner parser to produce eta Dalitz events

{
    double BeamEnergy = 3.5;//1.8; //// 2;  /// 3.5;
    long Nevents = 1000000;


    int RandomNO = 2023;
    PUtils::SetSeed(RandomNO); //this is to have a fixed SEED. By default, the systime is used....

    TString inputstr = Form("_T1 = %lg", BeamEnergy);
    TString filename = Form("pp_to_ppetaprime_DileptonGamma_%lgGeV_Random%ld", BeamEnergy, RandomNO);

    //makeDistributionManager()->Disable("pp_eta_pp_align");
    //makeDistributionManager()->Disable("pp_eta_prod_angle");
    PReaction my_reaction(inputstr, "p", "p", "p p eta' [dimuon g]", filename, 1, 0, 0, 0);
    //PReaction my_reaction(inputstr, "p", "p", "p p eta' [e+ e- g]", filename, 1, 0, 0, 0);
    //PReaction my_reaction(inputstr, "p", "p", "p p eta'", filename, 1, 0, 0, 0);
    //_T1 is the beam kinetic energy
    //one can use _P1 for the beam momentum
    //and _T2, _P2 in addition for collider experiments (separated by ';')


    my_reaction.Print();   //The "Print()" statement is optional
    my_reaction.Loop(Nevents);
}
