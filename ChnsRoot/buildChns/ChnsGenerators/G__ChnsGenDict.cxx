// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIhexhdIsimulationdIChnsRootdIbuildChnsdIChnsGeneratorsdIG__ChnsGenDict
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
#include "Pythia6Generator.h"
#include "ChnsEvtGenGenerator.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_Pythia6Generator(void *p = 0);
   static void *newArray_Pythia6Generator(Long_t size, void *p);
   static void delete_Pythia6Generator(void *p);
   static void deleteArray_Pythia6Generator(void *p);
   static void destruct_Pythia6Generator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Pythia6Generator*)
   {
      ::Pythia6Generator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Pythia6Generator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Pythia6Generator", ::Pythia6Generator::Class_Version(), "Pythia6Generator.h", 83,
                  typeid(::Pythia6Generator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Pythia6Generator::Dictionary, isa_proxy, 4,
                  sizeof(::Pythia6Generator) );
      instance.SetNew(&new_Pythia6Generator);
      instance.SetNewArray(&newArray_Pythia6Generator);
      instance.SetDelete(&delete_Pythia6Generator);
      instance.SetDeleteArray(&deleteArray_Pythia6Generator);
      instance.SetDestructor(&destruct_Pythia6Generator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Pythia6Generator*)
   {
      return GenerateInitInstanceLocal((::Pythia6Generator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Pythia6Generator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsEvtGenGenerator(void *p = 0);
   static void *newArray_ChnsEvtGenGenerator(Long_t size, void *p);
   static void delete_ChnsEvtGenGenerator(void *p);
   static void deleteArray_ChnsEvtGenGenerator(void *p);
   static void destruct_ChnsEvtGenGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsEvtGenGenerator*)
   {
      ::ChnsEvtGenGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsEvtGenGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsEvtGenGenerator", ::ChnsEvtGenGenerator::Class_Version(), "ChnsEvtGenGenerator.h", 32,
                  typeid(::ChnsEvtGenGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsEvtGenGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsEvtGenGenerator) );
      instance.SetNew(&new_ChnsEvtGenGenerator);
      instance.SetNewArray(&newArray_ChnsEvtGenGenerator);
      instance.SetDelete(&delete_ChnsEvtGenGenerator);
      instance.SetDeleteArray(&deleteArray_ChnsEvtGenGenerator);
      instance.SetDestructor(&destruct_ChnsEvtGenGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsEvtGenGenerator*)
   {
      return GenerateInitInstanceLocal((::ChnsEvtGenGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsEvtGenGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr Pythia6Generator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Pythia6Generator::Class_Name()
{
   return "Pythia6Generator";
}

//______________________________________________________________________________
const char *Pythia6Generator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Pythia6Generator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Pythia6Generator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Pythia6Generator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Pythia6Generator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Pythia6Generator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Pythia6Generator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Pythia6Generator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsEvtGenGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsEvtGenGenerator::Class_Name()
{
   return "ChnsEvtGenGenerator";
}

//______________________________________________________________________________
const char *ChnsEvtGenGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEvtGenGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsEvtGenGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEvtGenGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsEvtGenGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEvtGenGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsEvtGenGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEvtGenGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void Pythia6Generator::Streamer(TBuffer &R__b)
{
   // Stream an object of class Pythia6Generator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Pythia6Generator::Class(),this);
   } else {
      R__b.WriteClassBuffer(Pythia6Generator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Pythia6Generator(void *p) {
      return  p ? new(p) ::Pythia6Generator : new ::Pythia6Generator;
   }
   static void *newArray_Pythia6Generator(Long_t nElements, void *p) {
      return p ? new(p) ::Pythia6Generator[nElements] : new ::Pythia6Generator[nElements];
   }
   // Wrapper around operator delete
   static void delete_Pythia6Generator(void *p) {
      delete ((::Pythia6Generator*)p);
   }
   static void deleteArray_Pythia6Generator(void *p) {
      delete [] ((::Pythia6Generator*)p);
   }
   static void destruct_Pythia6Generator(void *p) {
      typedef ::Pythia6Generator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Pythia6Generator

//______________________________________________________________________________
void ChnsEvtGenGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsEvtGenGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsEvtGenGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsEvtGenGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsEvtGenGenerator(void *p) {
      return  p ? new(p) ::ChnsEvtGenGenerator : new ::ChnsEvtGenGenerator;
   }
   static void *newArray_ChnsEvtGenGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsEvtGenGenerator[nElements] : new ::ChnsEvtGenGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsEvtGenGenerator(void *p) {
      delete ((::ChnsEvtGenGenerator*)p);
   }
   static void deleteArray_ChnsEvtGenGenerator(void *p) {
      delete [] ((::ChnsEvtGenGenerator*)p);
   }
   static void destruct_ChnsEvtGenGenerator(void *p) {
      typedef ::ChnsEvtGenGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsEvtGenGenerator

namespace {
  void TriggerDictionaryInitialization_G__ChnsGenDict_Impl() {
    static const char* headers[] = {
"Pythia6Generator.h",
"ChnsEvtGenGenerator.h",
0
    };
    static const char* includePaths[] = {
"/home/eicc/software/FairSoft/install/include",
"/home/eicc/software/FairSoft/install/include",
"/home/eicc/FairRoot/build_18.4.2/include",
"/home/hexh/simulation/ChnsRoot/ChnsGenerators",
"/home/hexh/simulation/ChnsRoot/generators",
"/home/eicc/software/FairSoft/install/include/root",
"/home/eicc/software/FairSoft/install/include",
"/home/eicc/software/FairSoft/install/include/root",
"/home/hexh/simulation/ChnsRoot/buildChns/ChnsGenerators/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__ChnsGenDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$Pythia6Generator.h")))  Pythia6Generator;
class __attribute__((annotate("$clingAutoload$ChnsEvtGenGenerator.h")))  ChnsEvtGenGenerator;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__ChnsGenDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "Pythia6Generator.h"
#include "ChnsEvtGenGenerator.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"ChnsEvtGenGenerator", payloadCode, "@",
"Pythia6Generator", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__ChnsGenDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__ChnsGenDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__ChnsGenDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__ChnsGenDict() {
  TriggerDictionaryInitialization_G__ChnsGenDict_Impl();
}
