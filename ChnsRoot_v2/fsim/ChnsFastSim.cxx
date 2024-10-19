/////////////////////////////////////////////////////////////
//
//  FastSim
//
//  Reader for McHit
////
///////////////////////////////////////////////////////////////

//C++ class headers
#include <string>
#include <fstream>

//CBM class headers
#include "FairRootManager.h"
//#include "FairRunAna.h"
#include "FairRuntimeDb.h"
#include "ChnsMCTrack.h"
#include "ChnsStack.h"
#include "FairRun.h"
#include "FairMCEventHeader.h"

#include "ChnsFastSim.h"

//Rho includes
#include "RhoBase/RhoCandidate.h"
//#include "RhoBase/TSimpleVertex.h"
//#include "RhoBase/TRho.h"
#include "ChnsPidCandidate.h"
#include "PidData/ChnsPidCandidate.h"
#include "PidData/ChnsPidProbability.h"
#include "ChnsEventInfo.h"
#include "RhoBase/RhoCandList.h"
//#include "RhoTools/TEventShape.h"
#include "RhoBase/RhoFactory.h"
#include "RhoMassParticleSelector.h"

//ROOT class headers
#include "TClonesArray.h"
#include "TVector3.h"
#include "TMatrixD.h"
#include "TVectorD.h"
#include "TParticle.h"
#include "TRandom3.h"
#include "TDatabasePDG.h"
#include "TParticlePDG.h"
#include "TVirtualMC.h"
#include "TF1.h"

//Fast Sim class headers
#include "ChnsFsmTrack.h"
#include "ChnsFsmResponse.h"
#include "ChnsFsmAbsDet.h"
#include "ChnsFsmDetFactory.h"
#include "ChnsFsmRandom.h"

using std::cout;
using std::endl;
using std::string;
using std::ifstream;


// -----   Default constructor   -------------------------------------------
ChnsFastSim::ChnsFastSim(bool persist) :
FairTask("Chns Fast Simulation") {
  //  fCandidates = new TClonesArray("TParticle");
  fRand=ChnsFsmRandom::Instance();
  fDetFac = new ChnsFsmDetFactory;
  fAddedDets=" ";
  fVb=0;
  fGenSplitOffs=false;
  fMergeNeutralClusters=false;
  fMergeProbPar = 0.389;
  fElectronBrems = false;
  fUseFlatCovMatrix=true;
  fPropagate=false;
  fToStartVtx=false;
  fUseCovMatrix=false;
  fdbPdg = TDatabasePDG::Instance();
  AddDetector("IdealPid");
    
  fInvMassFilter="";
  fInvMassMin=0.;
  fInvMassMax=1000.;
  fInvMassMult=0;
  fChargeConj=false;
  fCombMult=0;
  for (int i=0;i<5;++i) fCombIndex[i]=0;
  for (int i=0;i<6;++i) {fMultMin[i]=0; fMultMax[i]=1000;}
  
  
  fApplyFilter=false;
  fNAccept = 0;

  fPersist = persist;
}
// -------------------------------------------------------------------------

// -----   Destructor   ----------------------------------------------------
ChnsFastSim::~ChnsFastSim() {
  FairRootManager *fManager =FairRootManager::Instance();
  fManager->Write();

  //if (fChargedCandidates) {fChargedCandidates->Delete(); delete fChargedCandidates;}
  //if (fNeutralCandidates) {fNeutralCandidates->Delete(); delete fNeutralCandidates;}
  if (fMcEvent) {fMcEvent->Delete(); delete fMcEvent;}
  if (fMcCandidates) {fMcCandidates->Delete(); delete fMcCandidates;}
  //if (fMicroCandidates) {fMicroCandidates->Delete(); delete fMicroCandidates;}
  if (fPidChargedCand) {fPidChargedCand->Delete(); delete fPidChargedCand;}
  if (fPidNeutralCand) {fPidNeutralCand->Delete(); delete fPidNeutralCand;}

  if (fPidChargedProb) {fPidChargedProb->Delete(); delete fPidChargedProb;}
  if (fPidNeutralProb) {fPidNeutralProb->Delete(); delete fPidNeutralProb;}

  if (fEventInfo) {fEventInfo->Delete(); delete fEventInfo;}

  if (fDetFac) delete fDetFac;
  if (fRand) delete fRand;
}
// -------------------------------------------------------------------------


void ChnsFastSim::Register() {
  //---

  fMcCandidates = new TClonesArray("RhoCandidate");
  FairRootManager::Instance()->Register("ChnsMcTracks","FastSim", fMcCandidates, fPersist);

  fPidChargedCand = new TClonesArray("ChnsPidCandidate");
  FairRootManager::Instance()->Register("PidChargedCand","FastSim", fPidChargedCand, fPersist);

  fPidNeutralCand = new TClonesArray("ChnsPidCandidate");
  FairRootManager::Instance()->Register("PidNeutralCand","FastSim", fPidNeutralCand, fPersist);

  fPidChargedProb = new TClonesArray("ChnsPidProbability");
  FairRootManager::Instance()->Register("PidChargedProbability","FastSim", fPidChargedProb, fPersist);

  fPidNeutralProb = new TClonesArray("ChnsPidProbability");
  FairRootManager::Instance()->Register("PidNeutralProbability","FastSim", fPidNeutralProb, fPersist);

  fEventInfo = new TClonesArray("ChnsEventInfo");
  FairRootManager::Instance()->Register("ChnsEventSummary","FastSim", fEventInfo, fPersist);

  for (FsmAbsDetList::iterator iter=fDetList.begin();iter!=fDetList.end(); iter++)
  {
    ChnsFsmAbsDet *det=*iter;
    //cout<<"ChnsFastSim::Register  "<<det->detName()<<"   doesPid = "<<det->doesPid()<<endl;
    if(!det->doesPid()) continue;
    TString detname = det->detName();
    TString arrayname=detname;
    arrayname+="Probability";
    TClonesArray* tmparray = new TClonesArray("ChnsPidProbability");
    FairRootManager::Instance()->Register(arrayname.Data(),"FastSim", tmparray, fPersist);
    fPidArrayList[detname]=tmparray;
    //std::cout<<"registered pid TCA with name "<<detname.Data()<<std::endl;
  }
}



// -----   Public method Init   --------------------------------------------
InitStatus ChnsFastSim::Init() {

  if (fVb>3) cout << " Inside the Init function****" << endl;
	
	FairRootManager* ioman = FairRootManager::Instance();
	fMcEvent = (FairMCEventHeader*) ioman->GetObject("MCEventHeader.");
	if (!fMcEvent) {
		Warning("Init", "MCEventHeader not fould!");
	}

	
  Register();
  if (fVb)
  {
    cout <<"\n\n******   DETECTOR SETUP SUMMARY    ***************\n\n";
    for (FsmAbsDetList::iterator iter=fDetList.begin();iter!=fDetList.end(); iter++)
    {
      cout<<endl<<"----------------------------"<<endl;
      ChnsFsmAbsDet *det=*iter;
      det->print(std::cout);
    }
    cout <<"\n\n******   DETECTOR SETUP SUMMARY    ***************\n\n";
  }

  evtcnt=0;

  // for the time being, this is the matrix of correlation
  // coefficients, it is later scaled by the track errors
  //d0                 phi0                omega               z0                  dandip
  fRho(0,0)= 1;        fRho(0,1)=-0.9243;  fRho(0,2)= 0.3087;  fRho(0,3)=-0.01743; fRho(0,4)= 0.009165; // d0
  fRho(1,0)=-0.9243;   fRho(1,1)= 1;       fRho(1,2)=-0.4189;  fRho(1,3)=-0.00552; fRho(1,4)=-0.00873;  // phi0
  fRho(2,0)= 0.3087;   fRho(2,1)=-0.4189;  fRho(2,2)= 1;       fRho(2,3)= 0.02094; fRho(2,4)=-0.01742;  // omega
  fRho(3,0)=-0.01743;  fRho(3,1)=-0.00552; fRho(3,2)= 0.02094; fRho(3,3)= 1;       fRho(3,4)=-0.9327;   // z0
  fRho(4,0)= 0.009165; fRho(4,1)=-0.00873; fRho(4,2)=-0.01742; fRho(4,3)=-0.9327;  fRho(4,4)= 1;        // tandip
  // and this is the square root of fRho
  // needed to correlate the track params
  //d0                 phi0                 omega                z0                  dandip
  fEta(0,0)= 1;                                                                                       // d0
  fEta(1,0)=-0.9243;   fEta(1,1)= 0.3817;                                                             // phi0
  fEta(2,0)= 0.3087;   fEta(2,1)=-0.35;     fEta(2,2)= 0.8844;                                        // omega
  fEta(3,0)=-0.01743;  fEta(3,1)=-0.05667;  fEta(3,2)= 0.007335; fEta(3,3)= 0.9982;                   // z0
  fEta(4,0)= 0.009165; fEta(4,1)=-6.781e-4; fEta(4,2)=-0.02316;  fEta(4,3)=-0.9341; fEta(4,4)=0.3562; // tandip

  // parametrization for bremsstrahlung (based on Crystal Ball function tail)
  fBremsEnergy = new TF1("fBremsEnergy","[0]*pow([3]/[4],[3])*exp(-0.5*[4]^2)/pow((x-[1])/[2]+[3]/[4]-[4],[3])");
  fBremsEnergy->SetParameters(1,0.005,0.0311,1.05,1.04);
  fBremsEnergy->SetRange(0.03,0.9); // valid between 3% and 90% energy loss through bremsstrahlung

  // Create and register output array
  cout << "-I- ChnsFastSim: Intialization successfull" << endl;

  return kSUCCESS;
}

