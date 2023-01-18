
#include "ChnsEmcParticle.h"

#include <iostream>
#include <vector>
using std::cout;
using std::endl;

// -----   Default constructor   -------------------------------------------
ChnsEmcParticle::ChnsEmcParticle()
	: FairTimeStamp()
{}
// -------------------------------------------------------------------------

// -----   Standard constructor   ------------------------------------------
ChnsEmcParticle::ChnsEmcParticle(
		Double_t Px,
		Double_t Py,
		Double_t Pz,
		Double_t E,
		Int_t PdgCode,
		Double_t Mass
		)
{
	fPx = Px;
	fPy = Py;
	fPz = Pz;
	fE = E;
	fPdgCode = PdgCode;
	fMass = Mass;
}
// -------------------------------------------------------------------------

// -----   Destructor   ----------------------------------------------------
ChnsEmcParticle::~ChnsEmcParticle() {}
// -------------------------------------------------------------------------

// -----   Public method Print   -------------------------------------------
void ChnsEmcParticle::Print(const Option_t* /*opt*/) const
{
	cout << "-I- ChnsEmcParticle: ChnsMvd hit for track " << endl;
}
// -------------------------------------------------------------------------

ClassImp(ChnsEmcParticle);
