/** ChnsMCEventHeader.h
 *@author Xionghong He
 **/


#ifndef CHNSMCEVENTHEADER_H
#define CHNSMCEVENTHEADER_H 1

#include "FairMCEventHeader.h"

#include <cstdint>


class ChnsMCEventHeader : public FairMCEventHeader {

public:
  /** Default constructor **/
  ChnsMCEventHeader();

  /** Standard constructor with run identifier **/
  ChnsMCEventHeader(UInt_t runId);
  
	/** Constructor with all members
   **
   *@param runId    run identifier
   *@param iEvent   event identifier
   *@param x,y,z    vertex oordinates [cm]
   *@param t        event time [ns]
   *@param b        impact parameter [fm] (if relevant)
   *@param phi      event plane angle [rad]
   *@param nPrim    number of input tracks
   **/
  ChnsMCEventHeader(Int_t iEvent, Double_t x, Double_t y, Double_t z, Double_t t, Double_t b, Int_t nPrim, Int_t nPart, Int_t nColl, Double_t phi);


  /** Destructor **/
  virtual ~ChnsMCEventHeader();


  /** Accessors **/
  Int_t GetNPart() const { return fNPart; }      // number of participants
  Int_t GetNColl() const { return fNColl; }      // number of total collision
	Int_t GetPhi()   const { return fPhi; } 			 // event plane angle (rad)


  /** Modifiers **/
  void SetNPart(Int_t nPart) { fNPart = nPart; }
  void SetNColl(Int_t nColl) { fNColl = nColl; }
  void SetPhi(Double_t phi) { fPhi = phi; }



  /** Reset all members **/
  virtual void Reset();

	/** Register the class as a data branch to output **/
	virtual void Register();


private:
  Int_t fNPart;     //  Number of participant
	Int_t fNColl;			//  Number of total collisions
	Double_t fPhi;    // event plane angle (rad)

  ClassDef(ChnsMCEventHeader, 1);
};

#endif
