
/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/

// -------------------------------------------------------------------------
// -----                    ChnsGeoCave  file                               -----
// -----                Created 26/03/14  by M. Al-Turany              -----
// -------------------------------------------------------------------------

#ifndef MYGEOCAVE_H
#define MYGEOCAVE_H

#include "FairGeoSet.h"   // for FairGeoSet

#include <Rtypes.h>    // for ChnsGeoCave::Class, Bool_t, etc
#include <TString.h>   // for TString
#include <fstream>     // for fstream
#include <iosfwd>      // for fstream

class FairGeoMedia;

class ChnsGeoCave : public FairGeoSet
{
  protected:
    TString name;

  public:
    ChnsGeoCave();
    ~ChnsGeoCave() {}
    const char* getModuleName(Int_t) { return name.Data(); }
    Bool_t read(std::fstream&, FairGeoMedia*);
    void addRefNodes();
    void write(std::fstream&);
    void print();
    ClassDef(ChnsGeoCave, 0);   // Class for the geometry of CAVE
};

#endif /* !ChnsGEOCAVE_H */
