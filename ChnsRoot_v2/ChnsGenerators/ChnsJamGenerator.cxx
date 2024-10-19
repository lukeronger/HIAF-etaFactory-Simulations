#include "ChnsJamGenerator.h"

#include "FairPrimaryGenerator.h"
#include "FairMCEventHeader.h"
#include "constants.h"

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

#include <cstring>
#include <stdio.h>

using namespace std;
using namespace TMath;

//const Double_t kProtonMass = 0.938271998;


// -----   Default constructor   ------------------------------------------

ChnsJamGenerator::ChnsJamGenerator()
: FairGenerator(),
fInputFile(NULL),
fParticleTable(),
fChoosedParticleList(),
fFileName(NULL),
fPhiMin(0.),
fPhiMax(0.),
fEventPlaneSet(kFALSE) {
}
// ------------------------------------------------------------------------



// -----   Standard constructor   -----------------------------------------

ChnsJamGenerator::ChnsJamGenerator(const char* fileName)
: FairGenerator(),
fInputFile(NULL),
fParticleTable(),
fChoosedParticleList(),
fChoosedParticle(false){
	cout << "-I ChnsJamGenerator: Opening input file list" << fileName << endl;

	fin.open(fileName);
	getline(fin, linename);
	fInputFile = fopen(linename.c_str(), "r");

	if (!fInputFile) {
		Fatal("ChnsJamGenerator", "Cannot open the 1st input file.");
		exit(1);
	}
	char read[200];
	fgets(read, 200, fInputFile);
	ReadConversionTable();
}
// ------------------------------------------------------------------------

// -----   Destructor   ---------------------------------------------------

ChnsJamGenerator::~ChnsJamGenerator() {
    //  cout<<"Enter Destructor of ChnsJamGenerator"<<endl;
		fin.close();

    if (fInputFile) {
        fclose(fInputFile);
        fInputFile = NULL;
    }
    fParticleTable.clear();
    fChoosedParticleList.clear();
    //  cout<<"Leave Destructor of ChnsJamGenerator"<<endl;
}
// ------------------------------------------------------------------------



// -----   Public method ReadEvent   --------------------------------------

Bool_t ChnsJamGenerator::ReadEvent(FairPrimaryGenerator* primGen) {

    // ---> Check for primary generator
    if (!primGen) {
        cout << "-E- ChnsJamGenerator::ReadEvent: "
                << "No PrimaryGenerator!" << endl;
        return kFALSE;
    }

    char read[200];
    fscanf(fInputFile, "%s", read);
    if ( feof(fInputFile) ) {
        //cout << "-I ChnsJamGenerator : End of input file reached." << endl;
				if( !fin.eof()) {
					getline(fin, linename);
					cout << "-I ChnsJamGenerator : input file " << linename << endl;
					fInputFile = NULL;
					fInputFile = fopen(linename.c_str(), "r");
					if (!fInputFile) {
						Fatal("ChnsJamGenerator", "Cannot open input file.");
						exit(1);
					}
					char read1[200];
					fgets(read1, 200, fInputFile);
					fscanf(fInputFile, "%s", read);
				}
				else{
					fclose(fInputFile);
        	fInputFile = NULL;
          return kFALSE;
				}
    }
    // ---> Define event variables to be read from file
    int evnr = 0, ntracks = 0, ncollG=0, npartG=0, npart=0;
    float b = 0., ekin=0;

    int ks=-1, pid = 0, ncoll=0;
    float ppx = 0., ppy = 0., ppz = 0., m = 0.;

    // ---> Read and check first event header line from input file
    if (read[0] != '#') {
        cout << "-E ChnsJamGenerator: Wrong event header" << endl;
        return kFALSE;
    }

    // ---> Read rest of event header
    fscanf(fInputFile, "%d", &evnr);
    fscanf(fInputFile, "%d", &ntracks);
    fscanf(fInputFile, "%d", &ncollG);
    fscanf(fInputFile, "%d", &npartG);
    fscanf(fInputFile, "%f", &b);
    fscanf(fInputFile, "%d", &npart);
    fgets(read, 200, fInputFile);

    // ---> Calculate beta and gamma for Lorentztransformation
    TDatabasePDG* pdgDB = TDatabasePDG::Instance();
    TParticlePDG* kProton = pdgDB->GetParticle(2212);
    Double_t kProtonMass = kProton->Mass();

		ekin = 2.0; // only for 2GeV case
    Double_t eBeam = ekin + kProtonMass;
    Double_t pBeam = TMath::Sqrt(eBeam * eBeam - kProtonMass * kProtonMass);
    Double_t betaCM = pBeam / (eBeam + kProtonMass);
    Double_t gammaCM = TMath::Sqrt(1. / (1. - betaCM * betaCM));

    if(evnr%1000 == 0) 
			cout << "-I ChnsJamGenerator: Event " << evnr << ",  b = " << b
            << " fm,  multiplicity " << ntracks <<  endl;


    Double_t phi = 0.;
    // ---> Generate rotation angle
    //if (fEventPlaneSet) {
    //    gRandom->SetSeed(0);
    //    phi = gRandom->Uniform(fPhiMin, fPhiMax);
    //}

    // Set event id and impact parameter in MCEvent if not yet done
    FairMCEventHeader* event = primGen->GetEvent();
    if (event && (!event->IsSet())) {
        event->SetEventID(evnr);
        event->SetB(b);
        event->MarkSet(kTRUE);
        event->SetNPrim(ntracks);
        event->Register();
    }


    // ---> Loop over tracks in the current event
		int saveTrack = 0;
    for (int itrack = 0; itrack < ntracks; itrack++) {

        // Read momentum and PID from file
        fscanf(fInputFile, "%d", &ks);
        fscanf(fInputFile, "%d", &pid);
        fscanf(fInputFile, "%d", &ncoll);
        fscanf(fInputFile, "%e", &m);
        fscanf(fInputFile, "%e", &ppx);
        fscanf(fInputFile, "%e", &ppy);
        fscanf(fInputFile, "%e", &ppz);
        fgets(read, 200, fInputFile);

				if(abs(ncoll)==1 ) continue; // skip the particle from spectators

        // Lorentztransformation to lab
        Double_t mass = Double_t(m);
        Double_t px = Double_t(ppx);
        Double_t py = Double_t(ppy);
        Double_t pz = Double_t(ppz);
        Double_t e = sqrt(mass * mass + px * px + py * py + pz * pz);
        if (gCoordinateSystem == sysLaboratory)
            pz = gammaCM * (pz + betaCM * e); //converte the pz from mass-center frame to laboratory frame
        Double_t ee = sqrt(mass * mass + px * px + py * py + pz * pz);

        //if (fEventPlaneSet) {
        //    Double_t pt = Sqrt(px * px + py * py);
        //    Double_t azim = ATan2(py, px);
        //    azim += phi;
        //    px = pt * Cos(azim);
        //    py = pt * Sin(azim);
        //}

        TLorentzVector pp;
        pp.SetPx(px);
        pp.SetPy(py);
        pp.SetPz(pz);
        pp.SetE(ee);

        // Give track to PrimaryGenerator
        if (fChoosedParticle)
        {
           Int_t vsize = fChoosedParticleList.size();
           for (int k=0; k<vsize; k++){
              Int_t PdgTmp = fChoosedParticleList[k];
              if (pid == PdgTmp) {
                  primGen->AddTrack(pid, px, py, pz, 0., 0., 0.);
                  continue;
              }
           }
        }
        else{
        	if(pid%1000<40) primGen->AddTrack(pid, px, py, pz, 0., 0., 0.);
        }
    }

    return kTRUE;
}
// ------------------------------------------------------------------------


