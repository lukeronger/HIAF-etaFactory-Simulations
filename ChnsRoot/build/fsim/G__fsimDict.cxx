// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdata2dIrwangdIgithubsdIHIAFmIetaFactorymISimulationsdIChnsRootdIbuilddIfsimdIG__fsimDict
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
#include "ChnsFastSim.h"
#include "ChnsFsmTrack.h"
#include "ChnsFsmResponse.h"
#include "ChnsFsmAbsDet.h"
#include "ChnsFsmDetFactory.h"
#include "ChnsFsmEmcBarrel.h"
#include "ChnsFsmEmcBwCap.h"
#include "ChnsFsmEmcFwCap.h"
#include "ChnsFsmEmcFS.h"
#include "ChnsFsmTpc.h"
#include "ChnsFsmStt.h"
#include "ChnsFsmMdcFS.h"
#include "ChnsFsmMdcTS.h"
#include "ChnsFsmRich.h"
#include "ChnsFsmDrcDisc.h"
#include "ChnsFsmDrcBarrel.h"
#include "ChnsFsmEffTracker.h"
#include "ChnsFsmMvd.h"
#include "ChnsFsmMvd2.h"
#include "ChnsFsmTof.h"
#include "ChnsFsmTofBwCap.h"
#include "ChnsFsmTofFwCap.h"
#include "ChnsFsmGemBwCap.h"
#include "ChnsFsmGemFwCap.h"
#include "ChnsFsmSimpleTracker.h"
#include "ChnsFsmCmpDet.h"
#include "ChnsFsmCombiDet.h"
#include "ChnsFsmRandom.h"
#include "ChnsFsmMvdPid.h"
#include "ChnsFsmTpcPid.h"
#include "ChnsFsmSttPid.h"
#include "ChnsFsmSimpleVtx.h"
#include "ChnsFsmMdtPid.h"
#include "ChnsFsmEmcPid.h"
#include "ChnsFsmIdealPid.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_ChnsFastSim(void *p = 0);
   static void *newArray_ChnsFastSim(Long_t size, void *p);
   static void delete_ChnsFastSim(void *p);
   static void deleteArray_ChnsFastSim(void *p);
   static void destruct_ChnsFastSim(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFastSim*)
   {
      ::ChnsFastSim *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsFastSim >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFastSim", ::ChnsFastSim::Class_Version(), "ChnsFastSim.h", 32,
                  typeid(::ChnsFastSim), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsFastSim::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFastSim) );
      instance.SetNew(&new_ChnsFastSim);
      instance.SetNewArray(&newArray_ChnsFastSim);
      instance.SetDelete(&delete_ChnsFastSim);
      instance.SetDeleteArray(&deleteArray_ChnsFastSim);
      instance.SetDestructor(&destruct_ChnsFastSim);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFastSim*)
   {
      return GenerateInitInstanceLocal((::ChnsFastSim*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFastSim*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmTrack_Dictionary();
   static void ChnsFsmTrack_TClassManip(TClass*);
   static void *new_ChnsFsmTrack(void *p = 0);
   static void *newArray_ChnsFsmTrack(Long_t size, void *p);
   static void delete_ChnsFsmTrack(void *p);
   static void deleteArray_ChnsFsmTrack(void *p);
   static void destruct_ChnsFsmTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmTrack*)
   {
      ::ChnsFsmTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmTrack));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmTrack", "ChnsFsmTrack.h", 49,
                  typeid(::ChnsFsmTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmTrack_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmTrack) );
      instance.SetNew(&new_ChnsFsmTrack);
      instance.SetNewArray(&newArray_ChnsFsmTrack);
      instance.SetDelete(&delete_ChnsFsmTrack);
      instance.SetDeleteArray(&deleteArray_ChnsFsmTrack);
      instance.SetDestructor(&destruct_ChnsFsmTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmTrack*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmTrack_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmTrack*)0x0)->GetClass();
      ChnsFsmTrack_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmTrack_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmResponse_Dictionary();
   static void ChnsFsmResponse_TClassManip(TClass*);
   static void *new_ChnsFsmResponse(void *p = 0);
   static void *newArray_ChnsFsmResponse(Long_t size, void *p);
   static void delete_ChnsFsmResponse(void *p);
   static void deleteArray_ChnsFsmResponse(void *p);
   static void destruct_ChnsFsmResponse(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmResponse*)
   {
      ::ChnsFsmResponse *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmResponse));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmResponse", "ChnsFsmResponse.h", 41,
                  typeid(::ChnsFsmResponse), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmResponse_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmResponse) );
      instance.SetNew(&new_ChnsFsmResponse);
      instance.SetNewArray(&newArray_ChnsFsmResponse);
      instance.SetDelete(&delete_ChnsFsmResponse);
      instance.SetDeleteArray(&deleteArray_ChnsFsmResponse);
      instance.SetDestructor(&destruct_ChnsFsmResponse);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmResponse*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmResponse*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmResponse*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmResponse_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmResponse*)0x0)->GetClass();
      ChnsFsmResponse_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmResponse_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmAbsDet_Dictionary();
   static void ChnsFsmAbsDet_TClassManip(TClass*);
   static void delete_ChnsFsmAbsDet(void *p);
   static void deleteArray_ChnsFsmAbsDet(void *p);
   static void destruct_ChnsFsmAbsDet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmAbsDet*)
   {
      ::ChnsFsmAbsDet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmAbsDet));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmAbsDet", "ChnsFsmAbsDet.h", 49,
                  typeid(::ChnsFsmAbsDet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmAbsDet_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmAbsDet) );
      instance.SetDelete(&delete_ChnsFsmAbsDet);
      instance.SetDeleteArray(&deleteArray_ChnsFsmAbsDet);
      instance.SetDestructor(&destruct_ChnsFsmAbsDet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmAbsDet*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmAbsDet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmAbsDet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmAbsDet_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmAbsDet*)0x0)->GetClass();
      ChnsFsmAbsDet_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmAbsDet_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmDetFactory_Dictionary();
   static void ChnsFsmDetFactory_TClassManip(TClass*);
   static void *new_ChnsFsmDetFactory(void *p = 0);
   static void *newArray_ChnsFsmDetFactory(Long_t size, void *p);
   static void delete_ChnsFsmDetFactory(void *p);
   static void deleteArray_ChnsFsmDetFactory(void *p);
   static void destruct_ChnsFsmDetFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmDetFactory*)
   {
      ::ChnsFsmDetFactory *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmDetFactory));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmDetFactory", "ChnsFsmDetFactory.h", 43,
                  typeid(::ChnsFsmDetFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmDetFactory_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmDetFactory) );
      instance.SetNew(&new_ChnsFsmDetFactory);
      instance.SetNewArray(&newArray_ChnsFsmDetFactory);
      instance.SetDelete(&delete_ChnsFsmDetFactory);
      instance.SetDeleteArray(&deleteArray_ChnsFsmDetFactory);
      instance.SetDestructor(&destruct_ChnsFsmDetFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmDetFactory*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmDetFactory*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmDetFactory*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmDetFactory_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmDetFactory*)0x0)->GetClass();
      ChnsFsmDetFactory_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmDetFactory_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmEmcBarrel_Dictionary();
   static void ChnsFsmEmcBarrel_TClassManip(TClass*);
   static void *new_ChnsFsmEmcBarrel(void *p = 0);
   static void *newArray_ChnsFsmEmcBarrel(Long_t size, void *p);
   static void delete_ChnsFsmEmcBarrel(void *p);
   static void deleteArray_ChnsFsmEmcBarrel(void *p);
   static void destruct_ChnsFsmEmcBarrel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmEmcBarrel*)
   {
      ::ChnsFsmEmcBarrel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmEmcBarrel));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmEmcBarrel", "ChnsFsmEmcBarrel.h", 41,
                  typeid(::ChnsFsmEmcBarrel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmEmcBarrel_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmEmcBarrel) );
      instance.SetNew(&new_ChnsFsmEmcBarrel);
      instance.SetNewArray(&newArray_ChnsFsmEmcBarrel);
      instance.SetDelete(&delete_ChnsFsmEmcBarrel);
      instance.SetDeleteArray(&deleteArray_ChnsFsmEmcBarrel);
      instance.SetDestructor(&destruct_ChnsFsmEmcBarrel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmEmcBarrel*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmEmcBarrel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmEmcBarrel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmEmcBarrel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmEmcBarrel*)0x0)->GetClass();
      ChnsFsmEmcBarrel_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmEmcBarrel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmEmcBwCap_Dictionary();
   static void ChnsFsmEmcBwCap_TClassManip(TClass*);
   static void *new_ChnsFsmEmcBwCap(void *p = 0);
   static void *newArray_ChnsFsmEmcBwCap(Long_t size, void *p);
   static void delete_ChnsFsmEmcBwCap(void *p);
   static void deleteArray_ChnsFsmEmcBwCap(void *p);
   static void destruct_ChnsFsmEmcBwCap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmEmcBwCap*)
   {
      ::ChnsFsmEmcBwCap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmEmcBwCap));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmEmcBwCap", "ChnsFsmEmcBwCap.h", 41,
                  typeid(::ChnsFsmEmcBwCap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmEmcBwCap_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmEmcBwCap) );
      instance.SetNew(&new_ChnsFsmEmcBwCap);
      instance.SetNewArray(&newArray_ChnsFsmEmcBwCap);
      instance.SetDelete(&delete_ChnsFsmEmcBwCap);
      instance.SetDeleteArray(&deleteArray_ChnsFsmEmcBwCap);
      instance.SetDestructor(&destruct_ChnsFsmEmcBwCap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmEmcBwCap*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmEmcBwCap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmEmcBwCap*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmEmcBwCap_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmEmcBwCap*)0x0)->GetClass();
      ChnsFsmEmcBwCap_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmEmcBwCap_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmEmcFwCap_Dictionary();
   static void ChnsFsmEmcFwCap_TClassManip(TClass*);
   static void *new_ChnsFsmEmcFwCap(void *p = 0);
   static void *newArray_ChnsFsmEmcFwCap(Long_t size, void *p);
   static void delete_ChnsFsmEmcFwCap(void *p);
   static void deleteArray_ChnsFsmEmcFwCap(void *p);
   static void destruct_ChnsFsmEmcFwCap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmEmcFwCap*)
   {
      ::ChnsFsmEmcFwCap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmEmcFwCap));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmEmcFwCap", "ChnsFsmEmcFwCap.h", 41,
                  typeid(::ChnsFsmEmcFwCap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmEmcFwCap_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmEmcFwCap) );
      instance.SetNew(&new_ChnsFsmEmcFwCap);
      instance.SetNewArray(&newArray_ChnsFsmEmcFwCap);
      instance.SetDelete(&delete_ChnsFsmEmcFwCap);
      instance.SetDeleteArray(&deleteArray_ChnsFsmEmcFwCap);
      instance.SetDestructor(&destruct_ChnsFsmEmcFwCap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmEmcFwCap*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmEmcFwCap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmEmcFwCap*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmEmcFwCap_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmEmcFwCap*)0x0)->GetClass();
      ChnsFsmEmcFwCap_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmEmcFwCap_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmEmcFS_Dictionary();
   static void ChnsFsmEmcFS_TClassManip(TClass*);
   static void *new_ChnsFsmEmcFS(void *p = 0);
   static void *newArray_ChnsFsmEmcFS(Long_t size, void *p);
   static void delete_ChnsFsmEmcFS(void *p);
   static void deleteArray_ChnsFsmEmcFS(void *p);
   static void destruct_ChnsFsmEmcFS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmEmcFS*)
   {
      ::ChnsFsmEmcFS *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmEmcFS));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmEmcFS", "ChnsFsmEmcFS.h", 41,
                  typeid(::ChnsFsmEmcFS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmEmcFS_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmEmcFS) );
      instance.SetNew(&new_ChnsFsmEmcFS);
      instance.SetNewArray(&newArray_ChnsFsmEmcFS);
      instance.SetDelete(&delete_ChnsFsmEmcFS);
      instance.SetDeleteArray(&deleteArray_ChnsFsmEmcFS);
      instance.SetDestructor(&destruct_ChnsFsmEmcFS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmEmcFS*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmEmcFS*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmEmcFS*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmEmcFS_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmEmcFS*)0x0)->GetClass();
      ChnsFsmEmcFS_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmEmcFS_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmTpc_Dictionary();
   static void ChnsFsmTpc_TClassManip(TClass*);
   static void *new_ChnsFsmTpc(void *p = 0);
   static void *newArray_ChnsFsmTpc(Long_t size, void *p);
   static void delete_ChnsFsmTpc(void *p);
   static void deleteArray_ChnsFsmTpc(void *p);
   static void destruct_ChnsFsmTpc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmTpc*)
   {
      ::ChnsFsmTpc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmTpc));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmTpc", "ChnsFsmTpc.h", 41,
                  typeid(::ChnsFsmTpc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmTpc_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmTpc) );
      instance.SetNew(&new_ChnsFsmTpc);
      instance.SetNewArray(&newArray_ChnsFsmTpc);
      instance.SetDelete(&delete_ChnsFsmTpc);
      instance.SetDeleteArray(&deleteArray_ChnsFsmTpc);
      instance.SetDestructor(&destruct_ChnsFsmTpc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmTpc*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmTpc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmTpc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmTpc_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmTpc*)0x0)->GetClass();
      ChnsFsmTpc_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmTpc_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmStt_Dictionary();
   static void ChnsFsmStt_TClassManip(TClass*);
   static void *new_ChnsFsmStt(void *p = 0);
   static void *newArray_ChnsFsmStt(Long_t size, void *p);
   static void delete_ChnsFsmStt(void *p);
   static void deleteArray_ChnsFsmStt(void *p);
   static void destruct_ChnsFsmStt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmStt*)
   {
      ::ChnsFsmStt *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmStt));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmStt", "ChnsFsmStt.h", 41,
                  typeid(::ChnsFsmStt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmStt_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmStt) );
      instance.SetNew(&new_ChnsFsmStt);
      instance.SetNewArray(&newArray_ChnsFsmStt);
      instance.SetDelete(&delete_ChnsFsmStt);
      instance.SetDeleteArray(&deleteArray_ChnsFsmStt);
      instance.SetDestructor(&destruct_ChnsFsmStt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmStt*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmStt*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmStt*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmStt_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmStt*)0x0)->GetClass();
      ChnsFsmStt_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmStt_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmMdcFS_Dictionary();
   static void ChnsFsmMdcFS_TClassManip(TClass*);
   static void *new_ChnsFsmMdcFS(void *p = 0);
   static void *newArray_ChnsFsmMdcFS(Long_t size, void *p);
   static void delete_ChnsFsmMdcFS(void *p);
   static void deleteArray_ChnsFsmMdcFS(void *p);
   static void destruct_ChnsFsmMdcFS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmMdcFS*)
   {
      ::ChnsFsmMdcFS *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmMdcFS));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmMdcFS", "ChnsFsmMdcFS.h", 41,
                  typeid(::ChnsFsmMdcFS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmMdcFS_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmMdcFS) );
      instance.SetNew(&new_ChnsFsmMdcFS);
      instance.SetNewArray(&newArray_ChnsFsmMdcFS);
      instance.SetDelete(&delete_ChnsFsmMdcFS);
      instance.SetDeleteArray(&deleteArray_ChnsFsmMdcFS);
      instance.SetDestructor(&destruct_ChnsFsmMdcFS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmMdcFS*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmMdcFS*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmMdcFS*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmMdcFS_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmMdcFS*)0x0)->GetClass();
      ChnsFsmMdcFS_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmMdcFS_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmMdcTS_Dictionary();
   static void ChnsFsmMdcTS_TClassManip(TClass*);
   static void *new_ChnsFsmMdcTS(void *p = 0);
   static void *newArray_ChnsFsmMdcTS(Long_t size, void *p);
   static void delete_ChnsFsmMdcTS(void *p);
   static void deleteArray_ChnsFsmMdcTS(void *p);
   static void destruct_ChnsFsmMdcTS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmMdcTS*)
   {
      ::ChnsFsmMdcTS *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmMdcTS));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmMdcTS", "ChnsFsmMdcTS.h", 41,
                  typeid(::ChnsFsmMdcTS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmMdcTS_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmMdcTS) );
      instance.SetNew(&new_ChnsFsmMdcTS);
      instance.SetNewArray(&newArray_ChnsFsmMdcTS);
      instance.SetDelete(&delete_ChnsFsmMdcTS);
      instance.SetDeleteArray(&deleteArray_ChnsFsmMdcTS);
      instance.SetDestructor(&destruct_ChnsFsmMdcTS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmMdcTS*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmMdcTS*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmMdcTS*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmMdcTS_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmMdcTS*)0x0)->GetClass();
      ChnsFsmMdcTS_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmMdcTS_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmRich_Dictionary();
   static void ChnsFsmRich_TClassManip(TClass*);
   static void *new_ChnsFsmRich(void *p = 0);
   static void *newArray_ChnsFsmRich(Long_t size, void *p);
   static void delete_ChnsFsmRich(void *p);
   static void deleteArray_ChnsFsmRich(void *p);
   static void destruct_ChnsFsmRich(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmRich*)
   {
      ::ChnsFsmRich *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmRich));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmRich", "ChnsFsmRich.h", 41,
                  typeid(::ChnsFsmRich), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmRich_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmRich) );
      instance.SetNew(&new_ChnsFsmRich);
      instance.SetNewArray(&newArray_ChnsFsmRich);
      instance.SetDelete(&delete_ChnsFsmRich);
      instance.SetDeleteArray(&deleteArray_ChnsFsmRich);
      instance.SetDestructor(&destruct_ChnsFsmRich);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmRich*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmRich*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmRich*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmRich_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmRich*)0x0)->GetClass();
      ChnsFsmRich_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmRich_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmDrcDisc_Dictionary();
   static void ChnsFsmDrcDisc_TClassManip(TClass*);
   static void *new_ChnsFsmDrcDisc(void *p = 0);
   static void *newArray_ChnsFsmDrcDisc(Long_t size, void *p);
   static void delete_ChnsFsmDrcDisc(void *p);
   static void deleteArray_ChnsFsmDrcDisc(void *p);
   static void destruct_ChnsFsmDrcDisc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmDrcDisc*)
   {
      ::ChnsFsmDrcDisc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmDrcDisc));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmDrcDisc", "ChnsFsmDrcDisc.h", 42,
                  typeid(::ChnsFsmDrcDisc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmDrcDisc_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmDrcDisc) );
      instance.SetNew(&new_ChnsFsmDrcDisc);
      instance.SetNewArray(&newArray_ChnsFsmDrcDisc);
      instance.SetDelete(&delete_ChnsFsmDrcDisc);
      instance.SetDeleteArray(&deleteArray_ChnsFsmDrcDisc);
      instance.SetDestructor(&destruct_ChnsFsmDrcDisc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmDrcDisc*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmDrcDisc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmDrcDisc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmDrcDisc_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmDrcDisc*)0x0)->GetClass();
      ChnsFsmDrcDisc_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmDrcDisc_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmDrcBarrel_Dictionary();
   static void ChnsFsmDrcBarrel_TClassManip(TClass*);
   static void *new_ChnsFsmDrcBarrel(void *p = 0);
   static void *newArray_ChnsFsmDrcBarrel(Long_t size, void *p);
   static void delete_ChnsFsmDrcBarrel(void *p);
   static void deleteArray_ChnsFsmDrcBarrel(void *p);
   static void destruct_ChnsFsmDrcBarrel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmDrcBarrel*)
   {
      ::ChnsFsmDrcBarrel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmDrcBarrel));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmDrcBarrel", "ChnsFsmDrcBarrel.h", 42,
                  typeid(::ChnsFsmDrcBarrel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmDrcBarrel_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmDrcBarrel) );
      instance.SetNew(&new_ChnsFsmDrcBarrel);
      instance.SetNewArray(&newArray_ChnsFsmDrcBarrel);
      instance.SetDelete(&delete_ChnsFsmDrcBarrel);
      instance.SetDeleteArray(&deleteArray_ChnsFsmDrcBarrel);
      instance.SetDestructor(&destruct_ChnsFsmDrcBarrel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmDrcBarrel*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmDrcBarrel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmDrcBarrel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmDrcBarrel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmDrcBarrel*)0x0)->GetClass();
      ChnsFsmDrcBarrel_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmDrcBarrel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmEffTracker_Dictionary();
   static void ChnsFsmEffTracker_TClassManip(TClass*);
   static void *new_ChnsFsmEffTracker(void *p = 0);
   static void *newArray_ChnsFsmEffTracker(Long_t size, void *p);
   static void delete_ChnsFsmEffTracker(void *p);
   static void deleteArray_ChnsFsmEffTracker(void *p);
   static void destruct_ChnsFsmEffTracker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmEffTracker*)
   {
      ::ChnsFsmEffTracker *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmEffTracker));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmEffTracker", "ChnsFsmEffTracker.h", 43,
                  typeid(::ChnsFsmEffTracker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmEffTracker_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmEffTracker) );
      instance.SetNew(&new_ChnsFsmEffTracker);
      instance.SetNewArray(&newArray_ChnsFsmEffTracker);
      instance.SetDelete(&delete_ChnsFsmEffTracker);
      instance.SetDeleteArray(&deleteArray_ChnsFsmEffTracker);
      instance.SetDestructor(&destruct_ChnsFsmEffTracker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmEffTracker*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmEffTracker*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmEffTracker*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmEffTracker_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmEffTracker*)0x0)->GetClass();
      ChnsFsmEffTracker_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmEffTracker_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmMvd_Dictionary();
   static void ChnsFsmMvd_TClassManip(TClass*);
   static void *new_ChnsFsmMvd(void *p = 0);
   static void *newArray_ChnsFsmMvd(Long_t size, void *p);
   static void delete_ChnsFsmMvd(void *p);
   static void deleteArray_ChnsFsmMvd(void *p);
   static void destruct_ChnsFsmMvd(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmMvd*)
   {
      ::ChnsFsmMvd *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmMvd));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmMvd", "ChnsFsmMvd.h", 41,
                  typeid(::ChnsFsmMvd), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmMvd_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmMvd) );
      instance.SetNew(&new_ChnsFsmMvd);
      instance.SetNewArray(&newArray_ChnsFsmMvd);
      instance.SetDelete(&delete_ChnsFsmMvd);
      instance.SetDeleteArray(&deleteArray_ChnsFsmMvd);
      instance.SetDestructor(&destruct_ChnsFsmMvd);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmMvd*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmMvd*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmMvd*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmMvd_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmMvd*)0x0)->GetClass();
      ChnsFsmMvd_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmMvd_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmMvd2_Dictionary();
   static void ChnsFsmMvd2_TClassManip(TClass*);
   static void *new_ChnsFsmMvd2(void *p = 0);
   static void *newArray_ChnsFsmMvd2(Long_t size, void *p);
   static void delete_ChnsFsmMvd2(void *p);
   static void deleteArray_ChnsFsmMvd2(void *p);
   static void destruct_ChnsFsmMvd2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmMvd2*)
   {
      ::ChnsFsmMvd2 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmMvd2));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmMvd2", "ChnsFsmMvd2.h", 41,
                  typeid(::ChnsFsmMvd2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmMvd2_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmMvd2) );
      instance.SetNew(&new_ChnsFsmMvd2);
      instance.SetNewArray(&newArray_ChnsFsmMvd2);
      instance.SetDelete(&delete_ChnsFsmMvd2);
      instance.SetDeleteArray(&deleteArray_ChnsFsmMvd2);
      instance.SetDestructor(&destruct_ChnsFsmMvd2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmMvd2*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmMvd2*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmMvd2*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmMvd2_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmMvd2*)0x0)->GetClass();
      ChnsFsmMvd2_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmMvd2_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmTof_Dictionary();
   static void ChnsFsmTof_TClassManip(TClass*);
   static void *new_ChnsFsmTof(void *p = 0);
   static void *newArray_ChnsFsmTof(Long_t size, void *p);
   static void delete_ChnsFsmTof(void *p);
   static void deleteArray_ChnsFsmTof(void *p);
   static void destruct_ChnsFsmTof(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmTof*)
   {
      ::ChnsFsmTof *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmTof));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmTof", "ChnsFsmTof.h", 41,
                  typeid(::ChnsFsmTof), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmTof_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmTof) );
      instance.SetNew(&new_ChnsFsmTof);
      instance.SetNewArray(&newArray_ChnsFsmTof);
      instance.SetDelete(&delete_ChnsFsmTof);
      instance.SetDeleteArray(&deleteArray_ChnsFsmTof);
      instance.SetDestructor(&destruct_ChnsFsmTof);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmTof*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmTof*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmTof*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmTof_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmTof*)0x0)->GetClass();
      ChnsFsmTof_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmTof_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmTofBwCap_Dictionary();
   static void ChnsFsmTofBwCap_TClassManip(TClass*);
   static void *new_ChnsFsmTofBwCap(void *p = 0);
   static void *newArray_ChnsFsmTofBwCap(Long_t size, void *p);
   static void delete_ChnsFsmTofBwCap(void *p);
   static void deleteArray_ChnsFsmTofBwCap(void *p);
   static void destruct_ChnsFsmTofBwCap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmTofBwCap*)
   {
      ::ChnsFsmTofBwCap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmTofBwCap));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmTofBwCap", "ChnsFsmTofBwCap.h", 41,
                  typeid(::ChnsFsmTofBwCap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmTofBwCap_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmTofBwCap) );
      instance.SetNew(&new_ChnsFsmTofBwCap);
      instance.SetNewArray(&newArray_ChnsFsmTofBwCap);
      instance.SetDelete(&delete_ChnsFsmTofBwCap);
      instance.SetDeleteArray(&deleteArray_ChnsFsmTofBwCap);
      instance.SetDestructor(&destruct_ChnsFsmTofBwCap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmTofBwCap*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmTofBwCap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmTofBwCap*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmTofBwCap_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmTofBwCap*)0x0)->GetClass();
      ChnsFsmTofBwCap_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmTofBwCap_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmTofFwCap_Dictionary();
   static void ChnsFsmTofFwCap_TClassManip(TClass*);
   static void *new_ChnsFsmTofFwCap(void *p = 0);
   static void *newArray_ChnsFsmTofFwCap(Long_t size, void *p);
   static void delete_ChnsFsmTofFwCap(void *p);
   static void deleteArray_ChnsFsmTofFwCap(void *p);
   static void destruct_ChnsFsmTofFwCap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmTofFwCap*)
   {
      ::ChnsFsmTofFwCap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmTofFwCap));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmTofFwCap", "ChnsFsmTofFwCap.h", 41,
                  typeid(::ChnsFsmTofFwCap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmTofFwCap_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmTofFwCap) );
      instance.SetNew(&new_ChnsFsmTofFwCap);
      instance.SetNewArray(&newArray_ChnsFsmTofFwCap);
      instance.SetDelete(&delete_ChnsFsmTofFwCap);
      instance.SetDeleteArray(&deleteArray_ChnsFsmTofFwCap);
      instance.SetDestructor(&destruct_ChnsFsmTofFwCap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmTofFwCap*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmTofFwCap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmTofFwCap*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmTofFwCap_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmTofFwCap*)0x0)->GetClass();
      ChnsFsmTofFwCap_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmTofFwCap_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmGemBwCap_Dictionary();
   static void ChnsFsmGemBwCap_TClassManip(TClass*);
   static void *new_ChnsFsmGemBwCap(void *p = 0);
   static void *newArray_ChnsFsmGemBwCap(Long_t size, void *p);
   static void delete_ChnsFsmGemBwCap(void *p);
   static void deleteArray_ChnsFsmGemBwCap(void *p);
   static void destruct_ChnsFsmGemBwCap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmGemBwCap*)
   {
      ::ChnsFsmGemBwCap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmGemBwCap));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmGemBwCap", "ChnsFsmGemBwCap.h", 41,
                  typeid(::ChnsFsmGemBwCap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmGemBwCap_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmGemBwCap) );
      instance.SetNew(&new_ChnsFsmGemBwCap);
      instance.SetNewArray(&newArray_ChnsFsmGemBwCap);
      instance.SetDelete(&delete_ChnsFsmGemBwCap);
      instance.SetDeleteArray(&deleteArray_ChnsFsmGemBwCap);
      instance.SetDestructor(&destruct_ChnsFsmGemBwCap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmGemBwCap*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmGemBwCap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmGemBwCap*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmGemBwCap_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmGemBwCap*)0x0)->GetClass();
      ChnsFsmGemBwCap_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmGemBwCap_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmGemFwCap_Dictionary();
   static void ChnsFsmGemFwCap_TClassManip(TClass*);
   static void *new_ChnsFsmGemFwCap(void *p = 0);
   static void *newArray_ChnsFsmGemFwCap(Long_t size, void *p);
   static void delete_ChnsFsmGemFwCap(void *p);
   static void deleteArray_ChnsFsmGemFwCap(void *p);
   static void destruct_ChnsFsmGemFwCap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmGemFwCap*)
   {
      ::ChnsFsmGemFwCap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmGemFwCap));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmGemFwCap", "ChnsFsmGemFwCap.h", 41,
                  typeid(::ChnsFsmGemFwCap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmGemFwCap_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmGemFwCap) );
      instance.SetNew(&new_ChnsFsmGemFwCap);
      instance.SetNewArray(&newArray_ChnsFsmGemFwCap);
      instance.SetDelete(&delete_ChnsFsmGemFwCap);
      instance.SetDeleteArray(&deleteArray_ChnsFsmGemFwCap);
      instance.SetDestructor(&destruct_ChnsFsmGemFwCap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmGemFwCap*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmGemFwCap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmGemFwCap*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmGemFwCap_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmGemFwCap*)0x0)->GetClass();
      ChnsFsmGemFwCap_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmGemFwCap_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmCmpDet_Dictionary();
   static void ChnsFsmCmpDet_TClassManip(TClass*);
   static void *new_ChnsFsmCmpDet(void *p = 0);
   static void *newArray_ChnsFsmCmpDet(Long_t size, void *p);
   static void delete_ChnsFsmCmpDet(void *p);
   static void deleteArray_ChnsFsmCmpDet(void *p);
   static void destruct_ChnsFsmCmpDet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmCmpDet*)
   {
      ::ChnsFsmCmpDet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmCmpDet));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmCmpDet", "ChnsFsmCmpDet.h", 47,
                  typeid(::ChnsFsmCmpDet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmCmpDet_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmCmpDet) );
      instance.SetNew(&new_ChnsFsmCmpDet);
      instance.SetNewArray(&newArray_ChnsFsmCmpDet);
      instance.SetDelete(&delete_ChnsFsmCmpDet);
      instance.SetDeleteArray(&deleteArray_ChnsFsmCmpDet);
      instance.SetDestructor(&destruct_ChnsFsmCmpDet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmCmpDet*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmCmpDet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmCmpDet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmCmpDet_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmCmpDet*)0x0)->GetClass();
      ChnsFsmCmpDet_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmCmpDet_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmCombiDet_Dictionary();
   static void ChnsFsmCombiDet_TClassManip(TClass*);
   static void *new_ChnsFsmCombiDet(void *p = 0);
   static void *newArray_ChnsFsmCombiDet(Long_t size, void *p);
   static void delete_ChnsFsmCombiDet(void *p);
   static void deleteArray_ChnsFsmCombiDet(void *p);
   static void destruct_ChnsFsmCombiDet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmCombiDet*)
   {
      ::ChnsFsmCombiDet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmCombiDet));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmCombiDet", "ChnsFsmCombiDet.h", 51,
                  typeid(::ChnsFsmCombiDet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmCombiDet_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmCombiDet) );
      instance.SetNew(&new_ChnsFsmCombiDet);
      instance.SetNewArray(&newArray_ChnsFsmCombiDet);
      instance.SetDelete(&delete_ChnsFsmCombiDet);
      instance.SetDeleteArray(&deleteArray_ChnsFsmCombiDet);
      instance.SetDestructor(&destruct_ChnsFsmCombiDet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmCombiDet*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmCombiDet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmCombiDet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmCombiDet_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmCombiDet*)0x0)->GetClass();
      ChnsFsmCombiDet_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmCombiDet_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmRandom_Dictionary();
   static void ChnsFsmRandom_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmRandom*)
   {
      ::ChnsFsmRandom *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmRandom));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmRandom", "ChnsFsmRandom.h", 5,
                  typeid(::ChnsFsmRandom), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmRandom_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmRandom) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmRandom*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmRandom*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmRandom*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmRandom_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmRandom*)0x0)->GetClass();
      ChnsFsmRandom_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmRandom_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmMvdPid_Dictionary();
   static void ChnsFsmMvdPid_TClassManip(TClass*);
   static void *new_ChnsFsmMvdPid(void *p = 0);
   static void *newArray_ChnsFsmMvdPid(Long_t size, void *p);
   static void delete_ChnsFsmMvdPid(void *p);
   static void deleteArray_ChnsFsmMvdPid(void *p);
   static void destruct_ChnsFsmMvdPid(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmMvdPid*)
   {
      ::ChnsFsmMvdPid *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmMvdPid));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmMvdPid", "ChnsFsmMvdPid.h", 41,
                  typeid(::ChnsFsmMvdPid), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmMvdPid_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmMvdPid) );
      instance.SetNew(&new_ChnsFsmMvdPid);
      instance.SetNewArray(&newArray_ChnsFsmMvdPid);
      instance.SetDelete(&delete_ChnsFsmMvdPid);
      instance.SetDeleteArray(&deleteArray_ChnsFsmMvdPid);
      instance.SetDestructor(&destruct_ChnsFsmMvdPid);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmMvdPid*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmMvdPid*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmMvdPid*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmMvdPid_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmMvdPid*)0x0)->GetClass();
      ChnsFsmMvdPid_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmMvdPid_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmTpcPid_Dictionary();
   static void ChnsFsmTpcPid_TClassManip(TClass*);
   static void *new_ChnsFsmTpcPid(void *p = 0);
   static void *newArray_ChnsFsmTpcPid(Long_t size, void *p);
   static void delete_ChnsFsmTpcPid(void *p);
   static void deleteArray_ChnsFsmTpcPid(void *p);
   static void destruct_ChnsFsmTpcPid(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmTpcPid*)
   {
      ::ChnsFsmTpcPid *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmTpcPid));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmTpcPid", "ChnsFsmTpcPid.h", 41,
                  typeid(::ChnsFsmTpcPid), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmTpcPid_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmTpcPid) );
      instance.SetNew(&new_ChnsFsmTpcPid);
      instance.SetNewArray(&newArray_ChnsFsmTpcPid);
      instance.SetDelete(&delete_ChnsFsmTpcPid);
      instance.SetDeleteArray(&deleteArray_ChnsFsmTpcPid);
      instance.SetDestructor(&destruct_ChnsFsmTpcPid);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmTpcPid*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmTpcPid*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmTpcPid*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmTpcPid_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmTpcPid*)0x0)->GetClass();
      ChnsFsmTpcPid_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmTpcPid_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmSttPid_Dictionary();
   static void ChnsFsmSttPid_TClassManip(TClass*);
   static void *new_ChnsFsmSttPid(void *p = 0);
   static void *newArray_ChnsFsmSttPid(Long_t size, void *p);
   static void delete_ChnsFsmSttPid(void *p);
   static void deleteArray_ChnsFsmSttPid(void *p);
   static void destruct_ChnsFsmSttPid(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmSttPid*)
   {
      ::ChnsFsmSttPid *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmSttPid));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmSttPid", "ChnsFsmSttPid.h", 41,
                  typeid(::ChnsFsmSttPid), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmSttPid_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmSttPid) );
      instance.SetNew(&new_ChnsFsmSttPid);
      instance.SetNewArray(&newArray_ChnsFsmSttPid);
      instance.SetDelete(&delete_ChnsFsmSttPid);
      instance.SetDeleteArray(&deleteArray_ChnsFsmSttPid);
      instance.SetDestructor(&destruct_ChnsFsmSttPid);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmSttPid*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmSttPid*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmSttPid*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmSttPid_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmSttPid*)0x0)->GetClass();
      ChnsFsmSttPid_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmSttPid_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmSimpleVtx_Dictionary();
   static void ChnsFsmSimpleVtx_TClassManip(TClass*);
   static void *new_ChnsFsmSimpleVtx(void *p = 0);
   static void *newArray_ChnsFsmSimpleVtx(Long_t size, void *p);
   static void delete_ChnsFsmSimpleVtx(void *p);
   static void deleteArray_ChnsFsmSimpleVtx(void *p);
   static void destruct_ChnsFsmSimpleVtx(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmSimpleVtx*)
   {
      ::ChnsFsmSimpleVtx *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmSimpleVtx));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmSimpleVtx", "ChnsFsmSimpleVtx.h", 41,
                  typeid(::ChnsFsmSimpleVtx), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmSimpleVtx_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmSimpleVtx) );
      instance.SetNew(&new_ChnsFsmSimpleVtx);
      instance.SetNewArray(&newArray_ChnsFsmSimpleVtx);
      instance.SetDelete(&delete_ChnsFsmSimpleVtx);
      instance.SetDeleteArray(&deleteArray_ChnsFsmSimpleVtx);
      instance.SetDestructor(&destruct_ChnsFsmSimpleVtx);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmSimpleVtx*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmSimpleVtx*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmSimpleVtx*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmSimpleVtx_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmSimpleVtx*)0x0)->GetClass();
      ChnsFsmSimpleVtx_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmSimpleVtx_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmMdtPid_Dictionary();
   static void ChnsFsmMdtPid_TClassManip(TClass*);
   static void *new_ChnsFsmMdtPid(void *p = 0);
   static void *newArray_ChnsFsmMdtPid(Long_t size, void *p);
   static void delete_ChnsFsmMdtPid(void *p);
   static void deleteArray_ChnsFsmMdtPid(void *p);
   static void destruct_ChnsFsmMdtPid(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmMdtPid*)
   {
      ::ChnsFsmMdtPid *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmMdtPid));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmMdtPid", "ChnsFsmMdtPid.h", 42,
                  typeid(::ChnsFsmMdtPid), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmMdtPid_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmMdtPid) );
      instance.SetNew(&new_ChnsFsmMdtPid);
      instance.SetNewArray(&newArray_ChnsFsmMdtPid);
      instance.SetDelete(&delete_ChnsFsmMdtPid);
      instance.SetDeleteArray(&deleteArray_ChnsFsmMdtPid);
      instance.SetDestructor(&destruct_ChnsFsmMdtPid);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmMdtPid*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmMdtPid*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmMdtPid*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmMdtPid_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmMdtPid*)0x0)->GetClass();
      ChnsFsmMdtPid_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmMdtPid_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmEmcPid_Dictionary();
   static void ChnsFsmEmcPid_TClassManip(TClass*);
   static void *new_ChnsFsmEmcPid(void *p = 0);
   static void *newArray_ChnsFsmEmcPid(Long_t size, void *p);
   static void delete_ChnsFsmEmcPid(void *p);
   static void deleteArray_ChnsFsmEmcPid(void *p);
   static void destruct_ChnsFsmEmcPid(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmEmcPid*)
   {
      ::ChnsFsmEmcPid *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmEmcPid));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmEmcPid", "ChnsFsmEmcPid.h", 42,
                  typeid(::ChnsFsmEmcPid), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmEmcPid_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmEmcPid) );
      instance.SetNew(&new_ChnsFsmEmcPid);
      instance.SetNewArray(&newArray_ChnsFsmEmcPid);
      instance.SetDelete(&delete_ChnsFsmEmcPid);
      instance.SetDeleteArray(&deleteArray_ChnsFsmEmcPid);
      instance.SetDestructor(&destruct_ChnsFsmEmcPid);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmEmcPid*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmEmcPid*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmEmcPid*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmEmcPid_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmEmcPid*)0x0)->GetClass();
      ChnsFsmEmcPid_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmEmcPid_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsFsmIdealPid_Dictionary();
   static void ChnsFsmIdealPid_TClassManip(TClass*);
   static void *new_ChnsFsmIdealPid(void *p = 0);
   static void *newArray_ChnsFsmIdealPid(Long_t size, void *p);
   static void delete_ChnsFsmIdealPid(void *p);
   static void deleteArray_ChnsFsmIdealPid(void *p);
   static void destruct_ChnsFsmIdealPid(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsFsmIdealPid*)
   {
      ::ChnsFsmIdealPid *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsFsmIdealPid));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsFsmIdealPid", "ChnsFsmIdealPid.h", 41,
                  typeid(::ChnsFsmIdealPid), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsFsmIdealPid_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsFsmIdealPid) );
      instance.SetNew(&new_ChnsFsmIdealPid);
      instance.SetNewArray(&newArray_ChnsFsmIdealPid);
      instance.SetDelete(&delete_ChnsFsmIdealPid);
      instance.SetDeleteArray(&deleteArray_ChnsFsmIdealPid);
      instance.SetDestructor(&destruct_ChnsFsmIdealPid);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsFsmIdealPid*)
   {
      return GenerateInitInstanceLocal((::ChnsFsmIdealPid*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsFsmIdealPid*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsFsmIdealPid_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsFsmIdealPid*)0x0)->GetClass();
      ChnsFsmIdealPid_TClassManip(theClass);
   return theClass;
   }

   static void ChnsFsmIdealPid_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr ChnsFastSim::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsFastSim::Class_Name()
{
   return "ChnsFastSim";
}

