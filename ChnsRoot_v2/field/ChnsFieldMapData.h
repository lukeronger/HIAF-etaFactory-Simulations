// -------------------------------------------------------------------------
// -----                    ChnsFieldMapData header file                -----
// -----                V. Friese                 13/02/06             -----
// -------------------------------------------------------------------------


/** ChnsFieldMapData.h
 ** @author V.Friese <v.friese@gsi.de>
 ** @since 14.02.2006
 ** @version1.0
 ** Modified by M.Al-Turany for PANDA 
 ** This class holds the real data arrays of a magnetic field map,
 ** which are read from / written to file. Nota bene: Field values
 ** are in the same units as they where in the file, in contrast to ChnsFieldMap, whcih holds the
 ** field in kG.
 **/


#ifndef CHNSMAGFIELDMAPDATA_H
#define CHNSMAGFIELDMAPDATA_H


#include "TNamed.h"


class TArrayF;

class ChnsFieldMap;



class ChnsFieldMapData : public TNamed {

public:


  /** Default constructor **/
  ChnsFieldMapData();


  /** Standard constructor **/
  ChnsFieldMapData(const char* name);


  /** Constructor from an existing ChnsFieldMap **/
  ChnsFieldMapData(const char* name, const ChnsFieldMap& map);


  /** Destructor **/
  virtual ~ChnsFieldMapData();


  /** Accessors to field parameters in local coordinate system **/
  Int_t    GetType()  const { return fType; }
  Double_t GetXmin()  const { return fXmin; } 
  Double_t GetYmin()  const { return fYmin; }
  Double_t GetZmin()  const { return fZmin; }
  Double_t GetXmax()  const { return fXmax; }  
  Double_t GetYmax()  const { return fYmax; }
  Double_t GetZmax()  const { return fZmax; }
  Int_t    GetNx()    const { return fNx; }
  Int_t    GetNy()    const { return fNy; }
  Int_t    GetNz()    const { return fNz; }


  /** Accessors to the field value arrays **/
  TArrayF* GetBx() const { return fBx; }
  TArrayF* GetBy() const { return fBy; }
  TArrayF* GetBz() const { return fBz; }
 private:
  ChnsFieldMapData(const  ChnsFieldMapData& L);
  ChnsFieldMapData& operator= (const  ChnsFieldMapData&) {return *this;};
	


  /** Type of map. 1 = ChnsFieldMap, 2 = Sym2, 3 = Sym3 **/
  Int_t fType;

  /** Field limits in local coordinate system **/
  Double_t fXmin, fXmax;
  Double_t fYmin, fYmax;
  Double_t fZmin, fZmax;
  
  /**Original units of the map */
  Double_t fUnit; 


  /** Number of grid points  **/
  Int_t fNx, fNy, fNz;


  /** Arrays with the field values in T **/
  TArrayF* fBx;
  TArrayF* fBy;
  TArrayF* fBz;


  ClassDef(ChnsFieldMapData,1) 

};


#endif