void ChnsFastSim::SetParContainers() {

  // Get run and runtime database
  FairRun* run = FairRun::Instance();
  if ( ! run ) Fatal("SetParContainers", "No analysis run");

  FairRuntimeDb* db = run->GetRuntimeDb();
  if ( ! db ) Fatal("SetParContainers", "No runtime database");


}
// -------------------------------------------------------------------------

void ChnsFastSim::SetSeed(unsigned int seed) {
  fRand->SetSeed(seed);
}

// -----   Enable split off parametrization   ------------------------------

bool ChnsFastSim::EnableSplitoffs(std::string fname)
{
  if (fname=="")
  {
    cout <<" -W-  (ChnsFastSim::EnableSplitoffs) - no filename given; no split offs will be produced."<<endl;
    return false;
  }

  /*
  prepare the split off parametrization
  expected in the parameter file:
  - four blocks (mom, phi, tht, multiplicity) with the parametrization structured like
  * <n_i>   <lowlimit>   <uplimit>   <model-string(in ROOT TF1 format)>
  * 5 lines of parameter sets with info for pid=11,13,211,321,2212
  <pid> <p1> <p2> ... <p_n_i>

  for the moment momentum independent
    models:
    momentum     : expo(0)+expo(2) = 4 params
    tht+phi      : gaus(0)+gaus(3) = 6 params
    multiplicity : expo(0)+gaus(2) = 5 params
    */

  ifstream pars(fname.data());

  if ( (pars.rdstate() & ifstream::failbit ) != 0 )
  {
    cout << " -W-  (ChnsFastSim::EnableSplitoffs) -  Error opening '"<<fname<<"'; no split offs will be produced."<<endl;
    return false;
  }


  int i,j,k;
  char tmp[50];

  string model[4];
  int numpars[4];
  double rangeup[4],rangelow[4];
  double curpar;


  //loop over blocks
  for (i=0;i<4;i++)
  {
    pars>>model[i]>>numpars[i]>>rangelow[i]>>rangeup[i];
    if (fVb) cout <<" -I-  (ChnsFastSim::EnableSplitoffs)  split off model #"<<i<<": '"<<model[i]<<"' with "<<numpars[i]<<" params."<<endl;

    //loop over pid
    for (j=0;j<5;j++)
    {
      sprintf(tmp,"f%d%d",j,i);
      fspo[j][i]=new TF1(tmp,model[i].data());

      //loop over params
      pars>>curpar;   // read the dummy PID value
      for (k=0;k<numpars[i];k++)
      {
        pars>>curpar;
        fspo[j][i]->SetParameter(k,curpar);
      }

      fspo[j][i]->SetRange(rangelow[i],rangeup[i]);
      if (fVb) fspo[j][i]->Print();
    }
  }

  if (fVb) cout <<" -I-  (ChnsFastSim::EnableSplitoffs) - Successfully read "<<fname<<endl;

  pars.close();

  fGenSplitOffs=true;

  return true;
}

// -------------------------------------------------------------------------

// -----   Enable track propagation   --------------------------------------

void ChnsFastSim::EnablePropagation(bool propagate, bool tostartvtx, bool usecovmatrix, double tolerance) {
  fPropagate=propagate;
  fToStartVtx=tostartvtx;
  fUseCovMatrix=usecovmatrix;
  fTolerance=tolerance;
}

// -------------------------------------------------------------------------

// -----   Add a detector to the setup   -----------------------------------
bool ChnsFastSim::AddDetector(std::string name, std::string params)
{
  if (name =="")
  {
    cout <<" -W-  (ChnsFastSim::AddDetector) - No name given, no detector added!"<<endl;

  }

  if (fAddedDets.find(" "+name+" ")!=std::string::npos)
  {
    std::cout <<" -W-  (ChnsFastSim::AddDetector) - Detector <"<<name<<"> already appended - skipping!"<<std::endl;
    return false;
  }
  fAddedDets.append(std::string(name+" "));

  ChnsFsmAbsDet *det=0;
  det=fDetFac->create(name,params);
  if (!det) return false;

  fDetList.push_back(det);
  if (fVb>0)  std::cout<<" -I- (ChnsFastSim::AddDetector) - Added detector "<<name<<" with params <"<<params<<">"<<std::endl;
  return true;
}

bool ChnsFastSim::AddDetector(ChnsFsmAbsDet* det)
{
  if (det) {
    fDetList.push_back(det);
    fAddedDets.append(det->detName()+" ");
    if (fVb>0)  std::cout<<" -I- (ChnsFastSim::AddDetector) - Added detector "<<det->detName()<<std::endl;
  }
  return det;
}

void ChnsFastSim::SetMultFilter(TString type, int min, int max)
{ 
  int i=0;
  if (type=="+") i=0;
  else if (type=="-") i=1;
  else if (type=="gam") i=2;
  else if (type=="pi0") i=3;
  else if (type=="ks") i=4;
  else if (type=="eta") i=5;
  else cout <<" WARNING :  Unknown type '"<<type.Data()<< "' for muliplicity filter!"<<endl; 
  
  fMultMin[i] = min;
  fMultMax[i] = max;
}

void ChnsFastSim::copyAndSetMass(RhoCandList &l, RhoCandList &nl, int pdg)
{
  nl.Cleanup();
  for (int i=0;i<l.GetLength();++i)
  {
    RhoCandidate c(*(l[i]));
    c.SetType(pdg);
    nl.Add(&c);
  }
}

void ChnsFastSim::SetInvMassFilter(TString filter, double min, double max, int mult) 
{
  fInvMassFilter=filter; 
  fInvMassMin=min; 
  fInvMassMax=max; 
  fInvMassMult=mult; 
  fApplyFilter=true;
  fCombMult = 0;
  
  TString wk=filter;
  if (wk.EndsWith("cc"))
  {
    fChargeConj = true;
    wk=wk(0,wk.Length()-3);
  }
  wk+=" ";
  
  // chop the configuration string in pieces 
  // coding is: 0+=e+, 1+=mu+, ... , 4+=p+ (& cc), gm=gamma 
  // list indices: 0:e+ 1:e-, 2:mu+, ... 9:p-, 10:gamma, 11:pi0(gg), 12:KS, 13:eta(gg)
  while (wk.Length()>0 && fCombMult<5)
  {
     int delim = wk.Index(" ");
     int idx=0;
     TString tok=wk(0,delim);
     cout <<tok<<" ";
     if (tok=="gam") idx=10;
     else if (tok=="pi0") idx=11;
     else if (tok=="ks") idx=12;
     else if (tok=="eta") idx=13;
     else if (tok.BeginsWith("e")) idx=0;
     else if (tok.BeginsWith("mu")) idx=2;
     else if (tok.BeginsWith("pi")) idx=4;
     else if (tok.BeginsWith("k")) idx=6;
     else if (tok.BeginsWith("p")) idx=8;

     if (tok.EndsWith("-")) idx++;
     
     fCombIndex[fCombMult]=idx;
     fCombMult++;
     
     wk=wk(delim+1,1000);
  }
  cout <<"Inv Mass Filter combines:";
  for (int i=0;i<fCombMult;++i) cout <<fCombIndex[i]<<" ";
  if (fChargeConj) cout << "  with c.c.";
  cout <<endl;
}

int ChnsFastSim::chCon(int i)
{
  int cc=i;
  if (i<10) i%2 ? cc=i-1 : cc=i+1;
  return cc;
}

