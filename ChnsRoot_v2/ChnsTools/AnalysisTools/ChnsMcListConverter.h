#ifndef CHNSMCLISTCONVERTER_H
#define CHNSMCLISTCONVERTER_H 1


#include "FairTask.h"
#include <map>
#include <string>

class TClonesArray;
class TDatabasePDG;

class ChnsMcListConverter : public FairTask
{

  public:
    /** Default constructor **/
    ChnsMcListConverter();


    /** Destructor **/
    ~ChnsMcListConverter();


    /** Virtual method Init **/
    virtual InitStatus Init();


    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    virtual void FinishEvent();
    //void CreateStructure();

    void SetVerbose(Bool_t verb) { fVerbose = verb  ;};

  private:

    /** Input array of TpcLheTrack **/
    TClonesArray* fMcCandidates;
    TClonesArray* fMcTracks;

    /** Geo file to use **/

    /** Get parameter containers **/
    virtual void SetParContainers();


    ClassDef(ChnsMcListConverter,1);

};

#endif
