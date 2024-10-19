// -------------------------------------------------------------------------
// -----                ChnsEvtGenDirect source file                  -----
// -----                                                          -----
// -------------------------------------------------------------------------


#include <iostream>
#include "TClonesArray.h"
#include "TFile.h"
#include "TLorentzVector.h"
#include "TTree.h"
#include "TMath.h"
#include "TVector3.h"
#include "TParticle.h"
#include "TRandom.h"
#include "TRandom3.h"

#include "FairPrimaryGenerator.h"

#include "ChnsEvtGenDirect.h"

#include "EvtGen/EvtGen.hh"

#include "EvtGenBase/EvtPatches.hh"
#include "EvtGenBase/EvtParticleFactory.hh"
#include "EvtGenBase/EvtStdHep.hh"
#include "EvtGenBase/EvtParticle.hh"
#include "EvtGenBase/EvtRandom.hh"
#include "EvtGenBase/EvtRandomEngine.hh"
#include "EvtGenBase/EvtReport.hh"
#include "EvtGenBase/EvtHepMCEvent.hh"

/// use of external generators
#if EVTGEN_EXTERNAL
#include "EvtGenExternal/EvtExternalGenList.hh"
#include "EvtGenBase/EvtAbsRadCorr.hh"
#include "EvtGenBase/EvtDecayBase.hh"
#endif

#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

using std::endl;
using std::ofstream;
using std::cout;

//define class for generating random nubers
class EvtRootRandomEngine:public EvtRandomEngine{
public:
  EvtRootRandomEngine(int s=0) {seed=s;}
  double random();
  int seed;
};

double EvtRootRandomEngine::random(){
  static TRandom3 randengine(seed);
  return randengine.Rndm();
}


// -----   Default constructor   ------------------------------------------
ChnsEvtGenDirect::ChnsEvtGenDirect() {
  SetName("ChnsEvtGenDirect");
  fStoreTree=false;
  verbose=0;
}
// ------------------------------------------------------------------------

// -----   Standard constructor   -----------------------------------------
ChnsEvtGenDirect::ChnsEvtGenDirect(TString particle,TString decfile,Double_t Mom,Long_t Seed,TString defaultDECAY,TString defaultPDL,Double_t ATarg) {
  ChnsEvtGenDirect();

  cout << "<I> ChnsEvtGenDirect"<<endl;
  cout << "<I> Particle: "<<particle<<endl;
  cout << "<I> decfile: "<<decfile<<endl;
  if(Mom>0) cout << "<I> e-Momentum: "<<Mom<<endl;
  if(Mom==0) cout << "<I> Momentum: "<<Mom<<endl;
  if(Mom<0) cout << "<I> CMS energy: "<<Mom<<endl;
  cout << "<I> Rnd Seed: "<<Seed<<endl;
  TString work = getenv("VMCWORKDIR");
  if (defaultDECAY=="") defaultDECAY = work + "/ChnsGenerators/EvtGen/EvtGen/Private/DECAY.DEC";
  if (defaultPDL=="") defaultPDL = work + "/ChnsGenerators/EvtGen/EvtGen/Private/evt.pdl";

  if (particle.Contains("eASystem") && (ATarg<3.||ATarg>238.))
    {
      cerr <<"******  FATAL ERROR: nuclear target mass number MUST be between 3 and 238! ******"<<endl;
      exit(0);
    }



  //Initialize the generator - read in the decay table and particle properties
  
  EvtRandomEngine* myRandomEngine=0;

  // Make sure that the seed is always set if default value (-1) is used, JGM, August 2011
  if (Seed<0) 
    {
      Seed = gRandom->GetSeed();
      cout << "<I> Rnd Seed changed to " << Seed << endl;
    } 
  myRandomEngine=new EvtRootRandomEngine(Seed);


   // Set up the default external generator list: Photos, Pythia and/or Tauola ONLY if available
#if EVTGEN_EXTERNAL
   EvtExternalGenList genList;
   EvtAbsRadCorr* radCorrEngine = genList.getPhotosModel();
   std::list<EvtDecayBase*> extraModels = genList.getListOfModels();

   // Create the EvtGen generator object
   myGenerator=new EvtGen(defaultDECAY,defaultPDL,myRandomEngine,
                     radCorrEngine, &extraModels);
#else
   //If you don't want to use external generators, use the following:
  myGenerator=new EvtGen(defaultDECAY,defaultPDL,myRandomEngine);
#endif


 // myGenerator=new EvtGen(defaultDECAY,defaultPDL,myRandomEngine);

  //If I wanted a user decay file, I would read it in now.
  if(decfile!="") myGenerator->readUDecay(decfile.Data());

  PART=EvtPDL::getId(std::string(particle.Data()));

  if ( (particle.Contains("ep") || particle.Contains("ed") || particle.Contains("eA")) && Mom==0)
    {
      cerr <<"\033[5m\033[31m -E  ******  FATAL ERROR: <particle> is '" << particle.Data() << "'; MUST give e momentum or cms energy!\033[0m"<<endl;
      exit(0);
    }
 
  double val=-3.0969;
  fMomentum = 0.0;
  fEnergy = 0.0;
  double mp=0.938272;
  double md=1.875613;
  double mu=0.931494;
  double mA=ATarg*mu;

  if ( (particle.Contains("ep") || particle.Contains("ed") || particle.Contains("eA") ) && Mom!=0){
    val=Mom;
  }else{
    if(PART.getId()==-1){
      cerr << "Particle \""<<particle<<"\" is unknown!!!"<<endl<<"Check your Macro for spelling mistake."<<endl;
      exit(0);
    }
    val=-EvtPDL::getMass(PART);
  }
  
  // val is the momentum of the e beam
  if (val>0){  
    fMomentum = val;
    if ( particle.Contains("epSystem") ) fEnergy = mp+sqrt(fMomentum*fMomentum+mp*mp);
    if ( particle.Contains("edSystem") ) fEnergy = md+sqrt(fMomentum*fMomentum+mp*mp);
    if ( particle.Contains("eASystem") ) fEnergy = mA+sqrt(fMomentum*fMomentum+mp*mp);
  }
  else  //val is -E_cm
    {
      val=-val;
      fEnergy = val*val/(2*mp);
      fMomentum = sqrt(fEnergy*fEnergy-val*val);
    }
  
  cout <<"\n############# Generating with following conditions:\n\n";
  cout <<"incident 4-mom : ("<<fEnergy<<", 0, 0, "<<fMomentum<<"), m = "<<sqrt(fEnergy*fEnergy-fMomentum*fMomentum)<<endl;
  cout <<"\n######################\n\n"<<endl;

}
// ------------------------------------------------------------------------