int ChnsFastSim::acceptFilters(RhoCandList &l)
{
  RhoCandList plus, minus,lsp[14],comb, combsel;
  
  int i,j, nplus, nminus, ngam;
  
  for (i=0;i<l.GetLength();++i)
  {
    if (l[i]->Charge()>0) plus.Add(l[i]);
    else if (l[i]->Charge()<0) minus.Add(l[i]);
    else if (fabs(l[i]->Charge())<1e-6) lsp[10].Add(l[i]);
  }
  
  // apply multiplicity filters

  // positiv particles
  nplus = plus.GetLength();
  if (nplus<fMultMin[0] || nplus>fMultMax[0]) return 1;
  
  // negative particles
  nminus = minus.GetLength();
  if (nminus<fMultMin[1] || nminus>fMultMax[1]) return 2;
  
  // neutrals
  ngam = lsp[10].GetLength();
  if (ngam<fMultMin[2] || ngam>fMultMax[2]) return 3;

  int pdgcodes[10] = {-11, 11, -13, 13, 211, -211, 321, -321, 2212, -2212};
  
  RhoMassParticleSelector msel("msel",(fInvMassMax+fInvMassMin)/2,(fInvMassMax-fInvMassMin));
  RhoMassParticleSelector pi0sel("pi0sel",0.135,0.06);
  RhoMassParticleSelector kssel("kssel",0.4976,0.08);
  RhoMassParticleSelector etasel("msel",0.547,0.08);

  // pi0s
  if (fMultMin[3]>0 || fMultMax[3]<1000) 
  {
    lsp[11].Combine(lsp[10],lsp[10]);
    lsp[11].Select(&pi0sel);
    
    int npi0=lsp[11].GetLength();
    if (npi0<fMultMin[3] || npi0>fMultMax[3]) return 4;
  }
  
  // ks
  if (fMultMin[4]>0 || fMultMax[4]<1000) 
  {
  
    copyAndSetMass(plus,  lsp[4], pdgcodes[4]);
    copyAndSetMass(minus, lsp[5], pdgcodes[5]);
        
    lsp[12].Combine(lsp[4],lsp[5]);
    lsp[12].Select(&kssel);
    
    int nks=lsp[12].GetLength();
    if (nks<fMultMin[4] || nks>fMultMax[4]) return 5;
  }
  
  // etas
  if (fMultMin[5]>0 || fMultMax[5]<1000) 
  {
    lsp[13].Combine(lsp[10],lsp[10]);
    lsp[13].Select(&etasel);
    
    int neta=lsp[13].GetLength();
    if (neta<fMultMin[5] || neta>fMultMax[5]) return 6;
  }
  
  // apply inv mass filter
  // list indices: 0:e+ 1:e-, 2:mu+, ... 9:p-, 10:gamma, 11:pi0(gg), 12:KS, 13:eta(gg)
  if (fInvMassMult>0)
  {
    if (fVb>0) cout <<"Comb mult = "<<fCombMult<<endl;
    for (i=0;i<fCombMult;++i)
    {
      // prepare all needed lists
      int idx = fCombIndex[i];
      int ccidx = chCon(idx);
      
      if (fVb) cout <<"IDX:"<<idx<<"  CCIDX:"<<ccidx<<endl;
      
      // charged particle species
      if (idx<10 && lsp[idx].GetLength()==0)
      {
        if (idx%2) copyAndSetMass(minus,  lsp[idx], pdgcodes[idx]);
        else copyAndSetMass(plus,  lsp[idx], pdgcodes[idx]);
      } 
      
      // if charged conjugation needed, prepare those lists
      if (fChargeConj && ccidx<10 && lsp[ccidx].GetLength()==0)
      {
        if (ccidx%2) copyAndSetMass(minus,  lsp[ccidx], pdgcodes[ccidx]);
        else copyAndSetMass(plus,  lsp[ccidx], pdgcodes[ccidx]);
      } 
      
      // pi0s
      if (idx==11 && lsp[idx].GetLength()==0) 
      {
        lsp[11].Combine(lsp[10],lsp[10]);
        lsp[11].Select(&pi0sel);
      }
      
      // ks
      if (idx==12 && lsp[idx].GetLength()==0) 
      {
        if (lsp[4].GetLength()==0) copyAndSetMass(plus,  lsp[4], pdgcodes[4]);
        if (lsp[5].GetLength()==0) copyAndSetMass(minus, lsp[5], pdgcodes[5]);
        
        lsp[12].Combine(lsp[4],lsp[5]);
        lsp[12].Select(&kssel);
      }
      
      // eta
      if (idx==13 && lsp[idx].GetLength()==0) 
      {
        lsp[13].Combine(lsp[10],lsp[10]);
        lsp[13].Select(&etasel);
      }
    }
    
    int *iar=fCombIndex;
    
    switch (fCombMult)
    {
    case 2: comb.Combine(lsp[iar[0]], lsp[iar[1]]);
      if (fChargeConj) 
          comb.CombineAndAppend(lsp[chCon(iar[0])], lsp[chCon(iar[1])]);
      break;
    case 3: comb.Combine(lsp[iar[0]], lsp[iar[1]], lsp[iar[2]]);
      if (fChargeConj) 
          comb.CombineAndAppend(lsp[chCon(iar[0])], lsp[chCon(iar[1])], lsp[chCon(iar[2])]);
      break;
    case 4: comb.Combine(lsp[iar[0]], lsp[iar[1]], lsp[iar[2]], lsp[iar[3]]);
      if (fChargeConj) 
          comb.CombineAndAppend(lsp[chCon(iar[0])], lsp[chCon(iar[1])], lsp[chCon(iar[2])], lsp[chCon(iar[3])]);
      break;
    case 5: comb.Combine(lsp[iar[0]], lsp[iar[1]], lsp[iar[2]], lsp[iar[3]], lsp[iar[4]]);
      if (fChargeConj) 
          comb.CombineAndAppend(lsp[chCon(iar[0])], lsp[chCon(iar[1])], lsp[chCon(iar[2])],
                  lsp[chCon(iar[3])], lsp[chCon(iar[4])]);
      break;
    }
    
    combsel.Select(comb,&msel);
    if (combsel.GetLength()<fInvMassMult) 
    {
      if (fVb>0) 
      {
        cout<<"filter list masses: ";
        for (i=0;i<comb.GetLength();++i) 
        {
          std::cout <<comb[i]->M()<<" ("<<comb[i]->GetMarker(0)<<")  "<<endl;
          cout <<" ("<<comb[i]->P4().X()<<","<<comb[i]->P4().Y()<<","<<comb[i]->P4().Z()<<","<<comb[i]->P4().E()<<")"<<endl;
          for (j=0;j<comb[i]->NDaughters();++j)
          {
            RhoCandidate *d=comb[i]->Daughter(j);
            cout<<*d<<endl;
          }
        }
        cout<<endl;
      }
      return 7;
    }
    
  }
  
  return 0;
}

// -----   Public method Finish   --------------------------------------------
void ChnsFastSim::Finish()
{
  TString multnames[6] = {"ch+","ch-", "gam", "pi0", "ks", "eta"};
  if (fApplyFilter)
  {       
    for (int i=0;i<6;++i)
    {
      if (fMultMin[i]>0 || fMultMax[i]<1000)
      std::cout <<"*** Filtering Info: "<<fMultMin[i]<<" <= "<<multnames[i].Data() <<" <= "<<fMultMax[i]<<endl;
    }
    std::cout <<"*** Filtering Info: "<<fInvMassMin<<" < m("<<fInvMassFilter.Data()<<") < "<<fInvMassMax<<" with N="<<fInvMassMult<<endl;
    std::cout <<"*** Filtering Info: "<< fNAccept <<"/"<<evtcnt<<" accepted by filters."<<endl;
  }
}
// -------------------------------------------------------------------------

