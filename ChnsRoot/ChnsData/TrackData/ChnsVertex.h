/*
 * ChnsVertex.h
 *
 *  Created on: Aug 25, 2009
 *      Author: stockman
 */

#ifndef CHNSVERTEX_H_
#define CHNSVERTEX_H_

#include "FairHit.h"

class ChnsVertex: public FairHit {
public:
	ChnsVertex();
	ChnsVertex(double x, double y, double z){
		SetX(x); SetY(y); SetZ(z);
	}
	virtual ~ChnsVertex();

	ClassDef(ChnsVertex, 0);
};

#endif /* CHNSVERTEX_H_ */
