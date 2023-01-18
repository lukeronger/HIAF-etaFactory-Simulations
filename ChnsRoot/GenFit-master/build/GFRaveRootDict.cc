// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIliangytdIEiccRootdIGenFitmImasterdIGenFitmImasterdIbuilddIGFRaveRootDict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// The generated code does not explicitly qualifies STL entities
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/GFRave/include/GFRaveTrackParameters.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/GFRave/include/GFRaveVertex.h"

// Header files passed via #pragma extra_include

namespace genfit {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *genfit_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genfit", 0 /*version*/, "AbsFinitePlane.h", 35,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &genfit_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *genfit_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void *new_genfitcLcLGFRaveTrackParameters(void *p = 0);
   static void *newArray_genfitcLcLGFRaveTrackParameters(Long_t size, void *p);
   static void delete_genfitcLcLGFRaveTrackParameters(void *p);
   static void deleteArray_genfitcLcLGFRaveTrackParameters(void *p);
   static void destruct_genfitcLcLGFRaveTrackParameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::GFRaveTrackParameters*)
   {
      ::genfit::GFRaveTrackParameters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::GFRaveTrackParameters >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::GFRaveTrackParameters", ::genfit::GFRaveTrackParameters::Class_Version(), "", 53,
                  typeid(::genfit::GFRaveTrackParameters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::GFRaveTrackParameters::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::GFRaveTrackParameters) );
      instance.SetNew(&new_genfitcLcLGFRaveTrackParameters);
      instance.SetNewArray(&newArray_genfitcLcLGFRaveTrackParameters);
      instance.SetDelete(&delete_genfitcLcLGFRaveTrackParameters);
      instance.SetDeleteArray(&deleteArray_genfitcLcLGFRaveTrackParameters);
      instance.SetDestructor(&destruct_genfitcLcLGFRaveTrackParameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::GFRaveTrackParameters*)
   {
      return GenerateInitInstanceLocal((::genfit::GFRaveTrackParameters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::GFRaveTrackParameters*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLGFRaveVertex(void *p = 0);
   static void *newArray_genfitcLcLGFRaveVertex(Long_t size, void *p);
   static void delete_genfitcLcLGFRaveVertex(void *p);
   static void deleteArray_genfitcLcLGFRaveVertex(void *p);
   static void destruct_genfitcLcLGFRaveVertex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::GFRaveVertex*)
   {
      ::genfit::GFRaveVertex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::GFRaveVertex >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::GFRaveVertex", ::genfit::GFRaveVertex::Class_Version(), "", 145,
                  typeid(::genfit::GFRaveVertex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::GFRaveVertex::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::GFRaveVertex) );
      instance.SetNew(&new_genfitcLcLGFRaveVertex);
      instance.SetNewArray(&newArray_genfitcLcLGFRaveVertex);
      instance.SetDelete(&delete_genfitcLcLGFRaveVertex);
      instance.SetDeleteArray(&deleteArray_genfitcLcLGFRaveVertex);
      instance.SetDestructor(&destruct_genfitcLcLGFRaveVertex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::GFRaveVertex*)
   {
      return GenerateInitInstanceLocal((::genfit::GFRaveVertex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::GFRaveVertex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr GFRaveTrackParameters::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GFRaveTrackParameters::Class_Name()
{
   return "genfit::GFRaveTrackParameters";
}

//______________________________________________________________________________
const char *GFRaveTrackParameters::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::GFRaveTrackParameters*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GFRaveTrackParameters::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::GFRaveTrackParameters*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GFRaveTrackParameters::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::GFRaveTrackParameters*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GFRaveTrackParameters::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::GFRaveTrackParameters*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr GFRaveVertex::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GFRaveVertex::Class_Name()
{
   return "genfit::GFRaveVertex";
}

//______________________________________________________________________________
const char *GFRaveVertex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::GFRaveVertex*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GFRaveVertex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::GFRaveVertex*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GFRaveVertex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::GFRaveVertex*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GFRaveVertex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::GFRaveVertex*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
void GFRaveTrackParameters::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::GFRaveTrackParameters.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::GFRaveTrackParameters::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::GFRaveTrackParameters::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLGFRaveTrackParameters(void *p) {
      return  p ? new(p) ::genfit::GFRaveTrackParameters : new ::genfit::GFRaveTrackParameters;
   }
   static void *newArray_genfitcLcLGFRaveTrackParameters(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::GFRaveTrackParameters[nElements] : new ::genfit::GFRaveTrackParameters[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLGFRaveTrackParameters(void *p) {
      delete ((::genfit::GFRaveTrackParameters*)p);
   }
   static void deleteArray_genfitcLcLGFRaveTrackParameters(void *p) {
      delete [] ((::genfit::GFRaveTrackParameters*)p);
   }
   static void destruct_genfitcLcLGFRaveTrackParameters(void *p) {
      typedef ::genfit::GFRaveTrackParameters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::GFRaveTrackParameters

namespace genfit {
//______________________________________________________________________________
void GFRaveVertex::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::GFRaveVertex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::GFRaveVertex::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::GFRaveVertex::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLGFRaveVertex(void *p) {
      return  p ? new(p) ::genfit::GFRaveVertex : new ::genfit::GFRaveVertex;
   }
   static void *newArray_genfitcLcLGFRaveVertex(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::GFRaveVertex[nElements] : new ::genfit::GFRaveVertex[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLGFRaveVertex(void *p) {
      delete ((::genfit::GFRaveVertex*)p);
   }
   static void deleteArray_genfitcLcLGFRaveVertex(void *p) {
      delete [] ((::genfit::GFRaveVertex*)p);
   }
   static void destruct_genfitcLcLGFRaveVertex(void *p) {
      typedef ::genfit::GFRaveVertex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::GFRaveVertex

namespace ROOT {
   static TClass *vectorlEgenfitcLcLGFRaveTrackParametersmUgR_Dictionary();
   static void vectorlEgenfitcLcLGFRaveTrackParametersmUgR_TClassManip(TClass*);
   static void *new_vectorlEgenfitcLcLGFRaveTrackParametersmUgR(void *p = 0);
   static void *newArray_vectorlEgenfitcLcLGFRaveTrackParametersmUgR(Long_t size, void *p);
   static void delete_vectorlEgenfitcLcLGFRaveTrackParametersmUgR(void *p);
   static void deleteArray_vectorlEgenfitcLcLGFRaveTrackParametersmUgR(void *p);
   static void destruct_vectorlEgenfitcLcLGFRaveTrackParametersmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<genfit::GFRaveTrackParameters*>*)
   {
      vector<genfit::GFRaveTrackParameters*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<genfit::GFRaveTrackParameters*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<genfit::GFRaveTrackParameters*>", -2, "vector", 216,
                  typeid(vector<genfit::GFRaveTrackParameters*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEgenfitcLcLGFRaveTrackParametersmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<genfit::GFRaveTrackParameters*>) );
      instance.SetNew(&new_vectorlEgenfitcLcLGFRaveTrackParametersmUgR);
      instance.SetNewArray(&newArray_vectorlEgenfitcLcLGFRaveTrackParametersmUgR);
      instance.SetDelete(&delete_vectorlEgenfitcLcLGFRaveTrackParametersmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEgenfitcLcLGFRaveTrackParametersmUgR);
      instance.SetDestructor(&destruct_vectorlEgenfitcLcLGFRaveTrackParametersmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<genfit::GFRaveTrackParameters*> >()));

      ::ROOT::AddClassAlternate("vector<genfit::GFRaveTrackParameters*>","std::vector<genfit::GFRaveTrackParameters*, std::allocator<genfit::GFRaveTrackParameters*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<genfit::GFRaveTrackParameters*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgenfitcLcLGFRaveTrackParametersmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<genfit::GFRaveTrackParameters*>*)0x0)->GetClass();
      vectorlEgenfitcLcLGFRaveTrackParametersmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgenfitcLcLGFRaveTrackParametersmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgenfitcLcLGFRaveTrackParametersmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<genfit::GFRaveTrackParameters*> : new vector<genfit::GFRaveTrackParameters*>;
   }
   static void *newArray_vectorlEgenfitcLcLGFRaveTrackParametersmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<genfit::GFRaveTrackParameters*>[nElements] : new vector<genfit::GFRaveTrackParameters*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgenfitcLcLGFRaveTrackParametersmUgR(void *p) {
      delete ((vector<genfit::GFRaveTrackParameters*>*)p);
   }
   static void deleteArray_vectorlEgenfitcLcLGFRaveTrackParametersmUgR(void *p) {
      delete [] ((vector<genfit::GFRaveTrackParameters*>*)p);
   }
   static void destruct_vectorlEgenfitcLcLGFRaveTrackParametersmUgR(void *p) {
      typedef vector<genfit::GFRaveTrackParameters*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<genfit::GFRaveTrackParameters*>

namespace {
  void TriggerDictionaryInitialization_GFRaveRootDict_Impl() {
    static const char* headers[] = {
"0",
0
    };
    static const char* includePaths[] = {
"/home/liangyt/EiccRoot/GenFit-master/GenFit-master/core/include",
"/home/liangyt/EiccRoot/GenFit-master/GenFit-master/GFRave/include",
"/home/eicc/software/FairSoft/install/include/root",
"/home/liangyt/EiccRoot/GenFit-master/GenFit-master/build/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "GFRaveRootDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genfit{class GFRaveTrackParameters;}
namespace genfit{class GFRaveVertex;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "GFRaveRootDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
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

/**
 *  @author Johannes Rauch (Technische Universit&auml;t M&uuml;nchen, original author)
 *
 */

/** @addtogroup GFRave
 * @{
 */

#ifndef GFRAVETRACKPARAMETERS_H
#define GFRAVETRACKPARAMETERS_H

#include "Track.h"
#include "AbsTrackRep.h"

#include <TObject.h>
#include <TVector3.h>
#include <TVectorD.h>
#include <TMatrixDSym.h>
#include <TRef.h>

#include <iostream>


namespace genfit {

/**
 * @brief GFRaveTrackParameters class
 * Contains a pointer to the original genfit::Track, the weight of the track in the vertex,
 * and smoothed (with the vertex information) state and covariance of the track.
 */
class GFRaveTrackParameters : public TObject
{
  public:
    // constructors, destructors
    GFRaveTrackParameters();
    GFRaveTrackParameters(const Track* track, MeasuredStateOnPlane* originalState, double weight, const TVectorD & state6, const TMatrixDSym & cov6x6, bool isSmoothed);
    GFRaveTrackParameters(const Track* track, MeasuredStateOnPlane* originalState, double weight);

    // Accessors
    double getWeight() const {return weight_;}

    bool hasTrack() const {return originalTrack_.GetObject() != nullptr;}
    const Track* getTrack() const {return  static_cast<Track*>(originalTrack_.GetObject());}

    UInt_t GetUniqueID() const {return originalTrack_.GetUniqueID();}

    bool hasSmoothedData() const {return hasSmoothedData_;}
    TVectorD getState() const {return state_;}
    TVector3 getPos() const;
    TVector3 getMom() const;
    const TMatrixDSym & getCov() const {return cov_;}

    double getCharge() const;
    double getPdg() const;

    void Print(const Option_t* = "") const;

  private:

    const TRef originalTrack_; // NO ownership. We use TRef, since the Tracks could be stored in another file or tree.

    double weight_; // weight of the track in the vertex
    TVectorD state_; // x, y, z, px, py, pz
    TMatrixDSym cov_; // 6x6 covariance matrix
    bool hasSmoothedData_; // true if state_ is forced to go through the vertex

  private:
    ClassDef(GFRaveTrackParameters, 1)
};

} /* End of namespace genfit */
/** @} */

#endif // GFRAVETRACKPARAMETERS_H
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

/**
 *  @author Johannes Rauch (Technische Universit&auml;t M&uuml;nchen, original author)
 *
 */

/** @addtogroup GFRave
 * @{
 */

#ifndef GFRAVEVERTEX_H
#define GFRAVEVERTEX_H

#include "AbsTrackRep.h"
#include "Track.h"
#include "GFRaveTrackParameters.h"


namespace genfit {

/**
 * @brief GFRaveVertex class
 *
 * A Vertex contains information about its position and covariance.
 * The tracks the vertex is consisting of are stored in smoothedTracks_.
 * These GFRaveTrackParameters contain the weight of the corresponding track
 * in the vertex, smoothed track parameters and a pointer to the original
 * unaltered genfit::Track.
 */
class GFRaveVertex : public TObject {

  public:
    // constructors, destructors
    GFRaveVertex();
    GFRaveVertex(const TVector3 & pos, const TMatrixDSym & cov,
                 const std::vector < genfit::GFRaveTrackParameters* > & smoothedTracks,
                 double ndf, double chi2, int id = -1);

    GFRaveVertex(const GFRaveVertex &);

    GFRaveVertex& operator=(GFRaveVertex);
    void swap(GFRaveVertex&);

    ~GFRaveVertex();


    // Accessors
    //! get Position
    TVector3 getPos() const {return pos_;}

    //!get 3x3 covariance (error) of position.
    TMatrixDSym getCov() const {return cov_;}

    double getNdf() const {return ndf_;}
    double getChi2() const {return chi2_;}

    //! Number of tracks the vertex is made of
    unsigned int getNTracks() const {return smoothedTracks_.size();}
    GFRaveTrackParameters* getParameters(unsigned int i) const {return smoothedTracks_[i];}

    int getId() const {return id_;}

    void Print(const Option_t* = "") const;


  private:

    TVector3 pos_; // position of the vertex
    TMatrixDSym cov_; // error of the vertex position
    double ndf_;
    double chi2_;
    int id_; // id of the rave::vertex the GFVertex is created from

    std::vector < genfit::GFRaveTrackParameters* > smoothedTracks_; //-> track parameters of smoothed (with the vertex information) tracks, weights and original tracks; Vertex has ownership!

  public:
    ClassDef(GFRaveVertex, 1)

};

} /* End of namespace genfit */
/** @} */

#endif // GFRAVEVERTEX_H

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genfit::GFRaveTrackParameters", payloadCode, "@",
"genfit::GFRaveVertex", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("GFRaveRootDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_GFRaveRootDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_GFRaveRootDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_GFRaveRootDict() {
  TriggerDictionaryInitialization_GFRaveRootDict_Impl();
}
