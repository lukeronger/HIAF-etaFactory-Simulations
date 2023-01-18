/* Copyright 2008-2010, Technische Universitaet Muenchen,
   Authors: Christian Hoeppner & Sebastian Neubert & Johannes Rauch

   This file is part of GENFIT.

   GENFIT is free software: you can redistribute it and/or modify
   it under the terms of the GNU Lesser General Public License as published
   by the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   GENFIT is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with GENFIT.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "FieldMap.h"
#include <iomanip>
#include <iostream>
#include <fstream>
#include "stdlib.h"

using namespace std;

namespace genfit {

FieldMap::FieldMap()
  : fScale(1.0),
    funit(10.0),
    fPosX(0), fPosY(0), fPosZ(0),
    fXmin(0), fXmax(0), fXstep(0),
        fYmin(0), fYmax(0), fYstep(0),
    fZmin(0), fZmax(0), fZstep(0),
    fNx(0),fNy(0),fNz(0),
    fBx(NULL), fBy(NULL), fBz(NULL)
{
  fType = 1;
}

/*
TVector3 FieldMap::get( const TVector3&)  const{
  TVector3 temp(0,0,15);
  cout<<"FieldMap::get"<<endl;
  return temp;
  //return field_;
}
*/

TVector3 FieldMap::get( const TVector3&)  {
  TVector3 temp(0,0,15);
  cout<<"FieldMap::get"<<endl;
  return temp;
  //return field_;
}


/*
void FieldMap::get(const double& posX, const double& posY, const double&posZ, double& Bx, double& By, double& Bz) const {
	cout<<"FieldMap::get-0000"<<endl;

	cout<<"FieldMap::get-0000"<<endl;
  Bx = GetBx(posX, posY, posZ);
  By = GetBy(posX, posY, posZ);
  Bz = GetBz(posX, posY, posZ);

	
  //Bx = field_.X();
  //By = field_.Y();
  //Bz = field_.Z();
  
  
}
*/

void FieldMap::get( const double& posX, const double& posY, const double&posZ, double& Bx, double& By, double& Bz) {

  Bx = GetBx(posX, posY, posZ);
  By = GetBy(posX, posY, posZ);
  Bz = GetBz(posX, posY, posZ);

  cout<<"FieldMap::get-  "<<posX<<" "<<posY<<" "<<posZ<<"   Bx "<<Bx<<" "<<By<<" "<<Bz<<endl;


}


void FieldMap::ReadAsciiFile(const char* fileName) {
  Double_t bx=0., by=0., bz=0.;
  // Open file
  cout << "-I- EiccFieldMap: Reading field map from ASCII file "
       << fileName << endl;
  ifstream mapFile(fileName);
  if ( ! mapFile.is_open() ) {
    cerr << "-E- EiccFieldMap:ReadAsciiFile: Could not open file! " << endl;
    Fatal("ReadAsciiFile","Could not open file");
  }

  // Read map type
  TString type;
  mapFile >> type;

  Int_t iType = 0;
  if ( type == "nosym" ) iType = 1;
  if ( type == "Solenoid") iType = 2;
  if ( type == "Dipole"  ) iType = 3;
  if ( type == "Trans"  ) iType = 4;
  if ( fType != iType ) {
    cout << "-E- EiccFieldMap::ReadAsciiFile: Incompatible map types!"
         << endl;
    cout << "    Field map is of type " << fType
         << " but map on file is of type " << iType << endl;
    Fatal("ReadAsciiFile","Incompatible map types");
  }

  // Read Units
  TString unit;
  mapFile >> unit;
  if ( unit == "G" ) funit = 0.001;
  else if ( unit == "T"  ) funit = 10.0;
  else if ( unit == "kG"  ) funit=1.0;
  else {
    cout << "-E- FieldMap::ReadAsciiFile: No units!"
         << endl;
        Fatal("ReadAsciiFile","No units defined");
  }


  // Read grid parameters

  mapFile >>fXmin >> fXmax >> fNx;
  mapFile >>fYmin >> fYmax >> fNy;
  mapFile >>fZmin >> fZmax >> fNz;
  fXstep = ( fXmax - fXmin ) / Double_t( fNx - 1 );
  fYstep = ( fYmax - fYmin ) / Double_t( fNy - 1 );
  fZstep = ( fZmax - fZmin ) / Double_t( fNz - 1 );

  // Create field arrays
  fBx = new TArrayF(fNx * fNy * fNz);
  fBy = new TArrayF(fNx * fNy * fNz);
  fBz = new TArrayF(fNx * fNy * fNz);

  // Read the field values
  Double_t factor = fScale * funit;   // Factor 1/1000 for G -> kG
  cout << right;
  Int_t nTot = fNx * fNy * fNz;
  cout << "-I- EiccFieldMap: " << nTot << " entries to read... "
       << setw(3) << 0 << " % ";
  Int_t index = 0;
  div_t modul;
  Int_t iDiv = TMath::Nint(nTot/100.);
  for (Int_t ix=0; ix<fNx; ix++) {
    for (Int_t iy = 0; iy<fNy; iy++) {
      for (Int_t iz = 0; iz<fNz; iz++) {
        if (! mapFile.good()) cerr << "-E- EiccFieldMap::ReadAsciiFile: "
                                   << "I/O Error at " << ix << " "
                                   << iy << " " << iz << endl;
        index = ix*fNy*fNz + iy*fNz + iz;
        if (iDiv!=0)
          {
            modul = div(index,iDiv);
            if ( modul.rem == 0 ) {
              Double_t perc = TMath::Nint(100.*index/nTot);
              cout << "\b\b\b\b\b\b" << setw(3) << perc << " % " << flush;
            }
          }
        //mapFile >> xx>>yy>>zz>>  bx >> by >> bz ;
        mapFile >>  bx >> by >> bz ;
        //cout  << " x= " <<xx <<" y= " << yy<<" z= " << zz<<" bx= " <<  bx <<" by= " <<by <<" bz= " << bz<< endl;
        fBx->AddAt(factor*bx, index);
        fBy->AddAt(factor*by, index);
        fBz->AddAt(factor*bz, index);
        if ( mapFile.eof() ) {
          cerr << endl << "-E- EiccFieldMap::ReadAsciiFile: EOF"
               << " reached at " << ix << " " << iy << " " << iz << endl;
          mapFile.close();
          break;
        }
      }   // z-Loop
    }     // y-Loop0)
  }       // x-Loop

  cout << "   " << index+1 << " read" << endl;

  mapFile.close();

}


