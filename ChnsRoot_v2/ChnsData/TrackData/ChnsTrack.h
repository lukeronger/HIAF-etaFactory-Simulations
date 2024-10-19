/*
 * ChnsTrack.h
 *
 *  Created on: 05.03.2009
 *      Author: everybody
 */

#ifndef CHNSTRACK_H_
#define CHNSTRACK_H_

#include "TObject.h"
#include "ChnsTrackCand.h"
#include "FairTrackParP.h"
#include "ChnsDetectorList.h"
#include "FairTimeStamp.h"
#include "TRef.h"

#ifndef __CINT__
#include <boost/serialization/access.hpp>
#include <boost/serialization/base_object.hpp>
#endif //__CINT__

class ChnsTrack : public FairTimeStamp{
public:
	ChnsTrack();
	ChnsTrack(const FairTrackParP& first, const FairTrackParP& last, const ChnsTrackCand& cand,
		 Int_t flag = 0, Double_t chi2 = -1., Int_t ndf = 0, Int_t pid = 0, Int_t id = -1, Int_t type = -1);

	void Print();


	Int_t GetPidHypo()               const { return fPidHypo; }
	Int_t GetFlag()                  const { return fFlag; } //Quality flag
	Double_t GetChi2()               const { return fChi2; }
	Int_t GetNDF()                   const { return fNDF; }
        Int_t GetRefIndex()              const { return fRefIndex; }
	void SetPidHypo(Int_t i)         { fPidHypo=i; }
	void SetFlag(Int_t i)            { fFlag=i; }
	void SetChi2(Double_t d)         { fChi2=d; }
	void SetNDF(Int_t i)             { fNDF=i; }
    void SetRefIndex(TString branch, Int_t i)        { fRefIndex=i; SetLink(FairLink(branch, i)); }
    void SetRefIndex(Int_t i){fRefIndex = i;}
	void SetTrackCand(const ChnsTrackCand& cand) { fTrackCand = cand; };
	void SetTrackCandRef(ChnsTrackCand* candPointer){ fRefToChnsTrackCand = candPointer; }
	ChnsTrackCand* GetChnsTrackCandViaRef(){ return (ChnsTrackCand*)fRefToChnsTrackCand.GetObject();}
	
	ChnsTrackCand GetTrackCand()      { return fTrackCand; }
	ChnsTrackCand* GetTrackCandPtr()  { return &fTrackCand; }
	FairTrackParP GetParamFirst() { return fTrackParamFirst; }
	FairTrackParP GetParamLast()  { return fTrackParamLast ; }

	virtual bool equal(FairTimeStamp* data) const {
    if(data) return false; // dummy
	  return false;
	}
	
	virtual bool operator<(const ChnsTrack& myTrack) const{
	  ChnsTrackCand myCand = ((ChnsTrack)myTrack).GetTrackCand();
	  if      (fTimeStamp < myCand.GetTimeStamp() ) return true; 
	  else if (fTimeStamp > myCand.GetTimeStamp() ) return false; 
	  return false;
	}
	
	virtual bool operator>(const ChnsTrack& myTrack) const{
	  ChnsTrackCand myCand = ((ChnsTrack)myTrack).GetTrackCand();
	  if      (fTimeStamp > myCand.GetTimeStamp() ) return true; 
	  else if (fTimeStamp < myCand.GetTimeStamp() ) return false; 
	  return false;
	}
	
	virtual bool operator==(const ChnsTrack& myTrack) const{
    if(fFlag==myTrack.fFlag) return false; // dummy
	  return false; 
	}

#ifndef __CINT__ // for BOOST serialization
  template<class Archive>
  void serialize(Archive & ar, const unsigned int version)
  	{
  		ar & boost::serialization::base_object<FairTimeStamp>(*this);
 // 		ar & fTrackParamFirst;
 // 		ar & fTrackParamLast;
  		ar & fTrackCand;
  		ar & fPidHypo;
  		ar & fFlag;
  		ar & fChi2;
  		ar & fNDF;
  		ar & fRefIndex;
  	}
#endif // for BOOST serialization

private:
	FairTrackParP fTrackParamFirst;
	FairTrackParP fTrackParamLast;

	ChnsTrackCand fTrackCand;
	TRef fRefToChnsTrackCand;

	Int_t fPidHypo;
	Int_t fFlag;		///< recotasks: -10 if Pz < 1e-9, -2 if conversion error, -22 if PdgCode == 0
	Double_t fChi2;
	Int_t fNDF;
        Int_t fRefIndex;

public:
	ClassDef(ChnsTrack,2)

};

#endif /* CHNSTRACK_H_ */
