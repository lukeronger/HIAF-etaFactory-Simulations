// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdata2dIrwangdIgithubsdIHIAFmIetaFactorymISimulationsdIChnsRoot_v2dIbuilddIChnsDatadIG__ChnsDataDict
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
#include "ChnsStack.h"
#include "ChnsMCTrack.h"
#include "PidData/ChnsPidCandidate.h"
#include "PidData/ChnsPidProbability.h"
#include "PidData/ChnsPidBremCorrected4Mom.h"
#include "TrackData/ChnsTrackCandHit.h"
#include "TrackData/ChnsTrackCand.h"
#include "TrackData/ChnsTrack.h"
#include "TrackData/ChnsSimpleTrack.h"
#include "TrackData/ChnsTrackID.h"
#include "FairRecoCandidate.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_ChnsStack(void *p = 0);
   static void *newArray_ChnsStack(Long_t size, void *p);
   static void delete_ChnsStack(void *p);
   static void deleteArray_ChnsStack(void *p);
   static void destruct_ChnsStack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsStack*)
   {
      ::ChnsStack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsStack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsStack", ::ChnsStack::Class_Version(), "ChnsStack.h", 48,
                  typeid(::ChnsStack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsStack::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsStack) );
      instance.SetNew(&new_ChnsStack);
      instance.SetNewArray(&newArray_ChnsStack);
      instance.SetDelete(&delete_ChnsStack);
      instance.SetDeleteArray(&deleteArray_ChnsStack);
      instance.SetDestructor(&destruct_ChnsStack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsStack*)
   {
      return GenerateInitInstanceLocal((::ChnsStack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsStack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsMCTrack(void *p = 0);
   static void *newArray_ChnsMCTrack(Long_t size, void *p);
   static void delete_ChnsMCTrack(void *p);
   static void deleteArray_ChnsMCTrack(void *p);
   static void destruct_ChnsMCTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsMCTrack*)
   {
      ::ChnsMCTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsMCTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsMCTrack", ::ChnsMCTrack::Class_Version(), "ChnsMCTrack.h", 33,
                  typeid(::ChnsMCTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsMCTrack::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsMCTrack) );
      instance.SetNew(&new_ChnsMCTrack);
      instance.SetNewArray(&newArray_ChnsMCTrack);
      instance.SetDelete(&delete_ChnsMCTrack);
      instance.SetDeleteArray(&deleteArray_ChnsMCTrack);
      instance.SetDestructor(&destruct_ChnsMCTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsMCTrack*)
   {
      return GenerateInitInstanceLocal((::ChnsMCTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsMCTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_FairRecoCandidate(void *p);
   static void deleteArray_FairRecoCandidate(void *p);
   static void destruct_FairRecoCandidate(void *p);
   static void streamer_FairRecoCandidate(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FairRecoCandidate*)
   {
      ::FairRecoCandidate *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::FairRecoCandidate >(0);
      static ::ROOT::TGenericClassInfo 
         instance("FairRecoCandidate", ::FairRecoCandidate::Class_Version(), "FairRecoCandidate.h", 30,
                  typeid(::FairRecoCandidate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::FairRecoCandidate::Dictionary, isa_proxy, 16,
                  sizeof(::FairRecoCandidate) );
      instance.SetDelete(&delete_FairRecoCandidate);
      instance.SetDeleteArray(&deleteArray_FairRecoCandidate);
      instance.SetDestructor(&destruct_FairRecoCandidate);
      instance.SetStreamerFunc(&streamer_FairRecoCandidate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FairRecoCandidate*)
   {
      return GenerateInitInstanceLocal((::FairRecoCandidate*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::FairRecoCandidate*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsPidCandidate(void *p = 0);
   static void *newArray_ChnsPidCandidate(Long_t size, void *p);
   static void delete_ChnsPidCandidate(void *p);
   static void deleteArray_ChnsPidCandidate(void *p);
   static void destruct_ChnsPidCandidate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsPidCandidate*)
   {
      ::ChnsPidCandidate *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsPidCandidate >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsPidCandidate", ::ChnsPidCandidate::Class_Version(), "ChnsPidCandidate.h", 30,
                  typeid(::ChnsPidCandidate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsPidCandidate::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsPidCandidate) );
      instance.SetNew(&new_ChnsPidCandidate);
      instance.SetNewArray(&newArray_ChnsPidCandidate);
      instance.SetDelete(&delete_ChnsPidCandidate);
      instance.SetDeleteArray(&deleteArray_ChnsPidCandidate);
      instance.SetDestructor(&destruct_ChnsPidCandidate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsPidCandidate*)
   {
      return GenerateInitInstanceLocal((::ChnsPidCandidate*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsPidCandidate*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsPidProbability(void *p = 0);
   static void *newArray_ChnsPidProbability(Long_t size, void *p);
   static void delete_ChnsPidProbability(void *p);
   static void deleteArray_ChnsPidProbability(void *p);
   static void destruct_ChnsPidProbability(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsPidProbability*)
   {
      ::ChnsPidProbability *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsPidProbability >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsPidProbability", ::ChnsPidProbability::Class_Version(), "ChnsPidProbability.h", 16,
                  typeid(::ChnsPidProbability), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsPidProbability::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsPidProbability) );
      instance.SetNew(&new_ChnsPidProbability);
      instance.SetNewArray(&newArray_ChnsPidProbability);
      instance.SetDelete(&delete_ChnsPidProbability);
      instance.SetDeleteArray(&deleteArray_ChnsPidProbability);
      instance.SetDestructor(&destruct_ChnsPidProbability);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsPidProbability*)
   {
      return GenerateInitInstanceLocal((::ChnsPidProbability*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsPidProbability*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsPidBremCorrected4Mom(void *p = 0);
   static void *newArray_ChnsPidBremCorrected4Mom(Long_t size, void *p);
   static void delete_ChnsPidBremCorrected4Mom(void *p);
   static void deleteArray_ChnsPidBremCorrected4Mom(void *p);
   static void destruct_ChnsPidBremCorrected4Mom(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsPidBremCorrected4Mom*)
   {
      ::ChnsPidBremCorrected4Mom *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsPidBremCorrected4Mom >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsPidBremCorrected4Mom", ::ChnsPidBremCorrected4Mom::Class_Version(), "ChnsPidBremCorrected4Mom.h", 25,
                  typeid(::ChnsPidBremCorrected4Mom), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsPidBremCorrected4Mom::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsPidBremCorrected4Mom) );
      instance.SetNew(&new_ChnsPidBremCorrected4Mom);
      instance.SetNewArray(&newArray_ChnsPidBremCorrected4Mom);
      instance.SetDelete(&delete_ChnsPidBremCorrected4Mom);
      instance.SetDeleteArray(&deleteArray_ChnsPidBremCorrected4Mom);
      instance.SetDestructor(&destruct_ChnsPidBremCorrected4Mom);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsPidBremCorrected4Mom*)
   {
      return GenerateInitInstanceLocal((::ChnsPidBremCorrected4Mom*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsPidBremCorrected4Mom*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsTrackCandHit(void *p = 0);
   static void *newArray_ChnsTrackCandHit(Long_t size, void *p);
   static void delete_ChnsTrackCandHit(void *p);
   static void deleteArray_ChnsTrackCandHit(void *p);
   static void destruct_ChnsTrackCandHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsTrackCandHit*)
   {
      ::ChnsTrackCandHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsTrackCandHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsTrackCandHit", ::ChnsTrackCandHit::Class_Version(), "ChnsTrackCandHit.h", 35,
                  typeid(::ChnsTrackCandHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsTrackCandHit::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsTrackCandHit) );
      instance.SetNew(&new_ChnsTrackCandHit);
      instance.SetNewArray(&newArray_ChnsTrackCandHit);
      instance.SetDelete(&delete_ChnsTrackCandHit);
      instance.SetDeleteArray(&deleteArray_ChnsTrackCandHit);
      instance.SetDestructor(&destruct_ChnsTrackCandHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsTrackCandHit*)
   {
      return GenerateInitInstanceLocal((::ChnsTrackCandHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsTrackCandHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsTrackCand(void *p = 0);
   static void *newArray_ChnsTrackCand(Long_t size, void *p);
   static void delete_ChnsTrackCand(void *p);
   static void deleteArray_ChnsTrackCand(void *p);
   static void destruct_ChnsTrackCand(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsTrackCand*)
   {
      ::ChnsTrackCand *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsTrackCand >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsTrackCand", ::ChnsTrackCand::Class_Version(), "ChnsTrackCand.h", 43,
                  typeid(::ChnsTrackCand), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsTrackCand::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsTrackCand) );
      instance.SetNew(&new_ChnsTrackCand);
      instance.SetNewArray(&newArray_ChnsTrackCand);
      instance.SetDelete(&delete_ChnsTrackCand);
      instance.SetDeleteArray(&deleteArray_ChnsTrackCand);
      instance.SetDestructor(&destruct_ChnsTrackCand);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsTrackCand*)
   {
      return GenerateInitInstanceLocal((::ChnsTrackCand*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsTrackCand*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsTrack(void *p = 0);
   static void *newArray_ChnsTrack(Long_t size, void *p);
   static void delete_ChnsTrack(void *p);
   static void deleteArray_ChnsTrack(void *p);
   static void destruct_ChnsTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsTrack*)
   {
      ::ChnsTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsTrack", ::ChnsTrack::Class_Version(), "ChnsTrack.h", 23,
                  typeid(::ChnsTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsTrack::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsTrack) );
      instance.SetNew(&new_ChnsTrack);
      instance.SetNewArray(&newArray_ChnsTrack);
      instance.SetDelete(&delete_ChnsTrack);
      instance.SetDeleteArray(&deleteArray_ChnsTrack);
      instance.SetDestructor(&destruct_ChnsTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsTrack*)
   {
      return GenerateInitInstanceLocal((::ChnsTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsSimpleTrack(void *p = 0);
   static void *newArray_ChnsSimpleTrack(Long_t size, void *p);
   static void delete_ChnsSimpleTrack(void *p);
   static void deleteArray_ChnsSimpleTrack(void *p);
   static void destruct_ChnsSimpleTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsSimpleTrack*)
   {
      ::ChnsSimpleTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsSimpleTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsSimpleTrack", ::ChnsSimpleTrack::Class_Version(), "ChnsSimpleTrack.h", 23,
                  typeid(::ChnsSimpleTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsSimpleTrack::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsSimpleTrack) );
      instance.SetNew(&new_ChnsSimpleTrack);
      instance.SetNewArray(&newArray_ChnsSimpleTrack);
      instance.SetDelete(&delete_ChnsSimpleTrack);
      instance.SetDeleteArray(&deleteArray_ChnsSimpleTrack);
      instance.SetDestructor(&destruct_ChnsSimpleTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsSimpleTrack*)
   {
      return GenerateInitInstanceLocal((::ChnsSimpleTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsSimpleTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsTrackID(void *p = 0);
   static void *newArray_ChnsTrackID(Long_t size, void *p);
   static void delete_ChnsTrackID(void *p);
   static void deleteArray_ChnsTrackID(void *p);
   static void destruct_ChnsTrackID(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsTrackID*)
   {
      ::ChnsTrackID *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsTrackID >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsTrackID", ::ChnsTrackID::Class_Version(), "ChnsTrackID.h", 24,
                  typeid(::ChnsTrackID), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsTrackID::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsTrackID) );
      instance.SetNew(&new_ChnsTrackID);
      instance.SetNewArray(&newArray_ChnsTrackID);
      instance.SetDelete(&delete_ChnsTrackID);
      instance.SetDeleteArray(&deleteArray_ChnsTrackID);
      instance.SetDestructor(&destruct_ChnsTrackID);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsTrackID*)
   {
      return GenerateInitInstanceLocal((::ChnsTrackID*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsTrackID*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr ChnsStack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsStack::Class_Name()
{
   return "ChnsStack";
}

//______________________________________________________________________________
const char *ChnsStack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsStack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsStack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsStack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsStack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsStack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsStack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsStack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsMCTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsMCTrack::Class_Name()
{
   return "ChnsMCTrack";
}

//______________________________________________________________________________
const char *ChnsMCTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsMCTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsMCTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsMCTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsMCTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsMCTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsMCTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsMCTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr FairRecoCandidate::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *FairRecoCandidate::Class_Name()
{
   return "FairRecoCandidate";
}

//______________________________________________________________________________
const char *FairRecoCandidate::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairRecoCandidate*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int FairRecoCandidate::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FairRecoCandidate*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FairRecoCandidate::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairRecoCandidate*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FairRecoCandidate::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FairRecoCandidate*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsPidCandidate::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsPidCandidate::Class_Name()
{
   return "ChnsPidCandidate";
}

//______________________________________________________________________________
const char *ChnsPidCandidate::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsPidCandidate*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsPidCandidate::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsPidCandidate*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsPidCandidate::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsPidCandidate*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsPidCandidate::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsPidCandidate*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsPidProbability::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsPidProbability::Class_Name()
{
   return "ChnsPidProbability";
}

//______________________________________________________________________________
const char *ChnsPidProbability::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsPidProbability*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsPidProbability::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsPidProbability*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsPidProbability::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsPidProbability*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsPidProbability::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsPidProbability*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsPidBremCorrected4Mom::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsPidBremCorrected4Mom::Class_Name()
{
   return "ChnsPidBremCorrected4Mom";
}

//______________________________________________________________________________
const char *ChnsPidBremCorrected4Mom::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsPidBremCorrected4Mom*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsPidBremCorrected4Mom::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsPidBremCorrected4Mom*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsPidBremCorrected4Mom::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsPidBremCorrected4Mom*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsPidBremCorrected4Mom::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsPidBremCorrected4Mom*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsTrackCandHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsTrackCandHit::Class_Name()
{
   return "ChnsTrackCandHit";
}

//______________________________________________________________________________
const char *ChnsTrackCandHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsTrackCandHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsTrackCandHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsTrackCandHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsTrackCandHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsTrackCandHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsTrackCandHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsTrackCandHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsTrackCand::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsTrackCand::Class_Name()
{
   return "ChnsTrackCand";
}

//______________________________________________________________________________
const char *ChnsTrackCand::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsTrackCand*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsTrackCand::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsTrackCand*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsTrackCand::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsTrackCand*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsTrackCand::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsTrackCand*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsTrack::Class_Name()
{
   return "ChnsTrack";
}

//______________________________________________________________________________
const char *ChnsTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsSimpleTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsSimpleTrack::Class_Name()
{
   return "ChnsSimpleTrack";
}

//______________________________________________________________________________
const char *ChnsSimpleTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsSimpleTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsSimpleTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsSimpleTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsSimpleTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsSimpleTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsSimpleTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsSimpleTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsTrackID::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsTrackID::Class_Name()
{
   return "ChnsTrackID";
}

//______________________________________________________________________________
const char *ChnsTrackID::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsTrackID*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsTrackID::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsTrackID*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsTrackID::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsTrackID*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsTrackID::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsTrackID*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void ChnsStack::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsStack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsStack::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsStack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsStack(void *p) {
      return  p ? new(p) ::ChnsStack : new ::ChnsStack;
   }
   static void *newArray_ChnsStack(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsStack[nElements] : new ::ChnsStack[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsStack(void *p) {
      delete ((::ChnsStack*)p);
   }
   static void deleteArray_ChnsStack(void *p) {
      delete [] ((::ChnsStack*)p);
   }
   static void destruct_ChnsStack(void *p) {
      typedef ::ChnsStack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsStack

//______________________________________________________________________________
void ChnsMCTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsMCTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsMCTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsMCTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsMCTrack(void *p) {
      return  p ? new(p) ::ChnsMCTrack : new ::ChnsMCTrack;
   }
   static void *newArray_ChnsMCTrack(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsMCTrack[nElements] : new ::ChnsMCTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsMCTrack(void *p) {
      delete ((::ChnsMCTrack*)p);
   }
   static void deleteArray_ChnsMCTrack(void *p) {
      delete [] ((::ChnsMCTrack*)p);
   }
   static void destruct_ChnsMCTrack(void *p) {
      typedef ::ChnsMCTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsMCTrack

//______________________________________________________________________________
void FairRecoCandidate::Streamer(TBuffer &R__b)
{
   // Stream an object of class FairRecoCandidate.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairMultiLinkedData_Interface::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, FairRecoCandidate::IsA());
   } else {
      R__c = R__b.WriteVersion(FairRecoCandidate::IsA(), kTRUE);
      FairMultiLinkedData_Interface::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_FairRecoCandidate(void *p) {
      delete ((::FairRecoCandidate*)p);
   }
   static void deleteArray_FairRecoCandidate(void *p) {
      delete [] ((::FairRecoCandidate*)p);
   }
   static void destruct_FairRecoCandidate(void *p) {
      typedef ::FairRecoCandidate current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_FairRecoCandidate(TBuffer &buf, void *obj) {
      ((::FairRecoCandidate*)obj)->::FairRecoCandidate::Streamer(buf);
   }
} // end of namespace ROOT for class ::FairRecoCandidate

//______________________________________________________________________________
void ChnsPidCandidate::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsPidCandidate.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsPidCandidate::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsPidCandidate::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsPidCandidate(void *p) {
      return  p ? new(p) ::ChnsPidCandidate : new ::ChnsPidCandidate;
   }
   static void *newArray_ChnsPidCandidate(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsPidCandidate[nElements] : new ::ChnsPidCandidate[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsPidCandidate(void *p) {
      delete ((::ChnsPidCandidate*)p);
   }
   static void deleteArray_ChnsPidCandidate(void *p) {
      delete [] ((::ChnsPidCandidate*)p);
   }
   static void destruct_ChnsPidCandidate(void *p) {
      typedef ::ChnsPidCandidate current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsPidCandidate

//______________________________________________________________________________
void ChnsPidProbability::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsPidProbability.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsPidProbability::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsPidProbability::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsPidProbability(void *p) {
      return  p ? new(p) ::ChnsPidProbability : new ::ChnsPidProbability;
   }
   static void *newArray_ChnsPidProbability(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsPidProbability[nElements] : new ::ChnsPidProbability[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsPidProbability(void *p) {
      delete ((::ChnsPidProbability*)p);
   }
   static void deleteArray_ChnsPidProbability(void *p) {
      delete [] ((::ChnsPidProbability*)p);
   }
   static void destruct_ChnsPidProbability(void *p) {
      typedef ::ChnsPidProbability current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsPidProbability

//______________________________________________________________________________
void ChnsPidBremCorrected4Mom::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsPidBremCorrected4Mom.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsPidBremCorrected4Mom::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsPidBremCorrected4Mom::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsPidBremCorrected4Mom(void *p) {
      return  p ? new(p) ::ChnsPidBremCorrected4Mom : new ::ChnsPidBremCorrected4Mom;
   }
   static void *newArray_ChnsPidBremCorrected4Mom(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsPidBremCorrected4Mom[nElements] : new ::ChnsPidBremCorrected4Mom[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsPidBremCorrected4Mom(void *p) {
      delete ((::ChnsPidBremCorrected4Mom*)p);
   }
   static void deleteArray_ChnsPidBremCorrected4Mom(void *p) {
      delete [] ((::ChnsPidBremCorrected4Mom*)p);
   }
   static void destruct_ChnsPidBremCorrected4Mom(void *p) {
      typedef ::ChnsPidBremCorrected4Mom current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsPidBremCorrected4Mom

//______________________________________________________________________________
void ChnsTrackCandHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsTrackCandHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsTrackCandHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsTrackCandHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsTrackCandHit(void *p) {
      return  p ? new(p) ::ChnsTrackCandHit : new ::ChnsTrackCandHit;
   }
   static void *newArray_ChnsTrackCandHit(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsTrackCandHit[nElements] : new ::ChnsTrackCandHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsTrackCandHit(void *p) {
      delete ((::ChnsTrackCandHit*)p);
   }
   static void deleteArray_ChnsTrackCandHit(void *p) {
      delete [] ((::ChnsTrackCandHit*)p);
   }
   static void destruct_ChnsTrackCandHit(void *p) {
      typedef ::ChnsTrackCandHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsTrackCandHit

//______________________________________________________________________________
void ChnsTrackCand::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsTrackCand.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsTrackCand::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsTrackCand::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsTrackCand(void *p) {
      return  p ? new(p) ::ChnsTrackCand : new ::ChnsTrackCand;
   }
   static void *newArray_ChnsTrackCand(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsTrackCand[nElements] : new ::ChnsTrackCand[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsTrackCand(void *p) {
      delete ((::ChnsTrackCand*)p);
   }
   static void deleteArray_ChnsTrackCand(void *p) {
      delete [] ((::ChnsTrackCand*)p);
   }
   static void destruct_ChnsTrackCand(void *p) {
      typedef ::ChnsTrackCand current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsTrackCand

//______________________________________________________________________________
void ChnsTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsTrack(void *p) {
      return  p ? new(p) ::ChnsTrack : new ::ChnsTrack;
   }
   static void *newArray_ChnsTrack(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsTrack[nElements] : new ::ChnsTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsTrack(void *p) {
      delete ((::ChnsTrack*)p);
   }
   static void deleteArray_ChnsTrack(void *p) {
      delete [] ((::ChnsTrack*)p);
   }
   static void destruct_ChnsTrack(void *p) {
      typedef ::ChnsTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsTrack

//______________________________________________________________________________
void ChnsSimpleTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsSimpleTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsSimpleTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsSimpleTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsSimpleTrack(void *p) {
      return  p ? new(p) ::ChnsSimpleTrack : new ::ChnsSimpleTrack;
   }
   static void *newArray_ChnsSimpleTrack(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsSimpleTrack[nElements] : new ::ChnsSimpleTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsSimpleTrack(void *p) {
      delete ((::ChnsSimpleTrack*)p);
   }
   static void deleteArray_ChnsSimpleTrack(void *p) {
      delete [] ((::ChnsSimpleTrack*)p);
   }
   static void destruct_ChnsSimpleTrack(void *p) {
      typedef ::ChnsSimpleTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsSimpleTrack

//______________________________________________________________________________
void ChnsTrackID::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsTrackID.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsTrackID::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsTrackID::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsTrackID(void *p) {
      return  p ? new(p) ::ChnsTrackID : new ::ChnsTrackID;
   }
   static void *newArray_ChnsTrackID(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsTrackID[nElements] : new ::ChnsTrackID[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsTrackID(void *p) {
      delete ((::ChnsTrackID*)p);
   }
   static void deleteArray_ChnsTrackID(void *p) {
      delete [] ((::ChnsTrackID*)p);
   }
   static void destruct_ChnsTrackID(void *p) {
      typedef ::ChnsTrackID current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsTrackID

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

namespace ROOT {
   static TClass *vectorlEChnsTrackCandHitgR_Dictionary();
   static void vectorlEChnsTrackCandHitgR_TClassManip(TClass*);
   static void *new_vectorlEChnsTrackCandHitgR(void *p = 0);
   static void *newArray_vectorlEChnsTrackCandHitgR(Long_t size, void *p);
   static void delete_vectorlEChnsTrackCandHitgR(void *p);
   static void deleteArray_vectorlEChnsTrackCandHitgR(void *p);
   static void destruct_vectorlEChnsTrackCandHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ChnsTrackCandHit>*)
   {
      vector<ChnsTrackCandHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ChnsTrackCandHit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ChnsTrackCandHit>", -2, "vector", 216,
                  typeid(vector<ChnsTrackCandHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEChnsTrackCandHitgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ChnsTrackCandHit>) );
      instance.SetNew(&new_vectorlEChnsTrackCandHitgR);
      instance.SetNewArray(&newArray_vectorlEChnsTrackCandHitgR);
      instance.SetDelete(&delete_vectorlEChnsTrackCandHitgR);
      instance.SetDeleteArray(&deleteArray_vectorlEChnsTrackCandHitgR);
      instance.SetDestructor(&destruct_vectorlEChnsTrackCandHitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ChnsTrackCandHit> >()));

      ::ROOT::AddClassAlternate("vector<ChnsTrackCandHit>","std::vector<ChnsTrackCandHit, std::allocator<ChnsTrackCandHit> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ChnsTrackCandHit>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEChnsTrackCandHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ChnsTrackCandHit>*)0x0)->GetClass();
      vectorlEChnsTrackCandHitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEChnsTrackCandHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEChnsTrackCandHitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ChnsTrackCandHit> : new vector<ChnsTrackCandHit>;
   }
   static void *newArray_vectorlEChnsTrackCandHitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ChnsTrackCandHit>[nElements] : new vector<ChnsTrackCandHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEChnsTrackCandHitgR(void *p) {
      delete ((vector<ChnsTrackCandHit>*)p);
   }
   static void deleteArray_vectorlEChnsTrackCandHitgR(void *p) {
      delete [] ((vector<ChnsTrackCandHit>*)p);
   }
   static void destruct_vectorlEChnsTrackCandHitgR(void *p) {
      typedef vector<ChnsTrackCandHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ChnsTrackCandHit>

namespace {
  void TriggerDictionaryInitialization_G__ChnsDataDict_Impl() {
    static const char* headers[] = {
"ChnsStack.h",
"ChnsMCTrack.h",
"PidData/ChnsPidCandidate.h",
"PidData/ChnsPidProbability.h",
"PidData/ChnsPidBremCorrected4Mom.h",
"TrackData/ChnsTrackCandHit.h",
"TrackData/ChnsTrackCand.h",
"TrackData/ChnsTrack.h",
"TrackData/ChnsSimpleTrack.h",
"TrackData/ChnsTrackID.h",
"FairRecoCandidate.h",
0
    };
    static const char* includePaths[] = {
"/home/eicc/FairRoot/build_18.4.2/include",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsData",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsData/PidData",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsData/TrackData",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/trackbase",
"/home/eicc/software/FairSoft/install/include/root",
"/home/eicc/software/FairSoft/install/include",
"/home/eicc/FairRoot/build_18.4.2/include",
"/home/eicc/software/FairSoft/install/include/root",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/ChnsData/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__ChnsDataDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$ChnsStack.h")))  ChnsStack;
class __attribute__((annotate("$clingAutoload$ChnsMCTrack.h")))  ChnsMCTrack;
class __attribute__((annotate(R"ATTRDUMP(Abstract base class for MicroDST candidates)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$FairRecoCandidate.h")))  __attribute__((annotate("$clingAutoload$PidData/ChnsPidCandidate.h")))  FairRecoCandidate;
class __attribute__((annotate(R"ATTRDUMP(Abstract base class for MicroDST candidates)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$PidData/ChnsPidCandidate.h")))  ChnsPidCandidate;
class __attribute__((annotate("$clingAutoload$PidData/ChnsPidProbability.h")))  ChnsPidProbability;
class __attribute__((annotate("$clingAutoload$PidData/ChnsPidBremCorrected4Mom.h")))  ChnsPidBremCorrected4Mom;
class __attribute__((annotate("$clingAutoload$TrackData/ChnsTrackCandHit.h")))  ChnsTrackCandHit;
class __attribute__((annotate("$clingAutoload$TrackData/ChnsTrackCand.h")))  ChnsTrackCand;
class __attribute__((annotate("$clingAutoload$TrackData/ChnsTrack.h")))  ChnsTrack;
class __attribute__((annotate("$clingAutoload$TrackData/ChnsSimpleTrack.h")))  ChnsSimpleTrack;
class __attribute__((annotate("$clingAutoload$TrackData/ChnsTrackID.h")))  ChnsTrackID;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__ChnsDataDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "ChnsStack.h"
#include "ChnsMCTrack.h"
#include "PidData/ChnsPidCandidate.h"
#include "PidData/ChnsPidProbability.h"
#include "PidData/ChnsPidBremCorrected4Mom.h"
#include "TrackData/ChnsTrackCandHit.h"
#include "TrackData/ChnsTrackCand.h"
#include "TrackData/ChnsTrack.h"
#include "TrackData/ChnsSimpleTrack.h"
#include "TrackData/ChnsTrackID.h"
#include "FairRecoCandidate.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"ChnsMCTrack", payloadCode, "@",
"ChnsPidBremCorrected4Mom", payloadCode, "@",
"ChnsPidCandidate", payloadCode, "@",
"ChnsPidProbability", payloadCode, "@",
"ChnsSimpleTrack", payloadCode, "@",
"ChnsStack", payloadCode, "@",
"ChnsTrack", payloadCode, "@",
"ChnsTrackCand", payloadCode, "@",
"ChnsTrackCandHit", payloadCode, "@",
"ChnsTrackID", payloadCode, "@",
"FairRecoCandidate", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__ChnsDataDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__ChnsDataDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__ChnsDataDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__ChnsDataDict() {
  TriggerDictionaryInitialization_G__ChnsDataDict_Impl();
}
