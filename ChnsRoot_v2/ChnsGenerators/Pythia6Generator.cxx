/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
// -------------------------------------------------------------------------
// -----                  M. Al-Turany   June 2014                     -----
// -------------------------------------------------------------------------
// -------------------------------------------------------------------------
// -----             Pythia6Generator source file                      -----
// -----          Created 08/08/08  by S. Spataro                      -----
// -------------------------------------------------------------------------
#include "Pythia6Generator.h"

#include "FairLogger.h"
#include "FairPrimaryGenerator.h"

#include <cstdio>
#include <iostream>

using std::cout;
using std::endl;
using std::max;

// -----   Default constructor   ------------------------------------------
Pythia6Generator::Pythia6Generator() {}
// ------------------------------------------------------------------------

// -----   Standard constructor   -----------------------------------------
Pythia6Generator::Pythia6Generator(const char* fileName)
{
    fFileName = fileName;
    fVerbose = 0;
    cout << "-I Pythia6Generator: Opening input file " << fileName << endl;

    if ((fInputFile = fopen(fFileName, "r")) == NULL)
        //  fInputFile = new ifstream(fFileName);
        //  if ( ! fInputFile->is_open() )
        LOG(fatal) << "Pythia6Generator: Cannot open input file.";
    // fPDG=TDatabasePDG::Instance();

    char str_dummy_header[500];
    fgets(str_dummy_header, 500, fInputFile);
    fgets(str_dummy_header, 500, fInputFile);
    fgets(str_dummy_header, 500, fInputFile);
    fgets(str_dummy_header, 500, fInputFile);
    fgets(str_dummy_header, 500, fInputFile);
    fgets(str_dummy_header, 500, fInputFile);

}
// ------------------------------------------------------------------------

// -----   Destructor   ---------------------------------------------------
Pythia6Generator::~Pythia6Generator() { CloseInput(); }
// ------------------------------------------------------------------------

// -----   Public method ReadEvent   --------------------------------------
Bool_t Pythia6Generator::ReadEvent(FairPrimaryGenerator* primGen)
{

    // Check for input file
    if (!fInputFile) {
        // if ( ! fInputFile->is_open() ) {
        cout << "-E Pythia6Generator: Input file not open!" << endl;
        return kFALSE;
    }


    // Define event variable to be read from file
    Int_t ntracks = 0, eventID = 0, ncols = 0;

    std::string st_dummy, line;
    int lineno, ieve, genevent, subprocess, nucleon, targetparton, beamparton, nrTracks;
    float xtargparton, xbeamparton, thetabeamprtn, y, Q2, x, W2, Nu, leptonphi, s_hat, t_hat, u_hat, pt2_hat, Q2_hat, F2, F1, R, sigma_rad, SigRadCor, EBrems, photonflux, tdiff;

    ncols = fscanf(fInputFile, "%d %d %d %d %d %d %f %d %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %d",
		     &lineno,
		     &ieve,
		     &genevent,
		     &subprocess,
		     &nucleon,
		     &targetparton,
		     &xtargparton,
		     &beamparton,
		     &xbeamparton,
		     &thetabeamprtn,
		     &y,
		     &Q2,
		     &x,
		     &W2,
		     &Nu,
		     &leptonphi, 
		     &s_hat, 
		     &t_hat, 
		     &u_hat, 
		     &pt2_hat,
		     &Q2_hat,
		     &F2, 
		     &F1, 
		     &R, 
		     &sigma_rad, 
		     &SigRadCor, 
		     &EBrems, 
		     &photonflux, 
		     &tdiff, 
		     &nrTracks  
		    );


    // Define track variables to be read from file
    Int_t nLev = 0, pdgID = 0, nM1 = -1, nM2 = -1, nDF = -1, nDL = -1;
    Float_t fPx = 0., fPy = 0., fPz = 0., fM = 0., fE = 0.;
    Float_t fVx = 0., fVy = 0., fVz = 0., fT = 0.;

    // Read event header line from input file

    ncols = fscanf(fInputFile, "%d\t%d", &eventID, &ntracks);

    char str_dummy[300], str_dummy2[300], str_dummy3[300], str_dummy4[300], str_dummy5[300], str_dummy6[300];

    if ( nrTracks > 0) {

        if (fVerbose > 0)
            cout << "Event number: " << ieve << "\tNtracks: " << ntracks << endl;

//	fscanf(fInputFile, "%s", str_dummy);
	fgets(str_dummy, 300, fInputFile);
	
        for (Int_t ll = 0; ll < nrTracks; ll++) {
		
            ncols = fscanf(fInputFile,
                           "%d %d %d %d  %d %d %f %f %f %f %f %f %f %f",
                           &lineno,
			   &nLev,
                           &pdgID,
                           &nM1,
                           //&nM2,
                           &nDF,
                           &nDL,
                           &fPx,
                           &fPy,
                           &fPz,
                           &fE,
                           &fM,
                           &fVx,
                           &fVy,
                           &fVz
                           );
			   
            if (fVerbose > 0)
                cout << nLev << "\t" << pdgID << "\t" << nM1 << "\t" << nM2 << "\t" << nDF << "\t" << nDL << "\t" << fPx
                     << "\t" << fPy << "\t" << fPz << "\t" << fE << "\t" << fM << "\t" << fVx << "\t" << fVy << "\t"
                     << fVz << "\t" << fT << endl;
            if (nLev == 1)
                primGen->AddTrack(pdgID, fPx, fPy, fPz, fVx, fVy, fVz);
        }

	//fscanf(fInputFile, "%s %s %s %s", str_dummy2, str_dummy3, str_dummy4, str_dummy5);
	//fscanf(fInputFile, "%[^\n]\n", str_dummy2);
	//memset(str_dummy2, 0, sizeof(str_dummy2));
	fgets(str_dummy3, 300, fInputFile);
	fgets(str_dummy3, 300, fInputFile);
    } else {
        cout << "-I Pythia6Generator: End of input file reached " << endl;
        CloseInput();
        return kFALSE;
    }

    // If end of input file is reached : close it and abort run
    if (feof(fInputFile)) {
        cout << "-I Pythia6Generator: End of input file reached " << endl;
        CloseInput();
        return kFALSE;
    }

    /*
    cout << "-I Pythia6Generator: Event " << eventID << ",  vertex = ("
    << vx << "," << vy << "," << vz << ") cm,  multiplicity "
    << ntracks << endl;
  */

    return kTRUE;
}
// ------------------------------------------------------------------------

// -----   Private method CloseInput   ------------------------------------
void Pythia6Generator::CloseInput()
{
    if (fInputFile) {
        // if ( fInputFile->is_open() ) {
        {
            cout << "-I Pythia6Generator: Closing input file " << fFileName << endl;
            //  fInputFile->close();

            fclose(fInputFile);
        }
        delete fInputFile;
        fInputFile = NULL;
    }
}
// ------------------------------------------------------------------------

ClassImp(Pythia6Generator);
