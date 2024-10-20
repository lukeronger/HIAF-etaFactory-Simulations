//-----------------------------------------------------------
// File and Version Information:
// $Id$
//
// Description:
//      Implementation of class ChnsTrackCand
//      see ChnsTrackCand.hh for details
//
// Environment:
//      Software developed for the PANDA Detector at FAIR.
//
// Author List:
//      Tobias Stockmanns (IKP - Juelich) during the Panda Meeting 03/09
//
//
//-----------------------------------------------------------

#ifndef CHNSTRACKCAND_HH
#define CHNSTRACKCAND_HH

// Root Class Headers ----------------
#include "ChnsTrackCandHit.h"
#include "FairTimeStamp.h"

#include "TObject.h"
#include "TVector3.h"
#include "TString.h"

#include <iostream>
#include <vector>
#include <map>

#ifndef __CINT__
#include <boost/serialization/access.hpp>
#include <boost/serialization/base_object.hpp>
#include <boost/serialization/vector.hpp>
#endif //__CINT__



typedef std::multimap<Double_t, std::pair<Int_t, Int_t> >::const_iterator mapIter;

class ChnsTrackCand : public FairTimeStamp {
public:

  // Constructors/Destructors ---------
  ChnsTrackCand();
  ~ChnsTrackCand();

  // operators
  bool operator== (const ChnsTrackCand& rhs);

  // Accessors -----------------------
  ChnsTrackCandHit GetSortedHit(UInt_t i){
	  if (sorted == false)
		  Sort();
	  return fHitId.at(i);
  }
  UInt_t GetNHits() const {return fHitId.size();}
  int getMcTrackId() const {return fMcTrackId;}

  UInt_t GetNHitsDet(Int_t detId);
  std::vector<ChnsTrackCandHit>GetSortedHits();
  void Sort();

  // Modifiers -----------------------
  void AddHit(UInt_t detId, UInt_t hitId, Double_t rho);
  void AddHit(TString branchName, UInt_t hitId, Double_t rho);
  void AddHit(FairLink link, Double_t rho);
  void DeleteHit(UInt_t detId, UInt_t hitId);
  Int_t HitInTrack(UInt_t detId, UInt_t hitId) const;
  void setMcTrackId(int i){fMcTrackId=i;}

  void CalcTimeStamp();

  void ResetLinks();

  void Print() const;

#ifndef __CINT__ // for BOOST serialization
  template<class Archive>
  void serialize(Archive & ar, const unsigned int version)
  	{
  		ar & boost::serialization::base_object<FairTimeStamp>(*this);
  		ar & fHitId;
  		ar & sorted;
  		ar & fMcTrackId;
  	}
#endif // for BOOST serialization

private:
  // Private Data Members ------------
	std::vector<ChnsTrackCandHit> fHitId;  ///< first index is detId, second index is hit Id
	bool sorted;
	int fMcTrackId; //track id for MC simulation
	Int_t fVerbose;
public:
  ClassDef(ChnsTrackCand,3);
};

#endif

//--------------------------------------------------------------
// $Log$
//--------------------------------------------------------------
