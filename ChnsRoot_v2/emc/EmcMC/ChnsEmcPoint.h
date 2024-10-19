
#ifndef NEWDETECTORPOINT_H
#define NEWDETECTORPOINT_H 1

#include "FairMCPoint.h"

#include <TObject.h>
#include <TVector3.h>

class ChnsEmcPoint : public FairMCPoint
{

	public:
		/** Default constructor **/
		ChnsEmcPoint();

		/** Constructor with arguments
		 *@param trackID  Index of MCTrack
		 *@param detID    Detector ID
		 *@param pos      Ccoordinates at entrance to active volume [cm]
		 *@param mom      Momentum of track at entrance [GeV]
		 *@param tof      Time since event start [ns]
		 *@param length   Track length since creation [cm]
		 *@param eLoss    Energy deposit [GeV]
		 **/
		ChnsEmcPoint(
				Int_t trackID,
				Int_t detID,
				TVector3 pos,
				TVector3 mom,
				Double_t tof,
				Double_t length,
				Double_t eLoss,
				Int_t eventID,
				Int_t mod, Int_t segment, Int_t location,
				Int_t copyNo    
				);

		void SetModule(Int_t mod) { nModule = mod;}; //建议定义Set/Get函数对新变量进行操作
		void SetSegment(Int_t segment) { nSegment = segment;};
		void SetLocation(Int_t location) { nLocation = location;};
		void SetCopy(Int_t copy) { nCopy = copy;};

		Int_t GetModule()  const { return nModule;};
		Int_t GetSegment()     const { return nSegment;};
		Int_t GetLocation()     const { return nLocation;};
		Int_t GetCopy()    const { return nCopy;};

		/** Destructor **/
		virtual ~ChnsEmcPoint();

		/** Output to screen **/
		virtual void Print(const Option_t* opt) const;

	protected:  //
		Int_t nModule;    //Module number
		Int_t nSegment;       //Segment number
		Int_t nLocation;
		Int_t   nCopy;      //Copy number


	private:
		/** Copy constructor **/
		ChnsEmcPoint(const ChnsEmcPoint& point);
		ChnsEmcPoint operator=(const ChnsEmcPoint& point);

		ClassDef(ChnsEmcPoint, 1);
};

#endif
