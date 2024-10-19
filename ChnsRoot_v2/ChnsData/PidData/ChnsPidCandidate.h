#ifndef CHNSPIDCANDIDATE_H
#define CHNSPIDCANDIDATE_H
//////////////////////////////////////////////////////////////////////////
//                                                                      //
// ChnsPidCandidate	                                                //
//                                                                      //
// Definition of the Panda pid candidate.	                        //
//                                                                      //
// Author: Klaus Goetzen, GSI, 12.06.08		                        //
// Copyright (C) 2008, GSI Darmstadt.					//
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include <iostream>

#include <assert.h>

#include "FairRecoCandidate.h"
#include "TArrayI.h"
#include "TMatrixD.h"
#include "TVector3.h"
#include "TLorentzVector.h"

//class VAbsPidInfo;

//  ========================================================================
//  ===== ChnsPidCandidate - Class definig the AOD interface           ====
//  ========================================================================

class ChnsPidCandidate : public FairRecoCandidate  //FairMultiLinkedData
{

 public:

  ChnsPidCandidate();
  ChnsPidCandidate(Int_t charge, TVector3 &pos, TLorentzVector &p4, TMatrixD &cov7 );
  ChnsPidCandidate(Int_t charge, TVector3 &pos, TLorentzVector &p4);
	
  ~ChnsPidCandidate();

  // ************************
  // ACCESSOR METHODS
  // ************************
	
  // ************************
  // basic properties:
  // ************************

  Int_t     GetCharge()   const { return fCharge; }
	Int_t     GetPdgCode()  const { return fPdgCode; }
  TVector3  GetPosition() const { return TVector3(fXposition, fYposition, fZposition); }
  TVector3  GetMomentum() const { return TVector3(fXmomentum, fYmomentum, fZmomentum); }
  Double_t  GetEnergy()   const { return fEnergy; }
  TLorentzVector GetLorentzVector() const{return TLorentzVector(fXmomentum,fYmomentum,fZmomentum,fEnergy);}
	
  TVector3  GetFirstHit() const{return TVector3(fFirstHitX,fFirstHitX,fFirstHitX);}
  TVector3  GetLastHit() const{return TVector3(fLastHitX,fLastHitY,fLastHitZ);}
	
  const Float_t* GetErrorP7() const{return fErrP7;}
  const Float_t* GetParams() const{return fParams;}
  const Float_t* GetCov() const{return fCov;}
  TMatrixD& Cov7() const;
  TMatrixD& P4Cov() const ;
  Int_t     GetMcIndex() const{return fMcIndex;}
  Int_t     GetTrackIndex() const{return fTrackIndex;}	
  Int_t     GetTrackBranch() const{return fTrackBranch;}

  // ************************
  // detector specific stuff
  // ************************
	
  // MVD
  Float_t		GetMvdDEDX()     const { return fMvdDEDX; }
  Int_t		        GetMvdHits()     const { return fMvdHits; }
  Float_t               GetMvdDCA()      const { return fMvdDCA;  } //DCA in track level;  yutie 0328
  //const Int_t* GetMvdHitIndexArray()  {return fMvdHitIndexArray.GetArray();}

  //TPC
  Float_t               GetTpcMeanDEDX() const { return fTpcMeanDEDX; }
  Int_t                 GetTpcHits()     const { return fTpcHits; }

  // STT
  Float_t		GetSttMeanDEDX() const { return fSttMeanDEDX; }
  Int_t		        GetSttHits()     const { return fSttHits; }
  //const Int_t* GetSttHitIndexArray()  {return fSttHitIndexArray.GetArray();}
	
  // GEM
  Int_t                 GetGemHits()     const { return fGemHits; }
  Float_t               GetGemMeanDEDX() const { return fGemMeanDEDX; }  //Yutie 11.16 2018


  // TOF
  Float_t		GetTofStopTime()    const { return fTofStopTime; }
  Float_t		GetTofM2()          const { return fTofM2; }
  Float_t		GetTofTrackLength() const { return fTofTrackLength; }
  Float_t		GetTofQuality()     const { return fTofQuality; }
  Int_t                 GetTofIndex()       const { return fTofIndex; }
  //Float_t               GetTofBeta()        const { return (fTofStopTime>0.&&fTofTrackLength>0.) ? fTofTrackLength/(30. * fTofStopTime) : -1.; } 
  Float_t               GetTofBeta()        const { return fTofBeta; } 
 
  // Barrel DIRC
  Float_t		GetDrcThetaC()          const { return fDrcThetaC;}
  Float_t		GetDrcThetaCErr()       const { return fDrcThetaCErr;}
  Float_t		GetDrcQuality()         const { return fDrcQuality;}
  Int_t		        GetDrcNumberOfPhotons() const { return fDrcNumberOfPhotons;}
  Int_t                 GetDrcIndex()           const { return fDrcIndex; }