//______________________________________________________________________________
const char *ChnsFastSim::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsFastSim*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsFastSim::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsFastSim*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsFastSim::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsFastSim*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsFastSim::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsFastSim*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void ChnsFastSim::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsFastSim.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsFastSim::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsFastSim::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFastSim(void *p) {
      return  p ? new(p) ::ChnsFastSim : new ::ChnsFastSim;
   }
   static void *newArray_ChnsFastSim(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFastSim[nElements] : new ::ChnsFastSim[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFastSim(void *p) {
      delete ((::ChnsFastSim*)p);
   }
   static void deleteArray_ChnsFastSim(void *p) {
      delete [] ((::ChnsFastSim*)p);
   }
   static void destruct_ChnsFastSim(void *p) {
      typedef ::ChnsFastSim current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFastSim

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmTrack(void *p) {
      return  p ? new(p) ::ChnsFsmTrack : new ::ChnsFsmTrack;
   }
   static void *newArray_ChnsFsmTrack(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmTrack[nElements] : new ::ChnsFsmTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmTrack(void *p) {
      delete ((::ChnsFsmTrack*)p);
   }
   static void deleteArray_ChnsFsmTrack(void *p) {
      delete [] ((::ChnsFsmTrack*)p);
   }
   static void destruct_ChnsFsmTrack(void *p) {
      typedef ::ChnsFsmTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmTrack

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmResponse(void *p) {
      return  p ? new(p) ::ChnsFsmResponse : new ::ChnsFsmResponse;
   }
   static void *newArray_ChnsFsmResponse(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmResponse[nElements] : new ::ChnsFsmResponse[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmResponse(void *p) {
      delete ((::ChnsFsmResponse*)p);
   }
   static void deleteArray_ChnsFsmResponse(void *p) {
      delete [] ((::ChnsFsmResponse*)p);
   }
   static void destruct_ChnsFsmResponse(void *p) {
      typedef ::ChnsFsmResponse current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmResponse

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ChnsFsmAbsDet(void *p) {
      delete ((::ChnsFsmAbsDet*)p);
   }
   static void deleteArray_ChnsFsmAbsDet(void *p) {
      delete [] ((::ChnsFsmAbsDet*)p);
   }
   static void destruct_ChnsFsmAbsDet(void *p) {
      typedef ::ChnsFsmAbsDet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmAbsDet

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmDetFactory(void *p) {
      return  p ? new(p) ::ChnsFsmDetFactory : new ::ChnsFsmDetFactory;
   }
   static void *newArray_ChnsFsmDetFactory(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmDetFactory[nElements] : new ::ChnsFsmDetFactory[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmDetFactory(void *p) {
      delete ((::ChnsFsmDetFactory*)p);
   }
   static void deleteArray_ChnsFsmDetFactory(void *p) {
      delete [] ((::ChnsFsmDetFactory*)p);
   }
   static void destruct_ChnsFsmDetFactory(void *p) {
      typedef ::ChnsFsmDetFactory current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmDetFactory

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmEmcBarrel(void *p) {
      return  p ? new(p) ::ChnsFsmEmcBarrel : new ::ChnsFsmEmcBarrel;
   }
   static void *newArray_ChnsFsmEmcBarrel(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmEmcBarrel[nElements] : new ::ChnsFsmEmcBarrel[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmEmcBarrel(void *p) {
      delete ((::ChnsFsmEmcBarrel*)p);
   }
   static void deleteArray_ChnsFsmEmcBarrel(void *p) {
      delete [] ((::ChnsFsmEmcBarrel*)p);
   }
   static void destruct_ChnsFsmEmcBarrel(void *p) {
      typedef ::ChnsFsmEmcBarrel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmEmcBarrel

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmEmcBwCap(void *p) {
      return  p ? new(p) ::ChnsFsmEmcBwCap : new ::ChnsFsmEmcBwCap;
   }
   static void *newArray_ChnsFsmEmcBwCap(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmEmcBwCap[nElements] : new ::ChnsFsmEmcBwCap[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmEmcBwCap(void *p) {
      delete ((::ChnsFsmEmcBwCap*)p);
   }
   static void deleteArray_ChnsFsmEmcBwCap(void *p) {
      delete [] ((::ChnsFsmEmcBwCap*)p);
   }
   static void destruct_ChnsFsmEmcBwCap(void *p) {
      typedef ::ChnsFsmEmcBwCap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmEmcBwCap

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmEmcFwCap(void *p) {
      return  p ? new(p) ::ChnsFsmEmcFwCap : new ::ChnsFsmEmcFwCap;
   }
   static void *newArray_ChnsFsmEmcFwCap(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmEmcFwCap[nElements] : new ::ChnsFsmEmcFwCap[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmEmcFwCap(void *p) {
      delete ((::ChnsFsmEmcFwCap*)p);
   }
   static void deleteArray_ChnsFsmEmcFwCap(void *p) {
      delete [] ((::ChnsFsmEmcFwCap*)p);
   }
   static void destruct_ChnsFsmEmcFwCap(void *p) {
      typedef ::ChnsFsmEmcFwCap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmEmcFwCap

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmEmcFS(void *p) {
      return  p ? new(p) ::ChnsFsmEmcFS : new ::ChnsFsmEmcFS;
   }
   static void *newArray_ChnsFsmEmcFS(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmEmcFS[nElements] : new ::ChnsFsmEmcFS[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmEmcFS(void *p) {
      delete ((::ChnsFsmEmcFS*)p);
   }
   static void deleteArray_ChnsFsmEmcFS(void *p) {
      delete [] ((::ChnsFsmEmcFS*)p);
   }
   static void destruct_ChnsFsmEmcFS(void *p) {
      typedef ::ChnsFsmEmcFS current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmEmcFS

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmTpc(void *p) {
      return  p ? new(p) ::ChnsFsmTpc : new ::ChnsFsmTpc;
   }
   static void *newArray_ChnsFsmTpc(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmTpc[nElements] : new ::ChnsFsmTpc[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmTpc(void *p) {
      delete ((::ChnsFsmTpc*)p);
   }
   static void deleteArray_ChnsFsmTpc(void *p) {
      delete [] ((::ChnsFsmTpc*)p);
   }
   static void destruct_ChnsFsmTpc(void *p) {
      typedef ::ChnsFsmTpc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmTpc

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmStt(void *p) {
      return  p ? new(p) ::ChnsFsmStt : new ::ChnsFsmStt;
   }
   static void *newArray_ChnsFsmStt(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmStt[nElements] : new ::ChnsFsmStt[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmStt(void *p) {
      delete ((::ChnsFsmStt*)p);
   }
   static void deleteArray_ChnsFsmStt(void *p) {
      delete [] ((::ChnsFsmStt*)p);
   }
   static void destruct_ChnsFsmStt(void *p) {
      typedef ::ChnsFsmStt current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmStt

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmMdcFS(void *p) {
      return  p ? new(p) ::ChnsFsmMdcFS : new ::ChnsFsmMdcFS;
   }
   static void *newArray_ChnsFsmMdcFS(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmMdcFS[nElements] : new ::ChnsFsmMdcFS[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmMdcFS(void *p) {
      delete ((::ChnsFsmMdcFS*)p);
   }
   static void deleteArray_ChnsFsmMdcFS(void *p) {
      delete [] ((::ChnsFsmMdcFS*)p);
   }
   static void destruct_ChnsFsmMdcFS(void *p) {
      typedef ::ChnsFsmMdcFS current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmMdcFS

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmMdcTS(void *p) {
      return  p ? new(p) ::ChnsFsmMdcTS : new ::ChnsFsmMdcTS;
   }
   static void *newArray_ChnsFsmMdcTS(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmMdcTS[nElements] : new ::ChnsFsmMdcTS[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmMdcTS(void *p) {
      delete ((::ChnsFsmMdcTS*)p);
   }
   static void deleteArray_ChnsFsmMdcTS(void *p) {
      delete [] ((::ChnsFsmMdcTS*)p);
   }
   static void destruct_ChnsFsmMdcTS(void *p) {
      typedef ::ChnsFsmMdcTS current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmMdcTS

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmRich(void *p) {
      return  p ? new(p) ::ChnsFsmRich : new ::ChnsFsmRich;
   }
   static void *newArray_ChnsFsmRich(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmRich[nElements] : new ::ChnsFsmRich[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmRich(void *p) {
      delete ((::ChnsFsmRich*)p);
   }
   static void deleteArray_ChnsFsmRich(void *p) {
      delete [] ((::ChnsFsmRich*)p);
   }
   static void destruct_ChnsFsmRich(void *p) {
      typedef ::ChnsFsmRich current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmRich

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmDrcDisc(void *p) {
      return  p ? new(p) ::ChnsFsmDrcDisc : new ::ChnsFsmDrcDisc;
   }
   static void *newArray_ChnsFsmDrcDisc(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmDrcDisc[nElements] : new ::ChnsFsmDrcDisc[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmDrcDisc(void *p) {
      delete ((::ChnsFsmDrcDisc*)p);
   }
   static void deleteArray_ChnsFsmDrcDisc(void *p) {
      delete [] ((::ChnsFsmDrcDisc*)p);
   }
   static void destruct_ChnsFsmDrcDisc(void *p) {
      typedef ::ChnsFsmDrcDisc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmDrcDisc

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmDrcBarrel(void *p) {
      return  p ? new(p) ::ChnsFsmDrcBarrel : new ::ChnsFsmDrcBarrel;
   }
   static void *newArray_ChnsFsmDrcBarrel(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmDrcBarrel[nElements] : new ::ChnsFsmDrcBarrel[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmDrcBarrel(void *p) {
      delete ((::ChnsFsmDrcBarrel*)p);
   }
   static void deleteArray_ChnsFsmDrcBarrel(void *p) {
      delete [] ((::ChnsFsmDrcBarrel*)p);
   }
   static void destruct_ChnsFsmDrcBarrel(void *p) {
      typedef ::ChnsFsmDrcBarrel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmDrcBarrel

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmEffTracker(void *p) {
      return  p ? new(p) ::ChnsFsmEffTracker : new ::ChnsFsmEffTracker;
   }
   static void *newArray_ChnsFsmEffTracker(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmEffTracker[nElements] : new ::ChnsFsmEffTracker[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmEffTracker(void *p) {
      delete ((::ChnsFsmEffTracker*)p);
   }
   static void deleteArray_ChnsFsmEffTracker(void *p) {
      delete [] ((::ChnsFsmEffTracker*)p);
   }
   static void destruct_ChnsFsmEffTracker(void *p) {
      typedef ::ChnsFsmEffTracker current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmEffTracker

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmMvd(void *p) {
      return  p ? new(p) ::ChnsFsmMvd : new ::ChnsFsmMvd;
   }
   static void *newArray_ChnsFsmMvd(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmMvd[nElements] : new ::ChnsFsmMvd[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmMvd(void *p) {
      delete ((::ChnsFsmMvd*)p);
   }
   static void deleteArray_ChnsFsmMvd(void *p) {
      delete [] ((::ChnsFsmMvd*)p);
   }
   static void destruct_ChnsFsmMvd(void *p) {
      typedef ::ChnsFsmMvd current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmMvd

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmMvd2(void *p) {
      return  p ? new(p) ::ChnsFsmMvd2 : new ::ChnsFsmMvd2;
   }
   static void *newArray_ChnsFsmMvd2(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmMvd2[nElements] : new ::ChnsFsmMvd2[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmMvd2(void *p) {
      delete ((::ChnsFsmMvd2*)p);
   }
   static void deleteArray_ChnsFsmMvd2(void *p) {
      delete [] ((::ChnsFsmMvd2*)p);
   }
   static void destruct_ChnsFsmMvd2(void *p) {
      typedef ::ChnsFsmMvd2 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmMvd2

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmTof(void *p) {
      return  p ? new(p) ::ChnsFsmTof : new ::ChnsFsmTof;
   }
   static void *newArray_ChnsFsmTof(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmTof[nElements] : new ::ChnsFsmTof[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmTof(void *p) {
      delete ((::ChnsFsmTof*)p);
   }
   static void deleteArray_ChnsFsmTof(void *p) {
      delete [] ((::ChnsFsmTof*)p);
   }
   static void destruct_ChnsFsmTof(void *p) {
      typedef ::ChnsFsmTof current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmTof

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmTofBwCap(void *p) {
      return  p ? new(p) ::ChnsFsmTofBwCap : new ::ChnsFsmTofBwCap;
   }
   static void *newArray_ChnsFsmTofBwCap(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmTofBwCap[nElements] : new ::ChnsFsmTofBwCap[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmTofBwCap(void *p) {
      delete ((::ChnsFsmTofBwCap*)p);
   }
   static void deleteArray_ChnsFsmTofBwCap(void *p) {
      delete [] ((::ChnsFsmTofBwCap*)p);
   }
   static void destruct_ChnsFsmTofBwCap(void *p) {
      typedef ::ChnsFsmTofBwCap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmTofBwCap

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmTofFwCap(void *p) {
      return  p ? new(p) ::ChnsFsmTofFwCap : new ::ChnsFsmTofFwCap;
   }
   static void *newArray_ChnsFsmTofFwCap(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmTofFwCap[nElements] : new ::ChnsFsmTofFwCap[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmTofFwCap(void *p) {
      delete ((::ChnsFsmTofFwCap*)p);
   }
   static void deleteArray_ChnsFsmTofFwCap(void *p) {
      delete [] ((::ChnsFsmTofFwCap*)p);
   }
   static void destruct_ChnsFsmTofFwCap(void *p) {
      typedef ::ChnsFsmTofFwCap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmTofFwCap

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmGemBwCap(void *p) {
      return  p ? new(p) ::ChnsFsmGemBwCap : new ::ChnsFsmGemBwCap;
   }
   static void *newArray_ChnsFsmGemBwCap(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmGemBwCap[nElements] : new ::ChnsFsmGemBwCap[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmGemBwCap(void *p) {
      delete ((::ChnsFsmGemBwCap*)p);
   }
   static void deleteArray_ChnsFsmGemBwCap(void *p) {
      delete [] ((::ChnsFsmGemBwCap*)p);
   }
   static void destruct_ChnsFsmGemBwCap(void *p) {
      typedef ::ChnsFsmGemBwCap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmGemBwCap

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmGemFwCap(void *p) {
      return  p ? new(p) ::ChnsFsmGemFwCap : new ::ChnsFsmGemFwCap;
   }
   static void *newArray_ChnsFsmGemFwCap(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmGemFwCap[nElements] : new ::ChnsFsmGemFwCap[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmGemFwCap(void *p) {
      delete ((::ChnsFsmGemFwCap*)p);
   }
   static void deleteArray_ChnsFsmGemFwCap(void *p) {
      delete [] ((::ChnsFsmGemFwCap*)p);
   }
   static void destruct_ChnsFsmGemFwCap(void *p) {
      typedef ::ChnsFsmGemFwCap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmGemFwCap

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmCmpDet(void *p) {
      return  p ? new(p) ::ChnsFsmCmpDet : new ::ChnsFsmCmpDet;
   }
   static void *newArray_ChnsFsmCmpDet(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmCmpDet[nElements] : new ::ChnsFsmCmpDet[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmCmpDet(void *p) {
      delete ((::ChnsFsmCmpDet*)p);
   }
   static void deleteArray_ChnsFsmCmpDet(void *p) {
      delete [] ((::ChnsFsmCmpDet*)p);
   }
   static void destruct_ChnsFsmCmpDet(void *p) {
      typedef ::ChnsFsmCmpDet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmCmpDet

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmCombiDet(void *p) {
      return  p ? new(p) ::ChnsFsmCombiDet : new ::ChnsFsmCombiDet;
   }
   static void *newArray_ChnsFsmCombiDet(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmCombiDet[nElements] : new ::ChnsFsmCombiDet[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmCombiDet(void *p) {
      delete ((::ChnsFsmCombiDet*)p);
   }
   static void deleteArray_ChnsFsmCombiDet(void *p) {
      delete [] ((::ChnsFsmCombiDet*)p);
   }
   static void destruct_ChnsFsmCombiDet(void *p) {
      typedef ::ChnsFsmCombiDet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmCombiDet

namespace ROOT {
} // end of namespace ROOT for class ::ChnsFsmRandom

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmMvdPid(void *p) {
      return  p ? new(p) ::ChnsFsmMvdPid : new ::ChnsFsmMvdPid;
   }
   static void *newArray_ChnsFsmMvdPid(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmMvdPid[nElements] : new ::ChnsFsmMvdPid[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmMvdPid(void *p) {
      delete ((::ChnsFsmMvdPid*)p);
   }
   static void deleteArray_ChnsFsmMvdPid(void *p) {
      delete [] ((::ChnsFsmMvdPid*)p);
   }
   static void destruct_ChnsFsmMvdPid(void *p) {
      typedef ::ChnsFsmMvdPid current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmMvdPid

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmTpcPid(void *p) {
      return  p ? new(p) ::ChnsFsmTpcPid : new ::ChnsFsmTpcPid;
   }
   static void *newArray_ChnsFsmTpcPid(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmTpcPid[nElements] : new ::ChnsFsmTpcPid[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmTpcPid(void *p) {
      delete ((::ChnsFsmTpcPid*)p);
   }
   static void deleteArray_ChnsFsmTpcPid(void *p) {
      delete [] ((::ChnsFsmTpcPid*)p);
   }
   static void destruct_ChnsFsmTpcPid(void *p) {
      typedef ::ChnsFsmTpcPid current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmTpcPid

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmSttPid(void *p) {
      return  p ? new(p) ::ChnsFsmSttPid : new ::ChnsFsmSttPid;
   }
   static void *newArray_ChnsFsmSttPid(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmSttPid[nElements] : new ::ChnsFsmSttPid[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmSttPid(void *p) {
      delete ((::ChnsFsmSttPid*)p);
   }
   static void deleteArray_ChnsFsmSttPid(void *p) {
      delete [] ((::ChnsFsmSttPid*)p);
   }
   static void destruct_ChnsFsmSttPid(void *p) {
      typedef ::ChnsFsmSttPid current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmSttPid

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmSimpleVtx(void *p) {
      return  p ? new(p) ::ChnsFsmSimpleVtx : new ::ChnsFsmSimpleVtx;
   }
   static void *newArray_ChnsFsmSimpleVtx(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmSimpleVtx[nElements] : new ::ChnsFsmSimpleVtx[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmSimpleVtx(void *p) {
      delete ((::ChnsFsmSimpleVtx*)p);
   }
   static void deleteArray_ChnsFsmSimpleVtx(void *p) {
      delete [] ((::ChnsFsmSimpleVtx*)p);
   }
   static void destruct_ChnsFsmSimpleVtx(void *p) {
      typedef ::ChnsFsmSimpleVtx current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmSimpleVtx

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmMdtPid(void *p) {
      return  p ? new(p) ::ChnsFsmMdtPid : new ::ChnsFsmMdtPid;
   }
   static void *newArray_ChnsFsmMdtPid(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmMdtPid[nElements] : new ::ChnsFsmMdtPid[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmMdtPid(void *p) {
      delete ((::ChnsFsmMdtPid*)p);
   }
   static void deleteArray_ChnsFsmMdtPid(void *p) {
      delete [] ((::ChnsFsmMdtPid*)p);
   }
   static void destruct_ChnsFsmMdtPid(void *p) {
      typedef ::ChnsFsmMdtPid current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmMdtPid

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmEmcPid(void *p) {
      return  p ? new(p) ::ChnsFsmEmcPid : new ::ChnsFsmEmcPid;
   }
   static void *newArray_ChnsFsmEmcPid(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmEmcPid[nElements] : new ::ChnsFsmEmcPid[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmEmcPid(void *p) {
      delete ((::ChnsFsmEmcPid*)p);
   }
   static void deleteArray_ChnsFsmEmcPid(void *p) {
      delete [] ((::ChnsFsmEmcPid*)p);
   }
   static void destruct_ChnsFsmEmcPid(void *p) {
      typedef ::ChnsFsmEmcPid current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmEmcPid

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsFsmIdealPid(void *p) {
      return  p ? new(p) ::ChnsFsmIdealPid : new ::ChnsFsmIdealPid;
   }
   static void *newArray_ChnsFsmIdealPid(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsFsmIdealPid[nElements] : new ::ChnsFsmIdealPid[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsFsmIdealPid(void *p) {
      delete ((::ChnsFsmIdealPid*)p);
   }
   static void deleteArray_ChnsFsmIdealPid(void *p) {
      delete [] ((::ChnsFsmIdealPid*)p);
   }
   static void destruct_ChnsFsmIdealPid(void *p) {
      typedef ::ChnsFsmIdealPid current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsFsmIdealPid

namespace ROOT {
   static TClass *maplEintcOTSpline3mUgR_Dictionary();
   static void maplEintcOTSpline3mUgR_TClassManip(TClass*);
   static void *new_maplEintcOTSpline3mUgR(void *p = 0);
   static void *newArray_maplEintcOTSpline3mUgR(Long_t size, void *p);
   static void delete_maplEintcOTSpline3mUgR(void *p);
   static void deleteArray_maplEintcOTSpline3mUgR(void *p);
   static void destruct_maplEintcOTSpline3mUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,TSpline3*>*)
   {
      map<int,TSpline3*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,TSpline3*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,TSpline3*>", -2, "map", 99,
                  typeid(map<int,TSpline3*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOTSpline3mUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,TSpline3*>) );
      instance.SetNew(&new_maplEintcOTSpline3mUgR);
      instance.SetNewArray(&newArray_maplEintcOTSpline3mUgR);
      instance.SetDelete(&delete_maplEintcOTSpline3mUgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOTSpline3mUgR);
      instance.SetDestructor(&destruct_maplEintcOTSpline3mUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,TSpline3*> >()));

      ::ROOT::AddClassAlternate("map<int,TSpline3*>","std::map<int, TSpline3*, std::less<int>, std::allocator<std::pair<int const, TSpline3*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,TSpline3*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOTSpline3mUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,TSpline3*>*)0x0)->GetClass();
      maplEintcOTSpline3mUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOTSpline3mUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOTSpline3mUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TSpline3*> : new map<int,TSpline3*>;
   }
   static void *newArray_maplEintcOTSpline3mUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TSpline3*>[nElements] : new map<int,TSpline3*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOTSpline3mUgR(void *p) {
      delete ((map<int,TSpline3*>*)p);
   }
   static void deleteArray_maplEintcOTSpline3mUgR(void *p) {
      delete [] ((map<int,TSpline3*>*)p);
   }
   static void destruct_maplEintcOTSpline3mUgR(void *p) {
      typedef map<int,TSpline3*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,TSpline3*>

namespace ROOT {
   static TClass *maplEintcOTParameterlEdoublegRmUgR_Dictionary();
   static void maplEintcOTParameterlEdoublegRmUgR_TClassManip(TClass*);
   static void *new_maplEintcOTParameterlEdoublegRmUgR(void *p = 0);
   static void *newArray_maplEintcOTParameterlEdoublegRmUgR(Long_t size, void *p);
   static void delete_maplEintcOTParameterlEdoublegRmUgR(void *p);
   static void deleteArray_maplEintcOTParameterlEdoublegRmUgR(void *p);
   static void destruct_maplEintcOTParameterlEdoublegRmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,TParameter<double>*>*)
   {
      map<int,TParameter<double>*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,TParameter<double>*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,TParameter<double>*>", -2, "map", 99,
                  typeid(map<int,TParameter<double>*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOTParameterlEdoublegRmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,TParameter<double>*>) );
      instance.SetNew(&new_maplEintcOTParameterlEdoublegRmUgR);
      instance.SetNewArray(&newArray_maplEintcOTParameterlEdoublegRmUgR);
      instance.SetDelete(&delete_maplEintcOTParameterlEdoublegRmUgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOTParameterlEdoublegRmUgR);
      instance.SetDestructor(&destruct_maplEintcOTParameterlEdoublegRmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,TParameter<double>*> >()));

      ::ROOT::AddClassAlternate("map<int,TParameter<double>*>","std::map<int, TParameter<double>*, std::less<int>, std::allocator<std::pair<int const, TParameter<double>*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,TParameter<double>*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOTParameterlEdoublegRmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,TParameter<double>*>*)0x0)->GetClass();
      maplEintcOTParameterlEdoublegRmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOTParameterlEdoublegRmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOTParameterlEdoublegRmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TParameter<double>*> : new map<int,TParameter<double>*>;
   }
   static void *newArray_maplEintcOTParameterlEdoublegRmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TParameter<double>*>[nElements] : new map<int,TParameter<double>*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOTParameterlEdoublegRmUgR(void *p) {
      delete ((map<int,TParameter<double>*>*)p);
   }
   static void deleteArray_maplEintcOTParameterlEdoublegRmUgR(void *p) {
      delete [] ((map<int,TParameter<double>*>*)p);
   }
   static void destruct_maplEintcOTParameterlEdoublegRmUgR(void *p) {
      typedef map<int,TParameter<double>*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,TParameter<double>*>

namespace ROOT {
   static TClass *maplEintcOTF1mUgR_Dictionary();
   static void maplEintcOTF1mUgR_TClassManip(TClass*);
   static void *new_maplEintcOTF1mUgR(void *p = 0);
   static void *newArray_maplEintcOTF1mUgR(Long_t size, void *p);
   static void delete_maplEintcOTF1mUgR(void *p);
   static void deleteArray_maplEintcOTF1mUgR(void *p);
   static void destruct_maplEintcOTF1mUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,TF1*>*)
   {
      map<int,TF1*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,TF1*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,TF1*>", -2, "map", 99,
                  typeid(map<int,TF1*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOTF1mUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,TF1*>) );
      instance.SetNew(&new_maplEintcOTF1mUgR);
      instance.SetNewArray(&newArray_maplEintcOTF1mUgR);
      instance.SetDelete(&delete_maplEintcOTF1mUgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOTF1mUgR);
      instance.SetDestructor(&destruct_maplEintcOTF1mUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,TF1*> >()));

      ::ROOT::AddClassAlternate("map<int,TF1*>","std::map<int, TF1*, std::less<int>, std::allocator<std::pair<int const, TF1*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,TF1*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOTF1mUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,TF1*>*)0x0)->GetClass();
      maplEintcOTF1mUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOTF1mUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOTF1mUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TF1*> : new map<int,TF1*>;
   }
   static void *newArray_maplEintcOTF1mUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TF1*>[nElements] : new map<int,TF1*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOTF1mUgR(void *p) {
      delete ((map<int,TF1*>*)p);
   }
   static void deleteArray_maplEintcOTF1mUgR(void *p) {
      delete [] ((map<int,TF1*>*)p);
   }
   static void destruct_maplEintcOTF1mUgR(void *p) {
      typedef map<int,TF1*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,TF1*>

namespace ROOT {
   static TClass *listlEChnsFsmAbsDetmUgR_Dictionary();
   static void listlEChnsFsmAbsDetmUgR_TClassManip(TClass*);
   static void *new_listlEChnsFsmAbsDetmUgR(void *p = 0);
   static void *newArray_listlEChnsFsmAbsDetmUgR(Long_t size, void *p);
   static void delete_listlEChnsFsmAbsDetmUgR(void *p);
   static void deleteArray_listlEChnsFsmAbsDetmUgR(void *p);
   static void destruct_listlEChnsFsmAbsDetmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const list<ChnsFsmAbsDet*>*)
   {
      list<ChnsFsmAbsDet*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(list<ChnsFsmAbsDet*>));
      static ::ROOT::TGenericClassInfo 
         instance("list<ChnsFsmAbsDet*>", -2, "list", 503,
                  typeid(list<ChnsFsmAbsDet*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &listlEChnsFsmAbsDetmUgR_Dictionary, isa_proxy, 0,
                  sizeof(list<ChnsFsmAbsDet*>) );
      instance.SetNew(&new_listlEChnsFsmAbsDetmUgR);
      instance.SetNewArray(&newArray_listlEChnsFsmAbsDetmUgR);
      instance.SetDelete(&delete_listlEChnsFsmAbsDetmUgR);
      instance.SetDeleteArray(&deleteArray_listlEChnsFsmAbsDetmUgR);
      instance.SetDestructor(&destruct_listlEChnsFsmAbsDetmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< list<ChnsFsmAbsDet*> >()));

      ::ROOT::AddClassAlternate("list<ChnsFsmAbsDet*>","std::__cxx11::list<ChnsFsmAbsDet*, std::allocator<ChnsFsmAbsDet*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const list<ChnsFsmAbsDet*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *listlEChnsFsmAbsDetmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const list<ChnsFsmAbsDet*>*)0x0)->GetClass();
      listlEChnsFsmAbsDetmUgR_TClassManip(theClass);
   return theClass;
   }

   static void listlEChnsFsmAbsDetmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_listlEChnsFsmAbsDetmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<ChnsFsmAbsDet*> : new list<ChnsFsmAbsDet*>;
   }
   static void *newArray_listlEChnsFsmAbsDetmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) list<ChnsFsmAbsDet*>[nElements] : new list<ChnsFsmAbsDet*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_listlEChnsFsmAbsDetmUgR(void *p) {
      delete ((list<ChnsFsmAbsDet*>*)p);
   }
   static void deleteArray_listlEChnsFsmAbsDetmUgR(void *p) {
      delete [] ((list<ChnsFsmAbsDet*>*)p);
   }
   static void destruct_listlEChnsFsmAbsDetmUgR(void *p) {
      typedef list<ChnsFsmAbsDet*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class list<ChnsFsmAbsDet*>

namespace {
  void TriggerDictionaryInitialization_G__fsimDict_Impl() {
    static const char* headers[] = {
"ChnsFastSim.h",
"ChnsFsmTrack.h",
"ChnsFsmResponse.h",
"ChnsFsmAbsDet.h",
"ChnsFsmDetFactory.h",
"ChnsFsmEmcBarrel.h",
"ChnsFsmEmcBwCap.h",
"ChnsFsmEmcFwCap.h",
"ChnsFsmEmcFS.h",
"ChnsFsmTpc.h",
"ChnsFsmStt.h",
"ChnsFsmMdcFS.h",
"ChnsFsmMdcTS.h",
"ChnsFsmRich.h",
"ChnsFsmDrcDisc.h",
"ChnsFsmDrcBarrel.h",
"ChnsFsmEffTracker.h",
"ChnsFsmMvd.h",
"ChnsFsmMvd2.h",
"ChnsFsmTof.h",
"ChnsFsmTofBwCap.h",
"ChnsFsmTofFwCap.h",
"ChnsFsmGemBwCap.h",
"ChnsFsmGemFwCap.h",
"ChnsFsmSimpleTracker.h",
"ChnsFsmCmpDet.h",
"ChnsFsmCombiDet.h",
"ChnsFsmRandom.h",
"ChnsFsmMvdPid.h",
"ChnsFsmTpcPid.h",
"ChnsFsmSttPid.h",
"ChnsFsmSimpleVtx.h",
"ChnsFsmMdtPid.h",
"ChnsFsmEmcPid.h",
"ChnsFsmIdealPid.h",
0
    };
    static const char* includePaths[] = {
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/trackbase",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/ChnsData",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/ChnsData/PidData",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/passive",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/scrut",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/RhoBase",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/RhoSelector",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/ChnsTools/AnalysisTools",
"/home/eicc/software/FairSoft/install/include/root",
"/home/eicc/software/FairSoft/install/include",
"/home/eicc/FairRoot/build_18.4.2/include",
"/home/eicc/software/FairSoft/install/include/root",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/build/fsim/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__fsimDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$ChnsFastSim.h")))  ChnsFastSim;
class __attribute__((annotate("$clingAutoload$ChnsFsmTrack.h")))  ChnsFsmTrack;
class __attribute__((annotate("$clingAutoload$ChnsFsmResponse.h")))  ChnsFsmResponse;
class __attribute__((annotate("$clingAutoload$ChnsFsmAbsDet.h")))  ChnsFsmAbsDet;
class __attribute__((annotate("$clingAutoload$ChnsFsmDetFactory.h")))  ChnsFsmDetFactory;
class __attribute__((annotate("$clingAutoload$ChnsFsmEmcBarrel.h")))  ChnsFsmEmcBarrel;
class __attribute__((annotate("$clingAutoload$ChnsFsmEmcBwCap.h")))  ChnsFsmEmcBwCap;
class __attribute__((annotate("$clingAutoload$ChnsFsmEmcFwCap.h")))  ChnsFsmEmcFwCap;
class __attribute__((annotate("$clingAutoload$ChnsFsmEmcFS.h")))  ChnsFsmEmcFS;
class __attribute__((annotate("$clingAutoload$ChnsFsmTpc.h")))  ChnsFsmTpc;
class __attribute__((annotate("$clingAutoload$ChnsFsmStt.h")))  ChnsFsmStt;
class __attribute__((annotate("$clingAutoload$ChnsFsmMdcFS.h")))  ChnsFsmMdcFS;
class __attribute__((annotate("$clingAutoload$ChnsFsmMdcTS.h")))  ChnsFsmMdcTS;
class __attribute__((annotate("$clingAutoload$ChnsFsmRich.h")))  ChnsFsmRich;
class __attribute__((annotate("$clingAutoload$ChnsFsmDrcDisc.h")))  ChnsFsmDrcDisc;
class __attribute__((annotate("$clingAutoload$ChnsFsmDrcBarrel.h")))  ChnsFsmDrcBarrel;
class __attribute__((annotate("$clingAutoload$ChnsFsmEffTracker.h")))  ChnsFsmEffTracker;
class __attribute__((annotate("$clingAutoload$ChnsFsmMvd.h")))  ChnsFsmMvd;
class __attribute__((annotate("$clingAutoload$ChnsFsmMvd2.h")))  ChnsFsmMvd2;
class __attribute__((annotate("$clingAutoload$ChnsFsmTof.h")))  ChnsFsmTof;
class __attribute__((annotate("$clingAutoload$ChnsFsmTofBwCap.h")))  ChnsFsmTofBwCap;
class __attribute__((annotate("$clingAutoload$ChnsFsmTofFwCap.h")))  ChnsFsmTofFwCap;
class __attribute__((annotate("$clingAutoload$ChnsFsmGemBwCap.h")))  ChnsFsmGemBwCap;
class __attribute__((annotate("$clingAutoload$ChnsFsmGemFwCap.h")))  ChnsFsmGemFwCap;
class __attribute__((annotate("$clingAutoload$ChnsFsmCmpDet.h")))  ChnsFsmCmpDet;
class __attribute__((annotate("$clingAutoload$ChnsFsmCombiDet.h")))  ChnsFsmCombiDet;
class __attribute__((annotate("$clingAutoload$ChnsFsmRandom.h")))  ChnsFsmRandom;
class __attribute__((annotate("$clingAutoload$ChnsFsmMvdPid.h")))  ChnsFsmMvdPid;
class __attribute__((annotate("$clingAutoload$ChnsFsmTpcPid.h")))  ChnsFsmTpcPid;
class __attribute__((annotate("$clingAutoload$ChnsFsmSttPid.h")))  ChnsFsmSttPid;
class __attribute__((annotate("$clingAutoload$ChnsFsmSimpleVtx.h")))  ChnsFsmSimpleVtx;
class __attribute__((annotate("$clingAutoload$ChnsFsmMdtPid.h")))  ChnsFsmMdtPid;
class __attribute__((annotate("$clingAutoload$ChnsFsmEmcPid.h")))  ChnsFsmEmcPid;
class __attribute__((annotate("$clingAutoload$ChnsFsmIdealPid.h")))  ChnsFsmIdealPid;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__fsimDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "ChnsFastSim.h"
#include "ChnsFsmTrack.h"
#include "ChnsFsmResponse.h"
#include "ChnsFsmAbsDet.h"
#include "ChnsFsmDetFactory.h"
#include "ChnsFsmEmcBarrel.h"
#include "ChnsFsmEmcBwCap.h"
#include "ChnsFsmEmcFwCap.h"
#include "ChnsFsmEmcFS.h"
#include "ChnsFsmTpc.h"
#include "ChnsFsmStt.h"
#include "ChnsFsmMdcFS.h"
#include "ChnsFsmMdcTS.h"
#include "ChnsFsmRich.h"
#include "ChnsFsmDrcDisc.h"
#include "ChnsFsmDrcBarrel.h"
#include "ChnsFsmEffTracker.h"
#include "ChnsFsmMvd.h"
#include "ChnsFsmMvd2.h"
#include "ChnsFsmTof.h"
#include "ChnsFsmTofBwCap.h"
#include "ChnsFsmTofFwCap.h"
#include "ChnsFsmGemBwCap.h"
#include "ChnsFsmGemFwCap.h"
#include "ChnsFsmSimpleTracker.h"
#include "ChnsFsmCmpDet.h"
#include "ChnsFsmCombiDet.h"
#include "ChnsFsmRandom.h"
#include "ChnsFsmMvdPid.h"
#include "ChnsFsmTpcPid.h"
#include "ChnsFsmSttPid.h"
#include "ChnsFsmSimpleVtx.h"
#include "ChnsFsmMdtPid.h"
#include "ChnsFsmEmcPid.h"
#include "ChnsFsmIdealPid.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"ChnsFastSim", payloadCode, "@",
"ChnsFsmAbsDet", payloadCode, "@",
"ChnsFsmCmpDet", payloadCode, "@",
"ChnsFsmCombiDet", payloadCode, "@",
"ChnsFsmDetFactory", payloadCode, "@",
"ChnsFsmDrcBarrel", payloadCode, "@",
"ChnsFsmDrcDisc", payloadCode, "@",
"ChnsFsmEffTracker", payloadCode, "@",
"ChnsFsmEmcBarrel", payloadCode, "@",
"ChnsFsmEmcBwCap", payloadCode, "@",
"ChnsFsmEmcFS", payloadCode, "@",
"ChnsFsmEmcFwCap", payloadCode, "@",
"ChnsFsmEmcPid", payloadCode, "@",
"ChnsFsmGemBwCap", payloadCode, "@",
"ChnsFsmGemFwCap", payloadCode, "@",
"ChnsFsmIdealPid", payloadCode, "@",
"ChnsFsmMdcFS", payloadCode, "@",
"ChnsFsmMdcTS", payloadCode, "@",
"ChnsFsmMdtPid", payloadCode, "@",
"ChnsFsmMvd", payloadCode, "@",
"ChnsFsmMvd2", payloadCode, "@",
"ChnsFsmMvdPid", payloadCode, "@",
"ChnsFsmRandom", payloadCode, "@",
"ChnsFsmResponse", payloadCode, "@",
"ChnsFsmRich", payloadCode, "@",
"ChnsFsmSimpleVtx", payloadCode, "@",
"ChnsFsmStt", payloadCode, "@",
"ChnsFsmSttPid", payloadCode, "@",
"ChnsFsmTof", payloadCode, "@",
"ChnsFsmTofBwCap", payloadCode, "@",
"ChnsFsmTofFwCap", payloadCode, "@",
"ChnsFsmTpc", payloadCode, "@",
"ChnsFsmTpcPid", payloadCode, "@",
"ChnsFsmTrack", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__fsimDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__fsimDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__fsimDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__fsimDict() {
  TriggerDictionaryInitialization_G__fsimDict_Impl();
}
