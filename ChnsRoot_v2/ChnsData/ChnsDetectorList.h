/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *              GNU Lesser General Public Licence (LGPL) version 3,             *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/

// -------------------------------------------------------------------------
// -----                  ChnsDetectorList header file               -----
// -----                  M. Al-Turany   June 2014                     -----
// -------------------------------------------------------------------------

/** Defines unique identifier for all Chns detectors system **/
/** THis is needed for stack filtring **/

#ifndef ChnsDetectorList_H
#define ChnsDetectorList_H 1
// kSTOPHERE is needed for iteration over the enum. All detectors have to be put before.
enum DetectorId
{
    kChnsEmc,
    kChnsMvd,  //20210330 for guoaq
    kChnsTof,  //20210629 for lixin
    kChnsTpc,  //20220329 for CHNS
    kChnsZdc,  //20220329 for CHNS
    kSTOPHERE
};

#endif