  // Disc DIRC
  Float_t		GetDiscThetaC()          const { return fDiscThetaC;}
  Float_t		GetDiscThetaCErr()       const { return fDiscThetaCErr;}
  Float_t		GetDiscQuality()         const { return fDiscQuality;}
  Int_t		        GetDiscNumberOfPhotons() const { return fDiscNumberOfPhotons;}
  Int_t                 GetDiscIndex()           const { return fDiscIndex; }

  // RICH
  Float_t		GetRichThetaC()          const { return fRichThetaC;}
  Float_t		GetRichThetaCErr()       const { return fRichThetaCErr;}
  Float_t		GetRichQuality()         const { return fRichQuality;}
  Int_t		        GetRichNumberOfPhotons() const { return fRichNumberOfPhotons;}
  Int_t                 GetRichIndex()           const { return fRichIndex; }

  // EMC
  Float_t		GetEmcRawEnergy() const{return fEmcRawEnergy;}
  Float_t		GetEmcCalEnergy() const{return fEmcCalEnergy;}
  Float_t		GetEmcQuality()   const{return fEmcQuality;}
  Int_t		GetEmcNumberOfCrystals() const{return fEmcNumberOfCrystals;}
  Int_t		GetEmcNumberOfBumps() const{return fEmcNumberOfBumps;}
  Int_t                 GetEmcModule()    const { return fEmcModule; }
  Int_t                 GetEmcIndex()     const { return fEmcIndex; }
  // EMC Cluster properties.
  Double_t GetEmcClusterZ20() const { return fEmcZ20; }
  Double_t GetEmcClusterZ53() const { return fEmcZ53; }
  Double_t GetEmcClusterLat() const { return fEmcLat; }
  Double_t GetEmcClusterE1()  const { return fEmcE1;  }
  Double_t GetEmcClusterE9()  const { return fEmcE9;  }
  Double_t GetEmcClusterE25() const { return fEmcE25; }
  
  // MUO
  Int_t		GetMuoNumberOfLayers()const {return fMuoNumberOfLayers;}
  Float_t		GetMuoProbability() const{return fMuoProbability;}
  Float_t		GetMuoQuality()   const{return fMuoQuality;} 
  Float_t		GetMuoIron()      const{return fMuoIron;}
  Float_t		GetMuoMomentumIn()const{return fMuoMomentumIn;}
  Int_t                 GetMuoModule()    const { return fMuoModule; }
  Int_t                 GetMuoHits()    const { return fMuoHits; }
  Int_t                 GetMuoIndex()     const { return fMuoIndex; }

  // Tracking
 
  Int_t    	GetDegreesOfFreedom() const{return fDegreesOfFreedom;}
  Int_t    	GetFitStatus() const{return fFitStatus;}
  Float_t  	GetChiSquared() const{return fChiSquared;}
  
  // ************************
  // MODIFIER METHODS
  // ************************
	
  void Lock() {fLocked=true;}
  void Unlock() {fLocked=false;}
  bool IsLocked() {return fLocked;}
	
  // ************************
  // basic properties:
  // ************************

  void	SetCharge(Int_t charge)    { fCharge=charge;}
	void	SetPdgCode(Int_t pdt)      { fPdgCode=pdt;}
  void	SetPosition(TVector3 &pos) { fXposition=pos.X(); fYposition=pos.Y(); fZposition=pos.Z(); }
  void	SetMomentum(TVector3 &mom) { fXmomentum=mom.X(); fYmomentum=mom.Y(); fZmomentum=mom.Z(); }
  void	SetEnergy(Double_t en)     { fEnergy=(Float_t) en;}
  void	SetLorentzVector(TLorentzVector &p4);
    
  void	SetFirstHit(TVector3 &pos) { fFirstHitX=pos.X(); fFirstHitY=pos.Y(); fFirstHitZ=pos.Z(); }
  void	SetLastHit(TVector3 &pos)  { fLastHitX =pos.X(); fLastHitY =pos.Y(); fLastHitZ=pos.Z();  }
    
  void	SetCov7(const TMatrixD &cov7 );
  void	SetP4Cov(const TMatrixD &covP4 );
  void	SetMcIndex(int idx) {fMcIndex=idx; }
  void  SetTrackIndex(int idx) {fTrackIndex=idx; } 
  void  SetTrackBranch(int idx) {fTrackBranch=idx; }	

  void  SetHelixParams(Double_t *par) {if (par!=0) for (int i=0; i<5;i++) fParams[i] = (Float_t)par[i];}
  void  SetHelixCov(Double_t* cov){if (cov!=0) for (int i=0; i<15;i++) fCov[i] = (Float_t)cov[i];}

  
	// ************************
  // detector specific stuff
  // ************************
	
