/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/

// -------------------------------------------------------------------------
// -----                    ChnsFieldCreator header file                  -----
// -----                Created 26/03/14  by M. Al-Turany              -----
// -------------------------------------------------------------------------

#ifndef ChnsFieldCreator_H
#define ChnsFieldCreator_H

#include "FairFieldFactory.h"

class ChnsFieldPar;

class FairField;

class ChnsFieldCreator : public FairFieldFactory
{

  public:
    ChnsFieldCreator();
    virtual ~ChnsFieldCreator();
    virtual FairField* createFairField();
    virtual void SetParm();
    ClassDef(ChnsFieldCreator, 1);

  protected:
    ChnsFieldPar* fFieldPar;

  private:
    ChnsFieldCreator(const ChnsFieldCreator&);
    ChnsFieldCreator& operator=(const ChnsFieldCreator&);
};
#endif   // ChnsFieldCreator_H
