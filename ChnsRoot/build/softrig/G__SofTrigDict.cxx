// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdata2dIrwangdIgithubsdIHIAFmIetaFactorymISimulationsdIChnsRootdIbuilddIsoftrigdIG__SofTrigDict
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
#include "ChnsSoftTriggerTask.h"
#include "ChnsSoftTriggerLine.h"
#include "ChnsOnlineFilterInfo.h"
#include "ChnsAnaWithTrigger.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_ChnsSoftTriggerTask(void *p);
   static void deleteArray_ChnsSoftTriggerTask(void *p);
   static void destruct_ChnsSoftTriggerTask(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsSoftTriggerTask*)
   {
      ::ChnsSoftTriggerTask *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsSoftTriggerTask >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsSoftTriggerTask", ::ChnsSoftTriggerTask::Class_Version(), "ChnsSoftTriggerTask.h", 32,
                  typeid(::ChnsSoftTriggerTask), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsSoftTriggerTask::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsSoftTriggerTask) );
      instance.SetDelete(&delete_ChnsSoftTriggerTask);
      instance.SetDeleteArray(&deleteArray_ChnsSoftTriggerTask);
      instance.SetDestructor(&destruct_ChnsSoftTriggerTask);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsSoftTriggerTask*)
   {
      return GenerateInitInstanceLocal((::ChnsSoftTriggerTask*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsSoftTriggerTask*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsSoftTriggerLine_Dictionary();
   static void ChnsSoftTriggerLine_TClassManip(TClass*);
   static void *new_ChnsSoftTriggerLine(void *p = 0);
   static void *newArray_ChnsSoftTriggerLine(Long_t size, void *p);
   static void delete_ChnsSoftTriggerLine(void *p);
   static void deleteArray_ChnsSoftTriggerLine(void *p);
   static void destruct_ChnsSoftTriggerLine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsSoftTriggerLine*)
   {
      ::ChnsSoftTriggerLine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsSoftTriggerLine));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsSoftTriggerLine", "ChnsSoftTriggerLine.h", 19,
                  typeid(::ChnsSoftTriggerLine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsSoftTriggerLine_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsSoftTriggerLine) );
      instance.SetNew(&new_ChnsSoftTriggerLine);
      instance.SetNewArray(&newArray_ChnsSoftTriggerLine);
      instance.SetDelete(&delete_ChnsSoftTriggerLine);
      instance.SetDeleteArray(&deleteArray_ChnsSoftTriggerLine);
      instance.SetDestructor(&destruct_ChnsSoftTriggerLine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsSoftTriggerLine*)
   {
      return GenerateInitInstanceLocal((::ChnsSoftTriggerLine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsSoftTriggerLine*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsSoftTriggerLine_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsSoftTriggerLine*)0x0)->GetClass();
      ChnsSoftTriggerLine_TClassManip(theClass);
   return theClass;
   }

   static void ChnsSoftTriggerLine_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsOnlineFilterInfo(void *p = 0);
   static void *newArray_ChnsOnlineFilterInfo(Long_t size, void *p);
   static void delete_ChnsOnlineFilterInfo(void *p);
   static void deleteArray_ChnsOnlineFilterInfo(void *p);
   static void destruct_ChnsOnlineFilterInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsOnlineFilterInfo*)
   {
      ::ChnsOnlineFilterInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsOnlineFilterInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsOnlineFilterInfo", ::ChnsOnlineFilterInfo::Class_Version(), "ChnsOnlineFilterInfo.h", 20,
                  typeid(::ChnsOnlineFilterInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsOnlineFilterInfo::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsOnlineFilterInfo) );
      instance.SetNew(&new_ChnsOnlineFilterInfo);
      instance.SetNewArray(&newArray_ChnsOnlineFilterInfo);
      instance.SetDelete(&delete_ChnsOnlineFilterInfo);
      instance.SetDeleteArray(&deleteArray_ChnsOnlineFilterInfo);
      instance.SetDestructor(&destruct_ChnsOnlineFilterInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsOnlineFilterInfo*)
   {
      return GenerateInitInstanceLocal((::ChnsOnlineFilterInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsOnlineFilterInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_ChnsAnaWithTrigger(void *p);
   static void deleteArray_ChnsAnaWithTrigger(void *p);
   static void destruct_ChnsAnaWithTrigger(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsAnaWithTrigger*)
   {
      ::ChnsAnaWithTrigger *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsAnaWithTrigger >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsAnaWithTrigger", ::ChnsAnaWithTrigger::Class_Version(), "ChnsAnaWithTrigger.h", 25,
                  typeid(::ChnsAnaWithTrigger), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsAnaWithTrigger::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsAnaWithTrigger) );
      instance.SetDelete(&delete_ChnsAnaWithTrigger);
      instance.SetDeleteArray(&deleteArray_ChnsAnaWithTrigger);
      instance.SetDestructor(&destruct_ChnsAnaWithTrigger);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsAnaWithTrigger*)
   {
      return GenerateInitInstanceLocal((::ChnsAnaWithTrigger*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsAnaWithTrigger*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr ChnsSoftTriggerTask::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsSoftTriggerTask::Class_Name()
{
   return "ChnsSoftTriggerTask";
}

//______________________________________________________________________________
const char *ChnsSoftTriggerTask::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsSoftTriggerTask*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsSoftTriggerTask::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsSoftTriggerTask*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsSoftTriggerTask::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsSoftTriggerTask*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsSoftTriggerTask::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsSoftTriggerTask*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsOnlineFilterInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsOnlineFilterInfo::Class_Name()
{
   return "ChnsOnlineFilterInfo";
}

//______________________________________________________________________________
const char *ChnsOnlineFilterInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsOnlineFilterInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsOnlineFilterInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsOnlineFilterInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsOnlineFilterInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsOnlineFilterInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsOnlineFilterInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsOnlineFilterInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsAnaWithTrigger::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsAnaWithTrigger::Class_Name()
{
   return "ChnsAnaWithTrigger";
}

//______________________________________________________________________________
const char *ChnsAnaWithTrigger::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnaWithTrigger*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsAnaWithTrigger::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnaWithTrigger*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsAnaWithTrigger::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnaWithTrigger*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsAnaWithTrigger::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnaWithTrigger*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void ChnsSoftTriggerTask::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsSoftTriggerTask.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsSoftTriggerTask::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsSoftTriggerTask::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ChnsSoftTriggerTask(void *p) {
      delete ((::ChnsSoftTriggerTask*)p);
   }
   static void deleteArray_ChnsSoftTriggerTask(void *p) {
      delete [] ((::ChnsSoftTriggerTask*)p);
   }
   static void destruct_ChnsSoftTriggerTask(void *p) {
      typedef ::ChnsSoftTriggerTask current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsSoftTriggerTask

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsSoftTriggerLine(void *p) {
      return  p ? new(p) ::ChnsSoftTriggerLine : new ::ChnsSoftTriggerLine;
   }
   static void *newArray_ChnsSoftTriggerLine(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsSoftTriggerLine[nElements] : new ::ChnsSoftTriggerLine[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsSoftTriggerLine(void *p) {
      delete ((::ChnsSoftTriggerLine*)p);
   }
   static void deleteArray_ChnsSoftTriggerLine(void *p) {
      delete [] ((::ChnsSoftTriggerLine*)p);
   }
   static void destruct_ChnsSoftTriggerLine(void *p) {
      typedef ::ChnsSoftTriggerLine current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsSoftTriggerLine

//______________________________________________________________________________
void ChnsOnlineFilterInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsOnlineFilterInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsOnlineFilterInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsOnlineFilterInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsOnlineFilterInfo(void *p) {
      return  p ? new(p) ::ChnsOnlineFilterInfo : new ::ChnsOnlineFilterInfo;
   }
   static void *newArray_ChnsOnlineFilterInfo(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsOnlineFilterInfo[nElements] : new ::ChnsOnlineFilterInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsOnlineFilterInfo(void *p) {
      delete ((::ChnsOnlineFilterInfo*)p);
   }
   static void deleteArray_ChnsOnlineFilterInfo(void *p) {
      delete [] ((::ChnsOnlineFilterInfo*)p);
   }
   static void destruct_ChnsOnlineFilterInfo(void *p) {
      typedef ::ChnsOnlineFilterInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsOnlineFilterInfo

//______________________________________________________________________________
void ChnsAnaWithTrigger::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsAnaWithTrigger.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsAnaWithTrigger::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsAnaWithTrigger::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ChnsAnaWithTrigger(void *p) {
      delete ((::ChnsAnaWithTrigger*)p);
   }
   static void deleteArray_ChnsAnaWithTrigger(void *p) {
      delete [] ((::ChnsAnaWithTrigger*)p);
   }
   static void destruct_ChnsAnaWithTrigger(void *p) {
      typedef ::ChnsAnaWithTrigger current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsAnaWithTrigger

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

namespace {
  void TriggerDictionaryInitialization_G__SofTrigDict_Impl() {
    static const char* headers[] = {
"ChnsSoftTriggerTask.h",
"ChnsSoftTriggerLine.h",
"ChnsOnlineFilterInfo.h",
"ChnsAnaWithTrigger.h",
0
    };
    static const char* includePaths[] = {
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/field",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/trackbase",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/ChnsData",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/ChnsData/PidData",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/RhoBase",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/RhoMath",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/RhoSelector",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/RhoConstraints",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/RhoTools",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/RhoFitter",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/RhoHistogram",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/ChnsTools/AnalysisTools",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/ChnsTools/ChnsParticleFitters",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/softrig",
"/home/eicc/software/FairSoft/install/include/root",
"/home/eicc/software/FairSoft/install/include",
"/home/eicc/FairRoot/build_18.4.2/include",
"/home/eicc/software/FairSoft/install/include/root",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/build/softrig/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__SofTrigDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$ChnsSoftTriggerTask.h")))  ChnsSoftTriggerTask;
class __attribute__((annotate("$clingAutoload$ChnsSoftTriggerLine.h")))  ChnsSoftTriggerLine;
class __attribute__((annotate("$clingAutoload$ChnsOnlineFilterInfo.h")))  ChnsOnlineFilterInfo;
class __attribute__((annotate("$clingAutoload$ChnsAnaWithTrigger.h")))  ChnsAnaWithTrigger;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__SofTrigDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "ChnsSoftTriggerTask.h"
#include "ChnsSoftTriggerLine.h"
#include "ChnsOnlineFilterInfo.h"
#include "ChnsAnaWithTrigger.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"ChnsAnaWithTrigger", payloadCode, "@",
"ChnsOnlineFilterInfo", payloadCode, "@",
"ChnsSoftTriggerLine", payloadCode, "@",
"ChnsSoftTriggerTask", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__SofTrigDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__SofTrigDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__SofTrigDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__SofTrigDict() {
  TriggerDictionaryInitialization_G__SofTrigDict_Impl();
}
