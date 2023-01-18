//////////////////////////////////////////////////////////////////////////
//                                                                      //
// ChnsEventInfo               //
//                                                                      //
// Contains and provides access to summary information in the event //
// useful for analysis              //
//                  //
// Author List:               //
// Marcel Kunze,  RUB, Dec. 2k            //
// Copyright (C) 1999-2001, Ruhr-University Bochum.     //
//                  //
//////////////////////////////////////////////////////////////////////////

#include "ChnsEventInfo.h"
#include <assert.h>

ClassImp(ChnsEventInfo)

#include <iostream>
using namespace std;

ChnsEventInfo::ChnsEventInfo():
  fAntiProtonBeam(TLorentzVector(0,0,0,0)),
  fCmFrame(TLorentzVector(0,0,0,0)),
  fBeamSpot(TVector3(0,0,0)),
  fPrimaryVertex(TVector3(0,0,0)),
  fIPTruth(TVector3(0,0,0)),
  fNCharged(0),
  fNNeutrals(0)
{}

//--------------
// Destructor --
//--------------

ChnsEventInfo::~ChnsEventInfo( )
{
}

//--------------
// Operations --
//--------------
void ChnsEventInfo::SetCmFrame( TLorentzVector& cmf)
{
  fCmFrame=cmf;
  fAntiProtonBeam=cmf;
  fAntiProtonBeam.SetE(cmf.E()-0.938272);
}


void ChnsEventInfo::SetAntiProtonBeam( TLorentzVector& beam)
{
  fAntiProtonBeam=beam;
  fCmFrame=beam;
  fCmFrame.SetE(beam.E()+0.938272);
}


void ChnsEventInfo::PrintOn(std::ostream& o) const
{
  o << "pbar beam: ("<<fAntiProtonBeam.Px()<<","<<fAntiProtonBeam.Py()
    <<","<<fAntiProtonBeam.Pz()<<","<<fAntiProtonBeam.E()<<")"<<endl;
  o << "  pbarpSystem: ("<<fCmFrame.Px()<<","<<fCmFrame.Py()<<","<<fCmFrame.Pz()<<","<<fCmFrame.E()<<")"<<endl;
  o << "  spots: "<<BeamSpot()<<" "<<PrimaryVertex()<<endl;
  o << "  n_charg="<<fNCharged<<"  n_neut="<<fNNeutrals<<endl;
}

std::ostream&  operator << (std::ostream& o, const ChnsEventInfo& a) {a.PrintOn(o); return o;}


