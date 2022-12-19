{
    double BeamEnergy = 1.8; //// 2;  /// 3.5;
    long Nevents = 500000;

    PUtils::SetSeed(123); //this is to have a fixed SEED. By default, the systime is used....
    TString inputstr = Form("_T1 = %lg", BeamEnergy);
    TString filename = Form("../hiaf_MCdata/pp_to_ppeta_cocktail_%lgGeV", BeamEnergy);


	PDecayChannel *c;
	PDecayManager *pdm = new PDecayManager;
	PParticle *beam = new PParticle(14, BeamEnergy);
	PParticle *target = new PParticle(14);
	PParticle *s = new PParticle(*beam+*target);
	c = new PDecayChannel;
	c->AddChannel(0.13,"p","p","eta");

	PDecayChannel *c_etadecay = new PDecayChannel;
	c_etadecay->AddChannel(0.3936, "g", "g");
	c_etadecay->AddChannel(0.3257, "pi0", "pi0", "pi0");
	c_etadecay->AddChannel(0.2302, "pi+", "pi-", "pi0");
	c_etadecay->AddChannel(0.0428, "pi+", "pi-", "g");
	c_etadecay->AddChannel(0.0069, "dilepton", "g");
	//c_etadecay->AddChannel(0.000268, "pi+", "pi-", "dilepton");
	c_etadecay->AddChannel(0.000268, "pi+", "pi-", "e+", "e-");
	c_etadecay->AddChannel(2.4e-5, "dilepton", "dilepton");
	//c_etadecay->AddChannel(2.4e-5, "e+", "e-", "e+", "e-");
	pdm->AddChannel("eta", c_etadecay);

	PDecayChannel *c_pi0 = new PDecayChannel;
	c_pi0->AddChannel(1, "g", "g");
	pdm->AddChannel("pi0", c_pi0);

	PDecayChannel *c_dilepton = new PDecayChannel;
	c_dilepton->AddChannel(1, "e+", "e-");
	pdm->AddChannel("dilepton", c_dilepton);

	
	pdm->InitReaction(s, c);
	int n = pdm->Loop(Nevents, 1, filename, 1, 0, 0, 0, 1);





}
