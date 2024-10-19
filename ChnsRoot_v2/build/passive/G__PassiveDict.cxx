// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdata2dIrwangdIgithubsdIHIAFmIetaFactorymISimulationsdIChnsRoot_v2dIbuilddIpassivedIG__PassiveDict
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
#include "ChnsCave.h"
#include "ChnsPipe.h"
#include "ChnsGeoCave.h"
#include "ChnsMagnet.h"
#include "ChnsPassiveContFact.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_ChnsCave(void *p = 0);
   static void *newArray_ChnsCave(Long_t size, void *p);
   static void delete_ChnsCave(void *p);
   static void deleteArray_ChnsCave(void *p);
   static void destruct_ChnsCave(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsCave*)
   {
      ::ChnsCave *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsCave >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsCave", ::ChnsCave::Class_Version(), "ChnsCave.h", 21,
                  typeid(::ChnsCave), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsCave::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsCave) );
      instance.SetNew(&new_ChnsCave);
      instance.SetNewArray(&newArray_ChnsCave);
      instance.SetDelete(&delete_ChnsCave);
      instance.SetDeleteArray(&deleteArray_ChnsCave);
      instance.SetDestructor(&destruct_ChnsCave);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsCave*)
   {
      return GenerateInitInstanceLocal((::ChnsCave*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsCave*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsPipe(void *p = 0);
   static void *newArray_ChnsPipe(Long_t size, void *p);
   static void delete_ChnsPipe(void *p);
   static void deleteArray_ChnsPipe(void *p);
   static void destruct_ChnsPipe(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsPipe*)
   {
      ::ChnsPipe *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsPipe >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsPipe", ::ChnsPipe::Class_Version(), "ChnsPipe.h", 19,
                  typeid(::ChnsPipe), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsPipe::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsPipe) );
      instance.SetNew(&new_ChnsPipe);
      instance.SetNewArray(&newArray_ChnsPipe);
      instance.SetDelete(&delete_ChnsPipe);
      instance.SetDeleteArray(&deleteArray_ChnsPipe);
      instance.SetDestructor(&destruct_ChnsPipe);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsPipe*)
   {
      return GenerateInitInstanceLocal((::ChnsPipe*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsPipe*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsGeoCave(void *p = 0);
   static void *newArray_ChnsGeoCave(Long_t size, void *p);
   static void delete_ChnsGeoCave(void *p);
   static void deleteArray_ChnsGeoCave(void *p);
   static void destruct_ChnsGeoCave(void *p);
   static void streamer_ChnsGeoCave(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsGeoCave*)
   {
      ::ChnsGeoCave *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsGeoCave >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsGeoCave", ::ChnsGeoCave::Class_Version(), "ChnsGeoCave.h", 27,
                  typeid(::ChnsGeoCave), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsGeoCave::Dictionary, isa_proxy, 16,
                  sizeof(::ChnsGeoCave) );
      instance.SetNew(&new_ChnsGeoCave);
      instance.SetNewArray(&newArray_ChnsGeoCave);
      instance.SetDelete(&delete_ChnsGeoCave);
      instance.SetDeleteArray(&deleteArray_ChnsGeoCave);
      instance.SetDestructor(&destruct_ChnsGeoCave);
      instance.SetStreamerFunc(&streamer_ChnsGeoCave);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsGeoCave*)
   {
      return GenerateInitInstanceLocal((::ChnsGeoCave*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsGeoCave*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsMagnet(void *p = 0);
   static void *newArray_ChnsMagnet(Long_t size, void *p);
   static void delete_ChnsMagnet(void *p);
   static void deleteArray_ChnsMagnet(void *p);
   static void destruct_ChnsMagnet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsMagnet*)
   {
      ::ChnsMagnet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsMagnet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsMagnet", ::ChnsMagnet::Class_Version(), "ChnsMagnet.h", 22,
                  typeid(::ChnsMagnet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsMagnet::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsMagnet) );
      instance.SetNew(&new_ChnsMagnet);
      instance.SetNewArray(&newArray_ChnsMagnet);
      instance.SetDelete(&delete_ChnsMagnet);
      instance.SetDeleteArray(&deleteArray_ChnsMagnet);
      instance.SetDestructor(&destruct_ChnsMagnet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsMagnet*)
   {
      return GenerateInitInstanceLocal((::ChnsMagnet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsMagnet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsPassiveContFact(void *p = 0);
   static void *newArray_ChnsPassiveContFact(Long_t size, void *p);
   static void delete_ChnsPassiveContFact(void *p);
   static void deleteArray_ChnsPassiveContFact(void *p);
   static void destruct_ChnsPassiveContFact(void *p);
   static void streamer_ChnsPassiveContFact(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsPassiveContFact*)
   {
      ::ChnsPassiveContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsPassiveContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsPassiveContFact", ::ChnsPassiveContFact::Class_Version(), "ChnsPassiveContFact.h", 23,
                  typeid(::ChnsPassiveContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsPassiveContFact::Dictionary, isa_proxy, 16,
                  sizeof(::ChnsPassiveContFact) );
      instance.SetNew(&new_ChnsPassiveContFact);
      instance.SetNewArray(&newArray_ChnsPassiveContFact);
      instance.SetDelete(&delete_ChnsPassiveContFact);
      instance.SetDeleteArray(&deleteArray_ChnsPassiveContFact);
      instance.SetDestructor(&destruct_ChnsPassiveContFact);
      instance.SetStreamerFunc(&streamer_ChnsPassiveContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsPassiveContFact*)
   {
      return GenerateInitInstanceLocal((::ChnsPassiveContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsPassiveContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr ChnsCave::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsCave::Class_Name()
{
   return "ChnsCave";
}

//______________________________________________________________________________
const char *ChnsCave::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsCave*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsCave::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsCave*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsCave::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsCave*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsCave::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsCave*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsPipe::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsPipe::Class_Name()
{
   return "ChnsPipe";
}

//______________________________________________________________________________
const char *ChnsPipe::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsPipe*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsPipe::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsPipe*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsPipe::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsPipe*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsPipe::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsPipe*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsGeoCave::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsGeoCave::Class_Name()
{
   return "ChnsGeoCave";
}

//______________________________________________________________________________
const char *ChnsGeoCave::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsGeoCave*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsGeoCave::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsGeoCave*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsGeoCave::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsGeoCave*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsGeoCave::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsGeoCave*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsMagnet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsMagnet::Class_Name()
{
   return "ChnsMagnet";
}

//______________________________________________________________________________
const char *ChnsMagnet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsMagnet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsMagnet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsMagnet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsMagnet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsMagnet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsMagnet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsMagnet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsPassiveContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsPassiveContFact::Class_Name()
{
   return "ChnsPassiveContFact";
}

//______________________________________________________________________________
const char *ChnsPassiveContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsPassiveContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsPassiveContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsPassiveContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsPassiveContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsPassiveContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsPassiveContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsPassiveContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void ChnsCave::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsCave.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsCave::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsCave::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsCave(void *p) {
      return  p ? new(p) ::ChnsCave : new ::ChnsCave;
   }
   static void *newArray_ChnsCave(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsCave[nElements] : new ::ChnsCave[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsCave(void *p) {
      delete ((::ChnsCave*)p);
   }
   static void deleteArray_ChnsCave(void *p) {
      delete [] ((::ChnsCave*)p);
   }
   static void destruct_ChnsCave(void *p) {
      typedef ::ChnsCave current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsCave

//______________________________________________________________________________
void ChnsPipe::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsPipe.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsPipe::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsPipe::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsPipe(void *p) {
      return  p ? new(p) ::ChnsPipe : new ::ChnsPipe;
   }
   static void *newArray_ChnsPipe(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsPipe[nElements] : new ::ChnsPipe[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsPipe(void *p) {
      delete ((::ChnsPipe*)p);
   }
   static void deleteArray_ChnsPipe(void *p) {
      delete [] ((::ChnsPipe*)p);
   }
   static void destruct_ChnsPipe(void *p) {
      typedef ::ChnsPipe current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsPipe

//______________________________________________________________________________
void ChnsGeoCave::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsGeoCave.

   FairGeoSet::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsGeoCave(void *p) {
      return  p ? new(p) ::ChnsGeoCave : new ::ChnsGeoCave;
   }
   static void *newArray_ChnsGeoCave(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsGeoCave[nElements] : new ::ChnsGeoCave[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsGeoCave(void *p) {
      delete ((::ChnsGeoCave*)p);
   }
   static void deleteArray_ChnsGeoCave(void *p) {
      delete [] ((::ChnsGeoCave*)p);
   }
   static void destruct_ChnsGeoCave(void *p) {
      typedef ::ChnsGeoCave current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ChnsGeoCave(TBuffer &buf, void *obj) {
      ((::ChnsGeoCave*)obj)->::ChnsGeoCave::Streamer(buf);
   }
} // end of namespace ROOT for class ::ChnsGeoCave

//______________________________________________________________________________
void ChnsMagnet::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsMagnet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsMagnet::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsMagnet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsMagnet(void *p) {
      return  p ? new(p) ::ChnsMagnet : new ::ChnsMagnet;
   }
   static void *newArray_ChnsMagnet(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsMagnet[nElements] : new ::ChnsMagnet[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsMagnet(void *p) {
      delete ((::ChnsMagnet*)p);
   }
   static void deleteArray_ChnsMagnet(void *p) {
      delete [] ((::ChnsMagnet*)p);
   }
   static void destruct_ChnsMagnet(void *p) {
      typedef ::ChnsMagnet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsMagnet

//______________________________________________________________________________
void ChnsPassiveContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsPassiveContFact.

   FairContFact::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsPassiveContFact(void *p) {
      return  p ? new(p) ::ChnsPassiveContFact : new ::ChnsPassiveContFact;
   }
   static void *newArray_ChnsPassiveContFact(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsPassiveContFact[nElements] : new ::ChnsPassiveContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsPassiveContFact(void *p) {
      delete ((::ChnsPassiveContFact*)p);
   }
   static void deleteArray_ChnsPassiveContFact(void *p) {
      delete [] ((::ChnsPassiveContFact*)p);
   }
   static void destruct_ChnsPassiveContFact(void *p) {
      typedef ::ChnsPassiveContFact current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ChnsPassiveContFact(TBuffer &buf, void *obj) {
      ((::ChnsPassiveContFact*)obj)->::ChnsPassiveContFact::Streamer(buf);
   }
} // end of namespace ROOT for class ::ChnsPassiveContFact

namespace {
  void TriggerDictionaryInitialization_G__PassiveDict_Impl() {
    static const char* headers[] = {
"ChnsCave.h",
"ChnsPipe.h",
"ChnsGeoCave.h",
"ChnsMagnet.h",
"ChnsPassiveContFact.h",
0
    };
    static const char* includePaths[] = {
"/home/eicc/FairRoot/build_18.4.2/include",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/passive",
"/home/eicc/software/FairSoft/install/include/root",
"/home/eicc/software/FairSoft/install/include",
"/home/eicc/software/FairSoft/install/include/root",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/passive/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__PassiveDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$ChnsCave.h")))  ChnsCave;
class __attribute__((annotate(R"ATTRDUMP(ChnsPIPE)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(ChnsPIPE)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(ChnsPIPE)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(ChnsPIPE)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$ChnsPipe.h")))  ChnsPipe;
class __attribute__((annotate(R"ATTRDUMP(Class for the geometry of CAVE)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Class for the geometry of CAVE)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Class for the geometry of CAVE)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Class for the geometry of CAVE)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$ChnsGeoCave.h")))  ChnsGeoCave;
class __attribute__((annotate("$clingAutoload$ChnsMagnet.h")))  ChnsMagnet;
class __attribute__((annotate(R"ATTRDUMP(Factory for all Passive parameter containers)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Factory for all Passive parameter containers)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Factory for all Passive parameter containers)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Factory for all Passive parameter containers)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$ChnsPassiveContFact.h")))  ChnsPassiveContFact;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__PassiveDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "ChnsCave.h"
#include "ChnsPipe.h"
#include "ChnsGeoCave.h"
#include "ChnsMagnet.h"
#include "ChnsPassiveContFact.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"ChnsCave", payloadCode, "@",
"ChnsGeoCave", payloadCode, "@",
"ChnsMagnet", payloadCode, "@",
"ChnsPassiveContFact", payloadCode, "@",
"ChnsPipe", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__PassiveDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__PassiveDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__PassiveDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__PassiveDict() {
  TriggerDictionaryInitialization_G__PassiveDict_Impl();
}
