// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdata2dIrwangdIgithubsdIHIAFmIetaFactorymISimulationsdIChnsRootdIbuilddIfielddIG__FieldDict
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
#include "ChnsConstField.h"
#include "ChnsFieldMap.h"
#include "ChnsFieldMapData.h"
#include "ChnsFieldCreator.h"
#include "ChnsFieldPar.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_ChnsConstField(void *p = 0);
   static void *newArray_ChnsConstField(Long_t size, void *p);
   static void delete_ChnsConstField(void *p);
   static void deleteArray_ChnsConstField(void *p);
   static void destruct_ChnsConstField(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsConstField*)
   {
      ::ChnsConstField *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsConstField >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsConstField", ::ChnsConstField::Class_Version(), "ChnsConstField.h", 29,
                  typeid(::ChnsConstField), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsConstField::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsConstField) );
      instance.SetNew(&new_ChnsConstField);
      instance.SetNewArray(&newArray_ChnsConstField);
      instance.SetDelete(&delete_ChnsConstField);
      instance.SetDeleteArray(&deleteArray_ChnsConstField);
      instance.SetDestructor(&destruct_ChnsConstField);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsConstField*)
   {
      return GenerateInitInstanceLocal((::ChnsConstField*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsConstField*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsFieldMap(void *p = 0);
   static void *newArray_ChnsFieldMap(Long_t size, void *p);
   static void delete_ChnsFieldMap(void *p);
   static void deleteArray_ChnsFieldMap(void *p);
   static void destruct_ChnsFieldMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFieldMap*)
   {
      ::ChnsFieldMap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsFieldMap >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFieldMap", ::ChnsFieldMap::Class_Version(), "ChnsFieldMap.h", 23,
                  typeid(::ChnsFieldMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsFieldMap::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFieldMap) );
      instance.SetNew(&new_ChnsFieldMap);
      instance.SetNewArray(&newArray_ChnsFieldMap);
      instance.SetDelete(&delete_ChnsFieldMap);
      instance.SetDeleteArray(&deleteArray_ChnsFieldMap);
      instance.SetDestructor(&destruct_ChnsFieldMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFieldMap*)
   {
      return GenerateInitInstanceLocal((::ChnsFieldMap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFieldMap*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsFieldMapData(void *p = 0);
   static void *newArray_ChnsFieldMapData(Long_t size, void *p);
   static void delete_ChnsFieldMapData(void *p);
   static void deleteArray_ChnsFieldMapData(void *p);
   static void destruct_ChnsFieldMapData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFieldMapData*)
   {
      ::ChnsFieldMapData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsFieldMapData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFieldMapData", ::ChnsFieldMapData::Class_Version(), "ChnsFieldMapData.h", 32,
                  typeid(::ChnsFieldMapData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsFieldMapData::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFieldMapData) );
      instance.SetNew(&new_ChnsFieldMapData);
      instance.SetNewArray(&newArray_ChnsFieldMapData);
      instance.SetDelete(&delete_ChnsFieldMapData);
      instance.SetDeleteArray(&deleteArray_ChnsFieldMapData);
      instance.SetDestructor(&destruct_ChnsFieldMapData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFieldMapData*)
   {
      return GenerateInitInstanceLocal((::ChnsFieldMapData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFieldMapData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsFieldCreator(void *p = 0);
   static void *newArray_ChnsFieldCreator(Long_t size, void *p);
   static void delete_ChnsFieldCreator(void *p);
   static void deleteArray_ChnsFieldCreator(void *p);
   static void destruct_ChnsFieldCreator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFieldCreator*)
   {
      ::ChnsFieldCreator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsFieldCreator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFieldCreator", ::ChnsFieldCreator::Class_Version(), "ChnsFieldCreator.h", 23,
                  typeid(::ChnsFieldCreator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsFieldCreator::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFieldCreator) );
      instance.SetNew(&new_ChnsFieldCreator);
      instance.SetNewArray(&newArray_ChnsFieldCreator);
      instance.SetDelete(&delete_ChnsFieldCreator);
      instance.SetDeleteArray(&deleteArray_ChnsFieldCreator);
      instance.SetDestructor(&destruct_ChnsFieldCreator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFieldCreator*)
   {
      return GenerateInitInstanceLocal((::ChnsFieldCreator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFieldCreator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsFieldPar(void *p = 0);
   static void *newArray_ChnsFieldPar(Long_t size, void *p);
   static void delete_ChnsFieldPar(void *p);
   static void deleteArray_ChnsFieldPar(void *p);
   static void destruct_ChnsFieldPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFieldPar*)
   {
      ::ChnsFieldPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsFieldPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFieldPar", ::ChnsFieldPar::Class_Version(), "ChnsFieldPar.h", 24,
                  typeid(::ChnsFieldPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsFieldPar::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFieldPar) );
      instance.SetNew(&new_ChnsFieldPar);
      instance.SetNewArray(&newArray_ChnsFieldPar);
      instance.SetDelete(&delete_ChnsFieldPar);
      instance.SetDeleteArray(&deleteArray_ChnsFieldPar);
      instance.SetDestructor(&destruct_ChnsFieldPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFieldPar*)
   {
      return GenerateInitInstanceLocal((::ChnsFieldPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFieldPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr ChnsConstField::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsConstField::Class_Name()
{
   return "ChnsConstField";
}

//______________________________________________________________________________
const char *ChnsConstField::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsConstField*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsConstField::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsConstField*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsConstField::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsConstField*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsConstField::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsConstField*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsFieldMap::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsFieldMap::Class_Name()
{
   return "ChnsFieldMap";
}

//______________________________________________________________________________
const char *ChnsFieldMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsFieldMap*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsFieldMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsFieldMap*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsFieldMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsFieldMap*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsFieldMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsFieldMap*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsFieldMapData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsFieldMapData::Class_Name()
{
   return "ChnsFieldMapData";
}

//______________________________________________________________________________
const char *ChnsFieldMapData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsFieldMapData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsFieldMapData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsFieldMapData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsFieldMapData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsFieldMapData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsFieldMapData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsFieldMapData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsFieldCreator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsFieldCreator::Class_Name()
{
   return "ChnsFieldCreator";
}

//______________________________________________________________________________
const char *ChnsFieldCreator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsFieldCreator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsFieldCreator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsFieldCreator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsFieldCreator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsFieldCreator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsFieldCreator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsFieldCreator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsFieldPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsFieldPar::Class_Name()
{
   return "ChnsFieldPar";
}

//______________________________________________________________________________
const char *ChnsFieldPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsFieldPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsFieldPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsFieldPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsFieldPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsFieldPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsFieldPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsFieldPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void ChnsConstField::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsConstField.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsConstField::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsConstField::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsConstField(void *p) {
      return  p ? new(p) ::ChnsConstField : new ::ChnsConstField;
   }
   static void *newArray_ChnsConstField(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsConstField[nElements] : new ::ChnsConstField[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsConstField(void *p) {
      delete ((::ChnsConstField*)p);
   }
   static void deleteArray_ChnsConstField(void *p) {
      delete [] ((::ChnsConstField*)p);
   }
   static void destruct_ChnsConstField(void *p) {
      typedef ::ChnsConstField current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsConstField

//______________________________________________________________________________
void ChnsFieldMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsFieldMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsFieldMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsFieldMap::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFieldMap(void *p) {
      return  p ? new(p) ::ChnsFieldMap : new ::ChnsFieldMap;
   }
   static void *newArray_ChnsFieldMap(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFieldMap[nElements] : new ::ChnsFieldMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFieldMap(void *p) {
      delete ((::ChnsFieldMap*)p);
   }
   static void deleteArray_ChnsFieldMap(void *p) {
      delete [] ((::ChnsFieldMap*)p);
   }
   static void destruct_ChnsFieldMap(void *p) {
      typedef ::ChnsFieldMap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFieldMap

//______________________________________________________________________________
void ChnsFieldMapData::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsFieldMapData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsFieldMapData::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsFieldMapData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFieldMapData(void *p) {
      return  p ? new(p) ::ChnsFieldMapData : new ::ChnsFieldMapData;
   }
   static void *newArray_ChnsFieldMapData(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFieldMapData[nElements] : new ::ChnsFieldMapData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFieldMapData(void *p) {
      delete ((::ChnsFieldMapData*)p);
   }
   static void deleteArray_ChnsFieldMapData(void *p) {
      delete [] ((::ChnsFieldMapData*)p);
   }
   static void destruct_ChnsFieldMapData(void *p) {
      typedef ::ChnsFieldMapData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFieldMapData

//______________________________________________________________________________
void ChnsFieldCreator::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsFieldCreator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsFieldCreator::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsFieldCreator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFieldCreator(void *p) {
      return  p ? new(p) ::ChnsFieldCreator : new ::ChnsFieldCreator;
   }
   static void *newArray_ChnsFieldCreator(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFieldCreator[nElements] : new ::ChnsFieldCreator[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFieldCreator(void *p) {
      delete ((::ChnsFieldCreator*)p);
   }
   static void deleteArray_ChnsFieldCreator(void *p) {
      delete [] ((::ChnsFieldCreator*)p);
   }
   static void destruct_ChnsFieldCreator(void *p) {
      typedef ::ChnsFieldCreator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFieldCreator

//______________________________________________________________________________
void ChnsFieldPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsFieldPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsFieldPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsFieldPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFieldPar(void *p) {
      return  p ? new(p) ::ChnsFieldPar : new ::ChnsFieldPar;
   }
   static void *newArray_ChnsFieldPar(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFieldPar[nElements] : new ::ChnsFieldPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFieldPar(void *p) {
      delete ((::ChnsFieldPar*)p);
   }
   static void deleteArray_ChnsFieldPar(void *p) {
      delete [] ((::ChnsFieldPar*)p);
   }
   static void destruct_ChnsFieldPar(void *p) {
      typedef ::ChnsFieldPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFieldPar

namespace {
  void TriggerDictionaryInitialization_G__FieldDict_Impl() {
    static const char* headers[] = {
"ChnsConstField.h",
"ChnsFieldMap.h",
"ChnsFieldMapData.h",
"ChnsFieldCreator.h",
"ChnsFieldPar.h",
0
    };
    static const char* includePaths[] = {
"/home/eicc/FairRoot/build_18.4.2/include",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/field",
"/home/eicc/software/FairSoft/install/include/root",
"/home/eicc/software/FairSoft/install/include",
"/home/eicc/software/FairSoft/install/include/root",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/build/field/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__FieldDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$ChnsConstField.h")))  ChnsConstField;
class __attribute__((annotate("$clingAutoload$ChnsFieldMap.h")))  ChnsFieldMap;
class __attribute__((annotate("$clingAutoload$ChnsFieldMapData.h")))  ChnsFieldMapData;
class __attribute__((annotate("$clingAutoload$ChnsFieldCreator.h")))  ChnsFieldCreator;
class __attribute__((annotate("$clingAutoload$ChnsFieldPar.h")))  ChnsFieldPar;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__FieldDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "ChnsConstField.h"
#include "ChnsFieldMap.h"
#include "ChnsFieldMapData.h"
#include "ChnsFieldCreator.h"
#include "ChnsFieldPar.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"ChnsConstField", payloadCode, "@",
"ChnsFieldCreator", payloadCode, "@",
"ChnsFieldMap", payloadCode, "@",
"ChnsFieldMapData", payloadCode, "@",
"ChnsFieldPar", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__FieldDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__FieldDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__FieldDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__FieldDict() {
  TriggerDictionaryInitialization_G__FieldDict_Impl();
}
