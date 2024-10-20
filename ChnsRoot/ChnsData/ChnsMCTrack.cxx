/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/

// -------------------------------------------------------------------------
// -----                   ChnsMCTrack source file                   -----
// -----                  M. Al-Turany   June 2014                     -----
// ----- This is a light weight particle class that is saved to disk
// ----- instead of saveing the TParticle class
// ----- IT is also used for filtring the stack
// -------------------------------------------------------------------------

#include "ChnsMCTrack.h"

#include "FairLogger.h"   // for FairLogger, etc

#include <TDatabasePDG.h>   // for TDatabasePDG
#include <TParticle.h>      // for TParticle
#include <TParticlePDG.h>   // for TParticlePDG

// -----   Default constructor   -------------------------------------------
ChnsMCTrack::ChnsMCTrack()
    : TObject()
    , fPdgCode(0)
    , fMotherId(-1)
    , fPx(0.)
    , fPy(0.)
    , fPz(0.)
    , fStartX(0.)
    , fStartY(0.)
    , fStartZ(0.)
    , fStartT(0.)
    , fNPoints(0)
{}
// -------------------------------------------------------------------------

// -----   Standard constructor   ------------------------------------------
ChnsMCTrack::ChnsMCTrack(Int_t pdgCode,
                             Int_t motherId,
                             Double_t px,
                             Double_t py,
                             Double_t pz,
                             Double_t x,
                             Double_t y,
                             Double_t z,
                             Double_t t,
                             Int_t nPoints = 0)
    : TObject()
    , fPdgCode(pdgCode)
    , fMotherId(motherId)
    , fPx(px)
    , fPy(py)
    , fPz(pz)
    , fStartX(x)
    , fStartY(y)
    , fStartZ(z)
    , fStartT(t)
    , fNPoints(nPoints)
{}
// -------------------------------------------------------------------------

// -----   Copy constructor   ----------------------------------------------
ChnsMCTrack::ChnsMCTrack(const ChnsMCTrack& track)
    : TObject(track)
    , fPdgCode(track.fPdgCode)
    , fMotherId(track.fMotherId)
    , fPx(track.fPx)
    , fPy(track.fPy)
    , fPz(track.fPz)
    , fStartX(track.fStartX)
    , fStartY(track.fStartY)
    , fStartZ(track.fStartZ)
    , fStartT(track.fStartT)
    , fNPoints(track.fNPoints)
{}
// -------------------------------------------------------------------------

// -----   Constructor from TParticle   ------------------------------------
ChnsMCTrack::ChnsMCTrack(TParticle* part)
    : TObject()
    , fPdgCode(part->GetPdgCode())
    , fMotherId(part->GetMother(0))
    , fPx(part->Px())
    , fPy(part->Py())
    , fPz(part->Pz())
    , fStartX(part->Vx())
    , fStartY(part->Vy())
    , fStartZ(part->Vz())
    , fStartT(part->T() * 1e09)
    , fNPoints(0)
{}
// -------------------------------------------------------------------------

// -----   Destructor   ----------------------------------------------------
ChnsMCTrack::~ChnsMCTrack() {}
// -------------------------------------------------------------------------

// -----   Public method Print   -------------------------------------------
void ChnsMCTrack::Print(Int_t trackId) const
{
    LOG(debug) << "Track " << trackId << ", mother : " << fMotherId << ", Type " << fPdgCode << ", momentum (" << fPx
               << ", " << fPy << ", " << fPz << ") GeV";
    /* LOG(debug2) << "       Ref " << GetNPoints(kREF)
              << ", TutDet " << GetNPoints(kTutDet)
              << ", Rutherford " << GetNPoints(kFairRutherford);
*/
}
// -------------------------------------------------------------------------

// -----   Public method GetMass   -----------------------------------------
Double_t ChnsMCTrack::GetMass() const
{
	if (fPdgCode==1000010020) return 1.8761223;
	if (fPdgCode==1000010030) return 2.809386;
	if (fPdgCode==1000020030) return 2.80923;
	if (fPdgCode==1000020040) return 3.727379;
	if (fPdgCode==1010010030) return 2.9913;
	if (fPdgCode==1010010040) return 3.92503;

    if (TDatabasePDG::Instance()) {
        TParticlePDG* particle = TDatabasePDG::Instance()->GetParticle(fPdgCode);
        if (particle) {
            return particle->Mass();
        } else {
            return 0.;
        }
    }
    return 0.;
}
// -------------------------------------------------------------------------

// -----   Public method GetRapidity   -------------------------------------
Double_t ChnsMCTrack::GetRapidity() const
{
    Double_t e = GetEnergy();
    Double_t y = 0.5 * TMath::Log((e + fPz) / (e - fPz));
    return y;
}
// -------------------------------------------------------------------------

TLorentzVector ChnsMCTrack::Get4Momentum() const {
/*
    Double_t mass=0.0;
    Double_t ene=0.0;
    TParticlePDG*
    fParticlePDG = TDatabasePDG::Instance()->GetParticle(fPdgCode);

    if (fParticlePDG)
     mass   = fParticlePDG->Mass();

    if ( mass >= 0 ) {
        ene  = TMath::Sqrt(mass*mass + fPx*fPx +fPy*fPy +fPz*fPz);
    }
*/
	double fE = GetEnergy();
   return TLorentzVector(fPx,fPy,fPz,fE);
}



// -----   Public method GetNPoints   --------------------------------------
Int_t ChnsMCTrack::GetNPoints(DetectorId detId) const
{
    /*  // TODO: Where does this come from
  if      ( detId == kREF  ) { return (  fNPoints &   1); }
  else if ( detId == kTutDet  ) { return ( (fNPoints & ( 7 <<  1) ) >>  1); }
  else if ( detId == kFairRutherford ) { return ( (fNPoints & (31 <<  4) ) >>  4); }
  else {
    LOG(error) << "Unknown detector ID " << detId;
    return 0;
  }
*/
}
// -------------------------------------------------------------------------

// -----   Public method SetNPoints   --------------------------------------
void ChnsMCTrack::SetNPoints(Int_t iDet, Int_t nPoints)
{
    /*
  if ( iDet == kREF ) {
    if      ( nPoints < 0 ) { nPoints = 0; }
    else if ( nPoints > 1 ) { nPoints = 1; }
    fNPoints = ( fNPoints & ( ~ 1 ) )  |  nPoints;
  }

  else if ( iDet == kTutDet ) {
    if      ( nPoints < 0 ) { nPoints = 0; }
    else if ( nPoints > 7 ) { nPoints = 7; }
    fNPoints = ( fNPoints & ( ~ (  7 <<  1 ) ) )  |  ( nPoints <<  1 );
  }

  else if ( iDet == kFairRutherford ) {
    if      ( nPoints <  0 ) { nPoints =  0; }
    else if ( nPoints > 31 ) { nPoints = 31; }
    fNPoints = ( fNPoints & ( ~ ( 31 <<  4 ) ) )  |  ( nPoints <<  4 );
  }

  else LOG(error) << "Unknown detector ID " << iDet;
*/
}
// -------------------------------------------------------------------------

ClassImp(ChnsMCTrack);