// -----   Public method Exec   --------------------------------------------
void ChnsFastSim::Exec(Option_t*)
{
  int nCharged = 0;
  int nNeutral = 0;

  if ((++evtcnt)%100==0)
    cout <<"[ChnsFastSim] evt "<<evtcnt<<endl;

  ChnsStack *fStack=(ChnsStack*)gMC->GetStack();
  Int_t nTracks=fStack->GetNtrack();
  
  RhoFactory::Instance()->Reset();
  // Reset output array
  if (fMcCandidates->GetEntriesFast() != 0)  fMcCandidates->Clear("C");
  if (fPidChargedCand->GetEntriesFast() != 0)  fPidChargedCand->Clear("C");
  if (fPidNeutralCand->GetEntriesFast() != 0)  fPidNeutralCand->Clear("C");
  if (fPidChargedProb->GetEntriesFast() != 0)  fPidChargedProb->Clear("C");
  if (fPidNeutralProb->GetEntriesFast() != 0)  fPidNeutralProb->Clear("C");
  //if (fMicroCandidates->GetEntriesFast() != 0) fMicroCandidates->Clear("C");
  if (fEventInfo->GetEntriesFast() != 0) fEventInfo->Clear("C");
  for(std::map<TString,TClonesArray*>::iterator iter=fPidArrayList.begin();iter!=fPidArrayList.end();iter++)
  {
    if(iter->second->GetEntriesFast() != 0) iter->second->Clear("C");
  }

  TClonesArray &mctracks       = *fMcCandidates;

  TClonesArray &chrgCandidates = *fPidChargedCand;  // Charged Candidates
  TClonesArray &neutCandidates = *fPidNeutralCand;  // Neutral Candidates

  TClonesArray &chrgProbs      = *fPidChargedProb;  // PID for charged Cands
  TClonesArray &neutProbs      = *fPidNeutralProb;  // PID for neutral Cands

  //TClonesArray &microCandidates = *fMicroCandidates;
  TClonesArray &evtInfo         = *fEventInfo;

  if (fVb)cout <<"number of tracks **** "<< nTracks <<endl;


  RhoCandList l, lfilt;
  TLorentzVector McSumP4(0,0,0,0);
  TVector3 McAvgVtx(0,0,0);
  
  if (fApplyFilter)
  {
    // extra loop for the filters
    for (Int_t iTrack=0; iTrack<nTracks; iTrack++) 
    {
      TParticle *t = fStack->GetParticle(iTrack);
      int pdg = abs(t->GetPdgCode());
      if (!(pdg==11 || pdg==13 || pdg==211 || pdg==321 || pdg==2212 || pdg==22 || pdg==2112)) continue;
       
      TLorentzVector p4(t->Px(),t->Py(),t->Pz(),t->Energy());
      TParticlePDG* part = fdbPdg->GetParticle(t->GetPdgCode());
      double charge=0;//safety against unknown pdgcodes, might scrw up the charge
      if (part) charge=part->Charge();
      if (fabs(charge)>2) charge/=3.;
      
      RhoCandidate c(p4, charge);
      c.SetType(t->GetPdgCode());
      c.SetMarker(lfilt.GetLength());
      lfilt.Add(&c);
    }
    
    int errac = acceptFilters(lfilt);
    
    if (errac>0)
    {
      if (fVb>0) 
      {
        cout <<"ChnsFastSim Filter reject ev="<< evtcnt<<" with code="<<errac<<endl;
        cout <<"Filter list"<<endl;
        for (int i=0;i<lfilt.GetLength();++i)
        {
          cout <<i<<" : "<<lfilt[i]->PdgCode();
          cout <<" ("<<lfilt[i]->P4().X()<<","<<lfilt[i]->P4().Y()<<","<<lfilt[i]->P4().Z()<<","<<lfilt[i]->P4().E()<<")"<<endl;
        }
      }
    
      RhoFactory::Instance()->Reset();
      return;
    }
    fNAccept++;
  } // filter done

  for (Int_t iTrack=0; iTrack<nTracks; iTrack++) 
  {

    // Get the MCTrack information
    Int_t mcsize = mctracks.GetEntriesFast();
    Int_t chcandsize = chrgCandidates.GetEntriesFast();
    Int_t neucandsize = neutCandidates.GetEntriesFast();
    //Int_t miccandsize = microCandidates.GetEntriesFast();

    TParticle *t = fStack->GetParticle(iTrack);
    if (fVb>1) t->Print();

    TLorentzVector p4(t->Px(),t->Py(),t->Pz(),t->Energy());
    TVector3 stvtx(t->Vx(),t->Vy(),t->Vz());

    int pdg = t->GetPdgCode();

    // simulate bremsstrahlung for electrons and add photon on stack
    if (abs(pdg)==11 && fElectronBrems)
    {
      // probability for bremsstrahlung was estimated from Full Sim to about 32%
      if (fRand->Rndm()<0.32)
      {
        // get random energy loss and compute residual momentum (as equivalent to kinetic energy)
        double loss  = fBremsEnergy->GetRandom(0.03,0.9);
    
        // modify electron momentum mag (not the direction at the moment)
        p4.SetVectM(p4.Vect()*(1.0-loss),5.11e-4);
        TLorentzVector phot;
        phot.SetVectM(p4.Vect()*loss, 0.0);
    
        // add an additional photon to the stack with the energy
        fStack->PushTrack(0, iTrack, 22,                    // Int_t toBeDone, Int_t parentID, Int_t pdgCode
                  phot.X(), phot.Y(), phot.Z(),   // Double_t px, Double_t py, Double_t pz,
                  phot.E(), 0., 0.,         // Double_t e, Double_t vx, Double_t vy,
                  0. , 0., 0.,            // Double_t vz, Double_t time, Double_t polx,
                  0., 0., kPPrimary,        // Double_t poly, Double_t polz, TMCProcess proc,
                  nTracks, 0., 0.);         // Int_t& ntr, Double_t weight, Int_t is
    
        nTracks=fStack->GetNtrack();
      }
    }

    // shall we add some parametrized split offs?
    if (fGenSplitOffs)
    {
      int type=-1;
    
      if (abs(pdg) == 11) type=0;
      else if (abs(pdg) == 211) type=2;
      else if (abs(pdg) == 321) type=3;
      else if (abs(pdg) == 2212) type=4;
      
      if (type>0)
      {
    
        //number of split offs?
        int numSP=(int)fspo[type][3]->GetRandom();
    
        if (fVb) cout <<" -I- (ChnsFastSim::Exec) - creating "<<numSP
        <<" split offs for particle with type "<<type<<endl;
    
        for (int ii=0;ii<numSP;ii++)
        {
          TLorentzVector lv(p4);
    
          double mom   = fspo[type][0]->GetRandom();
          double dphi  = fspo[type][1]->GetRandom();
          double dtht  = fspo[type][2]->GetRandom();
    
          lv.SetPhi(lv.Phi()+dphi);
          lv.SetTheta(lv.Theta()+dtht);
          lv.SetRho(mom);
          lv.SetE(lv.P());
    
          // add an additional photon to the stack with the energy
          fStack->PushTrack(0, iTrack, 22,                    // Int_t toBeDone, Int_t parentID, Int_t pdgCode
                  lv.X(), lv.Y(), lv.Z(),   // Double_t px, Double_t py, Double_t pz,
                  lv.E(), 0., 0.,         // Double_t e, Double_t vx, Double_t vy,
                  0. , 0., 0.,            // Double_t vz, Double_t time, Double_t polx,
                  0., 0., kPPrimary,        // Double_t poly, Double_t polz, TMCProcess proc,
                  nTracks, 0., 0.);         // Int_t& ntr, Double_t weight, Int_t is
    
          nTracks=fStack->GetNtrack();
        } // split off loop
      }
    }// generate split offs

    //TLorentzVector vtx(stvtx,t->T());
    TParticlePDG* part = fdbPdg->GetParticle(t->GetPdgCode());
    double charge(0);//safety against unknown pdgcodes, might scrw up the charge
    if(part) charge=part->Charge();
    if (fabs(charge)>2) charge/=3.;

    ChnsFsmTrack *ft=new ChnsFsmTrack(p4,stvtx,stvtx,charge,t->GetPdgCode(),iTrack+1);
    //ChnsFsmTrack ft(p4,stvtx,stvtx,charge,t->GetPdgCode(),iPoint+1);

    // store a plain copy of the mc track to the file
    RhoCandidate *pmc=new (mctracks[mcsize]) RhoCandidate(ft->p4(),ft->charge());
    pmc->SetMcTruth(pmc);
    pmc->SetPos(ft->startVtx());
    pmc->SetType(t->GetPdgCode());
    // write some ideal pid lhs
    bool pdgcheck = false;
    switch(abs(t->GetPdgCode())) {
      case 22:                          pdgcheck = true; break;
      case 2112:                        pdgcheck = true; break;
      case 11:   pmc->SetPidInfo(0, 1); pdgcheck = true; break;
      //case 13:   pmc->SetPidInfo(1, 1); pdgcheck = true; break;
      case 211:  pmc->SetPidInfo(2, 1); pdgcheck = true; break;
      case 321:  pmc->SetPidInfo(3, 1); pdgcheck = true; break;
      case 2212: pmc->SetPidInfo(4, 1); pdgcheck = true; break;
      case 1000010020: pmc->SetPidInfo(12, 1); pdgcheck = true; break;
      case 1000010030: pmc->SetPidInfo(13, 1); pdgcheck = true; break;
      case 1000020030: pmc->SetPidInfo(23, 1); pdgcheck = true; break;
      case 1000020040: pmc->SetPidInfo(24, 1); pdgcheck = true; break;
							
    }

    McSumP4+=ft->p4();
    McAvgVtx+=ft->startVtx();

    if (pdgcheck) // only consider final state particles
    {
      // smear and cut the track according to the detector setup
      bool smeared = smearTrack(ft, chcandsize);

      if (smeared)
      {
        RhoVector3Err *svtx=new RhoVector3Err(ft->startVtx());
        TLorentzVector miclv=ft->p4();
        TVector3 pos=ft->startVtx();
        TVector3 lastpos=ft->stopVtx();

        // assign pion mass to all charged and 0 to all neutral cands
        if (fabs(ft->charge())>0.001)
        {
          miclv.SetVectM(miclv.Vect(),fdbPdg->GetParticle(211)->Mass());
          nCharged++;
        }
        else
        {
          miclv.SetVectM(miclv.Vect(),0.0);
          nNeutral++;
        }

        ChnsPidCandidate *pidCand=0;
        ChnsPidProbability *pidProb=0;

	//cout<<"ChnsFastSim  -=-=-=-  Track number: "<<iTrack<<endl;

        if (fabs(ft->charge())>1e-6)
        {
          pidCand = new (chrgCandidates[chcandsize]) ChnsPidCandidate((Int_t)ft->charge(),pos,miclv);
          pidProb = new (chrgProbs[chcandsize]) ChnsPidProbability();
        }
        else
        {
          // flag for merge neutral clusters
          bool merged = false;
       
          // if two neutrals have small angle difference alpha, merge their clusters with a certain probability 1-exp(-a*alpha)
          if (fMergeNeutralClusters)
          {
            // loop through old gammas
            for (int i=0; i<neucandsize;++i)
            {
              TLorentzVector nlv = ((ChnsPidCandidate*) neutCandidates[i])->GetLorentzVector();
              double openang = nlv.Angle(miclv.Vect())*57.2958;
              if (fRand->Rndm()>(1-exp(-fMergeProbPar*openang)))
              {
                double mergeE = nlv.E()+miclv.E();
                TVector3 mergeV = nlv.Vect()+miclv.Vect();
                mergeV *= mergeE/mergeV.Mag();
             
                ChnsPidCandidate* mergedCand = (ChnsPidCandidate*) neutCandidates[i];
                mergedCand->SetMomentum(mergeV);
                mergedCand->SetEnergy(mergeE);
                mergedCand->SetMcIndex(-1); // remove MC truth match
             
                merged = true;
                
                // exit loop, if mergeing happend
                i=neucandsize;
              }
            }
          }

          // if the new gamma wasn't merged to another, just add it as usual
          if (!merged)
          {
            pidCand = new (neutCandidates[neucandsize]) ChnsPidCandidate((Int_t)ft->charge(),pos,miclv);
            pidCand->SetLastHit(lastpos);
            pidProb = new (neutProbs[neucandsize]) ChnsPidProbability();
          }
        }

        if (pidProb)
        {
          pidProb->SetElectronPdf(ft->detResponse()->LHElectron());
          pidProb->SetMuonPdf(ft->detResponse()->LHMuon());
          pidProb->SetPionPdf(ft->detResponse()->LHPion());
          pidProb->SetKaonPdf(ft->detResponse()->LHKaon());
          pidProb->SetProtonPdf(ft->detResponse()->LHProton());
          pidProb->SetDeuteronPdf(ft->detResponse()->LHDeuteron());
          pidProb->SetTritonPdf(ft->detResponse()->LHTriton());
          pidProb->SetHe3Pdf(ft->detResponse()->LHHe3());
          pidProb->SetHe4Pdf(ft->detResponse()->LHHe4());

		//cout<<"ChnsFastSim.cxx   LHpi: "<<ft->detResponse()->LHPion()<<" k: ******** "<<ft->detResponse()->LHKaon()<<"  e: "<<ft->detResponse()->LHElectron()<<"  "<<ft->detResponse()->LHMuon()<<endl;
          pidProb->SetIndex(chcandsize);
        }
        if (pidCand)
        {
          pidCand->SetMcIndex(iTrack);
					pidCand->SetPdgCode(ft->pdt());
          pidCand->SetMvdDEDX( ft->detResponse()->MvddEdx() );
					pidCand->SetMvdDCA( ft->detResponse()->MvdDCA() ); //DCA in track level; yutie 0328

					//pidCand->SetMvdDEdxErr( ft->detResponse()->MvddEdxErr() );
					pidCand->SetTpcMeanDEDX( ft->detResponse()->TpcdEdx() );
					pidCand->SetGemMeanDEDX( ft->detResponse()->GemdEdx() );

          //pidCand->SetTpcDEdxErr( ft->detResponse()->TpcdEdxErr() );
					pidCand->SetTofBeta( ft->detResponse()->beta());
					cout << " <<<<< fast sim " << ft->detResponse()->beta() << endl;
          pidCand->SetTofM2( ft->detResponse()->m2() );
          //pidCand->SetTofM2Err( ft->detResponse()->m2Err() );
          pidCand->SetDrcThetaC( ft->detResponse()->DrcBarrelThtc() );
          pidCand->SetDrcThetaCErr( ft->detResponse()->DrcBarrelThtcErr() );
          pidCand->SetDrcNumberOfPhotons(0);
          pidCand->SetDiscThetaC( ft->detResponse()->DrcDiscThtc() );
          pidCand->SetDiscThetaCErr( ft->detResponse()->DrcDiscThtcErr() );
          pidCand->SetDiscNumberOfPhotons(0);
          pidCand->SetRichThetaC( ft->detResponse()->RichThtc() );
          pidCand->SetRichThetaCErr( ft->detResponse()->RichThtcErr() );
          pidCand->SetRichNumberOfPhotons(0);
          pidCand->SetEmcRawEnergy(p4.E());
          pidCand->SetEmcCalEnergy(ft->detResponse()->EmcEcal() );
          pidCand->SetMuoIron(ft->detResponse()->MuoIron() );
          RhoCandidate tcand(ft->p4(),ft->charge(),svtx);
          tcand.SetTrackNumber(chcandsize);
  
   
          if( (fPropagate||fUseFlatCovMatrix))// && fabs(ft->charge())>1e-6)
          {
            tcand.SetCov7(ft->Cov7());
            pidCand->SetCov7( ft->Cov7() );
          }
          l.Add(&tcand);
        }
        delete svtx;
 
      }// smeartrack
    }
    delete ft;
  }//trackloop

  McAvgVtx*=1./(double)nTracks;

  ChnsEventInfo *eventInfo=new (evtInfo[evtInfo.GetEntriesFast()]) ChnsEventInfo();

  eventInfo->SetIPTruth(McAvgVtx);
  eventInfo->SetCmFrame(McSumP4);
  eventInfo->SetCharged(nCharged);
  eventInfo->SetNeutrals(nNeutral);

  //  TEventShape shape(l);
  //  eventInfo->SetEventShape(shape);

}
// -------------------------------------------------------------------------

