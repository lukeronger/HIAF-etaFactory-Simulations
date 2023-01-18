//////////////////////////////////////////////////////////////////////////
//                                                                      //
// ChnsOnlineFilterInfo	                                                //
//                                                                      //
// Information Container for Online Filter Results                      //
//                                                                      //
// Author: Klaus Goetzen, GSI, 2013                                     //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "ChnsOnlineFilterInfo.h"
#include "TClass.h"
#include <iostream>
#include <stdlib.h>

ChnsOnlineFilterInfo::ChnsOnlineFilterInfo() :	
	fTag(false),
	fNTagTotal(0),
	fNModes(0)
{
	for (int i=0;i<OFIMAXMODES;++i)
	{
		fMode[i]=-1;
		fNTag[i]=0;
	}
}

// ---------------------------------------

ChnsOnlineFilterInfo::~ChnsOnlineFilterInfo()
{
}

// ---------------------------------------
// set number of tag candidates for trigger line with code 'mode'
void ChnsOnlineFilterInfo::SetNTag(int mode, int tag)
{
	for (int i=0;i<fNModes;++i)
	{
		if (fMode[i]==mode) // known mode code
		{
			fNTagTotal = fNTagTotal - fNTag[i] + tag;
			fNTag[i] = tag;
			return;
		}
	}
	
	// new mode code
	if (fNModes>=OFIMAXMODES) 
	{
		std::cout <<"[ChnsOnlineFilterInfo] **** Exceeding maximum number of "<<OFIMAXMODES<<" modes!"<<std::endl;
		exit(1);
	}
	
	fMode[fNModes] = mode;
	fNTag[fNModes++] = tag;
	fNTagTotal += tag;
	fTag = (fNTagTotal>0);
}

// ---------------------------------------
// get number of tag candidates for trigger line with code 'mode'
int ChnsOnlineFilterInfo::GetNTag(int mode)
{
	for (int i=0;i<fNModes;++i) if (fMode[i]==mode) return fNTag[i];
		
	return 0;
}

// ---------------------------------------

void ChnsOnlineFilterInfo::Reset()
{
	fTag=false;
	fNTagTotal=0;
	fNModes=0;
	
	for (int i=0;i<OFIMAXMODES;++i)
	{
		fMode[i]=-1;
		fNTag[i]=0;
	}
}

// ---------------------------------------

void ChnsOnlineFilterInfo::Print()
{
	std::cout <<"ChnsOnlineFilterInfo found triggers:   "   <<std::endl;
	std::cout <<"fNTagTotal        : "<< fNTagTotal        <<std::endl;
  
	for (int i=0;i<fNModes;++i)
	{
		std::cout <<"fN["<<fMode[i]<<"] :"<< fNTag[i]<<std::endl;
	}
}


ClassImp(ChnsOnlineFilterInfo)

