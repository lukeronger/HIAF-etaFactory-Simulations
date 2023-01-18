/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
#ifndef CHNSZDCPOINT_H
#define CHNSZDCPOINT_H 1

#include "FairMCPoint.h"

#include <TObject.h>
#include <TVector3.h>

class ChnsZdcPoint : public FairMCPoint
{

  public:
    /** Default constructor **/
    ChnsZdcPoint();

    /** Constructor with arguments
     *@param trackID  Index of MCTrack
     *@param detID    Detector ID
     *@param pos      Ccoordinates at entrance to active volume [cm]
     *@param mom      Momentum of track at entrance [GeV]
     *@param tof      Time since event start [ns]
     *@param length   Track length since creation [cm]
     *@param eLoss    Energy deposit [GeV]
     **/
    ChnsZdcPoint(
					Int_t trackID,
                     Int_t detID,
                     TVector3 pos,
                     TVector3 mom,
                     Double_t tof,
                     Double_t length,
                     Double_t eLoss,
					 Int_t eventID,
					 Int_t mod, Int_t segment, Int_t copyNo    
					 );

	void SetModule(Int_t mod) { nModule = mod;}; //建议定义Set/Get函数对新变量进行操作
    void SetSegment(Int_t segment) { nSegment = segment;};
    void SetCopy(Int_t copy) { nCopy = copy;};

    Int_t GetModule()  const { return nModule;};
    Int_t GetSegment()     const { return nSegment;};
    Int_t GetCopy()    const { return nCopy;};

    /** Destructor **/
    virtual ~ChnsZdcPoint();

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

  protected:  //
    Int_t nModule;    //Module number
    Int_t nSegment;       //Segment number
    Int_t   nCopy;      //Copy number


  private:
    /** Copy constructor **/
    ChnsZdcPoint(const ChnsZdcPoint& point);
    ChnsZdcPoint operator=(const ChnsZdcPoint& point);

    ClassDef(ChnsZdcPoint, 1);
};

#endif
