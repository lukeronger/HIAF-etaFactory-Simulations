/*
 * ChnsSimpleTrack.h
 *
 *  Created on: 05.03.2009
 *      Author: everybody
 */

#ifndef CHNSSIMPLETRACK_H_
#define CHNSSIMPLETRACK_H_

#include "TObject.h"
#include "ChnsTrackCand.h"
#include "FairTrackPar.h"
#include "FairTimeStamp.h"
#include "TRef.h"
#include "Rtypes.h"

#ifndef __CINT__
#include <boost/serialization/access.hpp>
#include <boost/serialization/base_object.hpp>
#endif //__CINT__

class ChnsSimpleTrack : public FairTimeStamp{
public:
	ChnsSimpleTrack();
	ChnsSimpleTrack(const FairTrackPar& par, const ChnsTrackCand& cand, const double& chi2);

	void Print();

	void SetTrackCand(const ChnsTrackCand& cand) { fTrackCand = cand; };
	
	ChnsTrackCand GetTrackCand()      { return fTrackCand; }
	ChnsTrackCand* GetTrackCandPtr()  { return &fTrackCand; }
	FairTrackPar GetParam() { return fTrackParam; }

	virtual bool equal(FairTimeStamp* data) const {
    if(!data) return false; //dummy
	  return false;
	}
	
	virtual bool operator<(const ChnsSimpleTrack& myTrack) const{
	  ChnsTrackCand myCand = ((ChnsSimpleTrack)myTrack).GetTrackCand();
	  if      (fTimeStamp < myCand.GetTimeStamp() ) return true; 
	  else if (fTimeStamp > myCand.GetTimeStamp() ) return false; 
	  return false;
	}
	
	virtual bool operator>(const ChnsSimpleTrack& myTrack) const{
	  ChnsTrackCand myCand = ((ChnsSimpleTrack)myTrack).GetTrackCand();
	  if      (fTimeStamp > myCand.GetTimeStamp() ) return true; 
	  else if (fTimeStamp < myCand.GetTimeStamp() ) return false; 
	  return false;
	}
	
	virtual bool operator==(const ChnsSimpleTrack& myTrack) const{
    if(myTrack.fChi2!=fChi2) return false; //dummy
	  return false; 
	}

#ifndef __CINT__ // for BOOST serialization
  template<class Archive>
  void serialize(Archive & ar, const unsigned int version)
  	{
  		ar & boost::serialization::base_object<FairTimeStamp>(*this);
  		ar & fTrackParam;
  		ar & fTrackCand;
  		ar & fChi2;
  	}
#endif // for BOOST serialization

private:
	FairTrackPar fTrackParam;
	ChnsTrackCand fTrackCand;
	Double_t fChi2;

	ClassDef(ChnsSimpleTrack,2);

};

#endif /* CHNSTRACK_H_ */
