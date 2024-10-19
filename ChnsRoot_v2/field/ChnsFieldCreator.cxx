/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/
// -------------------------------------------------------------------------
// -----                    ChnsConstField header file                  -----
// -----                Created 25/03/14  by M. Al-Turany              -----
// -------------------------------------------------------------------------

#include "ChnsFieldCreator.h"

#include "FairField.h"
#include "FairRunAna.h"
#include "FairRuntimeDb.h"
#include "ChnsConstField.h"
#include "ChnsFieldPar.h"

#include <iostream>
using std::cerr;
using std::cout;
using std::endl;

static ChnsFieldCreator gChnsFieldCreator;

ChnsFieldCreator::ChnsFieldCreator()
    : FairFieldFactory()
    , fFieldPar(NULL)
{
    fCreator = this;
}

ChnsFieldCreator::~ChnsFieldCreator() {}

void ChnsFieldCreator::SetParm()
{
    FairRunAna *Run = FairRunAna::Instance();
    FairRuntimeDb *RunDB = Run->GetRuntimeDb();
    fFieldPar = (ChnsFieldPar *)RunDB->getContainer("ChnsFieldPar");
}

FairField *ChnsFieldCreator::createFairField()
{
    FairField *fMagneticField = 0;

    if (!fFieldPar) {
        cerr << "-E-  No field parameters available!" << endl;
    } else {
        // Instantiate correct field type
        Int_t fType = fFieldPar->GetType();
        if (fType == 0)
            fMagneticField = new ChnsConstField(fFieldPar);
        else
            cerr << "-W- FairRunAna::GetField: Unknown field type " << fType << endl;
        cout << "New field at " << fMagneticField << ", type " << fType << endl;
        // Initialise field
        if (fMagneticField) {
            fMagneticField->Init();
            fMagneticField->Print("");
        }
    }
    return fMagneticField;
}

ClassImp(ChnsFieldCreator);
