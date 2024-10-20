/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/

// -------------------------------------------------------------------------
// -----                  ChnsMCTrack header file                  -----
// -----                  M. Al-Turany   June 2014                     -----
// -------------------------------------------------------------------------

/** ChnsMCTrack.h
 ** Data class for storing Monte Carlo tracks processed by the ChnsStack.
 ** A ChnsMCTrack can be a primary track put into the simulation or a
 ** secondary one produced by the transport through decay or interaction.
 **/

#ifndef ChnsMCTrack_H
#define ChnsMCTrack_H 1

#include "ChnsDetectorList.h"   // for DetectorId

#include <Rtypes.h>           // for Double_t, Int_t, Double32_t, etc
#include <TLorentzVector.h>   // for TLorentzVector
#include <TMath.h>            // for Sqrt
#include <TObject.h>          // for TObject
#include <TVector3.h>         // for TVector3

class TParticle;

class ChnsMCTrack : public TObject
{

  public:
    /**  Default constructor  **/
    ChnsMCTrack();

    /**  Standard constructor  **/
    ChnsMCTrack(Int_t pdgCode,
                  Int_t motherID,
                  Double_t px,
                  Double_t py,
                  Double_t pz,
                  Double_t x,
                  Double_t y,
                  Double_t z,
                  Double_t t,
                  Int_t nPoints);

    /**  Copy constructor  **/
    ChnsMCTrack(const ChnsMCTrack& track);

    /**  Constructor from TParticle  **/
    ChnsMCTrack(TParticle* particle);

    /**  Destructor  **/
    virtual ~ChnsMCTrack();

    /**  Output to screen  **/
    void Print(Int_t iTrack = 0) const;

    /**  Accessors  **/
    Int_t GetPdgCode() const { return fPdgCode; }
    Int_t GetMotherId() const { return fMotherId; }
    Int_t GetMotherID() const { return fMotherId; }  //yutie 0323  to back compatible with previous version

    Int_t GetSecondMotherId() const { return fSecondMotherId; }
    Int_t GetSecondMotherID() const { return fSecondMotherId; }  //yutie 0323  to back compatible with previous version

    Double_t GetPx() const { return fPx; }
    Double_t GetPy() const { return fPy; }
    Double_t GetPz() const { return fPz; }
    Double_t GetStartX() const { return fStartX; }
    Double_t GetStartY() const { return fStartY; }
    Double_t GetStartZ() const { return fStartZ; }
    Double_t GetStartT() const { return fStartT; }
    Double_t GetMass() const;
    Double_t GetEnergy() const;
    Double_t GetPt() const { return TMath::Sqrt(fPx * fPx + fPy * fPy); }
    Double_t GetP() const { return TMath::Sqrt(fPx * fPx + fPy * fPy + fPz * fPz); }
    Double_t GetRapidity() const;
    void GetMomentum(TVector3& momentum);
    void Get4Momentum(TLorentzVector& momentum);
    void GetStartVertex(TVector3& vertex);

    TLorentzVector Get4Momentum() const;

    TVector3 GetStartVertex() const { return TVector3(fStartX, fStartY,fStartZ);}
    /** Accessors to the number of MCPoints in the detectors **/
    Int_t GetNPoints(DetectorId detId) const;

    /**  Modifiers  **/
    void SetMotherId(Int_t id) { fMotherId = id; }
    void SetMotherID(Int_t id) { fMotherId = id; }
    void SetNPoints(Int_t iDet, Int_t np);

    void SetSecondMotherId(Int_t id) { fSecondMotherId = id; }
    void SetSecondMotherID(Int_t id) { fSecondMotherId = id; }

  private:
    /**  PDG particle code  **/
    Int_t fPdgCode;

    /**  Index of mother track. -1 for primary particles.  **/
    Int_t fMotherId;
    Int_t  fSecondMotherId;

    /** Momentum components at start vertex [GeV]  **/
    Double32_t fPx, fPy, fPz;

    /** Coordinates of start vertex [cm, ns]  **/
    Double32_t fStartX, fStartY, fStartZ, fStartT;

    /**  Bitvector representing the number of MCPoints for this track in
     **  each subdetector. The detectors can be represented by (example from CBM)
     **  REF:         Bit  0      (1 bit,  max. value  1)
     **  MVD:         Bit  1 -  3 (3 bits, max. value  7)
     **  STS:         Bit  4 -  8 (5 bits, max. value 31)
     **  RICH:        Bit  9      (1 bit,  max. value  1)
     **  MUCH:        Bit 10 - 14 (5 bits, max. value 31)
     **  TRD:         Bit 15 - 19 (5 bits, max. value 31)
     **  TOF:         Bit 20 - 23 (4 bits, max. value 15)
     **  ECAL:        Bit 24      (1 bit,  max. value  1)
     **  ZDC:         Bit 25      (1 bit,  max. value  1)
     **  The respective point numbers can be accessed and modified
     **  with the inline functions.
     **  Bits 26-31 are spare for potential additional detectors.
     **/
    Int_t fNPoints;

    ClassDef(ChnsMCTrack, 1);
};

// ==========   Inline functions   ========================================

inline Double_t ChnsMCTrack::GetEnergy() const
{
    Double_t mass = GetMass();
    return TMath::Sqrt(mass * mass + fPx * fPx + fPy * fPy + fPz * fPz);
}

inline void ChnsMCTrack::GetMomentum(TVector3& momentum) { momentum.SetXYZ(fPx, fPy, fPz); }

inline void ChnsMCTrack::Get4Momentum(TLorentzVector& momentum) { momentum.SetXYZT(fPx, fPy, fPz, GetEnergy()); }

inline void ChnsMCTrack::GetStartVertex(TVector3& vertex) { vertex.SetXYZ(fStartX, fStartY, fStartZ); }

#endif