bool ChnsFastSim::smearTrack(ChnsFsmTrack *t, int chcandsize )
{


  FsmResponseList responseList;

  for (FsmAbsDetList::iterator iter=fDetList.begin();iter!=fDetList.end(); iter++)
  {

    ChnsFsmAbsDet *det=*iter;
    //cout<<"ChnsFastSim::smearTrack -- "<<det->detName()<<endl;
    if (!det) {cout <<"--------------------------> outch"<<endl;continue;}

    ChnsFsmResponse *respo=det->respond(t);


    if (respo) responseList.push_back(respo);
  }

  ChnsFsmResponse *allResponse=sumResponse(responseList);

  t->setDetResponse(allResponse);

  bool success = cutAndSmear(t);

  if(success && fabs(t->charge())>1e-6)
  { // create dummy PID info for all detectors, then fill it with reason later
    for(std::map<TString, TClonesArray*>::iterator pidit=fPidArrayList.begin() ; pidit != fPidArrayList.end() ; pidit++)
    {
      TClonesArray* myPidarray = pidit->second;
      if (!myPidarray) Error("ChnsFastSim::smearTrack","Missing PidProb Array: \"%s\"",pidit->first.Data());
      if (myPidarray->GetEntriesFast() != chcandsize ) Warning("ChnsFastSim::smearTrack","unequal array sizes: cand array:%i  prob array \"%s\" :%i",chcandsize,pidit->first.Data(),myPidarray->GetEntriesFast());
      ChnsPidProbability *apidProb=new((*myPidarray)[chcandsize]) ChnsPidProbability();
      apidProb->SetIndex(chcandsize);
    }
  }

  for (FsmResponseList::iterator riter=responseList.begin(); riter!=responseList.end();riter++)
  {
    ChnsFsmResponse *resp=*riter;
    if (!resp) continue;

    if(success && fabs(t->charge())>1e-6 && resp->detector()->doesPid())
    { //save PID information only if particle is stored
      TString detname = resp->detector()->detName();
      TClonesArray* myPidarray = fPidArrayList[detname];
      if (!myPidarray) Error("ChnsFastSim::smearTrack","Failed accessing PidProb Array: \"%s\"",detname.Data());
      ChnsPidProbability *pidProb=(ChnsPidProbability*)myPidarray->At(chcandsize);
      if (!pidProb) Error("ChnsFastSim::smearTrack","Failed accessing PidProb Object number %i from array \"%s\"",chcandsize,detname.Data());
      {
        double rawLHe  = resp->LHElectron();
        double rawLHmu = resp->LHMuon();
        double rawLHpi = resp->LHPion();
        double rawLHK  = resp->LHKaon();
        double rawLHp  = resp->LHProton();
        double rawLHd  = resp->LHDeuteron();
        double rawLHt  = resp->LHTriton();
        double rawLHhe3  = resp->LHHe3();
        double rawLHhe4  = resp->LHHe4();

        double sumRaw = rawLHe+rawLHmu+rawLHpi+rawLHK+rawLHp+rawLHd+rawLHt+rawLHhe3+rawLHhe4;
				
        if (sumRaw>0.)
        {
          pidProb->SetElectronPdf(rawLHe/sumRaw);
          pidProb->SetMuonPdf(rawLHmu/sumRaw);
          pidProb->SetPionPdf(rawLHpi/sumRaw);
          pidProb->SetKaonPdf(rawLHK/sumRaw);
          pidProb->SetProtonPdf(rawLHp/sumRaw);
          pidProb->SetDeuteronPdf(rawLHd/sumRaw);
          pidProb->SetTritonPdf(rawLHt/sumRaw);
          pidProb->SetHe3Pdf(rawLHhe3/sumRaw);
          pidProb->SetHe4Pdf(rawLHhe4/sumRaw);
        } else {
          pidProb->SetElectronPdf(0.0001);
          pidProb->SetMuonPdf(0.0001);
          pidProb->SetPionPdf(0.0001);
          pidProb->SetKaonPdf(0.0001);
          pidProb->SetProtonPdf(0.0001);
          pidProb->SetDeuteronPdf(0.0001);
          pidProb->SetTritonPdf(0.0001);
          pidProb->SetHe3Pdf(0.0001);
          pidProb->SetHe4Pdf(0.0001);
        }
      }

    }
    // and now clean up!
    delete resp;
  }
  responseList.clear();

  return success;
}

