//--------------------------------------------------------------------------
// File and Version Information:
//      $Id: FsmDetFactory.cc,v 1.12 2007/05/24 08:07:40 klausg Exp $
//
// Description:
//      Class FsmDetFactory
//
//  Factory for FsmDetectors
//
//  This software was developed for the PANDA collaboration.  If you
//  use all or part of it, please give an appropriate acknowledgement.
//
// Author List:
//      Klaus Goetzen                    Original Author
//      Ralf Kliemt
//
// Copyright Information:
//      Copyright (C) 2006              GSI
//
//------------------------------------------------------------------------

//-----------------------
// This Class's Header --
//-----------------------
#include "ChnsFsmDetFactory.h"

//-------------
// C Headers --
//-------------

//---------------
// C++ Headers --
//---------------
#include <iostream>

//-------------------------------
// Collaborating Class Headers --
//-------------------------------
//#include "ErrLogger/ErrLog.hh"
#include "StrTok.h"
#include "TString.h"


#include "ChnsFsmEmcBarrel.h"
#include "ChnsFsmEmcFwCap.h"
#include "ChnsFsmEmcBwCap.h"
#include "ChnsFsmEmcFS.h"
#include "ChnsFsmStt.h"
#include "ChnsFsmTpc.h"
#include "ChnsFsmMdcFS.h"
#include "ChnsFsmMdcTS.h"
#include "ChnsFsmEffTracker.h"
#include "ChnsFsmDrcBarrel.h"
#include "ChnsFsmDrcDisc.h"
#include "ChnsFsmMvd.h"
#include "ChnsFsmMvd2.h"
#include "ChnsFsmTof.h"
#include "ChnsFsmTofBwCap.h"
#include "ChnsFsmTofFwCap.h"
#include "ChnsFsmGemBwCap.h"
#include "ChnsFsmGemFwCap.h"
#include "ChnsFsmRich.h"
#include "ChnsFsmSimpleTracker.h"
#include "ChnsFsmCmpDet.h"
#include "ChnsFsmCombiDet.h"
#include "ChnsFsmMvdPid.h"
#include "ChnsFsmSttPid.h"
#include "ChnsFsmTpcPid.h"
#include "ChnsFsmMdtPid.h"
#include "ChnsFsmEmcPid.h"
#include "ChnsFsmSimpleVtx.h"
#include "ChnsFsmIdealPid.h"

//-----------------------------------------------------------------------
// Local Macros, Typedefs, Structures, Unions and Forward Declarations --
//-----------------------------------------------------------------------

//----------------
// Constructors --
//----------------

ChnsFsmDetFactory::ChnsFsmDetFactory()
{
}

//--------------
// Destructor --
//--------------

ChnsFsmDetFactory::~ChnsFsmDetFactory()
{
}

//--------------
// Operations --
//--------------

