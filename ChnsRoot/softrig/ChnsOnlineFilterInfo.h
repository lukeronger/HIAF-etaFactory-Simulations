#ifndef CHNSONLINEFILTERINFO_H
#define CHNSONLINEFILTERINFO_H
//////////////////////////////////////////////////////////////////////////
//                                                                      //
// ChnsOnlineFilterInfo	                                                //
//                                                                      //
// Information Container for Online Filter Results                      //
//                                                                      //
// Author: Klaus Goetzen, GSI, 2013                                     //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "TObject.h"
#include "TBuffer.h"

#define OFIMAXMODES 65


class ChnsOnlineFilterInfo : public TObject 
{

 public:

	ChnsOnlineFilterInfo();
	~ChnsOnlineFilterInfo();

	// *** any tag?
	bool Tagged() const {return fNTagTotal>0;}
	
	// *** total number of tags of all triggers
	int  GetNTagTotal() const { return fNTagTotal; } 
	
	// *** accessor to number of tags for mode
	int GetNTag(int mode);
	
	// *** modifier for number of tags for mode
	void SetNTag(int mode, const int tag);
	
	void Reset();
	void Print();

	// custom streamer; needed to build map
	//virtual void Streamer(TBuffer &R__b);

 protected:
	 
	bool fTag;
	int fNTagTotal;
	
	int fNModes;
	int fMode[OFIMAXMODES];
	int fNTag[OFIMAXMODES];
		
    ClassDef(ChnsOnlineFilterInfo,2);
    
};


#endif                                           


