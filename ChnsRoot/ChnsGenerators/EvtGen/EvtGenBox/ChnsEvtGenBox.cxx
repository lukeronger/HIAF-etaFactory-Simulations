// -------------------------------------------------------------------------
// -----                ChnsEvtGenBox source file                  -----
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

#include "ChnsEvtGenBox.h"

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

#include <TDatabasePDG.h>
#include <TParticlePDG.h>

#include <iomanip>
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
ChnsEvtGenBox::ChnsEvtGenBox() {
  SetName("ChnsEvtGenBox");
  fStoreTree=false;
  verbose=0;
}
// ------------------------------------------------------------------------


void ChnsEvtGenBox::SetXYZ(Double32_t x, Double32_t y, Double32_t z) { SetVertex(x, y, z, 0, 0, 0, kBox); std::cout<<"=========   "<<x<<" "<<y<<"    ---  "<< fX<<"  "<<std::endl;}
void ChnsEvtGenBox::SetBoxXYZ(Double32_t x1, Double32_t y1, Double32_t x2, Double32_t y2, Double32_t z)
{
	Double_t X1 = TMath::Min(x1, x2);
	Double_t X2 = TMath::Max(x1, x2);
	Double_t Y1 = TMath::Min(y1, y2);
	Double_t Y2 = TMath::Max(y1, y2);
	Double_t dX = 0.5 * (X2 - X1);
	Double_t dY = 0.5 * (Y2 - Y1);
	Double_t x = 0.5 * (X1 + X2);
	Double_t y = 0.5 * (Y1 + Y2);
	SetVertex(x, y, z, dX, dY, 0, kBox);
}


// -----   Standard constructor   -----------------------------------------
ChnsEvtGenBox::ChnsEvtGenBox(TString particle,TString decfile,Int_t Multi,Long_t Seed,TString defaultDECAY,TString defaultPDL,Double_t ATarg) {
  ChnsEvtGenBox();

  cout << "<I> ChnsEvtGenBox"<<endl;
  cout << "<I> Particle: "<<particle<<endl;
  cout << "<I> decfile: "<<decfile<<endl;
  TString work = getenv("VMCWORKDIR");
  if (defaultDECAY=="") defaultDECAY = work + "/ChnsGenerators/EvtGen/EvtGen/Private/DECAY.DEC";
  if (defaultPDL=="") defaultPDL = work + "/ChnsGenerators/EvtGen/EvtGen/Private/evt.pdl";

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

  fMulti = Multi;

}
// ------------------------------------------------------------------------

// -----   Destructor   ---------------------------------------------------
ChnsEvtGenBox::~ChnsEvtGenBox() {

}
// ------------------------------------------------------------------------

Bool_t ChnsEvtGenBox::Init(){

	return kTRUE;

}

// -----   Public method ReadEvent   --------------------------------------
Bool_t ChnsEvtGenBox::ReadEvent(FairPrimaryGenerator* primGen) {
  static Int_t evtnr=0;
  // Loop to create nEvents, starting from an Upsilon(4S)
  // Set up the parent particle
  EvtParticle *parent;

//  GenerateEventParameters();

  Double32_t pabs = 0, phi, pt = 0, theta = 0, eta, y, mt, px, py, pz = 0;
  phi = gRandom->Uniform(fPhiMin, fPhiMax) * TMath::DegToRad();

  for(Int_t k = 0; k < fMulti; k++){

	  if (fPRangeIsSet) {
		  pabs = gRandom->Uniform(fPMin, fPMax);
	  } else if (fPtRangeIsSet) {
		  pt = gRandom->Uniform(fPtMin, fPtMax);
	  }

	  if (fThetaRangeIsSet) {
		  if (fCosThetaIsSet)
			  theta = acos(gRandom->Uniform(cos(fThetaMin * TMath::DegToRad()), cos(fThetaMax * TMath::DegToRad())));
		  else {
			  theta = gRandom->Uniform(fThetaMin, fThetaMax) * TMath::DegToRad();
		  }
	  } else if (fEtaRangeIsSet) {
		  eta = gRandom->Uniform(fEtaMin, fEtaMax);
		  theta = 2 * TMath::ATan(TMath::Exp(-eta));
	  } else if (fYRangeIsSet) {
		  y = gRandom->Uniform(fYMin, fYMax);
		  mt = TMath::Sqrt(fMass * fMass + pt * pt);
		  pz = mt * TMath::SinH(y);
	  }

	  if (fThetaRangeIsSet || fEtaRangeIsSet) {
		  if (fPRangeIsSet) {
			  pz = pabs * TMath::Cos(theta);
			  pt = pabs * TMath::Sin(theta);
		  } else if (fPtRangeIsSet) {
			  pz = pt / TMath::Tan(theta);
		  }
	  }

	  px = pt * TMath::Cos(phi);
	  py = pt * TMath::Sin(phi);


	  fEnergy = sqrt(px*px + py*py + pz*pz + fMass*fMass);
	  //cout<<"Mother particle "<<k<<" mom : "<<px<<" "<<py<<" "<<pz<<" "<<fEnergy<<endl;



	  //EvtVector4R pInit(fEnergy,  0.0000, -0.0000,  fMomentum);
	  EvtVector4R pInit(fEnergy,  px, py, pz);
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
		  cout << "ChnsEvtGenBox::ReadEvent "<<evtnr <<" "<<fEnergy<<" "<<fMomentum << endl;
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
	  Double_t fX0, fY0, fZ0, fT;
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
			  fX0 = fX + vxyz.get(1)/10.; // mm -> cm conversion
			  fY0 = fY + vxyz.get(2)/10.; // mm -> cm conversion
			  fZ0 = fZ + vxyz.get(3)/10.; // mm -> cm conversion
			  fE=pxyz.get(0);
			  Px=pxyz.get(1);
			  Py=pxyz.get(2);
			  Pz=pxyz.get(3);

			  if(plotflag) printf("- I -: new particle %d at: %f, %f, %f (%f)-> %f %f %f (%f) ID %d ##Daughters %d %d Mothers %d %d\n", i,
					  fX0, fY0, fZ0, fT,Px, Py, Pz, fE, Id, nFD, nLD,evtstdhep.getFirstMother(i),evtstdhep.getLastMother(i));
			  if(fStoreTree){
				  primGen->AddTrack(Id, Px, Py, Pz, fX0, fY0, fZ0, evtstdhep.getFirstMother(i),(nFD==-1 && nLD==-1),fE,fT);
			  }else{
				  primGen->AddTrack(Id, Px, Py, Pz, fX0, fY0, fZ0,-1,true,fE,fT);// default -1, true
			  }

			  if (verbose>1) cout<<setprecision(6)<<"ChnsEvtGenBox: Pid "<<Id<<"  pos(cm): "<<fX0<<"  "<<fY0<<"  "<<fZ0<<"  mom(GeV): "<<Px<<" "<<Py<<" "<<Pz<<endl;
		  }
	  }
	  if(plotflag) cout <<"==== compare end ==="<<endl;

	  parent->deleteTree();  
  }

  evtnr++;

  return kTRUE;

}
// ------------------------------------------------------------------------

ClassImp(ChnsEvtGenBox)