bool
ChnsFastSim::cutAndSmear(ChnsFsmTrack *t)
{
  return cutAndSmear(t, t->detResponse());
}

//-----------------------------------------------------------------------

bool
ChnsFastSim::cutAndSmear(ChnsFsmTrack *t, ChnsFsmResponse *r)
{
  if( !(r->detected()) ) return false;

  double charge = t->charge();
  double dE     = r->dE();
  double dp     = r->dp();
  double dtheta = r->dtheta();
  double dphi   = r->dphi();
  double dm     = r->dm();
  double m2     = r->m2();
  double MvddEdx =r->MvddEdx();
  double TpcdEdx =r->TpcdEdx();
  double GemdEdx =r->GemdEdx();
  TVector3 dV   = r->dV();
  //r->print(cout);
  //this removes candidates, which only have hit a PID-only device (like Cherenkov, TOF ...)

  if (fabs(charge)>1e-6 && fabs(dp)<1e-8) return false;
  if (fabs(charge)<1e-6 && fabs(dE)<1e-8) return false;

  // now produce some correlated errors
  if (fPropagate && fabs(charge)>1e-6) {
    t->HelixRep(t->startVtx() );
    double p2 = t->p4().Vect().Mag2();
    double omega = t->GetHelixOmega();
    double tandip = t->GetHelixTanDip();
    double theta = t->p4().Theta();

    static TVectorD gaus(5);
    for (char p=0;p<5;p++) gaus[p]=fRand->Gaus();
    if (fUseCovMatrix) gaus*=fEta;
    // calculate track par errors
    double err[5];
    // d0 (guessed), phi0, z0
    err[0] = 0.5*(dV.X()+dV.Y());
    err[1] = dphi;
    err[3] = dV.Z();
    // omega needs some error propagation (momentum and theta are uncorrelated)
    err[2] = omega * sqrt( dp*dp/p2 + pow(dtheta*tandip,2) );
    // as well as tandip
    err[4] = dtheta/pow(sin(theta),2);
    // smear track pars
    for (int p=0;p<5;p++) t->GetHelixParams()[p] += err[p] * gaus[p];
    
    // write scaled cov matrix
    for (int ir=0;ir<5;ir++) {
      for (int c=0;c<5;c++) {
        t->GetHelixCov()(ir,c) = fRho(ir,c)*fabs(err[ir]*err[c])*(fUseCovMatrix||ir==c);
      }
    }
    t->Propagate( fToStartVtx ? t->startVtx() : TVector3(0,0,0), fTolerance);
    // uncharged particles remain uncorrelated
  } else {
    //first set cov, using mctruth for correct calculation of jacobian
    if (fUseFlatCovMatrix) SetFlatCovMatrix(t,dp,dtheta,dphi,dE,dV.X(),dV.Y(),dV.Z());
    if (dE != 0.0)     smearEnergy(t,dE);
    if (dp != 0.0)     smearMomentum(t,dp);
    if (dtheta != 0.0) smearTheta(t,dtheta);
    if (dphi != 0.0)   smearPhi(t,dphi);
    if ( fabs(charge)>1e-6 && (dV.X() != 0.0 || dV.Y() != 0.0 || dV.Z() != 0.0)) smearVertex(t,dV);
    if ( fabs(charge)<1e-6 ) UpdateGammaHit(t);
  }
  if (dm != 0.0)     smearM(t,dm);
  if( m2!=0.0)       smearM2(t,m2);           // mass^2 of track after tof
  if(MvddEdx!=0.0)   smearMvddEdx(t,MvddEdx); // dEdx of track after Mvd
  if(TpcdEdx!=0.0)   smearTpcdEdx(t,TpcdEdx); // dEdx of track after Tpc
  if(GemdEdx!=0.0)   smearGemdEdx(t,GemdEdx); // dEdx of track after Gem
  return true;
}

//-----------------------------------------------------------------------

void ChnsFastSim::SetFlatCovMatrix(ChnsFsmTrack *t, double dp, double dtheta, double dphi, double dE, double dx, double dy, double dz)
{
  TLorentzVector lv=t->p4();

  double st=sin(lv.Theta());
  double ct=cos(lv.Theta());
  double sf=sin(lv.Phi());
  double cf=cos(lv.Phi());
  double p=lv.P();
  double e=lv.E();

  //printf("FastSim covariance test: dp=%f,  dtheta=%f,  dphi=%f,  dE=%f,  dx=%f,  dy=%f,  dz=%f\n", dp,  dtheta,  dphi,  dE,  dx,  dy,  dz);

  TMatrixD jacobian(4,3);

  if(fabs(t->charge())>1e-6)
  {
  jacobian(0,0) = st*cf;
    jacobian(1,0) = st*sf;
    jacobian(2,0) = ct;
    jacobian(3,0) = (e>0) ? p/e : 0.;
  } else { // no direct momentum measurement of neutrals
    jacobian(0,0) = st*cf*e/p;
    jacobian(1,0) = st*sf*e/p;
    jacobian(2,0) = ct*e/p;
    jacobian(3,0) = 1.;
  }
  jacobian(0,1) = p*ct*cf;
  jacobian(1,1) = p*ct*sf;
  jacobian(2,1) = -p*st;
  jacobian(3,1) = 0.;
  jacobian(0,2) = -p*st*sf;
  jacobian(1,2) = p*st*cf;
  jacobian(2,2) = 0.;
  jacobian(3,2) = 0.;

  TMatrixDSym covPol(3);
  if(fabs(t->charge())>1e-6) covPol(0,0)=dp*dp;
  else covPol(0,0)=dE*dE;

  covPol(1,1)=dtheta*dtheta;
  covPol(2,2)=dphi*dphi;

  TMatrixD jcov(jacobian,TMatrixD::kMult,covPol);
  TMatrixD covCar(jcov,TMatrixD::kMultTranspose,jacobian);

//  cout<<"Lorentzvector: ";
//  lv.Print();
//  cout<<"Polar covariance: ";
//  covPol.Print();
//  cout<<"Jacobian: ";
//  jacobian.Print();
//  //cout<<"Jacobian*covPol: ";
//  //jcov.Print();
//  cout<<"Kartesian covariance: ";
//  covCar.Print();

  t->SetP4Cov(covCar);

  TMatrixD covV(3,3);
  covV(0,0) = dx*dx;
  covV(0,1) = 0.;
  covV(0,2) = 0.;
  covV(1,0) = 0.;
  covV(1,1) = dy*dy;
  covV(1,2) = 0.;
  covV(2,0) = 0.;
  covV(2,1) = 0.;
  covV(2,2) = dz*dz;

  t->SetVCov(covV);

  return;
}

void
ChnsFastSim::smearEnergy(ChnsFsmTrack *t, double dE)
{
  TLorentzVector p4=t->p4();
  double m=t->p4().M();

  //  if (t->pdt()->lundId()==22) //gammas are always on mass shell
  if (fabs(t->charge()) < 0.1 ) //gammas are always on mass shell
  {
    //    double rnd = pRand->Gaus(0.,dE);
    double rnd = fRand->Gaus(0. , dE);

    double newE = rnd + p4.E();

    p4.SetVectM(p4.Vect()*(newE/p4.E()) , 0.0);
  }
  else
  {
    double newE = fRand->Gaus(0.0,dE) + p4.E();
    double newP = sqrt(newE*newE - m*m);

    p4.SetE(newE);
    p4.SetVectMag(p4.Vect(),newP);
  }

  t->setP4(p4);
}

