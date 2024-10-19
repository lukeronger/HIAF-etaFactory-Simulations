/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
// -------------------------------------------------------------------------
// -----            ChnsBoxGenerator source file                        -----
// -----          Created 09/09/04  by Yu.Kharlov
// -------------------------------------------------------------------------

/* $Id: ChnsBoxGenerator.cxx,v 1.4 2006/07/18 09:28:06 prokudin Exp $ */

/* History of cvs commits:
 *
 * $Log: ChnsBoxGenerator.cxx,v $
 * Revision 1.4  2006/07/18 09:28:06  prokudin
 * Should be * instead /
 *
 * Revision 1.3  2006/07/14 11:23:57  kharlov
 * Add protection for simultaneously set ranges; split vertex and kinematics ranges
 *
 * Revision 1.2  2006/03/29 16:25:50  kharlov
 * New functionality added
 *
 */

#include "ChnsBoxGenerator.h"

/*
#include "FairPrimaryGenerator.h"

#include "TRandom.h"
#include "TParticlePDG.h"
#include "TDatabasePDG.h"
#include "TMath.h"
*/

#include "FairPrimaryGenerator.h"
#include "FairMCEventHeader.h"

#include "TMCProcess.h"
#include "TObjArray.h"
#include "TPDGCode.h"
#include "TParticle.h"
#include "TRandom.h"
#include "TString.h"
#include "TVirtualMCStack.h"
#include "TLorentzVector.h"
#include "TDatabasePDG.h"
#include "TParticlePDG.h"
#include "FairIon.h"
#include "FairRunSim.h"

#include <iostream>
#include <cstring>
#include <string>

using std::string;
using std::cout;
using std::endl;
using namespace TMath;


// ------------------------------------------------------------------------
ChnsBoxGenerator::ChnsBoxGenerator() :
  FairGenerator(),
  fPDGType(0),fMult(0),fPDGMass(0),fPtMin(0),fPtMax(0),
  fPhiMin(0),fPhiMax(0),fEtaMin(0),fEtaMax(0),fYMin(0),fYMax(0),
  fPMin(0),fPMax(0),fThetaMin(0),fThetaMax(0),fX(0),fY(0),fZ(0),
  fX1(0),fY1(0),fX2(0),fY2(0),fEkinMin(0),fEkinMax(0),
  fEtaRangeIsSet(0),fYRangeIsSet(0),fThetaRangeIsSet(0),
  fCosThetaIsSet(0),fPtRangeIsSet(0),fPRangeIsSet(0),
  fPointVtxIsSet(0),fBoxVtxIsSet(0),fDebug(0),fEkinRangeIsSet(0)
{
  // Default constructor
}

// ------------------------------------------------------------------------
ChnsBoxGenerator::ChnsBoxGenerator(Int_t pdgid, Int_t mult) :
  fPDGType(pdgid),fMult(mult),fPDGMass(0),fPtMin(0),fPtMax(0),
  fPhiMin(0),fPhiMax(0),fEtaMin(0),fEtaMax(0),fYMin(0),fYMax(0),
  fPMin(0),fPMax(0),fThetaMin(0),fThetaMax(0),fX(0),fY(0),fZ(0),
  fX1(0),fY1(0),fX2(0),fY2(0),fEkinMin(0),fEkinMax(0),
  fEtaRangeIsSet(0), fYRangeIsSet(0),fThetaRangeIsSet(0),
  fCosThetaIsSet(0), fPtRangeIsSet(0), fPRangeIsSet(0),
  fPointVtxIsSet(0),fBoxVtxIsSet(0),fDebug(0), fEkinRangeIsSet(0)
{
  // Constructor. Set default kinematics limits

 
  if(abs(pdgid)>=1000) { // use ion

    FairRunSim* run = FairRunSim::Instance();
    if (!run)
      {
	cout << "-E- ChnsIQMDGenerator: No FairRun instantised!" << endl;
	Fatal("ChnsIQMDGenerator", "No FairRun instantised!");
      }
    
    // add pdgid into pdg database
    
    Int_t iz = floor(pdgid / 10000) - 1000*floor(pdgid / 10000000);
    Int_t ia = floor(pdgid / 10) - 1000*floor(pdgid / 10000);
    Int_t in = ia - iz;
    
    string fIon_name = "Ion";
    string fIon_name_2nd = std::to_string(pdgid);
    fIon_name.append(fIon_name_2nd);
    
	cout<<"---------------------------------------------"<<endl;
	cout<<endl<<"ChnsBoxGenerator add pdgid : "<<pdgid<<endl;
	cout<<endl<<"iz  : "<<iz<<endl;
	cout<<endl<<"in : "<<in<<endl;
	cout<<endl<<"ia : "<<ia<<endl;
	cout<<endl<<"fIon_name :"<<fIon_name<<endl;
	cout<<"---------------------------------------------"<<endl;


    FairIon *ion_tmp = new FairIon(fIon_name.c_str(), iz, ia, iz );
    //      fIonExcited.push_back(ion_tmp);
    run->AddNewIon(ion_tmp);
    count_ionadded++;

  } // use ion
  else { // use electron/muon/gamma

    // hard code
    // do nothing ?

  } // use electron/muon/gamma

  
  // Set default kinematics limits

  SetPhiRange  ();

}

