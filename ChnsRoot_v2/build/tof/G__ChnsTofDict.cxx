// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdata2dIrwangdIgithubsdIHIAFmIetaFactorymISimulationsdIChnsRoot_v2dIbuilddItofdIG__ChnsTofDict
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
#include "ChnsTof.h"
#include "ChnsTofContFact.h"
#include "ChnsTofGeo.h"
#include "ChnsTofGeoPar.h"
#include "ChnsTofPoint.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_ChnsTof(void *p = 0);
   static void *newArray_ChnsTof(Long_t size, void *p);
   static void delete_ChnsTof(void *p);
   static void deleteArray_ChnsTof(void *p);
   static void destruct_ChnsTof(void *p);
   static void streamer_ChnsTof(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsTof*)
   {
      ::ChnsTof *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsTof >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsTof", ::ChnsTof::Class_Version(), "ChnsTof.h", 20,
                  typeid(::ChnsTof), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsTof::Dictionary, isa_proxy, 16,
                  sizeof(::ChnsTof) );
      instance.SetNew(&new_ChnsTof);
      instance.SetNewArray(&newArray_ChnsTof);
      instance.SetDelete(&delete_ChnsTof);
      instance.SetDeleteArray(&deleteArray_ChnsTof);
      instance.SetDestructor(&destruct_ChnsTof);
      instance.SetStreamerFunc(&streamer_ChnsTof);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsTof*)
   {
      return GenerateInitInstanceLocal((::ChnsTof*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsTof*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsTofContFact(void *p = 0);
   static void *newArray_ChnsTofContFact(Long_t size, void *p);
   static void delete_ChnsTofContFact(void *p);
   static void deleteArray_ChnsTofContFact(void *p);
   static void destruct_ChnsTofContFact(void *p);
   static void streamer_ChnsTofContFact(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsTofContFact*)
   {
      ::ChnsTofContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsTofContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsTofContFact", ::ChnsTofContFact::Class_Version(), "ChnsTofContFact.h", 15,
                  typeid(::ChnsTofContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsTofContFact::Dictionary, isa_proxy, 16,
                  sizeof(::ChnsTofContFact) );
      instance.SetNew(&new_ChnsTofContFact);
      instance.SetNewArray(&newArray_ChnsTofContFact);
      instance.SetDelete(&delete_ChnsTofContFact);
      instance.SetDeleteArray(&deleteArray_ChnsTofContFact);
      instance.SetDestructor(&destruct_ChnsTofContFact);
      instance.SetStreamerFunc(&streamer_ChnsTofContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsTofContFact*)
   {
      return GenerateInitInstanceLocal((::ChnsTofContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsTofContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsTofGeo(void *p = 0);
   static void *newArray_ChnsTofGeo(Long_t size, void *p);
   static void delete_ChnsTofGeo(void *p);
   static void deleteArray_ChnsTofGeo(void *p);
   static void destruct_ChnsTofGeo(void *p);
   static void streamer_ChnsTofGeo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsTofGeo*)
   {
      ::ChnsTofGeo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsTofGeo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsTofGeo", ::ChnsTofGeo::Class_Version(), "ChnsTofGeo.h", 13,
                  typeid(::ChnsTofGeo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsTofGeo::Dictionary, isa_proxy, 16,
                  sizeof(::ChnsTofGeo) );
      instance.SetNew(&new_ChnsTofGeo);
      instance.SetNewArray(&newArray_ChnsTofGeo);
      instance.SetDelete(&delete_ChnsTofGeo);
      instance.SetDeleteArray(&deleteArray_ChnsTofGeo);
      instance.SetDestructor(&destruct_ChnsTofGeo);
      instance.SetStreamerFunc(&streamer_ChnsTofGeo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsTofGeo*)
   {
      return GenerateInitInstanceLocal((::ChnsTofGeo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsTofGeo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsTofGeoPar(void *p = 0);
   static void *newArray_ChnsTofGeoPar(Long_t size, void *p);
   static void delete_ChnsTofGeoPar(void *p);
   static void deleteArray_ChnsTofGeoPar(void *p);
   static void destruct_ChnsTofGeoPar(void *p);
   static void streamer_ChnsTofGeoPar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsTofGeoPar*)
   {
      ::ChnsTofGeoPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsTofGeoPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsTofGeoPar", ::ChnsTofGeoPar::Class_Version(), "ChnsTofGeoPar.h", 16,
                  typeid(::ChnsTofGeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsTofGeoPar::Dictionary, isa_proxy, 16,
                  sizeof(::ChnsTofGeoPar) );
      instance.SetNew(&new_ChnsTofGeoPar);
      instance.SetNewArray(&newArray_ChnsTofGeoPar);
      instance.SetDelete(&delete_ChnsTofGeoPar);
      instance.SetDeleteArray(&deleteArray_ChnsTofGeoPar);
      instance.SetDestructor(&destruct_ChnsTofGeoPar);
      instance.SetStreamerFunc(&streamer_ChnsTofGeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsTofGeoPar*)
   {
      return GenerateInitInstanceLocal((::ChnsTofGeoPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsTofGeoPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsTofPoint(void *p = 0);
   static void *newArray_ChnsTofPoint(Long_t size, void *p);
   static void delete_ChnsTofPoint(void *p);
   static void deleteArray_ChnsTofPoint(void *p);
   static void destruct_ChnsTofPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsTofPoint*)
   {
      ::ChnsTofPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsTofPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsTofPoint", ::ChnsTofPoint::Class_Version(), "ChnsTofPoint.h", 16,
                  typeid(::ChnsTofPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsTofPoint::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsTofPoint) );
      instance.SetNew(&new_ChnsTofPoint);
      instance.SetNewArray(&newArray_ChnsTofPoint);
      instance.SetDelete(&delete_ChnsTofPoint);
      instance.SetDeleteArray(&deleteArray_ChnsTofPoint);
      instance.SetDestructor(&destruct_ChnsTofPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsTofPoint*)
   {
      return GenerateInitInstanceLocal((::ChnsTofPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsTofPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr ChnsTof::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsTof::Class_Name()
{
   return "ChnsTof";
}

//______________________________________________________________________________
const char *ChnsTof::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsTof*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsTof::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsTof*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsTof::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsTof*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsTof::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsTof*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsTofContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsTofContFact::Class_Name()
{
   return "ChnsTofContFact";
}

//______________________________________________________________________________
const char *ChnsTofContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsTofContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsTofContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsTofContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsTofContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsTofContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsTofContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsTofContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsTofGeo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsTofGeo::Class_Name()
{
   return "ChnsTofGeo";
}

//______________________________________________________________________________
const char *ChnsTofGeo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsTofGeo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsTofGeo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsTofGeo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsTofGeo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsTofGeo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsTofGeo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsTofGeo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsTofGeoPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsTofGeoPar::Class_Name()
{
   return "ChnsTofGeoPar";
}

//______________________________________________________________________________
const char *ChnsTofGeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsTofGeoPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsTofGeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsTofGeoPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsTofGeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsTofGeoPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsTofGeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsTofGeoPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsTofPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsTofPoint::Class_Name()
{
   return "ChnsTofPoint";
}

//______________________________________________________________________________
const char *ChnsTofPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsTofPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsTofPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsTofPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsTofPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsTofPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsTofPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsTofPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void ChnsTof::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsTof.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairDetector::Streamer(R__b);
      {float R_Dummy; R__b >> R_Dummy; ELoss_all=Double32_t(R_Dummy);}
      {float R_Dummy; R__b >> R_Dummy; ELoss_all2=Double32_t(R_Dummy);}
      {float R_Dummy; R__b >> R_Dummy; energy1=Double32_t(R_Dummy);}
      R__b.CheckByteCount(R__s, R__c, ChnsTof::IsA());
   } else {
      R__c = R__b.WriteVersion(ChnsTof::IsA(), kTRUE);
      FairDetector::Streamer(R__b);
      R__b << float(ELoss_all);
      R__b << float(ELoss_all2);
      R__b << float(energy1);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsTof(void *p) {
      return  p ? new(p) ::ChnsTof : new ::ChnsTof;
   }
   static void *newArray_ChnsTof(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsTof[nElements] : new ::ChnsTof[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsTof(void *p) {
      delete ((::ChnsTof*)p);
   }
   static void deleteArray_ChnsTof(void *p) {
      delete [] ((::ChnsTof*)p);
   }
   static void destruct_ChnsTof(void *p) {
      typedef ::ChnsTof current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ChnsTof(TBuffer &buf, void *obj) {
      ((::ChnsTof*)obj)->::ChnsTof::Streamer(buf);
   }
} // end of namespace ROOT for class ::ChnsTof

//______________________________________________________________________________
void ChnsTofContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsTofContFact.

   FairContFact::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsTofContFact(void *p) {
      return  p ? new(p) ::ChnsTofContFact : new ::ChnsTofContFact;
   }
   static void *newArray_ChnsTofContFact(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsTofContFact[nElements] : new ::ChnsTofContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsTofContFact(void *p) {
      delete ((::ChnsTofContFact*)p);
   }
   static void deleteArray_ChnsTofContFact(void *p) {
      delete [] ((::ChnsTofContFact*)p);
   }
   static void destruct_ChnsTofContFact(void *p) {
      typedef ::ChnsTofContFact current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ChnsTofContFact(TBuffer &buf, void *obj) {
      ((::ChnsTofContFact*)obj)->::ChnsTofContFact::Streamer(buf);
   }
} // end of namespace ROOT for class ::ChnsTofContFact

//______________________________________________________________________________
void ChnsTofGeo::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsTofGeo.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairGeoSet::Streamer(R__b);
      R__b.ReadStaticArray((char*)modName);
      R__b.ReadStaticArray((char*)eleName);
      R__b.CheckByteCount(R__s, R__c, ChnsTofGeo::IsA());
   } else {
      R__c = R__b.WriteVersion(ChnsTofGeo::IsA(), kTRUE);
      FairGeoSet::Streamer(R__b);
      R__b.WriteArray(modName, 20);
      R__b.WriteArray(eleName, 20);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsTofGeo(void *p) {
      return  p ? new(p) ::ChnsTofGeo : new ::ChnsTofGeo;
   }
   static void *newArray_ChnsTofGeo(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsTofGeo[nElements] : new ::ChnsTofGeo[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsTofGeo(void *p) {
      delete ((::ChnsTofGeo*)p);
   }
   static void deleteArray_ChnsTofGeo(void *p) {
      delete [] ((::ChnsTofGeo*)p);
   }
   static void destruct_ChnsTofGeo(void *p) {
      typedef ::ChnsTofGeo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ChnsTofGeo(TBuffer &buf, void *obj) {
      ((::ChnsTofGeo*)obj)->::ChnsTofGeo::Streamer(buf);
   }
} // end of namespace ROOT for class ::ChnsTofGeo

//______________________________________________________________________________
void ChnsTofGeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsTofGeoPar.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairParGenericSet::Streamer(R__b);
      R__b >> fGeoSensNodes;
      R__b >> fGeoPassNodes;
      R__b.CheckByteCount(R__s, R__c, ChnsTofGeoPar::IsA());
   } else {
      R__c = R__b.WriteVersion(ChnsTofGeoPar::IsA(), kTRUE);
      FairParGenericSet::Streamer(R__b);
      R__b << fGeoSensNodes;
      R__b << fGeoPassNodes;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsTofGeoPar(void *p) {
      return  p ? new(p) ::ChnsTofGeoPar : new ::ChnsTofGeoPar;
   }
   static void *newArray_ChnsTofGeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsTofGeoPar[nElements] : new ::ChnsTofGeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsTofGeoPar(void *p) {
      delete ((::ChnsTofGeoPar*)p);
   }
   static void deleteArray_ChnsTofGeoPar(void *p) {
      delete [] ((::ChnsTofGeoPar*)p);
   }
   static void destruct_ChnsTofGeoPar(void *p) {
      typedef ::ChnsTofGeoPar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ChnsTofGeoPar(TBuffer &buf, void *obj) {
      ((::ChnsTofGeoPar*)obj)->::ChnsTofGeoPar::Streamer(buf);
   }
} // end of namespace ROOT for class ::ChnsTofGeoPar

//______________________________________________________________________________
void ChnsTofPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsTofPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsTofPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsTofPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsTofPoint(void *p) {
      return  p ? new(p) ::ChnsTofPoint : new ::ChnsTofPoint;
   }
   static void *newArray_ChnsTofPoint(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsTofPoint[nElements] : new ::ChnsTofPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsTofPoint(void *p) {
      delete ((::ChnsTofPoint*)p);
   }
   static void deleteArray_ChnsTofPoint(void *p) {
      delete [] ((::ChnsTofPoint*)p);
   }
   static void destruct_ChnsTofPoint(void *p) {
      typedef ::ChnsTofPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsTofPoint

namespace {
  void TriggerDictionaryInitialization_G__ChnsTofDict_Impl() {
    static const char* headers[] = {
"ChnsTof.h",
"ChnsTofContFact.h",
"ChnsTofGeo.h",
"ChnsTofGeoPar.h",
"ChnsTofPoint.h",
0
    };
    static const char* includePaths[] = {
"/home/eicc/FairRoot/build_18.4.2/include",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsData",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/tof",
"/home/eicc/software/FairSoft/install/include/root",
"/home/eicc/software/FairSoft/install/include",
"/home/eicc/software/FairSoft/install/include/root",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/tof/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__ChnsTofDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$ChnsTof.h")))  ChnsTof;
class __attribute__((annotate(R"ATTRDUMP(Factory for all ChnsTof parameter containers)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Factory for all ChnsTof parameter containers)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Factory for all ChnsTof parameter containers)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Factory for all ChnsTof parameter containers)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$ChnsTofContFact.h")))  ChnsTofContFact;
class __attribute__((annotate("$clingAutoload$ChnsTofGeo.h")))  ChnsTofGeo;
class __attribute__((annotate("$clingAutoload$ChnsTofGeoPar.h")))  ChnsTofGeoPar;
class __attribute__((annotate("$clingAutoload$ChnsTofPoint.h")))  ChnsTofPoint;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__ChnsTofDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "ChnsTof.h"
#include "ChnsTofContFact.h"
#include "ChnsTofGeo.h"
#include "ChnsTofGeoPar.h"
#include "ChnsTofPoint.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"ChnsTof", payloadCode, "@",
"ChnsTofContFact", payloadCode, "@",
"ChnsTofGeo", payloadCode, "@",
"ChnsTofGeoPar", payloadCode, "@",
"ChnsTofPoint", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__ChnsTofDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__ChnsTofDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__ChnsTofDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__ChnsTofDict() {
  TriggerDictionaryInitialization_G__ChnsTofDict_Impl();
}
