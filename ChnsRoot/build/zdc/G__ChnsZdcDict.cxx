// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdata2dIrwangdIgithubsdIHIAFmIetaFactorymISimulationsdIChnsRootdIbuilddIzdcdIG__ChnsZdcDict
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
#include "ChnsZdc.h"
#include "ChnsZdcContFact.h"
#include "ChnsZdcGeo.h"
#include "ChnsZdcGeoPar.h"
#include "ChnsZdcPoint.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_ChnsZdc(void *p = 0);
   static void *newArray_ChnsZdc(Long_t size, void *p);
   static void delete_ChnsZdc(void *p);
   static void deleteArray_ChnsZdc(void *p);
   static void destruct_ChnsZdc(void *p);
   static void streamer_ChnsZdc(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsZdc*)
   {
      ::ChnsZdc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsZdc >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsZdc", ::ChnsZdc::Class_Version(), "ChnsZdc.h", 20,
                  typeid(::ChnsZdc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsZdc::Dictionary, isa_proxy, 16,
                  sizeof(::ChnsZdc) );
      instance.SetNew(&new_ChnsZdc);
      instance.SetNewArray(&newArray_ChnsZdc);
      instance.SetDelete(&delete_ChnsZdc);
      instance.SetDeleteArray(&deleteArray_ChnsZdc);
      instance.SetDestructor(&destruct_ChnsZdc);
      instance.SetStreamerFunc(&streamer_ChnsZdc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsZdc*)
   {
      return GenerateInitInstanceLocal((::ChnsZdc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsZdc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsZdcContFact(void *p = 0);
   static void *newArray_ChnsZdcContFact(Long_t size, void *p);
   static void delete_ChnsZdcContFact(void *p);
   static void deleteArray_ChnsZdcContFact(void *p);
   static void destruct_ChnsZdcContFact(void *p);
   static void streamer_ChnsZdcContFact(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsZdcContFact*)
   {
      ::ChnsZdcContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsZdcContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsZdcContFact", ::ChnsZdcContFact::Class_Version(), "ChnsZdcContFact.h", 15,
                  typeid(::ChnsZdcContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsZdcContFact::Dictionary, isa_proxy, 16,
                  sizeof(::ChnsZdcContFact) );
      instance.SetNew(&new_ChnsZdcContFact);
      instance.SetNewArray(&newArray_ChnsZdcContFact);
      instance.SetDelete(&delete_ChnsZdcContFact);
      instance.SetDeleteArray(&deleteArray_ChnsZdcContFact);
      instance.SetDestructor(&destruct_ChnsZdcContFact);
      instance.SetStreamerFunc(&streamer_ChnsZdcContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsZdcContFact*)
   {
      return GenerateInitInstanceLocal((::ChnsZdcContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsZdcContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsZdcGeo(void *p = 0);
   static void *newArray_ChnsZdcGeo(Long_t size, void *p);
   static void delete_ChnsZdcGeo(void *p);
   static void deleteArray_ChnsZdcGeo(void *p);
   static void destruct_ChnsZdcGeo(void *p);
   static void streamer_ChnsZdcGeo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsZdcGeo*)
   {
      ::ChnsZdcGeo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsZdcGeo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsZdcGeo", ::ChnsZdcGeo::Class_Version(), "ChnsZdcGeo.h", 13,
                  typeid(::ChnsZdcGeo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsZdcGeo::Dictionary, isa_proxy, 16,
                  sizeof(::ChnsZdcGeo) );
      instance.SetNew(&new_ChnsZdcGeo);
      instance.SetNewArray(&newArray_ChnsZdcGeo);
      instance.SetDelete(&delete_ChnsZdcGeo);
      instance.SetDeleteArray(&deleteArray_ChnsZdcGeo);
      instance.SetDestructor(&destruct_ChnsZdcGeo);
      instance.SetStreamerFunc(&streamer_ChnsZdcGeo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsZdcGeo*)
   {
      return GenerateInitInstanceLocal((::ChnsZdcGeo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsZdcGeo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsZdcGeoPar(void *p = 0);
   static void *newArray_ChnsZdcGeoPar(Long_t size, void *p);
   static void delete_ChnsZdcGeoPar(void *p);
   static void deleteArray_ChnsZdcGeoPar(void *p);
   static void destruct_ChnsZdcGeoPar(void *p);
   static void streamer_ChnsZdcGeoPar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsZdcGeoPar*)
   {
      ::ChnsZdcGeoPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsZdcGeoPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsZdcGeoPar", ::ChnsZdcGeoPar::Class_Version(), "ChnsZdcGeoPar.h", 16,
                  typeid(::ChnsZdcGeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsZdcGeoPar::Dictionary, isa_proxy, 16,
                  sizeof(::ChnsZdcGeoPar) );
      instance.SetNew(&new_ChnsZdcGeoPar);
      instance.SetNewArray(&newArray_ChnsZdcGeoPar);
      instance.SetDelete(&delete_ChnsZdcGeoPar);
      instance.SetDeleteArray(&deleteArray_ChnsZdcGeoPar);
      instance.SetDestructor(&destruct_ChnsZdcGeoPar);
      instance.SetStreamerFunc(&streamer_ChnsZdcGeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsZdcGeoPar*)
   {
      return GenerateInitInstanceLocal((::ChnsZdcGeoPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsZdcGeoPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsZdcPoint(void *p = 0);
   static void *newArray_ChnsZdcPoint(Long_t size, void *p);
   static void delete_ChnsZdcPoint(void *p);
   static void deleteArray_ChnsZdcPoint(void *p);
   static void destruct_ChnsZdcPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsZdcPoint*)
   {
      ::ChnsZdcPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsZdcPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsZdcPoint", ::ChnsZdcPoint::Class_Version(), "ChnsZdcPoint.h", 16,
                  typeid(::ChnsZdcPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsZdcPoint::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsZdcPoint) );
      instance.SetNew(&new_ChnsZdcPoint);
      instance.SetNewArray(&newArray_ChnsZdcPoint);
      instance.SetDelete(&delete_ChnsZdcPoint);
      instance.SetDeleteArray(&deleteArray_ChnsZdcPoint);
      instance.SetDestructor(&destruct_ChnsZdcPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsZdcPoint*)
   {
      return GenerateInitInstanceLocal((::ChnsZdcPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsZdcPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr ChnsZdc::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsZdc::Class_Name()
{
   return "ChnsZdc";
}

//______________________________________________________________________________
const char *ChnsZdc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsZdc*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsZdc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsZdc*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsZdc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsZdc*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsZdc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsZdc*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsZdcContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsZdcContFact::Class_Name()
{
   return "ChnsZdcContFact";
}

//______________________________________________________________________________
const char *ChnsZdcContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsZdcContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsZdcContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsZdcContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsZdcContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsZdcContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsZdcContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsZdcContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsZdcGeo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsZdcGeo::Class_Name()
{
   return "ChnsZdcGeo";
}

//______________________________________________________________________________
const char *ChnsZdcGeo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsZdcGeo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsZdcGeo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsZdcGeo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsZdcGeo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsZdcGeo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsZdcGeo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsZdcGeo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsZdcGeoPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsZdcGeoPar::Class_Name()
{
   return "ChnsZdcGeoPar";
}

//______________________________________________________________________________
const char *ChnsZdcGeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsZdcGeoPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsZdcGeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsZdcGeoPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsZdcGeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsZdcGeoPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsZdcGeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsZdcGeoPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsZdcPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsZdcPoint::Class_Name()
{
   return "ChnsZdcPoint";
}

//______________________________________________________________________________
const char *ChnsZdcPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsZdcPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsZdcPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsZdcPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsZdcPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsZdcPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsZdcPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsZdcPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void ChnsZdc::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsZdc.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairDetector::Streamer(R__b);
      {float R_Dummy; R__b >> R_Dummy; ELoss_all=Double32_t(R_Dummy);}
      {float R_Dummy; R__b >> R_Dummy; ELoss_all2=Double32_t(R_Dummy);}
      {float R_Dummy; R__b >> R_Dummy; energy1=Double32_t(R_Dummy);}
      R__b.CheckByteCount(R__s, R__c, ChnsZdc::IsA());
   } else {
      R__c = R__b.WriteVersion(ChnsZdc::IsA(), kTRUE);
      FairDetector::Streamer(R__b);
      R__b << float(ELoss_all);
      R__b << float(ELoss_all2);
      R__b << float(energy1);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsZdc(void *p) {
      return  p ? new(p) ::ChnsZdc : new ::ChnsZdc;
   }
   static void *newArray_ChnsZdc(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsZdc[nElements] : new ::ChnsZdc[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsZdc(void *p) {
      delete ((::ChnsZdc*)p);
   }
   static void deleteArray_ChnsZdc(void *p) {
      delete [] ((::ChnsZdc*)p);
   }
   static void destruct_ChnsZdc(void *p) {
      typedef ::ChnsZdc current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ChnsZdc(TBuffer &buf, void *obj) {
      ((::ChnsZdc*)obj)->::ChnsZdc::Streamer(buf);
   }
} // end of namespace ROOT for class ::ChnsZdc

//______________________________________________________________________________
void ChnsZdcContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsZdcContFact.

   FairContFact::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsZdcContFact(void *p) {
      return  p ? new(p) ::ChnsZdcContFact : new ::ChnsZdcContFact;
   }
   static void *newArray_ChnsZdcContFact(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsZdcContFact[nElements] : new ::ChnsZdcContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsZdcContFact(void *p) {
      delete ((::ChnsZdcContFact*)p);
   }
   static void deleteArray_ChnsZdcContFact(void *p) {
      delete [] ((::ChnsZdcContFact*)p);
   }
   static void destruct_ChnsZdcContFact(void *p) {
      typedef ::ChnsZdcContFact current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ChnsZdcContFact(TBuffer &buf, void *obj) {
      ((::ChnsZdcContFact*)obj)->::ChnsZdcContFact::Streamer(buf);
   }
} // end of namespace ROOT for class ::ChnsZdcContFact

//______________________________________________________________________________
void ChnsZdcGeo::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsZdcGeo.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairGeoSet::Streamer(R__b);
      R__b.ReadStaticArray((char*)modName);
      R__b.ReadStaticArray((char*)eleName);
      R__b.CheckByteCount(R__s, R__c, ChnsZdcGeo::IsA());
   } else {
      R__c = R__b.WriteVersion(ChnsZdcGeo::IsA(), kTRUE);
      FairGeoSet::Streamer(R__b);
      R__b.WriteArray(modName, 20);
      R__b.WriteArray(eleName, 20);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsZdcGeo(void *p) {
      return  p ? new(p) ::ChnsZdcGeo : new ::ChnsZdcGeo;
   }
   static void *newArray_ChnsZdcGeo(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsZdcGeo[nElements] : new ::ChnsZdcGeo[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsZdcGeo(void *p) {
      delete ((::ChnsZdcGeo*)p);
   }
   static void deleteArray_ChnsZdcGeo(void *p) {
      delete [] ((::ChnsZdcGeo*)p);
   }
   static void destruct_ChnsZdcGeo(void *p) {
      typedef ::ChnsZdcGeo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ChnsZdcGeo(TBuffer &buf, void *obj) {
      ((::ChnsZdcGeo*)obj)->::ChnsZdcGeo::Streamer(buf);
   }
} // end of namespace ROOT for class ::ChnsZdcGeo

//______________________________________________________________________________
void ChnsZdcGeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsZdcGeoPar.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairParGenericSet::Streamer(R__b);
      R__b >> fGeoSensNodes;
      R__b >> fGeoPassNodes;
      R__b.CheckByteCount(R__s, R__c, ChnsZdcGeoPar::IsA());
   } else {
      R__c = R__b.WriteVersion(ChnsZdcGeoPar::IsA(), kTRUE);
      FairParGenericSet::Streamer(R__b);
      R__b << fGeoSensNodes;
      R__b << fGeoPassNodes;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsZdcGeoPar(void *p) {
      return  p ? new(p) ::ChnsZdcGeoPar : new ::ChnsZdcGeoPar;
   }
   static void *newArray_ChnsZdcGeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsZdcGeoPar[nElements] : new ::ChnsZdcGeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsZdcGeoPar(void *p) {
      delete ((::ChnsZdcGeoPar*)p);
   }
   static void deleteArray_ChnsZdcGeoPar(void *p) {
      delete [] ((::ChnsZdcGeoPar*)p);
   }
   static void destruct_ChnsZdcGeoPar(void *p) {
      typedef ::ChnsZdcGeoPar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ChnsZdcGeoPar(TBuffer &buf, void *obj) {
      ((::ChnsZdcGeoPar*)obj)->::ChnsZdcGeoPar::Streamer(buf);
   }
} // end of namespace ROOT for class ::ChnsZdcGeoPar

//______________________________________________________________________________
void ChnsZdcPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsZdcPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsZdcPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsZdcPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsZdcPoint(void *p) {
      return  p ? new(p) ::ChnsZdcPoint : new ::ChnsZdcPoint;
   }
   static void *newArray_ChnsZdcPoint(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsZdcPoint[nElements] : new ::ChnsZdcPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsZdcPoint(void *p) {
      delete ((::ChnsZdcPoint*)p);
   }
   static void deleteArray_ChnsZdcPoint(void *p) {
      delete [] ((::ChnsZdcPoint*)p);
   }
   static void destruct_ChnsZdcPoint(void *p) {
      typedef ::ChnsZdcPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsZdcPoint

namespace {
  void TriggerDictionaryInitialization_G__ChnsZdcDict_Impl() {
    static const char* headers[] = {
"ChnsZdc.h",
"ChnsZdcContFact.h",
"ChnsZdcGeo.h",
"ChnsZdcGeoPar.h",
"ChnsZdcPoint.h",
0
    };
    static const char* includePaths[] = {
"/home/eicc/FairRoot/build_18.4.2/include",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/ChnsData",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/zdc",
"/home/eicc/software/FairSoft/install/include/root",
"/home/eicc/software/FairSoft/install/include",
"/home/eicc/software/FairSoft/install/include/root",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/build/zdc/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__ChnsZdcDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$ChnsZdc.h")))  ChnsZdc;
class __attribute__((annotate(R"ATTRDUMP(Factory for all ChnsZdc parameter containers)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Factory for all ChnsZdc parameter containers)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Factory for all ChnsZdc parameter containers)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Factory for all ChnsZdc parameter containers)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$ChnsZdcContFact.h")))  ChnsZdcContFact;
class __attribute__((annotate("$clingAutoload$ChnsZdcGeo.h")))  ChnsZdcGeo;
class __attribute__((annotate("$clingAutoload$ChnsZdcGeoPar.h")))  ChnsZdcGeoPar;
class __attribute__((annotate("$clingAutoload$ChnsZdcPoint.h")))  ChnsZdcPoint;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__ChnsZdcDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "ChnsZdc.h"
#include "ChnsZdcContFact.h"
#include "ChnsZdcGeo.h"
#include "ChnsZdcGeoPar.h"
#include "ChnsZdcPoint.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"ChnsZdc", payloadCode, "@",
"ChnsZdcContFact", payloadCode, "@",
"ChnsZdcGeo", payloadCode, "@",
"ChnsZdcGeoPar", payloadCode, "@",
"ChnsZdcPoint", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__ChnsZdcDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__ChnsZdcDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__ChnsZdcDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__ChnsZdcDict() {
  TriggerDictionaryInitialization_G__ChnsZdcDict_Impl();
}