void
ChnsFastSim::smearMomentum(ChnsFsmTrack *t, double dp)
{
  TLorentzVector p4=t->p4();
  double newP;
	//if(fabs(t->charge()) <2 ) 
		newP = p4.Vect().Mag() + fRand->Gaus(0.0,dp);
	//else newP = p4.Vect().Mag()/fabs(t->charge()) + fRand->Gaus(0.0,dp); // Xionghong: z=2 (He3, He4)
  p4.SetVectM(p4.Vect().Unit()*newP,t->p4().M());
  t->setP4(p4);
}

void
ChnsFastSim::smearTheta(ChnsFsmTrack *t, double dtheta)
{
  TLorentzVector p4=t->p4();
  double newTheta = p4.Theta() + fRand->Gaus(0.,dtheta);
  p4.SetTheta(newTheta);

  t->setP4(p4);
}

void
ChnsFastSim::smearPhi(ChnsFsmTrack *t, double dphi)
{
  TLorentzVector p4=t->p4();
  double newPhi = p4.Phi() + fRand->Gaus(0.,dphi);
  p4.SetPhi(newPhi);

  t->setP4(p4);
}

void
ChnsFastSim::smearM(ChnsFsmTrack *t, double dm)
{
  TLorentzVector p4=t->p4();
  //  double newM = p4.m() + RandGauss::shoot(0.,dm);
  double newM=p4.M() + dm;

  p4.SetVectM(p4.Vect(),newM);

  t->setP4(p4);
}

void
ChnsFastSim::smearM2(ChnsFsmTrack *t, double m2)
{

  t->setMass2(m2);
}

void
ChnsFastSim::smearMvddEdx(ChnsFsmTrack *t, double MvddEdx)
{

  t->setMvddEdX(MvddEdx);
}

void
ChnsFastSim::smearTpcdEdx(ChnsFsmTrack *t, double TpcdEdx)
{

  t->setTpcdEdX(TpcdEdx);
}

void
ChnsFastSim::smearGemdEdx(ChnsFsmTrack *t, double GemdEdx)
{

  t->setGemdEdX(GemdEdx);
}

void
ChnsFastSim::smearVertex(ChnsFsmTrack *t, TVector3 dV)
{
  TVector3 vtx = t->startVtx();

  double newX = vtx.X() + fRand->Gaus( 0. , dV.X() );
  double newY = vtx.Y() + fRand->Gaus( 0. , dV.Y() );
  double newZ = vtx.Z() + fRand->Gaus( 0. , dV.Z() );

  vtx.SetX(newX);
  vtx.SetY(newY);
  vtx.SetZ(newZ);

  t->setStartVtx(vtx);
}

//-----------------------------------------------------------------------


