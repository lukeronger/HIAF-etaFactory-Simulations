// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIliangytdIEiccRootdIGenFitmImasterdIGenFitmImasterdIbuilddIutilitiesRootDict
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
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/utilities/include/HelixTrackModel.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/utilities/include/MeasurementCreator.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/utilities/include/mySpacepointDetectorHit.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/utilities/include/mySpacepointMeasurement.h"

// Header files passed via #pragma extra_include

namespace genfit {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *genfit_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genfit", 0 /*version*/, "", 38,
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
   static void delete_genfitcLcLHelixTrackModel(void *p);
   static void deleteArray_genfitcLcLHelixTrackModel(void *p);
   static void destruct_genfitcLcLHelixTrackModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::HelixTrackModel*)
   {
      ::genfit::HelixTrackModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::HelixTrackModel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::HelixTrackModel", ::genfit::HelixTrackModel::Class_Version(), "", 43,
                  typeid(::genfit::HelixTrackModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::HelixTrackModel::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::HelixTrackModel) );
      instance.SetDelete(&delete_genfitcLcLHelixTrackModel);
      instance.SetDeleteArray(&deleteArray_genfitcLcLHelixTrackModel);
      instance.SetDestructor(&destruct_genfitcLcLHelixTrackModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::HelixTrackModel*)
   {
      return GenerateInitInstanceLocal((::genfit::HelixTrackModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::HelixTrackModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLMeasurementCreator(void *p = 0);
   static void *newArray_genfitcLcLMeasurementCreator(Long_t size, void *p);
   static void delete_genfitcLcLMeasurementCreator(void *p);
   static void deleteArray_genfitcLcLMeasurementCreator(void *p);
   static void destruct_genfitcLcLMeasurementCreator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::MeasurementCreator*)
   {
      ::genfit::MeasurementCreator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::MeasurementCreator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::MeasurementCreator", ::genfit::MeasurementCreator::Class_Version(), "", 134,
                  typeid(::genfit::MeasurementCreator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::MeasurementCreator::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::MeasurementCreator) );
      instance.SetNew(&new_genfitcLcLMeasurementCreator);
      instance.SetNewArray(&newArray_genfitcLcLMeasurementCreator);
      instance.SetDelete(&delete_genfitcLcLMeasurementCreator);
      instance.SetDeleteArray(&deleteArray_genfitcLcLMeasurementCreator);
      instance.SetDestructor(&destruct_genfitcLcLMeasurementCreator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::MeasurementCreator*)
   {
      return GenerateInitInstanceLocal((::genfit::MeasurementCreator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::MeasurementCreator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLmySpacepointDetectorHit(void *p = 0);
   static void *newArray_genfitcLcLmySpacepointDetectorHit(Long_t size, void *p);
   static void delete_genfitcLcLmySpacepointDetectorHit(void *p);
   static void deleteArray_genfitcLcLmySpacepointDetectorHit(void *p);
   static void destruct_genfitcLcLmySpacepointDetectorHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::mySpacepointDetectorHit*)
   {
      ::genfit::mySpacepointDetectorHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::mySpacepointDetectorHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::mySpacepointDetectorHit", ::genfit::mySpacepointDetectorHit::Class_Version(), "", 242,
                  typeid(::genfit::mySpacepointDetectorHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::mySpacepointDetectorHit::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::mySpacepointDetectorHit) );
      instance.SetNew(&new_genfitcLcLmySpacepointDetectorHit);
      instance.SetNewArray(&newArray_genfitcLcLmySpacepointDetectorHit);
      instance.SetDelete(&delete_genfitcLcLmySpacepointDetectorHit);
      instance.SetDeleteArray(&deleteArray_genfitcLcLmySpacepointDetectorHit);
      instance.SetDestructor(&destruct_genfitcLcLmySpacepointDetectorHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::mySpacepointDetectorHit*)
   {
      return GenerateInitInstanceLocal((::genfit::mySpacepointDetectorHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::mySpacepointDetectorHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLmySpacepointMeasurement(void *p = 0);
   static void *newArray_genfitcLcLmySpacepointMeasurement(Long_t size, void *p);
   static void delete_genfitcLcLmySpacepointMeasurement(void *p);
   static void deleteArray_genfitcLcLmySpacepointMeasurement(void *p);
   static void destruct_genfitcLcLmySpacepointMeasurement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::mySpacepointMeasurement*)
   {
      ::genfit::mySpacepointMeasurement *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::mySpacepointMeasurement >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::mySpacepointMeasurement", ::genfit::mySpacepointMeasurement::Class_Version(), "", 301,
                  typeid(::genfit::mySpacepointMeasurement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::mySpacepointMeasurement::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::mySpacepointMeasurement) );
      instance.SetNew(&new_genfitcLcLmySpacepointMeasurement);
      instance.SetNewArray(&newArray_genfitcLcLmySpacepointMeasurement);
      instance.SetDelete(&delete_genfitcLcLmySpacepointMeasurement);
      instance.SetDeleteArray(&deleteArray_genfitcLcLmySpacepointMeasurement);
      instance.SetDestructor(&destruct_genfitcLcLmySpacepointMeasurement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::mySpacepointMeasurement*)
   {
      return GenerateInitInstanceLocal((::genfit::mySpacepointMeasurement*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::mySpacepointMeasurement*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr HelixTrackModel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HelixTrackModel::Class_Name()
{
   return "genfit::HelixTrackModel";
}

//______________________________________________________________________________
const char *HelixTrackModel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::HelixTrackModel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HelixTrackModel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::HelixTrackModel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HelixTrackModel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::HelixTrackModel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HelixTrackModel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::HelixTrackModel*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr MeasurementCreator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MeasurementCreator::Class_Name()
{
   return "genfit::MeasurementCreator";
}

//______________________________________________________________________________
const char *MeasurementCreator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::MeasurementCreator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MeasurementCreator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::MeasurementCreator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MeasurementCreator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::MeasurementCreator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MeasurementCreator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::MeasurementCreator*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr mySpacepointDetectorHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *mySpacepointDetectorHit::Class_Name()
{
   return "genfit::mySpacepointDetectorHit";
}

//______________________________________________________________________________
const char *mySpacepointDetectorHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::mySpacepointDetectorHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int mySpacepointDetectorHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::mySpacepointDetectorHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *mySpacepointDetectorHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::mySpacepointDetectorHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *mySpacepointDetectorHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::mySpacepointDetectorHit*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr mySpacepointMeasurement::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *mySpacepointMeasurement::Class_Name()
{
   return "genfit::mySpacepointMeasurement";
}

//______________________________________________________________________________
const char *mySpacepointMeasurement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::mySpacepointMeasurement*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int mySpacepointMeasurement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::mySpacepointMeasurement*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *mySpacepointMeasurement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::mySpacepointMeasurement*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *mySpacepointMeasurement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::mySpacepointMeasurement*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
void HelixTrackModel::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::HelixTrackModel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::HelixTrackModel::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::HelixTrackModel::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrapper around operator delete
   static void delete_genfitcLcLHelixTrackModel(void *p) {
      delete ((::genfit::HelixTrackModel*)p);
   }
   static void deleteArray_genfitcLcLHelixTrackModel(void *p) {
      delete [] ((::genfit::HelixTrackModel*)p);
   }
   static void destruct_genfitcLcLHelixTrackModel(void *p) {
      typedef ::genfit::HelixTrackModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::HelixTrackModel

namespace genfit {
//______________________________________________________________________________
void MeasurementCreator::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::MeasurementCreator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::MeasurementCreator::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::MeasurementCreator::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLMeasurementCreator(void *p) {
      return  p ? new(p) ::genfit::MeasurementCreator : new ::genfit::MeasurementCreator;
   }
   static void *newArray_genfitcLcLMeasurementCreator(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::MeasurementCreator[nElements] : new ::genfit::MeasurementCreator[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLMeasurementCreator(void *p) {
      delete ((::genfit::MeasurementCreator*)p);
   }
   static void deleteArray_genfitcLcLMeasurementCreator(void *p) {
      delete [] ((::genfit::MeasurementCreator*)p);
   }
   static void destruct_genfitcLcLMeasurementCreator(void *p) {
      typedef ::genfit::MeasurementCreator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::MeasurementCreator

namespace genfit {
//______________________________________________________________________________
void mySpacepointDetectorHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::mySpacepointDetectorHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::mySpacepointDetectorHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::mySpacepointDetectorHit::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLmySpacepointDetectorHit(void *p) {
      return  p ? new(p) ::genfit::mySpacepointDetectorHit : new ::genfit::mySpacepointDetectorHit;
   }
   static void *newArray_genfitcLcLmySpacepointDetectorHit(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::mySpacepointDetectorHit[nElements] : new ::genfit::mySpacepointDetectorHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLmySpacepointDetectorHit(void *p) {
      delete ((::genfit::mySpacepointDetectorHit*)p);
   }
   static void deleteArray_genfitcLcLmySpacepointDetectorHit(void *p) {
      delete [] ((::genfit::mySpacepointDetectorHit*)p);
   }
   static void destruct_genfitcLcLmySpacepointDetectorHit(void *p) {
      typedef ::genfit::mySpacepointDetectorHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::mySpacepointDetectorHit

namespace genfit {
//______________________________________________________________________________
void mySpacepointMeasurement::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::mySpacepointMeasurement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::mySpacepointMeasurement::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::mySpacepointMeasurement::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLmySpacepointMeasurement(void *p) {
      return  p ? new(p) ::genfit::mySpacepointMeasurement : new ::genfit::mySpacepointMeasurement;
   }
   static void *newArray_genfitcLcLmySpacepointMeasurement(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::mySpacepointMeasurement[nElements] : new ::genfit::mySpacepointMeasurement[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLmySpacepointMeasurement(void *p) {
      delete ((::genfit::mySpacepointMeasurement*)p);
   }
   static void deleteArray_genfitcLcLmySpacepointMeasurement(void *p) {
      delete [] ((::genfit::mySpacepointMeasurement*)p);
   }
   static void destruct_genfitcLcLmySpacepointMeasurement(void *p) {
      typedef ::genfit::mySpacepointMeasurement current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::mySpacepointMeasurement

namespace {
  void TriggerDictionaryInitialization_utilitiesRootDict_Impl() {
    static const char* headers[] = {
"0",
0
    };
    static const char* includePaths[] = {
"/home/liangyt/EiccRoot/GenFit-master/GenFit-master/core/include",
"/home/liangyt/EiccRoot/GenFit-master/GenFit-master/utilities/include",
"/home/liangyt/EiccRoot/GenFit-master/GenFit-master/measurements/include",
"/home/eicc/software/FairSoft/install/include/root",
"/home/liangyt/EiccRoot/GenFit-master/GenFit-master/build/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "utilitiesRootDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genfit{class HelixTrackModel;}
namespace genfit{class MeasurementCreator;}
namespace genfit{class mySpacepointDetectorHit;}
namespace genfit{class mySpacepointMeasurement;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "utilitiesRootDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
/* Copyright 2013, Technische Universitaet Muenchen,
   Authors: Johannes Rauch

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


/** @addtogroup utilities
 * @{
 */

#ifndef genfit_HelixTrackModel_h
#define genfit_HelixTrackModel_h

#include <TObject.h>
#include <TVector3.h>


namespace genfit {

/**
 * @brief Helix track model for testing purposes
 */
class HelixTrackModel : public TObject {

 public:

  // Constructors/Destructors ---------
  HelixTrackModel(const TVector3& pos, const TVector3& mom, double charge);

  TVector3 getPos(double tracklength) const;
  void getPosMom(double tracklength, TVector3& pos, TVector3& mom) const;
  void getPosDir(double tracklength, TVector3& pos, TVector3& dir) const {
    getPosMom(tracklength, pos, dir);
    dir.SetMag(1);
  }


 private:

  double sgn_;
  double mom_;
  double R_; // radius
  TVector3 center_;
  double alpha0_;
  double theta_;


 public:
  ClassDef(HelixTrackModel,1)

};

} /* End of namespace genfit */
/** @} */

#endif // genfit_HelixTrackModel_h
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


/** @addtogroup utilities
 * @{
 */

#ifndef genfit_MeasurementOnPlaneCreator_h
#define genfit_MeasurementOnPlaneCreator_h

#include "AbsMeasurement.h"
#include "HelixTrackModel.h"

#include <TObject.h>
#include <TVector3.h>


namespace genfit {


enum eMeasurementType { Pixel = 0,
        Spacepoint,
        ProlateSpacepoint,
        StripU,
        StripV,
        StripUV,
	Wire,
	WirePoint,
	nMeasurementTypes
        };


/**
 * @brief Create different measurement types along a HelixTrackModel for testing purposes.
 */
class MeasurementCreator : public TObject {


 public:

  // Constructors/Destructors ---------
  MeasurementCreator();

  ~MeasurementCreator() {delete trackModel_;}

  //! Takes ownership!
  void setTrackModel(const HelixTrackModel* model) {delete trackModel_; trackModel_ = model;}
  void setResolution(double resolution) {resolution_ = resolution;}
  void setResolutionWire(double resolutionWire) {resolutionWire_ = resolutionWire;}
  void setOutlierProb(double outlierProb) {outlierProb_ = outlierProb;}
  void setOutlierRange(double outlierRange) {outlierRange_ = outlierRange;}
  void setThetaDetPlane(double thetaDetPlane) {thetaDetPlane_ = thetaDetPlane;}
  void setPhiDetPlane(double phiDetPlane) {phiDetPlane_ = phiDetPlane;}
  void setWireDir(const TVector3 wireDir) {wireDir_ = wireDir; wireDir_.SetMag(1.);}
  void setMinDrift(double minDrift) {minDrift_ = minDrift;}
  void setMaxDrift(double maxDrift) {maxDrift_ = maxDrift;}
  void setIdealLRResolution(bool idealLRResolution) {idealLRResolution_ = idealLRResolution;}
  void setUseSkew(bool useSkew) {useSkew_ = useSkew;}
  void setSkewAngle(double skewAngle) {skewAngle_ = skewAngle;}
  void setNSuperLayer(int nSuperLayer) {nSuperLayer_ = nSuperLayer;}
  void setDebug(bool debug) {debug_ = debug;}


  std::vector<genfit::AbsMeasurement*> create(eMeasurementType, double tracklength, bool& outlier, int& lr);
  std::vector<genfit::AbsMeasurement*> create(eMeasurementType type, double tracklength) {
    bool dummy1;
    int dummy2;
    return create(type, tracklength, dummy1, dummy2);
  }

  void reset();

 private:

  const HelixTrackModel* trackModel_; // ownership

  double resolution_;  // cm; resolution of generated measurements
  double resolutionWire_;  // cm; resolution in wire direction of generated measurements (wire and prolate sp measurements)

  double outlierProb_;
  double outlierRange_;

  // planarMeasurement specific
  double thetaDetPlane_; // degree
  double phiDetPlane_; // degree

  // WireMeasurement specific
  int wireCounter_;
  TVector3 wireDir_;
  double minDrift_;
  double maxDrift_;
  bool idealLRResolution_; // resolve the l/r ambiguities of the wire measurements
  bool useSkew_;
  double skewAngle_;
  int nSuperLayer_;

  // misc
  int measurementCounter_;
  bool debug_;


 public:
  ClassDef(MeasurementCreator,1)

};

} /* End of namespace genfit */
/** @} */

#endif // genfit_MeasurementOnPlaneCreator_h
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

#ifndef genfit_mySpacepointDetectorHit_h
#define genfit_mySpacepointDetectorHit_h

#include <TObject.h>


namespace genfit {

/** @brief Example class for a spacepoint detector hit.
 *
 *  @author Johannes Rauch  (Technische Universit&auml;t M&uuml;nchen, original author)
 *
 */
class mySpacepointDetectorHit : public TObject {

 public:
  mySpacepointDetectorHit() {;}

  mySpacepointDetectorHit(const TVector3& pos, const TMatrixDSym cov)
  : pos_(pos), cov_(cov) {;}

  const TVector3 getPos() const {return pos_;}
  const TMatrixDSym getCov() const {return cov_;}

 private:

  TVector3 pos_;
  TMatrixDSym cov_;

  ClassDef(mySpacepointDetectorHit,1)
};
/** @} */

} /* End of namespace genfit */

#endif // genfit_mySpacepointDetectorHit_h
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

#ifndef genfit_mySpacepointMeasurement_h
#define genfit_mySpacepointMeasurement_h

#include "SpacepointMeasurement.h"
#include "TrackCandHit.h"
#include "mySpacepointDetectorHit.h"


namespace genfit {

/** @brief Example class for a spacepoint measurement which can be created
 * from mySpacepointDetectorHit via the MeasurementFactory.
 *
 *  @author Johannes Rauch  (Technische Universit&auml;t M&uuml;nchen, original author)
 *
 */
class mySpacepointMeasurement : public SpacepointMeasurement {

 public:

  /** Default constructor for ROOT IO. */
  mySpacepointMeasurement() :
     SpacepointMeasurement() {;}

  mySpacepointMeasurement(const mySpacepointDetectorHit* detHit, const TrackCandHit* hit) :
    SpacepointMeasurement()
  {
    rawHitCoords_(0) = detHit->getPos()(0);
    rawHitCoords_(1) = detHit->getPos()(1);
    rawHitCoords_(2) = detHit->getPos()(2);
    rawHitCov_ = detHit->getCov();
    detId_ = hit->getDetId();
    hitId_ = hit->getHitId();

    this -> initG();
  }

  virtual mySpacepointMeasurement* clone() const {return new mySpacepointMeasurement(*this);}

  ClassDef(mySpacepointMeasurement,1)
};
/** @} */

} /* End of namespace genfit */

#endif // genfit_mySpacepointMeasurement_h

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genfit::HelixTrackModel", payloadCode, "@",
"genfit::MeasurementCreator", payloadCode, "@",
"genfit::mySpacepointDetectorHit", payloadCode, "@",
"genfit::mySpacepointMeasurement", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("utilitiesRootDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_utilitiesRootDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_utilitiesRootDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_utilitiesRootDict() {
  TriggerDictionaryInitialization_utilitiesRootDict_Impl();
}