  // MVD
  void 	SetMvdDEDX(Double_t val)    { fMvdDEDX = (Float_t) val; }
  void	SetMvdHits(Int_t val)       { fMvdHits = val; }
  void  SetMvdDCA(Double_t val)     { fMvdDCA = (Float_t) val; } //DCA in track level; yutie 0328
  //void	SetMvdHitIndexArray(Int_t n, Int_t* arr)  { fMvdHits=n; fMvdHitIndexArray.Set(n,arr);}

  // TPC
  void  SetTpcMeanDEDX(Double_t val)  { fTpcMeanDEDX = (Float_t) val; }
  void  SetTpcHits(Int_t val)         { fTpcHits = val; }

  // STT
  void	SetSttMeanDEDX(Double_t val)  { fSttMeanDEDX = (Float_t) val; }
  void	SetSttHits(Int_t val)         { fSttHits = val; }
  //void	SetSttHitIndexArray(Int_t n, Int_t* arr)  { fSttHits=n; fSttHitIndexArray.Set(n,arr);}

  void  SetGemHits(Int_t val)          {fGemHits = val;}
  void  SetGemMeanDEDX(Double_t val)  { fGemMeanDEDX = (Float_t) val; }
  // TOF
  void	SetTofStopTime(Double_t val)    { fTofStopTime = (Float_t) val;}
  void	SetTofM2(Double_t val)          { fTofM2 = (Float_t) val;}
  void  SetTofTrackLength(Double_t val) { fTofTrackLength = val; }
  void  SetTofQuality(Double_t val)     { fTofQuality = val; }
  void	SetTofIndex(Int_t val)          { fTofIndex = val;}
	void  SetTofBeta( Double_t val) { fTofBeta = val;}
 	
  // Barrel DIRC
  void	SetDrcThetaC(Double_t val)       { fDrcThetaC= (Float_t) val;}
  void	SetDrcThetaCErr(Double_t val)    { fDrcThetaCErr=(Float_t) val;}
  void	SetDrcQuality(Double_t val)      { fDrcQuality=(Float_t) val;}
  void	SetDrcNumberOfPhotons(Int_t val) { fDrcNumberOfPhotons = val;}
  void  SetDrcIndex(Int_t val)           { fDrcIndex = val; }

  // Disc DIRC
  void	SetDiscThetaC(Double_t val)        { fDiscThetaC=(Float_t) val;}
  void	SetDiscThetaCErr(Double_t val)    { fDiscThetaCErr=(Float_t) val;}
  void	SetDiscQuality(Double_t val)      { fDiscQuality=(Float_t) val;}
  void	SetDiscNumberOfPhotons(Int_t val) { fDiscNumberOfPhotons=val;}
  void  SetDiscIndex(Int_t val)           { fDiscIndex = val; }

  // RICH
  void	SetRichThetaC(Double_t val)       { fRichThetaC=(Float_t) val;}
  void	SetRichThetaCErr(Double_t val)    { fRichThetaCErr=(Float_t) val;}
  void	SetRichQuality(Double_t val)      { fRichQuality=(Float_t) val;}
  void	SetRichNumberOfPhotons(Int_t val) { fRichNumberOfPhotons= val;}
  void  SetRichIndex(Int_t val)           { fRichIndex = val; }
  
  // EMC
  void	SetEmcRawEnergy(Double_t val)     { fEmcRawEnergy=(Float_t) val;}
  void	SetEmcCalEnergy(Double_t val)     { fEmcCalEnergy=(Float_t) val;}
  void	SetEmcQuality(Double_t val)       { fEmcQuality=(Float_t) val;}
  void	SetEmcNumberOfCrystals(Int_t val) { fEmcNumberOfCrystals= val;}
  void	SetEmcNumberOfBumps(Int_t val)    { fEmcNumberOfBumps= val;}
  void  SetEmcModule(Int_t val)           { fEmcModule = val; }
  void  SetEmcIndex(Int_t val)            { fEmcIndex = val; }

  void  SetEmcClusterZ20(Double_t val)    { fEmcZ20 = val; }
  void  SetEmcClusterZ53(Double_t val)    { fEmcZ53 = val; }
  void  SetEmcClusterLat(Double_t val)    { fEmcLat = val; }
  void  SetEmcClusterE1(Double_t val)     { fEmcE1 = val;  }
  void  SetEmcClusterE9(Double_t val)     { fEmcE9 = val;  }
  void  SetEmcClusterE25(Double_t val)    { fEmcE25 = val; }

