// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdata2dIrwangdIgithubsdIHIAFmIetaFactorymISimulationsdIChnsRoot_v2dIbuilddIChnsGeneratorsdIG__ChnsGenDict
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
#include "ChnsBoxGenerator.h"
#include "ChnsEvtGenGenerator.h"
#include "ChnsPlutoGenerator.h"
#include "ChnsJamGenerator.h"
#include "PDataBase.h"
#include "PMesh.h"
#include "PParticle.h"
#include "PStaticData.h"
#include "PStdData.h"
#include "PValues.h"

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
   static void *new_ChnsBoxGenerator(void *p = 0);
   static void *newArray_ChnsBoxGenerator(Long_t size, void *p);
   static void delete_ChnsBoxGenerator(void *p);
   static void deleteArray_ChnsBoxGenerator(void *p);
   static void destruct_ChnsBoxGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsBoxGenerator*)
   {
      ::ChnsBoxGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsBoxGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsBoxGenerator", ::ChnsBoxGenerator::Class_Version(), "ChnsBoxGenerator.h", 48,
                  typeid(::ChnsBoxGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsBoxGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsBoxGenerator) );
      instance.SetNew(&new_ChnsBoxGenerator);
      instance.SetNewArray(&newArray_ChnsBoxGenerator);
      instance.SetDelete(&delete_ChnsBoxGenerator);
      instance.SetDeleteArray(&deleteArray_ChnsBoxGenerator);
      instance.SetDestructor(&destruct_ChnsBoxGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsBoxGenerator*)
   {
      return GenerateInitInstanceLocal((::ChnsBoxGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsBoxGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
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

namespace ROOT {
   static void *new_ChnsPlutoGenerator(void *p = 0);
   static void *newArray_ChnsPlutoGenerator(Long_t size, void *p);
   static void delete_ChnsPlutoGenerator(void *p);
   static void deleteArray_ChnsPlutoGenerator(void *p);
   static void destruct_ChnsPlutoGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsPlutoGenerator*)
   {
      ::ChnsPlutoGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsPlutoGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsPlutoGenerator", ::ChnsPlutoGenerator::Class_Version(), "ChnsPlutoGenerator.h", 31,
                  typeid(::ChnsPlutoGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsPlutoGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsPlutoGenerator) );
      instance.SetNew(&new_ChnsPlutoGenerator);
      instance.SetNewArray(&newArray_ChnsPlutoGenerator);
      instance.SetDelete(&delete_ChnsPlutoGenerator);
      instance.SetDeleteArray(&deleteArray_ChnsPlutoGenerator);
      instance.SetDestructor(&destruct_ChnsPlutoGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsPlutoGenerator*)
   {
      return GenerateInitInstanceLocal((::ChnsPlutoGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsPlutoGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsJamGenerator(void *p = 0);
   static void *newArray_ChnsJamGenerator(Long_t size, void *p);
   static void delete_ChnsJamGenerator(void *p);
   static void deleteArray_ChnsJamGenerator(void *p);
   static void destruct_ChnsJamGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsJamGenerator*)
   {
      ::ChnsJamGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsJamGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsJamGenerator", ::ChnsJamGenerator::Class_Version(), "ChnsJamGenerator.h", 15,
                  typeid(::ChnsJamGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsJamGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsJamGenerator) );
      instance.SetNew(&new_ChnsJamGenerator);
      instance.SetNewArray(&newArray_ChnsJamGenerator);
      instance.SetDelete(&delete_ChnsJamGenerator);
      instance.SetDeleteArray(&deleteArray_ChnsJamGenerator);
      instance.SetDestructor(&destruct_ChnsJamGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsJamGenerator*)
   {
      return GenerateInitInstanceLocal((::ChnsJamGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsJamGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_PDataBase(void *p = 0);
   static void *newArray_PDataBase(Long_t size, void *p);
   static void delete_PDataBase(void *p);
   static void deleteArray_PDataBase(void *p);
   static void destruct_PDataBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PDataBase*)
   {
      ::PDataBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PDataBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("PDataBase", ::PDataBase::Class_Version(), "PDataBase.h", 27,
                  typeid(::PDataBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PDataBase::Dictionary, isa_proxy, 4,
                  sizeof(::PDataBase) );
      instance.SetNew(&new_PDataBase);
      instance.SetNewArray(&newArray_PDataBase);
      instance.SetDelete(&delete_PDataBase);
      instance.SetDeleteArray(&deleteArray_PDataBase);
      instance.SetDestructor(&destruct_PDataBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PDataBase*)
   {
      return GenerateInitInstanceLocal((::PDataBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::PDataBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_PMesh(void *p);
   static void deleteArray_PMesh(void *p);
   static void destruct_PMesh(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PMesh*)
   {
      ::PMesh *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PMesh >(0);
      static ::ROOT::TGenericClassInfo 
         instance("PMesh", ::PMesh::Class_Version(), "PMesh.h", 13,
                  typeid(::PMesh), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PMesh::Dictionary, isa_proxy, 4,
                  sizeof(::PMesh) );
      instance.SetDelete(&delete_PMesh);
      instance.SetDeleteArray(&deleteArray_PMesh);
      instance.SetDestructor(&destruct_PMesh);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PMesh*)
   {
      return GenerateInitInstanceLocal((::PMesh*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::PMesh*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_PValues(void *p = 0);
   static void *newArray_PValues(Long_t size, void *p);
   static void delete_PValues(void *p);
   static void deleteArray_PValues(void *p);
   static void destruct_PValues(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PValues*)
   {
      ::PValues *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PValues >(0);
      static ::ROOT::TGenericClassInfo 
         instance("PValues", ::PValues::Class_Version(), "PValues.h", 21,
                  typeid(::PValues), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PValues::Dictionary, isa_proxy, 4,
                  sizeof(::PValues) );
      instance.SetNew(&new_PValues);
      instance.SetNewArray(&newArray_PValues);
      instance.SetDelete(&delete_PValues);
      instance.SetDeleteArray(&deleteArray_PValues);
      instance.SetDestructor(&destruct_PValues);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PValues*)
   {
      return GenerateInitInstanceLocal((::PValues*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::PValues*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_PParticle(void *p = 0);
   static void *newArray_PParticle(Long_t size, void *p);
   static void delete_PParticle(void *p);
   static void deleteArray_PParticle(void *p);
   static void destruct_PParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PParticle*)
   {
      ::PParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PParticle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("PParticle", ::PParticle::Class_Version(), "PParticle.h", 22,
                  typeid(::PParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PParticle::Dictionary, isa_proxy, 4,
                  sizeof(::PParticle) );
      instance.SetNew(&new_PParticle);
      instance.SetNewArray(&newArray_PParticle);
      instance.SetDelete(&delete_PParticle);
      instance.SetDeleteArray(&deleteArray_PParticle);
      instance.SetDestructor(&destruct_PParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PParticle*)
   {
      return GenerateInitInstanceLocal((::PParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::PParticle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_PStaticData(void *p = 0);
   static void *newArray_PStaticData(Long_t size, void *p);
   static void delete_PStaticData(void *p);
   static void deleteArray_PStaticData(void *p);
   static void destruct_PStaticData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PStaticData*)
   {
      ::PStaticData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PStaticData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("PStaticData", ::PStaticData::Class_Version(), "PStaticData.h", 33,
                  typeid(::PStaticData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PStaticData::Dictionary, isa_proxy, 4,
                  sizeof(::PStaticData) );
      instance.SetNew(&new_PStaticData);
      instance.SetNewArray(&newArray_PStaticData);
      instance.SetDelete(&delete_PStaticData);
      instance.SetDeleteArray(&deleteArray_PStaticData);
      instance.SetDestructor(&destruct_PStaticData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PStaticData*)
   {
      return GenerateInitInstanceLocal((::PStaticData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::PStaticData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_PStdData(void *p = 0);
   static void *newArray_PStdData(Long_t size, void *p);
   static void delete_PStdData(void *p);
   static void deleteArray_PStdData(void *p);
   static void destruct_PStdData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PStdData*)
   {
      ::PStdData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::PStdData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("PStdData", ::PStdData::Class_Version(), "PStdData.h", 25,
                  typeid(::PStdData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::PStdData::Dictionary, isa_proxy, 4,
                  sizeof(::PStdData) );
      instance.SetNew(&new_PStdData);
      instance.SetNewArray(&newArray_PStdData);
      instance.SetDelete(&delete_PStdData);
      instance.SetDeleteArray(&deleteArray_PStdData);
      instance.SetDestructor(&destruct_PStdData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PStdData*)
   {
      return GenerateInitInstanceLocal((::PStdData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::PStdData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
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
atomic_TClass_ptr ChnsBoxGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsBoxGenerator::Class_Name()
{
   return "ChnsBoxGenerator";
}

//______________________________________________________________________________
const char *ChnsBoxGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsBoxGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsBoxGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsBoxGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsBoxGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsBoxGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsBoxGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsBoxGenerator*)0x0)->GetClass(); }
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
atomic_TClass_ptr ChnsPlutoGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsPlutoGenerator::Class_Name()
{
   return "ChnsPlutoGenerator";
}

//______________________________________________________________________________
const char *ChnsPlutoGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsPlutoGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsPlutoGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsPlutoGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsPlutoGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsPlutoGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsPlutoGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsPlutoGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsJamGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsJamGenerator::Class_Name()
{
   return "ChnsJamGenerator";
}

//______________________________________________________________________________
const char *ChnsJamGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsJamGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsJamGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsJamGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsJamGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsJamGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsJamGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsJamGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr PDataBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PDataBase::Class_Name()
{
   return "PDataBase";
}

//______________________________________________________________________________
const char *PDataBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PDataBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PDataBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PDataBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PDataBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PDataBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PDataBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PDataBase*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr PMesh::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PMesh::Class_Name()
{
   return "PMesh";
}

//______________________________________________________________________________
const char *PMesh::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PMesh*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PMesh::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PMesh*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PMesh::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PMesh*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PMesh::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PMesh*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr PValues::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PValues::Class_Name()
{
   return "PValues";
}

//______________________________________________________________________________
const char *PValues::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PValues*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PValues::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PValues*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PValues::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PValues*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PValues::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PValues*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr PParticle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PParticle::Class_Name()
{
   return "PParticle";
}

//______________________________________________________________________________
const char *PParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PParticle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PParticle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PParticle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PParticle*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr PStaticData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PStaticData::Class_Name()
{
   return "PStaticData";
}

//______________________________________________________________________________
const char *PStaticData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PStaticData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PStaticData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PStaticData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PStaticData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PStaticData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PStaticData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PStaticData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr PStdData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PStdData::Class_Name()
{
   return "PStdData";
}

//______________________________________________________________________________
const char *PStdData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PStdData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PStdData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::PStdData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PStdData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PStdData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PStdData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::PStdData*)0x0)->GetClass(); }
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
void ChnsBoxGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsBoxGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsBoxGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsBoxGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsBoxGenerator(void *p) {
      return  p ? new(p) ::ChnsBoxGenerator : new ::ChnsBoxGenerator;
   }
   static void *newArray_ChnsBoxGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsBoxGenerator[nElements] : new ::ChnsBoxGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsBoxGenerator(void *p) {
      delete ((::ChnsBoxGenerator*)p);
   }
   static void deleteArray_ChnsBoxGenerator(void *p) {
      delete [] ((::ChnsBoxGenerator*)p);
   }
   static void destruct_ChnsBoxGenerator(void *p) {
      typedef ::ChnsBoxGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsBoxGenerator

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

//______________________________________________________________________________
void ChnsPlutoGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsPlutoGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsPlutoGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsPlutoGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsPlutoGenerator(void *p) {
      return  p ? new(p) ::ChnsPlutoGenerator : new ::ChnsPlutoGenerator;
   }
   static void *newArray_ChnsPlutoGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsPlutoGenerator[nElements] : new ::ChnsPlutoGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsPlutoGenerator(void *p) {
      delete ((::ChnsPlutoGenerator*)p);
   }
   static void deleteArray_ChnsPlutoGenerator(void *p) {
      delete [] ((::ChnsPlutoGenerator*)p);
   }
   static void destruct_ChnsPlutoGenerator(void *p) {
      typedef ::ChnsPlutoGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsPlutoGenerator

//______________________________________________________________________________
void ChnsJamGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsJamGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsJamGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsJamGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsJamGenerator(void *p) {
      return  p ? new(p) ::ChnsJamGenerator : new ::ChnsJamGenerator;
   }
   static void *newArray_ChnsJamGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsJamGenerator[nElements] : new ::ChnsJamGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsJamGenerator(void *p) {
      delete ((::ChnsJamGenerator*)p);
   }
   static void deleteArray_ChnsJamGenerator(void *p) {
      delete [] ((::ChnsJamGenerator*)p);
   }
   static void destruct_ChnsJamGenerator(void *p) {
      typedef ::ChnsJamGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsJamGenerator

//______________________________________________________________________________
void PDataBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class PDataBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PDataBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(PDataBase::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PDataBase(void *p) {
      return  p ? new(p) ::PDataBase : new ::PDataBase;
   }
   static void *newArray_PDataBase(Long_t nElements, void *p) {
      return p ? new(p) ::PDataBase[nElements] : new ::PDataBase[nElements];
   }
   // Wrapper around operator delete
   static void delete_PDataBase(void *p) {
      delete ((::PDataBase*)p);
   }
   static void deleteArray_PDataBase(void *p) {
      delete [] ((::PDataBase*)p);
   }
   static void destruct_PDataBase(void *p) {
      typedef ::PDataBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PDataBase

//______________________________________________________________________________
void PMesh::Streamer(TBuffer &R__b)
{
   // Stream an object of class PMesh.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PMesh::Class(),this);
   } else {
      R__b.WriteClassBuffer(PMesh::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_PMesh(void *p) {
      delete ((::PMesh*)p);
   }
   static void deleteArray_PMesh(void *p) {
      delete [] ((::PMesh*)p);
   }
   static void destruct_PMesh(void *p) {
      typedef ::PMesh current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PMesh

//______________________________________________________________________________
void PValues::Streamer(TBuffer &R__b)
{
   // Stream an object of class PValues.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PValues::Class(),this);
   } else {
      R__b.WriteClassBuffer(PValues::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PValues(void *p) {
      return  p ? new(p) ::PValues : new ::PValues;
   }
   static void *newArray_PValues(Long_t nElements, void *p) {
      return p ? new(p) ::PValues[nElements] : new ::PValues[nElements];
   }
   // Wrapper around operator delete
   static void delete_PValues(void *p) {
      delete ((::PValues*)p);
   }
   static void deleteArray_PValues(void *p) {
      delete [] ((::PValues*)p);
   }
   static void destruct_PValues(void *p) {
      typedef ::PValues current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PValues

//______________________________________________________________________________
void PParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class PParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(PParticle::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PParticle(void *p) {
      return  p ? new(p) ::PParticle : new ::PParticle;
   }
   static void *newArray_PParticle(Long_t nElements, void *p) {
      return p ? new(p) ::PParticle[nElements] : new ::PParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_PParticle(void *p) {
      delete ((::PParticle*)p);
   }
   static void deleteArray_PParticle(void *p) {
      delete [] ((::PParticle*)p);
   }
   static void destruct_PParticle(void *p) {
      typedef ::PParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PParticle

//______________________________________________________________________________
void PStaticData::Streamer(TBuffer &R__b)
{
   // Stream an object of class PStaticData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PStaticData::Class(),this);
   } else {
      R__b.WriteClassBuffer(PStaticData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PStaticData(void *p) {
      return  p ? new(p) ::PStaticData : new ::PStaticData;
   }
   static void *newArray_PStaticData(Long_t nElements, void *p) {
      return p ? new(p) ::PStaticData[nElements] : new ::PStaticData[nElements];
   }
   // Wrapper around operator delete
   static void delete_PStaticData(void *p) {
      delete ((::PStaticData*)p);
   }
   static void deleteArray_PStaticData(void *p) {
      delete [] ((::PStaticData*)p);
   }
   static void destruct_PStaticData(void *p) {
      typedef ::PStaticData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PStaticData

//______________________________________________________________________________
void PStdData::Streamer(TBuffer &R__b)
{
   // Stream an object of class PStdData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(PStdData::Class(),this);
   } else {
      R__b.WriteClassBuffer(PStdData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_PStdData(void *p) {
      return  p ? new(p) ::PStdData : new ::PStdData;
   }
   static void *newArray_PStdData(Long_t nElements, void *p) {
      return p ? new(p) ::PStdData[nElements] : new ::PStdData[nElements];
   }
   // Wrapper around operator delete
   static void delete_PStdData(void *p) {
      delete ((::PStdData*)p);
   }
   static void deleteArray_PStdData(void *p) {
      delete [] ((::PStdData*)p);
   }
   static void destruct_PStdData(void *p) {
      typedef ::PStdData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PStdData

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
  void TriggerDictionaryInitialization_G__ChnsGenDict_Impl() {
    static const char* headers[] = {
"Pythia6Generator.h",
"ChnsBoxGenerator.h",
"ChnsEvtGenGenerator.h",
"ChnsPlutoGenerator.h",
"ChnsJamGenerator.h",
"PDataBase.h",
"PMesh.h",
"PParticle.h",
"PStaticData.h",
"PStdData.h",
"PValues.h",
0
    };
    static const char* includePaths[] = {
"/home/eicc/software/FairSoft/install/include",
"/home/eicc/software/FairSoft/install/include",
"/home/eicc/FairRoot/build_18.4.2/include",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsGenerators",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/generators",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsData",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/gconfig",
"/home/eicc/software/FairSoft/install/include/root",
"/home/eicc/software/FairSoft/install/include",
"/home/eicc/software/FairSoft/install/include/root",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/ChnsGenerators/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__ChnsGenDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$Pythia6Generator.h")))  Pythia6Generator;
class __attribute__((annotate("$clingAutoload$ChnsBoxGenerator.h")))  ChnsBoxGenerator;
class __attribute__((annotate("$clingAutoload$ChnsEvtGenGenerator.h")))  ChnsEvtGenGenerator;
class __attribute__((annotate("$clingAutoload$ChnsPlutoGenerator.h")))  ChnsPlutoGenerator;
class __attribute__((annotate("$clingAutoload$ChnsJamGenerator.h")))  ChnsJamGenerator;
class __attribute__((annotate(R"ATTRDUMP(Relational data base for pluto)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Relational data base for pluto)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Relational data base for pluto)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Relational data base for pluto)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$PDataBase.h")))  PDataBase;
class __attribute__((annotate(R"ATTRDUMP(The linear mesh array)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$PMesh.h")))  PMesh;
class __attribute__((annotate(R"ATTRDUMP(User value container)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$PValues.h")))  __attribute__((annotate("$clingAutoload$PParticle.h")))  PValues;
class __attribute__((annotate(R"ATTRDUMP(Pluto Particle Class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$PParticle.h")))  PParticle;
class __attribute__((annotate(R"ATTRDUMP(Pluto Static Data Wrapper)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Pluto Static Data Wrapper)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Pluto Static Data Wrapper)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Pluto Static Data Wrapper)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$PStaticData.h")))  PStaticData;
class __attribute__((annotate(R"ATTRDUMP(Pluto Particle Std Data Class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$PStdData.h")))  PStdData;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__ChnsGenDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "Pythia6Generator.h"
#include "ChnsBoxGenerator.h"
#include "ChnsEvtGenGenerator.h"
#include "ChnsPlutoGenerator.h"
#include "ChnsJamGenerator.h"
#include "PDataBase.h"
#include "PMesh.h"
#include "PParticle.h"
#include "PStaticData.h"
#include "PStdData.h"
#include "PValues.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"ChnsBoxGenerator", payloadCode, "@",
"ChnsEvtGenGenerator", payloadCode, "@",
"ChnsJamGenerator", payloadCode, "@",
"ChnsPlutoGenerator", payloadCode, "@",
"PDataBase", payloadCode, "@",
"PMesh", payloadCode, "@",
"PParticle", payloadCode, "@",
"PStaticData", payloadCode, "@",
"PStdData", payloadCode, "@",
"PValues", payloadCode, "@",
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
