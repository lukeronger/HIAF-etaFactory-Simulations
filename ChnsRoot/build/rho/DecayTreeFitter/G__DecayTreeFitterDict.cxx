// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdata2dIrwangdIgithubsdIHIAFmIetaFactorymISimulationsdIChnsRootdIbuilddIrhodIDecayTreeFitterdIG__DecayTreeFitterDict
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
#include "ErrCode.h"
#include "ChiSquare.h"
#include "Configuration.h"
#include "Constraint.h"
#include "DecayChain.h"
#include "LineTool.h"
#include "SortTool.h"
#include "FitParams.h"
#include "Fitter.h"
#include "InteractionPoint.h"
#include "InternalParticle.h"
#include "KalmanCalculator.h"
#include "MergedConstraint.h"
#include "MissingParticle.h"
#include "ParticleBase.h"
#include "Projection.h"
#include "RecoComposite.h"
#include "RecoParticle.h"
#include "RecoPhoton.h"
#include "RecoResonance.h"
#include "RecoTrack.h"
#include "RecoTrackStateProvider.h"
#include "Resonance.h"
#include "State.h"

// Header files passed via #pragma extra_include

namespace DecayTreeFitter {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *DecayTreeFitter_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("DecayTreeFitter", 0 /*version*/, "ErrCode.h", 14,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &DecayTreeFitter_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *DecayTreeFitter_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void *new_DecayTreeFittercLcLErrCode(void *p = 0);
   static void *newArray_DecayTreeFittercLcLErrCode(Long_t size, void *p);
   static void delete_DecayTreeFittercLcLErrCode(void *p);
   static void deleteArray_DecayTreeFittercLcLErrCode(void *p);
   static void destruct_DecayTreeFittercLcLErrCode(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DecayTreeFitter::ErrCode*)
   {
      ::DecayTreeFitter::ErrCode *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DecayTreeFitter::ErrCode >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DecayTreeFitter::ErrCode", ::DecayTreeFitter::ErrCode::Class_Version(), "ErrCode.h", 17,
                  typeid(::DecayTreeFitter::ErrCode), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DecayTreeFitter::ErrCode::Dictionary, isa_proxy, 4,
                  sizeof(::DecayTreeFitter::ErrCode) );
      instance.SetNew(&new_DecayTreeFittercLcLErrCode);
      instance.SetNewArray(&newArray_DecayTreeFittercLcLErrCode);
      instance.SetDelete(&delete_DecayTreeFittercLcLErrCode);
      instance.SetDeleteArray(&deleteArray_DecayTreeFittercLcLErrCode);
      instance.SetDestructor(&destruct_DecayTreeFittercLcLErrCode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DecayTreeFitter::ErrCode*)
   {
      return GenerateInitInstanceLocal((::DecayTreeFitter::ErrCode*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DecayTreeFitter::ErrCode*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DecayTreeFittercLcLChiSquare(void *p = 0);
   static void *newArray_DecayTreeFittercLcLChiSquare(Long_t size, void *p);
   static void delete_DecayTreeFittercLcLChiSquare(void *p);
   static void deleteArray_DecayTreeFittercLcLChiSquare(void *p);
   static void destruct_DecayTreeFittercLcLChiSquare(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DecayTreeFitter::ChiSquare*)
   {
      ::DecayTreeFitter::ChiSquare *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DecayTreeFitter::ChiSquare >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DecayTreeFitter::ChiSquare", ::DecayTreeFitter::ChiSquare::Class_Version(), "ChiSquare.h", 16,
                  typeid(::DecayTreeFitter::ChiSquare), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DecayTreeFitter::ChiSquare::Dictionary, isa_proxy, 4,
                  sizeof(::DecayTreeFitter::ChiSquare) );
      instance.SetNew(&new_DecayTreeFittercLcLChiSquare);
      instance.SetNewArray(&newArray_DecayTreeFittercLcLChiSquare);
      instance.SetDelete(&delete_DecayTreeFittercLcLChiSquare);
      instance.SetDeleteArray(&deleteArray_DecayTreeFittercLcLChiSquare);
      instance.SetDestructor(&destruct_DecayTreeFittercLcLChiSquare);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DecayTreeFitter::ChiSquare*)
   {
      return GenerateInitInstanceLocal((::DecayTreeFitter::ChiSquare*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DecayTreeFitter::ChiSquare*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DecayTreeFittercLcLState(void *p = 0);
   static void *newArray_DecayTreeFittercLcLState(Long_t size, void *p);
   static void delete_DecayTreeFittercLcLState(void *p);
   static void deleteArray_DecayTreeFittercLcLState(void *p);
   static void destruct_DecayTreeFittercLcLState(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DecayTreeFitter::State*)
   {
      ::DecayTreeFitter::State *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DecayTreeFitter::State >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DecayTreeFitter::State", ::DecayTreeFitter::State::Class_Version(), "State.h", 48,
                  typeid(::DecayTreeFitter::State), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DecayTreeFitter::State::Dictionary, isa_proxy, 4,
                  sizeof(::DecayTreeFitter::State) );
      instance.SetNew(&new_DecayTreeFittercLcLState);
      instance.SetNewArray(&newArray_DecayTreeFittercLcLState);
      instance.SetDelete(&delete_DecayTreeFittercLcLState);
      instance.SetDeleteArray(&deleteArray_DecayTreeFittercLcLState);
      instance.SetDestructor(&destruct_DecayTreeFittercLcLState);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DecayTreeFitter::State*)
   {
      return GenerateInitInstanceLocal((::DecayTreeFitter::State*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DecayTreeFitter::State*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DecayTreeFittercLcLRecoTrackStateProvider(void *p = 0);
   static void *newArray_DecayTreeFittercLcLRecoTrackStateProvider(Long_t size, void *p);
   static void delete_DecayTreeFittercLcLRecoTrackStateProvider(void *p);
   static void deleteArray_DecayTreeFittercLcLRecoTrackStateProvider(void *p);
   static void destruct_DecayTreeFittercLcLRecoTrackStateProvider(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DecayTreeFitter::RecoTrackStateProvider*)
   {
      ::DecayTreeFitter::RecoTrackStateProvider *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DecayTreeFitter::RecoTrackStateProvider >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DecayTreeFitter::RecoTrackStateProvider", ::DecayTreeFitter::RecoTrackStateProvider::Class_Version(), "RecoTrackStateProvider.h", 25,
                  typeid(::DecayTreeFitter::RecoTrackStateProvider), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DecayTreeFitter::RecoTrackStateProvider::Dictionary, isa_proxy, 4,
                  sizeof(::DecayTreeFitter::RecoTrackStateProvider) );
      instance.SetNew(&new_DecayTreeFittercLcLRecoTrackStateProvider);
      instance.SetNewArray(&newArray_DecayTreeFittercLcLRecoTrackStateProvider);
      instance.SetDelete(&delete_DecayTreeFittercLcLRecoTrackStateProvider);
      instance.SetDeleteArray(&deleteArray_DecayTreeFittercLcLRecoTrackStateProvider);
      instance.SetDestructor(&destruct_DecayTreeFittercLcLRecoTrackStateProvider);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DecayTreeFitter::RecoTrackStateProvider*)
   {
      return GenerateInitInstanceLocal((::DecayTreeFitter::RecoTrackStateProvider*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoTrackStateProvider*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DecayTreeFittercLcLConfiguration(void *p = 0);
   static void *newArray_DecayTreeFittercLcLConfiguration(Long_t size, void *p);
   static void delete_DecayTreeFittercLcLConfiguration(void *p);
   static void deleteArray_DecayTreeFittercLcLConfiguration(void *p);
   static void destruct_DecayTreeFittercLcLConfiguration(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DecayTreeFitter::Configuration*)
   {
      ::DecayTreeFitter::Configuration *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DecayTreeFitter::Configuration >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DecayTreeFitter::Configuration", ::DecayTreeFitter::Configuration::Class_Version(), "Configuration.h", 17,
                  typeid(::DecayTreeFitter::Configuration), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DecayTreeFitter::Configuration::Dictionary, isa_proxy, 4,
                  sizeof(::DecayTreeFitter::Configuration) );
      instance.SetNew(&new_DecayTreeFittercLcLConfiguration);
      instance.SetNewArray(&newArray_DecayTreeFittercLcLConfiguration);
      instance.SetDelete(&delete_DecayTreeFittercLcLConfiguration);
      instance.SetDeleteArray(&deleteArray_DecayTreeFittercLcLConfiguration);
      instance.SetDestructor(&destruct_DecayTreeFittercLcLConfiguration);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DecayTreeFitter::Configuration*)
   {
      return GenerateInitInstanceLocal((::DecayTreeFitter::Configuration*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DecayTreeFitter::Configuration*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DecayTreeFittercLcLConstraint(void *p = 0);
   static void *newArray_DecayTreeFittercLcLConstraint(Long_t size, void *p);
   static void delete_DecayTreeFittercLcLConstraint(void *p);
   static void deleteArray_DecayTreeFittercLcLConstraint(void *p);
   static void destruct_DecayTreeFittercLcLConstraint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DecayTreeFitter::Constraint*)
   {
      ::DecayTreeFitter::Constraint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DecayTreeFitter::Constraint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DecayTreeFitter::Constraint", ::DecayTreeFitter::Constraint::Class_Version(), "Constraint.h", 22,
                  typeid(::DecayTreeFitter::Constraint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DecayTreeFitter::Constraint::Dictionary, isa_proxy, 4,
                  sizeof(::DecayTreeFitter::Constraint) );
      instance.SetNew(&new_DecayTreeFittercLcLConstraint);
      instance.SetNewArray(&newArray_DecayTreeFittercLcLConstraint);
      instance.SetDelete(&delete_DecayTreeFittercLcLConstraint);
      instance.SetDeleteArray(&deleteArray_DecayTreeFittercLcLConstraint);
      instance.SetDestructor(&destruct_DecayTreeFittercLcLConstraint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DecayTreeFitter::Constraint*)
   {
      return GenerateInitInstanceLocal((::DecayTreeFitter::Constraint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DecayTreeFitter::Constraint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_DecayTreeFittercLcLProjection(void *p);
   static void deleteArray_DecayTreeFittercLcLProjection(void *p);
   static void destruct_DecayTreeFittercLcLProjection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DecayTreeFitter::Projection*)
   {
      ::DecayTreeFitter::Projection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DecayTreeFitter::Projection >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DecayTreeFitter::Projection", ::DecayTreeFitter::Projection::Class_Version(), "Projection.h", 20,
                  typeid(::DecayTreeFitter::Projection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DecayTreeFitter::Projection::Dictionary, isa_proxy, 4,
                  sizeof(::DecayTreeFitter::Projection) );
      instance.SetDelete(&delete_DecayTreeFittercLcLProjection);
      instance.SetDeleteArray(&deleteArray_DecayTreeFittercLcLProjection);
      instance.SetDestructor(&destruct_DecayTreeFittercLcLProjection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DecayTreeFitter::Projection*)
   {
      return GenerateInitInstanceLocal((::DecayTreeFitter::Projection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DecayTreeFitter::Projection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_DecayTreeFittercLcLParticleBase(void *p);
   static void deleteArray_DecayTreeFittercLcLParticleBase(void *p);
   static void destruct_DecayTreeFittercLcLParticleBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DecayTreeFitter::ParticleBase*)
   {
      ::DecayTreeFitter::ParticleBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DecayTreeFitter::ParticleBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DecayTreeFitter::ParticleBase", ::DecayTreeFitter::ParticleBase::Class_Version(), "ParticleBase.h", 25,
                  typeid(::DecayTreeFitter::ParticleBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DecayTreeFitter::ParticleBase::Dictionary, isa_proxy, 4,
                  sizeof(::DecayTreeFitter::ParticleBase) );
      instance.SetDelete(&delete_DecayTreeFittercLcLParticleBase);
      instance.SetDeleteArray(&deleteArray_DecayTreeFittercLcLParticleBase);
      instance.SetDestructor(&destruct_DecayTreeFittercLcLParticleBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DecayTreeFitter::ParticleBase*)
   {
      return GenerateInitInstanceLocal((::DecayTreeFitter::ParticleBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DecayTreeFitter::ParticleBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DecayTreeFittercLcLMergedConstraint(void *p = 0);
   static void *newArray_DecayTreeFittercLcLMergedConstraint(Long_t size, void *p);
   static void delete_DecayTreeFittercLcLMergedConstraint(void *p);
   static void deleteArray_DecayTreeFittercLcLMergedConstraint(void *p);
   static void destruct_DecayTreeFittercLcLMergedConstraint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DecayTreeFitter::MergedConstraint*)
   {
      ::DecayTreeFitter::MergedConstraint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DecayTreeFitter::MergedConstraint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DecayTreeFitter::MergedConstraint", ::DecayTreeFitter::MergedConstraint::Class_Version(), "MergedConstraint.h", 17,
                  typeid(::DecayTreeFitter::MergedConstraint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DecayTreeFitter::MergedConstraint::Dictionary, isa_proxy, 4,
                  sizeof(::DecayTreeFitter::MergedConstraint) );
      instance.SetNew(&new_DecayTreeFittercLcLMergedConstraint);
      instance.SetNewArray(&newArray_DecayTreeFittercLcLMergedConstraint);
      instance.SetDelete(&delete_DecayTreeFittercLcLMergedConstraint);
      instance.SetDeleteArray(&deleteArray_DecayTreeFittercLcLMergedConstraint);
      instance.SetDestructor(&destruct_DecayTreeFittercLcLMergedConstraint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DecayTreeFitter::MergedConstraint*)
   {
      return GenerateInitInstanceLocal((::DecayTreeFitter::MergedConstraint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DecayTreeFitter::MergedConstraint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DecayTreeFittercLcLDecayChain(void *p = 0);
   static void *newArray_DecayTreeFittercLcLDecayChain(Long_t size, void *p);
   static void delete_DecayTreeFittercLcLDecayChain(void *p);
   static void deleteArray_DecayTreeFittercLcLDecayChain(void *p);
   static void destruct_DecayTreeFittercLcLDecayChain(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DecayTreeFitter::DecayChain*)
   {
      ::DecayTreeFitter::DecayChain *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DecayTreeFitter::DecayChain >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DecayTreeFitter::DecayChain", ::DecayTreeFitter::DecayChain::Class_Version(), "DecayChain.h", 26,
                  typeid(::DecayTreeFitter::DecayChain), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DecayTreeFitter::DecayChain::Dictionary, isa_proxy, 4,
                  sizeof(::DecayTreeFitter::DecayChain) );
      instance.SetNew(&new_DecayTreeFittercLcLDecayChain);
      instance.SetNewArray(&newArray_DecayTreeFittercLcLDecayChain);
      instance.SetDelete(&delete_DecayTreeFittercLcLDecayChain);
      instance.SetDeleteArray(&deleteArray_DecayTreeFittercLcLDecayChain);
      instance.SetDestructor(&destruct_DecayTreeFittercLcLDecayChain);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DecayTreeFitter::DecayChain*)
   {
      return GenerateInitInstanceLocal((::DecayTreeFitter::DecayChain*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DecayTreeFitter::DecayChain*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DecayTreeFittercLcLLine(void *p = 0);
   static void *newArray_DecayTreeFittercLcLLine(Long_t size, void *p);
   static void delete_DecayTreeFittercLcLLine(void *p);
   static void deleteArray_DecayTreeFittercLcLLine(void *p);
   static void destruct_DecayTreeFittercLcLLine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DecayTreeFitter::Line*)
   {
      ::DecayTreeFitter::Line *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DecayTreeFitter::Line >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DecayTreeFitter::Line", ::DecayTreeFitter::Line::Class_Version(), "LineTool.h", 27,
                  typeid(::DecayTreeFitter::Line), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DecayTreeFitter::Line::Dictionary, isa_proxy, 4,
                  sizeof(::DecayTreeFitter::Line) );
      instance.SetNew(&new_DecayTreeFittercLcLLine);
      instance.SetNewArray(&newArray_DecayTreeFittercLcLLine);
      instance.SetDelete(&delete_DecayTreeFittercLcLLine);
      instance.SetDeleteArray(&deleteArray_DecayTreeFittercLcLLine);
      instance.SetDestructor(&destruct_DecayTreeFittercLcLLine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DecayTreeFitter::Line*)
   {
      return GenerateInitInstanceLocal((::DecayTreeFitter::Line*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DecayTreeFitter::Line*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_DecayTreeFittercLcLRecoParticle(void *p);
   static void deleteArray_DecayTreeFittercLcLRecoParticle(void *p);
   static void destruct_DecayTreeFittercLcLRecoParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DecayTreeFitter::RecoParticle*)
   {
      ::DecayTreeFitter::RecoParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DecayTreeFitter::RecoParticle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DecayTreeFitter::RecoParticle", ::DecayTreeFitter::RecoParticle::Class_Version(), "RecoParticle.h", 17,
                  typeid(::DecayTreeFitter::RecoParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DecayTreeFitter::RecoParticle::Dictionary, isa_proxy, 4,
                  sizeof(::DecayTreeFitter::RecoParticle) );
      instance.SetDelete(&delete_DecayTreeFittercLcLRecoParticle);
      instance.SetDeleteArray(&deleteArray_DecayTreeFittercLcLRecoParticle);
      instance.SetDestructor(&destruct_DecayTreeFittercLcLRecoParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DecayTreeFitter::RecoParticle*)
   {
      return GenerateInitInstanceLocal((::DecayTreeFitter::RecoParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoParticle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_DecayTreeFittercLcLRecoTrack(void *p);
   static void deleteArray_DecayTreeFittercLcLRecoTrack(void *p);
   static void destruct_DecayTreeFittercLcLRecoTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DecayTreeFitter::RecoTrack*)
   {
      ::DecayTreeFitter::RecoTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DecayTreeFitter::RecoTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DecayTreeFitter::RecoTrack", ::DecayTreeFitter::RecoTrack::Class_Version(), "RecoTrack.h", 30,
                  typeid(::DecayTreeFitter::RecoTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DecayTreeFitter::RecoTrack::Dictionary, isa_proxy, 4,
                  sizeof(::DecayTreeFitter::RecoTrack) );
      instance.SetDelete(&delete_DecayTreeFittercLcLRecoTrack);
      instance.SetDeleteArray(&deleteArray_DecayTreeFittercLcLRecoTrack);
      instance.SetDestructor(&destruct_DecayTreeFittercLcLRecoTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DecayTreeFitter::RecoTrack*)
   {
      return GenerateInitInstanceLocal((::DecayTreeFitter::RecoTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_DecayTreeFittercLcLFitParams(void *p);
   static void deleteArray_DecayTreeFittercLcLFitParams(void *p);
   static void destruct_DecayTreeFittercLcLFitParams(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DecayTreeFitter::FitParams*)
   {
      ::DecayTreeFitter::FitParams *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DecayTreeFitter::FitParams >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DecayTreeFitter::FitParams", ::DecayTreeFitter::FitParams::Class_Version(), "FitParams.h", 24,
                  typeid(::DecayTreeFitter::FitParams), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DecayTreeFitter::FitParams::Dictionary, isa_proxy, 4,
                  sizeof(::DecayTreeFitter::FitParams) );
      instance.SetDelete(&delete_DecayTreeFittercLcLFitParams);
      instance.SetDeleteArray(&deleteArray_DecayTreeFittercLcLFitParams);
      instance.SetDestructor(&destruct_DecayTreeFittercLcLFitParams);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DecayTreeFitter::FitParams*)
   {
      return GenerateInitInstanceLocal((::DecayTreeFitter::FitParams*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DecayTreeFitter::FitParams*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_DecayTreeFittercLcLFitter(void *p);
   static void deleteArray_DecayTreeFittercLcLFitter(void *p);
   static void destruct_DecayTreeFittercLcLFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DecayTreeFitter::Fitter*)
   {
      ::DecayTreeFitter::Fitter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DecayTreeFitter::Fitter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DecayTreeFitter::Fitter", ::DecayTreeFitter::Fitter::Class_Version(), "Fitter.h", 55,
                  typeid(::DecayTreeFitter::Fitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DecayTreeFitter::Fitter::Dictionary, isa_proxy, 4,
                  sizeof(::DecayTreeFitter::Fitter) );
      instance.SetDelete(&delete_DecayTreeFittercLcLFitter);
      instance.SetDeleteArray(&deleteArray_DecayTreeFittercLcLFitter);
      instance.SetDestructor(&destruct_DecayTreeFittercLcLFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DecayTreeFitter::Fitter*)
   {
      return GenerateInitInstanceLocal((::DecayTreeFitter::Fitter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DecayTreeFitter::Fitter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_DecayTreeFittercLcLInternalParticle(void *p);
   static void deleteArray_DecayTreeFittercLcLInternalParticle(void *p);
   static void destruct_DecayTreeFittercLcLInternalParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DecayTreeFitter::InternalParticle*)
   {
      ::DecayTreeFitter::InternalParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DecayTreeFitter::InternalParticle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DecayTreeFitter::InternalParticle", ::DecayTreeFitter::InternalParticle::Class_Version(), "InternalParticle.h", 18,
                  typeid(::DecayTreeFitter::InternalParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DecayTreeFitter::InternalParticle::Dictionary, isa_proxy, 4,
                  sizeof(::DecayTreeFitter::InternalParticle) );
      instance.SetDelete(&delete_DecayTreeFittercLcLInternalParticle);
      instance.SetDeleteArray(&deleteArray_DecayTreeFittercLcLInternalParticle);
      instance.SetDestructor(&destruct_DecayTreeFittercLcLInternalParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DecayTreeFitter::InternalParticle*)
   {
      return GenerateInitInstanceLocal((::DecayTreeFitter::InternalParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DecayTreeFitter::InternalParticle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_DecayTreeFittercLcLInteractionPoint(void *p);
   static void deleteArray_DecayTreeFittercLcLInteractionPoint(void *p);
   static void destruct_DecayTreeFittercLcLInteractionPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DecayTreeFitter::InteractionPoint*)
   {
      ::DecayTreeFitter::InteractionPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DecayTreeFitter::InteractionPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DecayTreeFitter::InteractionPoint", ::DecayTreeFitter::InteractionPoint::Class_Version(), "InteractionPoint.h", 27,
                  typeid(::DecayTreeFitter::InteractionPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DecayTreeFitter::InteractionPoint::Dictionary, isa_proxy, 4,
                  sizeof(::DecayTreeFitter::InteractionPoint) );
      instance.SetDelete(&delete_DecayTreeFittercLcLInteractionPoint);
      instance.SetDeleteArray(&deleteArray_DecayTreeFittercLcLInteractionPoint);
      instance.SetDestructor(&destruct_DecayTreeFittercLcLInteractionPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DecayTreeFitter::InteractionPoint*)
   {
      return GenerateInitInstanceLocal((::DecayTreeFitter::InteractionPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DecayTreeFitter::InteractionPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DecayTreeFittercLcLKalmanCalculator(void *p = 0);
   static void *newArray_DecayTreeFittercLcLKalmanCalculator(Long_t size, void *p);
   static void delete_DecayTreeFittercLcLKalmanCalculator(void *p);
   static void deleteArray_DecayTreeFittercLcLKalmanCalculator(void *p);
   static void destruct_DecayTreeFittercLcLKalmanCalculator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DecayTreeFitter::KalmanCalculator*)
   {
      ::DecayTreeFitter::KalmanCalculator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DecayTreeFitter::KalmanCalculator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DecayTreeFitter::KalmanCalculator", ::DecayTreeFitter::KalmanCalculator::Class_Version(), "KalmanCalculator.h", 21,
                  typeid(::DecayTreeFitter::KalmanCalculator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DecayTreeFitter::KalmanCalculator::Dictionary, isa_proxy, 4,
                  sizeof(::DecayTreeFitter::KalmanCalculator) );
      instance.SetNew(&new_DecayTreeFittercLcLKalmanCalculator);
      instance.SetNewArray(&newArray_DecayTreeFittercLcLKalmanCalculator);
      instance.SetDelete(&delete_DecayTreeFittercLcLKalmanCalculator);
      instance.SetDeleteArray(&deleteArray_DecayTreeFittercLcLKalmanCalculator);
      instance.SetDestructor(&destruct_DecayTreeFittercLcLKalmanCalculator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DecayTreeFitter::KalmanCalculator*)
   {
      return GenerateInitInstanceLocal((::DecayTreeFitter::KalmanCalculator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DecayTreeFitter::KalmanCalculator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_DecayTreeFittercLcLMissingParticle(void *p);
   static void deleteArray_DecayTreeFittercLcLMissingParticle(void *p);
   static void destruct_DecayTreeFittercLcLMissingParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DecayTreeFitter::MissingParticle*)
   {
      ::DecayTreeFitter::MissingParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DecayTreeFitter::MissingParticle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DecayTreeFitter::MissingParticle", ::DecayTreeFitter::MissingParticle::Class_Version(), "MissingParticle.h", 17,
                  typeid(::DecayTreeFitter::MissingParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DecayTreeFitter::MissingParticle::Dictionary, isa_proxy, 4,
                  sizeof(::DecayTreeFitter::MissingParticle) );
      instance.SetDelete(&delete_DecayTreeFittercLcLMissingParticle);
      instance.SetDeleteArray(&deleteArray_DecayTreeFittercLcLMissingParticle);
      instance.SetDestructor(&destruct_DecayTreeFittercLcLMissingParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DecayTreeFitter::MissingParticle*)
   {
      return GenerateInitInstanceLocal((::DecayTreeFitter::MissingParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DecayTreeFitter::MissingParticle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_DecayTreeFittercLcLRecoComposite(void *p);
   static void deleteArray_DecayTreeFittercLcLRecoComposite(void *p);
   static void destruct_DecayTreeFittercLcLRecoComposite(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DecayTreeFitter::RecoComposite*)
   {
      ::DecayTreeFitter::RecoComposite *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DecayTreeFitter::RecoComposite >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DecayTreeFitter::RecoComposite", ::DecayTreeFitter::RecoComposite::Class_Version(), "RecoComposite.h", 19,
                  typeid(::DecayTreeFitter::RecoComposite), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DecayTreeFitter::RecoComposite::Dictionary, isa_proxy, 4,
                  sizeof(::DecayTreeFitter::RecoComposite) );
      instance.SetDelete(&delete_DecayTreeFittercLcLRecoComposite);
      instance.SetDeleteArray(&deleteArray_DecayTreeFittercLcLRecoComposite);
      instance.SetDestructor(&destruct_DecayTreeFittercLcLRecoComposite);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DecayTreeFitter::RecoComposite*)
   {
      return GenerateInitInstanceLocal((::DecayTreeFitter::RecoComposite*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoComposite*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_DecayTreeFittercLcLRecoPhoton(void *p);
   static void deleteArray_DecayTreeFittercLcLRecoPhoton(void *p);
   static void destruct_DecayTreeFittercLcLRecoPhoton(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DecayTreeFitter::RecoPhoton*)
   {
      ::DecayTreeFitter::RecoPhoton *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DecayTreeFitter::RecoPhoton >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DecayTreeFitter::RecoPhoton", ::DecayTreeFitter::RecoPhoton::Class_Version(), "RecoPhoton.h", 18,
                  typeid(::DecayTreeFitter::RecoPhoton), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DecayTreeFitter::RecoPhoton::Dictionary, isa_proxy, 4,
                  sizeof(::DecayTreeFitter::RecoPhoton) );
      instance.SetDelete(&delete_DecayTreeFittercLcLRecoPhoton);
      instance.SetDeleteArray(&deleteArray_DecayTreeFittercLcLRecoPhoton);
      instance.SetDestructor(&destruct_DecayTreeFittercLcLRecoPhoton);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DecayTreeFitter::RecoPhoton*)
   {
      return GenerateInitInstanceLocal((::DecayTreeFitter::RecoPhoton*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoPhoton*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_DecayTreeFittercLcLRecoResonance(void *p);
   static void deleteArray_DecayTreeFittercLcLRecoResonance(void *p);
   static void destruct_DecayTreeFittercLcLRecoResonance(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DecayTreeFitter::RecoResonance*)
   {
      ::DecayTreeFitter::RecoResonance *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DecayTreeFitter::RecoResonance >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DecayTreeFitter::RecoResonance", ::DecayTreeFitter::RecoResonance::Class_Version(), "RecoResonance.h", 17,
                  typeid(::DecayTreeFitter::RecoResonance), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DecayTreeFitter::RecoResonance::Dictionary, isa_proxy, 4,
                  sizeof(::DecayTreeFitter::RecoResonance) );
      instance.SetDelete(&delete_DecayTreeFittercLcLRecoResonance);
      instance.SetDeleteArray(&deleteArray_DecayTreeFittercLcLRecoResonance);
      instance.SetDestructor(&destruct_DecayTreeFittercLcLRecoResonance);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DecayTreeFitter::RecoResonance*)
   {
      return GenerateInitInstanceLocal((::DecayTreeFitter::RecoResonance*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoResonance*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_DecayTreeFittercLcLResonance(void *p);
   static void deleteArray_DecayTreeFittercLcLResonance(void *p);
   static void destruct_DecayTreeFittercLcLResonance(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DecayTreeFitter::Resonance*)
   {
      ::DecayTreeFitter::Resonance *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DecayTreeFitter::Resonance >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DecayTreeFitter::Resonance", ::DecayTreeFitter::Resonance::Class_Version(), "Resonance.h", 18,
                  typeid(::DecayTreeFitter::Resonance), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DecayTreeFitter::Resonance::Dictionary, isa_proxy, 4,
                  sizeof(::DecayTreeFitter::Resonance) );
      instance.SetDelete(&delete_DecayTreeFittercLcLResonance);
      instance.SetDeleteArray(&deleteArray_DecayTreeFittercLcLResonance);
      instance.SetDestructor(&destruct_DecayTreeFittercLcLResonance);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DecayTreeFitter::Resonance*)
   {
      return GenerateInitInstanceLocal((::DecayTreeFitter::Resonance*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DecayTreeFitter::Resonance*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace DecayTreeFitter {
//______________________________________________________________________________
atomic_TClass_ptr ErrCode::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ErrCode::Class_Name()
{
   return "DecayTreeFitter::ErrCode";
}

//______________________________________________________________________________
const char *ErrCode::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::ErrCode*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ErrCode::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::ErrCode*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ErrCode::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::ErrCode*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ErrCode::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::ErrCode*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace DecayTreeFitter
namespace DecayTreeFitter {
//______________________________________________________________________________
atomic_TClass_ptr ChiSquare::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChiSquare::Class_Name()
{
   return "DecayTreeFitter::ChiSquare";
}

//______________________________________________________________________________
const char *ChiSquare::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::ChiSquare*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChiSquare::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::ChiSquare*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChiSquare::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::ChiSquare*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChiSquare::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::ChiSquare*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace DecayTreeFitter
namespace DecayTreeFitter {
//______________________________________________________________________________
atomic_TClass_ptr State::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *State::Class_Name()
{
   return "DecayTreeFitter::State";
}

//______________________________________________________________________________
const char *State::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::State*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int State::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::State*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *State::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::State*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *State::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::State*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace DecayTreeFitter
namespace DecayTreeFitter {
//______________________________________________________________________________
atomic_TClass_ptr RecoTrackStateProvider::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RecoTrackStateProvider::Class_Name()
{
   return "DecayTreeFitter::RecoTrackStateProvider";
}

//______________________________________________________________________________
const char *RecoTrackStateProvider::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoTrackStateProvider*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RecoTrackStateProvider::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoTrackStateProvider*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RecoTrackStateProvider::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoTrackStateProvider*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RecoTrackStateProvider::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoTrackStateProvider*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace DecayTreeFitter
namespace DecayTreeFitter {
//______________________________________________________________________________
atomic_TClass_ptr Configuration::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Configuration::Class_Name()
{
   return "DecayTreeFitter::Configuration";
}

//______________________________________________________________________________
const char *Configuration::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::Configuration*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Configuration::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::Configuration*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Configuration::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::Configuration*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Configuration::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::Configuration*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace DecayTreeFitter
namespace DecayTreeFitter {
//______________________________________________________________________________
atomic_TClass_ptr Constraint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Constraint::Class_Name()
{
   return "DecayTreeFitter::Constraint";
}

//______________________________________________________________________________
const char *Constraint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::Constraint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Constraint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::Constraint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Constraint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::Constraint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Constraint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::Constraint*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace DecayTreeFitter
namespace DecayTreeFitter {
//______________________________________________________________________________
atomic_TClass_ptr Projection::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Projection::Class_Name()
{
   return "DecayTreeFitter::Projection";
}

//______________________________________________________________________________
const char *Projection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::Projection*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Projection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::Projection*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Projection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::Projection*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Projection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::Projection*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace DecayTreeFitter
namespace DecayTreeFitter {
//______________________________________________________________________________
atomic_TClass_ptr ParticleBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ParticleBase::Class_Name()
{
   return "DecayTreeFitter::ParticleBase";
}

//______________________________________________________________________________
const char *ParticleBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::ParticleBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ParticleBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::ParticleBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ParticleBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::ParticleBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ParticleBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::ParticleBase*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace DecayTreeFitter
namespace DecayTreeFitter {
//______________________________________________________________________________
atomic_TClass_ptr MergedConstraint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MergedConstraint::Class_Name()
{
   return "DecayTreeFitter::MergedConstraint";
}

//______________________________________________________________________________
const char *MergedConstraint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::MergedConstraint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MergedConstraint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::MergedConstraint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MergedConstraint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::MergedConstraint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MergedConstraint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::MergedConstraint*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace DecayTreeFitter
namespace DecayTreeFitter {
//______________________________________________________________________________
atomic_TClass_ptr DecayChain::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DecayChain::Class_Name()
{
   return "DecayTreeFitter::DecayChain";
}

//______________________________________________________________________________
const char *DecayChain::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::DecayChain*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DecayChain::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::DecayChain*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DecayChain::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::DecayChain*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DecayChain::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::DecayChain*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace DecayTreeFitter
namespace DecayTreeFitter {
//______________________________________________________________________________
atomic_TClass_ptr Line::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Line::Class_Name()
{
   return "DecayTreeFitter::Line";
}

//______________________________________________________________________________
const char *Line::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::Line*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Line::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::Line*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Line::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::Line*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Line::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::Line*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace DecayTreeFitter
namespace DecayTreeFitter {
//______________________________________________________________________________
atomic_TClass_ptr RecoParticle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RecoParticle::Class_Name()
{
   return "DecayTreeFitter::RecoParticle";
}

//______________________________________________________________________________
const char *RecoParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoParticle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RecoParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoParticle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RecoParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoParticle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RecoParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoParticle*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace DecayTreeFitter
namespace DecayTreeFitter {
//______________________________________________________________________________
atomic_TClass_ptr RecoTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RecoTrack::Class_Name()
{
   return "DecayTreeFitter::RecoTrack";
}

//______________________________________________________________________________
const char *RecoTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RecoTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RecoTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RecoTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoTrack*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace DecayTreeFitter
namespace DecayTreeFitter {
//______________________________________________________________________________
atomic_TClass_ptr FitParams::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *FitParams::Class_Name()
{
   return "DecayTreeFitter::FitParams";
}

//______________________________________________________________________________
const char *FitParams::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::FitParams*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int FitParams::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::FitParams*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FitParams::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::FitParams*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FitParams::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::FitParams*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace DecayTreeFitter
namespace DecayTreeFitter {
//______________________________________________________________________________
atomic_TClass_ptr Fitter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Fitter::Class_Name()
{
   return "DecayTreeFitter::Fitter";
}

//______________________________________________________________________________
const char *Fitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::Fitter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Fitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::Fitter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Fitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::Fitter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Fitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::Fitter*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace DecayTreeFitter
namespace DecayTreeFitter {
//______________________________________________________________________________
atomic_TClass_ptr InternalParticle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *InternalParticle::Class_Name()
{
   return "DecayTreeFitter::InternalParticle";
}

//______________________________________________________________________________
const char *InternalParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::InternalParticle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int InternalParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::InternalParticle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *InternalParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::InternalParticle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *InternalParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::InternalParticle*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace DecayTreeFitter
namespace DecayTreeFitter {
//______________________________________________________________________________
atomic_TClass_ptr InteractionPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *InteractionPoint::Class_Name()
{
   return "DecayTreeFitter::InteractionPoint";
}

//______________________________________________________________________________
const char *InteractionPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::InteractionPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int InteractionPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::InteractionPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *InteractionPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::InteractionPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *InteractionPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::InteractionPoint*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace DecayTreeFitter
namespace DecayTreeFitter {
//______________________________________________________________________________
atomic_TClass_ptr KalmanCalculator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *KalmanCalculator::Class_Name()
{
   return "DecayTreeFitter::KalmanCalculator";
}

//______________________________________________________________________________
const char *KalmanCalculator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::KalmanCalculator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int KalmanCalculator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::KalmanCalculator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *KalmanCalculator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::KalmanCalculator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *KalmanCalculator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::KalmanCalculator*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace DecayTreeFitter
namespace DecayTreeFitter {
//______________________________________________________________________________
atomic_TClass_ptr MissingParticle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MissingParticle::Class_Name()
{
   return "DecayTreeFitter::MissingParticle";
}

//______________________________________________________________________________
const char *MissingParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::MissingParticle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MissingParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::MissingParticle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MissingParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::MissingParticle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MissingParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::MissingParticle*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace DecayTreeFitter
namespace DecayTreeFitter {
//______________________________________________________________________________
atomic_TClass_ptr RecoComposite::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RecoComposite::Class_Name()
{
   return "DecayTreeFitter::RecoComposite";
}

//______________________________________________________________________________
const char *RecoComposite::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoComposite*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RecoComposite::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoComposite*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RecoComposite::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoComposite*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RecoComposite::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoComposite*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace DecayTreeFitter
namespace DecayTreeFitter {
//______________________________________________________________________________
atomic_TClass_ptr RecoPhoton::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RecoPhoton::Class_Name()
{
   return "DecayTreeFitter::RecoPhoton";
}

//______________________________________________________________________________
const char *RecoPhoton::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoPhoton*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RecoPhoton::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoPhoton*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RecoPhoton::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoPhoton*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RecoPhoton::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoPhoton*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace DecayTreeFitter
namespace DecayTreeFitter {
//______________________________________________________________________________
atomic_TClass_ptr RecoResonance::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RecoResonance::Class_Name()
{
   return "DecayTreeFitter::RecoResonance";
}

//______________________________________________________________________________
const char *RecoResonance::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoResonance*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RecoResonance::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoResonance*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RecoResonance::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoResonance*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RecoResonance::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::RecoResonance*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace DecayTreeFitter
namespace DecayTreeFitter {
//______________________________________________________________________________
atomic_TClass_ptr Resonance::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Resonance::Class_Name()
{
   return "DecayTreeFitter::Resonance";
}

//______________________________________________________________________________
const char *Resonance::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::Resonance*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Resonance::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::Resonance*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Resonance::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::Resonance*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Resonance::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DecayTreeFitter::Resonance*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace DecayTreeFitter
namespace DecayTreeFitter {
//______________________________________________________________________________
void ErrCode::Streamer(TBuffer &R__b)
{
   // Stream an object of class DecayTreeFitter::ErrCode.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DecayTreeFitter::ErrCode::Class(),this);
   } else {
      R__b.WriteClassBuffer(DecayTreeFitter::ErrCode::Class(),this);
   }
}

} // namespace DecayTreeFitter
namespace ROOT {
   // Wrappers around operator new
   static void *new_DecayTreeFittercLcLErrCode(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DecayTreeFitter::ErrCode : new ::DecayTreeFitter::ErrCode;
   }
   static void *newArray_DecayTreeFittercLcLErrCode(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DecayTreeFitter::ErrCode[nElements] : new ::DecayTreeFitter::ErrCode[nElements];
   }
   // Wrapper around operator delete
   static void delete_DecayTreeFittercLcLErrCode(void *p) {
      delete ((::DecayTreeFitter::ErrCode*)p);
   }
   static void deleteArray_DecayTreeFittercLcLErrCode(void *p) {
      delete [] ((::DecayTreeFitter::ErrCode*)p);
   }
   static void destruct_DecayTreeFittercLcLErrCode(void *p) {
      typedef ::DecayTreeFitter::ErrCode current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DecayTreeFitter::ErrCode

namespace DecayTreeFitter {
//______________________________________________________________________________
void ChiSquare::Streamer(TBuffer &R__b)
{
   // Stream an object of class DecayTreeFitter::ChiSquare.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DecayTreeFitter::ChiSquare::Class(),this);
   } else {
      R__b.WriteClassBuffer(DecayTreeFitter::ChiSquare::Class(),this);
   }
}

} // namespace DecayTreeFitter
namespace ROOT {
   // Wrappers around operator new
   static void *new_DecayTreeFittercLcLChiSquare(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DecayTreeFitter::ChiSquare : new ::DecayTreeFitter::ChiSquare;
   }
   static void *newArray_DecayTreeFittercLcLChiSquare(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DecayTreeFitter::ChiSquare[nElements] : new ::DecayTreeFitter::ChiSquare[nElements];
   }
   // Wrapper around operator delete
   static void delete_DecayTreeFittercLcLChiSquare(void *p) {
      delete ((::DecayTreeFitter::ChiSquare*)p);
   }
   static void deleteArray_DecayTreeFittercLcLChiSquare(void *p) {
      delete [] ((::DecayTreeFitter::ChiSquare*)p);
   }
   static void destruct_DecayTreeFittercLcLChiSquare(void *p) {
      typedef ::DecayTreeFitter::ChiSquare current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DecayTreeFitter::ChiSquare

namespace DecayTreeFitter {
//______________________________________________________________________________
void State::Streamer(TBuffer &R__b)
{
   // Stream an object of class DecayTreeFitter::State.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DecayTreeFitter::State::Class(),this);
   } else {
      R__b.WriteClassBuffer(DecayTreeFitter::State::Class(),this);
   }
}

} // namespace DecayTreeFitter
namespace ROOT {
   // Wrappers around operator new
   static void *new_DecayTreeFittercLcLState(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DecayTreeFitter::State : new ::DecayTreeFitter::State;
   }
   static void *newArray_DecayTreeFittercLcLState(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DecayTreeFitter::State[nElements] : new ::DecayTreeFitter::State[nElements];
   }
   // Wrapper around operator delete
   static void delete_DecayTreeFittercLcLState(void *p) {
      delete ((::DecayTreeFitter::State*)p);
   }
   static void deleteArray_DecayTreeFittercLcLState(void *p) {
      delete [] ((::DecayTreeFitter::State*)p);
   }
   static void destruct_DecayTreeFittercLcLState(void *p) {
      typedef ::DecayTreeFitter::State current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DecayTreeFitter::State

namespace DecayTreeFitter {
//______________________________________________________________________________
void RecoTrackStateProvider::Streamer(TBuffer &R__b)
{
   // Stream an object of class DecayTreeFitter::RecoTrackStateProvider.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DecayTreeFitter::RecoTrackStateProvider::Class(),this);
   } else {
      R__b.WriteClassBuffer(DecayTreeFitter::RecoTrackStateProvider::Class(),this);
   }
}

} // namespace DecayTreeFitter
namespace ROOT {
   // Wrappers around operator new
   static void *new_DecayTreeFittercLcLRecoTrackStateProvider(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DecayTreeFitter::RecoTrackStateProvider : new ::DecayTreeFitter::RecoTrackStateProvider;
   }
   static void *newArray_DecayTreeFittercLcLRecoTrackStateProvider(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DecayTreeFitter::RecoTrackStateProvider[nElements] : new ::DecayTreeFitter::RecoTrackStateProvider[nElements];
   }
   // Wrapper around operator delete
   static void delete_DecayTreeFittercLcLRecoTrackStateProvider(void *p) {
      delete ((::DecayTreeFitter::RecoTrackStateProvider*)p);
   }
   static void deleteArray_DecayTreeFittercLcLRecoTrackStateProvider(void *p) {
      delete [] ((::DecayTreeFitter::RecoTrackStateProvider*)p);
   }
   static void destruct_DecayTreeFittercLcLRecoTrackStateProvider(void *p) {
      typedef ::DecayTreeFitter::RecoTrackStateProvider current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DecayTreeFitter::RecoTrackStateProvider

namespace DecayTreeFitter {
//______________________________________________________________________________
void Configuration::Streamer(TBuffer &R__b)
{
   // Stream an object of class DecayTreeFitter::Configuration.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DecayTreeFitter::Configuration::Class(),this);
   } else {
      R__b.WriteClassBuffer(DecayTreeFitter::Configuration::Class(),this);
   }
}

} // namespace DecayTreeFitter
namespace ROOT {
   // Wrappers around operator new
   static void *new_DecayTreeFittercLcLConfiguration(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DecayTreeFitter::Configuration : new ::DecayTreeFitter::Configuration;
   }
   static void *newArray_DecayTreeFittercLcLConfiguration(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DecayTreeFitter::Configuration[nElements] : new ::DecayTreeFitter::Configuration[nElements];
   }
   // Wrapper around operator delete
   static void delete_DecayTreeFittercLcLConfiguration(void *p) {
      delete ((::DecayTreeFitter::Configuration*)p);
   }
   static void deleteArray_DecayTreeFittercLcLConfiguration(void *p) {
      delete [] ((::DecayTreeFitter::Configuration*)p);
   }
   static void destruct_DecayTreeFittercLcLConfiguration(void *p) {
      typedef ::DecayTreeFitter::Configuration current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DecayTreeFitter::Configuration

namespace DecayTreeFitter {
//______________________________________________________________________________
void Constraint::Streamer(TBuffer &R__b)
{
   // Stream an object of class DecayTreeFitter::Constraint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DecayTreeFitter::Constraint::Class(),this);
   } else {
      R__b.WriteClassBuffer(DecayTreeFitter::Constraint::Class(),this);
   }
}

} // namespace DecayTreeFitter
namespace ROOT {
   // Wrappers around operator new
   static void *new_DecayTreeFittercLcLConstraint(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DecayTreeFitter::Constraint : new ::DecayTreeFitter::Constraint;
   }
   static void *newArray_DecayTreeFittercLcLConstraint(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DecayTreeFitter::Constraint[nElements] : new ::DecayTreeFitter::Constraint[nElements];
   }
   // Wrapper around operator delete
   static void delete_DecayTreeFittercLcLConstraint(void *p) {
      delete ((::DecayTreeFitter::Constraint*)p);
   }
   static void deleteArray_DecayTreeFittercLcLConstraint(void *p) {
      delete [] ((::DecayTreeFitter::Constraint*)p);
   }
   static void destruct_DecayTreeFittercLcLConstraint(void *p) {
      typedef ::DecayTreeFitter::Constraint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DecayTreeFitter::Constraint

namespace DecayTreeFitter {
//______________________________________________________________________________
void Projection::Streamer(TBuffer &R__b)
{
   // Stream an object of class DecayTreeFitter::Projection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DecayTreeFitter::Projection::Class(),this);
   } else {
      R__b.WriteClassBuffer(DecayTreeFitter::Projection::Class(),this);
   }
}

} // namespace DecayTreeFitter
namespace ROOT {
   // Wrapper around operator delete
   static void delete_DecayTreeFittercLcLProjection(void *p) {
      delete ((::DecayTreeFitter::Projection*)p);
   }
   static void deleteArray_DecayTreeFittercLcLProjection(void *p) {
      delete [] ((::DecayTreeFitter::Projection*)p);
   }
   static void destruct_DecayTreeFittercLcLProjection(void *p) {
      typedef ::DecayTreeFitter::Projection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DecayTreeFitter::Projection

namespace DecayTreeFitter {
//______________________________________________________________________________
void ParticleBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class DecayTreeFitter::ParticleBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DecayTreeFitter::ParticleBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(DecayTreeFitter::ParticleBase::Class(),this);
   }
}

} // namespace DecayTreeFitter
namespace ROOT {
   // Wrapper around operator delete
   static void delete_DecayTreeFittercLcLParticleBase(void *p) {
      delete ((::DecayTreeFitter::ParticleBase*)p);
   }
   static void deleteArray_DecayTreeFittercLcLParticleBase(void *p) {
      delete [] ((::DecayTreeFitter::ParticleBase*)p);
   }
   static void destruct_DecayTreeFittercLcLParticleBase(void *p) {
      typedef ::DecayTreeFitter::ParticleBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DecayTreeFitter::ParticleBase

namespace DecayTreeFitter {
//______________________________________________________________________________
void MergedConstraint::Streamer(TBuffer &R__b)
{
   // Stream an object of class DecayTreeFitter::MergedConstraint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DecayTreeFitter::MergedConstraint::Class(),this);
   } else {
      R__b.WriteClassBuffer(DecayTreeFitter::MergedConstraint::Class(),this);
   }
}

} // namespace DecayTreeFitter
namespace ROOT {
   // Wrappers around operator new
   static void *new_DecayTreeFittercLcLMergedConstraint(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DecayTreeFitter::MergedConstraint : new ::DecayTreeFitter::MergedConstraint;
   }
   static void *newArray_DecayTreeFittercLcLMergedConstraint(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DecayTreeFitter::MergedConstraint[nElements] : new ::DecayTreeFitter::MergedConstraint[nElements];
   }
   // Wrapper around operator delete
   static void delete_DecayTreeFittercLcLMergedConstraint(void *p) {
      delete ((::DecayTreeFitter::MergedConstraint*)p);
   }
   static void deleteArray_DecayTreeFittercLcLMergedConstraint(void *p) {
      delete [] ((::DecayTreeFitter::MergedConstraint*)p);
   }
   static void destruct_DecayTreeFittercLcLMergedConstraint(void *p) {
      typedef ::DecayTreeFitter::MergedConstraint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DecayTreeFitter::MergedConstraint

namespace DecayTreeFitter {
//______________________________________________________________________________
void DecayChain::Streamer(TBuffer &R__b)
{
   // Stream an object of class DecayTreeFitter::DecayChain.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DecayTreeFitter::DecayChain::Class(),this);
   } else {
      R__b.WriteClassBuffer(DecayTreeFitter::DecayChain::Class(),this);
   }
}

} // namespace DecayTreeFitter
namespace ROOT {
   // Wrappers around operator new
   static void *new_DecayTreeFittercLcLDecayChain(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DecayTreeFitter::DecayChain : new ::DecayTreeFitter::DecayChain;
   }
   static void *newArray_DecayTreeFittercLcLDecayChain(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DecayTreeFitter::DecayChain[nElements] : new ::DecayTreeFitter::DecayChain[nElements];
   }
   // Wrapper around operator delete
   static void delete_DecayTreeFittercLcLDecayChain(void *p) {
      delete ((::DecayTreeFitter::DecayChain*)p);
   }
   static void deleteArray_DecayTreeFittercLcLDecayChain(void *p) {
      delete [] ((::DecayTreeFitter::DecayChain*)p);
   }
   static void destruct_DecayTreeFittercLcLDecayChain(void *p) {
      typedef ::DecayTreeFitter::DecayChain current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DecayTreeFitter::DecayChain

namespace DecayTreeFitter {
//______________________________________________________________________________
void Line::Streamer(TBuffer &R__b)
{
   // Stream an object of class DecayTreeFitter::Line.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DecayTreeFitter::Line::Class(),this);
   } else {
      R__b.WriteClassBuffer(DecayTreeFitter::Line::Class(),this);
   }
}

} // namespace DecayTreeFitter
namespace ROOT {
   // Wrappers around operator new
   static void *new_DecayTreeFittercLcLLine(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DecayTreeFitter::Line : new ::DecayTreeFitter::Line;
   }
   static void *newArray_DecayTreeFittercLcLLine(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DecayTreeFitter::Line[nElements] : new ::DecayTreeFitter::Line[nElements];
   }
   // Wrapper around operator delete
   static void delete_DecayTreeFittercLcLLine(void *p) {
      delete ((::DecayTreeFitter::Line*)p);
   }
   static void deleteArray_DecayTreeFittercLcLLine(void *p) {
      delete [] ((::DecayTreeFitter::Line*)p);
   }
   static void destruct_DecayTreeFittercLcLLine(void *p) {
      typedef ::DecayTreeFitter::Line current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DecayTreeFitter::Line

namespace DecayTreeFitter {
//______________________________________________________________________________
void RecoParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class DecayTreeFitter::RecoParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DecayTreeFitter::RecoParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(DecayTreeFitter::RecoParticle::Class(),this);
   }
}

} // namespace DecayTreeFitter
namespace ROOT {
   // Wrapper around operator delete
   static void delete_DecayTreeFittercLcLRecoParticle(void *p) {
      delete ((::DecayTreeFitter::RecoParticle*)p);
   }
   static void deleteArray_DecayTreeFittercLcLRecoParticle(void *p) {
      delete [] ((::DecayTreeFitter::RecoParticle*)p);
   }
   static void destruct_DecayTreeFittercLcLRecoParticle(void *p) {
      typedef ::DecayTreeFitter::RecoParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DecayTreeFitter::RecoParticle

namespace DecayTreeFitter {
//______________________________________________________________________________
void RecoTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class DecayTreeFitter::RecoTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DecayTreeFitter::RecoTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(DecayTreeFitter::RecoTrack::Class(),this);
   }
}

} // namespace DecayTreeFitter
namespace ROOT {
   // Wrapper around operator delete
   static void delete_DecayTreeFittercLcLRecoTrack(void *p) {
      delete ((::DecayTreeFitter::RecoTrack*)p);
   }
   static void deleteArray_DecayTreeFittercLcLRecoTrack(void *p) {
      delete [] ((::DecayTreeFitter::RecoTrack*)p);
   }
   static void destruct_DecayTreeFittercLcLRecoTrack(void *p) {
      typedef ::DecayTreeFitter::RecoTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DecayTreeFitter::RecoTrack

namespace DecayTreeFitter {
//______________________________________________________________________________
void FitParams::Streamer(TBuffer &R__b)
{
   // Stream an object of class DecayTreeFitter::FitParams.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DecayTreeFitter::FitParams::Class(),this);
   } else {
      R__b.WriteClassBuffer(DecayTreeFitter::FitParams::Class(),this);
   }
}

} // namespace DecayTreeFitter
namespace ROOT {
   // Wrapper around operator delete
   static void delete_DecayTreeFittercLcLFitParams(void *p) {
      delete ((::DecayTreeFitter::FitParams*)p);
   }
   static void deleteArray_DecayTreeFittercLcLFitParams(void *p) {
      delete [] ((::DecayTreeFitter::FitParams*)p);
   }
   static void destruct_DecayTreeFittercLcLFitParams(void *p) {
      typedef ::DecayTreeFitter::FitParams current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DecayTreeFitter::FitParams

namespace DecayTreeFitter {
//______________________________________________________________________________
void Fitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class DecayTreeFitter::Fitter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DecayTreeFitter::Fitter::Class(),this);
   } else {
      R__b.WriteClassBuffer(DecayTreeFitter::Fitter::Class(),this);
   }
}

} // namespace DecayTreeFitter
namespace ROOT {
   // Wrapper around operator delete
   static void delete_DecayTreeFittercLcLFitter(void *p) {
      delete ((::DecayTreeFitter::Fitter*)p);
   }
   static void deleteArray_DecayTreeFittercLcLFitter(void *p) {
      delete [] ((::DecayTreeFitter::Fitter*)p);
   }
   static void destruct_DecayTreeFittercLcLFitter(void *p) {
      typedef ::DecayTreeFitter::Fitter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DecayTreeFitter::Fitter

namespace DecayTreeFitter {
//______________________________________________________________________________
void InternalParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class DecayTreeFitter::InternalParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DecayTreeFitter::InternalParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(DecayTreeFitter::InternalParticle::Class(),this);
   }
}

} // namespace DecayTreeFitter
namespace ROOT {
   // Wrapper around operator delete
   static void delete_DecayTreeFittercLcLInternalParticle(void *p) {
      delete ((::DecayTreeFitter::InternalParticle*)p);
   }
   static void deleteArray_DecayTreeFittercLcLInternalParticle(void *p) {
      delete [] ((::DecayTreeFitter::InternalParticle*)p);
   }
   static void destruct_DecayTreeFittercLcLInternalParticle(void *p) {
      typedef ::DecayTreeFitter::InternalParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DecayTreeFitter::InternalParticle

namespace DecayTreeFitter {
//______________________________________________________________________________
void InteractionPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class DecayTreeFitter::InteractionPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DecayTreeFitter::InteractionPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(DecayTreeFitter::InteractionPoint::Class(),this);
   }
}

} // namespace DecayTreeFitter
namespace ROOT {
   // Wrapper around operator delete
   static void delete_DecayTreeFittercLcLInteractionPoint(void *p) {
      delete ((::DecayTreeFitter::InteractionPoint*)p);
   }
   static void deleteArray_DecayTreeFittercLcLInteractionPoint(void *p) {
      delete [] ((::DecayTreeFitter::InteractionPoint*)p);
   }
   static void destruct_DecayTreeFittercLcLInteractionPoint(void *p) {
      typedef ::DecayTreeFitter::InteractionPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DecayTreeFitter::InteractionPoint

namespace DecayTreeFitter {
//______________________________________________________________________________
void KalmanCalculator::Streamer(TBuffer &R__b)
{
   // Stream an object of class DecayTreeFitter::KalmanCalculator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DecayTreeFitter::KalmanCalculator::Class(),this);
   } else {
      R__b.WriteClassBuffer(DecayTreeFitter::KalmanCalculator::Class(),this);
   }
}

} // namespace DecayTreeFitter
namespace ROOT {
   // Wrappers around operator new
   static void *new_DecayTreeFittercLcLKalmanCalculator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DecayTreeFitter::KalmanCalculator : new ::DecayTreeFitter::KalmanCalculator;
   }
   static void *newArray_DecayTreeFittercLcLKalmanCalculator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::DecayTreeFitter::KalmanCalculator[nElements] : new ::DecayTreeFitter::KalmanCalculator[nElements];
   }
   // Wrapper around operator delete
   static void delete_DecayTreeFittercLcLKalmanCalculator(void *p) {
      delete ((::DecayTreeFitter::KalmanCalculator*)p);
   }
   static void deleteArray_DecayTreeFittercLcLKalmanCalculator(void *p) {
      delete [] ((::DecayTreeFitter::KalmanCalculator*)p);
   }
   static void destruct_DecayTreeFittercLcLKalmanCalculator(void *p) {
      typedef ::DecayTreeFitter::KalmanCalculator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DecayTreeFitter::KalmanCalculator

namespace DecayTreeFitter {
//______________________________________________________________________________
void MissingParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class DecayTreeFitter::MissingParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DecayTreeFitter::MissingParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(DecayTreeFitter::MissingParticle::Class(),this);
   }
}

} // namespace DecayTreeFitter
namespace ROOT {
   // Wrapper around operator delete
   static void delete_DecayTreeFittercLcLMissingParticle(void *p) {
      delete ((::DecayTreeFitter::MissingParticle*)p);
   }
   static void deleteArray_DecayTreeFittercLcLMissingParticle(void *p) {
      delete [] ((::DecayTreeFitter::MissingParticle*)p);
   }
   static void destruct_DecayTreeFittercLcLMissingParticle(void *p) {
      typedef ::DecayTreeFitter::MissingParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DecayTreeFitter::MissingParticle

namespace DecayTreeFitter {
//______________________________________________________________________________
void RecoComposite::Streamer(TBuffer &R__b)
{
   // Stream an object of class DecayTreeFitter::RecoComposite.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DecayTreeFitter::RecoComposite::Class(),this);
   } else {
      R__b.WriteClassBuffer(DecayTreeFitter::RecoComposite::Class(),this);
   }
}

} // namespace DecayTreeFitter
namespace ROOT {
   // Wrapper around operator delete
   static void delete_DecayTreeFittercLcLRecoComposite(void *p) {
      delete ((::DecayTreeFitter::RecoComposite*)p);
   }
   static void deleteArray_DecayTreeFittercLcLRecoComposite(void *p) {
      delete [] ((::DecayTreeFitter::RecoComposite*)p);
   }
   static void destruct_DecayTreeFittercLcLRecoComposite(void *p) {
      typedef ::DecayTreeFitter::RecoComposite current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DecayTreeFitter::RecoComposite

namespace DecayTreeFitter {
//______________________________________________________________________________
void RecoPhoton::Streamer(TBuffer &R__b)
{
   // Stream an object of class DecayTreeFitter::RecoPhoton.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DecayTreeFitter::RecoPhoton::Class(),this);
   } else {
      R__b.WriteClassBuffer(DecayTreeFitter::RecoPhoton::Class(),this);
   }
}

} // namespace DecayTreeFitter
namespace ROOT {
   // Wrapper around operator delete
   static void delete_DecayTreeFittercLcLRecoPhoton(void *p) {
      delete ((::DecayTreeFitter::RecoPhoton*)p);
   }
   static void deleteArray_DecayTreeFittercLcLRecoPhoton(void *p) {
      delete [] ((::DecayTreeFitter::RecoPhoton*)p);
   }
   static void destruct_DecayTreeFittercLcLRecoPhoton(void *p) {
      typedef ::DecayTreeFitter::RecoPhoton current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DecayTreeFitter::RecoPhoton

namespace DecayTreeFitter {
//______________________________________________________________________________
void RecoResonance::Streamer(TBuffer &R__b)
{
   // Stream an object of class DecayTreeFitter::RecoResonance.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DecayTreeFitter::RecoResonance::Class(),this);
   } else {
      R__b.WriteClassBuffer(DecayTreeFitter::RecoResonance::Class(),this);
   }
}

} // namespace DecayTreeFitter
namespace ROOT {
   // Wrapper around operator delete
   static void delete_DecayTreeFittercLcLRecoResonance(void *p) {
      delete ((::DecayTreeFitter::RecoResonance*)p);
   }
   static void deleteArray_DecayTreeFittercLcLRecoResonance(void *p) {
      delete [] ((::DecayTreeFitter::RecoResonance*)p);
   }
   static void destruct_DecayTreeFittercLcLRecoResonance(void *p) {
      typedef ::DecayTreeFitter::RecoResonance current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DecayTreeFitter::RecoResonance

namespace DecayTreeFitter {
//______________________________________________________________________________
void Resonance::Streamer(TBuffer &R__b)
{
   // Stream an object of class DecayTreeFitter::Resonance.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DecayTreeFitter::Resonance::Class(),this);
   } else {
      R__b.WriteClassBuffer(DecayTreeFitter::Resonance::Class(),this);
   }
}

} // namespace DecayTreeFitter
namespace ROOT {
   // Wrapper around operator delete
   static void delete_DecayTreeFittercLcLResonance(void *p) {
      delete ((::DecayTreeFitter::Resonance*)p);
   }
   static void deleteArray_DecayTreeFittercLcLResonance(void *p) {
      delete [] ((::DecayTreeFitter::Resonance*)p);
   }
   static void destruct_DecayTreeFittercLcLResonance(void *p) {
      typedef ::DecayTreeFitter::Resonance current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DecayTreeFitter::Resonance

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
   static TClass *vectorlEDecayTreeFittercLcLStategR_Dictionary();
   static void vectorlEDecayTreeFittercLcLStategR_TClassManip(TClass*);
   static void *new_vectorlEDecayTreeFittercLcLStategR(void *p = 0);
   static void *newArray_vectorlEDecayTreeFittercLcLStategR(Long_t size, void *p);
   static void delete_vectorlEDecayTreeFittercLcLStategR(void *p);
   static void deleteArray_vectorlEDecayTreeFittercLcLStategR(void *p);
   static void destruct_vectorlEDecayTreeFittercLcLStategR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<DecayTreeFitter::State>*)
   {
      vector<DecayTreeFitter::State> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<DecayTreeFitter::State>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<DecayTreeFitter::State>", -2, "vector", 216,
                  typeid(vector<DecayTreeFitter::State>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEDecayTreeFittercLcLStategR_Dictionary, isa_proxy, 0,
                  sizeof(vector<DecayTreeFitter::State>) );
      instance.SetNew(&new_vectorlEDecayTreeFittercLcLStategR);
      instance.SetNewArray(&newArray_vectorlEDecayTreeFittercLcLStategR);
      instance.SetDelete(&delete_vectorlEDecayTreeFittercLcLStategR);
      instance.SetDeleteArray(&deleteArray_vectorlEDecayTreeFittercLcLStategR);
      instance.SetDestructor(&destruct_vectorlEDecayTreeFittercLcLStategR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<DecayTreeFitter::State> >()));

      ::ROOT::AddClassAlternate("vector<DecayTreeFitter::State>","std::vector<DecayTreeFitter::State, std::allocator<DecayTreeFitter::State> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<DecayTreeFitter::State>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEDecayTreeFittercLcLStategR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<DecayTreeFitter::State>*)0x0)->GetClass();
      vectorlEDecayTreeFittercLcLStategR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEDecayTreeFittercLcLStategR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEDecayTreeFittercLcLStategR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DecayTreeFitter::State> : new vector<DecayTreeFitter::State>;
   }
   static void *newArray_vectorlEDecayTreeFittercLcLStategR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DecayTreeFitter::State>[nElements] : new vector<DecayTreeFitter::State>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEDecayTreeFittercLcLStategR(void *p) {
      delete ((vector<DecayTreeFitter::State>*)p);
   }
   static void deleteArray_vectorlEDecayTreeFittercLcLStategR(void *p) {
      delete [] ((vector<DecayTreeFitter::State>*)p);
   }
   static void destruct_vectorlEDecayTreeFittercLcLStategR(void *p) {
      typedef vector<DecayTreeFitter::State> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<DecayTreeFitter::State>

namespace ROOT {
   static TClass *vectorlEDecayTreeFittercLcLParticleBasemUgR_Dictionary();
   static void vectorlEDecayTreeFittercLcLParticleBasemUgR_TClassManip(TClass*);
   static void *new_vectorlEDecayTreeFittercLcLParticleBasemUgR(void *p = 0);
   static void *newArray_vectorlEDecayTreeFittercLcLParticleBasemUgR(Long_t size, void *p);
   static void delete_vectorlEDecayTreeFittercLcLParticleBasemUgR(void *p);
   static void deleteArray_vectorlEDecayTreeFittercLcLParticleBasemUgR(void *p);
   static void destruct_vectorlEDecayTreeFittercLcLParticleBasemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<DecayTreeFitter::ParticleBase*>*)
   {
      vector<DecayTreeFitter::ParticleBase*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<DecayTreeFitter::ParticleBase*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<DecayTreeFitter::ParticleBase*>", -2, "vector", 216,
                  typeid(vector<DecayTreeFitter::ParticleBase*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEDecayTreeFittercLcLParticleBasemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<DecayTreeFitter::ParticleBase*>) );
      instance.SetNew(&new_vectorlEDecayTreeFittercLcLParticleBasemUgR);
      instance.SetNewArray(&newArray_vectorlEDecayTreeFittercLcLParticleBasemUgR);
      instance.SetDelete(&delete_vectorlEDecayTreeFittercLcLParticleBasemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEDecayTreeFittercLcLParticleBasemUgR);
      instance.SetDestructor(&destruct_vectorlEDecayTreeFittercLcLParticleBasemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<DecayTreeFitter::ParticleBase*> >()));

      ::ROOT::AddClassAlternate("vector<DecayTreeFitter::ParticleBase*>","std::vector<DecayTreeFitter::ParticleBase*, std::allocator<DecayTreeFitter::ParticleBase*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<DecayTreeFitter::ParticleBase*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEDecayTreeFittercLcLParticleBasemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<DecayTreeFitter::ParticleBase*>*)0x0)->GetClass();
      vectorlEDecayTreeFittercLcLParticleBasemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEDecayTreeFittercLcLParticleBasemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEDecayTreeFittercLcLParticleBasemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DecayTreeFitter::ParticleBase*> : new vector<DecayTreeFitter::ParticleBase*>;
   }
   static void *newArray_vectorlEDecayTreeFittercLcLParticleBasemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DecayTreeFitter::ParticleBase*>[nElements] : new vector<DecayTreeFitter::ParticleBase*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEDecayTreeFittercLcLParticleBasemUgR(void *p) {
      delete ((vector<DecayTreeFitter::ParticleBase*>*)p);
   }
   static void deleteArray_vectorlEDecayTreeFittercLcLParticleBasemUgR(void *p) {
      delete [] ((vector<DecayTreeFitter::ParticleBase*>*)p);
   }
   static void destruct_vectorlEDecayTreeFittercLcLParticleBasemUgR(void *p) {
      typedef vector<DecayTreeFitter::ParticleBase*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<DecayTreeFitter::ParticleBase*>

namespace ROOT {
   static TClass *vectorlEDecayTreeFittercLcLConstraintgR_Dictionary();
   static void vectorlEDecayTreeFittercLcLConstraintgR_TClassManip(TClass*);
   static void *new_vectorlEDecayTreeFittercLcLConstraintgR(void *p = 0);
   static void *newArray_vectorlEDecayTreeFittercLcLConstraintgR(Long_t size, void *p);
   static void delete_vectorlEDecayTreeFittercLcLConstraintgR(void *p);
   static void deleteArray_vectorlEDecayTreeFittercLcLConstraintgR(void *p);
   static void destruct_vectorlEDecayTreeFittercLcLConstraintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<DecayTreeFitter::Constraint>*)
   {
      vector<DecayTreeFitter::Constraint> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<DecayTreeFitter::Constraint>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<DecayTreeFitter::Constraint>", -2, "vector", 216,
                  typeid(vector<DecayTreeFitter::Constraint>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEDecayTreeFittercLcLConstraintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<DecayTreeFitter::Constraint>) );
      instance.SetNew(&new_vectorlEDecayTreeFittercLcLConstraintgR);
      instance.SetNewArray(&newArray_vectorlEDecayTreeFittercLcLConstraintgR);
      instance.SetDelete(&delete_vectorlEDecayTreeFittercLcLConstraintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEDecayTreeFittercLcLConstraintgR);
      instance.SetDestructor(&destruct_vectorlEDecayTreeFittercLcLConstraintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<DecayTreeFitter::Constraint> >()));

      ::ROOT::AddClassAlternate("vector<DecayTreeFitter::Constraint>","std::vector<DecayTreeFitter::Constraint, std::allocator<DecayTreeFitter::Constraint> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<DecayTreeFitter::Constraint>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEDecayTreeFittercLcLConstraintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<DecayTreeFitter::Constraint>*)0x0)->GetClass();
      vectorlEDecayTreeFittercLcLConstraintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEDecayTreeFittercLcLConstraintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEDecayTreeFittercLcLConstraintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DecayTreeFitter::Constraint> : new vector<DecayTreeFitter::Constraint>;
   }
   static void *newArray_vectorlEDecayTreeFittercLcLConstraintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DecayTreeFitter::Constraint>[nElements] : new vector<DecayTreeFitter::Constraint>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEDecayTreeFittercLcLConstraintgR(void *p) {
      delete ((vector<DecayTreeFitter::Constraint>*)p);
   }
   static void deleteArray_vectorlEDecayTreeFittercLcLConstraintgR(void *p) {
      delete [] ((vector<DecayTreeFitter::Constraint>*)p);
   }
   static void destruct_vectorlEDecayTreeFittercLcLConstraintgR(void *p) {
      typedef vector<DecayTreeFitter::Constraint> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<DecayTreeFitter::Constraint>

namespace ROOT {
   static TClass *vectorlEDecayTreeFittercLcLConstraintmUgR_Dictionary();
   static void vectorlEDecayTreeFittercLcLConstraintmUgR_TClassManip(TClass*);
   static void *new_vectorlEDecayTreeFittercLcLConstraintmUgR(void *p = 0);
   static void *newArray_vectorlEDecayTreeFittercLcLConstraintmUgR(Long_t size, void *p);
   static void delete_vectorlEDecayTreeFittercLcLConstraintmUgR(void *p);
   static void deleteArray_vectorlEDecayTreeFittercLcLConstraintmUgR(void *p);
   static void destruct_vectorlEDecayTreeFittercLcLConstraintmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<DecayTreeFitter::Constraint*>*)
   {
      vector<DecayTreeFitter::Constraint*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<DecayTreeFitter::Constraint*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<DecayTreeFitter::Constraint*>", -2, "vector", 216,
                  typeid(vector<DecayTreeFitter::Constraint*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEDecayTreeFittercLcLConstraintmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<DecayTreeFitter::Constraint*>) );
      instance.SetNew(&new_vectorlEDecayTreeFittercLcLConstraintmUgR);
      instance.SetNewArray(&newArray_vectorlEDecayTreeFittercLcLConstraintmUgR);
      instance.SetDelete(&delete_vectorlEDecayTreeFittercLcLConstraintmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEDecayTreeFittercLcLConstraintmUgR);
      instance.SetDestructor(&destruct_vectorlEDecayTreeFittercLcLConstraintmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<DecayTreeFitter::Constraint*> >()));

      ::ROOT::AddClassAlternate("vector<DecayTreeFitter::Constraint*>","std::vector<DecayTreeFitter::Constraint*, std::allocator<DecayTreeFitter::Constraint*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<DecayTreeFitter::Constraint*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEDecayTreeFittercLcLConstraintmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<DecayTreeFitter::Constraint*>*)0x0)->GetClass();
      vectorlEDecayTreeFittercLcLConstraintmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEDecayTreeFittercLcLConstraintmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEDecayTreeFittercLcLConstraintmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DecayTreeFitter::Constraint*> : new vector<DecayTreeFitter::Constraint*>;
   }
   static void *newArray_vectorlEDecayTreeFittercLcLConstraintmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<DecayTreeFitter::Constraint*>[nElements] : new vector<DecayTreeFitter::Constraint*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEDecayTreeFittercLcLConstraintmUgR(void *p) {
      delete ((vector<DecayTreeFitter::Constraint*>*)p);
   }
   static void deleteArray_vectorlEDecayTreeFittercLcLConstraintmUgR(void *p) {
      delete [] ((vector<DecayTreeFitter::Constraint*>*)p);
   }
   static void destruct_vectorlEDecayTreeFittercLcLConstraintmUgR(void *p) {
      typedef vector<DecayTreeFitter::Constraint*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<DecayTreeFitter::Constraint*>

namespace ROOT {
   static TClass *maplEconstsPDecayTreeFittercLcLParticleBasemUcODecayTreeFittercLcLChiSquaregR_Dictionary();
   static void maplEconstsPDecayTreeFittercLcLParticleBasemUcODecayTreeFittercLcLChiSquaregR_TClassManip(TClass*);
   static void *new_maplEconstsPDecayTreeFittercLcLParticleBasemUcODecayTreeFittercLcLChiSquaregR(void *p = 0);
   static void *newArray_maplEconstsPDecayTreeFittercLcLParticleBasemUcODecayTreeFittercLcLChiSquaregR(Long_t size, void *p);
   static void delete_maplEconstsPDecayTreeFittercLcLParticleBasemUcODecayTreeFittercLcLChiSquaregR(void *p);
   static void deleteArray_maplEconstsPDecayTreeFittercLcLParticleBasemUcODecayTreeFittercLcLChiSquaregR(void *p);
   static void destruct_maplEconstsPDecayTreeFittercLcLParticleBasemUcODecayTreeFittercLcLChiSquaregR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<const DecayTreeFitter::ParticleBase*,DecayTreeFitter::ChiSquare>*)
   {
      map<const DecayTreeFitter::ParticleBase*,DecayTreeFitter::ChiSquare> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<const DecayTreeFitter::ParticleBase*,DecayTreeFitter::ChiSquare>));
      static ::ROOT::TGenericClassInfo 
         instance("map<const DecayTreeFitter::ParticleBase*,DecayTreeFitter::ChiSquare>", -2, "map", 99,
                  typeid(map<const DecayTreeFitter::ParticleBase*,DecayTreeFitter::ChiSquare>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEconstsPDecayTreeFittercLcLParticleBasemUcODecayTreeFittercLcLChiSquaregR_Dictionary, isa_proxy, 0,
                  sizeof(map<const DecayTreeFitter::ParticleBase*,DecayTreeFitter::ChiSquare>) );
      instance.SetNew(&new_maplEconstsPDecayTreeFittercLcLParticleBasemUcODecayTreeFittercLcLChiSquaregR);
      instance.SetNewArray(&newArray_maplEconstsPDecayTreeFittercLcLParticleBasemUcODecayTreeFittercLcLChiSquaregR);
      instance.SetDelete(&delete_maplEconstsPDecayTreeFittercLcLParticleBasemUcODecayTreeFittercLcLChiSquaregR);
      instance.SetDeleteArray(&deleteArray_maplEconstsPDecayTreeFittercLcLParticleBasemUcODecayTreeFittercLcLChiSquaregR);
      instance.SetDestructor(&destruct_maplEconstsPDecayTreeFittercLcLParticleBasemUcODecayTreeFittercLcLChiSquaregR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<const DecayTreeFitter::ParticleBase*,DecayTreeFitter::ChiSquare> >()));

      ::ROOT::AddClassAlternate("map<const DecayTreeFitter::ParticleBase*,DecayTreeFitter::ChiSquare>","std::map<DecayTreeFitter::ParticleBase const*, DecayTreeFitter::ChiSquare, std::less<DecayTreeFitter::ParticleBase const*>, std::allocator<std::pair<DecayTreeFitter::ParticleBase const* const, DecayTreeFitter::ChiSquare> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<const DecayTreeFitter::ParticleBase*,DecayTreeFitter::ChiSquare>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEconstsPDecayTreeFittercLcLParticleBasemUcODecayTreeFittercLcLChiSquaregR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<const DecayTreeFitter::ParticleBase*,DecayTreeFitter::ChiSquare>*)0x0)->GetClass();
      maplEconstsPDecayTreeFittercLcLParticleBasemUcODecayTreeFittercLcLChiSquaregR_TClassManip(theClass);
   return theClass;
   }

   static void maplEconstsPDecayTreeFittercLcLParticleBasemUcODecayTreeFittercLcLChiSquaregR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEconstsPDecayTreeFittercLcLParticleBasemUcODecayTreeFittercLcLChiSquaregR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<const DecayTreeFitter::ParticleBase*,DecayTreeFitter::ChiSquare> : new map<const DecayTreeFitter::ParticleBase*,DecayTreeFitter::ChiSquare>;
   }
   static void *newArray_maplEconstsPDecayTreeFittercLcLParticleBasemUcODecayTreeFittercLcLChiSquaregR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<const DecayTreeFitter::ParticleBase*,DecayTreeFitter::ChiSquare>[nElements] : new map<const DecayTreeFitter::ParticleBase*,DecayTreeFitter::ChiSquare>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEconstsPDecayTreeFittercLcLParticleBasemUcODecayTreeFittercLcLChiSquaregR(void *p) {
      delete ((map<const DecayTreeFitter::ParticleBase*,DecayTreeFitter::ChiSquare>*)p);
   }
   static void deleteArray_maplEconstsPDecayTreeFittercLcLParticleBasemUcODecayTreeFittercLcLChiSquaregR(void *p) {
      delete [] ((map<const DecayTreeFitter::ParticleBase*,DecayTreeFitter::ChiSquare>*)p);
   }
   static void destruct_maplEconstsPDecayTreeFittercLcLParticleBasemUcODecayTreeFittercLcLChiSquaregR(void *p) {
      typedef map<const DecayTreeFitter::ParticleBase*,DecayTreeFitter::ChiSquare> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<const DecayTreeFitter::ParticleBase*,DecayTreeFitter::ChiSquare>

namespace ROOT {
   static TClass *maplERhoCandidatemUcOconstsPDecayTreeFittercLcLParticleBasemUgR_Dictionary();
   static void maplERhoCandidatemUcOconstsPDecayTreeFittercLcLParticleBasemUgR_TClassManip(TClass*);
   static void *new_maplERhoCandidatemUcOconstsPDecayTreeFittercLcLParticleBasemUgR(void *p = 0);
   static void *newArray_maplERhoCandidatemUcOconstsPDecayTreeFittercLcLParticleBasemUgR(Long_t size, void *p);
   static void delete_maplERhoCandidatemUcOconstsPDecayTreeFittercLcLParticleBasemUgR(void *p);
   static void deleteArray_maplERhoCandidatemUcOconstsPDecayTreeFittercLcLParticleBasemUgR(void *p);
   static void destruct_maplERhoCandidatemUcOconstsPDecayTreeFittercLcLParticleBasemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<RhoCandidate*,const DecayTreeFitter::ParticleBase*>*)
   {
      map<RhoCandidate*,const DecayTreeFitter::ParticleBase*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<RhoCandidate*,const DecayTreeFitter::ParticleBase*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<RhoCandidate*,const DecayTreeFitter::ParticleBase*>", -2, "map", 99,
                  typeid(map<RhoCandidate*,const DecayTreeFitter::ParticleBase*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplERhoCandidatemUcOconstsPDecayTreeFittercLcLParticleBasemUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<RhoCandidate*,const DecayTreeFitter::ParticleBase*>) );
      instance.SetNew(&new_maplERhoCandidatemUcOconstsPDecayTreeFittercLcLParticleBasemUgR);
      instance.SetNewArray(&newArray_maplERhoCandidatemUcOconstsPDecayTreeFittercLcLParticleBasemUgR);
      instance.SetDelete(&delete_maplERhoCandidatemUcOconstsPDecayTreeFittercLcLParticleBasemUgR);
      instance.SetDeleteArray(&deleteArray_maplERhoCandidatemUcOconstsPDecayTreeFittercLcLParticleBasemUgR);
      instance.SetDestructor(&destruct_maplERhoCandidatemUcOconstsPDecayTreeFittercLcLParticleBasemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<RhoCandidate*,const DecayTreeFitter::ParticleBase*> >()));

      ::ROOT::AddClassAlternate("map<RhoCandidate*,const DecayTreeFitter::ParticleBase*>","std::map<RhoCandidate*, DecayTreeFitter::ParticleBase const*, std::less<RhoCandidate*>, std::allocator<std::pair<RhoCandidate* const, DecayTreeFitter::ParticleBase const*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<RhoCandidate*,const DecayTreeFitter::ParticleBase*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplERhoCandidatemUcOconstsPDecayTreeFittercLcLParticleBasemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<RhoCandidate*,const DecayTreeFitter::ParticleBase*>*)0x0)->GetClass();
      maplERhoCandidatemUcOconstsPDecayTreeFittercLcLParticleBasemUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplERhoCandidatemUcOconstsPDecayTreeFittercLcLParticleBasemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplERhoCandidatemUcOconstsPDecayTreeFittercLcLParticleBasemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<RhoCandidate*,const DecayTreeFitter::ParticleBase*> : new map<RhoCandidate*,const DecayTreeFitter::ParticleBase*>;
   }
   static void *newArray_maplERhoCandidatemUcOconstsPDecayTreeFittercLcLParticleBasemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<RhoCandidate*,const DecayTreeFitter::ParticleBase*>[nElements] : new map<RhoCandidate*,const DecayTreeFitter::ParticleBase*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplERhoCandidatemUcOconstsPDecayTreeFittercLcLParticleBasemUgR(void *p) {
      delete ((map<RhoCandidate*,const DecayTreeFitter::ParticleBase*>*)p);
   }
   static void deleteArray_maplERhoCandidatemUcOconstsPDecayTreeFittercLcLParticleBasemUgR(void *p) {
      delete [] ((map<RhoCandidate*,const DecayTreeFitter::ParticleBase*>*)p);
   }
   static void destruct_maplERhoCandidatemUcOconstsPDecayTreeFittercLcLParticleBasemUgR(void *p) {
      typedef map<RhoCandidate*,const DecayTreeFitter::ParticleBase*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<RhoCandidate*,const DecayTreeFitter::ParticleBase*>

namespace {
  void TriggerDictionaryInitialization_G__DecayTreeFitterDict_Impl() {
    static const char* headers[] = {
"ErrCode.h",
"ChiSquare.h",
"Configuration.h",
"Constraint.h",
"DecayChain.h",
"LineTool.h",
"SortTool.h",
"FitParams.h",
"Fitter.h",
"InteractionPoint.h",
"InternalParticle.h",
"KalmanCalculator.h",
"MergedConstraint.h",
"MissingParticle.h",
"ParticleBase.h",
"Projection.h",
"RecoComposite.h",
"RecoParticle.h",
"RecoPhoton.h",
"RecoResonance.h",
"RecoTrack.h",
"RecoTrackStateProvider.h",
"Resonance.h",
"State.h",
0
    };
    static const char* includePaths[] = {
"/home/eicc/software/FairSoft/install/include/root",
"/home/eicc/FairRoot/build_18.4.2/include",
"/home/eicc/software/FairSoft/install/include",
"/home/eicc/software/FairSoft/install/include",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/trackbase",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/ChnsData",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/ChnsData/TrackData",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/ChnsData/PidData",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/RhoBase",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/RhoMath",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/RhoTools",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/RhoSelector",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/RhoHistogram",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/DecayTreeFitter",
"/home/eicc/software/FairSoft/install/include/root",
"/home/eicc/software/FairSoft/install/include",
"/home/eicc/software/FairSoft/install/include/root",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/build/rho/DecayTreeFitter/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__DecayTreeFitterDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace DecayTreeFitter{class __attribute__((annotate("$clingAutoload$ErrCode.h")))  ErrCode;}
namespace DecayTreeFitter{class __attribute__((annotate("$clingAutoload$ChiSquare.h")))  ChiSquare;}
namespace DecayTreeFitter{class __attribute__((annotate("$clingAutoload$State.h")))  __attribute__((annotate("$clingAutoload$Configuration.h")))  State;}
namespace DecayTreeFitter{class __attribute__((annotate("$clingAutoload$RecoTrackStateProvider.h")))  __attribute__((annotate("$clingAutoload$Configuration.h")))  RecoTrackStateProvider;}
namespace DecayTreeFitter{class __attribute__((annotate("$clingAutoload$Configuration.h")))  Configuration;}
namespace DecayTreeFitter{class __attribute__((annotate("$clingAutoload$Constraint.h")))  Constraint;}
namespace DecayTreeFitter{class __attribute__((annotate("$clingAutoload$Projection.h")))  __attribute__((annotate("$clingAutoload$DecayChain.h")))  Projection;}
namespace DecayTreeFitter{class __attribute__((annotate("$clingAutoload$ParticleBase.h")))  __attribute__((annotate("$clingAutoload$DecayChain.h")))  ParticleBase;}
namespace DecayTreeFitter{class __attribute__((annotate("$clingAutoload$MergedConstraint.h")))  __attribute__((annotate("$clingAutoload$DecayChain.h")))  MergedConstraint;}
namespace DecayTreeFitter{class __attribute__((annotate("$clingAutoload$DecayChain.h")))  DecayChain;}
namespace DecayTreeFitter{class __attribute__((annotate("$clingAutoload$LineTool.h")))  Line;}
namespace DecayTreeFitter{class __attribute__((annotate("$clingAutoload$RecoParticle.h")))  __attribute__((annotate("$clingAutoload$SortTool.h")))  RecoParticle;}
namespace DecayTreeFitter{class __attribute__((annotate("$clingAutoload$RecoTrack.h")))  __attribute__((annotate("$clingAutoload$SortTool.h")))  RecoTrack;}
namespace DecayTreeFitter{class __attribute__((annotate("$clingAutoload$FitParams.h")))  FitParams;}
namespace DecayTreeFitter{class __attribute__((annotate("$clingAutoload$Fitter.h")))  Fitter;}
namespace DecayTreeFitter{class __attribute__((annotate("$clingAutoload$InternalParticle.h")))  __attribute__((annotate("$clingAutoload$InteractionPoint.h")))  InternalParticle;}
namespace DecayTreeFitter{class __attribute__((annotate("$clingAutoload$InteractionPoint.h")))  InteractionPoint;}
namespace DecayTreeFitter{class __attribute__((annotate("$clingAutoload$KalmanCalculator.h")))  KalmanCalculator;}
namespace DecayTreeFitter{class __attribute__((annotate("$clingAutoload$MissingParticle.h")))  MissingParticle;}
namespace DecayTreeFitter{class __attribute__((annotate("$clingAutoload$RecoComposite.h")))  RecoComposite;}
namespace DecayTreeFitter{class __attribute__((annotate("$clingAutoload$RecoPhoton.h")))  RecoPhoton;}
namespace DecayTreeFitter{class __attribute__((annotate("$clingAutoload$RecoResonance.h")))  RecoResonance;}
namespace DecayTreeFitter{class __attribute__((annotate("$clingAutoload$Resonance.h")))  Resonance;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__DecayTreeFitterDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "ErrCode.h"
#include "ChiSquare.h"
#include "Configuration.h"
#include "Constraint.h"
#include "DecayChain.h"
#include "LineTool.h"
#include "SortTool.h"
#include "FitParams.h"
#include "Fitter.h"
#include "InteractionPoint.h"
#include "InternalParticle.h"
#include "KalmanCalculator.h"
#include "MergedConstraint.h"
#include "MissingParticle.h"
#include "ParticleBase.h"
#include "Projection.h"
#include "RecoComposite.h"
#include "RecoParticle.h"
#include "RecoPhoton.h"
#include "RecoResonance.h"
#include "RecoTrack.h"
#include "RecoTrackStateProvider.h"
#include "Resonance.h"
#include "State.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"DecayTreeFitter::ChiSquare", payloadCode, "@",
"DecayTreeFitter::Configuration", payloadCode, "@",
"DecayTreeFitter::Constraint", payloadCode, "@",
"DecayTreeFitter::DecayChain", payloadCode, "@",
"DecayTreeFitter::ErrCode", payloadCode, "@",
"DecayTreeFitter::FitParams", payloadCode, "@",
"DecayTreeFitter::Fitter", payloadCode, "@",
"DecayTreeFitter::InteractionPoint", payloadCode, "@",
"DecayTreeFitter::InternalParticle", payloadCode, "@",
"DecayTreeFitter::KalmanCalculator", payloadCode, "@",
"DecayTreeFitter::Line", payloadCode, "@",
"DecayTreeFitter::MergedConstraint", payloadCode, "@",
"DecayTreeFitter::MissingParticle", payloadCode, "@",
"DecayTreeFitter::ParticleBase", payloadCode, "@",
"DecayTreeFitter::Projection", payloadCode, "@",
"DecayTreeFitter::RecoComposite", payloadCode, "@",
"DecayTreeFitter::RecoParticle", payloadCode, "@",
"DecayTreeFitter::RecoPhoton", payloadCode, "@",
"DecayTreeFitter::RecoResonance", payloadCode, "@",
"DecayTreeFitter::RecoTrack", payloadCode, "@",
"DecayTreeFitter::RecoTrackStateProvider", payloadCode, "@",
"DecayTreeFitter::Resonance", payloadCode, "@",
"DecayTreeFitter::State", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__DecayTreeFitterDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__DecayTreeFitterDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__DecayTreeFitterDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__DecayTreeFitterDict() {
  TriggerDictionaryInitialization_G__DecayTreeFitterDict_Impl();
}
