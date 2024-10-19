/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
#ifndef CHNSTPCPOINT_H
#define CHNSTPCPOINT_H 1

#include "FairMCPoint.h"

#include <TObject.h>
#include <TVector3.h>

class ChnsTpcPoint : public FairMCPoint
{

  public:
    /** Default constructor **/
    ChnsTpcPoint();

    /** Constructor with arguments
     *@param trackID  Index of MCTrack
     *@param detID    Detector ID
     *@param pos      Ccoordinates at entrance to active volume [cm]
     *@param mom      Momentum of track at entrance [GeV]
     *@param tof      Time since event start [ns]
     *@param length   Track length since creation [cm]
     *@param eLoss    Energy deposit [GeV]
     *@param eventId  Event ID //yutie 0407
     **/
    ChnsTpcPoint(Int_t trackID,
                     Int_t detID,
                     TVector3 pos,
                     TVector3 mom,
                     Double_t tof,
                     Double_t length,
                     Double_t eLoss,
		     Int_t eventId); //yutie 0407

    /** Destructor **/
    virtual ~ChnsTpcPoint();

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

  private:
    /** Copy constructor **/
    ChnsTpcPoint(const ChnsTpcPoint& point);
    ChnsTpcPoint operator=(const ChnsTpcPoint& point);

    ClassDef(ChnsTpcPoint, 1);
};

#endif