// -----   Public method SkipEvent   --------------------------------------

Bool_t ChnsJamGenerator::SkipEvents(Int_t count) {
    if (count <= 0) {
        return kTRUE;
    }

    for (Int_t ii = 0; ii < count; ii++) {
        // ---> Check for input file
        if (!fInputFile) {
            cout << "-E ChnsJamGenerator: Input file not open! " << endl;
            return kFALSE;
        }

				// ---> Define event variables to be read from file
				int evnr = 0, ntracks = 0, ncollG=0, npartG=0, npart=0;
				float b = 0., ekin=0;

				int ks=-1, pid = 0, ncoll=0;
				float ppx = 0., ppy = 0., ppz = 0., m = 0.;

				// ---> Read and check first event header line from input file
				char read[200];
				fscanf(fInputFile, "%s", read);
				if ( feof(fInputFile) ) {
					cout << "-I ChnsJamGenerator : End of input file reached." << endl;
					fclose(fInputFile);
					fInputFile = NULL;
					return kFALSE;
				}
				if (read[0] != '#') {
					cout << "-E ChnsJamGenerator: Wrong event header" << endl;
					return kFALSE;
				}

				// ---> Read rest of event header
				fscanf(fInputFile, "%d", &evnr);
				fscanf(fInputFile, "%d", &ntracks);
				fscanf(fInputFile, "%d", &ncollG);
				fscanf(fInputFile, "%d", &npartG);
				fscanf(fInputFile, "%f", &b);
				fscanf(fInputFile, "%d", &npart);
				fgets(read, 200, fInputFile);

				if(npart==0) return kFALSE;
        // ---> Loop over tracks in the current event
        for (int itrack = 0; itrack < ntracks; itrack++) {

            // Read momentum and PID from file
            fgets(read, 200, fInputFile);
        }
    }
    return kTRUE;
}
// ------------------------------------------------------------------------

// -----   Private method ReadConverisonTable   ---------------------------

void ChnsJamGenerator::ReadConversionTable() {

    TString work = getenv("VMCWORKDIR");
    TString fileName = work + "/input/urqmd_pdg.dat";
    ifstream* pdgconv = new ifstream(fileName.Data());

    Int_t index = 0;
    Int_t pdgId = 0;

    while (!pdgconv->eof()) {
        index = pdgId = 0;
        *pdgconv >> index >> pdgId;
        fParticleTable[index] = pdgId;
    }

    pdgconv->close();
    delete pdgconv;

    cout << "-I ChnsJamGenerator: Particle table for conversion from "
            << "Jam loaded" << endl;

}
// ------------------------------------------------------------------------

void ChnsJamGenerator::SetEventPlane(Double_t phiMin, Double_t phiMax) {
    fPhiMin = phiMin;
    fPhiMax = phiMax;
    fEventPlaneSet = kTRUE;
}

// ------------------------------------------------------------------------
void ChnsJamGenerator::ChooseParticle(Int_t Pdg){
   fChoosedParticle = true;
   fChoosedParticleList.push_back(Pdg);
   cout<<"Particle with PdgID : " << Pdg << " added in the chosen particle list ..." << endl;
}


ClassImp(ChnsJamGenerator);
