// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIliangytdIEiccRootdIGenFitmImasterdIGenFitmImasterdIbuilddIfittersRootDict
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
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/fitters/include/AbsKalmanFitter.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/fitters/include/KalmanFittedStateOnPlane.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/fitters/include/KalmanFitStatus.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/fitters/include/ReferenceStateOnPlane.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/fitters/include/KalmanFitterRefTrack.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/fitters/include/KalmanFitter.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/fitters/include/KalmanFitterInfo.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/fitters/include/DAF.h"

// Header files passed via #pragma extra_include

namespace genfit {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *genfit_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genfit", 0 /*version*/, "AbsFitter.h", 27,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &genfit_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *genfit_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void delete_genfitcLcLAbsKalmanFitter(void *p);
   static void deleteArray_genfitcLcLAbsKalmanFitter(void *p);
   static void destruct_genfitcLcLAbsKalmanFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::AbsKalmanFitter*)
   {
      ::genfit::AbsKalmanFitter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::AbsKalmanFitter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::AbsKalmanFitter", ::genfit::AbsKalmanFitter::Class_Version(), "", 53,
                  typeid(::genfit::AbsKalmanFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::AbsKalmanFitter::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::AbsKalmanFitter) );
      instance.SetDelete(&delete_genfitcLcLAbsKalmanFitter);
      instance.SetDeleteArray(&deleteArray_genfitcLcLAbsKalmanFitter);
      instance.SetDestructor(&destruct_genfitcLcLAbsKalmanFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::AbsKalmanFitter*)
   {
      return GenerateInitInstanceLocal((::genfit::AbsKalmanFitter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::AbsKalmanFitter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLKalmanFittedStateOnPlane(void *p = 0);
   static void *newArray_genfitcLcLKalmanFittedStateOnPlane(Long_t size, void *p);
   static void delete_genfitcLcLKalmanFittedStateOnPlane(void *p);
   static void deleteArray_genfitcLcLKalmanFittedStateOnPlane(void *p);
   static void destruct_genfitcLcLKalmanFittedStateOnPlane(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::KalmanFittedStateOnPlane*)
   {
      ::genfit::KalmanFittedStateOnPlane *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::KalmanFittedStateOnPlane >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::KalmanFittedStateOnPlane", ::genfit::KalmanFittedStateOnPlane::Class_Version(), "", 221,
                  typeid(::genfit::KalmanFittedStateOnPlane), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::KalmanFittedStateOnPlane::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::KalmanFittedStateOnPlane) );
      instance.SetNew(&new_genfitcLcLKalmanFittedStateOnPlane);
      instance.SetNewArray(&newArray_genfitcLcLKalmanFittedStateOnPlane);
      instance.SetDelete(&delete_genfitcLcLKalmanFittedStateOnPlane);
      instance.SetDeleteArray(&deleteArray_genfitcLcLKalmanFittedStateOnPlane);
      instance.SetDestructor(&destruct_genfitcLcLKalmanFittedStateOnPlane);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::KalmanFittedStateOnPlane*)
   {
      return GenerateInitInstanceLocal((::genfit::KalmanFittedStateOnPlane*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::KalmanFittedStateOnPlane*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLKalmanFitStatus(void *p = 0);
   static void *newArray_genfitcLcLKalmanFitStatus(Long_t size, void *p);
   static void delete_genfitcLcLKalmanFitStatus(void *p);
   static void deleteArray_genfitcLcLKalmanFitStatus(void *p);
   static void destruct_genfitcLcLKalmanFitStatus(void *p);
   static void streamer_genfitcLcLKalmanFitStatus(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::KalmanFitStatus*)
   {
      ::genfit::KalmanFitStatus *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::KalmanFitStatus >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::KalmanFitStatus", ::genfit::KalmanFitStatus::Class_Version(), "", 333,
                  typeid(::genfit::KalmanFitStatus), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::KalmanFitStatus::Dictionary, isa_proxy, 16,
                  sizeof(::genfit::KalmanFitStatus) );
      instance.SetNew(&new_genfitcLcLKalmanFitStatus);
      instance.SetNewArray(&newArray_genfitcLcLKalmanFitStatus);
      instance.SetDelete(&delete_genfitcLcLKalmanFitStatus);
      instance.SetDeleteArray(&deleteArray_genfitcLcLKalmanFitStatus);
      instance.SetDestructor(&destruct_genfitcLcLKalmanFitStatus);
      instance.SetStreamerFunc(&streamer_genfitcLcLKalmanFitStatus);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::KalmanFitStatus*)
   {
      return GenerateInitInstanceLocal((::genfit::KalmanFitStatus*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::KalmanFitStatus*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLReferenceStateOnPlane(void *p = 0);
   static void *newArray_genfitcLcLReferenceStateOnPlane(Long_t size, void *p);
   static void delete_genfitcLcLReferenceStateOnPlane(void *p);
   static void deleteArray_genfitcLcLReferenceStateOnPlane(void *p);
   static void destruct_genfitcLcLReferenceStateOnPlane(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::ReferenceStateOnPlane*)
   {
      ::genfit::ReferenceStateOnPlane *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::ReferenceStateOnPlane >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::ReferenceStateOnPlane", ::genfit::ReferenceStateOnPlane::Class_Version(), "", 433,
                  typeid(::genfit::ReferenceStateOnPlane), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::ReferenceStateOnPlane::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::ReferenceStateOnPlane) );
      instance.SetNew(&new_genfitcLcLReferenceStateOnPlane);
      instance.SetNewArray(&newArray_genfitcLcLReferenceStateOnPlane);
      instance.SetDelete(&delete_genfitcLcLReferenceStateOnPlane);
      instance.SetDeleteArray(&deleteArray_genfitcLcLReferenceStateOnPlane);
      instance.SetDestructor(&destruct_genfitcLcLReferenceStateOnPlane);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::ReferenceStateOnPlane*)
   {
      return GenerateInitInstanceLocal((::genfit::ReferenceStateOnPlane*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::ReferenceStateOnPlane*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLKalmanFitterRefTrack(void *p = 0);
   static void *newArray_genfitcLcLKalmanFitterRefTrack(Long_t size, void *p);
   static void delete_genfitcLcLKalmanFitterRefTrack(void *p);
   static void deleteArray_genfitcLcLKalmanFitterRefTrack(void *p);
   static void destruct_genfitcLcLKalmanFitterRefTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::KalmanFitterRefTrack*)
   {
      ::genfit::KalmanFitterRefTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::KalmanFitterRefTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::KalmanFitterRefTrack", ::genfit::KalmanFitterRefTrack::Class_Version(), "", 542,
                  typeid(::genfit::KalmanFitterRefTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::KalmanFitterRefTrack::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::KalmanFitterRefTrack) );
      instance.SetNew(&new_genfitcLcLKalmanFitterRefTrack);
      instance.SetNewArray(&newArray_genfitcLcLKalmanFitterRefTrack);
      instance.SetDelete(&delete_genfitcLcLKalmanFitterRefTrack);
      instance.SetDeleteArray(&deleteArray_genfitcLcLKalmanFitterRefTrack);
      instance.SetDestructor(&destruct_genfitcLcLKalmanFitterRefTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::KalmanFitterRefTrack*)
   {
      return GenerateInitInstanceLocal((::genfit::KalmanFitterRefTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::KalmanFitterRefTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLKalmanFitter(void *p = 0);
   static void *newArray_genfitcLcLKalmanFitter(Long_t size, void *p);
   static void delete_genfitcLcLKalmanFitter(void *p);
   static void deleteArray_genfitcLcLKalmanFitter(void *p);
   static void destruct_genfitcLcLKalmanFitter(void *p);
   static void streamer_genfitcLcLKalmanFitter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::KalmanFitter*)
   {
      ::genfit::KalmanFitter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::KalmanFitter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::KalmanFitter", ::genfit::KalmanFitter::Class_Version(), "", 665,
                  typeid(::genfit::KalmanFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::KalmanFitter::Dictionary, isa_proxy, 17,
                  sizeof(::genfit::KalmanFitter) );
      instance.SetNew(&new_genfitcLcLKalmanFitter);
      instance.SetNewArray(&newArray_genfitcLcLKalmanFitter);
      instance.SetDelete(&delete_genfitcLcLKalmanFitter);
      instance.SetDeleteArray(&deleteArray_genfitcLcLKalmanFitter);
      instance.SetDestructor(&destruct_genfitcLcLKalmanFitter);
      instance.SetStreamerFunc(&streamer_genfitcLcLKalmanFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::KalmanFitter*)
   {
      return GenerateInitInstanceLocal((::genfit::KalmanFitter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::KalmanFitter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLKalmanFitterInfo(void *p = 0);
   static void *newArray_genfitcLcLKalmanFitterInfo(Long_t size, void *p);
   static void delete_genfitcLcLKalmanFitterInfo(void *p);
   static void deleteArray_genfitcLcLKalmanFitterInfo(void *p);
   static void destruct_genfitcLcLKalmanFitterInfo(void *p);
   static void streamer_genfitcLcLKalmanFitterInfo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::KalmanFitterInfo*)
   {
      ::genfit::KalmanFitterInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::KalmanFitterInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::KalmanFitterInfo", ::genfit::KalmanFitterInfo::Class_Version(), "", 753,
                  typeid(::genfit::KalmanFitterInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::KalmanFitterInfo::Dictionary, isa_proxy, 17,
                  sizeof(::genfit::KalmanFitterInfo) );
      instance.SetNew(&new_genfitcLcLKalmanFitterInfo);
      instance.SetNewArray(&newArray_genfitcLcLKalmanFitterInfo);
      instance.SetDelete(&delete_genfitcLcLKalmanFitterInfo);
      instance.SetDeleteArray(&deleteArray_genfitcLcLKalmanFitterInfo);
      instance.SetDestructor(&destruct_genfitcLcLKalmanFitterInfo);
      instance.SetStreamerFunc(&streamer_genfitcLcLKalmanFitterInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::KalmanFitterInfo*)
   {
      return GenerateInitInstanceLocal((::genfit::KalmanFitterInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::KalmanFitterInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLDAF(void *p = 0);
   static void *newArray_genfitcLcLDAF(Long_t size, void *p);
   static void delete_genfitcLcLDAF(void *p);
   static void deleteArray_genfitcLcLDAF(void *p);
   static void destruct_genfitcLcLDAF(void *p);
   static void streamer_genfitcLcLDAF(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::DAF*)
   {
      ::genfit::DAF *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::DAF >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::DAF", ::genfit::DAF::Class_Version(), "", 908,
                  typeid(::genfit::DAF), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::DAF::Dictionary, isa_proxy, 17,
                  sizeof(::genfit::DAF) );
      instance.SetNew(&new_genfitcLcLDAF);
      instance.SetNewArray(&newArray_genfitcLcLDAF);
      instance.SetDelete(&delete_genfitcLcLDAF);
      instance.SetDeleteArray(&deleteArray_genfitcLcLDAF);
      instance.SetDestructor(&destruct_genfitcLcLDAF);
      instance.SetStreamerFunc(&streamer_genfitcLcLDAF);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::DAF*)
   {
      return GenerateInitInstanceLocal((::genfit::DAF*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::DAF*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr AbsKalmanFitter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AbsKalmanFitter::Class_Name()
{
   return "genfit::AbsKalmanFitter";
}

//______________________________________________________________________________
const char *AbsKalmanFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::AbsKalmanFitter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AbsKalmanFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::AbsKalmanFitter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AbsKalmanFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::AbsKalmanFitter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AbsKalmanFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::AbsKalmanFitter*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr KalmanFittedStateOnPlane::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KalmanFittedStateOnPlane::Class_Name()
{
   return "genfit::KalmanFittedStateOnPlane";
}

//______________________________________________________________________________
const char *KalmanFittedStateOnPlane::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::KalmanFittedStateOnPlane*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KalmanFittedStateOnPlane::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::KalmanFittedStateOnPlane*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KalmanFittedStateOnPlane::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::KalmanFittedStateOnPlane*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KalmanFittedStateOnPlane::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::KalmanFittedStateOnPlane*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr KalmanFitStatus::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KalmanFitStatus::Class_Name()
{
   return "genfit::KalmanFitStatus";
}

//______________________________________________________________________________
const char *KalmanFitStatus::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::KalmanFitStatus*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KalmanFitStatus::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::KalmanFitStatus*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KalmanFitStatus::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::KalmanFitStatus*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KalmanFitStatus::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::KalmanFitStatus*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr ReferenceStateOnPlane::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ReferenceStateOnPlane::Class_Name()
{
   return "genfit::ReferenceStateOnPlane";
}

//______________________________________________________________________________
const char *ReferenceStateOnPlane::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::ReferenceStateOnPlane*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ReferenceStateOnPlane::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::ReferenceStateOnPlane*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ReferenceStateOnPlane::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::ReferenceStateOnPlane*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ReferenceStateOnPlane::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::ReferenceStateOnPlane*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr KalmanFitterRefTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KalmanFitterRefTrack::Class_Name()
{
   return "genfit::KalmanFitterRefTrack";
}

//______________________________________________________________________________
const char *KalmanFitterRefTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::KalmanFitterRefTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KalmanFitterRefTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::KalmanFitterRefTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KalmanFitterRefTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::KalmanFitterRefTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KalmanFitterRefTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::KalmanFitterRefTrack*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr KalmanFitter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KalmanFitter::Class_Name()
{
   return "genfit::KalmanFitter";
}

//______________________________________________________________________________
const char *KalmanFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::KalmanFitter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KalmanFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::KalmanFitter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KalmanFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::KalmanFitter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KalmanFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::KalmanFitter*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr KalmanFitterInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KalmanFitterInfo::Class_Name()
{
   return "genfit::KalmanFitterInfo";
}

//______________________________________________________________________________
const char *KalmanFitterInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::KalmanFitterInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KalmanFitterInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::KalmanFitterInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KalmanFitterInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::KalmanFitterInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KalmanFitterInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::KalmanFitterInfo*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr DAF::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DAF::Class_Name()
{
   return "genfit::DAF";
}

//______________________________________________________________________________
const char *DAF::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::DAF*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DAF::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::DAF*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DAF::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::DAF*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DAF::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::DAF*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
void AbsKalmanFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::AbsKalmanFitter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::AbsKalmanFitter::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::AbsKalmanFitter::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrapper around operator delete
   static void delete_genfitcLcLAbsKalmanFitter(void *p) {
      delete ((::genfit::AbsKalmanFitter*)p);
   }
   static void deleteArray_genfitcLcLAbsKalmanFitter(void *p) {
      delete [] ((::genfit::AbsKalmanFitter*)p);
   }
   static void destruct_genfitcLcLAbsKalmanFitter(void *p) {
      typedef ::genfit::AbsKalmanFitter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::AbsKalmanFitter

namespace genfit {
//______________________________________________________________________________
void KalmanFittedStateOnPlane::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::KalmanFittedStateOnPlane.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::KalmanFittedStateOnPlane::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::KalmanFittedStateOnPlane::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLKalmanFittedStateOnPlane(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::KalmanFittedStateOnPlane : new ::genfit::KalmanFittedStateOnPlane;
   }
   static void *newArray_genfitcLcLKalmanFittedStateOnPlane(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::KalmanFittedStateOnPlane[nElements] : new ::genfit::KalmanFittedStateOnPlane[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLKalmanFittedStateOnPlane(void *p) {
      delete ((::genfit::KalmanFittedStateOnPlane*)p);
   }
   static void deleteArray_genfitcLcLKalmanFittedStateOnPlane(void *p) {
      delete [] ((::genfit::KalmanFittedStateOnPlane*)p);
   }
   static void destruct_genfitcLcLKalmanFittedStateOnPlane(void *p) {
      typedef ::genfit::KalmanFittedStateOnPlane current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::KalmanFittedStateOnPlane

namespace genfit {
//______________________________________________________________________________
void KalmanFitStatus::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::KalmanFitStatus.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::genfit::KalmanFitStatus thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef genfit::FitStatus baseClass0;
      baseClass0::Streamer(R__b);
      R__b >> numIterations_;
      R__b >> fittedWithDaf_;
      R__b >> fittedWithReferenceTrack_;
      R__b >> trackLen_;
      R__b >> fChi2_;
      R__b >> fNdf_;
      R__b >> fPval_;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef genfit::FitStatus baseClass0;
      baseClass0::Streamer(R__b);
      R__b << numIterations_;
      R__b << fittedWithDaf_;
      R__b << fittedWithReferenceTrack_;
      R__b << trackLen_;
      R__b << fChi2_;
      R__b << fNdf_;
      R__b << fPval_;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLKalmanFitStatus(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::KalmanFitStatus : new ::genfit::KalmanFitStatus;
   }
   static void *newArray_genfitcLcLKalmanFitStatus(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::KalmanFitStatus[nElements] : new ::genfit::KalmanFitStatus[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLKalmanFitStatus(void *p) {
      delete ((::genfit::KalmanFitStatus*)p);
   }
   static void deleteArray_genfitcLcLKalmanFitStatus(void *p) {
      delete [] ((::genfit::KalmanFitStatus*)p);
   }
   static void destruct_genfitcLcLKalmanFitStatus(void *p) {
      typedef ::genfit::KalmanFitStatus current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_genfitcLcLKalmanFitStatus(TBuffer &buf, void *obj) {
      ((::genfit::KalmanFitStatus*)obj)->::genfit::KalmanFitStatus::Streamer(buf);
   }
} // end of namespace ROOT for class ::genfit::KalmanFitStatus

namespace genfit {
//______________________________________________________________________________
void ReferenceStateOnPlane::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::ReferenceStateOnPlane.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::ReferenceStateOnPlane::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::ReferenceStateOnPlane::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLReferenceStateOnPlane(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::ReferenceStateOnPlane : new ::genfit::ReferenceStateOnPlane;
   }
   static void *newArray_genfitcLcLReferenceStateOnPlane(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::ReferenceStateOnPlane[nElements] : new ::genfit::ReferenceStateOnPlane[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLReferenceStateOnPlane(void *p) {
      delete ((::genfit::ReferenceStateOnPlane*)p);
   }
   static void deleteArray_genfitcLcLReferenceStateOnPlane(void *p) {
      delete [] ((::genfit::ReferenceStateOnPlane*)p);
   }
   static void destruct_genfitcLcLReferenceStateOnPlane(void *p) {
      typedef ::genfit::ReferenceStateOnPlane current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::ReferenceStateOnPlane

namespace genfit {
//______________________________________________________________________________
void KalmanFitterRefTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::KalmanFitterRefTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::KalmanFitterRefTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::KalmanFitterRefTrack::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLKalmanFitterRefTrack(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::KalmanFitterRefTrack : new ::genfit::KalmanFitterRefTrack;
   }
   static void *newArray_genfitcLcLKalmanFitterRefTrack(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::KalmanFitterRefTrack[nElements] : new ::genfit::KalmanFitterRefTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLKalmanFitterRefTrack(void *p) {
      delete ((::genfit::KalmanFitterRefTrack*)p);
   }
   static void deleteArray_genfitcLcLKalmanFitterRefTrack(void *p) {
      delete [] ((::genfit::KalmanFitterRefTrack*)p);
   }
   static void destruct_genfitcLcLKalmanFitterRefTrack(void *p) {
      typedef ::genfit::KalmanFitterRefTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::KalmanFitterRefTrack

namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLKalmanFitter(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::KalmanFitter : new ::genfit::KalmanFitter;
   }
   static void *newArray_genfitcLcLKalmanFitter(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::KalmanFitter[nElements] : new ::genfit::KalmanFitter[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLKalmanFitter(void *p) {
      delete ((::genfit::KalmanFitter*)p);
   }
   static void deleteArray_genfitcLcLKalmanFitter(void *p) {
      delete [] ((::genfit::KalmanFitter*)p);
   }
   static void destruct_genfitcLcLKalmanFitter(void *p) {
      typedef ::genfit::KalmanFitter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_genfitcLcLKalmanFitter(TBuffer &buf, void *obj) {
      ((::genfit::KalmanFitter*)obj)->::genfit::KalmanFitter::Streamer(buf);
   }
} // end of namespace ROOT for class ::genfit::KalmanFitter

namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLKalmanFitterInfo(void *p) {
      return  p ? new(p) ::genfit::KalmanFitterInfo : new ::genfit::KalmanFitterInfo;
   }
   static void *newArray_genfitcLcLKalmanFitterInfo(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::KalmanFitterInfo[nElements] : new ::genfit::KalmanFitterInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLKalmanFitterInfo(void *p) {
      delete ((::genfit::KalmanFitterInfo*)p);
   }
   static void deleteArray_genfitcLcLKalmanFitterInfo(void *p) {
      delete [] ((::genfit::KalmanFitterInfo*)p);
   }
   static void destruct_genfitcLcLKalmanFitterInfo(void *p) {
      typedef ::genfit::KalmanFitterInfo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_genfitcLcLKalmanFitterInfo(TBuffer &buf, void *obj) {
      ((::genfit::KalmanFitterInfo*)obj)->::genfit::KalmanFitterInfo::Streamer(buf);
   }
} // end of namespace ROOT for class ::genfit::KalmanFitterInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLDAF(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::DAF : new ::genfit::DAF;
   }
   static void *newArray_genfitcLcLDAF(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::DAF[nElements] : new ::genfit::DAF[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLDAF(void *p) {
      delete ((::genfit::DAF*)p);
   }
   static void deleteArray_genfitcLcLDAF(void *p) {
      delete [] ((::genfit::DAF*)p);
   }
   static void destruct_genfitcLcLDAF(void *p) {
      typedef ::genfit::DAF current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_genfitcLcLDAF(TBuffer &buf, void *obj) {
      ((::genfit::DAF*)obj)->::genfit::DAF::Streamer(buf);
   }
} // end of namespace ROOT for class ::genfit::DAF

namespace ROOT {
   static TClass *vectorlEgenfitcLcLMeasurementOnPlanemUgR_Dictionary();
   static void vectorlEgenfitcLcLMeasurementOnPlanemUgR_TClassManip(TClass*);
   static void *new_vectorlEgenfitcLcLMeasurementOnPlanemUgR(void *p = 0);
   static void *newArray_vectorlEgenfitcLcLMeasurementOnPlanemUgR(Long_t size, void *p);
   static void delete_vectorlEgenfitcLcLMeasurementOnPlanemUgR(void *p);
   static void deleteArray_vectorlEgenfitcLcLMeasurementOnPlanemUgR(void *p);
   static void destruct_vectorlEgenfitcLcLMeasurementOnPlanemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<genfit::MeasurementOnPlane*>*)
   {
      vector<genfit::MeasurementOnPlane*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<genfit::MeasurementOnPlane*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<genfit::MeasurementOnPlane*>", -2, "vector", 216,
                  typeid(vector<genfit::MeasurementOnPlane*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEgenfitcLcLMeasurementOnPlanemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<genfit::MeasurementOnPlane*>) );
      instance.SetNew(&new_vectorlEgenfitcLcLMeasurementOnPlanemUgR);
      instance.SetNewArray(&newArray_vectorlEgenfitcLcLMeasurementOnPlanemUgR);
      instance.SetDelete(&delete_vectorlEgenfitcLcLMeasurementOnPlanemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEgenfitcLcLMeasurementOnPlanemUgR);
      instance.SetDestructor(&destruct_vectorlEgenfitcLcLMeasurementOnPlanemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<genfit::MeasurementOnPlane*> >()));

      ::ROOT::AddClassAlternate("vector<genfit::MeasurementOnPlane*>","std::vector<genfit::MeasurementOnPlane*, std::allocator<genfit::MeasurementOnPlane*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<genfit::MeasurementOnPlane*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgenfitcLcLMeasurementOnPlanemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<genfit::MeasurementOnPlane*>*)0x0)->GetClass();
      vectorlEgenfitcLcLMeasurementOnPlanemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgenfitcLcLMeasurementOnPlanemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgenfitcLcLMeasurementOnPlanemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<genfit::MeasurementOnPlane*> : new vector<genfit::MeasurementOnPlane*>;
   }
   static void *newArray_vectorlEgenfitcLcLMeasurementOnPlanemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<genfit::MeasurementOnPlane*>[nElements] : new vector<genfit::MeasurementOnPlane*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgenfitcLcLMeasurementOnPlanemUgR(void *p) {
      delete ((vector<genfit::MeasurementOnPlane*>*)p);
   }
   static void deleteArray_vectorlEgenfitcLcLMeasurementOnPlanemUgR(void *p) {
      delete [] ((vector<genfit::MeasurementOnPlane*>*)p);
   }
   static void destruct_vectorlEgenfitcLcLMeasurementOnPlanemUgR(void *p) {
      typedef vector<genfit::MeasurementOnPlane*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<genfit::MeasurementOnPlane*>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 216,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));

      ::ROOT::AddClassAlternate("vector<double>","std::vector<double, std::allocator<double> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace {
  void TriggerDictionaryInitialization_fittersRootDict_Impl() {
    static const char* headers[] = {
"0",
0
    };
    static const char* includePaths[] = {
"/home/liangyt/EiccRoot/GenFit-master/GenFit-master/core/include",
"/home/liangyt/EiccRoot/GenFit-master/GenFit-master/fitters/include",
"/home/eicc/software/FairSoft/install/include/root",
"/home/liangyt/EiccRoot/GenFit-master/GenFit-master/build/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "fittersRootDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genfit{class AbsKalmanFitter;}
namespace genfit{class KalmanFittedStateOnPlane;}
namespace genfit{class KalmanFitStatus;}
namespace genfit{class ReferenceStateOnPlane;}
namespace genfit{class KalmanFitterRefTrack;}
namespace genfit{class KalmanFitter;}
namespace genfit{class KalmanFitterInfo;}
namespace genfit{class DAF;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "fittersRootDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
/* Copyright 2013, Ludwig-Maximilians Universität München,
   Authors: Tobias Schlüter & Johannes Rauch

   This file is part of GENFIT.

   GENFIT is free software: you can redistribute it and/or modify
   it under the terms of the GNU Lesser General Public License as published
   by the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   GENFIT is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with GENFIT.  If not, see <http://www.gnu.org/licenses/>.
*/
/** @addtogroup genfit
 * @{
 */

#ifndef genfit_AbsKalmanFitter_h
#define genfit_AbsKalmanFitter_h

#include "AbsFitter.h"
#include "MeasurementOnPlane.h"
#include "TrackPoint.h"


namespace genfit {

class KalmanFitterInfo;

enum eMultipleMeasurementHandling {
  weightedAverage, /**<  weighted average between measurements; used by DAF */
  unweightedAverage, /**<  average between measurements, all weighted with 1 */
  weightedClosestToReference, /**<  closest to reference, weighted with its weight_ */
  unweightedClosestToReference, /**<  closest to reference, weighted with 1 */
  weightedClosestToPrediction, /**<  closest to prediction, weighted with its weight_ */
  unweightedClosestToPrediction, /**<  closest to prediction, weighted with 1 */
  weightedClosestToReferenceWire, /**<  if corresponding TrackPoint has one WireMeasurement, select closest to reference, weighted with its weight_. Otherwise use weightedAverage. */
  unweightedClosestToReferenceWire, /**<  if corresponding TrackPoint has one WireMeasurement, select closest to reference, weighted with 1. Otherwise use unweightedAverage. */
  weightedClosestToPredictionWire, /**<  if corresponding TrackPoint has one WireMeasurement, select closest to prediction, weighted with its weight_. Otherwise use weightedAverage. */
  unweightedClosestToPredictionWire /**<  if corresponding TrackPoint has one WireMeasurement, select closest to prediction, weighted with 1. Otherwise use unweightedAverage. Recommended for KalmanFitter to 'resolve' l/r ambiguities */
};

/**
 * @brief Abstract base class for Kalman fitter and derived fitting algorithms
 */
class AbsKalmanFitter : public AbsFitter {

 public:

  AbsKalmanFitter(unsigned int maxIterations = 4, double deltaPval = 1e-3, double blowUpFactor = 1e3)
    : AbsFitter(), minIterations_(2), maxIterations_(maxIterations), deltaPval_(deltaPval), relChi2Change_(0.2),
      blowUpFactor_(blowUpFactor), resetOffDiagonals_(true), blowUpMaxVal_(1.E6),
      multipleMeasurementHandling_(unweightedClosestToPredictionWire),
      maxFailedHits_(-1) {
    if (minIterations_ > maxIterations_)
      minIterations_ = maxIterations_;
  }

  virtual ~AbsKalmanFitter() {;}

  //virtual void fitTrack(Track* tr, const AbsTrackRep* rep, double& chi2, double& ndf, int direction) = 0;

  void getChiSquNdf(const Track* tr, const AbsTrackRep* rep, double& bChi2, double& fChi2, double& bNdf,  double& fNdf) const;
  double getChiSqu(const Track* tr, const AbsTrackRep* rep, int direction = -1) const;
  double getNdf(const Track* tr, const AbsTrackRep* rep, int direction = -1) const;
  double getRedChiSqu(const Track* tr, const AbsTrackRep* rep, int direction = -1) const;
  double getPVal(const Track* tr, const AbsTrackRep* rep, int direction = -1) const;

  unsigned int getMinIterations() const {return minIterations_;}
  unsigned int getMaxIterations() const {return maxIterations_;}
  double getDeltaPval() const {return deltaPval_;}
  double getRelChi2Change() const {return relChi2Change_;}
  double getBlowUpFactor() const {return blowUpFactor_;}
  bool getResetOffDiagonals() const {return resetOffDiagonals_;}
  double getBlowUpMaxVal() const {return blowUpMaxVal_;}
  eMultipleMeasurementHandling getMultipleMeasurementHandling() const {return multipleMeasurementHandling_;}
  int getMaxFailedHits() const {return maxFailedHits_;}

  //! Set the minimum number of iterations
  virtual void setMinIterations(unsigned int n) {minIterations_ = std::max((unsigned int)1,n); if (maxIterations_ < minIterations_) maxIterations_ = minIterations_;}
  //! Set the maximum number of iterations
  virtual void setMaxIterations(unsigned int n) {maxIterations_ = n; if (minIterations_ > maxIterations_) minIterations_ = maxIterations_;}

  /**
   * @brief Set Convergence criterion
   *
   * if track total P-value changes less than this between consecutive iterations, consider the track converged.
   * chi² from the backwards fit is used.
   */
  void setDeltaPval(double deltaPval) {deltaPval_ = deltaPval;}

  /**
   * @ brief Set Non-convergence criterion
   *
   * if the relative chi^2 between two iterations is larger than relChi2Change_, the fit is NOT converged and
   * further iterations will be done, even if the deltaPval_ convergence criterium is met.
   * This is especially useful for fits which have a p-value of almost 0 (possibly due to bad start values),
   * where the p-value from one iteration to the next might not change much. However, a significant change in
   * chi^2 tells us, that the fit might not yet be converged.
   */
  void setRelChi2Change(double relChi2Change) {relChi2Change_ = relChi2Change;}

  void setBlowUpFactor(double blowUpFactor) {blowUpFactor_ = blowUpFactor;}
  void setResetOffDiagonals(bool resetOffDiagonals) {resetOffDiagonals_ = resetOffDiagonals;}
  //! Limit the cov entries to this maximum value when blowing up the cov. Set to negative value to disable. Default is 1.E6.
  /**
   * This is especially useful for fits where the measurements do not constrain one direction,
   * e.g. parallel wire measurements. The fit will not be constrained along the wire direction.
   * This also means that the covariance along the wire direction will not get smaller during the fit.
   * However, it will be blown up before the next iteration, leading to an exponential growth of
   * the covariance element(s) corresponding to the wire direction. This can then lead to numerical problems.
   * To prevent this, the maximum value of the covariance elements after blowing up can be limited.
   */
  void setBlowUpMaxVal(double blowUpMaxVal) {blowUpMaxVal_= blowUpMaxVal;}

  //! How should multiple measurements be handled?
  void setMultipleMeasurementHandling(eMultipleMeasurementHandling mmh) {multipleMeasurementHandling_ = mmh;}

  virtual void setMaxFailedHits(int val) {maxFailedHits_ = val;}

  bool isTrackPrepared(const Track* tr, const AbsTrackRep* rep) const;
  bool isTrackFitted(const Track* tr, const AbsTrackRep* rep) const;

  //! returns if the fitter can ignore the weights and handle the MeasurementOnPlanes as if they had weight 1.
  bool canIgnoreWeights() const;

 protected:

  //! get the measurementsOnPlane taking the multipleMeasurementHandling_ into account
  const std::vector<MeasurementOnPlane *> getMeasurements(const KalmanFitterInfo* fi, const TrackPoint* tp, int direction) const;

  //! Minimum number of iterations to attempt.  Forward and backward are counted as one iteration.
  unsigned int minIterations_;

  //! Maximum number of iterations to attempt.  Forward and backward are counted as one iteration.
  unsigned int maxIterations_;
  /**
   * @brief Convergence criterion
   *
   * if track total P-value changes less than this between consecutive iterations, consider the track converged.
   * chi² from the backwards fit is used.
   */
  double deltaPval_;
  /**
   * @ brief Non-convergence criterion
   *
   * if the relative chi^2 between two iterations is larger than relChi2Change_, the fit is NOT converged and
   * further iterations will be done, even if the deltaPval_ convergence criterium is met.
   * This is especially useful for fits which have a p-value of almost 0 (possibly due to bad start values),
   * where the p-value from one iteration to the next might not change much. However, a significant change in
   * chi^2 tells us, that the fit might not yet be converged.
   */
  double relChi2Change_;

  //! Blow up the covariance of the forward (backward) fit by this factor before seeding the backward (forward) fit.
  double blowUpFactor_;
  //! Reset the off-diagonals to 0 when blowing up the cov
  bool resetOffDiagonals_;
  //! Limit the cov entries to this maxuimum value when blowing up the cov.
  double blowUpMaxVal_;

  //! How to handle if there are multiple MeasurementsOnPlane
  eMultipleMeasurementHandling multipleMeasurementHandling_;

  //! after how many failed hits (exception during construction of plane, extrapolation etc.) should the fit be cancelled.
  //! -1 means don't cancel
  int maxFailedHits_;

 public:

  ClassDef(AbsKalmanFitter, 2)

};

} /* End of namespace genfit */
/** @} */

#endif //genfit_AbsKalmanFitter_h
/* Copyright 2008-2010, Technische Universitaet Muenchen,
   Authors: Christian Hoeppner & Sebastian Neubert & Johannes Rauch

   This file is part of GENFIT.

   GENFIT is free software: you can redistribute it and/or modify
   it under the terms of the GNU Lesser General Public License as published
   by the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   GENFIT is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with GENFIT.  If not, see <http://www.gnu.org/licenses/>.
*/
/** @addtogroup genfit
 * @{
 */

#ifndef genfit_KalmanFittedStateOnPlane_h
#define genfit_KalmanFittedStateOnPlane_h

#include "MeasuredStateOnPlane.h"


namespace genfit {


/**
 *  @brief #MeasuredStateOnPlane with additional info produced by a Kalman filter or DAF.
 */
class KalmanFittedStateOnPlane : public MeasuredStateOnPlane {

 public:

  KalmanFittedStateOnPlane();
  KalmanFittedStateOnPlane(const KalmanFittedStateOnPlane&) = default;
  KalmanFittedStateOnPlane(const TVectorD& state, const TMatrixDSym& cov, const SharedPlanePtr& plane, const AbsTrackRep* rep, double chiSquareIncrement, double ndf);
  KalmanFittedStateOnPlane(const TVectorD& state, const TMatrixDSym& cov, const SharedPlanePtr& plane, const AbsTrackRep* rep, const TVectorD& auxInfo, double chiSquareIncrement, double ndf);
  KalmanFittedStateOnPlane(const MeasuredStateOnPlane& state, double chiSquareIncrement, double ndf);

  KalmanFittedStateOnPlane& operator=(KalmanFittedStateOnPlane other);
  void swap(KalmanFittedStateOnPlane& other); // nothrow

  virtual ~KalmanFittedStateOnPlane() {}

  double getChiSquareIncrement() const {return chiSquareIncrement_;}
  double getNdf() const {return ndf_;}

  void setChiSquareIncrement(double chiSquareIncrement) {chiSquareIncrement_ = chiSquareIncrement;}
  void setNdf(double ndf) {ndf_ = ndf;}


 protected:

  double chiSquareIncrement_;
  
  //! Degrees of freedom. Needs to be a double because of DAF.
  double ndf_;


 public:

  ClassDef(KalmanFittedStateOnPlane,1)

};


inline KalmanFittedStateOnPlane::KalmanFittedStateOnPlane() :
  MeasuredStateOnPlane(), chiSquareIncrement_(0), ndf_(0)
{
  ;
}

inline KalmanFittedStateOnPlane::KalmanFittedStateOnPlane(const TVectorD& state, const TMatrixDSym& cov, const SharedPlanePtr& plane, const AbsTrackRep* rep, double chiSquareIncrement, double ndf) :
  MeasuredStateOnPlane(state, cov, plane, rep), chiSquareIncrement_(chiSquareIncrement), ndf_(ndf)
{
  ;
}

inline KalmanFittedStateOnPlane::KalmanFittedStateOnPlane(const TVectorD& state, const TMatrixDSym& cov, const SharedPlanePtr& plane, const AbsTrackRep* rep, const TVectorD& auxInfo, double chiSquareIncrement, double ndf) :
  MeasuredStateOnPlane(state, cov, plane, rep, auxInfo), chiSquareIncrement_(chiSquareIncrement), ndf_(ndf)
{
  ;
}

inline KalmanFittedStateOnPlane::KalmanFittedStateOnPlane(const MeasuredStateOnPlane& state, double chiSquareIncrement, double ndf) :
  MeasuredStateOnPlane(state), chiSquareIncrement_(chiSquareIncrement), ndf_(ndf)
{
  ;
}

inline KalmanFittedStateOnPlane& KalmanFittedStateOnPlane::operator=(KalmanFittedStateOnPlane other) {
  swap(other);
  return *this;
}

inline void KalmanFittedStateOnPlane::swap(KalmanFittedStateOnPlane& other) {
  MeasuredStateOnPlane::swap(other);
  std::swap(this->chiSquareIncrement_, other.chiSquareIncrement_);
  std::swap(this->ndf_, other.ndf_);
}

} /* End of namespace genfit */
/** @} */

#endif // genfit_KalmanFittedStateOnPlane_h
/* Copyright 2008-2010, Technische Universitaet Muenchen,
   Authors: Christian Hoeppner & Sebastian Neubert & Johannes Rauch

   This file is part of GENFIT.

   GENFIT is free software: you can redistribute it and/or modify
   it under the terms of the GNU Lesser General Public License as published
   by the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   GENFIT is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with GENFIT.  If not, see <http://www.gnu.org/licenses/>.
*/
/** @addtogroup genfit
 * @{
 */

#ifndef genfit_KalmanFitStatus_h
#define genfit_KalmanFitStatus_h

#include "FitStatus.h"

#include <Math/ProbFunc.h>


namespace genfit {

/**
 * @brief FitStatus for use with AbsKalmanFitter implementations
 */
class KalmanFitStatus : public FitStatus {

 public:

  KalmanFitStatus() :
    FitStatus(), numIterations_(0), fittedWithDaf_(false), fittedWithReferenceTrack_(false),
    trackLen_(0), fChi2_(-1e99), fNdf_(-1e99), fPval_(-1e99) {;}

  virtual ~KalmanFitStatus() {};

  virtual FitStatus* clone() const override {return new KalmanFitStatus(*this);}

  unsigned int getNumIterations() const {return numIterations_;}
  bool isFittedWithDaf() const {return fittedWithDaf_;}
  bool isFittedWithReferenceTrack() const {return fittedWithReferenceTrack_;}
  double getTrackLen() const {return trackLen_;}
  double getForwardChi2() const {return fChi2_;}
  double getBackwardChi2() const {return FitStatus::getChi2();}
  double getForwardNdf() const {return fNdf_;}
  double getBackwardNdf() const {return FitStatus::getNdf();}
  // virtual double getPVal() : not overridden, as it does the right thing.
  double getForwardPVal() const {return std::max(0.,ROOT::Math::chisquared_cdf_c(fChi2_, fNdf_));}
  double getBackwardPVal() const {return FitStatus::getPVal(); }

  void setNumIterations(unsigned int numIterations) {numIterations_ = numIterations;}
  void setIsFittedWithDaf(bool fittedWithDaf = true) {fittedWithDaf_ = fittedWithDaf;}
  void setIsFittedWithReferenceTrack(bool fittedWithReferenceTrack = true) {fittedWithReferenceTrack_ = fittedWithReferenceTrack;}
  void setTrackLen(double trackLen) {trackLen_ = trackLen;}
  void setForwardChi2(double fChi2) {fChi2_ = fChi2;}
  void setBackwardChi2(double bChi2) {FitStatus::setChi2(bChi2);}
  void setForwardNdf(double fNdf) {fNdf_ = fNdf;}
  void setBackwardNdf(double bNdf) {FitStatus::setNdf(bNdf);}

  virtual void Print(const Option_t* = "") const override;

 protected:

  unsigned int numIterations_; // number of iterations that have been performed
  bool fittedWithDaf_;
  bool fittedWithReferenceTrack_;

  double trackLen_;

  double fChi2_; // chi^2 of the forward fit
  double fNdf_; // degrees of freedom of the forward fit
  double fPval_; // p-value of the forward fit, set whenever either of chi2 or ndf changes

 public:

  ClassDefOverride(KalmanFitStatus, 1)

};

} /* End of namespace genfit */
/** @} */

#endif // genfit_KalmanFitStatus_h
/* Copyright 2008-2010, Technische Universitaet Muenchen,
   Authors: Christian Hoeppner & Sebastian Neubert & Johannes Rauch

   This file is part of GENFIT.

   GENFIT is free software: you can redistribute it and/or modify
   it under the terms of the GNU Lesser General Public License as published
   by the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   GENFIT is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with GENFIT.  If not, see <http://www.gnu.org/licenses/>.
*/

/** @addtogroup genfit
 * @{
 */

#ifndef genfit_ReferenceStateOnPlane_h
#define genfit_ReferenceStateOnPlane_h

#include "StateOnPlane.h"


namespace genfit {

/**
 * @brief #StateOnPlane with linearized transport to that #ReferenceStateOnPlane from previous and next #ReferenceStateOnPlane
 *
 * Transport matrices describe transport TO that plane.
 * We have transport matrix F, noise matrix N and delta state c.
 * Now, state p and covariance C follow this mathematics:
 *
 * p = F * p_old + c
 * C = F * C_old * F^T + N
 *
 */
class ReferenceStateOnPlane : public StateOnPlane {

 public:

  ReferenceStateOnPlane();
  ReferenceStateOnPlane(const TVectorD& state,
      const SharedPlanePtr& plane,
      const AbsTrackRep* rep);
  ReferenceStateOnPlane(const TVectorD& state,
      const SharedPlanePtr& plane,
      const AbsTrackRep* rep,
      const TVectorD& auxInfo);
  ReferenceStateOnPlane(const StateOnPlane& state);
  ReferenceStateOnPlane(const ReferenceStateOnPlane&) = default;

  StateOnPlane& operator=(ReferenceStateOnPlane other);
  void swap(ReferenceStateOnPlane& other); // nothrow

  virtual ~ReferenceStateOnPlane() {}

  void setForwardSegmentLength(double len) {forwardSegmentLength_ = len;}
  void setBackwardSegmentLength(double len) {backwardSegmentLength_ = len;}
  void setForwardTransportMatrix(const TMatrixD& mat) {forwardTransportMatrix_.ResizeTo(mat); forwardTransportMatrix_=mat;}
  void setBackwardTransportMatrix(const TMatrixD& mat) {backwardTransportMatrix_.ResizeTo(mat); backwardTransportMatrix_=mat;}
  void setTransportMatrix(const TMatrixD& mat, int direction) {if (direction >= 0) setForwardTransportMatrix(mat); else setBackwardTransportMatrix(mat);}
  void setForwardNoiseMatrix(const TMatrixDSym& mat) {forwardNoiseMatrix_.ResizeTo(mat); forwardNoiseMatrix_=mat;}
  void setBackwardNoiseMatrix(const TMatrixDSym& mat) {backwardNoiseMatrix_.ResizeTo(mat); backwardNoiseMatrix_=mat;}
  void setNoiseMatrix(const TMatrixDSym& mat, int direction) {if (direction >= 0) setForwardNoiseMatrix(mat); else setBackwardNoiseMatrix(mat);}
  void setForwardDeltaState(const TVectorD& mat) {forwardDeltaState_.ResizeTo(mat); forwardDeltaState_=mat;}
  void setBackwardDeltaState(const TVectorD& mat) {backwardDeltaState_.ResizeTo(mat); backwardDeltaState_=mat;}
  void setDeltaState(const TVectorD& mat, int direction) {if (direction >= 0) setForwardDeltaState(mat); else setBackwardDeltaState(mat);}


  double getForwardSegmentLength() const {return forwardSegmentLength_;}
  double getBackwardSegmentLength() const {return backwardSegmentLength_;}
  const TMatrixD& getForwardTransportMatrix() const {return forwardTransportMatrix_;}
  const TMatrixD& getBackwardTransportMatrix() const {return backwardTransportMatrix_;}
  const TMatrixD& getTransportMatrix(int direction) const {if (direction >= 0) return forwardTransportMatrix_; return backwardTransportMatrix_;}
  const TMatrixDSym& getForwardNoiseMatrix() const {return forwardNoiseMatrix_;}
  const TMatrixDSym& getBackwardNoiseMatrix() const {return backwardNoiseMatrix_;}
  const TMatrixDSym& getNoiseMatrix(int direction) const {if (direction >= 0) return forwardNoiseMatrix_; return backwardNoiseMatrix_;}
  const TVectorD& getForwardDeltaState() const {return forwardDeltaState_;}
  const TVectorD& getBackwardDeltaState() const {return backwardDeltaState_;}
  const TVectorD& getDeltaState(int direction) const {if (direction >= 0) return forwardDeltaState_; return backwardDeltaState_;}

  void resetForward();
  void resetBackward();

  virtual void Print(Option_t* option = "") const override;

 protected:

  double forwardSegmentLength_; /**< Segment length from previous referenceState */
  double backwardSegmentLength_; /**< Segment length from next referenceState */
  TMatrixD forwardTransportMatrix_; /**< transport matrix F from previous referenceState */
  TMatrixD backwardTransportMatrix_; /**< transport matrix F from next referenceState */
  TMatrixDSym forwardNoiseMatrix_; /**< noise matrix N for transport from previous referenceState */
  TMatrixDSym backwardNoiseMatrix_; /**< noise matrix N for transport from next referenceState */
  TVectorD forwardDeltaState_; /**< c */
  TVectorD backwardDeltaState_; /**< c */


 public:

  ClassDefOverride(ReferenceStateOnPlane,1)

};

} /* End of namespace genfit */
/** @} */

#endif // genfit_ReferenceStateOnPlane_h
/* Copyright 2013, Ludwig-Maximilians Universität München,
   Authors: Tobias Schlüter & Johannes Rauch

   This file is part of GENFIT.

   GENFIT is free software: you can redistribute it and/or modify
   it under the terms of the GNU Lesser General Public License as published
   by the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   GENFIT is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with GENFIT.  If not, see <http://www.gnu.org/licenses/>.
*/
/** @addtogroup genfit
 * @{
 */

#ifndef genfit_KalmanFitterRefTrack_h
#define genfit_KalmanFitterRefTrack_h

#include "AbsKalmanFitter.h"


namespace genfit {

class KalmanFitterInfo;
class TrackPoint;

/**
 * @brief Kalman filter implementation with linearization around a reference track
 */
class KalmanFitterRefTrack : public AbsKalmanFitter {
 public:
  KalmanFitterRefTrack(unsigned int maxIterations = 4, double deltaPval = 1e-3, double blowUpFactor = 1e3,
		       bool squareRootFormalism = false)
    : AbsKalmanFitter(maxIterations, deltaPval, blowUpFactor), refitAll_(false), deltaChi2Ref_(1),
      squareRootFormalism_(squareRootFormalism)
  {}

  virtual ~KalmanFitterRefTrack() {}

  /** @brief Fit the track.
   *
   * Needs a prepared track! Return last TrackPoint that has been processed.
   */
  TrackPoint* fitTrack(Track* tr, const AbsTrackRep* rep, double& chi2, double& ndf, int direction);

  void processTrackWithRep(Track* tr, const AbsTrackRep* rep, bool resortHits = false) override;

  /** @brief Prepare the track
   *
   * Calc all reference states.
   * If setSortingParams is true, the extrapolation lengths will be set as sorting parameters
   * of the TrackPoints.
   * Returns if the track has been changed.
   */
  bool prepareTrack(Track* tr, const AbsTrackRep* rep, bool setSortingParams, int& nFailedHits);

  //! If true always refit all points, otherwise fit points only if reference states have changed
  void setRefitAll(bool refit = true) {refitAll_ = refit;}

  /**
   * When will the reference track be updated?
   * If (smoothedState - referenceState) * smoothedCov^(-1) * (smoothedState - referenceState)^T >= deltaChi2Ref_.
   */
  void setDeltaChi2Ref(double dChi2) {deltaChi2Ref_ = dChi2;}

 private:
  void processTrackPoint(KalmanFitterInfo* fi, const KalmanFitterInfo* prevFi, const TrackPoint* tp, double& chi2, double& ndf, int direction);
  void processTrackPointSqrt(KalmanFitterInfo* fi, const KalmanFitterInfo* prevFi, const TrackPoint* tp, double& chi2, double& ndf, int direction);

  /**
   * @brief Remove referenceStates if they are too far from smoothed states.
   *
   * Does NOT remove forward and backward info, but returns from/to where they have to be removed later
   * Return if anything has changed.
   */
  bool removeOutdated(Track* tr, const AbsTrackRep* rep, int& notChangedUntil, int& notChangedFrom);

  //! If refitAll_, remove all information.
  void removeForwardBackwardInfo(Track* tr, const AbsTrackRep* rep, int notChangedUntil, int notChangedFrom) const;

  bool refitAll_; // always refit all points or only if reference states have changed
  double deltaChi2Ref_; // reference track update cut

  // aux variables for prepareTrack
  TMatrixD FTransportMatrix_; //!
  TMatrixD BTransportMatrix_; //!
  TMatrixDSym FNoiseMatrix_; //!
  TMatrixDSym BNoiseMatrix_; //!
  TVectorD forwardDeltaState_; //!
  TVectorD backwardDeltaState_; //!

  // aux variables for processTrackPoint
  TVectorD p_; //!
  TMatrixDSym C_; //!
  TMatrixDSym covSumInv_; //!
  TMatrixDSym Rinv_; //!
  TVectorD res_; //!

  // aux variables for removeOutdated
  TVectorD resM_; //!

  bool squareRootFormalism_;

 public:
  ClassDefOverride(KalmanFitterRefTrack, 1)

};

}  /* End of namespace genfit */
/** @} */

#endif //genfit_KalmanFitterRefTrack_h
/* Copyright 2013, Ludwig-Maximilians Universität München,
   Authors: Tobias Schlüter & Johannes Rauch

   This file is part of GENFIT.

   GENFIT is free software: you can redistribute it and/or modify
   it under the terms of the GNU Lesser General Public License as published
   by the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   GENFIT is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with GENFIT.  If not, see <http://www.gnu.org/licenses/>.
*/
/** @addtogroup genfit
 * @{
 */

#ifndef genfit_KalmanFitter_h
#define genfit_KalmanFitter_h

#include "AbsKalmanFitter.h"

#include <memory>


namespace genfit {

class KalmanFitterInfo;
class MeasuredStateOnPlane;
class TrackPoint;

/**
 * @brief Simple Kalman filter implementation.
 */
class KalmanFitter : public AbsKalmanFitter {

 private:

  // These private functions are needed, otherwise strange things happen, no idea why!
  KalmanFitter(const KalmanFitter&);
  KalmanFitter& operator=(KalmanFitter const&);

 public:

  KalmanFitter(unsigned int maxIterations = 4, double deltaPval = 1e-3, double blowUpFactor = 1e3, bool squareRootFormalism = false)
    : AbsKalmanFitter(maxIterations, deltaPval, blowUpFactor), currentState_(nullptr),
      squareRootFormalism_(squareRootFormalism)
  {}

  ~KalmanFitter() {}

  //! Hit resorting currently NOT supported.
  void processTrackWithRep(Track* tr, const AbsTrackRep* rep, bool resortHits = false) override;

  //! process only a part of the track. Can also be used to process the track only in backward direction.
  //! Does not alter the FitStatus and does not do multiple iterations.
  void processTrackPartially(Track* tr, const AbsTrackRep* rep, int startId = 0, int endId = -1);

  void useSquareRootFormalism(bool squareRootFormalism = true) {squareRootFormalism_ = squareRootFormalism;}

 private:
  bool fitTrack(Track* tr, const AbsTrackRep* rep, double& chi2, double& ndf, int startId, int endId, int& nFailedHits);
  void processTrackPoint(TrackPoint* tp,
      const AbsTrackRep* rep, double& chi2, double& ndf, int direction);

  std::unique_ptr<MeasuredStateOnPlane> currentState_;

  bool squareRootFormalism_;

 public:
  ClassDefOverride(KalmanFitter,1)

};

} /* End of namespace genfit */
/** @} */

#endif //genfit_KalmanFitter_h
/* Copyright 2008-2010, Technische Universitaet Muenchen,
   Authors: Christian Hoeppner & Sebastian Neubert & Johannes Rauch

   This file is part of GENFIT.

   GENFIT is free software: you can redistribute it and/or modify
   it under the terms of the GNU Lesser General Public License as published
   by the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   GENFIT is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with GENFIT.  If not, see <http://www.gnu.org/licenses/>.
*/
/** @addtogroup genfit
 * @{
 */

#ifndef genfit_KalmanFitterInfo_h
#define genfit_KalmanFitterInfo_h

#include "AbsFitterInfo.h"
#include "KalmanFittedStateOnPlane.h"
#include "MeasuredStateOnPlane.h"
#include "MeasurementOnPlane.h"
#include "ReferenceStateOnPlane.h"
#include "StateOnPlane.h"

#include <vector>

#include <memory>


namespace genfit {


/**
 *  @brief Collects information needed and produced by a AbsKalmanFitter implementations and is specific to one AbsTrackRep of the Track.
 */
class KalmanFitterInfo : public AbsFitterInfo {

 public:

  KalmanFitterInfo();
  KalmanFitterInfo(const TrackPoint* trackPoint, const AbsTrackRep* rep);
  virtual ~KalmanFitterInfo();

  virtual KalmanFitterInfo* clone() const override;

  ReferenceStateOnPlane* getReferenceState() const {return referenceState_.get();}
  MeasuredStateOnPlane* getForwardPrediction() const {return forwardPrediction_.get();}
  MeasuredStateOnPlane* getBackwardPrediction() const {return backwardPrediction_.get();}
  MeasuredStateOnPlane* getPrediction(int direction) const {if (direction >=0) return forwardPrediction_.get(); return backwardPrediction_.get();}
  KalmanFittedStateOnPlane* getForwardUpdate() const {return forwardUpdate_.get();}
  KalmanFittedStateOnPlane* getBackwardUpdate() const {return backwardUpdate_.get();}
  KalmanFittedStateOnPlane* getUpdate(int direction) const {if (direction >=0) return forwardUpdate_.get(); return backwardUpdate_.get();}
  const std::vector< genfit::MeasurementOnPlane* >& getMeasurementsOnPlane() const {return measurementsOnPlane_;}
  MeasurementOnPlane* getMeasurementOnPlane(int i = 0) const {if (i<0) i += measurementsOnPlane_.size(); return measurementsOnPlane_.at(i);}
  //! Get weighted mean of all measurements.
  //! @param ignoreWeights If set, the weights of the individual measurements will be ignored (they will be treated as if they all had weight 1)
  MeasurementOnPlane getAvgWeightedMeasurementOnPlane(bool ignoreWeights = false) const;
  //! Get measurements which is closest to state.
  MeasurementOnPlane* getClosestMeasurementOnPlane(const StateOnPlane*) const;
  unsigned int getNumMeasurements() const {return measurementsOnPlane_.size();}
  //! Get weights of measurements.
  std::vector<double> getWeights() const;
  //! Are the weights fixed?
  bool areWeightsFixed() const {return fixWeights_;}
  //! Get unbiased or biased (default) smoothed state.
  const MeasuredStateOnPlane& getFittedState(bool biased = true) const override;
  //! Get unbiased (default) or biased residual from ith measurement.
  MeasurementOnPlane getResidual(unsigned int iMeasurement = 0, bool biased = false, bool onlyMeasurementErrors = true) const override; // calculate residual, track and measurement errors are added if onlyMeasurementErrors is false
  double getSmoothedChi2(unsigned int iMeasurement = 0) const;

  bool hasMeasurements() const override {return getNumMeasurements() > 0;}
  bool hasReferenceState() const override {return (referenceState_.get() != nullptr);}
  bool hasForwardPrediction() const override {return (forwardPrediction_.get()  != nullptr);}
  bool hasBackwardPrediction() const override {return (backwardPrediction_.get() != nullptr);}
  bool hasForwardUpdate() const override {return (forwardUpdate_.get() != nullptr);}
  bool hasBackwardUpdate() const override {return (backwardUpdate_.get() != nullptr);}
  bool hasUpdate(int direction) const override {if (direction < 0) return hasBackwardUpdate(); return hasForwardUpdate();}
  bool hasPredictionsAndUpdates() const {return (hasForwardPrediction() && hasBackwardPrediction() && hasForwardUpdate() && hasBackwardUpdate());}

  void setReferenceState(ReferenceStateOnPlane* referenceState);
  void setForwardPrediction(MeasuredStateOnPlane* forwardPrediction);
  void setBackwardPrediction(MeasuredStateOnPlane* backwardPrediction);
  void setPrediction(MeasuredStateOnPlane* prediction, int direction)  {if (direction >=0) setForwardPrediction(prediction); else setBackwardPrediction(prediction);}
  void setForwardUpdate(KalmanFittedStateOnPlane* forwardUpdate);
  void setBackwardUpdate(KalmanFittedStateOnPlane* backwardUpdate);
  void setUpdate(KalmanFittedStateOnPlane* update, int direction)  {if (direction >=0) setForwardUpdate(update); else setBackwardUpdate(update);}
  void setMeasurementsOnPlane(const std::vector< genfit::MeasurementOnPlane* >& measurementsOnPlane);
  void addMeasurementOnPlane(MeasurementOnPlane* measurementOnPlane);
  void addMeasurementsOnPlane(const std::vector< genfit::MeasurementOnPlane* >& measurementsOnPlane);
  //! Set weights of measurements.
  void setWeights(const std::vector<double>&);
  void fixWeights(bool arg = true) {fixWeights_ = arg;}
  void setRep(const AbsTrackRep* rep) override;

  void deleteForwardInfo() override;
  void deleteBackwardInfo() override;
  void deletePredictions();
  void deleteReferenceInfo() override {setReferenceState(nullptr);}
  void deleteMeasurementInfo() override;

  virtual void Print(const Option_t* = "") const override;

  virtual bool checkConsistency(const genfit::PruneFlags* = nullptr) const override;

 private:

  //! Reference state. Used by KalmanFitterRefTrack.
  std::unique_ptr<ReferenceStateOnPlane> referenceState_; // Ownership
  std::unique_ptr<MeasuredStateOnPlane> forwardPrediction_; // Ownership
  std::unique_ptr<KalmanFittedStateOnPlane> forwardUpdate_; // Ownership
  std::unique_ptr<MeasuredStateOnPlane> backwardPrediction_; // Ownership
  std::unique_ptr<KalmanFittedStateOnPlane> backwardUpdate_; // Ownership
  mutable std::unique_ptr<MeasuredStateOnPlane> fittedStateUnbiased_; //!  cache
  mutable std::unique_ptr<MeasuredStateOnPlane> fittedStateBiased_; //!  cache

 //> TODO ! ptr implement: to the special ownership version
  /* class owned_pointer_vector : private std::vector<MeasuredStateOnPlane*> {
   public: 
    ~owned_pointer_vector() { for (size_t i = 0; i < this->size(); ++i)
                         delete this[i]; }
    size_t size() const { return this->size(); };
    void push_back(MeasuredStateOnPlane* measuredState) { this->push_back(measuredState); };
    const  MeasuredStateOnPlane* at(size_t i)  const { return this->at(i); }; 
	//owned_pointer_vector::iterator erase(owned_pointer_vector::iterator position) ;
	//owned_pointer_vector::iterator erase(owned_pointer_vector::iterator first, owned_pointer_vector::iterator last);
};
	*/

  std::vector<MeasurementOnPlane*> measurementsOnPlane_; // Ownership
  bool fixWeights_; // weights should not be altered by fitters anymore

 public:

  ClassDefOverride(KalmanFitterInfo,1)

};

} /* End of namespace genfit */
/** @} */

#endif // genfit_KalmanFitterInfo_h
/* Copyright 2013, Ludwig-Maximilians Universität München,
   Authors: Tobias Schlüter & Johannes Rauch

   This file is part of GENFIT.

   GENFIT is free software: you can redistribute it and/or modify
   it under the terms of the GNU Lesser General Public License as published
   by the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   GENFIT is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with GENFIT.  If not, see <http://www.gnu.org/licenses/>.
*/
/** @addtogroup genfit
 * @{
 */

#ifndef genfit_DAF_h
#define genfit_DAF_h

#include "AbsKalmanFitter.h"

#include <vector>
#include <map>
#include <memory>


namespace genfit {

/** @brief Determinstic Annealing Filter (DAF) implementation.
 *
 * @author Christian H&ouml;ppner (Technische Universit&auml;t M&uuml;nchen, original author)
 * @author Karl Bicker (Technische Universit&auml;t M&uuml;nchen)
 *
 * The DAF is an iterative Kalman filter with annealing. It is capable of
 * fitting tracks which are contaminated with noise hits. The algorithm is
 * taken from the references R. Fruehwirth & A. Strandlie, Computer Physics
 * Communications 120 (1999) 197-214 and CERN thesis: Dissertation by Matthias
 * Winkler.
 *
 * The weights which were assigned to the hits by the DAF are accessible in the MeasurementOnPlane objects
 * in the KalmanFitterInfo objects.
 */
class DAF : public AbsKalmanFitter {

 private:

  DAF(const DAF&);
  DAF& operator=(genfit::DAF const&);

 public:

  /**
   * @brief Create DAF. Per default, use KalmanFitterRefTrack as fitter.
   *
   * @param useRefKalman If false, use KalmanFitter as fitter.
   */
  DAF(bool useRefKalman = true, double deltaPval = 1e-3, double deltaWeight = 1e-3);
  /**
   * @brief Create DAF. Use the provided AbsKalmanFitter as fitter.
   */
  DAF(AbsKalmanFitter* kalman, double deltaPval = 1e-3, double deltaWeight = 1e-3);
  ~DAF() {};

  //! Process a track using the DAF.
  void processTrackWithRep(Track* tr, const AbsTrackRep* rep, bool resortHits = false) override;

  /** @brief Set the probability cut for the weight calculation for the hits.
   *
   * By default the cut values for measurements of dimensionality from 1 to 5 are calculated.
   * If you what to have cut values for an arbitrary measurement dimensionality use
   * addProbCut(double prob_cut, int maxDim);
   */
  void setProbCut(const double prob_cut);

  //! Set the probability cut for the weight calculation for the hits for a specific measurement dimensionality.
  void addProbCut(const double prob_cut, const int measDim);

  const std::vector<double>& getBetas() const {return betas_;}

  /** @brief Configure the annealing scheme.
   *
   * Set a start and end temperature and the number of steps. A logarithmic sequence of temperatures will be calculated.
   * Also sets #minIterations_ and #maxIterations_.
   */
  void setAnnealingScheme(double bStart, double bFinal, unsigned int nSteps);

  void setMaxIterations(unsigned int n) override {maxIterations_ = n; betas_.resize(maxIterations_,betas_.back());}

  //! If all weights change less than delta between two iterations, the fit is regarded as converged.
  void setConvergenceDeltaWeight(double delta) {deltaWeight_ = delta;}

  AbsKalmanFitter* getKalman() const {return kalman_.get();}

  virtual void setMaxFailedHits(int val) override {getKalman()->setMaxFailedHits(val);}

  virtual void setDebugLvl(unsigned int lvl = 1) override {AbsFitter::setDebugLvl(lvl); if (lvl > 1) getKalman()->setDebugLvl(lvl-1);}

 private:

  /** @brief Calculate and set the weights for the next fitting pass.
   * Return if convergence is met.
   * The convergence criterium is the largest absolute change of all weights.
    */
  bool calcWeights(Track* trk, const AbsTrackRep* rep, double beta);


  double deltaWeight_; // convergence criterium
  std::vector<double> betas_;   // Temperatures, NOT inverse temperatures.
  double chi2Cuts_[7];  // '7' assumes tracks are helices with one
			// parameter, i.e. we're living in 3D space,
			// where time may be used in the fit.  Zeroth
			// entry is not used.

  std::unique_ptr<AbsKalmanFitter> kalman_;

 public:

  ClassDefOverride(DAF,2)

};

}  /* End of namespace genfit */
/** @} */

#endif //genfit_DAF_h

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genfit::AbsKalmanFitter", payloadCode, "@",
"genfit::DAF", payloadCode, "@",
"genfit::KalmanFitStatus", payloadCode, "@",
"genfit::KalmanFittedStateOnPlane", payloadCode, "@",
"genfit::KalmanFitter", payloadCode, "@",
"genfit::KalmanFitterInfo", payloadCode, "@",
"genfit::KalmanFitterRefTrack", payloadCode, "@",
"genfit::ReferenceStateOnPlane", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("fittersRootDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_fittersRootDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_fittersRootDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_fittersRootDict() {
  TriggerDictionaryInitialization_fittersRootDict_Impl();
}
