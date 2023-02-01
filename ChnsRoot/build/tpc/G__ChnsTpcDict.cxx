// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdata2dIrwangdIgithubsdIHIAFmIetaFactorymISimulationsdIChnsRootdIbuilddItpcdIG__ChnsTpcDict
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
#include "ChnsTpc.h"
#include "ChnsTpcContFact.h"
#include "ChnsTpcGeo.h"
#include "ChnsTpcGeoPar.h"
#include "ChnsTpcPoint.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_ChnsTpc(void *p = 0);
   static void *newArray_ChnsTpc(Long_t size, void *p);
   static void delete_ChnsTpc(void *p);
   static void deleteArray_ChnsTpc(void *p);
   static void destruct_ChnsTpc(void *p);
   static void streamer_ChnsTpc(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsTpc*)
   {
      ::ChnsTpc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsTpc >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsTpc", ::ChnsTpc::Class_Version(), "ChnsTpc.h", 20,
                  typeid(::ChnsTpc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsTpc::Dictionary, isa_proxy, 16,
                  sizeof(::ChnsTpc) );
      instance.SetNew(&new_ChnsTpc);
      instance.SetNewArray(&newArray_ChnsTpc);
      instance.SetDelete(&delete_ChnsTpc);
      instance.SetDeleteArray(&deleteArray_ChnsTpc);
      instance.SetDestructor(&destruct_ChnsTpc);
      instance.SetStreamerFunc(&streamer_ChnsTpc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsTpc*)
   {
      return GenerateInitInstanceLocal((::ChnsTpc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsTpc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsTpcContFact(void *p = 0);
   static void *newArray_ChnsTpcContFact(Long_t size, void *p);
   static void delete_ChnsTpcContFact(void *p);
   static void deleteArray_ChnsTpcContFact(void *p);
   static void destruct_ChnsTpcContFact(void *p);
   static void streamer_ChnsTpcContFact(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsTpcContFact*)
   {
      ::ChnsTpcContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsTpcContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsTpcContFact", ::ChnsTpcContFact::Class_Version(), "ChnsTpcContFact.h", 15,
                  typeid(::ChnsTpcContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsTpcContFact::Dictionary, isa_proxy, 16,
                  sizeof(::ChnsTpcContFact) );
      instance.SetNew(&new_ChnsTpcContFact);
      instance.SetNewArray(&newArray_ChnsTpcContFact);
      instance.SetDelete(&delete_ChnsTpcContFact);
      instance.SetDeleteArray(&deleteArray_ChnsTpcContFact);
      instance.SetDestructor(&destruct_ChnsTpcContFact);
      instance.SetStreamerFunc(&streamer_ChnsTpcContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsTpcContFact*)
   {
      return GenerateInitInstanceLocal((::ChnsTpcContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsTpcContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsTpcGeo(void *p = 0);
   static void *newArray_ChnsTpcGeo(Long_t size, void *p);
   static void delete_ChnsTpcGeo(void *p);
   static void deleteArray_ChnsTpcGeo(void *p);
   static void destruct_ChnsTpcGeo(void *p);
   static void streamer_ChnsTpcGeo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsTpcGeo*)
   {
      ::ChnsTpcGeo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsTpcGeo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsTpcGeo", ::ChnsTpcGeo::Class_Version(), "ChnsTpcGeo.h", 13,
                  typeid(::ChnsTpcGeo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsTpcGeo::Dictionary, isa_proxy, 16,
                  sizeof(::ChnsTpcGeo) );
      instance.SetNew(&new_ChnsTpcGeo);
      instance.SetNewArray(&newArray_ChnsTpcGeo);
      instance.SetDelete(&delete_ChnsTpcGeo);
      instance.SetDeleteArray(&deleteArray_ChnsTpcGeo);
      instance.SetDestructor(&destruct_ChnsTpcGeo);
      instance.SetStreamerFunc(&streamer_ChnsTpcGeo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsTpcGeo*)
   {
      return GenerateInitInstanceLocal((::ChnsTpcGeo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsTpcGeo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsTpcGeoPar(void *p = 0);
   static void *newArray_ChnsTpcGeoPar(Long_t size, void *p);
   static void delete_ChnsTpcGeoPar(void *p);
   static void deleteArray_ChnsTpcGeoPar(void *p);
   static void destruct_ChnsTpcGeoPar(void *p);
   static void streamer_ChnsTpcGeoPar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsTpcGeoPar*)
   {
      ::ChnsTpcGeoPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsTpcGeoPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsTpcGeoPar", ::ChnsTpcGeoPar::Class_Version(), "ChnsTpcGeoPar.h", 16,
                  typeid(::ChnsTpcGeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsTpcGeoPar::Dictionary, isa_proxy, 16,
                  sizeof(::ChnsTpcGeoPar) );
      instance.SetNew(&new_ChnsTpcGeoPar);
      instance.SetNewArray(&newArray_ChnsTpcGeoPar);
      instance.SetDelete(&delete_ChnsTpcGeoPar);
      instance.SetDeleteArray(&deleteArray_ChnsTpcGeoPar);
      instance.SetDestructor(&destruct_ChnsTpcGeoPar);
      instance.SetStreamerFunc(&streamer_ChnsTpcGeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsTpcGeoPar*)
   {
      return GenerateInitInstanceLocal((::ChnsTpcGeoPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsTpcGeoPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsTpcPoint(void *p = 0);
   static void *newArray_ChnsTpcPoint(Long_t size, void *p);
   static void delete_ChnsTpcPoint(void *p);
   static void deleteArray_ChnsTpcPoint(void *p);
   static void destruct_ChnsTpcPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsTpcPoint*)
   {
      ::ChnsTpcPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsTpcPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsTpcPoint", ::ChnsTpcPoint::Class_Version(), "ChnsTpcPoint.h", 16,
                  typeid(::ChnsTpcPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsTpcPoint::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsTpcPoint) );
      instance.SetNew(&new_ChnsTpcPoint);
      instance.SetNewArray(&newArray_ChnsTpcPoint);
      instance.SetDelete(&delete_ChnsTpcPoint);
      instance.SetDeleteArray(&deleteArray_ChnsTpcPoint);
      instance.SetDestructor(&destruct_ChnsTpcPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsTpcPoint*)
   {
      return GenerateInitInstanceLocal((::ChnsTpcPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsTpcPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr ChnsTpc::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsTpc::Class_Name()
{
   return "ChnsTpc";
}

//______________________________________________________________________________
const char *ChnsTpc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsTpc*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsTpc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsTpc*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsTpc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsTpc*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsTpc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsTpc*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsTpcContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsTpcContFact::Class_Name()
{
   return "ChnsTpcContFact";
}

//______________________________________________________________________________
const char *ChnsTpcContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsTpcContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsTpcContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsTpcContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsTpcContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsTpcContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsTpcContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsTpcContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsTpcGeo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsTpcGeo::Class_Name()
{
   return "ChnsTpcGeo";
}

//______________________________________________________________________________
const char *ChnsTpcGeo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsTpcGeo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsTpcGeo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsTpcGeo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsTpcGeo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsTpcGeo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsTpcGeo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsTpcGeo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsTpcGeoPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsTpcGeoPar::Class_Name()
{
   return "ChnsTpcGeoPar";
}

//______________________________________________________________________________
const char *ChnsTpcGeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsTpcGeoPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsTpcGeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsTpcGeoPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsTpcGeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsTpcGeoPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsTpcGeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsTpcGeoPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsTpcPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsTpcPoint::Class_Name()
{
   return "ChnsTpcPoint";
}

//______________________________________________________________________________
const char *ChnsTpcPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsTpcPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsTpcPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsTpcPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsTpcPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsTpcPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsTpcPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsTpcPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void ChnsTpc::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsTpc.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairDetector::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, ChnsTpc::IsA());
   } else {
      R__c = R__b.WriteVersion(ChnsTpc::IsA(), kTRUE);
      FairDetector::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsTpc(void *p) {
      return  p ? new(p) ::ChnsTpc : new ::ChnsTpc;
   }
   static void *newArray_ChnsTpc(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsTpc[nElements] : new ::ChnsTpc[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsTpc(void *p) {
      delete ((::ChnsTpc*)p);
   }
   static void deleteArray_ChnsTpc(void *p) {
      delete [] ((::ChnsTpc*)p);
   }
   static void destruct_ChnsTpc(void *p) {
      typedef ::ChnsTpc current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ChnsTpc(TBuffer &buf, void *obj) {
      ((::ChnsTpc*)obj)->::ChnsTpc::Streamer(buf);
   }
} // end of namespace ROOT for class ::ChnsTpc

//______________________________________________________________________________
void ChnsTpcContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsTpcContFact.

   FairContFact::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsTpcContFact(void *p) {
      return  p ? new(p) ::ChnsTpcContFact : new ::ChnsTpcContFact;
   }
   static void *newArray_ChnsTpcContFact(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsTpcContFact[nElements] : new ::ChnsTpcContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsTpcContFact(void *p) {
      delete ((::ChnsTpcContFact*)p);
   }
   static void deleteArray_ChnsTpcContFact(void *p) {
      delete [] ((::ChnsTpcContFact*)p);
   }
   static void destruct_ChnsTpcContFact(void *p) {
      typedef ::ChnsTpcContFact current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ChnsTpcContFact(TBuffer &buf, void *obj) {
      ((::ChnsTpcContFact*)obj)->::ChnsTpcContFact::Streamer(buf);
   }
} // end of namespace ROOT for class ::ChnsTpcContFact

//______________________________________________________________________________
void ChnsTpcGeo::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsTpcGeo.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairGeoSet::Streamer(R__b);
      R__b.ReadStaticArray((char*)modName);
      R__b.ReadStaticArray((char*)eleName);
      R__b.CheckByteCount(R__s, R__c, ChnsTpcGeo::IsA());
   } else {
      R__c = R__b.WriteVersion(ChnsTpcGeo::IsA(), kTRUE);
      FairGeoSet::Streamer(R__b);
      R__b.WriteArray(modName, 20);
      R__b.WriteArray(eleName, 20);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsTpcGeo(void *p) {
      return  p ? new(p) ::ChnsTpcGeo : new ::ChnsTpcGeo;
   }
   static void *newArray_ChnsTpcGeo(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsTpcGeo[nElements] : new ::ChnsTpcGeo[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsTpcGeo(void *p) {
      delete ((::ChnsTpcGeo*)p);
   }
   static void deleteArray_ChnsTpcGeo(void *p) {
      delete [] ((::ChnsTpcGeo*)p);
   }
   static void destruct_ChnsTpcGeo(void *p) {
      typedef ::ChnsTpcGeo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ChnsTpcGeo(TBuffer &buf, void *obj) {
      ((::ChnsTpcGeo*)obj)->::ChnsTpcGeo::Streamer(buf);
   }
} // end of namespace ROOT for class ::ChnsTpcGeo

//______________________________________________________________________________
void ChnsTpcGeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsTpcGeoPar.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairParGenericSet::Streamer(R__b);
      R__b >> fGeoSensNodes;
      R__b >> fGeoPassNodes;
      R__b.CheckByteCount(R__s, R__c, ChnsTpcGeoPar::IsA());
   } else {
      R__c = R__b.WriteVersion(ChnsTpcGeoPar::IsA(), kTRUE);
      FairParGenericSet::Streamer(R__b);
      R__b << fGeoSensNodes;
      R__b << fGeoPassNodes;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsTpcGeoPar(void *p) {
      return  p ? new(p) ::ChnsTpcGeoPar : new ::ChnsTpcGeoPar;
   }
   static void *newArray_ChnsTpcGeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsTpcGeoPar[nElements] : new ::ChnsTpcGeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsTpcGeoPar(void *p) {
      delete ((::ChnsTpcGeoPar*)p);
   }
   static void deleteArray_ChnsTpcGeoPar(void *p) {
      delete [] ((::ChnsTpcGeoPar*)p);
   }
   static void destruct_ChnsTpcGeoPar(void *p) {
      typedef ::ChnsTpcGeoPar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ChnsTpcGeoPar(TBuffer &buf, void *obj) {
      ((::ChnsTpcGeoPar*)obj)->::ChnsTpcGeoPar::Streamer(buf);
   }
} // end of namespace ROOT for class ::ChnsTpcGeoPar

//______________________________________________________________________________
void ChnsTpcPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsTpcPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsTpcPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsTpcPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsTpcPoint(void *p) {
      return  p ? new(p) ::ChnsTpcPoint : new ::ChnsTpcPoint;
   }
   static void *newArray_ChnsTpcPoint(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsTpcPoint[nElements] : new ::ChnsTpcPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsTpcPoint(void *p) {
      delete ((::ChnsTpcPoint*)p);
   }
   static void deleteArray_ChnsTpcPoint(void *p) {
      delete [] ((::ChnsTpcPoint*)p);
   }
   static void destruct_ChnsTpcPoint(void *p) {
      typedef ::ChnsTpcPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsTpcPoint

namespace {
  void TriggerDictionaryInitialization_G__ChnsTpcDict_Impl() {
    static const char* headers[] = {
"ChnsTpc.h",
"ChnsTpcContFact.h",
"ChnsTpcGeo.h",
"ChnsTpcGeoPar.h",
"ChnsTpcPoint.h",
0
    };
    static const char* includePaths[] = {
"/home/eicc/FairRoot/build_18.4.2/include",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/ChnsData",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/tpc",
"/home/eicc/software/FairSoft/install/include/root",
"/home/eicc/software/FairSoft/install/include",
"/home/eicc/software/FairSoft/install/include/root",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/build/tpc/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__ChnsTpcDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$ChnsTpc.h")))  ChnsTpc;
class __attribute__((annotate(R"ATTRDUMP(Factory for all ChnsTpc parameter containers)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Factory for all ChnsTpc parameter containers)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Factory for all ChnsTpc parameter containers)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Factory for all ChnsTpc parameter containers)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$ChnsTpcContFact.h")))  ChnsTpcContFact;
class __attribute__((annotate("$clingAutoload$ChnsTpcGeo.h")))  ChnsTpcGeo;
class __attribute__((annotate("$clingAutoload$ChnsTpcGeoPar.h")))  ChnsTpcGeoPar;
class __attribute__((annotate("$clingAutoload$ChnsTpcPoint.h")))  ChnsTpcPoint;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__ChnsTpcDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "ChnsTpc.h"
#include "ChnsTpcContFact.h"
#include "ChnsTpcGeo.h"
#include "ChnsTpcGeoPar.h"
#include "ChnsTpcPoint.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"ChnsTpc", payloadCode, "@",
"ChnsTpcContFact", payloadCode, "@",
"ChnsTpcGeo", payloadCode, "@",
"ChnsTpcGeoPar", payloadCode, "@",
"ChnsTpcPoint", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__ChnsTpcDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__ChnsTpcDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__ChnsTpcDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__ChnsTpcDict() {
  TriggerDictionaryInitialization_G__ChnsTpcDict_Impl();
}
