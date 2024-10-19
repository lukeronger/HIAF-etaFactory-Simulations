// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIliangytdIEiccRootdIGenFitmImasterdIGenFitmImasterdIbuilddIGBLRootDict
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
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/GBL/include/GFGbl.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/GBL/include/GblFitter.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/GBL/include/ICalibrationParametersDerivatives.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/GBL/include/GblFitterInfo.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/GBL/include/GblFitStatus.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/GBL/include/GblData.h"

// Header files passed via #pragma extra_include

namespace genfit {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *genfit_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genfit", 0 /*version*/, "AbsFitter.h", 27,
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
   static void *new_gblcLcLGblData(void *p = 0);
   static void *newArray_gblcLcLGblData(Long_t size, void *p);
   static void delete_gblcLcLGblData(void *p);
   static void deleteArray_gblcLcLGblData(void *p);
   static void destruct_gblcLcLGblData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gbl::GblData*)
   {
      ::gbl::GblData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gbl::GblData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gbl::GblData", ::gbl::GblData::Class_Version(), "GblData.h", 55,
                  typeid(::gbl::GblData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gbl::GblData::Dictionary, isa_proxy, 4,
                  sizeof(::gbl::GblData) );
      instance.SetNew(&new_gblcLcLGblData);
      instance.SetNewArray(&newArray_gblcLcLGblData);
      instance.SetDelete(&delete_gblcLcLGblData);
      instance.SetDeleteArray(&deleteArray_gblcLcLGblData);
      instance.SetDestructor(&destruct_gblcLcLGblData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gbl::GblData*)
   {
      return GenerateInitInstanceLocal((::gbl::GblData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::gbl::GblData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLGFGbl(void *p = 0);
   static void *newArray_genfitcLcLGFGbl(Long_t size, void *p);
   static void delete_genfitcLcLGFGbl(void *p);
   static void deleteArray_genfitcLcLGFGbl(void *p);
   static void destruct_genfitcLcLGFGbl(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::GFGbl*)
   {
      ::genfit::GFGbl *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::GFGbl >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::GFGbl", ::genfit::GFGbl::Class_Version(), "", 50,
                  typeid(::genfit::GFGbl), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::GFGbl::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::GFGbl) );
      instance.SetNew(&new_genfitcLcLGFGbl);
      instance.SetNewArray(&newArray_genfitcLcLGFGbl);
      instance.SetDelete(&delete_genfitcLcLGFGbl);
      instance.SetDeleteArray(&deleteArray_genfitcLcLGFGbl);
      instance.SetDestructor(&destruct_genfitcLcLGFGbl);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::GFGbl*)
   {
      return GenerateInitInstanceLocal((::genfit::GFGbl*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::GFGbl*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *genfitcLcLICalibrationParametersDerivatives_Dictionary();
   static void genfitcLcLICalibrationParametersDerivatives_TClassManip(TClass*);
   static void *new_genfitcLcLICalibrationParametersDerivatives(void *p = 0);
   static void *newArray_genfitcLcLICalibrationParametersDerivatives(Long_t size, void *p);
   static void delete_genfitcLcLICalibrationParametersDerivatives(void *p);
   static void deleteArray_genfitcLcLICalibrationParametersDerivatives(void *p);
   static void destruct_genfitcLcLICalibrationParametersDerivatives(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::ICalibrationParametersDerivatives*)
   {
      ::genfit::ICalibrationParametersDerivatives *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genfit::ICalibrationParametersDerivatives));
      static ::ROOT::TGenericClassInfo 
         instance("genfit::ICalibrationParametersDerivatives", "ICalibrationParametersDerivatives.h", 44,
                  typeid(::genfit::ICalibrationParametersDerivatives), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &genfitcLcLICalibrationParametersDerivatives_Dictionary, isa_proxy, 4,
                  sizeof(::genfit::ICalibrationParametersDerivatives) );
      instance.SetNew(&new_genfitcLcLICalibrationParametersDerivatives);
      instance.SetNewArray(&newArray_genfitcLcLICalibrationParametersDerivatives);
      instance.SetDelete(&delete_genfitcLcLICalibrationParametersDerivatives);
      instance.SetDeleteArray(&deleteArray_genfitcLcLICalibrationParametersDerivatives);
      instance.SetDestructor(&destruct_genfitcLcLICalibrationParametersDerivatives);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::ICalibrationParametersDerivatives*)
   {
      return GenerateInitInstanceLocal((::genfit::ICalibrationParametersDerivatives*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::ICalibrationParametersDerivatives*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *genfitcLcLICalibrationParametersDerivatives_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genfit::ICalibrationParametersDerivatives*)0x0)->GetClass();
      genfitcLcLICalibrationParametersDerivatives_TClassManip(theClass);
   return theClass;
   }

   static void genfitcLcLICalibrationParametersDerivatives_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLGblFitterInfo(void *p = 0);
   static void *newArray_genfitcLcLGblFitterInfo(Long_t size, void *p);
   static void delete_genfitcLcLGblFitterInfo(void *p);
   static void deleteArray_genfitcLcLGblFitterInfo(void *p);
   static void destruct_genfitcLcLGblFitterInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::GblFitterInfo*)
   {
      ::genfit::GblFitterInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::GblFitterInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::GblFitterInfo", ::genfit::GblFitterInfo::Class_Version(), "GblFitterInfo.h", 52,
                  typeid(::genfit::GblFitterInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::GblFitterInfo::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::GblFitterInfo) );
      instance.SetNew(&new_genfitcLcLGblFitterInfo);
      instance.SetNewArray(&newArray_genfitcLcLGblFitterInfo);
      instance.SetDelete(&delete_genfitcLcLGblFitterInfo);
      instance.SetDeleteArray(&deleteArray_genfitcLcLGblFitterInfo);
      instance.SetDestructor(&destruct_genfitcLcLGblFitterInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::GblFitterInfo*)
   {
      return GenerateInitInstanceLocal((::genfit::GblFitterInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::GblFitterInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLGblFitStatus(void *p = 0);
   static void *newArray_genfitcLcLGblFitStatus(Long_t size, void *p);
   static void delete_genfitcLcLGblFitStatus(void *p);
   static void deleteArray_genfitcLcLGblFitStatus(void *p);
   static void destruct_genfitcLcLGblFitStatus(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::GblFitStatus*)
   {
      ::genfit::GblFitStatus *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::GblFitStatus >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::GblFitStatus", ::genfit::GblFitStatus::Class_Version(), "GblFitStatus.h", 39,
                  typeid(::genfit::GblFitStatus), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::GblFitStatus::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::GblFitStatus) );
      instance.SetNew(&new_genfitcLcLGblFitStatus);
      instance.SetNewArray(&newArray_genfitcLcLGblFitStatus);
      instance.SetDelete(&delete_genfitcLcLGblFitStatus);
      instance.SetDeleteArray(&deleteArray_genfitcLcLGblFitStatus);
      instance.SetDestructor(&destruct_genfitcLcLGblFitStatus);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::GblFitStatus*)
   {
      return GenerateInitInstanceLocal((::genfit::GblFitStatus*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::GblFitStatus*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_genfitcLcLGblTrackSegmentController(void *p);
   static void deleteArray_genfitcLcLGblTrackSegmentController(void *p);
   static void destruct_genfitcLcLGblTrackSegmentController(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::GblTrackSegmentController*)
   {
      ::genfit::GblTrackSegmentController *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::GblTrackSegmentController >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::GblTrackSegmentController", ::genfit::GblTrackSegmentController::Class_Version(), "GblTrackSegmentController.h", 40,
                  typeid(::genfit::GblTrackSegmentController), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::GblTrackSegmentController::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::GblTrackSegmentController) );
      instance.SetDelete(&delete_genfitcLcLGblTrackSegmentController);
      instance.SetDeleteArray(&deleteArray_genfitcLcLGblTrackSegmentController);
      instance.SetDestructor(&destruct_genfitcLcLGblTrackSegmentController);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::GblTrackSegmentController*)
   {
      return GenerateInitInstanceLocal((::genfit::GblTrackSegmentController*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::GblTrackSegmentController*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLGblFitter(void *p = 0);
   static void *newArray_genfitcLcLGblFitter(Long_t size, void *p);
   static void delete_genfitcLcLGblFitter(void *p);
   static void deleteArray_genfitcLcLGblFitter(void *p);
   static void destruct_genfitcLcLGblFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::GblFitter*)
   {
      ::genfit::GblFitter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::GblFitter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::GblFitter", ::genfit::GblFitter::Class_Version(), "", 189,
                  typeid(::genfit::GblFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::GblFitter::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::GblFitter) );
      instance.SetNew(&new_genfitcLcLGblFitter);
      instance.SetNewArray(&newArray_genfitcLcLGblFitter);
      instance.SetDelete(&delete_genfitcLcLGblFitter);
      instance.SetDeleteArray(&deleteArray_genfitcLcLGblFitter);
      instance.SetDestructor(&destruct_genfitcLcLGblFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::GblFitter*)
   {
      return GenerateInitInstanceLocal((::genfit::GblFitter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::GblFitter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace gbl {
//______________________________________________________________________________
atomic_TClass_ptr GblData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GblData::Class_Name()
{
   return "gbl::GblData";
}

//______________________________________________________________________________
const char *GblData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gbl::GblData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GblData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gbl::GblData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GblData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gbl::GblData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GblData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gbl::GblData*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gbl
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr GFGbl::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GFGbl::Class_Name()
{
   return "genfit::GFGbl";
}

//______________________________________________________________________________
const char *GFGbl::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::GFGbl*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GFGbl::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::GFGbl*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GFGbl::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::GFGbl*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GFGbl::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::GFGbl*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr GblFitterInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GblFitterInfo::Class_Name()
{
   return "genfit::GblFitterInfo";
}

//______________________________________________________________________________
const char *GblFitterInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblFitterInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GblFitterInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblFitterInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GblFitterInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblFitterInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GblFitterInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblFitterInfo*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr GblFitStatus::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GblFitStatus::Class_Name()
{
   return "genfit::GblFitStatus";
}

//______________________________________________________________________________
const char *GblFitStatus::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblFitStatus*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GblFitStatus::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblFitStatus*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GblFitStatus::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblFitStatus*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GblFitStatus::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblFitStatus*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr GblTrackSegmentController::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GblTrackSegmentController::Class_Name()
{
   return "genfit::GblTrackSegmentController";
}

//______________________________________________________________________________
const char *GblTrackSegmentController::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblTrackSegmentController*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GblTrackSegmentController::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblTrackSegmentController*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GblTrackSegmentController::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblTrackSegmentController*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GblTrackSegmentController::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblTrackSegmentController*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr GblFitter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GblFitter::Class_Name()
{
   return "genfit::GblFitter";
}

//______________________________________________________________________________
const char *GblFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblFitter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GblFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblFitter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GblFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblFitter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GblFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblFitter*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace gbl {
//______________________________________________________________________________
void GblData::Streamer(TBuffer &R__b)
{
   // Stream an object of class gbl::GblData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gbl::GblData::Class(),this);
   } else {
      R__b.WriteClassBuffer(gbl::GblData::Class(),this);
   }
}

} // namespace gbl
namespace ROOT {
   // Wrappers around operator new
   static void *new_gblcLcLGblData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gbl::GblData : new ::gbl::GblData;
   }
   static void *newArray_gblcLcLGblData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gbl::GblData[nElements] : new ::gbl::GblData[nElements];
   }
   // Wrapper around operator delete
   static void delete_gblcLcLGblData(void *p) {
      delete ((::gbl::GblData*)p);
   }
   static void deleteArray_gblcLcLGblData(void *p) {
      delete [] ((::gbl::GblData*)p);
   }
   static void destruct_gblcLcLGblData(void *p) {
      typedef ::gbl::GblData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gbl::GblData

namespace genfit {
//______________________________________________________________________________
void GFGbl::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::GFGbl.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::GFGbl::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::GFGbl::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLGFGbl(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::GFGbl : new ::genfit::GFGbl;
   }
   static void *newArray_genfitcLcLGFGbl(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::GFGbl[nElements] : new ::genfit::GFGbl[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLGFGbl(void *p) {
      delete ((::genfit::GFGbl*)p);
   }
   static void deleteArray_genfitcLcLGFGbl(void *p) {
      delete [] ((::genfit::GFGbl*)p);
   }
   static void destruct_genfitcLcLGFGbl(void *p) {
      typedef ::genfit::GFGbl current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::GFGbl

namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLICalibrationParametersDerivatives(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::ICalibrationParametersDerivatives : new ::genfit::ICalibrationParametersDerivatives;
   }
   static void *newArray_genfitcLcLICalibrationParametersDerivatives(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::ICalibrationParametersDerivatives[nElements] : new ::genfit::ICalibrationParametersDerivatives[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLICalibrationParametersDerivatives(void *p) {
      delete ((::genfit::ICalibrationParametersDerivatives*)p);
   }
   static void deleteArray_genfitcLcLICalibrationParametersDerivatives(void *p) {
      delete [] ((::genfit::ICalibrationParametersDerivatives*)p);
   }
   static void destruct_genfitcLcLICalibrationParametersDerivatives(void *p) {
      typedef ::genfit::ICalibrationParametersDerivatives current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::ICalibrationParametersDerivatives

namespace genfit {
//______________________________________________________________________________
void GblFitterInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::GblFitterInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::GblFitterInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::GblFitterInfo::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLGblFitterInfo(void *p) {
      return  p ? new(p) ::genfit::GblFitterInfo : new ::genfit::GblFitterInfo;
   }
   static void *newArray_genfitcLcLGblFitterInfo(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::GblFitterInfo[nElements] : new ::genfit::GblFitterInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLGblFitterInfo(void *p) {
      delete ((::genfit::GblFitterInfo*)p);
   }
   static void deleteArray_genfitcLcLGblFitterInfo(void *p) {
      delete [] ((::genfit::GblFitterInfo*)p);
   }
   static void destruct_genfitcLcLGblFitterInfo(void *p) {
      typedef ::genfit::GblFitterInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::GblFitterInfo

namespace genfit {
//______________________________________________________________________________
void GblFitStatus::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::GblFitStatus.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::GblFitStatus::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::GblFitStatus::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLGblFitStatus(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::GblFitStatus : new ::genfit::GblFitStatus;
   }
   static void *newArray_genfitcLcLGblFitStatus(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::GblFitStatus[nElements] : new ::genfit::GblFitStatus[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLGblFitStatus(void *p) {
      delete ((::genfit::GblFitStatus*)p);
   }
   static void deleteArray_genfitcLcLGblFitStatus(void *p) {
      delete [] ((::genfit::GblFitStatus*)p);
   }
   static void destruct_genfitcLcLGblFitStatus(void *p) {
      typedef ::genfit::GblFitStatus current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::GblFitStatus

namespace genfit {
//______________________________________________________________________________
void GblTrackSegmentController::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::GblTrackSegmentController.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::GblTrackSegmentController::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::GblTrackSegmentController::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrapper around operator delete
   static void delete_genfitcLcLGblTrackSegmentController(void *p) {
      delete ((::genfit::GblTrackSegmentController*)p);
   }
   static void deleteArray_genfitcLcLGblTrackSegmentController(void *p) {
      delete [] ((::genfit::GblTrackSegmentController*)p);
   }
   static void destruct_genfitcLcLGblTrackSegmentController(void *p) {
      typedef ::genfit::GblTrackSegmentController current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::GblTrackSegmentController

namespace genfit {
//______________________________________________________________________________
void GblFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::GblFitter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::GblFitter::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::GblFitter::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLGblFitter(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::GblFitter : new ::genfit::GblFitter;
   }
   static void *newArray_genfitcLcLGblFitter(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::GblFitter[nElements] : new ::genfit::GblFitter[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLGblFitter(void *p) {
      delete ((::genfit::GblFitter*)p);
   }
   static void deleteArray_genfitcLcLGblFitter(void *p) {
      delete [] ((::genfit::GblFitter*)p);
   }
   static void destruct_genfitcLcLGblFitter(void *p) {
      typedef ::genfit::GblFitter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::GblFitter

namespace ROOT {
   static TClass *vectorlEunsignedsPintgR_Dictionary();
   static void vectorlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPintgR(void *p = 0);
   static void *newArray_vectorlEunsignedsPintgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPintgR(void *p);
   static void deleteArray_vectorlEunsignedsPintgR(void *p);
   static void destruct_vectorlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned int>*)
   {
      vector<unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned int>", -2, "vector", 216,
                  typeid(vector<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned int>) );
      instance.SetNew(&new_vectorlEunsignedsPintgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPintgR);
      instance.SetDelete(&delete_vectorlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPintgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned int> >()));

      ::ROOT::AddClassAlternate("vector<unsigned int>","std::vector<unsigned int, std::allocator<unsigned int> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned int>*)0x0)->GetClass();
      vectorlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int> : new vector<unsigned int>;
   }
   static void *newArray_vectorlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int>[nElements] : new vector<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPintgR(void *p) {
      delete ((vector<unsigned int>*)p);
   }
   static void deleteArray_vectorlEunsignedsPintgR(void *p) {
      delete [] ((vector<unsigned int>*)p);
   }
   static void destruct_vectorlEunsignedsPintgR(void *p) {
      typedef vector<unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned int>

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = 0);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 216,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));

      ::ROOT::AddClassAlternate("vector<int>","std::vector<int, std::allocator<int> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)0x0)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEgblcLcLGblDatagR_Dictionary();
   static void vectorlEgblcLcLGblDatagR_TClassManip(TClass*);
   static void *new_vectorlEgblcLcLGblDatagR(void *p = 0);
   static void *newArray_vectorlEgblcLcLGblDatagR(Long_t size, void *p);
   static void delete_vectorlEgblcLcLGblDatagR(void *p);
   static void deleteArray_vectorlEgblcLcLGblDatagR(void *p);
   static void destruct_vectorlEgblcLcLGblDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<gbl::GblData>*)
   {
      vector<gbl::GblData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<gbl::GblData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<gbl::GblData>", -2, "vector", 216,
                  typeid(vector<gbl::GblData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEgblcLcLGblDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<gbl::GblData>) );
      instance.SetNew(&new_vectorlEgblcLcLGblDatagR);
      instance.SetNewArray(&newArray_vectorlEgblcLcLGblDatagR);
      instance.SetDelete(&delete_vectorlEgblcLcLGblDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEgblcLcLGblDatagR);
      instance.SetDestructor(&destruct_vectorlEgblcLcLGblDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<gbl::GblData> >()));

      ::ROOT::AddClassAlternate("vector<gbl::GblData>","std::vector<gbl::GblData, std::allocator<gbl::GblData> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<gbl::GblData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgblcLcLGblDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<gbl::GblData>*)0x0)->GetClass();
      vectorlEgblcLcLGblDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgblcLcLGblDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgblcLcLGblDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gbl::GblData> : new vector<gbl::GblData>;
   }
   static void *newArray_vectorlEgblcLcLGblDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gbl::GblData>[nElements] : new vector<gbl::GblData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgblcLcLGblDatagR(void *p) {
      delete ((vector<gbl::GblData>*)p);
   }
   static void deleteArray_vectorlEgblcLcLGblDatagR(void *p) {
      delete [] ((vector<gbl::GblData>*)p);
   }
   static void destruct_vectorlEgblcLcLGblDatagR(void *p) {
      typedef vector<gbl::GblData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<gbl::GblData>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 216,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));

      ::ROOT::AddClassAlternate("vector<double>","std::vector<double, std::allocator<double> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace {
  void TriggerDictionaryInitialization_GBLRootDict_Impl() {
    static const char* headers[] = {
"0",
0
    };
    static const char* includePaths[] = {
"/home/liangyt/EiccRoot/GenFit-master/GenFit-master/core/include",
"/home/liangyt/EiccRoot/GenFit-master/GenFit-master/GBL/include",
"/home/eicc/software/FairSoft/install/include/root",
"/home/liangyt/EiccRoot/GenFit-master/GenFit-master/build/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "GBLRootDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace gbl{class __attribute__((annotate("$clingAutoload$GblData.h")))  __attribute__((annotate("$clingAutoload$GblTrajectory.h")))  GblData;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace genfit{class GFGbl;}
namespace genfit{class __attribute__((annotate("$clingAutoload$ICalibrationParametersDerivatives.h")))  __attribute__((annotate("$clingAutoload$GblFitterInfo.h")))  ICalibrationParametersDerivatives;}
namespace genfit{class __attribute__((annotate("$clingAutoload$GblFitterInfo.h")))  GblFitterInfo;}
namespace genfit{class __attribute__((annotate("$clingAutoload$GblFitStatus.h")))  GblFitStatus;}
namespace genfit{class __attribute__((annotate("$clingAutoload$GblTrackSegmentController.h")))  GblTrackSegmentController;}
namespace genfit{class GblFitter;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "GBLRootDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
/* Copyright 2013
 *   Authors: Sergey Yashchenko and Tadeas Bilka
 *
 *   This file is part of GENFIT.
 *
 *   GENFIT is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU Lesser General Public License as published
 *   by the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   GENFIT is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU Lesser General Public License for more details.
 *
 *   You should have received a copy of the GNU Lesser General Public License
 *   along with GENFIT.  If not, see <http://www.gnu.org/licenses/>.
 */
/** @addtogroup genfit
 * @{
 */

#ifndef GFGBL_H
#define GFGBL_H

#include "GblTrajectory.h"
#include "AbsFitter.h"

#include <map>
#include <iostream>

#include <TMatrixD.h>
#include <assert.h>
#include <sstream>

#include <TMath.h>
#include <TVector3.h>


namespace genfit {
  
  
  /** @brief Generic GBL implementation
   * 
   * The interface class to GBL track fit
   *
   */
  class GFGbl : public AbsFitter {
    
  private:
    GFGbl(const GFGbl&);
    GFGbl& operator=(GFGbl const&);
    
    std::string m_milleFileName;
    std::string m_gblInternalIterations;
    double m_pValueCut;
    int m_minNdf;
    double m_chi2Cut;
    bool m_enableScatterers;
    bool m_enableIntermediateScatterer;
    
    
  public:
    
    /**
     * Constructor
     */
    GFGbl();
    
    /**
     * Destructor
     */
    virtual ~GFGbl() {;}
    
    /**
     * Creates the mille binary file for output of
     * data for Millepede II alignment, can be set by setMP2Options
     */
    void beginRun();
    
    /**
     * Required to write and close ROOT file
     * with debug output. Destructor cannot be used.
     * To be called from endRun function of a module
     */
    void endRun();
    
    
    /**
     * @brief Sets internal GBL down-weighting
     * @param internalIterations GBL internal down-weighting settings, see GBL doc
     * @return void
     */
    void setGBLOptions(std::string internalIterations = "THC", bool enableScatterers = true, bool enableIntermediateScatterer = true) {
      m_gblInternalIterations = internalIterations;
      if (!enableScatterers)
        enableIntermediateScatterer = false;
      m_enableScatterers = enableScatterers;
      m_enableIntermediateScatterer = enableIntermediateScatterer;
    }
    
    /**
     * @brief Sets GBL & Millepede settings
     * @param pValueCut minimum track p-value for MP2 output
     * @param minNdf minimum track NDF for MP2 output
     * @param mille_file_name name of MP2 binary file for output
     * @return void
     */
    void setMP2Options(double pValueCut = 0., unsigned int minNdf = 1, std::string mille_file_name = "millefile.dat", double chi2Cut = 0.) {
      m_pValueCut = pValueCut;
      m_minNdf = minNdf;
      m_milleFileName = mille_file_name;
      m_chi2Cut = chi2Cut;
    }
    
    /**
     * Performs fit on a Track.
     * Hit resorting currently NOT supported.
     */
    void processTrackWithRep(Track* trk, const AbsTrackRep* rep, bool resortHits = false) override;
    
    
  public:
    
    ClassDef(GFGbl, 1)
    
  };
  
}  /* End of namespace genfit */
/** @} */

#endif // GFGBL_H

/* Copyright 2013
 *   Authors: Sergey Yashchenko and Tadeas Bilka
 *
 *   This file is part of GENFIT.
 *
 *   GENFIT is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU Lesser General Public License as published
 *   by the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   GENFIT is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU Lesser General Public License for more details.
 *
 *   You should have received a copy of the GNU Lesser General Public License
 *   along with GENFIT.  If not, see <http://www.gnu.org/licenses/>.
 */
/** @addtogroup genfit
 * @{
 */

#ifndef GblFitter_H
#define GblFitter_H

#include "GblTrajectory.h"
#include "AbsFitter.h"
#include "AbsTrackRep.h"
#include "GblFitterInfo.h"
#include "GblFitStatus.h"
#include "GblTrackSegmentController.h"

#include <map>
#include <iostream>

#include <TMatrixD.h>
#include <assert.h>
#include <sstream>

#include <TMath.h>
#include <TVector3.h>


namespace genfit {
  
  class GblTrackSegmentController;
  
  /** @brief Generic GBL implementation
   * 
   * The interface class to GBL track fit
   *
   */
  class GblFitter : public AbsFitter {
    
  private:
    GblFitter(const GblFitter&);
    GblFitter& operator=(GblFitter const&);
    
    std::string m_gblInternalIterations;
    bool m_enableScatterers;
    bool m_enableIntermediateScatterer;
    unsigned int m_externalIterations;
    unsigned int m_recalcJacobians;
    
    // Minimum scattering sigma (will be squared and inverted...)
    double scatEpsilon;
    GblTrackSegmentController* m_segmentController;
    
  public:
    
    /**
     * Default (and only) constructor
     */
    GblFitter() : AbsFitter(), m_gblInternalIterations(""), m_enableScatterers(true), m_enableIntermediateScatterer(true), m_externalIterations(1), m_recalcJacobians(0), scatEpsilon(1.e-8), m_segmentController(nullptr) {;}
    
    /**
     * Destructor
     */
    virtual ~GblFitter();    

    /**
     * @brief Set options of the fitter/GBL
     * 
     * @return void
     * @param internalIterations GBL down-weighting in iterations. One letter (T,H,C) per iteration.
     *                           Seems "HH" is resonable for outliers. Default "" is OK.
     *                           Separate by comma for each external iteration
     *                           (usually last), e.g., for 3 iterations: ",,HH" to down-weight at last one
     * @param enableScatterers If false, no scatterers will be added to GBL trajectory
     * @param enableIntermediateScatterer True to simulate thick sctatterers by two thin scatterers
     *                                    1st at detector plane and intermediate between each two planes
     * @param externalIterations Sets number of times GblTrajectory.fit(...) will be called in processTrackWithRep(...).
     *                           Called external iterations. State is updated each time with GBL results.
     *                           If =0, GblFitterInfos will filled by reference states and GblFitStatus in track able
     *                           to construct simple GBL trajectory (for fit by GBL of output to Mille binary) / get list of points
     *                                    1st at detector plane and intermediate between each two planes
     * @param recalcJacobians Number of iteration up to which Jacobians should be recalculated / planes/meas updated after the fit.
     *                        0 = do not recalculate Jacobians. 1 = recalculate after first GBL fit. 2 = after 1st and 2nd GBL fit etc.
     */
    void setOptions(const std::string &internalIterations = "", bool enableScatterers = true, bool enableIntermediateScatterer = true, unsigned int externalIterations = 1, unsigned int recalcJacobians = 1) {
      m_externalIterations = externalIterations;
      m_gblInternalIterations = internalIterations;
      m_recalcJacobians = recalcJacobians;
      if (!enableScatterers)
        enableIntermediateScatterer = false;
      m_enableScatterers = enableScatterers;
      m_enableIntermediateScatterer = enableIntermediateScatterer;
    }

    
    /**
     * @brief Set multiple scattering options of the fitter/GBL
     * 
     * @return void
     * @param enableScatterers If false, no scatterers will be added to GBL trajectory
     * @param enableIntermediateScatterer True to simulate thick sctatterers by two thin scatterers
     *                                    1st at detector plane and intermediate between each two planes
     */
    void setMSOptions(bool enableScatterers = true, bool enableIntermediateScatterer = true) {
      if (!enableScatterers)
        enableIntermediateScatterer = false;
      m_enableScatterers = enableScatterers;
      m_enableIntermediateScatterer = enableIntermediateScatterer;
    }
    
    /**
     * @brief Evaluates moments of radiation length distribution from list of
     * material steps and computes parameters describing a corresponding thick scatterer.
     *
     * Based on input from Claus Kleinwort (DESY),
     * adapted for continuous material distribution represented by
     * a sum of step functions. Returned thick scatterer can be represented by two GBL scattering points.
     * Calculates variance of theta from total sum of radiation lengths
     * instead of summimg squares of individual deflection angle variances.
     *
     * @param length returned: Length of the track
     * @param theta returned: Variation of distribution of deflection angle
     * @param s returned: First moment of material scattering distribution
     * @param ds returned: Second moment (variance) of material scattering distribution
     * @param p Particle momentum magnitude (GeV/c)
     * @param mass Mass of particle (GeV/c/c)
     * @param steps Vector of material steps from (RKTrackRep) extrapolation
     * @return void
     */
    void getScattererFromMatList(double& length,
                                 double& theta, double& s, double& ds,
                                 const double p, const double mass, const double charge,
                                 const std::vector<genfit::MatStep>& steps) const;
    
    /**
     * Performs fit on a Track.
     * Hit resorting currently supported (use only if necessary /wire chamber/ ... will 
     * extrapolate along whole track to sort the hits).
     */
    void processTrackWithRep(Track* trk, const AbsTrackRep* rep, bool resortHits = false) override;
    
    /**
     * @brief Propagate seed, populate track with scatterers
     * and GblFitterInfos with reference state set
     * 
     * @param trk Track to attach with infos at given rep
     * @param rep TrackRep to which fitter info shall be attached
     * @return Length of track from extrapolations
     */
    double constructGblInfo(Track* trk, const AbsTrackRep* rep);
    
    /**
     * @brief Populate all fitter infos in track for rep with
     * results of trajectory fit. 
     *
     * Updates also seed state in track (from forward prediction
     * at first point)
     * 
     * (The trajectory can only be cut before track end,
     * cannot have missing points in between (if valid))
     * 
     * 
     * 
     * TODO ??
     * Re-construct all points in GblFitterInfos (updated) and collect them
     * in fit status
     * 
     * 
     * @param traj The fitted GblTrajectory
     * @param trk The track with fitter infos from whose points traj was created 
     * @param rep The representation to which this fit status belong
     */
    void updateGblInfo(gbl::GblTrajectory& traj, genfit::Track* trk, const genfit::AbsTrackRep* rep);
    
    /**
     * @brief Constructs all GBL points and returns them in vector
     * for trajectory construction
     * 
     * @return const std::vector< gbl::GblPoint, std::allocator >&
     */
    std::vector<gbl::GblPoint> collectGblPoints(genfit::Track* trk, const genfit::AbsTrackRep* rep);
    
    /**
     * @brief Remove all previous gbl fitter data from track
     * Also removes trackpoints without measurement
     * 
     * @param trk The track
     * @param rep Representation for which to clean data
     * @return void
     */
    void cleanGblInfo(Track* trk, const AbsTrackRep* rep) const;
    
    /**
     * @brief Sort hits in track by arc-len using extrapolation
     * 
     * @param trk The track
     * @param rep The track representation
     * @return void
     */
    void sortHits(Track* trk, const AbsTrackRep* rep) const;
    
    void setTrackSegmentController(GblTrackSegmentController* controler);
    
    
  public:
    
    ClassDef(GblFitter, 2)
    
  };
  
}  /* End of namespace genfit */
/** @} */

#endif // GblFitter_H

/* Copyright 2008-2010, Technische Universitaet Muenchen,
   Authors: Christian Hoeppner & Sebastian Neubert & Johannes Rauch & Tobias Schlüter

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

#ifndef genfit_ICalibrationParametersDerivatives_h
#define genfit_ICalibrationParametersDerivatives_h

#include "AbsMeasurement.h"
#include "StateOnPlane.h"
#include "TMatrixD.h"
#include <TMatrixT.h>


namespace genfit {

/** @brief Abstract base class to establish an interface between physical representation
 * of the detector for alignment/calibration and (fitted) state on genfit::Track
 * 
 * An implementing class (RecoHit) should be able to calculate derivatives of 
 * track fit residuals (2D for planar, 1D for strip hit) residuals w.r.t.
 * global (and optionally additional local) parameters. Global parameters
 * need unique integer labels to identify them across all sub-detectors
 *
 *  @author TadeasBilka
 */
class ICalibrationParametersDerivatives {

 public:
   virtual ~ICalibrationParametersDerivatives(){}

   /**
    * @brief Labels and derivatives of residuals (local measurement coordinates) w.r.t. alignment/calibration parameters
    * Matrix "G" of derivatives valid for given prediction of track state:
    * 
    * G(i, j) = d_residual_i/d_parameter_j
    * 
    * For 2D measurement (u,v):
    * 
    * G = ( du/da du/db du/dc ... )
    *     ( dv/da dv/db dv/dc ... )
    * 
    * for calibration parameters a, b, c.
    * 
    * For 1D measurement:
    * 
    * G = (   0     0     0   ... )
    *     ( dv/da dv/db dv/dc ... )    for V-strip,
    * 
    * 
    * G = ( du/da du/db du/dc ... )
    *     (   0     0     0   ... )    for U-strip,
    *
    * Measurements with more dimesions (slopes, curvature) should provide
    * full 4-5Dx(n params) matrix (state as (q/p, u', v', u, v) or (u', v', u, v))
    * 
    * 
    * @param sop Predicted state of the track as linearization point around 
    * which derivatives of alignment/calibration parameters shall be computed
    * @return pair<vector<int>, TMatrixD> With matrix with #rows = dimension of residual, #columns = number of parameters.
    * #columns must match vector<int>.size().
    */
   virtual std::pair<std::vector<int>, TMatrixD> globalDerivatives(const genfit::StateOnPlane* sop) {return std::make_pair(labels(), derivatives(sop));};

   /**
    * @brief Vector of integer labels for calibration/alignment
    * parameters available (must match #columns of derivatives(...))
    * 
    * unique across all sub-detectors in calibration
    * 
    * @return std::vector< int > Vector of integer labels
    */
   virtual std::vector<int> labels() {return std::vector<int>();}
   
   /**
    * @brief Derivatives of residuals (local measurement coordinates) w.r.t. alignment/calibration parameters
    * Matrix "G" of derivatives valid for given prediction of track state:
    * 
    * G(i, j) = d_residual_i/d_parameter_j
    * 
    * For 2D measurement (u,v):
    * 
    * G = ( du/da du/db du/dc ... )
    *     ( dv/da dv/db dv/dc ... )
    * 
    * for calibration parameters a, b, c.
    * 
    * For 1D measurement both forms are allowed:
    * 
    * G = (   0     0     0   ... )
    *     ( dv/da dv/db dv/dc ... )    for V-strip,
    * 
    * 
    * G = ( du/da du/db du/dc ... )
    *     (   0     0     0   ... )    for U-strip,
    * 
    * or :
    * 
    * G = ( d_sensitive/da d_sensitive/db d_sensitive/dc ... )   as matrix with one row.
    * 
    * A possible algorithm using these derivatives
    * should be able to resolve this based on the measurement HMatrix.
    * Measurements with more dimesions (slopes, curvature) should provide
    * full 4-5Dx(n params) matrix (state as (q/p, u', v', u, v) or (u', v', u, v))
    * 
    * 
    * @param sop Predicted state of the track as linearization point around 
    * which derivatives of alignment/calibration parameters shall be computed
    * @return TMatrixD Matrix with #rows = dimension of residual, #columns = number of parameters.
    * #columns must match labels().size().
    */
   virtual TMatrixD derivatives(const genfit::StateOnPlane*) {return TMatrixD();}
   
   /**
    * @brief Derivatives for additional local parameters to be fitted
    * in global calibration algorithms together with with global parameters
    * 
    * Local parameters are not neccesarily identified by label because their number
    * is proportional to number of measurements included in calibration
    * (possibly very huge number!)
    * 
    * @return TMatrixD Matrix in form d_residual_i/d_parameter_j
    */
   virtual TMatrixD localDerivatives(const genfit::StateOnPlane*) {return TMatrixD();}
   
   /**
    * @brief Vector of integer labels for local calibration
    * parameters available (must match #columns of localDerivatives(...))
    * 
    * This will be usually ignored (e.g. does not have to match localDerivatives),
    * but it is a good practice to return vector of zeros of correct size
    * @return std::vector< int > Vector of integer labels
    */
   virtual std::vector<int> localLabels() {return std::vector<int>();}
   
};

} /* End of namespace genfit */
/** @} */

#endif // genfit_ICalibrationParametersDerivatives_h
/* Copyright 2008-2010, Technische Universitaet Muenchen,
 *   Authors: Christian Hoeppner & Sebastian Neubert & Johannes Rauch
 * 
 *   This file is part of GENFIT.
 * 
 *   GENFIT is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU Lesser General Public License as published
 *   by the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 * 
 *   GENFIT is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU Lesser General Public License for more details.
 * 
 *   You should have received a copy of the GNU Lesser General Public License
 *   along with GENFIT.  If not, see <http://www.gnu.org/licenses/>.
 */
/** @addtogroup genfit
 * @{
 */

#ifndef genfit_GblFitterInfo_h
#define genfit_GblFitterInfo_h

#include "AbsFitterInfo.h"
#include "MeasuredStateOnPlane.h"
#include "MeasurementOnPlane.h"
#include "StateOnPlane.h"
#include "TrackPoint.h"
#include "ThinScatterer.h"
#include "StateOnPlane.h"
#include "Track.h"
#include "ICalibrationParametersDerivatives.h"
#include "GblPoint.h"
#include "GblTrajectory.h"
#include "GblFitter.h"
#include "TMatrixD.h"
#include "TMatrixDSym.h"
#include "AbsHMatrix.h"

#include <vector>
#include <memory>


namespace genfit {
  
  
  /**
   *  @brief Collects information needed and produced by a GblFitter/GBL and is specific to one AbsTrackRep of the Track.
   */
  class GblFitterInfo : public AbsFitterInfo {
    
  public:
    
    /**
     * @brief Constructor for ROOT I/O 
     */
    GblFitterInfo();
    
    /**
     * @brief Default (inherited) constructor
     * Should not be used or the reference should set immediately upon
     * construction (to set the plane).
     */
    GblFitterInfo(const TrackPoint* trackPoint, const AbsTrackRep* rep);
    
    /**
     * @brief Default user constructor
     * 
     * @param trackPoint The point at track to attach fitter info.
     * @param rep The representation this fitter info belongs to
     * @param referenceState State from extrapolation to init predictions and plane
     */
    GblFitterInfo(const TrackPoint* trackPoint, const AbsTrackRep* rep, StateOnPlane& referenceState);
    
    /**
     * @brief (Initial) reset of fitter info
     * 
     * @param measurementDim Measurement dimesion (2)
     * @param repDim Representation dimesion (5)
     * @return void
     */
    void reset(unsigned int measurementDim = 2, unsigned int repDim = 5);
        
    /**
     * @brief Set the prediction and plane (from measurement if any)
     * You should use the user constructor instead.
     * 
     * Reference gets not updated internally in fitter info.
     * After updateFitResults(...), updates affect the +/- predictions directly.
     * 
     * Should be called only once (so rather use constructor).
     * Otherwise will rewrite fitted state by reference (and you have to update from fit again)
     * 
     * @param referenceState StateOnPlane from extrapolation to this point
     * @return void
     */
    void setReferenceState(StateOnPlane& referenceState);
    /**
     * @brief Set the Jacobian for further GblPoint construction
     * 
     * @param jacobian 5x5 TMatrixD with Jacobian for propagation of the state from previous point
     *                 to this point.
     * @return void
     */
    void setJacobian(TMatrixD jacobian);
    
    /**
     * @brief Get scattering covariance projected into (measurement) plane
     * 
     * @param variance Variance of slopes in track frame
     * @param trackDirection Direction of the track at the plane
     * @param measurementPlane The plane with measurement to which MS shall be projected
     * @return TMatrixDSym
     */
    TMatrixDSym getCovariance(double variance, TVector3 trackDirection, SharedPlanePtr measurementPlane) const;
    
    /**
     * @brief Collect all data and create a GblPoint
     * - Jacobian is taken from fitter info ... use setJaobian() to change it
     * - A scatterer is added if ThinScatterer at point
     * - A measurement (first MeasurementOnPlane in 1st RawMeasurement) is added.
     * - Global and local derivatives are added for RawMesurement implementing
     *   ICalibrationParametersDerivatives interface. Using most up to date prediction.
     * 
     * @return gbl::GblPoint
     */
    gbl::GblPoint constructGblPoint();
  
    /**
     * @brief Update fitter info from GBL fit results
     * 
     * Locates itself in track/trajectory and updates
     * predictions, errors, etc.
     * 
     * @param traj Fitted GblTrajectory constructed with this point
     * @return void
     */
    void updateFitResults(gbl::GblTrajectory& traj);
    
    /**
     * @brief Get the prediction at this point
     * Always biased in GBL (global fit)
     * There are 2 states, before and after kink (if there is
     * a scatterer at this point).
     * Per default the state after kink for forward propagation
     * is returned.
     * 
     * If not yet fitted, returns the reference state
     * 
     * @param afterKink If true, returns prediction for forward propagation.
     *                  If false, for backward
     * @return const genfit::MeasuredStateOnPlane&
     */
    const MeasuredStateOnPlane& getFittedState(bool afterKink = true) const override;

    /**
     * @brief Get the residual
     * 
     * Temporarily constructs measurements
     * and calculates residual as meas - prediction.
     * 
     * Always biased. Always only one (1st) measurement!
     * 
     * @param  ...
     * @param  ...
     * @param onlyMeasurementErrors If true, covariance of measurement returned.
     *                              If false, diagonalized residual error incl. correlation from track fit is returned.
     * @return genfit::MeasurementOnPlane
     */
    MeasurementOnPlane getResidual(unsigned int = 0, bool = false, bool onlyMeasurementErrors = true) const override;
    
    /**
     * @brief Get kink (residual) with diagonalized covariance (2D)
     * Covariance may be zero if not yet fitted or no scatterer!
     * 
     * @return genfit::MeasurementOnPlane
     */
    MeasurementOnPlane getKink() const;
    
    /**
     * @brief Get kink (residual) (2D)
     * = 0 - ( (+)pred - (-)pred )
     * 
     * @return TVectorD
     */
    TVectorD getKinks() const;
    
    /**
     * @brief Get the measurement on plane from stored
     * measurement data (from last construction/update)
     * 
     * @return genfit::MeasuredStateOnPlane
     */
    MeasurementOnPlane getMeasurement() const;
    
    /**
     * @brief SHOULD BE USED ONLY INTERNALY!
     * Update the plane from measurement constructed with state
     * or take plane from state if there is no measurement.
     * 1st raw Measurement with highest weight is constructed and stored as matrices.
     * 
     * @return void
     */
    void updateMeasurementAndPlane(const StateOnPlane & sop);

    /**
     * @brief Returns (copy of) the stored reference 5D state at current plane with internal rep
     * 
     * @return genfit::StateOnPlane
     */
    StateOnPlane getReferenceState() const {return StateOnPlane(refPrediction_, sharedPlane_, rep_);}
    
    /**
     * @brief Re-extrapolates between prevFitterInfo and this point using
     * forward state to update the Jacobian (if planes and/or states changed,
     * internal predictions are extrapolated to new planes)
     * 
     * @param prevFitterInfo Pointer to GblFitterInfo of previous point
     * @return void
     */
    void recalculateJacobian(GblFitterInfo* prevFitterInfo);
    
    virtual ~GblFitterInfo() {;}
    virtual GblFitterInfo* clone() const override;
    bool hasMeasurements() const override {return trackPoint_->hasRawMeasurements();}
    bool hasReferenceState() const override {return (refPrediction_(0) != 0.);}
    bool hasForwardPrediction() const override {return hasReferenceState();}
    bool hasBackwardPrediction() const override {return hasReferenceState();}
    bool hasForwardUpdate() const override {return hasForwardPrediction();}
    bool hasBackwardUpdate() const override {return hasBackwardPrediction();}
    bool hasUpdate(int direction) const override {if (direction < 0) return hasBackwardPrediction(); return hasForwardPrediction();}
    bool hasPredictionsAndUpdates() const {return (hasForwardPrediction() && hasBackwardPrediction() && hasForwardUpdate() && hasBackwardUpdate());}

    void deleteForwardInfo() override {;}
    void deleteBackwardInfo() override {;}
    void deletePredictions() {
      deleteBackwardInfo();
      deleteForwardInfo();
    }
    void deleteReferenceInfo() override {;} // Empty because we really do not want to delete reference without a new one
    void deleteMeasurementInfo() override {;} // We do not keep the measurements
    virtual void Print(const Option_t* = "") const override;
    virtual bool checkConsistency(const genfit::PruneFlags* = nullptr) const override;
       
  private:
    TMatrixD jacobian_;
    TVectorD measResiduals_;
    TVectorD measResidualErrors_;
    TVectorD kinkResiduals_;
    TVectorD kinkResidualErrors_;
    TVectorD measDownWeights_;
    TVectorD kinkDownWeights_;
    TVectorD bwdStateCorrection_;
    TVectorD fwdStateCorrection_;
    TMatrixDSym bwdCov_;
    TMatrixDSym fwdCov_;
    TVectorD fwdPrediction_;
    TVectorD bwdPrediction_;
    TVectorD refPrediction_;
    
    TVectorD measurement_;
    TMatrixDSym measCov_;
    TMatrixD hMatrix_;

    mutable std::unique_ptr<MeasuredStateOnPlane> fittedStateBwd_; //!  cache
    mutable std::unique_ptr<MeasuredStateOnPlane> fittedStateFwd_; //!  cache
    
  public:
    
    ClassDefOverride(GblFitterInfo, 1)
    
  };
  
} /* End of namespace genfit */
/** @} */

#endif // genfit_GblFitterInfo_h
/* Copyright 2008-2010, Technische Universitaet Muenchen,
 *   Authors: Christian Hoeppner & Sebastian Neubert & Johannes Rauch
 * 
 *   This file is part of GENFIT.
 * 
 *   GENFIT is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU Lesser General Public License as published
 *   by the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 * 
 *   GENFIT is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU Lesser General Public License for more details.
 * 
 *   You should have received a copy of the GNU Lesser General Public License
 *   along with GENFIT.  If not, see <http://www.gnu.org/licenses/>.
 */
/** @addtogroup genfit
 * @{
 */

#ifndef genfit_GblFitStatus_h
#define genfit_GblFitStatus_h

#include "FitStatus.h"
#include "Track.h"
#include "GblFitterInfo.h"

#include <Math/ProbFunc.h>
#include "GblTrajectory.h"


namespace genfit {
  
  /**
   * @brief FitStatus for use with GblFitter
   */
  class GblFitStatus : public FitStatus {
    
  public:
    
    GblFitStatus() :
    FitStatus(), numIterations_(0), fittedWithReferenceTrack_(false),
    trackLen_(0), curvatureFlag_(true), maxLocalFitParams_(0) {;}
    
    virtual ~GblFitStatus() {};
    
    virtual FitStatus* clone() const override {return new GblFitStatus(*this);}
    
    void setCurvature(bool useCurvature) {curvatureFlag_ = useCurvature;}
    bool hasCurvature() { return curvatureFlag_; }
    void setMaxLocalFitParams(unsigned maxLocalFitParams) {maxLocalFitParams_ = maxLocalFitParams;}
    bool getMaxLocalFitParams() { return maxLocalFitParams_; }
    
    unsigned int getNumIterations() const {return numIterations_;}
    bool isFittedWithReferenceTrack() const {return fittedWithReferenceTrack_;}
    double getTrackLen() const {return trackLen_;}
    // virtual double getPVal() : not overridden, as it does the right thing.
    
    void setNumIterations(unsigned int numIterations) {numIterations_ = numIterations;}
    void setIsFittedWithReferenceTrack(bool fittedWithReferenceTrack = true) {fittedWithReferenceTrack_ = fittedWithReferenceTrack;}
    void setTrackLen(double trackLen) {trackLen_ = trackLen;}
    
    virtual void Print(const Option_t* = "") const override {;}
    
  protected:
    
    unsigned int numIterations_; // number of iterations that have been performed
    bool fittedWithReferenceTrack_;
    
    double trackLen_;
    bool curvatureFlag_;
    int maxLocalFitParams_;
    
    
  public:
    
    ClassDefOverride(GblFitStatus, 1)
    
  };
  
} /* End of namespace genfit */
/** @} */

#endif // genfit_GblFitStatus_h
/*
 * GblData.h
 *
 *  Created on: Aug 18, 2011
 *      Author: kleinwrt
 */

/** \file
 *  GblData definition.
 *
 *  \author Claus Kleinwort, DESY, 2011 (Claus.Kleinwort@desy.de)
 *
 *  \copyright
 *  Copyright (c) 2011 - 2016 Deutsches Elektronen-Synchroton,
 *  Member of the Helmholtz Association, (DESY), HAMBURG, GERMANY \n\n
 *  This library is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU Library General Public License as
 *  published by the Free Software Foundation; either version 2 of the
 *  License, or (at your option) any later version. \n\n
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details. \n\n
 *  You should have received a copy of the GNU Library General Public
 *  License along with this program (see the file COPYING.LIB for more
 *  details); if not, write to the Free Software Foundation, Inc.,
 *  675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef GBLDATA_H_
#define GBLDATA_H_

#include<iostream>
#include<vector>
#include<math.h>
#include "VMatrix.h"
#include "TVectorD.h"
#include "TMatrixD.h"
#include "TMatrixDSym.h"

#include "Math/SMatrix.h"
#include "Math/SVector.h"
typedef ROOT::Math::SMatrix<double, 2, 5> SMatrix25;
typedef ROOT::Math::SMatrix<double, 2, 7> SMatrix27;
typedef ROOT::Math::SMatrix<double, 5, 5> SMatrix55;

//! Namespace for the general broken lines package
namespace gbl {

/// Data (block) for independent scalar measurement
/**
 * Data (block) containing value, precision and derivatives for measurements and kinks.
 * Created from attributes of GblPoints, used to construct linear equation system for track fit.
 */
class GblData {
public:
        GblData() : theLabel(0), theValue(0.), thePrecision(-1.), theDownWeight(0.), thePrediction(0.) {};
	GblData(unsigned int aLabel, double aMeas, double aPrec);
	virtual ~GblData();
	void addDerivatives(unsigned int iRow,
			const std::vector<unsigned int> &labDer, const SMatrix55 &matDer,
			unsigned int iOff, const TMatrixD &derLocal,
			const std::vector<int> &labGlobal, const TMatrixD &derGlobal,
			unsigned int nLocal, const TMatrixD &derTrans);
	void addDerivatives(unsigned int iRow,
			const std::vector<unsigned int> &labDer, const SMatrix27 &matDer,
			unsigned int nLocal, const TMatrixD &derTrans);
	void addDerivatives(const std::vector<unsigned int> &index,
			const std::vector<double> &derivatives);

	void setPrediction(const VVector &aVector);
	double setDownWeighting(unsigned int aMethod);
	double getChi2() const;
	void printData() const;
	void getLocalData(double &aValue, double &aWeight,
			std::vector<unsigned int>* &indLocal,
			std::vector<double>* &derLocal);
	void getAllData(double &aValue, double &aErr,
			std::vector<unsigned int>* &indLocal,
			std::vector<double>* &derLocal, std::vector<int>* &labGlobal,
			std::vector<double>* &derGlobal);
	void getResidual(double &aResidual, double &aVariance, double &aDownWeight,
			std::vector<unsigned int>* &indLocal,
			std::vector<double>* &derLocal);

private:
	unsigned int theLabel; ///< Label (of measurements point)
	double theValue; ///< Value (residual)
	double thePrecision; ///< Precision (1/sigma**2)
	double theDownWeight; ///< Down-weighting factor (0-1)
	double thePrediction; ///< Prediction from fit
	std::vector<unsigned int> theParameters; ///< List of fit parameters (with non zero derivatives)
	std::vector<double> theDerivatives; ///< List of derivatives for fit
	std::vector<int> globalLabels; ///< Labels for global derivatives
	std::vector<double> globalDerivatives; ///< Global derivatives

        ClassDef(GblData, 1)
};
}
#endif /* GBLDATA_H_ */

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"gbl::GblData", payloadCode, "@",
"genfit::GFGbl", payloadCode, "@",
"genfit::GblFitStatus", payloadCode, "@",
"genfit::GblFitter", payloadCode, "@",
"genfit::GblFitterInfo", payloadCode, "@",
"genfit::GblTrackSegmentController", payloadCode, "@",
"genfit::ICalibrationParametersDerivatives", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("GBLRootDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_GBLRootDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_GBLRootDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_GBLRootDict() {
  TriggerDictionaryInitialization_GBLRootDict_Impl();
}