// ------------------------------------------------------------------------
ChnsBoxGenerator::ChnsBoxGenerator(const ChnsBoxGenerator& rhs) :
  FairGenerator(rhs),
  fPDGType(rhs.fPDGType),fMult(rhs.fMult),fPDGMass(rhs.fPDGMass),
  fPtMin(rhs.fPtMin),fPtMax(rhs.fPtMax),
  fPhiMin(rhs.fPhiMin),fPhiMax(rhs.fPhiMax),fEtaMin(rhs.fEtaMin),
  fEtaMax(rhs.fEtaMax),fYMin(rhs.fYMin),fYMax(rhs.fYMax),
  fPMin(rhs.fPMin),fPMax(rhs.fPMax),fThetaMin(rhs.fThetaMin),
  fThetaMax(rhs.fThetaMax),fX(rhs.fX),fY(rhs.fY),fZ(rhs.fZ),
  fX1(rhs.fX1),fY1(rhs.fY1),fX2(rhs.fX2),fY2(rhs.fY2),
  fEkinMin(rhs.fEkinMin),fEkinMax(rhs.fEkinMax),
  fEtaRangeIsSet(rhs.fEtaRangeIsSet), fYRangeIsSet(rhs.fYRangeIsSet),
  fThetaRangeIsSet(rhs.fThetaRangeIsSet),fCosThetaIsSet(rhs.fCosThetaIsSet),
  fPtRangeIsSet(rhs.fPtRangeIsSet), fPRangeIsSet(rhs.fPRangeIsSet),
  fPointVtxIsSet(rhs.fPointVtxIsSet),fBoxVtxIsSet(rhs.fBoxVtxIsSet),
  fDebug(rhs.fDebug), fEkinRangeIsSet(rhs.fEkinRangeIsSet)
{
  // Copy constructor
}

// ------------------------------------------------------------------------
ChnsBoxGenerator& ChnsBoxGenerator::operator=(const ChnsBoxGenerator& rhs)
{
  // Assignment operator

  // check assignment to self
  if (this == &rhs) return *this;

  // base class assignment
  TNamed::operator=(rhs);

  // assignment operator
  fPDGType = rhs.fPDGType;
  fMult = rhs.fMult;
  fPDGMass = rhs.fPDGMass;
  fPtMin = rhs.fPtMin;
  fPtMax = rhs.fPtMax;
  fPhiMin = rhs.fPhiMin;
  fPhiMax = rhs.fPhiMax;
  fEtaMin = rhs.fEtaMin;
  fEtaMax = rhs.fEtaMax;
  fYMin = rhs.fYMin;
  fYMax = rhs.fYMax;
  fPMin = rhs.fPMin;
  fPMax = rhs.fPMax;
  fThetaMin = rhs.fThetaMin;
  fThetaMax = rhs.fThetaMax;
  fX = rhs.fX;
  fY = rhs.fY;
  fZ = rhs.fZ;
  fX1 = rhs.fX1;
  fY1 = rhs.fY1;
  fX2 = rhs.fX2;
  fY2 = rhs.fY2;
  fEkinMin = rhs.fEkinMin;
  fEkinMax = rhs.fEkinMax;
  fEtaRangeIsSet = rhs.fEtaRangeIsSet;
  fYRangeIsSet = rhs.fYRangeIsSet;
  fThetaRangeIsSet = rhs.fThetaRangeIsSet;
  fCosThetaIsSet = rhs.fCosThetaIsSet;
  fPtRangeIsSet = rhs.fPtRangeIsSet;
  fPRangeIsSet = rhs.fPRangeIsSet;
  fPointVtxIsSet = rhs.fPointVtxIsSet;
  fBoxVtxIsSet = rhs.fBoxVtxIsSet;
  fDebug = rhs.fDebug;
  fEkinRangeIsSet = rhs.fEkinRangeIsSet;

  return *this;
}