  // MUO
  void	SetMuoNumberOfLayers(Int_t val) { fMuoNumberOfLayers= val;}
  void	SetMuoProbability(Double_t val) { fMuoProbability=(Float_t) val;}
  void	SetMuoQuality(Double_t val)     { fMuoQuality=(Float_t) val;}
  void	SetMuoIron(Double_t val)        { fMuoIron=(Float_t) val;} 
  void	SetMuoMomentumIn(Double_t val)  { fMuoMomentumIn=(Float_t) val;}
  void  SetMuoModule(Int_t val)         { fMuoModule = val; } 
  void  SetMuoHits(Int_t val)           { fMuoHits = val; }
  void  SetMuoIndex(Int_t val)          { fMuoIndex = val; }

  // Tracking
  void   	SetDegreesOfFreedom(Int_t val) { fDegreesOfFreedom=val;}
  void    SetFitStatus(Int_t val) { fFitStatus= val;}
  void  	SetChiSquared(Double_t val) { fChiSquared=(Float_t) val;}
	  
  void SetDefault();
 protected:
  // Candidate lock
  Bool_t	fLocked;
	
  // the basic params
  Char_t  fCharge;		// The electrical charge
	Int_t fPdgCode;   // pdg code
  Float_t fXposition,		// The origin in x
    fYposition,		// The origin in y
    fZposition;		// The origin in z
  Double_t
    fXmomentum,		// The momentum in x
    fYmomentum,		// The momentum in y
    fZmomentum,		// The momentum in z
    fEnergy;		// The total energy
		
  Float_t fFirstHitX,
    fFirstHitY,
    fFirstHitZ;
			
  Float_t fLastHitX,
    fLastHitY,
    fLastHitZ;
			
  Int_t		fMcIndex;    // MC truth index
  Int_t         fTrackIndex; // ChnsTrack index
  Int_t         fTrackBranch;// index of ChnsTrack TClonesArray
  Float_t	fErrP7[28];  // The symmetric 7*7 error matrix
  Float_t	fParams[5];  // The helix fit parameters
  Float_t	fCov[15];    // The helix error matrix
		
  // detector quantities
  // MVD
  Float_t 	fMvdDEDX;
  Int_t   	fMvdHits;
  Float_t       fMvdDCA;
  //TArrayI		fMvdHitIndexArray;

  // TPC
  Float_t       fTpcMeanDEDX;
  Int_t         fTpcHits;

  // STT
  Float_t 	fSttMeanDEDX;
  Int_t   	fSttHits;
  //TArrayI		fSttHitIndexArray;
	
  //GEM 
  Int_t         fGemHits;
  Float_t       fGemMeanDEDX;

  // TOF
  Float_t       fTofStopTime;
  Float_t 	fTofM2;
  Float_t       fTofTrackLength;
  Float_t       fTofQuality;
  Int_t         fTofIndex;
	Float_t 			fTofBeta;
	
  // Barrel DIRC
  Float_t 	fDrcThetaC;
  Float_t 	fDrcThetaCErr;
  Float_t       fDrcQuality;
  Int_t		fDrcNumberOfPhotons;
  Int_t         fDrcIndex;

  // Disc DIRC
  Float_t 	fDiscThetaC;
  Float_t 	fDiscThetaCErr;
  Float_t       fDiscQuality;
  Int_t		fDiscNumberOfPhotons;
  Int_t         fDiscIndex;
  
  // RICH
  Float_t 	fRichThetaC;
  Float_t 	fRichThetaCErr;
  Float_t       fRichQuality;
  Int_t		fRichNumberOfPhotons;
  Int_t         fRichIndex;
  
  // EMC
  Float_t 	fEmcRawEnergy;
  Float_t 	fEmcCalEnergy;
  Float_t       fEmcQuality;
  Int_t		fEmcNumberOfCrystals;
  Int_t		fEmcNumberOfBumps;
  Int_t         fEmcModule;
  Int_t         fEmcIndex;
  
  Double_t      fEmcZ20;
  Double_t      fEmcZ53;
  Double_t      fEmcLat;
  Double_t      fEmcE1;
  Double_t      fEmcE9;
  Double_t      fEmcE25;
  
  // MUO
  Int_t		fMuoNumberOfLayers;
  Float_t 	fMuoProbability;
  Float_t       fMuoQuality;
  Float_t       fMuoIron;
  Float_t       fMuoMomentumIn;
  Int_t         fMuoModule;
  Int_t         fMuoHits;
  Int_t         fMuoIndex;
  
  // Tracking
  Int_t	        fDegreesOfFreedom;
  Int_t	        fFitStatus;
  Float_t 	fChiSquared;
  

  ClassDef(ChnsPidCandidate,4) // Abstract base class for MicroDST candidates
    };

//std::ostream&  operator << (std::ostream& o, const VAbsMicroCandidate&);

#endif                                           

