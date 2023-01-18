// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIhexhdIsimulationdIChnsRootdIbuildChnsdIemcdIG__ChnsEmcDict
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
#include "ChnsEmcReadPar.h"
#include "ChnsEmcContFact.h"
#include "EmcMC/ChnsEmc.h"
#include "EmcMC/ChnsEmcGeo.h"
#include "EmcMC/ChnsEmcGeoPar.h"
#include "EmcMC/ChnsEmcPoint.h"
#include "EmcReco/ChnsEmcDigiTask.h"
#include "EmcReco/ChnsEmcDigi.h"
#include "EmcReco/ChnsEmcClusterTask.h"
#include "EmcReco/ChnsEmcCluster.h"
#include "EmcReco/ChnsEmcParticleTask.h"
#include "EmcReco/ChnsEmcParticle.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_ChnsEmcReadPar(void *p = 0);
   static void *newArray_ChnsEmcReadPar(Long_t size, void *p);
   static void delete_ChnsEmcReadPar(void *p);
   static void deleteArray_ChnsEmcReadPar(void *p);
   static void destruct_ChnsEmcReadPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsEmcReadPar*)
   {
      ::ChnsEmcReadPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsEmcReadPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsEmcReadPar", ::ChnsEmcReadPar::Class_Version(), "ChnsEmcReadPar.h", 11,
                  typeid(::ChnsEmcReadPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsEmcReadPar::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsEmcReadPar) );
      instance.SetNew(&new_ChnsEmcReadPar);
      instance.SetNewArray(&newArray_ChnsEmcReadPar);
      instance.SetDelete(&delete_ChnsEmcReadPar);
      instance.SetDeleteArray(&deleteArray_ChnsEmcReadPar);
      instance.SetDestructor(&destruct_ChnsEmcReadPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsEmcReadPar*)
   {
      return GenerateInitInstanceLocal((::ChnsEmcReadPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsEmcReadPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsEmcContFact(void *p = 0);
   static void *newArray_ChnsEmcContFact(Long_t size, void *p);
   static void delete_ChnsEmcContFact(void *p);
   static void deleteArray_ChnsEmcContFact(void *p);
   static void destruct_ChnsEmcContFact(void *p);
   static void streamer_ChnsEmcContFact(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsEmcContFact*)
   {
      ::ChnsEmcContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsEmcContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsEmcContFact", ::ChnsEmcContFact::Class_Version(), "ChnsEmcContFact.h", 9,
                  typeid(::ChnsEmcContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsEmcContFact::Dictionary, isa_proxy, 16,
                  sizeof(::ChnsEmcContFact) );
      instance.SetNew(&new_ChnsEmcContFact);
      instance.SetNewArray(&newArray_ChnsEmcContFact);
      instance.SetDelete(&delete_ChnsEmcContFact);
      instance.SetDeleteArray(&deleteArray_ChnsEmcContFact);
      instance.SetDestructor(&destruct_ChnsEmcContFact);
      instance.SetStreamerFunc(&streamer_ChnsEmcContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsEmcContFact*)
   {
      return GenerateInitInstanceLocal((::ChnsEmcContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsEmcContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsEmc(void *p = 0);
   static void *newArray_ChnsEmc(Long_t size, void *p);
   static void delete_ChnsEmc(void *p);
   static void deleteArray_ChnsEmc(void *p);
   static void destruct_ChnsEmc(void *p);
   static void streamer_ChnsEmc(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsEmc*)
   {
      ::ChnsEmc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsEmc >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsEmc", ::ChnsEmc::Class_Version(), "ChnsEmc.h", 14,
                  typeid(::ChnsEmc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsEmc::Dictionary, isa_proxy, 16,
                  sizeof(::ChnsEmc) );
      instance.SetNew(&new_ChnsEmc);
      instance.SetNewArray(&newArray_ChnsEmc);
      instance.SetDelete(&delete_ChnsEmc);
      instance.SetDeleteArray(&deleteArray_ChnsEmc);
      instance.SetDestructor(&destruct_ChnsEmc);
      instance.SetStreamerFunc(&streamer_ChnsEmc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsEmc*)
   {
      return GenerateInitInstanceLocal((::ChnsEmc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsEmc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsEmcGeo(void *p = 0);
   static void *newArray_ChnsEmcGeo(Long_t size, void *p);
   static void delete_ChnsEmcGeo(void *p);
   static void deleteArray_ChnsEmcGeo(void *p);
   static void destruct_ChnsEmcGeo(void *p);
   static void streamer_ChnsEmcGeo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsEmcGeo*)
   {
      ::ChnsEmcGeo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsEmcGeo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsEmcGeo", ::ChnsEmcGeo::Class_Version(), "ChnsEmcGeo.h", 7,
                  typeid(::ChnsEmcGeo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsEmcGeo::Dictionary, isa_proxy, 16,
                  sizeof(::ChnsEmcGeo) );
      instance.SetNew(&new_ChnsEmcGeo);
      instance.SetNewArray(&newArray_ChnsEmcGeo);
      instance.SetDelete(&delete_ChnsEmcGeo);
      instance.SetDeleteArray(&deleteArray_ChnsEmcGeo);
      instance.SetDestructor(&destruct_ChnsEmcGeo);
      instance.SetStreamerFunc(&streamer_ChnsEmcGeo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsEmcGeo*)
   {
      return GenerateInitInstanceLocal((::ChnsEmcGeo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsEmcGeo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsEmcGeoPar(void *p = 0);
   static void *newArray_ChnsEmcGeoPar(Long_t size, void *p);
   static void delete_ChnsEmcGeoPar(void *p);
   static void deleteArray_ChnsEmcGeoPar(void *p);
   static void destruct_ChnsEmcGeoPar(void *p);
   static void streamer_ChnsEmcGeoPar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsEmcGeoPar*)
   {
      ::ChnsEmcGeoPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsEmcGeoPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsEmcGeoPar", ::ChnsEmcGeoPar::Class_Version(), "ChnsEmcGeoPar.h", 10,
                  typeid(::ChnsEmcGeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsEmcGeoPar::Dictionary, isa_proxy, 16,
                  sizeof(::ChnsEmcGeoPar) );
      instance.SetNew(&new_ChnsEmcGeoPar);
      instance.SetNewArray(&newArray_ChnsEmcGeoPar);
      instance.SetDelete(&delete_ChnsEmcGeoPar);
      instance.SetDeleteArray(&deleteArray_ChnsEmcGeoPar);
      instance.SetDestructor(&destruct_ChnsEmcGeoPar);
      instance.SetStreamerFunc(&streamer_ChnsEmcGeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsEmcGeoPar*)
   {
      return GenerateInitInstanceLocal((::ChnsEmcGeoPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsEmcGeoPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsEmcPoint(void *p = 0);
   static void *newArray_ChnsEmcPoint(Long_t size, void *p);
   static void delete_ChnsEmcPoint(void *p);
   static void deleteArray_ChnsEmcPoint(void *p);
   static void destruct_ChnsEmcPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsEmcPoint*)
   {
      ::ChnsEmcPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsEmcPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsEmcPoint", ::ChnsEmcPoint::Class_Version(), "ChnsEmcPoint.h", 10,
                  typeid(::ChnsEmcPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsEmcPoint::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsEmcPoint) );
      instance.SetNew(&new_ChnsEmcPoint);
      instance.SetNewArray(&newArray_ChnsEmcPoint);
      instance.SetDelete(&delete_ChnsEmcPoint);
      instance.SetDeleteArray(&deleteArray_ChnsEmcPoint);
      instance.SetDestructor(&destruct_ChnsEmcPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsEmcPoint*)
   {
      return GenerateInitInstanceLocal((::ChnsEmcPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsEmcPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsEmcDigi(void *p = 0);
   static void *newArray_ChnsEmcDigi(Long_t size, void *p);
   static void delete_ChnsEmcDigi(void *p);
   static void deleteArray_ChnsEmcDigi(void *p);
   static void destruct_ChnsEmcDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsEmcDigi*)
   {
      ::ChnsEmcDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsEmcDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsEmcDigi", ::ChnsEmcDigi::Class_Version(), "ChnsEmcDigi.h", 12,
                  typeid(::ChnsEmcDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsEmcDigi::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsEmcDigi) );
      instance.SetNew(&new_ChnsEmcDigi);
      instance.SetNewArray(&newArray_ChnsEmcDigi);
      instance.SetDelete(&delete_ChnsEmcDigi);
      instance.SetDeleteArray(&deleteArray_ChnsEmcDigi);
      instance.SetDestructor(&destruct_ChnsEmcDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsEmcDigi*)
   {
      return GenerateInitInstanceLocal((::ChnsEmcDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsEmcDigi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsEmcDigiTask(void *p = 0);
   static void *newArray_ChnsEmcDigiTask(Long_t size, void *p);
   static void delete_ChnsEmcDigiTask(void *p);
   static void deleteArray_ChnsEmcDigiTask(void *p);
   static void destruct_ChnsEmcDigiTask(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsEmcDigiTask*)
   {
      ::ChnsEmcDigiTask *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsEmcDigiTask >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsEmcDigiTask", ::ChnsEmcDigiTask::Class_Version(), "ChnsEmcDigiTask.h", 26,
                  typeid(::ChnsEmcDigiTask), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsEmcDigiTask::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsEmcDigiTask) );
      instance.SetNew(&new_ChnsEmcDigiTask);
      instance.SetNewArray(&newArray_ChnsEmcDigiTask);
      instance.SetDelete(&delete_ChnsEmcDigiTask);
      instance.SetDeleteArray(&deleteArray_ChnsEmcDigiTask);
      instance.SetDestructor(&destruct_ChnsEmcDigiTask);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsEmcDigiTask*)
   {
      return GenerateInitInstanceLocal((::ChnsEmcDigiTask*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsEmcDigiTask*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsEmcCluster(void *p = 0);
   static void *newArray_ChnsEmcCluster(Long_t size, void *p);
   static void delete_ChnsEmcCluster(void *p);
   static void deleteArray_ChnsEmcCluster(void *p);
   static void destruct_ChnsEmcCluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsEmcCluster*)
   {
      ::ChnsEmcCluster *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsEmcCluster >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsEmcCluster", ::ChnsEmcCluster::Class_Version(), "ChnsEmcCluster.h", 11,
                  typeid(::ChnsEmcCluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsEmcCluster::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsEmcCluster) );
      instance.SetNew(&new_ChnsEmcCluster);
      instance.SetNewArray(&newArray_ChnsEmcCluster);
      instance.SetDelete(&delete_ChnsEmcCluster);
      instance.SetDeleteArray(&deleteArray_ChnsEmcCluster);
      instance.SetDestructor(&destruct_ChnsEmcCluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsEmcCluster*)
   {
      return GenerateInitInstanceLocal((::ChnsEmcCluster*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsEmcCluster*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsEmcClusterTask(void *p = 0);
   static void *newArray_ChnsEmcClusterTask(Long_t size, void *p);
   static void delete_ChnsEmcClusterTask(void *p);
   static void deleteArray_ChnsEmcClusterTask(void *p);
   static void destruct_ChnsEmcClusterTask(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsEmcClusterTask*)
   {
      ::ChnsEmcClusterTask *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsEmcClusterTask >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsEmcClusterTask", ::ChnsEmcClusterTask::Class_Version(), "ChnsEmcClusterTask.h", 28,
                  typeid(::ChnsEmcClusterTask), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsEmcClusterTask::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsEmcClusterTask) );
      instance.SetNew(&new_ChnsEmcClusterTask);
      instance.SetNewArray(&newArray_ChnsEmcClusterTask);
      instance.SetDelete(&delete_ChnsEmcClusterTask);
      instance.SetDeleteArray(&deleteArray_ChnsEmcClusterTask);
      instance.SetDestructor(&destruct_ChnsEmcClusterTask);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsEmcClusterTask*)
   {
      return GenerateInitInstanceLocal((::ChnsEmcClusterTask*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsEmcClusterTask*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsEmcParticle(void *p = 0);
   static void *newArray_ChnsEmcParticle(Long_t size, void *p);
   static void delete_ChnsEmcParticle(void *p);
   static void deleteArray_ChnsEmcParticle(void *p);
   static void destruct_ChnsEmcParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsEmcParticle*)
   {
      ::ChnsEmcParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsEmcParticle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsEmcParticle", ::ChnsEmcParticle::Class_Version(), "ChnsEmcParticle.h", 12,
                  typeid(::ChnsEmcParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsEmcParticle::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsEmcParticle) );
      instance.SetNew(&new_ChnsEmcParticle);
      instance.SetNewArray(&newArray_ChnsEmcParticle);
      instance.SetDelete(&delete_ChnsEmcParticle);
      instance.SetDeleteArray(&deleteArray_ChnsEmcParticle);
      instance.SetDestructor(&destruct_ChnsEmcParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsEmcParticle*)
   {
      return GenerateInitInstanceLocal((::ChnsEmcParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsEmcParticle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsEmcParticleTask(void *p = 0);
   static void *newArray_ChnsEmcParticleTask(Long_t size, void *p);
   static void delete_ChnsEmcParticleTask(void *p);
   static void deleteArray_ChnsEmcParticleTask(void *p);
   static void destruct_ChnsEmcParticleTask(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsEmcParticleTask*)
   {
      ::ChnsEmcParticleTask *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsEmcParticleTask >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsEmcParticleTask", ::ChnsEmcParticleTask::Class_Version(), "ChnsEmcParticleTask.h", 24,
                  typeid(::ChnsEmcParticleTask), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsEmcParticleTask::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsEmcParticleTask) );
      instance.SetNew(&new_ChnsEmcParticleTask);
      instance.SetNewArray(&newArray_ChnsEmcParticleTask);
      instance.SetDelete(&delete_ChnsEmcParticleTask);
      instance.SetDeleteArray(&deleteArray_ChnsEmcParticleTask);
      instance.SetDestructor(&destruct_ChnsEmcParticleTask);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsEmcParticleTask*)
   {
      return GenerateInitInstanceLocal((::ChnsEmcParticleTask*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsEmcParticleTask*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr ChnsEmcReadPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsEmcReadPar::Class_Name()
{
   return "ChnsEmcReadPar";
}

//______________________________________________________________________________
const char *ChnsEmcReadPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcReadPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsEmcReadPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcReadPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsEmcReadPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcReadPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsEmcReadPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcReadPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsEmcContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsEmcContFact::Class_Name()
{
   return "ChnsEmcContFact";
}

//______________________________________________________________________________
const char *ChnsEmcContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsEmcContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsEmcContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsEmcContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsEmc::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsEmc::Class_Name()
{
   return "ChnsEmc";
}

//______________________________________________________________________________
const char *ChnsEmc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmc*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsEmc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmc*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsEmc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmc*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsEmc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmc*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsEmcGeo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsEmcGeo::Class_Name()
{
   return "ChnsEmcGeo";
}

//______________________________________________________________________________
const char *ChnsEmcGeo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcGeo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsEmcGeo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcGeo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsEmcGeo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcGeo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsEmcGeo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcGeo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsEmcGeoPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsEmcGeoPar::Class_Name()
{
   return "ChnsEmcGeoPar";
}

//______________________________________________________________________________
const char *ChnsEmcGeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcGeoPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsEmcGeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcGeoPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsEmcGeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcGeoPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsEmcGeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcGeoPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsEmcPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsEmcPoint::Class_Name()
{
   return "ChnsEmcPoint";
}

//______________________________________________________________________________
const char *ChnsEmcPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsEmcPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsEmcPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsEmcPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsEmcDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsEmcDigi::Class_Name()
{
   return "ChnsEmcDigi";
}

//______________________________________________________________________________
const char *ChnsEmcDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsEmcDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsEmcDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsEmcDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsEmcDigiTask::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsEmcDigiTask::Class_Name()
{
   return "ChnsEmcDigiTask";
}

//______________________________________________________________________________
const char *ChnsEmcDigiTask::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcDigiTask*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsEmcDigiTask::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcDigiTask*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsEmcDigiTask::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcDigiTask*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsEmcDigiTask::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcDigiTask*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsEmcCluster::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsEmcCluster::Class_Name()
{
   return "ChnsEmcCluster";
}

//______________________________________________________________________________
const char *ChnsEmcCluster::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcCluster*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsEmcCluster::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcCluster*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsEmcCluster::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcCluster*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsEmcCluster::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcCluster*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsEmcClusterTask::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsEmcClusterTask::Class_Name()
{
   return "ChnsEmcClusterTask";
}

//______________________________________________________________________________
const char *ChnsEmcClusterTask::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcClusterTask*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsEmcClusterTask::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcClusterTask*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsEmcClusterTask::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcClusterTask*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsEmcClusterTask::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcClusterTask*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsEmcParticle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsEmcParticle::Class_Name()
{
   return "ChnsEmcParticle";
}

//______________________________________________________________________________
const char *ChnsEmcParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcParticle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsEmcParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcParticle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsEmcParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcParticle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsEmcParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcParticle*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsEmcParticleTask::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsEmcParticleTask::Class_Name()
{
   return "ChnsEmcParticleTask";
}

//______________________________________________________________________________
const char *ChnsEmcParticleTask::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcParticleTask*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsEmcParticleTask::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcParticleTask*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsEmcParticleTask::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcParticleTask*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsEmcParticleTask::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEmcParticleTask*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void ChnsEmcReadPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsEmcReadPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsEmcReadPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsEmcReadPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsEmcReadPar(void *p) {
      return  p ? new(p) ::ChnsEmcReadPar : new ::ChnsEmcReadPar;
   }
   static void *newArray_ChnsEmcReadPar(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsEmcReadPar[nElements] : new ::ChnsEmcReadPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsEmcReadPar(void *p) {
      delete ((::ChnsEmcReadPar*)p);
   }
   static void deleteArray_ChnsEmcReadPar(void *p) {
      delete [] ((::ChnsEmcReadPar*)p);
   }
   static void destruct_ChnsEmcReadPar(void *p) {
      typedef ::ChnsEmcReadPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsEmcReadPar

//______________________________________________________________________________
void ChnsEmcContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsEmcContFact.

   FairContFact::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsEmcContFact(void *p) {
      return  p ? new(p) ::ChnsEmcContFact : new ::ChnsEmcContFact;
   }
   static void *newArray_ChnsEmcContFact(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsEmcContFact[nElements] : new ::ChnsEmcContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsEmcContFact(void *p) {
      delete ((::ChnsEmcContFact*)p);
   }
   static void deleteArray_ChnsEmcContFact(void *p) {
      delete [] ((::ChnsEmcContFact*)p);
   }
   static void destruct_ChnsEmcContFact(void *p) {
      typedef ::ChnsEmcContFact current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ChnsEmcContFact(TBuffer &buf, void *obj) {
      ((::ChnsEmcContFact*)obj)->::ChnsEmcContFact::Streamer(buf);
   }
} // end of namespace ROOT for class ::ChnsEmcContFact

//______________________________________________________________________________
void ChnsEmc::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsEmc.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairDetector::Streamer(R__b);
      R__b >> fPersistance;
      R__b.CheckByteCount(R__s, R__c, ChnsEmc::IsA());
   } else {
      R__c = R__b.WriteVersion(ChnsEmc::IsA(), kTRUE);
      FairDetector::Streamer(R__b);
      R__b << fPersistance;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsEmc(void *p) {
      return  p ? new(p) ::ChnsEmc : new ::ChnsEmc;
   }
   static void *newArray_ChnsEmc(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsEmc[nElements] : new ::ChnsEmc[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsEmc(void *p) {
      delete ((::ChnsEmc*)p);
   }
   static void deleteArray_ChnsEmc(void *p) {
      delete [] ((::ChnsEmc*)p);
   }
   static void destruct_ChnsEmc(void *p) {
      typedef ::ChnsEmc current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ChnsEmc(TBuffer &buf, void *obj) {
      ((::ChnsEmc*)obj)->::ChnsEmc::Streamer(buf);
   }
} // end of namespace ROOT for class ::ChnsEmc

//______________________________________________________________________________
void ChnsEmcGeo::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsEmcGeo.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairGeoSet::Streamer(R__b);
      R__b.ReadStaticArray((char*)modName);
      R__b.ReadStaticArray((char*)eleName);
      R__b.CheckByteCount(R__s, R__c, ChnsEmcGeo::IsA());
   } else {
      R__c = R__b.WriteVersion(ChnsEmcGeo::IsA(), kTRUE);
      FairGeoSet::Streamer(R__b);
      R__b.WriteArray(modName, 20);
      R__b.WriteArray(eleName, 20);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsEmcGeo(void *p) {
      return  p ? new(p) ::ChnsEmcGeo : new ::ChnsEmcGeo;
   }
   static void *newArray_ChnsEmcGeo(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsEmcGeo[nElements] : new ::ChnsEmcGeo[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsEmcGeo(void *p) {
      delete ((::ChnsEmcGeo*)p);
   }
   static void deleteArray_ChnsEmcGeo(void *p) {
      delete [] ((::ChnsEmcGeo*)p);
   }
   static void destruct_ChnsEmcGeo(void *p) {
      typedef ::ChnsEmcGeo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ChnsEmcGeo(TBuffer &buf, void *obj) {
      ((::ChnsEmcGeo*)obj)->::ChnsEmcGeo::Streamer(buf);
   }
} // end of namespace ROOT for class ::ChnsEmcGeo

//______________________________________________________________________________
void ChnsEmcGeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsEmcGeoPar.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairParGenericSet::Streamer(R__b);
      R__b >> fGeoSensNodes;
      R__b >> fGeoPassNodes;
      R__b.CheckByteCount(R__s, R__c, ChnsEmcGeoPar::IsA());
   } else {
      R__c = R__b.WriteVersion(ChnsEmcGeoPar::IsA(), kTRUE);
      FairParGenericSet::Streamer(R__b);
      R__b << fGeoSensNodes;
      R__b << fGeoPassNodes;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsEmcGeoPar(void *p) {
      return  p ? new(p) ::ChnsEmcGeoPar : new ::ChnsEmcGeoPar;
   }
   static void *newArray_ChnsEmcGeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsEmcGeoPar[nElements] : new ::ChnsEmcGeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsEmcGeoPar(void *p) {
      delete ((::ChnsEmcGeoPar*)p);
   }
   static void deleteArray_ChnsEmcGeoPar(void *p) {
      delete [] ((::ChnsEmcGeoPar*)p);
   }
   static void destruct_ChnsEmcGeoPar(void *p) {
      typedef ::ChnsEmcGeoPar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ChnsEmcGeoPar(TBuffer &buf, void *obj) {
      ((::ChnsEmcGeoPar*)obj)->::ChnsEmcGeoPar::Streamer(buf);
   }
} // end of namespace ROOT for class ::ChnsEmcGeoPar

//______________________________________________________________________________
void ChnsEmcPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsEmcPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsEmcPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsEmcPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsEmcPoint(void *p) {
      return  p ? new(p) ::ChnsEmcPoint : new ::ChnsEmcPoint;
   }
   static void *newArray_ChnsEmcPoint(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsEmcPoint[nElements] : new ::ChnsEmcPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsEmcPoint(void *p) {
      delete ((::ChnsEmcPoint*)p);
   }
   static void deleteArray_ChnsEmcPoint(void *p) {
      delete [] ((::ChnsEmcPoint*)p);
   }
   static void destruct_ChnsEmcPoint(void *p) {
      typedef ::ChnsEmcPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsEmcPoint

//______________________________________________________________________________
void ChnsEmcDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsEmcDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsEmcDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsEmcDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsEmcDigi(void *p) {
      return  p ? new(p) ::ChnsEmcDigi : new ::ChnsEmcDigi;
   }
   static void *newArray_ChnsEmcDigi(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsEmcDigi[nElements] : new ::ChnsEmcDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsEmcDigi(void *p) {
      delete ((::ChnsEmcDigi*)p);
   }
   static void deleteArray_ChnsEmcDigi(void *p) {
      delete [] ((::ChnsEmcDigi*)p);
   }
   static void destruct_ChnsEmcDigi(void *p) {
      typedef ::ChnsEmcDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsEmcDigi

//______________________________________________________________________________
void ChnsEmcDigiTask::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsEmcDigiTask.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsEmcDigiTask::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsEmcDigiTask::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsEmcDigiTask(void *p) {
      return  p ? new(p) ::ChnsEmcDigiTask : new ::ChnsEmcDigiTask;
   }
   static void *newArray_ChnsEmcDigiTask(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsEmcDigiTask[nElements] : new ::ChnsEmcDigiTask[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsEmcDigiTask(void *p) {
      delete ((::ChnsEmcDigiTask*)p);
   }
   static void deleteArray_ChnsEmcDigiTask(void *p) {
      delete [] ((::ChnsEmcDigiTask*)p);
   }
   static void destruct_ChnsEmcDigiTask(void *p) {
      typedef ::ChnsEmcDigiTask current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsEmcDigiTask

//______________________________________________________________________________
void ChnsEmcCluster::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsEmcCluster.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsEmcCluster::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsEmcCluster::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsEmcCluster(void *p) {
      return  p ? new(p) ::ChnsEmcCluster : new ::ChnsEmcCluster;
   }
   static void *newArray_ChnsEmcCluster(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsEmcCluster[nElements] : new ::ChnsEmcCluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsEmcCluster(void *p) {
      delete ((::ChnsEmcCluster*)p);
   }
   static void deleteArray_ChnsEmcCluster(void *p) {
      delete [] ((::ChnsEmcCluster*)p);
   }
   static void destruct_ChnsEmcCluster(void *p) {
      typedef ::ChnsEmcCluster current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsEmcCluster

//______________________________________________________________________________
void ChnsEmcClusterTask::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsEmcClusterTask.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsEmcClusterTask::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsEmcClusterTask::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsEmcClusterTask(void *p) {
      return  p ? new(p) ::ChnsEmcClusterTask : new ::ChnsEmcClusterTask;
   }
   static void *newArray_ChnsEmcClusterTask(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsEmcClusterTask[nElements] : new ::ChnsEmcClusterTask[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsEmcClusterTask(void *p) {
      delete ((::ChnsEmcClusterTask*)p);
   }
   static void deleteArray_ChnsEmcClusterTask(void *p) {
      delete [] ((::ChnsEmcClusterTask*)p);
   }
   static void destruct_ChnsEmcClusterTask(void *p) {
      typedef ::ChnsEmcClusterTask current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsEmcClusterTask

//______________________________________________________________________________
void ChnsEmcParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsEmcParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsEmcParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsEmcParticle::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsEmcParticle(void *p) {
      return  p ? new(p) ::ChnsEmcParticle : new ::ChnsEmcParticle;
   }
   static void *newArray_ChnsEmcParticle(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsEmcParticle[nElements] : new ::ChnsEmcParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsEmcParticle(void *p) {
      delete ((::ChnsEmcParticle*)p);
   }
   static void deleteArray_ChnsEmcParticle(void *p) {
      delete [] ((::ChnsEmcParticle*)p);
   }
   static void destruct_ChnsEmcParticle(void *p) {
      typedef ::ChnsEmcParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsEmcParticle

//______________________________________________________________________________
void ChnsEmcParticleTask::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsEmcParticleTask.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsEmcParticleTask::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsEmcParticleTask::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsEmcParticleTask(void *p) {
      return  p ? new(p) ::ChnsEmcParticleTask : new ::ChnsEmcParticleTask;
   }
   static void *newArray_ChnsEmcParticleTask(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsEmcParticleTask[nElements] : new ::ChnsEmcParticleTask[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsEmcParticleTask(void *p) {
      delete ((::ChnsEmcParticleTask*)p);
   }
   static void deleteArray_ChnsEmcParticleTask(void *p) {
      delete [] ((::ChnsEmcParticleTask*)p);
   }
   static void destruct_ChnsEmcParticleTask(void *p) {
      typedef ::ChnsEmcParticleTask current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsEmcParticleTask

namespace ROOT {
   static TClass *vectorlEvectorlEintgRsPgR_Dictionary();
   static void vectorlEvectorlEintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEintgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEintgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEintgRsPgR(void *p);
   static void destruct_vectorlEvectorlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<int> >*)
   {
      vector<vector<int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<int> >", -2, "vector", 216,
                  typeid(vector<vector<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<int> >) );
      instance.SetNew(&new_vectorlEvectorlEintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEintgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<int> > >()));

      ::ROOT::AddClassAlternate("vector<vector<int> >","std::vector<std::vector<int, std::allocator<int> >, std::allocator<std::vector<int, std::allocator<int> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<int> >*)0x0)->GetClass();
      vectorlEvectorlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<int> > : new vector<vector<int> >;
   }
   static void *newArray_vectorlEvectorlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<int> >[nElements] : new vector<vector<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEintgRsPgR(void *p) {
      delete ((vector<vector<int> >*)p);
   }
   static void deleteArray_vectorlEvectorlEintgRsPgR(void *p) {
      delete [] ((vector<vector<int> >*)p);
   }
   static void destruct_vectorlEvectorlEintgRsPgR(void *p) {
      typedef vector<vector<int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<int> >

namespace ROOT {
   static TClass *vectorlEvectorlEdoublegRsPgR_Dictionary();
   static void vectorlEvectorlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEdoublegRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEdoublegRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEdoublegRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEdoublegRsPgR(void *p);
   static void destruct_vectorlEvectorlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<double> >*)
   {
      vector<vector<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<double> >", -2, "vector", 216,
                  typeid(vector<vector<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<double> >) );
      instance.SetNew(&new_vectorlEvectorlEdoublegRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEdoublegRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEdoublegRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<double> > >()));

      ::ROOT::AddClassAlternate("vector<vector<double> >","std::vector<std::vector<double, std::allocator<double> >, std::allocator<std::vector<double, std::allocator<double> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<double> >*)0x0)->GetClass();
      vectorlEvectorlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<double> > : new vector<vector<double> >;
   }
   static void *newArray_vectorlEvectorlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<double> >[nElements] : new vector<vector<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEdoublegRsPgR(void *p) {
      delete ((vector<vector<double> >*)p);
   }
   static void deleteArray_vectorlEvectorlEdoublegRsPgR(void *p) {
      delete [] ((vector<vector<double> >*)p);
   }
   static void destruct_vectorlEvectorlEdoublegRsPgR(void *p) {
      typedef vector<vector<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<double> >

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
  void TriggerDictionaryInitialization_G__ChnsEmcDict_Impl() {
    static const char* headers[] = {
"ChnsEmcReadPar.h",
"ChnsEmcContFact.h",
"EmcMC/ChnsEmc.h",
"EmcMC/ChnsEmcGeo.h",
"EmcMC/ChnsEmcGeoPar.h",
"EmcMC/ChnsEmcPoint.h",
"EmcReco/ChnsEmcDigiTask.h",
"EmcReco/ChnsEmcDigi.h",
"EmcReco/ChnsEmcClusterTask.h",
"EmcReco/ChnsEmcCluster.h",
"EmcReco/ChnsEmcParticleTask.h",
"EmcReco/ChnsEmcParticle.h",
0
    };
    static const char* includePaths[] = {
"/home/eicc/FairRoot/build_18.4.2/include",
"/home/hexh/simulation/ChnsRoot/ChnsData",
"/home/hexh/simulation/ChnsRoot/emc/EmcMC",
"/home/hexh/simulation/ChnsRoot/emc/EmcReco",
"/home/hexh/simulation/ChnsRoot/emc",
"/home/eicc/software/FairSoft/install/include/root",
"/home/eicc/software/FairSoft/install/include",
"/home/eicc/software/FairSoft/install/include/root",
"/home/hexh/simulation/ChnsRoot/buildChns/emc/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__ChnsEmcDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$ChnsEmcReadPar.h")))  ChnsEmcReadPar;
class __attribute__((annotate(R"ATTRDUMP(Factory for all ChnsEmc parameter containers)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Factory for all ChnsEmc parameter containers)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Factory for all ChnsEmc parameter containers)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Factory for all ChnsEmc parameter containers)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$ChnsEmcContFact.h")))  ChnsEmcContFact;
class __attribute__((annotate("$clingAutoload$EmcMC/ChnsEmc.h")))  ChnsEmc;
class __attribute__((annotate("$clingAutoload$EmcMC/ChnsEmcGeo.h")))  ChnsEmcGeo;
class __attribute__((annotate("$clingAutoload$EmcMC/ChnsEmcGeoPar.h")))  ChnsEmcGeoPar;
class __attribute__((annotate("$clingAutoload$EmcMC/ChnsEmcPoint.h")))  ChnsEmcPoint;
class __attribute__((annotate("$clingAutoload$ChnsEmcDigi.h")))  __attribute__((annotate("$clingAutoload$EmcReco/ChnsEmcDigiTask.h")))  ChnsEmcDigi;
class __attribute__((annotate(R"ATTRDUMP(???)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(???)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(???)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(???)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$EmcReco/ChnsEmcDigiTask.h")))  ChnsEmcDigiTask;
class __attribute__((annotate("$clingAutoload$ChnsEmcCluster.h")))  __attribute__((annotate("$clingAutoload$EmcReco/ChnsEmcClusterTask.h")))  ChnsEmcCluster;
class __attribute__((annotate(R"ATTRDUMP(???)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(???)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(???)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(???)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$EmcReco/ChnsEmcClusterTask.h")))  ChnsEmcClusterTask;
class __attribute__((annotate("$clingAutoload$ChnsEmcParticle.h")))  __attribute__((annotate("$clingAutoload$EmcReco/ChnsEmcParticleTask.h")))  ChnsEmcParticle;
class __attribute__((annotate(R"ATTRDUMP(???)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(???)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(???)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(???)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$EmcReco/ChnsEmcParticleTask.h")))  ChnsEmcParticleTask;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__ChnsEmcDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "ChnsEmcReadPar.h"
#include "ChnsEmcContFact.h"
#include "EmcMC/ChnsEmc.h"
#include "EmcMC/ChnsEmcGeo.h"
#include "EmcMC/ChnsEmcGeoPar.h"
#include "EmcMC/ChnsEmcPoint.h"
#include "EmcReco/ChnsEmcDigiTask.h"
#include "EmcReco/ChnsEmcDigi.h"
#include "EmcReco/ChnsEmcClusterTask.h"
#include "EmcReco/ChnsEmcCluster.h"
#include "EmcReco/ChnsEmcParticleTask.h"
#include "EmcReco/ChnsEmcParticle.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"ChnsEmc", payloadCode, "@",
"ChnsEmcCluster", payloadCode, "@",
"ChnsEmcClusterTask", payloadCode, "@",
"ChnsEmcContFact", payloadCode, "@",
"ChnsEmcDigi", payloadCode, "@",
"ChnsEmcDigiTask", payloadCode, "@",
"ChnsEmcGeo", payloadCode, "@",
"ChnsEmcGeoPar", payloadCode, "@",
"ChnsEmcParticle", payloadCode, "@",
"ChnsEmcParticleTask", payloadCode, "@",
"ChnsEmcPoint", payloadCode, "@",
"ChnsEmcReadPar", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__ChnsEmcDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__ChnsEmcDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__ChnsEmcDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__ChnsEmcDict() {
  TriggerDictionaryInitialization_G__ChnsEmcDict_Impl();
}
