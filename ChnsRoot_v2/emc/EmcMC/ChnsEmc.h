
#ifndef NEWDETECTOR_H
#define NEWDETECTOR_H

#include "FairDetector.h"

#include <TLorentzVector.h>
#include <TVector3.h>

class ChnsEmcPoint;
class FairVolume;
class TClonesArray;

class ChnsEmc : public FairDetector
{

  public:
    /**      Name :  Detector Name
     *       Active: kTRUE for active detectors (ProcessHits() will be called)
     *               kFALSE for inactive detectors
     */
    ChnsEmc(const char* Name, Bool_t Active);

    /**      default constructor    */
    ChnsEmc();

    /**       destructor     */
    virtual ~ChnsEmc();

    /**      Initialization of the detector is done here    */
    virtual void Initialize();

    /**       this method is called for each step during simulation
     *       (see FairMCApplication::Stepping())
     */
    virtual Bool_t ProcessHits(FairVolume* v = 0);

    /**       Registers the produced collections in FAIRRootManager.     */
    virtual void Register();

    /** Gets the produced collections */
    virtual TClonesArray* GetCollection(Int_t iColl) const;

    /**      has to be called after each event to reset the containers      */
    virtual void Reset();

    /**      Create the detector geometry        */
    void ConstructGeometry();

    /**      This method is an example of how to add your own point
     *       of type ChnsEmcPoint to the clones array
     */
    ChnsEmcPoint*
        AddHit(Int_t trackID, Int_t detID, TVector3 pos, TVector3 mom, Double_t time, Double_t length, Double_t eLoss, Int_t eventID,
		Int_t moduleID, Int_t segmentID, Int_t locationID, Int_t copyID);

    /** The following methods can be implemented if you need to make
     *  any optional action in your detector during the transport.
     */

    virtual void SetSpecialPhysicsCuts() { ; }
    virtual void EndOfEvent();
    virtual void FinishPrimary() { ; }
    virtual void FinishRun() { ; }
    virtual void BeginPrimary() { ; }
    virtual void PostTrack() { ; }
    virtual void PreTrack() { ; }
    virtual void BeginEvent() { ; }

    virtual FairModule* CloneModule() const;

    virtual Bool_t IsSensitive(const std::string& name);

	  //test by YE
	  void SetPersistance(Bool_t p = kTRUE){fPersistance=p;};
    Bool_t GetPersistance() {return fPersistance;};
    // will be deleted
    Int_t GetBarrel_Dev(Double_t  barrel_z_e, Double_t angle_bin_barrel, Double_t L_lead_min_barrel);
    Int_t GetEndcap_Dev(Double_t R_outer_xy, Double_t angle_bin, Double_t module_short_length);

  private:
    /** Track information to be stored until the track leaves the
    active volume.
    */
    Int_t fTrackID;        //!  track index
	  Int_t fEventID;       //!  event id
    Int_t fVolumeID;       //!  volume id
    TLorentzVector fPos;   //!  position at entrance
    TLorentzVector fMom;   //!  momentum at entrance
    Double32_t fTime;      //!  time
    Double32_t fLength;    //!  length
    Double32_t fELoss;     //!  energy loss

    /** container for data points */

    TClonesArray* fChnsEmcPointCollection;   //!

    ChnsEmc(const ChnsEmc&);
    ChnsEmc& operator=(const ChnsEmc&);

    void DefineSensitiveVolumes();
	  Bool_t fPersistance;

    ClassDef(ChnsEmc, 2);
};

#endif   // NEWDETECTOR_H
