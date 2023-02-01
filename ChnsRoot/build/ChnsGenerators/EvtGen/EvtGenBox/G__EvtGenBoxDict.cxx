// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdata2dIrwangdIgithubsdIHIAFmIetaFactorymISimulationsdIChnsRootdIbuilddIChnsGeneratorsdIEvtGendIEvtGenBoxdIG__EvtGenBoxDict
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
#include "ChnsEvtGenBox.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_ChnsEvtGenBox(void *p = 0);
   static void *newArray_ChnsEvtGenBox(Long_t size, void *p);
   static void delete_ChnsEvtGenBox(void *p);
   static void deleteArray_ChnsEvtGenBox(void *p);
   static void destruct_ChnsEvtGenBox(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsEvtGenBox*)
   {
      ::ChnsEvtGenBox *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsEvtGenBox >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsEvtGenBox", ::ChnsEvtGenBox::Class_Version(), "ChnsEvtGenBox.h", 30,
                  typeid(::ChnsEvtGenBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsEvtGenBox::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsEvtGenBox) );
      instance.SetNew(&new_ChnsEvtGenBox);
      instance.SetNewArray(&newArray_ChnsEvtGenBox);
      instance.SetDelete(&delete_ChnsEvtGenBox);
      instance.SetDeleteArray(&deleteArray_ChnsEvtGenBox);
      instance.SetDestructor(&destruct_ChnsEvtGenBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsEvtGenBox*)
   {
      return GenerateInitInstanceLocal((::ChnsEvtGenBox*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsEvtGenBox*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr ChnsEvtGenBox::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsEvtGenBox::Class_Name()
{
   return "ChnsEvtGenBox";
}

//______________________________________________________________________________
const char *ChnsEvtGenBox::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEvtGenBox*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsEvtGenBox::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEvtGenBox*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsEvtGenBox::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEvtGenBox*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsEvtGenBox::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEvtGenBox*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void ChnsEvtGenBox::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsEvtGenBox.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsEvtGenBox::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsEvtGenBox::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsEvtGenBox(void *p) {
      return  p ? new(p) ::ChnsEvtGenBox : new ::ChnsEvtGenBox;
   }
   static void *newArray_ChnsEvtGenBox(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsEvtGenBox[nElements] : new ::ChnsEvtGenBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsEvtGenBox(void *p) {
      delete ((::ChnsEvtGenBox*)p);
   }
   static void deleteArray_ChnsEvtGenBox(void *p) {
      delete [] ((::ChnsEvtGenBox*)p);
   }
   static void destruct_ChnsEvtGenBox(void *p) {
      typedef ::ChnsEvtGenBox current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsEvtGenBox

namespace {
  void TriggerDictionaryInitialization_G__EvtGenBoxDict_Impl() {
    static const char* headers[] = {
"ChnsEvtGenBox.h",
0
    };
    static const char* includePaths[] = {
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/ChnsGenerators/EvtGen/EvtGenBox",
"/home/eicc/software/FairSoft/install/include",
"/home/eicc/software/FairSoft/install/include/root",
"/home/eicc/software/FairSoft/install/include",
"/home/eicc/FairRoot/build_18.4.2/include",
"/home/eicc/software/FairSoft/install/include",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/ChnsGenerators/EvtGen/EvtGen/R02-00-00",
"/home/eicc/software/FairSoft/install/include/root",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/build/ChnsGenerators/EvtGen/EvtGenBox/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__EvtGenBoxDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$ChnsEvtGenBox.h")))  ChnsEvtGenBox;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__EvtGenBoxDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "ChnsEvtGenBox.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"ChnsEvtGenBox", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__EvtGenBoxDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__EvtGenBoxDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__EvtGenBoxDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__EvtGenBoxDict() {
  TriggerDictionaryInitialization_G__EvtGenBoxDict_Impl();
}