// -----------   Get x component of the field   ---------------------------
Double_t FieldMap::GetBx(Double_t x, Double_t y, Double_t z) {

  Int_t ix    = 0;
  Int_t iy    = 0;
  Int_t iz    = 0;
  Double_t dx = 0.;
  Double_t dy = 0.;
  Double_t dz = 0.;

  if ( IsInside(x, y, z, ix, iy, iz, dx, dy, dz) ) {

  //cout<<"EiccFieldMap::GetBx   "<<x<<" "<<y<<" "<<z<<"    "<<ix<<"    "<<(ix    *fNy*fNz + iy    *fNz + iz)<<endl;

  // Get Bx field values at grid cell corners
  fHa[0][0][0] = fBx->At(ix    *fNy*fNz + iy    *fNz + iz);
  fHa[1][0][0] = fBx->At((ix+1)*fNy*fNz + iy    *fNz + iz);
  fHa[0][1][0] = fBx->At(ix    *fNy*fNz + (iy+1)*fNz + iz);
  fHa[1][1][0] = fBx->At((ix+1)*fNy*fNz + (iy+1)*fNz + iz);
  fHa[0][0][1] = fBx->At(ix    *fNy*fNz + iy    *fNz + (iz+1));
  fHa[1][0][1] = fBx->At((ix+1)*fNy*fNz + iy    *fNz + (iz+1));
  fHa[0][1][1] = fBx->At(ix    *fNy*fNz + (iy+1)*fNz + (iz+1));
  fHa[1][1][1] = fBx->At((ix+1)*fNy*fNz + (iy+1)*fNz + (iz+1));

  // Return interpolated field value
  return Interpolate(dx, dy, dz);

  }

  return 0.;
}


// -----------   Get y component of the field   ---------------------------
Double_t FieldMap::GetBy(Double_t x, Double_t y, Double_t z) {

  Int_t ix    = 0;
  Int_t iy    = 0;
  Int_t iz    = 0;
  Double_t dx = 0.;
  Double_t dy = 0.;
  Double_t dz = 0.;

  if ( IsInside(x, y, z, ix, iy, iz, dx, dy, dz) ) {

  // Get By field values at grid cell corners
  fHa[0][0][0] = fBy->At(ix    *fNy*fNz + iy    *fNz + iz);
  fHa[1][0][0] = fBy->At((ix+1)*fNy*fNz + iy    *fNz + iz);
  fHa[0][1][0] = fBy->At(ix    *fNy*fNz + (iy+1)*fNz + iz);
  fHa[1][1][0] = fBy->At((ix+1)*fNy*fNz + (iy+1)*fNz + iz);
  fHa[0][0][1] = fBy->At(ix    *fNy*fNz + iy    *fNz + (iz+1));
  fHa[1][0][1] = fBy->At((ix+1)*fNy*fNz + iy    *fNz + (iz+1));
  fHa[0][1][1] = fBy->At(ix    *fNy*fNz + (iy+1)*fNz + (iz+1));
  fHa[1][1][1] = fBy->At((ix+1)*fNy*fNz + (iy+1)*fNz + (iz+1));

  // Return interpolated field value
  return Interpolate(dx, dy, dz);

  }

  return 0.;
}


