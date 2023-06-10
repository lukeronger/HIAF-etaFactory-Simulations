#ifndef CHNSJAMGENERATOR_H
#define CHNSJAMGENERATOR_H

#include "FairGenerator.h"
#include <map>
#include <fstream>
#include <iostream>
//#include <zlib.h>
//
using namespace std;

class TVirtualMCStack;
class FairPrimaryGenerator;

class ChnsJamGenerator : public FairGenerator
{
  public:

    /** Default constructor without arguments should not be used. **/
    ChnsJamGenerator();


    /** Standard constructor.
     * @param fileName The input file name
     **/
    ChnsJamGenerator(const char* fileName);


    /** Destructor. **/
    ~ChnsJamGenerator();


    /** Reads on event from the input file and pushes the tracks onto
     ** the stack. Abstract method in base class.
     ** @param pStack    pointer to the stack
     ** @param ver       not used
     **/
    Bool_t ReadEvent(FairPrimaryGenerator* primGen);

    //Skip some events in file
    Bool_t SkipEvents(Int_t count);

    void SetEventPlane(Double_t phiMin, Double_t phiMax);
    void ChooseParticle(Int_t Pdg);

  private:

		ifstream fin;
		std::string linename;
    FILE* fInputFile;                     //!  Input file
    
    bool fChoosedParticle;
    std::vector<Int_t> fChoosedParticleList;

    std::map<Int_t,Int_t> fParticleTable;      //!  Map from Jam PID to PDGPID

    Double32_t fPhiMin, fPhiMax; // Limits of event plane angle
    Bool_t fEventPlaneSet; // Flag whether event plane angle is used

    const Char_t* fFileName;              //!  Input file name

    /** Private method ReadConversionTable. Reads the conversion table
        from Jam particle code to PDG particle code and fills the
        conversion map. Is called from the constructor. **/
    void ReadConversionTable();

    ChnsJamGenerator(const ChnsJamGenerator&);
    ChnsJamGenerator& operator=(const ChnsJamGenerator&);

    ClassDef(ChnsJamGenerator,1);

};

#endif