ChnsFsmResponse*
ChnsFastSim::sumResponse(FsmResponseList respList)
{

  bool detected=false;

  double dE=0.0;
  double dp=0.0;
  double dtheta=0.0;
  double dphi=0.0;
  double dt=0.0;
  double dm=0.0;

  double m2=0;
  double tofbeta=0.;
  double MvddEdx=0;
  double MvdDCA=0; //DCA in track level; yutie 0328
  double TpcdEdx=0;
  double GemdEdx=0;
  double DrcDiscThtc=0;
  double DrcBarrelThtc=0;
  double RichThtc=0;
  double EmcEcal=0;
  double MuoIron=0;

  double m2Err=0;
  double MvddEdxErr=0;
  double TpcdEdxErr=0;
  double GemdEdxErr=0;
  double DrcDiscThtcErr=0;
  double DrcBarrelThtcErr=0;
  double RichThtcErr=0;

  double dVx=0.0;
  double dVy=0.0;
  double dVz=0.0;

  double LH_e=0.0;
  double LH_mu=0.0;
  double LH_pi=0.0;
  double LH_K=0.0;
  double LH_p=0.0;
  double LH_d=0.0;
  double LH_t=0.0;
  double LH_he3=0.0;
  double LH_he4=0.0;

  double LH_e_Emc = 0.0;
  double LH_mu_Emc = 0.0;
  double LH_pi_Emc = 0.0;
  double LH_K_Emc = 0.0;
  double LH_p_Emc = 0.0; 
  
  double LH_e_Others = 0.0;
  double LH_mu_Others = 0.0;
  double LH_pi_Others = 0.0;
  double LH_K_Others = 0.0;
  double LH_p_Others = 0.0;

  


  double val=0.0;

  ChnsFsmResponse *allResponse=new ChnsFsmResponse();

  if (fVb>3) cout <<" *** SINGLE RESPONSES ***"<<endl<<"--------------------------------------"<<endl;

  for (FsmResponseList::iterator riter=respList.begin(); riter!=respList.end();riter++)
  {
    ChnsFsmResponse *resp=*riter;

    if ( fVb>3 ) resp->print(cout);

    if (resp->detector()->detName()=="IdealPid") continue; // don't use ideal PID

    detected = detected | resp->detected();

    if (resp->detected())
    {
      if (fabs(val = resp->dE()) > 1e-8)     dE += 1/(val*val);
      if (fabs(val = resp->dp()) > 1e-8)      dp += 1/(val*val);
      if (fabs(val = resp->dtheta())> 1e-8) dtheta += 1/(val*val);
      if (fabs(val = resp->dphi()) > 1e-8)   dphi += 1/(val*val);

      if (fabs(val = resp->dt()) > 1e-8)     dt += val*val;
      if (fabs(val = resp->dm()) > 1e-8)     dm =val;
      if (fabs (val = resp->m2()) > 1e-11)    m2=val;
      if (fabs (val = resp->beta()) > 1e-11)    tofbeta=val;
      if (fabs (val = resp->MvddEdx()) > 1e-11)    MvddEdx=val;
      if (fabs (val = resp->MvdDCA()) > 1e-11)    MvdDCA=val;      //DCA in track level; yutie 0328
      if (fabs (val = resp->TpcdEdx()) > 1e-11)    TpcdEdx=val;
      if (fabs (val = resp->GemdEdx()) > 1e-11)    GemdEdx=val;	
      if (fabs (val = resp->DrcDiscThtc()) > 1e-11)   DrcDiscThtc=val;
      if (fabs (val = resp->DrcBarrelThtc()) > 1e-11)    DrcBarrelThtc=val;
      if (fabs (val = resp->RichThtc()) > 1e-11)    RichThtc=val;
      if (fabs (val = resp->EmcEcal()) > 1e-11)    EmcEcal=val;
      if (fabs (val = resp->MuoIron()) > 1e-11)    MuoIron=val;

      if (fabs (val = resp->m2Err()) > 1e-11)    m2Err=val;
      if (fabs (val = resp->MvddEdxErr()) > 1e-11)    MvddEdxErr=val;
      if (fabs (val = resp->TpcdEdxErr()) > 1e-11)    TpcdEdxErr=val;
      if (fabs (val = resp->GemdEdxErr()) > 1e-11)    GemdEdxErr=val;
      if (fabs (val = resp->DrcDiscThtcErr()) > 1e-11)   DrcDiscThtcErr=val;
      if (fabs (val = resp->DrcBarrelThtcErr()) > 1e-11)    DrcBarrelThtcErr=val;
      if (fabs (val = resp->RichThtcErr()) > 1e-11)    RichThtcErr=val;

      if (fabs (val = resp->dV().X()) > 1e-11) dVx += 1/(val*val);
      if (fabs (val = resp->dV().Y()) > 1e-11) dVy += 1/(val*val);
      if (fabs (val = resp->dV().Z()) > 1e-11) dVz += 1/(val*val);

      double rawLHe  = resp->LHElectron();
      double rawLHmu = resp->LHMuon();
      double rawLHpi = resp->LHPion();
      double rawLHK  = resp->LHKaon();
      double rawLHp  = resp->LHProton();
      double rawLHd  = resp->LHDeuteron();
      double rawLHt  = resp->LHTriton();
      double rawLHhe3  = resp->LHHe3();
      double rawLHhe4  = resp->LHHe4();

      double sumRaw = rawLHe+rawLHmu+rawLHpi+rawLHK+rawLHp+rawLHd+rawLHt+rawLHhe3+rawLHhe4;

      //cout<<"ChnsFastSim  sumResponse  LHemupikp: "<<rawLHe<<" "<<rawLHmu<<" "<<rawLHpi<<" "<<rawLHK<<" "<<rawLHp<< " " << rawLHhe3 <<"  sum: "<<sumRaw<<"    "<<resp->detector()->detName()<<endl;


      //New strategy:  deal with Emc and others separatly!
/*
      if(resp->detector()->detName() == "EmcBarrel" || 
	resp->detector()->detName() == "EmcBwCap"   ||
	resp->detector()->detName() == "EmcFwCap"   ||
	resp->detector()->detName() == "EmcFS"){
		LH_e_Emc  += rawLHe; 
        	LH_mu_Emc += rawLHmu;
        	LH_pi_Emc += rawLHpi;
        	LH_K_Emc  += rawLHK; 
        	LH_p_Emc  += rawLHp;

	}else{
		LH_e_Others  += rawLHe;
                LH_mu_Others += rawLHmu;
                LH_pi_Others += rawLHpi;
                LH_K_Others  += rawLHK;
                LH_p_Others  += rawLHp;
	}*/


      if (sumRaw>0 && resp->detector()->doesPid()) {

//
//        rawLHe  /= sumRaw;
//        rawLHmu /= sumRaw;
//        rawLHpi /= sumRaw;
//        rawLHK  /= sumRaw;
//        rawLHp  /= sumRaw;
//
//	//weight it  --Yutie  11.29.2018
//	if(rawLHe < 0.001) rawLHe = 0.001;
//	if(rawLHmu < 0.001) rawLHmu = 0.001;
//	if(rawLHpi < 0.001) rawLHpi = 0.001;
//	if(rawLHK < 0.001) rawLHK = 0.001;
//	if(rawLHp < 0.001) rawLHp = 0.001;

        LH_e  = rawLHe;
        LH_mu = rawLHmu;
        LH_pi = rawLHpi;
        LH_K  = rawLHK;
        LH_p  = rawLHp;
        LH_d  = rawLHd;
        LH_t  = rawLHt;
        LH_he3  = rawLHhe3;
        LH_he4  = rawLHhe4;

//        LH_e  += rawLHe;
//        LH_mu += rawLHmu;
//        LH_pi += rawLHpi;
//        LH_K  += rawLHK;
//        LH_p  += rawLHp;

      } 
/*			else {
        LH_e  *= 0.00001;
        LH_mu *= 0.00001;
        LH_pi *= 0.00001;
        LH_K  *= 0.00001;
        LH_p  *= 0.00001;
        LH_d  *= 0.00001;
        LH_t  *= 0.00001;
        LH_he3  *= 0.00001;
        LH_he4  *= 0.00001;
      }

      //here a weighted Likelihood evaluation has to be done

      
      if (val = rawLHe)  LH_e  == 0.0 ? LH_e  = val : LH_e  *= val;
      if (val = rawLHmu) LH_mu == 0.0 ? LH_mu = val : LH_mu *= val;
      if (val = rawLHpi) LH_pi == 0.0 ? LH_pi = val : LH_pi *= val;
      if (val = rawLHK)  LH_K  == 0.0 ? LH_K  = val : LH_K  *= val;
      if (val = rawLHp)  LH_p  == 0.0 ? LH_p  = val : LH_p  *= val;
      */
    }
  }

  double sumLH_Emc = LH_e_Emc + LH_mu_Emc + LH_pi_Emc + LH_K_Emc + LH_p_Emc;
  double sumLH_Others = LH_e_Others + LH_mu_Others + LH_pi_Others + LH_K_Others + LH_p_Others;

  if(sumLH_Emc>0 && sumLH_Others>0){
	LH_e = LH_e_Emc*LH_e_Others /sumLH_Emc/sumLH_Others;
	LH_mu = LH_mu_Emc*LH_mu_Others /sumLH_Emc/sumLH_Others;
	LH_pi = LH_pi_Emc*LH_pi_Others /sumLH_Emc/sumLH_Others;
	LH_K = LH_K_Emc*LH_K_Others /sumLH_Emc/sumLH_Others;
	LH_p = LH_p_Emc*LH_p_Others /sumLH_Emc/sumLH_Others;
  }else if(sumLH_Others>0 && sumLH_Emc==0){
	LH_e = LH_e_Others /sumLH_Others;
        LH_mu = LH_mu_Others /sumLH_Others;
        LH_pi = LH_pi_Others /sumLH_Others;
        LH_K = LH_K_Others /sumLH_Others;
        LH_p = LH_p_Others /sumLH_Others;
  }else if(sumLH_Others==0 && sumLH_Emc>0){
	LH_e = LH_e_Emc /sumLH_Emc;
        LH_mu = LH_mu_Emc /sumLH_Emc;
        LH_pi = LH_pi_Emc /sumLH_Emc;
        LH_K = LH_K_Emc /sumLH_Emc;
        LH_p = LH_p_Emc /sumLH_Emc;
  }

  //cout<<"LHEmc  e: "<<LH_e_Emc<<"  pi: "<<LH_pi_Emc<<"    "<<LH_K_Emc<<"   "<<LH_p_Emc<<endl;
  //cout<<"LHOthers  e: "<<LH_e_Others<<"  pi: "<<LH_pi_Others<<"   "<<LH_K_Others<<"   "<<LH_p_Others<<endl;
  //cout<<"LH  e: "<<LH_e<<"  pi: "<<LH_pi<<"    "<<LH_K<<"   "<<LH_p<<endl;

/*   //comment out 12.02 2018
  double sumLH = LH_e + LH_mu + LH_pi + LH_K + LH_p;

  if (sumLH>0) {
    LH_e  /= sumLH;
    LH_mu /= sumLH;
    LH_pi /= sumLH;
    LH_K  /= sumLH;
    LH_p  /= sumLH;
  } else {
    LH_e  = 0.2;
    LH_mu = 0.2;
    LH_pi = 0.2;
    LH_K  = 0.2;
    LH_p  = 0.2;
  }
*/
  allResponse->setDetected(detected);
  allResponse->setdE( dE>0. ? 1/sqrt(dE) : 0.0 );
  allResponse->setdp( dp>0. ? 1/sqrt(dp) : 0.0 );
  allResponse->setdtheta( dtheta>0. ? 1/sqrt(dtheta) : 0.0 );
  allResponse->setdphi( dphi>0. ? 1/sqrt(dphi) : 0.0 );
  allResponse->setdt( sqrt(dt) );
  allResponse->setdm(dm);

  allResponse->setm2(m2, m2Err);
  allResponse->setbeta(tofbeta);
  allResponse->setMvddEdx(MvddEdx,MvddEdxErr);
  allResponse->setMvdDCA(MvdDCA);//DCA in track level; yutie 0328
  allResponse->setTpcdEdx(TpcdEdx,TpcdEdxErr);
  allResponse->setGemdEdx(GemdEdx,GemdEdxErr);

  allResponse->setDrcDiscThtc(DrcDiscThtc,DrcDiscThtcErr);
  allResponse->setDrcBarrelThtc(DrcBarrelThtc,DrcBarrelThtcErr);
  allResponse->setRichThtc(RichThtc,RichThtcErr);
  allResponse->setEmcEcal(EmcEcal);
  allResponse->setMuoIron(MuoIron);

  if (dVx > 0.) dVx=1./sqrt(dVx); else dVx = 0.0;
  if (dVy > 0.) dVy=1./sqrt(dVy); else dVy = 0.0;
  if (dVz > 0.) dVz=1./sqrt(dVz); else dVz = 0.0;

  allResponse->setdV( dVx , dVy , dVz );

  allResponse->setLHElectron(LH_e);
  allResponse->setLHMuon(LH_mu);
  allResponse->setLHPion(LH_pi);
  allResponse->setLHKaon(LH_K);
  allResponse->setLHProton(LH_p);
  allResponse->setLHDeuteron(LH_d);
  allResponse->setLHTriton(LH_t);
  allResponse->setLHHe3(LH_he3);
  allResponse->setLHHe4(LH_he4);


  if (fVb>2) cout <<"--------------------------------------"<<endl<<"*** OVERALL RESPONSE ***"<<endl<<"--------------------------------------" <<endl;
  if (fVb>2) allResponse->print(cout);
  if (fVb>2) cout <<"--------------------------------------"<<endl;

  return allResponse;
}

void ChnsFastSim::UpdateGammaHit(ChnsFsmTrack *t)
{
  TVector3 hitpos=t->stopVtx();
  double z=hitpos.z();
  if(z==0.)
  { //barrel - TODO convention to set z=0 initially. 
    if(fabs(t->p4().Perp()) < 1e-9) return;
    double perpscale = hitpos.Perp()/t->p4().Perp();
    double x = t->p4().Px()*perpscale;
    double y = t->p4().Py()*perpscale;
    z = t->p4().Pz()*perpscale;
    hitpos.SetXYZ(x,y,z);
  } else 
  { // z-fixed disks
    double zscale = z/t->p4().Pz();
    double x = t->p4().Px()*zscale;
    double y = t->p4().Py()*zscale;
    hitpos.SetXYZ(x,y,z);
  }
  t->setStopVtx(hitpos);

}

//-----------------------------------------------------------------------

TMatrixD ChnsFastSim::fRho(5,5);
TMatrixD ChnsFastSim::fEta(5,5);

ClassImp(ChnsFastSim)
