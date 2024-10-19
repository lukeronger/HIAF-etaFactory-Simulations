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
/** @addtogroup genfit
 * @{
 */

#ifndef genfit_FieldMap_h
#define genfit_FieldMap_h

#include "AbsBField.h"
#include "TArrayF.h"

namespace genfit {

/** @brief Constant Magnetic field
 *
 *  @author Christian H&ouml;ppner (Technische Universit&auml;t M&uuml;nchen, original author)
 *  @author Sebastian Neubert  (Technische Universit&auml;t M&uuml;nchen, original author)
 * 
 */
class FieldMap : public AbsBField {
 public:
  //! define the constant field in this ctor
  FieldMap(const char* mapName, const char* fileType = "R");

  FieldMap();

  //! return value at position
  //TVector3 get( const TVector3& pos) const;
  //void get(const double& posX, const double& posY, const double& posZ, double& Bx, double& By, double& Bz) const;
  TVector3 get(const TVector3& pos);
  void get( const double& posX, const double& posY, const double& posZ, double& Bx, double& By, double& Bz);

  /** Read the field map from an ASCII file **/
  void ReadAsciiFile(const char* fileName);


  /** Get the field components at a certain point
   ** @param x,y,z     Point coordinates (global) [cm]
   ** @value Bx,By,Bz  Field components [kG]
   **/
  Double_t GetBx(Double_t x, Double_t y, Double_t z);
  virtual Double_t GetBy(Double_t x, Double_t y, Double_t z);
  virtual Double_t GetBz(Double_t x, Double_t y, Double_t z);


  /** Determine whether a point is inside the field map
   ** @param x,y,z              Point coordinates (global) [cm]
   ** @param ix,iy,iz (return)  Grid cell
   ** @param dx,dy,dz (return)  Distance from grid point [cm] if inside
   ** @value kTRUE if inside map, else kFALSE
   **/
  virtual Bool_t IsInside(Double_t x, Double_t y, Double_t z,
                          Int_t& ix, Int_t& iy, Int_t& iz,
                          Double_t& dx, Double_t& dy, Double_t& dz);

  Double_t Interpolate(Double_t dx, Double_t dy, Double_t dz);


 private:
  //TVector3 field_;


    /** Map file name **/
  TString fFileName;


  /** Global scaling factor (w.r.t. map on file) **/
  Double_t fScale;

  /** Units used in map file**/
  Double_t funit;


  /** Field centre position in global coordinates  **/
  Double_t fPosX=0., fPosY=0., fPosZ=0.;


  /** Field limits in local coordinate system **/
  Double_t fXmin, fXmax, fXstep;
  Double_t fYmin, fYmax, fYstep;
  Double_t fZmin, fZmax, fZstep;




  /** Number of grid points  **/
  Int_t fNx, fNy, fNz;

  /** Arrays with the field values  **/
  TArrayF* fBx;
  TArrayF* fBy;
  TArrayF* fBz;

  /** Variables for temporary storage
   ** Used in the very frequently called method GetFieldValue  **/
  Double_t fHa[2][2][2];            //! Field at corners of a grid cell
  Double_t fHb[2][2];               //! Interpolated field (2-dim)
  Double_t fHc[2];                  //! Interpolated field (1-dim)



  int fType = 1;


};

} /* End of namespace genfit */
/** @} */

#endif // genfit_FieldMap_h