// -----   Destructor   ---------------------------------------------------
ChnsEvtGenDirect::~ChnsEvtGenDirect() {

}
// ------------------------------------------------------------------------

// -----   Public method ReadEvent   --------------------------------------
Bool_t ChnsEvtGenDirect::ReadEvent(FairPrimaryGenerator* primGen) {
  static Int_t evtnr=0;
  // Loop to create nEvents, starting from an Upsilon(4S)
  // Set up the parent particle
  EvtParticle *parent;

  EvtVector4R pInit(fEnergy,  0.0000, -0.0000,  fMomentum);
  parent=EvtParticleFactory::particleFactory(PART,pInit);
  parent->setDiagonalSpinDensity();  


  // Generate the event
  myGenerator->generateDecay(parent);
  // Write out the results

   // we should better use the EvtParticle properties here... and kick the evtstd structure!!!!
  evtstdhep.init();
  parent->makeStdHep(evtstdhep);

  Bool_t plotflag;
  plotflag=false;
  //print out some status info
  if (verbose>1 ||(verbose==1 && (evtnr<10 || ((evtnr+1)%100)==0))){
    cout << "ChnsEvtGenDirect::ReadEvent "<<evtnr <<" "<<fEnergy<<" "<<fMomentum << endl;
    parent->printParticle();
     // Write out the results
    EvtHepMCEvent theEvent;
    theEvent.constructEvent(parent);
    HepMC::GenEvent* genEvent = theEvent.getEvent();
    genEvent->print(std::cout);

//    report(INFO,"EvtGen") << "event Number\t"<< evtnr << evtstdhep << endl;
//     cout << evtnr << "\t" << evtstdhep.getNPart();
//     cout <<evtstdhep<<endl;

    cout <<"==== now compare ==="<<endl;
    plotflag=true;
  }
    
  // Write the output

  Int_t  npart;
  Double_t fX, fY, fZ, fT;
  double Px,Py,Pz, fE; // ,Pm[1000],Wh[1000];
  int Id;
  npart=evtstdhep.getNPart();
  EvtVector4R vxyz,pxyz;
	
  for(Int_t i=0; i<npart; i++){
    Int_t nFD, nLD;
    // add track
    nFD=evtstdhep.getFirstDaughter(i);
    nLD=evtstdhep.getLastDaughter(i);
    if(fStoreTree ||(nFD==-1 && nLD==-1))
      {
	Id=evtstdhep.getStdHepID(i);
	vxyz=evtstdhep.getX4(i);
	pxyz=evtstdhep.getP4(i);
	fT=vxyz.get(0)/(1000*TMath::C());  //mm - > s conversion
	fX=vxyz.get(1)/10.; // mm -> cm conversion
	fY=vxyz.get(2)/10.; // mm -> cm conversion
	fZ=vxyz.get(3)/10.; // mm -> cm conversion
	fE=pxyz.get(0);
	Px=pxyz.get(1);
	Py=pxyz.get(2);
	Pz=pxyz.get(3);
	if(plotflag) printf("- I -: new particle %d at: %f, %f, %f (%f)-> %f %f %f (%f) ID %d ##Daughters %d %d Mothers %d %d\n", i,
    fX, fY, fZ, fT,Px, Py, Pz, fE, Id, nFD, nLD,evtstdhep.getFirstMother(i),evtstdhep.getLastMother(i));
	if(fStoreTree){
	  primGen->AddTrack(Id, Px, Py, Pz, fX, fY, fZ, evtstdhep.getFirstMother(i),(nFD==-1 && nLD==-1),fE,fT);
	}else{
	  primGen->AddTrack(Id, Px, Py, Pz, fX, fY, fZ,-1,true,fE,fT);// default -1, true
	}

	cout<<"==============yutie ChnsEvtGenDirect: Pid "<<Id<<"  pos: "<<fX<<"  "<<fY<<"  "<<fZ<<"  mom "<<Px<<" "<<Py<<" "<<Pz<<endl;
      }
  }
  if(plotflag) cout <<"==== compare end ==="<<endl;

  parent->deleteTree();  

  evtnr++;

  return kTRUE;

}
// ------------------------------------------------------------------------

ClassImp(ChnsEvtGenDirect)
