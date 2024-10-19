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

#ifndef CHNSTRACKCANDHIT_HH
#define CHNSTRACKCANDHIT_HH

// Root Class Headers ----------------
#include "TObject.h"

#include "FairLink.h"

#include <iostream>
#include <vector>
#include <map>

#ifndef __CINT__
#include <boost/serialization/access.hpp>
#include <boost/serialization/base_object.hpp>
#endif //__CINT__

class ChnsTrackCandHit : public FairLink{
public:
  ChnsTrackCandHit():FairLink(), fRho(0){}
  ChnsTrackCandHit(Int_t detId, Int_t hitId, Double_t rho):FairLink(detId, hitId), fRho(rho){}
  ChnsTrackCandHit(FairLink& link, Double_t& rho):FairLink(link), fRho(rho){};
  virtual ~ChnsTrackCandHit() {}
  bool operator< (const ChnsTrackCandHit& rhs) const
  {return fRho<rhs.fRho;};
  bool operator> (const ChnsTrackCandHit& rhs) const
  {return fRho>rhs.fRho;};
  bool operator<= (const ChnsTrackCandHit& rhs) const
  {return fRho<=rhs.fRho;};
  bool operator>= (const ChnsTrackCandHit& rhs) const
  {return fRho>=rhs.fRho;};
  bool operator== (const ChnsTrackCandHit& hit) const {
    return ( FairLink::operator==((FairLink)hit) && fRho == hit.fRho);
  }
  bool operator!= (const ChnsTrackCandHit& hit) const {
    return (!(FairLink::operator==(hit)));
  }
  Int_t GetHitId()const {return GetIndex();}
  Int_t GetDetId()const {return GetType();}
  Double_t GetRho()const {return fRho;}

  void Print() const;

#ifndef __CINT__ // for BOOST serialization
  template<class Archive>
  void serialize(Archive & ar, const unsigned int version)
  	{
  		ar & boost::serialization::base_object<FairLink>(*this);
  		ar & fRho;
  	}
#endif // for BOOST serialization

  private :
  Double_t fRho;		///< sorting parameter

  ClassDef(ChnsTrackCandHit,2);
};



#endif

//--------------------------------------------------------------
// $Log$
//--------------------------------------------------------------
