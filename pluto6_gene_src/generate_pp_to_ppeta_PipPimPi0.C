//TITLE <b>Setting up reactions:</b> Use the one-liner parser to produce eta Dalitz events

{

    double BeamEnergy = 1.8;    /// 3; ///1.8;   // 20; /// 3.5;
    long Nevents = 10000000;



    PUtils::SetSeed(2002); //this is to have a fixed SEED. By default, the systime is used....

    TString inputstr = Form("_T1 = %lg", BeamEnergy);
    TString filename = Form("../../HIAF-etaFactory-Simulations-localData/pp_to_ppeta_PipPimPi0_%lgGeV_v2", BeamEnergy);

    //makeDistributionManager()->Disable("pp_eta_pp_align");
    //makeDistributionManager()->Disable("pp_eta_prod_angle");
    //cout<<inputstr<<endl;
    //cout<<filename<<endl;
    PReaction my_reaction(inputstr, "p", "p", "p p eta [pi+ pi- pi0 [g g]]", filename, 1, 0, 0, 0);
    //_T1 is the beam kinetic energy
    //one can use _P1 for the beam momentum
    //and _T2, _P2 in addition for collider experiments (separated by ';')


    my_reaction.Print();   //The "Print()" statement is optional
    my_reaction.Loop(Nevents);

}
