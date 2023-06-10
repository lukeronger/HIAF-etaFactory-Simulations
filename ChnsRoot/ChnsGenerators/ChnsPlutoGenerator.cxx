// -------------------------------------------------------------------------
// -----                ChnsPlutoGenerator source file                  -----
// -----          Created 13/07/04  by V. Friese / D.Bertini           -----
// -----      Modified from FairPlutoGenerator for CEE by V. Zhezher   -----
// -------------------------------------------------------------------------
#include "ChnsPlutoGenerator.h"

#include "FairPrimaryGenerator.h"

#include "TClonesArray.h"
#include "TDatabasePDG.h"
#include "TFile.h"
#include "TLorentzVector.h"
#include "TTree.h"
#include "TVector3.h"
#include "PParticle.h"

#include <iostream>

using namespace std;

const Double_t kProtonMass = 0.938271998;
const Double_t kElectronMass = 0.00051098892;

// -----   Default constructor   ------------------------------------------
ChnsPlutoGenerator::ChnsPlutoGenerator()
  :FairGenerator(),
   iEvent(0),
   fEkin(0),
   fFileName(NULL),
   fInputFile(NULL),
   fInputTree(NULL),
   fParticles(NULL)
{
}
// ------------------------------------------------------------------------


// -----   Standard constructor   -----------------------------------------
ChnsPlutoGenerator::ChnsPlutoGenerator(const Char_t* fileName, Double_t ekin = 25.0)
  :FairGenerator(),
   iEvent(0),
   fFileName(fileName),
   fInputFile(new TFile(fileName)),
   fInputTree(NULL),
   fParticles(new TClonesArray("PParticle",100))
{
  fEkin      = ekin;
  fInputTree = (TTree*) fInputFile->Get("data");
  fInputTree->SetBranchAddress("Particles", &fParticles);
}
// ------------------------------------------------------------------------


// -----   Destructor   ---------------------------------------------------
ChnsPlutoGenerator::~ChnsPlutoGenerator() {
  CloseInput();
}
// ------------------------------------------------------------------------


// -----   Public method ReadEvent   --------------------------------------
Bool_t ChnsPlutoGenerator::ReadEvent(FairPrimaryGenerator* primGen) {

  // Check for input file
  if ( ! fInputFile ) {
    cout << "-E ChnsPlutoGenerator: Input file nor open!" << endl;
    return kFALSE;
  }

  // Check for number of events in input file
  if ( iEvent > fInputTree->GetEntries() ) {
    cout << "-E ChnsPlutoGenerator: No more events in input file!" << endl;
    CloseInput();
    return kFALSE;
  }
  TFile  *g=gFile;
  fInputFile->cd();
  fInputTree->GetEntry(iEvent++);
  g->cd();

  // Get PDG database
  TDatabasePDG* dataBase = TDatabasePDG::Instance();

  // Get number of particle in TClonesrray
  Int_t nParts = fParticles->GetEntriesFast();

  // Loop over particles in TClonesArray
  for (Int_t iPart=0; iPart < nParts; iPart++) {
    PParticle* part = (PParticle*) fParticles->At(iPart);
    Int_t pdgType = dataBase->ConvertGeant3ToPdg( part->ID() );
    if(part->ID()==45) pdgType = CalculatePDG(1, 1); //deuteron
    if(part->ID()==55) pdgType = 333; //phi

    // Check if particle type is known to database
    if ( ! pdgType ) {
      cout << "-W ChnsPlutoGenerator: Unknown type " << part->ID()
       << ", skipping particle." << endl;
      continue;
    }

    TLorentzVector mom = part->Vect4();
    Double_t px = mom.Px();
    Double_t py = mom.Py();
    Double_t pz = mom.Pz();

    TVector3 vertex = part->getVertex();
    Double_t vx = vertex.x();
    Double_t vy = vertex.y();
    Double_t vz = vertex.z();
   
    // ---> Calculate beta and gamma for Lorentztransformation
    Double_t eBeam   = fEkin + kProtonMass;
    Double_t pBeam   = TMath::Sqrt(eBeam*eBeam - kProtonMass*kProtonMass);
    Double_t betaCM  = pBeam / (eBeam + kProtonMass);
    Double_t gammaCM = TMath::Sqrt( 1. / ( 1. - betaCM*betaCM) );

    //AZ Double_t mass = kElectronMass;
    Double_t mass = dataBase->GetParticle(pdgType)->Mass();
    Double_t e    = sqrt( mass*mass + px*px + py*py + pz*pz );
    pz = gammaCM * ( pz - betaCM * e );


    // Give track to PrimaryGenerator
    //primGen->AddTrack(pdgType, px, py, pz, vx, vy, vz);
    //AZ - keep track of parents
    Int_t parentIndx = part->GetParentIndex();
    primGen->AddTrack(pdgType, px, py, pz, vx, vy, vz, -parentIndx-10);
    //AZ

  }        //  Loop over particle in event

  return kTRUE;

}
// ------------------------------------------------------------------------

// --------------------- Calculate Ion PDG --------------------------------
Int_t ChnsPlutoGenerator::CalculatePDG(Int_t Np, Int_t Nn)
{
	Int_t PDG;
       if ( Np == 1 && Nn == 0) 
	       PDG = 2212;
       else if ( Np == 0 && Nn == 1) 
	       PDG = 2112;
       else
	       PDG = 1000000000 + Np * 10000 + (Np + Nn) * 10;
       return PDG;

}
// ------------------------------------------------------------------------

// -----   Public method SkipEvents   --------------------------------------

Bool_t ChnsPlutoGenerator::SkipEvents(Int_t count) {
  if (count<=0) return kTRUE;

  iEvent = count;

  std::cout << "-I ChnsPlutoGenerator: Skipped " << count << " Events!" << std::endl;

  return kTRUE;
}




// -----   Private method CloseInput   ------------------------------------
void ChnsPlutoGenerator::CloseInput() {
  if ( fInputFile ) {
    cout << "-I ChnsPlutoGenerator: Closing input file " << fFileName
     << endl;
    fInputFile->Close();
    delete fInputFile;
  }
  fInputFile = NULL;
}
// ------------------------------------------------------------------------



ClassImp(ChnsPlutoGenerator)
