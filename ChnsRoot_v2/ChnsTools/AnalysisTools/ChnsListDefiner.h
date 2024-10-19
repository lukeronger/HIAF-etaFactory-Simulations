#ifndef CHNSLISTDEFINER_H
#define CHNSLISTDEFINER_H

#include <string>
#include <vector>

#include "RhoBase/RhoCandList.h"

class TH1F;
class RhoParticleSelectorBase;

class ChnsListDefiner
{
  public:
    ChnsListDefiner();
    ChnsListDefiner(std::string name);
    virtual ~ChnsListDefiner();

    void Print();
    int  GetLength();
    int  GetNDau();
    int  GetNSels();
    int  GetNHistos();

    std::string   fName;
    int           fPdgCode;
    float         fCharge;
    int           fAntiIdx;
    bool          fIsAntiList;
    bool          fIsUsed;
    bool          fIsFilled;
    bool          fIsGeneric;
    bool          fIsMerged;
    bool      fDumpList;
    RhoCandList     fList;
    std::vector<TH1F*> fHisto;
    std::vector<RhoParticleSelectorBase*> fSelector;
    std::vector<int> fDauIdx;

    // information for the NTuple dumpout
    int             fNEntries;  // Number of entries in list; used for the tuple dumpout
    std::string         fColName;   // the prefix for storing in NTuple
    std::vector<std::string>  fNtpFNames; // column names with floats to be stored
    std::vector<float*>     fNtpFArrays;  // the corresponding float arrays
    std::vector<std::string>  fNtpINames; // column names with ints to be stored
    std::vector<int*>     fNtpIArrays;  // the corresponding int arrays


    ClassDef(ChnsListDefiner,1);
};

#endif