// -----------   Get z component of the field   ---------------------------
Double_t FieldMap::GetBz(Double_t x, Double_t y, Double_t z) {

  Int_t ix    = 0;
  Int_t iy    = 0;
  Int_t iz    = 0;
  Double_t dx = 0.;
  Double_t dy = 0.;
  Double_t dz = 0.;

  if ( IsInside(x, y, z, ix, iy, iz, dx, dy, dz) ) {

  // Get Bz field values at grid cell corners
  fHa[0][0][0] = fBz->At(ix    *fNy*fNz + iy    *fNz + iz);
  fHa[1][0][0] = fBz->At((ix+1)*fNy*fNz + iy    *fNz + iz);
  fHa[0][1][0] = fBz->At(ix    *fNy*fNz + (iy+1)*fNz + iz);
  fHa[1][1][0] = fBz->At((ix+1)*fNy*fNz + (iy+1)*fNz + iz);
  fHa[0][0][1] = fBz->At(ix    *fNy*fNz + iy    *fNz + (iz+1));
  fHa[1][0][1] = fBz->At((ix+1)*fNy*fNz + iy    *fNz + (iz+1));
  fHa[0][1][1] = fBz->At(ix    *fNy*fNz + (iy+1)*fNz + (iz+1));
  fHa[1][1][1] = fBz->At((ix+1)*fNy*fNz + (iy+1)*fNz + (iz+1));

  // Return interpolated field value
  return Interpolate(dx, dy, dz);

  }

  return 0.;
}

// -----------   Check whether a point is inside the map   ----------------
Bool_t FieldMap::IsInside(Double_t x, Double_t y, Double_t z,
                             Int_t& ix, Int_t& iy, Int_t& iz,
                             Double_t& dx, Double_t& dy, Double_t& dz) {

  // --- Transform into local coordinate system
  Double_t xl = x - fPosX;
  Double_t yl = y - fPosY;
  Double_t zl = z - fPosZ;

  //cout<<"IsInside? :  fXmin "<<fXmin<<" "<<fXmax<<"  "<<fYmin<<" "<<fYmax<<"  "<<fZmin<<" "<<fZmax<<endl;
  //cout<<"xl: "<<xl<<" "<<yl<<" "<<zl<<endl;
  // ---  Check for being outside the map range
  if ( ! ( xl >= fXmin && xl < fXmax && yl >= fYmin && yl < fYmax &&
           zl >= fZmin && zl < fZmax ) ) {
    ix = iy = iz = 0;
    dx = dy = dz = 0.;
    return kFALSE;
  }

  /* Yutie Liang  2022.02.15
  // --- Determine grid cell
  ix = Int_t( xl / fXstep );
  iy = Int_t( yl / fYstep );
  iz = Int_t( zl / fZstep );
*/

  // --- Determine grid cell
  ix = Int_t( (xl-fXmin) / fXstep );
  iy = Int_t( (yl-fYmin) / fYstep );
  iz = Int_t( (zl-fZmin) / fZstep );

  //cout<<"IsInside: fPosX = "<<fPosX<<"  fXstep = "<<fXstep<<"  xl = "<<xl<<"  ix = "<<ix<<endl;

  // Relative distance from grid point (in units of cell size)
  /*
  dx = xl / fXstep - Double_t(ix);
  dy = yl / fYstep - Double_t(iy);
  dz = zl / fZstep - Double_t(iz);
*/
  dx = (xl-fXmin) / fXstep - Double_t(ix);   //Yutie 2022.02.16
  dy = (yl-fYmin) / fYstep - Double_t(iy);
  dz = (zl-fZmin) / fZstep - Double_t(iz);

  return kTRUE;

}
// ------------------------------------------------------------------------


// ------------   Interpolation in a grid cell (private)  -----------------
Double_t FieldMap::Interpolate(Double_t dx, Double_t dy, Double_t dz) {

  // Interpolate in x coordinate
  fHb[0][0] = fHa[0][0][0] + ( fHa[1][0][0]-fHa[0][0][0] ) * dx;
  fHb[1][0] = fHa[0][1][0] + ( fHa[1][1][0]-fHa[0][1][0] ) * dx;
  fHb[0][1] = fHa[0][0][1] + ( fHa[1][0][1]-fHa[0][0][1] ) * dx;
  fHb[1][1] = fHa[0][1][1] + ( fHa[1][1][1]-fHa[0][1][1] ) * dx;

  // Interpolate in y coordinate
  fHc[0] = fHb[0][0] + ( fHb[1][0] - fHb[0][0] ) * dy;
  fHc[1] = fHb[0][1] + ( fHb[1][1] - fHb[0][1] ) * dy;

  // Interpolate in z coordinate
  return fHc[0] + ( fHc[1] - fHc[0] ) * dz;

}
// ------------------------------------------------------------------------









} /* End of namespace genfit */