ChnsFsmAbsDet*
ChnsFsmDetFactory::create(std::string &name,ArgList &par)
{
  TString tname(name);

  if (tname.BeginsWith("EmcBarrel")){
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmEmcBarrel(par));
    aDet->setName(name);
    //aDet->setStorePid();
    return aDet;
  } else
  if (tname=="EmcFwCap"){
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmEmcFwCap(par));
    aDet->setName(name);
    aDet->setStorePid();
    return aDet;
  } else
  if (tname=="EmcBwCap"){
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmEmcBwCap(par));
    aDet->setName(name);
    aDet->setStorePid();
    return aDet;
  } else
  if (tname=="EmcFS"){
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmEmcFS(par));
    aDet->setName(name);
    //aDet->setStorePid();
    return aDet;
  } else
  if (tname=="Stt"){
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmStt(par));
    aDet->setName(name);
    aDet->setStorePid();
    return aDet;
  } else
  if (tname=="Tpc"){
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmTpc(par));
    aDet->setName(name);
    aDet->setStorePid();
    return aDet;
  } else
  if (tname=="MdcFS"){
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmMdcFS(par));
    aDet->setName(name);
    return aDet;
  } else
  if (tname=="MdcTS"){
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmMdcTS(par));
    aDet->setName(name);
    return aDet;
  } else
  if (tname.BeginsWith("EffTracker")){
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmEffTracker(par));
    aDet->setName(name);
    return aDet;
  } else
  if (tname=="DrcBarrel"){
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmDrcBarrel(par));
    aDet->setName(name);
    aDet->setStorePid();
    return aDet;
  } else
  if (tname=="DrcDisc"){
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmDrcDisc(par));
    aDet->setName(name);
    aDet->setStorePid();
    return aDet;
  } else
  if (tname=="Mvd"){
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmMvd(par));
    aDet->setName(name);
    aDet->setStorePid();
    return aDet;
  } else
  if (tname=="Mvd2"){
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmMvd2(par));
    aDet->setName(name);
    aDet->setStorePid();
    return aDet;
  } else
  if (tname=="Tof"){
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmTof(par));
    aDet->setName(name);
    //aDet->setStorePid();
    return aDet;
  } else
  if (tname=="TofBwCap"){
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmTofBwCap(par));
    aDet->setName(name);
    //aDet->setStorePid();
    return aDet;
  } else
  if (tname=="TofFwCap"){
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmTofFwCap(par));
    aDet->setName(name);
    //aDet->setStorePid();
    return aDet;
  }
  if (tname=="GemBwCap"){
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmGemBwCap(par));
    aDet->setName(name);
    aDet->setStorePid();
    return aDet;
  } else
  if (tname=="GemFwCap"){
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmGemFwCap(par));
    aDet->setName(name);
    aDet->setStorePid();
    return aDet;
  } else
  if (tname=="Rich"){
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmRich(par));
    aDet->setName(name);
    aDet->setStorePid();
    return aDet;
  } else
  // --- scrutiny process options
  if (tname.BeginsWith("ScSttAlone") || tname.BeginsWith("ScSttMvd") || tname.BeginsWith("ScSttMvdGem") ||
      tname.BeginsWith("ScSttGem")   || tname.BeginsWith("ScMvdGem") || tname.BeginsWith("ScMvdGemFts")    ||
      tname.BeginsWith("ScMvdFts")   || tname.BeginsWith("ScGemFts") ||  tname=="ScFts" ) {
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmSimpleTracker(par));
    aDet->setName(name);
    return aDet;
  } else
  if (tname=="MvdPid") {
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmMvdPid(par) );
    aDet->setStorePid();
    return aDet;
  } else
  if (tname.BeginsWith("ScEmcPidBarrel") || tname=="ScEmcPidFwCap" || tname=="ScEmcPidBwCap" || tname=="ScEmcPidFS"){
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmEmcPid(par) );
	aDet->setName(name);
    //aDet->setStorePid();
	return aDet;
  } else
  if (tname=="SttPid"){
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmSttPid(par) );
    aDet->setStorePid();
    return aDet;
  }
  if (tname=="TpcPid"){
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmTpcPid(par) );
    aDet->setStorePid();
    return aDet;
  }
  if (tname=="ScVtxMvd" || tname=="ScVtxNoMvd") {
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmSimpleVtx(par));
    aDet->setName(name);
    return aDet;
  } else
  if (tname=="ScMdtPidBarrel" || tname=="ScMdtPidForward") {
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmMdtPid(par));
    aDet->setName(name);
    aDet->setStorePid();
    return aDet;
  }
  // general Options
  else
  if (tname.BeginsWith("SimpleTracker")) {
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmSimpleTracker(par));
    aDet->setName(name);
    return aDet;
  } else
  if (tname.BeginsWith("SimpleVtx")) {
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmSimpleVtx(par));
    aDet->setName(name);
    return aDet;
  } else
  if (tname=="IdealPid") {
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmIdealPid(par));
    aDet->setName(name);
    //aDet->setStorePid();
    return aDet;
  }
  if (tname=="CmpDet") {
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmCmpDet(par));
    aDet->setName(name);
    return aDet;
  } else
  if (tname=="CombiDet") {
    ChnsFsmAbsDet* aDet = (ChnsFsmAbsDet*)(new ChnsFsmCombiDet(par));
    aDet->setName(name);
    return aDet;
  } else {
    std::cout  <<" -W- (ChnsFsmDetFactory::create) Unknown detector: <"<<name<<">"<< std::endl;
    return 0;
  }
}

ChnsFsmAbsDet*
ChnsFsmDetFactory::create(std::string &name, std::string par)
{
  // par is a string of the form "a=1 b=2 c=3 d=4"
  // this function splits the single assignments in the string to an ArgList
  // i.e. a std::list<std::string> of the form ("a=1","b=2","c=3","d=4")

  ArgList parList;

  CStrTok tokenizer;
  char csrc[200];

  const char *src=par.data();
  strcpy(csrc,src);

  char* token = tokenizer.GetFirst(csrc, " \t");

  while(token)
  {
    parList.push_back(token);
    token=tokenizer.GetNext(" \t");
  }

  /*
  typedef boost::tokenizer<boost::char_separator<char> > tokenizer;
  boost::char_separator<char> sep_blank(" ");
  tokenizer tokens_bl(par, sep_blank);

  for (tokenizer::iterator tok_iter_bl = tokens_bl.begin();tok_iter_bl!=tokens_bl.end();tok_iter_bl++)
    parList.push_back(*tok_iter_bl);
  */

  return (ChnsFsmAbsDet*)create(name, parList);
}

