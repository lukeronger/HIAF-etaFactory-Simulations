// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdata2dIrwangdIgithubsdIHIAFmIetaFactorymISimulationsdIChnsRoot_v2dIbuilddIChnsGeneratorsdIEvtGendIEvtGenDirectdIG__EvtGenDirectDict
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
#include "ChnsEvtGenDirect.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_ChnsEvtGenDirect(void *p = 0);
   static void *newArray_ChnsEvtGenDirect(Long_t size, void *p);
   static void delete_ChnsEvtGenDirect(void *p);
   static void deleteArray_ChnsEvtGenDirect(void *p);
   static void destruct_ChnsEvtGenDirect(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsEvtGenDirect*)
   {
      ::ChnsEvtGenDirect *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsEvtGenDirect >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsEvtGenDirect", ::ChnsEvtGenDirect::Class_Version(), "ChnsEvtGenDirect.h", 28,
                  typeid(::ChnsEvtGenDirect), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsEvtGenDirect::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsEvtGenDirect) );
      instance.SetNew(&new_ChnsEvtGenDirect);
      instance.SetNewArray(&newArray_ChnsEvtGenDirect);
      instance.SetDelete(&delete_ChnsEvtGenDirect);
      instance.SetDeleteArray(&deleteArray_ChnsEvtGenDirect);
      instance.SetDestructor(&destruct_ChnsEvtGenDirect);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsEvtGenDirect*)
   {
      return GenerateInitInstanceLocal((::ChnsEvtGenDirect*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsEvtGenDirect*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr ChnsEvtGenDirect::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsEvtGenDirect::Class_Name()
{
   return "ChnsEvtGenDirect";
}

//______________________________________________________________________________
const char *ChnsEvtGenDirect::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEvtGenDirect*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsEvtGenDirect::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEvtGenDirect*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsEvtGenDirect::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEvtGenDirect*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsEvtGenDirect::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEvtGenDirect*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void ChnsEvtGenDirect::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsEvtGenDirect.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsEvtGenDirect::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsEvtGenDirect::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsEvtGenDirect(void *p) {
      return  p ? new(p) ::ChnsEvtGenDirect : new ::ChnsEvtGenDirect;
   }
   static void *newArray_ChnsEvtGenDirect(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsEvtGenDirect[nElements] : new ::ChnsEvtGenDirect[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsEvtGenDirect(void *p) {
      delete ((::ChnsEvtGenDirect*)p);
   }
   static void deleteArray_ChnsEvtGenDirect(void *p) {
      delete [] ((::ChnsEvtGenDirect*)p);
   }
   static void destruct_ChnsEvtGenDirect(void *p) {
      typedef ::ChnsEvtGenDirect current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsEvtGenDirect

namespace {
  void TriggerDictionaryInitialization_G__EvtGenDirectDict_Impl() {
    static const char* headers[] = {
"ChnsEvtGenDirect.h",
0
    };
    static const char* includePaths[] = {
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsGenerators/EvtGen/EvtGenDirect",
"/home/eicc/software/FairSoft/install/include",
"/home/eicc/software/FairSoft/install/include/root",
"/home/eicc/software/FairSoft/install/include",
"/home/eicc/FairRoot/build_18.4.2/include",
"/home/eicc/software/FairSoft/install/include",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsGenerators/EvtGen/EvtGen/R02-00-00",
"/home/eicc/software/FairSoft/install/include/root",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/ChnsGenerators/EvtGen/EvtGenDirect/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__EvtGenDirectDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$ChnsEvtGenDirect.h")))  ChnsEvtGenDirect;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__EvtGenDirectDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "ChnsEvtGenDirect.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"ChnsEvtGenDirect", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__EvtGenDirectDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__EvtGenDirectDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__EvtGenDirectDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__EvtGenDirectDict() {
  TriggerDictionaryInitialization_G__EvtGenDirectDict_Impl();
}
