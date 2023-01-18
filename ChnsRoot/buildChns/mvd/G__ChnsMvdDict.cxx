// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIhexhdIsimulationdIChnsRootdIbuildChnsdImvddIG__ChnsMvdDict
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
#include "ChnsMvd.h"
#include "ChnsMvdContFact.h"
#include "ChnsMvdGeo.h"
#include "ChnsMvdGeoPar.h"
#include "ChnsMvdPoint.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_ChnsMvd(void *p = 0);
   static void *newArray_ChnsMvd(Long_t size, void *p);
   static void delete_ChnsMvd(void *p);
   static void deleteArray_ChnsMvd(void *p);
   static void destruct_ChnsMvd(void *p);
   static void streamer_ChnsMvd(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsMvd*)
   {
      ::ChnsMvd *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsMvd >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsMvd", ::ChnsMvd::Class_Version(), "ChnsMvd.h", 20,
                  typeid(::ChnsMvd), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsMvd::Dictionary, isa_proxy, 16,
                  sizeof(::ChnsMvd) );
      instance.SetNew(&new_ChnsMvd);
      instance.SetNewArray(&newArray_ChnsMvd);
      instance.SetDelete(&delete_ChnsMvd);
      instance.SetDeleteArray(&deleteArray_ChnsMvd);
      instance.SetDestructor(&destruct_ChnsMvd);
      instance.SetStreamerFunc(&streamer_ChnsMvd);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsMvd*)
   {
      return GenerateInitInstanceLocal((::ChnsMvd*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsMvd*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsMvdContFact(void *p = 0);
   static void *newArray_ChnsMvdContFact(Long_t size, void *p);
   static void delete_ChnsMvdContFact(void *p);
   static void deleteArray_ChnsMvdContFact(void *p);
   static void destruct_ChnsMvdContFact(void *p);
   static void streamer_ChnsMvdContFact(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsMvdContFact*)
   {
      ::ChnsMvdContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsMvdContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsMvdContFact", ::ChnsMvdContFact::Class_Version(), "ChnsMvdContFact.h", 15,
                  typeid(::ChnsMvdContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsMvdContFact::Dictionary, isa_proxy, 16,
                  sizeof(::ChnsMvdContFact) );
      instance.SetNew(&new_ChnsMvdContFact);
      instance.SetNewArray(&newArray_ChnsMvdContFact);
      instance.SetDelete(&delete_ChnsMvdContFact);
      instance.SetDeleteArray(&deleteArray_ChnsMvdContFact);
      instance.SetDestructor(&destruct_ChnsMvdContFact);
      instance.SetStreamerFunc(&streamer_ChnsMvdContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsMvdContFact*)
   {
      return GenerateInitInstanceLocal((::ChnsMvdContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsMvdContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsMvdGeo(void *p = 0);
   static void *newArray_ChnsMvdGeo(Long_t size, void *p);
   static void delete_ChnsMvdGeo(void *p);
   static void deleteArray_ChnsMvdGeo(void *p);
   static void destruct_ChnsMvdGeo(void *p);
   static void streamer_ChnsMvdGeo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsMvdGeo*)
   {
      ::ChnsMvdGeo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsMvdGeo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsMvdGeo", ::ChnsMvdGeo::Class_Version(), "ChnsMvdGeo.h", 13,
                  typeid(::ChnsMvdGeo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsMvdGeo::Dictionary, isa_proxy, 16,
                  sizeof(::ChnsMvdGeo) );
      instance.SetNew(&new_ChnsMvdGeo);
      instance.SetNewArray(&newArray_ChnsMvdGeo);
      instance.SetDelete(&delete_ChnsMvdGeo);
      instance.SetDeleteArray(&deleteArray_ChnsMvdGeo);
      instance.SetDestructor(&destruct_ChnsMvdGeo);
      instance.SetStreamerFunc(&streamer_ChnsMvdGeo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsMvdGeo*)
   {
      return GenerateInitInstanceLocal((::ChnsMvdGeo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsMvdGeo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsMvdGeoPar(void *p = 0);
   static void *newArray_ChnsMvdGeoPar(Long_t size, void *p);
   static void delete_ChnsMvdGeoPar(void *p);
   static void deleteArray_ChnsMvdGeoPar(void *p);
   static void destruct_ChnsMvdGeoPar(void *p);
   static void streamer_ChnsMvdGeoPar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsMvdGeoPar*)
   {
      ::ChnsMvdGeoPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsMvdGeoPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsMvdGeoPar", ::ChnsMvdGeoPar::Class_Version(), "ChnsMvdGeoPar.h", 16,
                  typeid(::ChnsMvdGeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsMvdGeoPar::Dictionary, isa_proxy, 16,
                  sizeof(::ChnsMvdGeoPar) );
      instance.SetNew(&new_ChnsMvdGeoPar);
      instance.SetNewArray(&newArray_ChnsMvdGeoPar);
      instance.SetDelete(&delete_ChnsMvdGeoPar);
      instance.SetDeleteArray(&deleteArray_ChnsMvdGeoPar);
      instance.SetDestructor(&destruct_ChnsMvdGeoPar);
      instance.SetStreamerFunc(&streamer_ChnsMvdGeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsMvdGeoPar*)
   {
      return GenerateInitInstanceLocal((::ChnsMvdGeoPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsMvdGeoPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsMvdPoint(void *p = 0);
   static void *newArray_ChnsMvdPoint(Long_t size, void *p);
   static void delete_ChnsMvdPoint(void *p);
   static void deleteArray_ChnsMvdPoint(void *p);
   static void destruct_ChnsMvdPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsMvdPoint*)
   {
      ::ChnsMvdPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsMvdPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsMvdPoint", ::ChnsMvdPoint::Class_Version(), "ChnsMvdPoint.h", 16,
                  typeid(::ChnsMvdPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsMvdPoint::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsMvdPoint) );
      instance.SetNew(&new_ChnsMvdPoint);
      instance.SetNewArray(&newArray_ChnsMvdPoint);
      instance.SetDelete(&delete_ChnsMvdPoint);
      instance.SetDeleteArray(&deleteArray_ChnsMvdPoint);
      instance.SetDestructor(&destruct_ChnsMvdPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsMvdPoint*)
   {
      return GenerateInitInstanceLocal((::ChnsMvdPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsMvdPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr ChnsMvd::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsMvd::Class_Name()
{
   return "ChnsMvd";
}

//______________________________________________________________________________
const char *ChnsMvd::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsMvd*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsMvd::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsMvd*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsMvd::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsMvd*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsMvd::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsMvd*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsMvdContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsMvdContFact::Class_Name()
{
   return "ChnsMvdContFact";
}

//______________________________________________________________________________
const char *ChnsMvdContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsMvdContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsMvdContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsMvdContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsMvdContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsMvdContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsMvdContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsMvdContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsMvdGeo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsMvdGeo::Class_Name()
{
   return "ChnsMvdGeo";
}

//______________________________________________________________________________
const char *ChnsMvdGeo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsMvdGeo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsMvdGeo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsMvdGeo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsMvdGeo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsMvdGeo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsMvdGeo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsMvdGeo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsMvdGeoPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsMvdGeoPar::Class_Name()
{
   return "ChnsMvdGeoPar";
}

//______________________________________________________________________________
const char *ChnsMvdGeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsMvdGeoPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsMvdGeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsMvdGeoPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsMvdGeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsMvdGeoPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsMvdGeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsMvdGeoPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsMvdPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsMvdPoint::Class_Name()
{
   return "ChnsMvdPoint";
}

//______________________________________________________________________________
const char *ChnsMvdPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsMvdPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsMvdPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsMvdPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsMvdPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsMvdPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsMvdPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsMvdPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void ChnsMvd::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsMvd.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairDetector::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, ChnsMvd::IsA());
   } else {
      R__c = R__b.WriteVersion(ChnsMvd::IsA(), kTRUE);
      FairDetector::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsMvd(void *p) {
      return  p ? new(p) ::ChnsMvd : new ::ChnsMvd;
   }
   static void *newArray_ChnsMvd(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsMvd[nElements] : new ::ChnsMvd[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsMvd(void *p) {
      delete ((::ChnsMvd*)p);
   }
   static void deleteArray_ChnsMvd(void *p) {
      delete [] ((::ChnsMvd*)p);
   }
   static void destruct_ChnsMvd(void *p) {
      typedef ::ChnsMvd current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ChnsMvd(TBuffer &buf, void *obj) {
      ((::ChnsMvd*)obj)->::ChnsMvd::Streamer(buf);
   }
} // end of namespace ROOT for class ::ChnsMvd

//______________________________________________________________________________
void ChnsMvdContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsMvdContFact.

   FairContFact::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsMvdContFact(void *p) {
      return  p ? new(p) ::ChnsMvdContFact : new ::ChnsMvdContFact;
   }
   static void *newArray_ChnsMvdContFact(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsMvdContFact[nElements] : new ::ChnsMvdContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsMvdContFact(void *p) {
      delete ((::ChnsMvdContFact*)p);
   }
   static void deleteArray_ChnsMvdContFact(void *p) {
      delete [] ((::ChnsMvdContFact*)p);
   }
   static void destruct_ChnsMvdContFact(void *p) {
      typedef ::ChnsMvdContFact current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ChnsMvdContFact(TBuffer &buf, void *obj) {
      ((::ChnsMvdContFact*)obj)->::ChnsMvdContFact::Streamer(buf);
   }
} // end of namespace ROOT for class ::ChnsMvdContFact

//______________________________________________________________________________
void ChnsMvdGeo::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsMvdGeo.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairGeoSet::Streamer(R__b);
      R__b.ReadStaticArray((char*)modName);
      R__b.ReadStaticArray((char*)eleName);
      R__b.CheckByteCount(R__s, R__c, ChnsMvdGeo::IsA());
   } else {
      R__c = R__b.WriteVersion(ChnsMvdGeo::IsA(), kTRUE);
      FairGeoSet::Streamer(R__b);
      R__b.WriteArray(modName, 20);
      R__b.WriteArray(eleName, 20);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsMvdGeo(void *p) {
      return  p ? new(p) ::ChnsMvdGeo : new ::ChnsMvdGeo;
   }
   static void *newArray_ChnsMvdGeo(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsMvdGeo[nElements] : new ::ChnsMvdGeo[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsMvdGeo(void *p) {
      delete ((::ChnsMvdGeo*)p);
   }
   static void deleteArray_ChnsMvdGeo(void *p) {
      delete [] ((::ChnsMvdGeo*)p);
   }
   static void destruct_ChnsMvdGeo(void *p) {
      typedef ::ChnsMvdGeo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ChnsMvdGeo(TBuffer &buf, void *obj) {
      ((::ChnsMvdGeo*)obj)->::ChnsMvdGeo::Streamer(buf);
   }
} // end of namespace ROOT for class ::ChnsMvdGeo

//______________________________________________________________________________
void ChnsMvdGeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsMvdGeoPar.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairParGenericSet::Streamer(R__b);
      R__b >> fGeoSensNodes;
      R__b >> fGeoPassNodes;
      R__b.CheckByteCount(R__s, R__c, ChnsMvdGeoPar::IsA());
   } else {
      R__c = R__b.WriteVersion(ChnsMvdGeoPar::IsA(), kTRUE);
      FairParGenericSet::Streamer(R__b);
      R__b << fGeoSensNodes;
      R__b << fGeoPassNodes;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsMvdGeoPar(void *p) {
      return  p ? new(p) ::ChnsMvdGeoPar : new ::ChnsMvdGeoPar;
   }
   static void *newArray_ChnsMvdGeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsMvdGeoPar[nElements] : new ::ChnsMvdGeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsMvdGeoPar(void *p) {
      delete ((::ChnsMvdGeoPar*)p);
   }
   static void deleteArray_ChnsMvdGeoPar(void *p) {
      delete [] ((::ChnsMvdGeoPar*)p);
   }
   static void destruct_ChnsMvdGeoPar(void *p) {
      typedef ::ChnsMvdGeoPar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ChnsMvdGeoPar(TBuffer &buf, void *obj) {
      ((::ChnsMvdGeoPar*)obj)->::ChnsMvdGeoPar::Streamer(buf);
   }
} // end of namespace ROOT for class ::ChnsMvdGeoPar

//______________________________________________________________________________
void ChnsMvdPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsMvdPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsMvdPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsMvdPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsMvdPoint(void *p) {
      return  p ? new(p) ::ChnsMvdPoint : new ::ChnsMvdPoint;
   }
   static void *newArray_ChnsMvdPoint(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsMvdPoint[nElements] : new ::ChnsMvdPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsMvdPoint(void *p) {
      delete ((::ChnsMvdPoint*)p);
   }
   static void deleteArray_ChnsMvdPoint(void *p) {
      delete [] ((::ChnsMvdPoint*)p);
   }
   static void destruct_ChnsMvdPoint(void *p) {
      typedef ::ChnsMvdPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsMvdPoint

namespace {
  void TriggerDictionaryInitialization_G__ChnsMvdDict_Impl() {
    static const char* headers[] = {
"ChnsMvd.h",
"ChnsMvdContFact.h",
"ChnsMvdGeo.h",
"ChnsMvdGeoPar.h",
"ChnsMvdPoint.h",
0
    };
    static const char* includePaths[] = {
"/home/eicc/FairRoot/build_18.4.2/include",
"/home/hexh/simulation/ChnsRoot/ChnsData",
"/home/hexh/simulation/ChnsRoot/mvd",
"/home/eicc/software/FairSoft/install/include/root",
"/home/eicc/software/FairSoft/install/include",
"/home/eicc/software/FairSoft/install/include/root",
"/home/hexh/simulation/ChnsRoot/buildChns/mvd/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__ChnsMvdDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$ChnsMvd.h")))  ChnsMvd;
class __attribute__((annotate(R"ATTRDUMP(Factory for all ChnsMvd parameter containers)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Factory for all ChnsMvd parameter containers)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Factory for all ChnsMvd parameter containers)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Factory for all ChnsMvd parameter containers)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$ChnsMvdContFact.h")))  ChnsMvdContFact;
class __attribute__((annotate("$clingAutoload$ChnsMvdGeo.h")))  ChnsMvdGeo;
class __attribute__((annotate("$clingAutoload$ChnsMvdGeoPar.h")))  ChnsMvdGeoPar;
class __attribute__((annotate("$clingAutoload$ChnsMvdPoint.h")))  ChnsMvdPoint;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__ChnsMvdDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "ChnsMvd.h"
#include "ChnsMvdContFact.h"
#include "ChnsMvdGeo.h"
#include "ChnsMvdGeoPar.h"
#include "ChnsMvdPoint.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"ChnsMvd", payloadCode, "@",
"ChnsMvdContFact", payloadCode, "@",
"ChnsMvdGeo", payloadCode, "@",
"ChnsMvdGeoPar", payloadCode, "@",
"ChnsMvdPoint", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__ChnsMvdDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__ChnsMvdDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__ChnsMvdDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__ChnsMvdDict() {
  TriggerDictionaryInitialization_G__ChnsMvdDict_Impl();
}