// ------------------------------------------------------------------------
Bool_t  ChnsBoxGenerator::Init()
{
  // Initialize generator

  // Check for particle type
  TDatabasePDG* pdgBase = TDatabasePDG::Instance();
  TParticlePDG* particle = pdgBase->GetParticle(fPDGType);

  if (! particle) {
    Fatal("ChnsBoxGenerator","PDG code %d not defined.",fPDGType);
  } else {
    fPDGMass = particle->Mass();
    std::cout<< fPDGType <<"   " << fPDGMass << std::endl;
  }

  if (fPhiMax-fPhiMin>360){
    Fatal("Init()","ChnsBoxGenerator: phi range is too wide: %f<phi<%f",
          fPhiMin,fPhiMax);
  }
  if (fEkinRangeIsSet){
    if (fPRangeIsSet){
      Fatal("Init()","ChnsBoxGenerator: Cannot set P and Ekin ranges simultaneously");
    } else {
      // Transform EkinRange to PRange, calculate momentum in GeV, p = √(K² + 2Kmc²)
      fPMin = TMath::Sqrt(fEkinMin*fEkinMin + 2*fEkinMin*fPDGMass);
      fPMax = TMath::Sqrt(fEkinMax*fEkinMax + 2*fEkinMax*fPDGMass);
      fPRangeIsSet = kTRUE;
      fEkinRangeIsSet = kFALSE;
    }
  }
  if (fPRangeIsSet && fPtRangeIsSet) {
    Fatal("Init()","ChnsBoxGenerator: Cannot set P and Pt ranges simultaneously");
  }
  if (fPRangeIsSet && fYRangeIsSet) {
    Fatal("Init()","ChnsBoxGenerator: Cannot set P and Y ranges simultaneously");
  }
  if ( (fThetaRangeIsSet && fYRangeIsSet) ||
       (fThetaRangeIsSet && fEtaRangeIsSet) ||
       (fYRangeIsSet     && fEtaRangeIsSet) ) {
    Fatal("Init()","ChnsBoxGenerator: Cannot set Y, Theta or Eta ranges simultaneously");
  }
  if (fPointVtxIsSet && fBoxVtxIsSet) {
    Fatal("Init()","ChnsBoxGenerator: Cannot set point and box vertices simultaneously");
  }


  return kTRUE;
}

// ------------------------------------------------------------------------
Bool_t ChnsBoxGenerator::ReadEvent(FairPrimaryGenerator* primGen)
{
  // Generate one event: produce primary particles emitted from one vertex.
  // Primary particles are distributed uniformly along
  // those kinematics variables which were limitted by setters.
  // if SetCosTheta() function is used, the distribution will be uniform in
  // cos(theta)

  Double32_t pabs=0, phi, pt=0, theta=0, eta, y, mt, px, py, pz=0;

  // Generate particles
  for (Int_t k = 0; k < fMult; k++) {
    phi = gRandom->Uniform(fPhiMin,fPhiMax) * TMath::DegToRad();

    if      (fPRangeIsSet ) { pabs = gRandom->Uniform(fPMin,fPMax); }
    else if (fPtRangeIsSet) { pt   = gRandom->Uniform(fPtMin,fPtMax); }

    if      (fThetaRangeIsSet) {
      if (fCosThetaIsSet)
        theta = acos(gRandom->Uniform(cos(fThetaMin* TMath::DegToRad()),
                                      cos(fThetaMax* TMath::DegToRad())));
      else {
        theta = gRandom->Uniform(fThetaMin,fThetaMax) * TMath::DegToRad();
      }
    } else if (fEtaRangeIsSet) {
      eta   = gRandom->Uniform(fEtaMin,fEtaMax);
      theta = 2*TMath::ATan(TMath::Exp(-eta));
    } else if (fYRangeIsSet) {
      y     = gRandom->Uniform(fYMin,fYMax);
      mt = TMath::Sqrt(fPDGMass*fPDGMass + pt*pt);
      pz = mt * TMath::SinH(y);
    }

    if (fThetaRangeIsSet || fEtaRangeIsSet) {
      if      (fPRangeIsSet ) {
        pz = pabs*TMath::Cos(theta);
        pt = pabs*TMath::Sin(theta);
      } else if (fPtRangeIsSet) {
        pz = pt/TMath::Tan(theta);
      }
    }

    px = pt*TMath::Cos(phi);
    py = pt*TMath::Sin(phi);

    if (fBoxVtxIsSet) {
      fX = gRandom->Uniform(fX1,fX2);
      fY = gRandom->Uniform(fY1,fY2);
    }

    if (fDebug)
      printf("BoxGen: kf=%d, mass=%f, p=(%.2f, %.2f, %.2f) GeV, x=(%.1f, %.1f, %.1f) cm\n",
             fPDGType, fPDGMass, px, py, pz, fX, fY, fZ);

    primGen->AddTrack(fPDGType, px, py, pz, fX, fY, fZ);
  }
  return kTRUE;

}

// ------------------------------------------------------------------------
FairGenerator* ChnsBoxGenerator::CloneGenerator() const
{
  // Clone for worker (used in MT mode only)

  return new ChnsBoxGenerator(*this);
}


// ------------------------------------------------------------------------


ClassImp(ChnsBoxGenerator)
