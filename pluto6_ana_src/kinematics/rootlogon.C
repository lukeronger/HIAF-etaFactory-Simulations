{

    printf("\n");
    if (gSystem->Load("libProof.so")!=0) {
	printf("Shared library libProof.so could not load\n");
    }
    if (gSystem->Load("libTreePlayer.so")!=0) {
	printf("Shared library libTreePlayer.so could not load\n");
    }
    if (gSystem->Load("libPhysics.so")!=0) {
	printf("Shared library libPhysics.so could not load\n");
    }
    
    /*   uncomment to use Pythia
	 
	 if (gSystem->Load("libPythia6")==0) {
	 printf("Shared library libPythia6.so loaded\n");
	 } else {
	 printf("Unable to load libPythia6.so\n");
	 }
	 
	 if (gSystem->Load("libEG")==0) {
	 printf("Shared library libEG.so loaded\n");
	 } else {
	 printf("Unable to load libEG.so\n");
	 }
	 
	 if (gSystem->Load("libEGPythia6")==0) {
	 printf("Shared library libEGPythia6.so loaded\n");
	 } else {
	 printf("Unable to load libEGPythia6.so\n");
	 } 
	 
    */
    
    //Make sure that current dir has higher priority, otherwise it tends
    //to load the FAIRROOT version
    gSystem->SetDynamicPath(TString(".:")+TString(gSystem->GetDynamicPath()));

    
    if (gSystem->Load("/data2/rwang/pluto_v6.00/libPluto.so")==0) {
	printf("Shared library Pluto.so loaded\n");
    } else {
	printf("Unable to load Pluto.so\n");
    } 


}







