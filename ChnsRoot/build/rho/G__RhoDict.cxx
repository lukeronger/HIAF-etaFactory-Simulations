// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdata2dIrwangdIgithubsdIHIAFmIetaFactorymISimulationsdIChnsRootdIbuilddIrhodIG__RhoDict
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
#include "RhoConstraints/RhoMassConstraint.h"
#include "RhoConstraints/RhoPointingConstraint.h"
#include "RhoConstraints/RhoBeamConstraint.h"
#include "RhoBase/RhoEventSelectorBase.h"
#include "RhoTools/RhoCalculationTools.h"
#include "RhoMath/RhoDoubleErr.h"
#include "RhoMath/RhoError.h"
#include "RhoMath/RhoLorentzVectorErr.h"
#include "RhoMath/RhoVector3Err.h"
#include "RhoBase/RhoCandidate.h"
#include "RhoBase/RhoCandList.h"
#include "RhoBase/RhoCandListIterator.h"
#include "RhoBase/RhoEventInfo.h"
#include "RhoBase/RhoFactory.h"
#include "RhoTools/RhoPdtLoader.h"
#include "RhoBase/RhoFitterBase.h"
#include "RhoBase/RhoParticleSelectorBase.h"
#include "RhoBase/RhoVertexSelectorBase.h"
#include "RhoSelector/RhoChargedParticleSelector.h"
#include "RhoSelector/RhoEnergyParticleSelector.h"
#include "RhoSelector/RhoMassParticleSelector.h"
#include "RhoSelector/RhoMinusParticleSelector.h"
#include "RhoSelector/RhoMomentumParticleSelector.h"
#include "RhoSelector/RhoNeutralParticleSelector.h"
#include "RhoSelector/RhoPlusParticleSelector.h"
#include "RhoSelector/RhoSimpleElectronSelector.h"
#include "RhoSelector/RhoSimpleKaonSelector.h"
#include "RhoSelector/RhoSimpleMuonSelector.h"
#include "RhoSelector/RhoSimplePionSelector.h"
#include "RhoSelector/RhoSimpleProtonSelector.h"
#include "RhoSelector/RhoSimpleVertexSelector.h"
#include "RhoSelector/RhoSimpleVertexSelector.h"
#include "RhoSelector/RhoGoodPhotonSelector.h"
#include "RhoSelector/RhoGoodTrackSelector.h"
#include "RhoTools/RhoBooster.h"
#include "RhoBase/RhoEventShape.h"
#include "RhoTools/RhoEventShapes.h"
#include "RhoTools/RhoFindOmittedParticle.h"
#include "RhoTools/RhoTotalMomentum.h"
#include "RhoHistogram/RhoColumn.h"
#include "RhoHistogram/RhoTuple.h"
#include "RhoBase/RhoConstraint.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_RhoConstraint(void *p = 0);
   static void *newArray_RhoConstraint(Long_t size, void *p);
   static void delete_RhoConstraint(void *p);
   static void deleteArray_RhoConstraint(void *p);
   static void destruct_RhoConstraint(void *p);
   static void streamer_RhoConstraint(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoConstraint*)
   {
      ::RhoConstraint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoConstraint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoConstraint", ::RhoConstraint::Class_Version(), "RhoConstraint.h", 17,
                  typeid(::RhoConstraint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoConstraint::Dictionary, isa_proxy, 16,
                  sizeof(::RhoConstraint) );
      instance.SetNew(&new_RhoConstraint);
      instance.SetNewArray(&newArray_RhoConstraint);
      instance.SetDelete(&delete_RhoConstraint);
      instance.SetDeleteArray(&deleteArray_RhoConstraint);
      instance.SetDestructor(&destruct_RhoConstraint);
      instance.SetStreamerFunc(&streamer_RhoConstraint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoConstraint*)
   {
      return GenerateInitInstanceLocal((::RhoConstraint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoConstraint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RhoMassConstraint(void *p = 0);
   static void *newArray_RhoMassConstraint(Long_t size, void *p);
   static void delete_RhoMassConstraint(void *p);
   static void deleteArray_RhoMassConstraint(void *p);
   static void destruct_RhoMassConstraint(void *p);
   static void streamer_RhoMassConstraint(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoMassConstraint*)
   {
      ::RhoMassConstraint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoMassConstraint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoMassConstraint", ::RhoMassConstraint::Class_Version(), "RhoMassConstraint.h", 17,
                  typeid(::RhoMassConstraint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoMassConstraint::Dictionary, isa_proxy, 16,
                  sizeof(::RhoMassConstraint) );
      instance.SetNew(&new_RhoMassConstraint);
      instance.SetNewArray(&newArray_RhoMassConstraint);
      instance.SetDelete(&delete_RhoMassConstraint);
      instance.SetDeleteArray(&deleteArray_RhoMassConstraint);
      instance.SetDestructor(&destruct_RhoMassConstraint);
      instance.SetStreamerFunc(&streamer_RhoMassConstraint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoMassConstraint*)
   {
      return GenerateInitInstanceLocal((::RhoMassConstraint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoMassConstraint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RhoError(void *p);
   static void deleteArray_RhoError(void *p);
   static void destruct_RhoError(void *p);
   static void streamer_RhoError(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoError*)
   {
      ::RhoError *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoError >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoError", ::RhoError::Class_Version(), "RhoError.h", 34,
                  typeid(::RhoError), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoError::Dictionary, isa_proxy, 16,
                  sizeof(::RhoError) );
      instance.SetDelete(&delete_RhoError);
      instance.SetDeleteArray(&deleteArray_RhoError);
      instance.SetDestructor(&destruct_RhoError);
      instance.SetStreamerFunc(&streamer_RhoError);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoError*)
   {
      return GenerateInitInstanceLocal((::RhoError*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoError*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RhoVector3Err(void *p = 0);
   static void *newArray_RhoVector3Err(Long_t size, void *p);
   static void delete_RhoVector3Err(void *p);
   static void deleteArray_RhoVector3Err(void *p);
   static void destruct_RhoVector3Err(void *p);
   static void streamer_RhoVector3Err(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoVector3Err*)
   {
      ::RhoVector3Err *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoVector3Err >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoVector3Err", ::RhoVector3Err::Class_Version(), "RhoVector3Err.h", 20,
                  typeid(::RhoVector3Err), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoVector3Err::Dictionary, isa_proxy, 16,
                  sizeof(::RhoVector3Err) );
      instance.SetNew(&new_RhoVector3Err);
      instance.SetNewArray(&newArray_RhoVector3Err);
      instance.SetDelete(&delete_RhoVector3Err);
      instance.SetDeleteArray(&deleteArray_RhoVector3Err);
      instance.SetDestructor(&destruct_RhoVector3Err);
      instance.SetStreamerFunc(&streamer_RhoVector3Err);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoVector3Err*)
   {
      return GenerateInitInstanceLocal((::RhoVector3Err*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoVector3Err*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RhoPointingConstraint(void *p);
   static void deleteArray_RhoPointingConstraint(void *p);
   static void destruct_RhoPointingConstraint(void *p);
   static void streamer_RhoPointingConstraint(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoPointingConstraint*)
   {
      ::RhoPointingConstraint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoPointingConstraint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoPointingConstraint", ::RhoPointingConstraint::Class_Version(), "RhoPointingConstraint.h", 18,
                  typeid(::RhoPointingConstraint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoPointingConstraint::Dictionary, isa_proxy, 16,
                  sizeof(::RhoPointingConstraint) );
      instance.SetDelete(&delete_RhoPointingConstraint);
      instance.SetDeleteArray(&deleteArray_RhoPointingConstraint);
      instance.SetDestructor(&destruct_RhoPointingConstraint);
      instance.SetStreamerFunc(&streamer_RhoPointingConstraint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoPointingConstraint*)
   {
      return GenerateInitInstanceLocal((::RhoPointingConstraint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoPointingConstraint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RhoLorentzVectorErr(void *p = 0);
   static void *newArray_RhoLorentzVectorErr(Long_t size, void *p);
   static void delete_RhoLorentzVectorErr(void *p);
   static void deleteArray_RhoLorentzVectorErr(void *p);
   static void destruct_RhoLorentzVectorErr(void *p);
   static void streamer_RhoLorentzVectorErr(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoLorentzVectorErr*)
   {
      ::RhoLorentzVectorErr *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoLorentzVectorErr >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoLorentzVectorErr", ::RhoLorentzVectorErr::Class_Version(), "RhoLorentzVectorErr.h", 23,
                  typeid(::RhoLorentzVectorErr), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoLorentzVectorErr::Dictionary, isa_proxy, 16,
                  sizeof(::RhoLorentzVectorErr) );
      instance.SetNew(&new_RhoLorentzVectorErr);
      instance.SetNewArray(&newArray_RhoLorentzVectorErr);
      instance.SetDelete(&delete_RhoLorentzVectorErr);
      instance.SetDeleteArray(&deleteArray_RhoLorentzVectorErr);
      instance.SetDestructor(&destruct_RhoLorentzVectorErr);
      instance.SetStreamerFunc(&streamer_RhoLorentzVectorErr);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoLorentzVectorErr*)
   {
      return GenerateInitInstanceLocal((::RhoLorentzVectorErr*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoLorentzVectorErr*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RhoBeamConstraint(void *p);
   static void deleteArray_RhoBeamConstraint(void *p);
   static void destruct_RhoBeamConstraint(void *p);
   static void streamer_RhoBeamConstraint(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoBeamConstraint*)
   {
      ::RhoBeamConstraint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoBeamConstraint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoBeamConstraint", ::RhoBeamConstraint::Class_Version(), "RhoBeamConstraint.h", 18,
                  typeid(::RhoBeamConstraint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoBeamConstraint::Dictionary, isa_proxy, 16,
                  sizeof(::RhoBeamConstraint) );
      instance.SetDelete(&delete_RhoBeamConstraint);
      instance.SetDeleteArray(&deleteArray_RhoBeamConstraint);
      instance.SetDestructor(&destruct_RhoBeamConstraint);
      instance.SetStreamerFunc(&streamer_RhoBeamConstraint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoBeamConstraint*)
   {
      return GenerateInitInstanceLocal((::RhoBeamConstraint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoBeamConstraint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RhoCandList(void *p = 0);
   static void *newArray_RhoCandList(Long_t size, void *p);
   static void delete_RhoCandList(void *p);
   static void deleteArray_RhoCandList(void *p);
   static void destruct_RhoCandList(void *p);
   static void streamer_RhoCandList(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoCandList*)
   {
      ::RhoCandList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoCandList >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoCandList", ::RhoCandList::Class_Version(), "RhoCandList.h", 27,
                  typeid(::RhoCandList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoCandList::Dictionary, isa_proxy, 16,
                  sizeof(::RhoCandList) );
      instance.SetNew(&new_RhoCandList);
      instance.SetNewArray(&newArray_RhoCandList);
      instance.SetDelete(&delete_RhoCandList);
      instance.SetDeleteArray(&deleteArray_RhoCandList);
      instance.SetDestructor(&destruct_RhoCandList);
      instance.SetStreamerFunc(&streamer_RhoCandList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoCandList*)
   {
      return GenerateInitInstanceLocal((::RhoCandList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoCandList*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RhoCandidate(void *p = 0);
   static void *newArray_RhoCandidate(Long_t size, void *p);
   static void delete_RhoCandidate(void *p);
   static void deleteArray_RhoCandidate(void *p);
   static void destruct_RhoCandidate(void *p);
   static void streamer_RhoCandidate(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoCandidate*)
   {
      ::RhoCandidate *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoCandidate >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoCandidate", ::RhoCandidate::Class_Version(), "RhoCandidate.h", 44,
                  typeid(::RhoCandidate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoCandidate::Dictionary, isa_proxy, 16,
                  sizeof(::RhoCandidate) );
      instance.SetNew(&new_RhoCandidate);
      instance.SetNewArray(&newArray_RhoCandidate);
      instance.SetDelete(&delete_RhoCandidate);
      instance.SetDeleteArray(&deleteArray_RhoCandidate);
      instance.SetDestructor(&destruct_RhoCandidate);
      instance.SetStreamerFunc(&streamer_RhoCandidate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoCandidate*)
   {
      return GenerateInitInstanceLocal((::RhoCandidate*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoCandidate*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RhoEventShape(void *p = 0);
   static void *newArray_RhoEventShape(Long_t size, void *p);
   static void delete_RhoEventShape(void *p);
   static void deleteArray_RhoEventShape(void *p);
   static void destruct_RhoEventShape(void *p);
   static void streamer_RhoEventShape(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoEventShape*)
   {
      ::RhoEventShape *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoEventShape >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoEventShape", ::RhoEventShape::Class_Version(), "RhoEventShape.h", 14,
                  typeid(::RhoEventShape), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoEventShape::Dictionary, isa_proxy, 16,
                  sizeof(::RhoEventShape) );
      instance.SetNew(&new_RhoEventShape);
      instance.SetNewArray(&newArray_RhoEventShape);
      instance.SetDelete(&delete_RhoEventShape);
      instance.SetDeleteArray(&deleteArray_RhoEventShape);
      instance.SetDestructor(&destruct_RhoEventShape);
      instance.SetStreamerFunc(&streamer_RhoEventShape);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoEventShape*)
   {
      return GenerateInitInstanceLocal((::RhoEventShape*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoEventShape*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RhoEventInfo(void *p = 0);
   static void *newArray_RhoEventInfo(Long_t size, void *p);
   static void delete_RhoEventInfo(void *p);
   static void deleteArray_RhoEventInfo(void *p);
   static void destruct_RhoEventInfo(void *p);
   static void streamer_RhoEventInfo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoEventInfo*)
   {
      ::RhoEventInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoEventInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoEventInfo", ::RhoEventInfo::Class_Version(), "RhoEventInfo.h", 31,
                  typeid(::RhoEventInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoEventInfo::Dictionary, isa_proxy, 16,
                  sizeof(::RhoEventInfo) );
      instance.SetNew(&new_RhoEventInfo);
      instance.SetNewArray(&newArray_RhoEventInfo);
      instance.SetDelete(&delete_RhoEventInfo);
      instance.SetDeleteArray(&deleteArray_RhoEventInfo);
      instance.SetDestructor(&destruct_RhoEventInfo);
      instance.SetStreamerFunc(&streamer_RhoEventInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoEventInfo*)
   {
      return GenerateInitInstanceLocal((::RhoEventInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoEventInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RhoParticleSelectorBase(void *p);
   static void deleteArray_RhoParticleSelectorBase(void *p);
   static void destruct_RhoParticleSelectorBase(void *p);
   static void streamer_RhoParticleSelectorBase(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoParticleSelectorBase*)
   {
      ::RhoParticleSelectorBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoParticleSelectorBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoParticleSelectorBase", ::RhoParticleSelectorBase::Class_Version(), "RhoParticleSelectorBase.h", 27,
                  typeid(::RhoParticleSelectorBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoParticleSelectorBase::Dictionary, isa_proxy, 16,
                  sizeof(::RhoParticleSelectorBase) );
      instance.SetDelete(&delete_RhoParticleSelectorBase);
      instance.SetDeleteArray(&deleteArray_RhoParticleSelectorBase);
      instance.SetDestructor(&destruct_RhoParticleSelectorBase);
      instance.SetStreamerFunc(&streamer_RhoParticleSelectorBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoParticleSelectorBase*)
   {
      return GenerateInitInstanceLocal((::RhoParticleSelectorBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoParticleSelectorBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RhoGoodTrackSelector(void *p);
   static void deleteArray_RhoGoodTrackSelector(void *p);
   static void destruct_RhoGoodTrackSelector(void *p);
   static void streamer_RhoGoodTrackSelector(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoGoodTrackSelector*)
   {
      ::RhoGoodTrackSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoGoodTrackSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoGoodTrackSelector", ::RhoGoodTrackSelector::Class_Version(), "RhoGoodTrackSelector.h", 18,
                  typeid(::RhoGoodTrackSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoGoodTrackSelector::Dictionary, isa_proxy, 16,
                  sizeof(::RhoGoodTrackSelector) );
      instance.SetDelete(&delete_RhoGoodTrackSelector);
      instance.SetDeleteArray(&deleteArray_RhoGoodTrackSelector);
      instance.SetDestructor(&destruct_RhoGoodTrackSelector);
      instance.SetStreamerFunc(&streamer_RhoGoodTrackSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoGoodTrackSelector*)
   {
      return GenerateInitInstanceLocal((::RhoGoodTrackSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoGoodTrackSelector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RhoEventSelectorBase(void *p);
   static void deleteArray_RhoEventSelectorBase(void *p);
   static void destruct_RhoEventSelectorBase(void *p);
   static void streamer_RhoEventSelectorBase(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoEventSelectorBase*)
   {
      ::RhoEventSelectorBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoEventSelectorBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoEventSelectorBase", ::RhoEventSelectorBase::Class_Version(), "RhoEventSelectorBase.h", 30,
                  typeid(::RhoEventSelectorBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoEventSelectorBase::Dictionary, isa_proxy, 16,
                  sizeof(::RhoEventSelectorBase) );
      instance.SetDelete(&delete_RhoEventSelectorBase);
      instance.SetDeleteArray(&deleteArray_RhoEventSelectorBase);
      instance.SetDestructor(&destruct_RhoEventSelectorBase);
      instance.SetStreamerFunc(&streamer_RhoEventSelectorBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoEventSelectorBase*)
   {
      return GenerateInitInstanceLocal((::RhoEventSelectorBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoEventSelectorBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *RhoCalculationTools_Dictionary();
   static void RhoCalculationTools_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoCalculationTools*)
   {
      ::RhoCalculationTools *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RhoCalculationTools));
      static ::ROOT::TGenericClassInfo 
         instance("RhoCalculationTools", "RhoCalculationTools.h", 23,
                  typeid(::RhoCalculationTools), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RhoCalculationTools_Dictionary, isa_proxy, 0,
                  sizeof(::RhoCalculationTools) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoCalculationTools*)
   {
      return GenerateInitInstanceLocal((::RhoCalculationTools*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoCalculationTools*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RhoCalculationTools_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RhoCalculationTools*)0x0)->GetClass();
      RhoCalculationTools_TClassManip(theClass);
   return theClass;
   }

   static void RhoCalculationTools_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_RhoDoubleErr(void *p = 0);
   static void *newArray_RhoDoubleErr(Long_t size, void *p);
   static void delete_RhoDoubleErr(void *p);
   static void deleteArray_RhoDoubleErr(void *p);
   static void destruct_RhoDoubleErr(void *p);
   static void streamer_RhoDoubleErr(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoDoubleErr*)
   {
      ::RhoDoubleErr *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoDoubleErr >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoDoubleErr", ::RhoDoubleErr::Class_Version(), "RhoDoubleErr.h", 33,
                  typeid(::RhoDoubleErr), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoDoubleErr::Dictionary, isa_proxy, 16,
                  sizeof(::RhoDoubleErr) );
      instance.SetNew(&new_RhoDoubleErr);
      instance.SetNewArray(&newArray_RhoDoubleErr);
      instance.SetDelete(&delete_RhoDoubleErr);
      instance.SetDeleteArray(&deleteArray_RhoDoubleErr);
      instance.SetDestructor(&destruct_RhoDoubleErr);
      instance.SetStreamerFunc(&streamer_RhoDoubleErr);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoDoubleErr*)
   {
      return GenerateInitInstanceLocal((::RhoDoubleErr*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoDoubleErr*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RhoCandListIterator(void *p);
   static void deleteArray_RhoCandListIterator(void *p);
   static void destruct_RhoCandListIterator(void *p);
   static void streamer_RhoCandListIterator(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoCandListIterator*)
   {
      ::RhoCandListIterator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoCandListIterator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoCandListIterator", ::RhoCandListIterator::Class_Version(), "RhoCandListIterator.h", 21,
                  typeid(::RhoCandListIterator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoCandListIterator::Dictionary, isa_proxy, 16,
                  sizeof(::RhoCandListIterator) );
      instance.SetDelete(&delete_RhoCandListIterator);
      instance.SetDeleteArray(&deleteArray_RhoCandListIterator);
      instance.SetDestructor(&destruct_RhoCandListIterator);
      instance.SetStreamerFunc(&streamer_RhoCandListIterator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoCandListIterator*)
   {
      return GenerateInitInstanceLocal((::RhoCandListIterator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoCandListIterator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RhoFactory(void *p);
   static void deleteArray_RhoFactory(void *p);
   static void destruct_RhoFactory(void *p);
   static void streamer_RhoFactory(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoFactory*)
   {
      ::RhoFactory *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoFactory >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoFactory", ::RhoFactory::Class_Version(), "RhoFactory.h", 27,
                  typeid(::RhoFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoFactory::Dictionary, isa_proxy, 16,
                  sizeof(::RhoFactory) );
      instance.SetDelete(&delete_RhoFactory);
      instance.SetDeleteArray(&deleteArray_RhoFactory);
      instance.SetDestructor(&destruct_RhoFactory);
      instance.SetStreamerFunc(&streamer_RhoFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoFactory*)
   {
      return GenerateInitInstanceLocal((::RhoFactory*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoFactory*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void streamer_RhoPdtLoader(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoPdtLoader*)
   {
      ::RhoPdtLoader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoPdtLoader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoPdtLoader", ::RhoPdtLoader::Class_Version(), "RhoPdtLoader.h", 17,
                  typeid(::RhoPdtLoader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoPdtLoader::Dictionary, isa_proxy, 16,
                  sizeof(::RhoPdtLoader) );
      instance.SetStreamerFunc(&streamer_RhoPdtLoader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoPdtLoader*)
   {
      return GenerateInitInstanceLocal((::RhoPdtLoader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoPdtLoader*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RhoFitterBase(void *p = 0);
   static void *newArray_RhoFitterBase(Long_t size, void *p);
   static void delete_RhoFitterBase(void *p);
   static void deleteArray_RhoFitterBase(void *p);
   static void destruct_RhoFitterBase(void *p);
   static void streamer_RhoFitterBase(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoFitterBase*)
   {
      ::RhoFitterBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoFitterBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoFitterBase", ::RhoFitterBase::Class_Version(), "RhoFitterBase.h", 21,
                  typeid(::RhoFitterBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoFitterBase::Dictionary, isa_proxy, 16,
                  sizeof(::RhoFitterBase) );
      instance.SetNew(&new_RhoFitterBase);
      instance.SetNewArray(&newArray_RhoFitterBase);
      instance.SetDelete(&delete_RhoFitterBase);
      instance.SetDeleteArray(&deleteArray_RhoFitterBase);
      instance.SetDestructor(&destruct_RhoFitterBase);
      instance.SetStreamerFunc(&streamer_RhoFitterBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoFitterBase*)
   {
      return GenerateInitInstanceLocal((::RhoFitterBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoFitterBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RhoVertexSelectorBase(void *p);
   static void deleteArray_RhoVertexSelectorBase(void *p);
   static void destruct_RhoVertexSelectorBase(void *p);
   static void streamer_RhoVertexSelectorBase(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoVertexSelectorBase*)
   {
      ::RhoVertexSelectorBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoVertexSelectorBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoVertexSelectorBase", ::RhoVertexSelectorBase::Class_Version(), "RhoVertexSelectorBase.h", 23,
                  typeid(::RhoVertexSelectorBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoVertexSelectorBase::Dictionary, isa_proxy, 16,
                  sizeof(::RhoVertexSelectorBase) );
      instance.SetDelete(&delete_RhoVertexSelectorBase);
      instance.SetDeleteArray(&deleteArray_RhoVertexSelectorBase);
      instance.SetDestructor(&destruct_RhoVertexSelectorBase);
      instance.SetStreamerFunc(&streamer_RhoVertexSelectorBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoVertexSelectorBase*)
   {
      return GenerateInitInstanceLocal((::RhoVertexSelectorBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoVertexSelectorBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RhoChargedParticleSelector(void *p);
   static void deleteArray_RhoChargedParticleSelector(void *p);
   static void destruct_RhoChargedParticleSelector(void *p);
   static void streamer_RhoChargedParticleSelector(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoChargedParticleSelector*)
   {
      ::RhoChargedParticleSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoChargedParticleSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoChargedParticleSelector", ::RhoChargedParticleSelector::Class_Version(), "RhoChargedParticleSelector.h", 25,
                  typeid(::RhoChargedParticleSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoChargedParticleSelector::Dictionary, isa_proxy, 16,
                  sizeof(::RhoChargedParticleSelector) );
      instance.SetDelete(&delete_RhoChargedParticleSelector);
      instance.SetDeleteArray(&deleteArray_RhoChargedParticleSelector);
      instance.SetDestructor(&destruct_RhoChargedParticleSelector);
      instance.SetStreamerFunc(&streamer_RhoChargedParticleSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoChargedParticleSelector*)
   {
      return GenerateInitInstanceLocal((::RhoChargedParticleSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoChargedParticleSelector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RhoEnergyParticleSelector(void *p = 0);
   static void *newArray_RhoEnergyParticleSelector(Long_t size, void *p);
   static void delete_RhoEnergyParticleSelector(void *p);
   static void deleteArray_RhoEnergyParticleSelector(void *p);
   static void destruct_RhoEnergyParticleSelector(void *p);
   static void streamer_RhoEnergyParticleSelector(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoEnergyParticleSelector*)
   {
      ::RhoEnergyParticleSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoEnergyParticleSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoEnergyParticleSelector", ::RhoEnergyParticleSelector::Class_Version(), "RhoEnergyParticleSelector.h", 26,
                  typeid(::RhoEnergyParticleSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoEnergyParticleSelector::Dictionary, isa_proxy, 16,
                  sizeof(::RhoEnergyParticleSelector) );
      instance.SetNew(&new_RhoEnergyParticleSelector);
      instance.SetNewArray(&newArray_RhoEnergyParticleSelector);
      instance.SetDelete(&delete_RhoEnergyParticleSelector);
      instance.SetDeleteArray(&deleteArray_RhoEnergyParticleSelector);
      instance.SetDestructor(&destruct_RhoEnergyParticleSelector);
      instance.SetStreamerFunc(&streamer_RhoEnergyParticleSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoEnergyParticleSelector*)
   {
      return GenerateInitInstanceLocal((::RhoEnergyParticleSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoEnergyParticleSelector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RhoMassParticleSelector(void *p = 0);
   static void *newArray_RhoMassParticleSelector(Long_t size, void *p);
   static void delete_RhoMassParticleSelector(void *p);
   static void deleteArray_RhoMassParticleSelector(void *p);
   static void destruct_RhoMassParticleSelector(void *p);
   static void streamer_RhoMassParticleSelector(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoMassParticleSelector*)
   {
      ::RhoMassParticleSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoMassParticleSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoMassParticleSelector", ::RhoMassParticleSelector::Class_Version(), "RhoMassParticleSelector.h", 28,
                  typeid(::RhoMassParticleSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoMassParticleSelector::Dictionary, isa_proxy, 16,
                  sizeof(::RhoMassParticleSelector) );
      instance.SetNew(&new_RhoMassParticleSelector);
      instance.SetNewArray(&newArray_RhoMassParticleSelector);
      instance.SetDelete(&delete_RhoMassParticleSelector);
      instance.SetDeleteArray(&deleteArray_RhoMassParticleSelector);
      instance.SetDestructor(&destruct_RhoMassParticleSelector);
      instance.SetStreamerFunc(&streamer_RhoMassParticleSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoMassParticleSelector*)
   {
      return GenerateInitInstanceLocal((::RhoMassParticleSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoMassParticleSelector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RhoMinusParticleSelector(void *p = 0);
   static void *newArray_RhoMinusParticleSelector(Long_t size, void *p);
   static void delete_RhoMinusParticleSelector(void *p);
   static void deleteArray_RhoMinusParticleSelector(void *p);
   static void destruct_RhoMinusParticleSelector(void *p);
   static void streamer_RhoMinusParticleSelector(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoMinusParticleSelector*)
   {
      ::RhoMinusParticleSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoMinusParticleSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoMinusParticleSelector", ::RhoMinusParticleSelector::Class_Version(), "RhoMinusParticleSelector.h", 28,
                  typeid(::RhoMinusParticleSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoMinusParticleSelector::Dictionary, isa_proxy, 16,
                  sizeof(::RhoMinusParticleSelector) );
      instance.SetNew(&new_RhoMinusParticleSelector);
      instance.SetNewArray(&newArray_RhoMinusParticleSelector);
      instance.SetDelete(&delete_RhoMinusParticleSelector);
      instance.SetDeleteArray(&deleteArray_RhoMinusParticleSelector);
      instance.SetDestructor(&destruct_RhoMinusParticleSelector);
      instance.SetStreamerFunc(&streamer_RhoMinusParticleSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoMinusParticleSelector*)
   {
      return GenerateInitInstanceLocal((::RhoMinusParticleSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoMinusParticleSelector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RhoMomentumParticleSelector(void *p = 0);
   static void *newArray_RhoMomentumParticleSelector(Long_t size, void *p);
   static void delete_RhoMomentumParticleSelector(void *p);
   static void deleteArray_RhoMomentumParticleSelector(void *p);
   static void destruct_RhoMomentumParticleSelector(void *p);
   static void streamer_RhoMomentumParticleSelector(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoMomentumParticleSelector*)
   {
      ::RhoMomentumParticleSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoMomentumParticleSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoMomentumParticleSelector", ::RhoMomentumParticleSelector::Class_Version(), "RhoMomentumParticleSelector.h", 28,
                  typeid(::RhoMomentumParticleSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoMomentumParticleSelector::Dictionary, isa_proxy, 16,
                  sizeof(::RhoMomentumParticleSelector) );
      instance.SetNew(&new_RhoMomentumParticleSelector);
      instance.SetNewArray(&newArray_RhoMomentumParticleSelector);
      instance.SetDelete(&delete_RhoMomentumParticleSelector);
      instance.SetDeleteArray(&deleteArray_RhoMomentumParticleSelector);
      instance.SetDestructor(&destruct_RhoMomentumParticleSelector);
      instance.SetStreamerFunc(&streamer_RhoMomentumParticleSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoMomentumParticleSelector*)
   {
      return GenerateInitInstanceLocal((::RhoMomentumParticleSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoMomentumParticleSelector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RhoNeutralParticleSelector(void *p = 0);
   static void *newArray_RhoNeutralParticleSelector(Long_t size, void *p);
   static void delete_RhoNeutralParticleSelector(void *p);
   static void deleteArray_RhoNeutralParticleSelector(void *p);
   static void destruct_RhoNeutralParticleSelector(void *p);
   static void streamer_RhoNeutralParticleSelector(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoNeutralParticleSelector*)
   {
      ::RhoNeutralParticleSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoNeutralParticleSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoNeutralParticleSelector", ::RhoNeutralParticleSelector::Class_Version(), "RhoNeutralParticleSelector.h", 28,
                  typeid(::RhoNeutralParticleSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoNeutralParticleSelector::Dictionary, isa_proxy, 16,
                  sizeof(::RhoNeutralParticleSelector) );
      instance.SetNew(&new_RhoNeutralParticleSelector);
      instance.SetNewArray(&newArray_RhoNeutralParticleSelector);
      instance.SetDelete(&delete_RhoNeutralParticleSelector);
      instance.SetDeleteArray(&deleteArray_RhoNeutralParticleSelector);
      instance.SetDestructor(&destruct_RhoNeutralParticleSelector);
      instance.SetStreamerFunc(&streamer_RhoNeutralParticleSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoNeutralParticleSelector*)
   {
      return GenerateInitInstanceLocal((::RhoNeutralParticleSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoNeutralParticleSelector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RhoPlusParticleSelector(void *p = 0);
   static void *newArray_RhoPlusParticleSelector(Long_t size, void *p);
   static void delete_RhoPlusParticleSelector(void *p);
   static void deleteArray_RhoPlusParticleSelector(void *p);
   static void destruct_RhoPlusParticleSelector(void *p);
   static void streamer_RhoPlusParticleSelector(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoPlusParticleSelector*)
   {
      ::RhoPlusParticleSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoPlusParticleSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoPlusParticleSelector", ::RhoPlusParticleSelector::Class_Version(), "RhoPlusParticleSelector.h", 28,
                  typeid(::RhoPlusParticleSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoPlusParticleSelector::Dictionary, isa_proxy, 16,
                  sizeof(::RhoPlusParticleSelector) );
      instance.SetNew(&new_RhoPlusParticleSelector);
      instance.SetNewArray(&newArray_RhoPlusParticleSelector);
      instance.SetDelete(&delete_RhoPlusParticleSelector);
      instance.SetDeleteArray(&deleteArray_RhoPlusParticleSelector);
      instance.SetDestructor(&destruct_RhoPlusParticleSelector);
      instance.SetStreamerFunc(&streamer_RhoPlusParticleSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoPlusParticleSelector*)
   {
      return GenerateInitInstanceLocal((::RhoPlusParticleSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoPlusParticleSelector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RhoSimpleElectronSelector(void *p = 0);
   static void *newArray_RhoSimpleElectronSelector(Long_t size, void *p);
   static void delete_RhoSimpleElectronSelector(void *p);
   static void deleteArray_RhoSimpleElectronSelector(void *p);
   static void destruct_RhoSimpleElectronSelector(void *p);
   static void streamer_RhoSimpleElectronSelector(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoSimpleElectronSelector*)
   {
      ::RhoSimpleElectronSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoSimpleElectronSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoSimpleElectronSelector", ::RhoSimpleElectronSelector::Class_Version(), "RhoSimpleElectronSelector.h", 28,
                  typeid(::RhoSimpleElectronSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoSimpleElectronSelector::Dictionary, isa_proxy, 16,
                  sizeof(::RhoSimpleElectronSelector) );
      instance.SetNew(&new_RhoSimpleElectronSelector);
      instance.SetNewArray(&newArray_RhoSimpleElectronSelector);
      instance.SetDelete(&delete_RhoSimpleElectronSelector);
      instance.SetDeleteArray(&deleteArray_RhoSimpleElectronSelector);
      instance.SetDestructor(&destruct_RhoSimpleElectronSelector);
      instance.SetStreamerFunc(&streamer_RhoSimpleElectronSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoSimpleElectronSelector*)
   {
      return GenerateInitInstanceLocal((::RhoSimpleElectronSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoSimpleElectronSelector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RhoSimpleKaonSelector(void *p = 0);
   static void *newArray_RhoSimpleKaonSelector(Long_t size, void *p);
   static void delete_RhoSimpleKaonSelector(void *p);
   static void deleteArray_RhoSimpleKaonSelector(void *p);
   static void destruct_RhoSimpleKaonSelector(void *p);
   static void streamer_RhoSimpleKaonSelector(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoSimpleKaonSelector*)
   {
      ::RhoSimpleKaonSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoSimpleKaonSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoSimpleKaonSelector", ::RhoSimpleKaonSelector::Class_Version(), "RhoSimpleKaonSelector.h", 28,
                  typeid(::RhoSimpleKaonSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoSimpleKaonSelector::Dictionary, isa_proxy, 16,
                  sizeof(::RhoSimpleKaonSelector) );
      instance.SetNew(&new_RhoSimpleKaonSelector);
      instance.SetNewArray(&newArray_RhoSimpleKaonSelector);
      instance.SetDelete(&delete_RhoSimpleKaonSelector);
      instance.SetDeleteArray(&deleteArray_RhoSimpleKaonSelector);
      instance.SetDestructor(&destruct_RhoSimpleKaonSelector);
      instance.SetStreamerFunc(&streamer_RhoSimpleKaonSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoSimpleKaonSelector*)
   {
      return GenerateInitInstanceLocal((::RhoSimpleKaonSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoSimpleKaonSelector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RhoSimpleMuonSelector(void *p = 0);
   static void *newArray_RhoSimpleMuonSelector(Long_t size, void *p);
   static void delete_RhoSimpleMuonSelector(void *p);
   static void deleteArray_RhoSimpleMuonSelector(void *p);
   static void destruct_RhoSimpleMuonSelector(void *p);
   static void streamer_RhoSimpleMuonSelector(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoSimpleMuonSelector*)
   {
      ::RhoSimpleMuonSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoSimpleMuonSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoSimpleMuonSelector", ::RhoSimpleMuonSelector::Class_Version(), "RhoSimpleMuonSelector.h", 28,
                  typeid(::RhoSimpleMuonSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoSimpleMuonSelector::Dictionary, isa_proxy, 16,
                  sizeof(::RhoSimpleMuonSelector) );
      instance.SetNew(&new_RhoSimpleMuonSelector);
      instance.SetNewArray(&newArray_RhoSimpleMuonSelector);
      instance.SetDelete(&delete_RhoSimpleMuonSelector);
      instance.SetDeleteArray(&deleteArray_RhoSimpleMuonSelector);
      instance.SetDestructor(&destruct_RhoSimpleMuonSelector);
      instance.SetStreamerFunc(&streamer_RhoSimpleMuonSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoSimpleMuonSelector*)
   {
      return GenerateInitInstanceLocal((::RhoSimpleMuonSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoSimpleMuonSelector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RhoSimplePionSelector(void *p = 0);
   static void *newArray_RhoSimplePionSelector(Long_t size, void *p);
   static void delete_RhoSimplePionSelector(void *p);
   static void deleteArray_RhoSimplePionSelector(void *p);
   static void destruct_RhoSimplePionSelector(void *p);
   static void streamer_RhoSimplePionSelector(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoSimplePionSelector*)
   {
      ::RhoSimplePionSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoSimplePionSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoSimplePionSelector", ::RhoSimplePionSelector::Class_Version(), "RhoSimplePionSelector.h", 28,
                  typeid(::RhoSimplePionSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoSimplePionSelector::Dictionary, isa_proxy, 16,
                  sizeof(::RhoSimplePionSelector) );
      instance.SetNew(&new_RhoSimplePionSelector);
      instance.SetNewArray(&newArray_RhoSimplePionSelector);
      instance.SetDelete(&delete_RhoSimplePionSelector);
      instance.SetDeleteArray(&deleteArray_RhoSimplePionSelector);
      instance.SetDestructor(&destruct_RhoSimplePionSelector);
      instance.SetStreamerFunc(&streamer_RhoSimplePionSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoSimplePionSelector*)
   {
      return GenerateInitInstanceLocal((::RhoSimplePionSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoSimplePionSelector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RhoSimpleProtonSelector(void *p = 0);
   static void *newArray_RhoSimpleProtonSelector(Long_t size, void *p);
   static void delete_RhoSimpleProtonSelector(void *p);
   static void deleteArray_RhoSimpleProtonSelector(void *p);
   static void destruct_RhoSimpleProtonSelector(void *p);
   static void streamer_RhoSimpleProtonSelector(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoSimpleProtonSelector*)
   {
      ::RhoSimpleProtonSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoSimpleProtonSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoSimpleProtonSelector", ::RhoSimpleProtonSelector::Class_Version(), "RhoSimpleProtonSelector.h", 28,
                  typeid(::RhoSimpleProtonSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoSimpleProtonSelector::Dictionary, isa_proxy, 16,
                  sizeof(::RhoSimpleProtonSelector) );
      instance.SetNew(&new_RhoSimpleProtonSelector);
      instance.SetNewArray(&newArray_RhoSimpleProtonSelector);
      instance.SetDelete(&delete_RhoSimpleProtonSelector);
      instance.SetDeleteArray(&deleteArray_RhoSimpleProtonSelector);
      instance.SetDestructor(&destruct_RhoSimpleProtonSelector);
      instance.SetStreamerFunc(&streamer_RhoSimpleProtonSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoSimpleProtonSelector*)
   {
      return GenerateInitInstanceLocal((::RhoSimpleProtonSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoSimpleProtonSelector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RhoSimpleVertexSelector(void *p);
   static void deleteArray_RhoSimpleVertexSelector(void *p);
   static void destruct_RhoSimpleVertexSelector(void *p);
   static void streamer_RhoSimpleVertexSelector(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoSimpleVertexSelector*)
   {
      ::RhoSimpleVertexSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoSimpleVertexSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoSimpleVertexSelector", ::RhoSimpleVertexSelector::Class_Version(), "RhoSimpleVertexSelector.h", 25,
                  typeid(::RhoSimpleVertexSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoSimpleVertexSelector::Dictionary, isa_proxy, 16,
                  sizeof(::RhoSimpleVertexSelector) );
      instance.SetDelete(&delete_RhoSimpleVertexSelector);
      instance.SetDeleteArray(&deleteArray_RhoSimpleVertexSelector);
      instance.SetDestructor(&destruct_RhoSimpleVertexSelector);
      instance.SetStreamerFunc(&streamer_RhoSimpleVertexSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoSimpleVertexSelector*)
   {
      return GenerateInitInstanceLocal((::RhoSimpleVertexSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoSimpleVertexSelector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RhoGoodPhotonSelector(void *p);
   static void deleteArray_RhoGoodPhotonSelector(void *p);
   static void destruct_RhoGoodPhotonSelector(void *p);
   static void streamer_RhoGoodPhotonSelector(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoGoodPhotonSelector*)
   {
      ::RhoGoodPhotonSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoGoodPhotonSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoGoodPhotonSelector", ::RhoGoodPhotonSelector::Class_Version(), "RhoGoodPhotonSelector.h", 19,
                  typeid(::RhoGoodPhotonSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoGoodPhotonSelector::Dictionary, isa_proxy, 16,
                  sizeof(::RhoGoodPhotonSelector) );
      instance.SetDelete(&delete_RhoGoodPhotonSelector);
      instance.SetDeleteArray(&deleteArray_RhoGoodPhotonSelector);
      instance.SetDestructor(&destruct_RhoGoodPhotonSelector);
      instance.SetStreamerFunc(&streamer_RhoGoodPhotonSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoGoodPhotonSelector*)
   {
      return GenerateInitInstanceLocal((::RhoGoodPhotonSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoGoodPhotonSelector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RhoBooster(void *p = 0);
   static void *newArray_RhoBooster(Long_t size, void *p);
   static void delete_RhoBooster(void *p);
   static void deleteArray_RhoBooster(void *p);
   static void destruct_RhoBooster(void *p);
   static void streamer_RhoBooster(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoBooster*)
   {
      ::RhoBooster *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoBooster >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoBooster", ::RhoBooster::Class_Version(), "RhoBooster.h", 48,
                  typeid(::RhoBooster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoBooster::Dictionary, isa_proxy, 16,
                  sizeof(::RhoBooster) );
      instance.SetNew(&new_RhoBooster);
      instance.SetNewArray(&newArray_RhoBooster);
      instance.SetDelete(&delete_RhoBooster);
      instance.SetDeleteArray(&deleteArray_RhoBooster);
      instance.SetDestructor(&destruct_RhoBooster);
      instance.SetStreamerFunc(&streamer_RhoBooster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoBooster*)
   {
      return GenerateInitInstanceLocal((::RhoBooster*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoBooster*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RhoEventShapes(void *p);
   static void deleteArray_RhoEventShapes(void *p);
   static void destruct_RhoEventShapes(void *p);
   static void streamer_RhoEventShapes(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoEventShapes*)
   {
      ::RhoEventShapes *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoEventShapes >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoEventShapes", ::RhoEventShapes::Class_Version(), "RhoEventShapes.h", 24,
                  typeid(::RhoEventShapes), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoEventShapes::Dictionary, isa_proxy, 16,
                  sizeof(::RhoEventShapes) );
      instance.SetDelete(&delete_RhoEventShapes);
      instance.SetDeleteArray(&deleteArray_RhoEventShapes);
      instance.SetDestructor(&destruct_RhoEventShapes);
      instance.SetStreamerFunc(&streamer_RhoEventShapes);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoEventShapes*)
   {
      return GenerateInitInstanceLocal((::RhoEventShapes*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoEventShapes*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RhoFindOmittedParticle(void *p);
   static void deleteArray_RhoFindOmittedParticle(void *p);
   static void destruct_RhoFindOmittedParticle(void *p);
   static void streamer_RhoFindOmittedParticle(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoFindOmittedParticle*)
   {
      ::RhoFindOmittedParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoFindOmittedParticle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoFindOmittedParticle", ::RhoFindOmittedParticle::Class_Version(), "RhoFindOmittedParticle.h", 64,
                  typeid(::RhoFindOmittedParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoFindOmittedParticle::Dictionary, isa_proxy, 16,
                  sizeof(::RhoFindOmittedParticle) );
      instance.SetDelete(&delete_RhoFindOmittedParticle);
      instance.SetDeleteArray(&deleteArray_RhoFindOmittedParticle);
      instance.SetDestructor(&destruct_RhoFindOmittedParticle);
      instance.SetStreamerFunc(&streamer_RhoFindOmittedParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoFindOmittedParticle*)
   {
      return GenerateInitInstanceLocal((::RhoFindOmittedParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoFindOmittedParticle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RhoTotalMomentum(void *p);
   static void deleteArray_RhoTotalMomentum(void *p);
   static void destruct_RhoTotalMomentum(void *p);
   static void streamer_RhoTotalMomentum(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoTotalMomentum*)
   {
      ::RhoTotalMomentum *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoTotalMomentum >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoTotalMomentum", ::RhoTotalMomentum::Class_Version(), "RhoTotalMomentum.h", 37,
                  typeid(::RhoTotalMomentum), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoTotalMomentum::Dictionary, isa_proxy, 16,
                  sizeof(::RhoTotalMomentum) );
      instance.SetDelete(&delete_RhoTotalMomentum);
      instance.SetDeleteArray(&deleteArray_RhoTotalMomentum);
      instance.SetDestructor(&destruct_RhoTotalMomentum);
      instance.SetStreamerFunc(&streamer_RhoTotalMomentum);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoTotalMomentum*)
   {
      return GenerateInitInstanceLocal((::RhoTotalMomentum*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoTotalMomentum*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *RhoColumn_Dictionary();
   static void RhoColumn_TClassManip(TClass*);
   static void delete_RhoColumn(void *p);
   static void deleteArray_RhoColumn(void *p);
   static void destruct_RhoColumn(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoColumn*)
   {
      ::RhoColumn *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RhoColumn));
      static ::ROOT::TGenericClassInfo 
         instance("RhoColumn", "RhoColumn.h", 122,
                  typeid(::RhoColumn), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RhoColumn_Dictionary, isa_proxy, 0,
                  sizeof(::RhoColumn) );
      instance.SetDelete(&delete_RhoColumn);
      instance.SetDeleteArray(&deleteArray_RhoColumn);
      instance.SetDestructor(&destruct_RhoColumn);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoColumn*)
   {
      return GenerateInitInstanceLocal((::RhoColumn*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoColumn*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RhoColumn_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RhoColumn*)0x0)->GetClass();
      RhoColumn_TClassManip(theClass);
   return theClass;
   }

   static void RhoColumn_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_RhoTuple(void *p = 0);
   static void *newArray_RhoTuple(Long_t size, void *p);
   static void delete_RhoTuple(void *p);
   static void deleteArray_RhoTuple(void *p);
   static void destruct_RhoTuple(void *p);
   static void streamer_RhoTuple(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoTuple*)
   {
      ::RhoTuple *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoTuple >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoTuple", ::RhoTuple::Class_Version(), "RhoTuple.h", 48,
                  typeid(::RhoTuple), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoTuple::Dictionary, isa_proxy, 16,
                  sizeof(::RhoTuple) );
      instance.SetNew(&new_RhoTuple);
      instance.SetNewArray(&newArray_RhoTuple);
      instance.SetDelete(&delete_RhoTuple);
      instance.SetDeleteArray(&deleteArray_RhoTuple);
      instance.SetDestructor(&destruct_RhoTuple);
      instance.SetStreamerFunc(&streamer_RhoTuple);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoTuple*)
   {
      return GenerateInitInstanceLocal((::RhoTuple*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoTuple*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr RhoConstraint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoConstraint::Class_Name()
{
   return "RhoConstraint";
}

//______________________________________________________________________________
const char *RhoConstraint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoConstraint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoConstraint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoConstraint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoConstraint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoConstraint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoConstraint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoConstraint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoMassConstraint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoMassConstraint::Class_Name()
{
   return "RhoMassConstraint";
}

//______________________________________________________________________________
const char *RhoMassConstraint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoMassConstraint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoMassConstraint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoMassConstraint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoMassConstraint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoMassConstraint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoMassConstraint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoMassConstraint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoError::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoError::Class_Name()
{
   return "RhoError";
}

//______________________________________________________________________________
const char *RhoError::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoError*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoError::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoError*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoError::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoError*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoError::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoError*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoVector3Err::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoVector3Err::Class_Name()
{
   return "RhoVector3Err";
}

//______________________________________________________________________________
const char *RhoVector3Err::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoVector3Err*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoVector3Err::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoVector3Err*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoVector3Err::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoVector3Err*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoVector3Err::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoVector3Err*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoPointingConstraint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoPointingConstraint::Class_Name()
{
   return "RhoPointingConstraint";
}

//______________________________________________________________________________
const char *RhoPointingConstraint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoPointingConstraint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoPointingConstraint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoPointingConstraint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoPointingConstraint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoPointingConstraint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoPointingConstraint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoPointingConstraint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoLorentzVectorErr::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoLorentzVectorErr::Class_Name()
{
   return "RhoLorentzVectorErr";
}

//______________________________________________________________________________
const char *RhoLorentzVectorErr::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoLorentzVectorErr*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoLorentzVectorErr::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoLorentzVectorErr*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoLorentzVectorErr::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoLorentzVectorErr*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoLorentzVectorErr::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoLorentzVectorErr*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoBeamConstraint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoBeamConstraint::Class_Name()
{
   return "RhoBeamConstraint";
}

//______________________________________________________________________________
const char *RhoBeamConstraint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoBeamConstraint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoBeamConstraint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoBeamConstraint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoBeamConstraint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoBeamConstraint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoBeamConstraint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoBeamConstraint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoCandList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoCandList::Class_Name()
{
   return "RhoCandList";
}

//______________________________________________________________________________
const char *RhoCandList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoCandList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoCandList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoCandList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoCandList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoCandList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoCandList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoCandList*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoCandidate::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoCandidate::Class_Name()
{
   return "RhoCandidate";
}

//______________________________________________________________________________
const char *RhoCandidate::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoCandidate*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoCandidate::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoCandidate*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoCandidate::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoCandidate*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoCandidate::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoCandidate*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoEventShape::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoEventShape::Class_Name()
{
   return "RhoEventShape";
}

//______________________________________________________________________________
const char *RhoEventShape::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoEventShape*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoEventShape::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoEventShape*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoEventShape::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoEventShape*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoEventShape::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoEventShape*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoEventInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoEventInfo::Class_Name()
{
   return "RhoEventInfo";
}

//______________________________________________________________________________
const char *RhoEventInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoEventInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoEventInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoEventInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoEventInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoEventInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoEventInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoEventInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoParticleSelectorBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoParticleSelectorBase::Class_Name()
{
   return "RhoParticleSelectorBase";
}

//______________________________________________________________________________
const char *RhoParticleSelectorBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoParticleSelectorBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoParticleSelectorBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoParticleSelectorBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoParticleSelectorBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoParticleSelectorBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoParticleSelectorBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoParticleSelectorBase*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoGoodTrackSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoGoodTrackSelector::Class_Name()
{
   return "RhoGoodTrackSelector";
}

//______________________________________________________________________________
const char *RhoGoodTrackSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoGoodTrackSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoGoodTrackSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoGoodTrackSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoGoodTrackSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoGoodTrackSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoGoodTrackSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoGoodTrackSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoEventSelectorBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoEventSelectorBase::Class_Name()
{
   return "RhoEventSelectorBase";
}

//______________________________________________________________________________
const char *RhoEventSelectorBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoEventSelectorBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoEventSelectorBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoEventSelectorBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoEventSelectorBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoEventSelectorBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoEventSelectorBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoEventSelectorBase*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoDoubleErr::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoDoubleErr::Class_Name()
{
   return "RhoDoubleErr";
}

//______________________________________________________________________________
const char *RhoDoubleErr::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoDoubleErr*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoDoubleErr::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoDoubleErr*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoDoubleErr::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoDoubleErr*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoDoubleErr::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoDoubleErr*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoCandListIterator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoCandListIterator::Class_Name()
{
   return "RhoCandListIterator";
}

//______________________________________________________________________________
const char *RhoCandListIterator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoCandListIterator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoCandListIterator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoCandListIterator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoCandListIterator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoCandListIterator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoCandListIterator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoCandListIterator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoFactory::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoFactory::Class_Name()
{
   return "RhoFactory";
}

//______________________________________________________________________________
const char *RhoFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoFactory*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoFactory*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoFactory*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoFactory*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoPdtLoader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoPdtLoader::Class_Name()
{
   return "RhoPdtLoader";
}

//______________________________________________________________________________
const char *RhoPdtLoader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoPdtLoader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoPdtLoader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoPdtLoader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoPdtLoader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoPdtLoader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoPdtLoader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoPdtLoader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoFitterBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoFitterBase::Class_Name()
{
   return "RhoFitterBase";
}

//______________________________________________________________________________
const char *RhoFitterBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoFitterBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoFitterBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoFitterBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoFitterBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoFitterBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoFitterBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoFitterBase*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoVertexSelectorBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoVertexSelectorBase::Class_Name()
{
   return "RhoVertexSelectorBase";
}

//______________________________________________________________________________
const char *RhoVertexSelectorBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoVertexSelectorBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoVertexSelectorBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoVertexSelectorBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoVertexSelectorBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoVertexSelectorBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoVertexSelectorBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoVertexSelectorBase*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoChargedParticleSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoChargedParticleSelector::Class_Name()
{
   return "RhoChargedParticleSelector";
}

//______________________________________________________________________________
const char *RhoChargedParticleSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoChargedParticleSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoChargedParticleSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoChargedParticleSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoChargedParticleSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoChargedParticleSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoChargedParticleSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoChargedParticleSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoEnergyParticleSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoEnergyParticleSelector::Class_Name()
{
   return "RhoEnergyParticleSelector";
}

//______________________________________________________________________________
const char *RhoEnergyParticleSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoEnergyParticleSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoEnergyParticleSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoEnergyParticleSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoEnergyParticleSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoEnergyParticleSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoEnergyParticleSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoEnergyParticleSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoMassParticleSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoMassParticleSelector::Class_Name()
{
   return "RhoMassParticleSelector";
}

//______________________________________________________________________________
const char *RhoMassParticleSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoMassParticleSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoMassParticleSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoMassParticleSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoMassParticleSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoMassParticleSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoMassParticleSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoMassParticleSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoMinusParticleSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoMinusParticleSelector::Class_Name()
{
   return "RhoMinusParticleSelector";
}

//______________________________________________________________________________
const char *RhoMinusParticleSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoMinusParticleSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoMinusParticleSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoMinusParticleSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoMinusParticleSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoMinusParticleSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoMinusParticleSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoMinusParticleSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoMomentumParticleSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoMomentumParticleSelector::Class_Name()
{
   return "RhoMomentumParticleSelector";
}

//______________________________________________________________________________
const char *RhoMomentumParticleSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoMomentumParticleSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoMomentumParticleSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoMomentumParticleSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoMomentumParticleSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoMomentumParticleSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoMomentumParticleSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoMomentumParticleSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoNeutralParticleSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoNeutralParticleSelector::Class_Name()
{
   return "RhoNeutralParticleSelector";
}

//______________________________________________________________________________
const char *RhoNeutralParticleSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoNeutralParticleSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoNeutralParticleSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoNeutralParticleSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoNeutralParticleSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoNeutralParticleSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoNeutralParticleSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoNeutralParticleSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoPlusParticleSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoPlusParticleSelector::Class_Name()
{
   return "RhoPlusParticleSelector";
}

//______________________________________________________________________________
const char *RhoPlusParticleSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoPlusParticleSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoPlusParticleSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoPlusParticleSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoPlusParticleSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoPlusParticleSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoPlusParticleSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoPlusParticleSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoSimpleElectronSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoSimpleElectronSelector::Class_Name()
{
   return "RhoSimpleElectronSelector";
}

//______________________________________________________________________________
const char *RhoSimpleElectronSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoSimpleElectronSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoSimpleElectronSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoSimpleElectronSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoSimpleElectronSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoSimpleElectronSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoSimpleElectronSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoSimpleElectronSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoSimpleKaonSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoSimpleKaonSelector::Class_Name()
{
   return "RhoSimpleKaonSelector";
}

//______________________________________________________________________________
const char *RhoSimpleKaonSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoSimpleKaonSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoSimpleKaonSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoSimpleKaonSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoSimpleKaonSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoSimpleKaonSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoSimpleKaonSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoSimpleKaonSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoSimpleMuonSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoSimpleMuonSelector::Class_Name()
{
   return "RhoSimpleMuonSelector";
}

//______________________________________________________________________________
const char *RhoSimpleMuonSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoSimpleMuonSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoSimpleMuonSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoSimpleMuonSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoSimpleMuonSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoSimpleMuonSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoSimpleMuonSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoSimpleMuonSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoSimplePionSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoSimplePionSelector::Class_Name()
{
   return "RhoSimplePionSelector";
}

//______________________________________________________________________________
const char *RhoSimplePionSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoSimplePionSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoSimplePionSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoSimplePionSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoSimplePionSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoSimplePionSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoSimplePionSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoSimplePionSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoSimpleProtonSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoSimpleProtonSelector::Class_Name()
{
   return "RhoSimpleProtonSelector";
}

//______________________________________________________________________________
const char *RhoSimpleProtonSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoSimpleProtonSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoSimpleProtonSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoSimpleProtonSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoSimpleProtonSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoSimpleProtonSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoSimpleProtonSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoSimpleProtonSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoSimpleVertexSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoSimpleVertexSelector::Class_Name()
{
   return "RhoSimpleVertexSelector";
}

//______________________________________________________________________________
const char *RhoSimpleVertexSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoSimpleVertexSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoSimpleVertexSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoSimpleVertexSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoSimpleVertexSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoSimpleVertexSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoSimpleVertexSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoSimpleVertexSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoGoodPhotonSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoGoodPhotonSelector::Class_Name()
{
   return "RhoGoodPhotonSelector";
}

//______________________________________________________________________________
const char *RhoGoodPhotonSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoGoodPhotonSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoGoodPhotonSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoGoodPhotonSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoGoodPhotonSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoGoodPhotonSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoGoodPhotonSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoGoodPhotonSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoBooster::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoBooster::Class_Name()
{
   return "RhoBooster";
}

//______________________________________________________________________________
const char *RhoBooster::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoBooster*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoBooster::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoBooster*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoBooster::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoBooster*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoBooster::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoBooster*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoEventShapes::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoEventShapes::Class_Name()
{
   return "RhoEventShapes";
}

//______________________________________________________________________________
const char *RhoEventShapes::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoEventShapes*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoEventShapes::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoEventShapes*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoEventShapes::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoEventShapes*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoEventShapes::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoEventShapes*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoFindOmittedParticle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoFindOmittedParticle::Class_Name()
{
   return "RhoFindOmittedParticle";
}

//______________________________________________________________________________
const char *RhoFindOmittedParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoFindOmittedParticle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoFindOmittedParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoFindOmittedParticle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoFindOmittedParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoFindOmittedParticle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoFindOmittedParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoFindOmittedParticle*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoTotalMomentum::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoTotalMomentum::Class_Name()
{
   return "RhoTotalMomentum";
}

//______________________________________________________________________________
const char *RhoTotalMomentum::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoTotalMomentum*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoTotalMomentum::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoTotalMomentum*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoTotalMomentum::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoTotalMomentum*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoTotalMomentum::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoTotalMomentum*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoTuple::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoTuple::Class_Name()
{
   return "RhoTuple";
}

//______________________________________________________________________________
const char *RhoTuple::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoTuple*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoTuple::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoTuple*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoTuple::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoTuple*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoTuple::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoTuple*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void RhoConstraint::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoConstraint.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, RhoConstraint::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoConstraint::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RhoConstraint(void *p) {
      return  p ? new(p) ::RhoConstraint : new ::RhoConstraint;
   }
   static void *newArray_RhoConstraint(Long_t nElements, void *p) {
      return p ? new(p) ::RhoConstraint[nElements] : new ::RhoConstraint[nElements];
   }
   // Wrapper around operator delete
   static void delete_RhoConstraint(void *p) {
      delete ((::RhoConstraint*)p);
   }
   static void deleteArray_RhoConstraint(void *p) {
      delete [] ((::RhoConstraint*)p);
   }
   static void destruct_RhoConstraint(void *p) {
      typedef ::RhoConstraint current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoConstraint(TBuffer &buf, void *obj) {
      ((::RhoConstraint*)obj)->::RhoConstraint::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoConstraint

//______________________________________________________________________________
void RhoMassConstraint::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoMassConstraint.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      RhoConstraint::Streamer(R__b);
      R__b >> fMassConstraint;
      R__b.CheckByteCount(R__s, R__c, RhoMassConstraint::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoMassConstraint::IsA(), kTRUE);
      RhoConstraint::Streamer(R__b);
      R__b << fMassConstraint;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RhoMassConstraint(void *p) {
      return  p ? new(p) ::RhoMassConstraint : new ::RhoMassConstraint;
   }
   static void *newArray_RhoMassConstraint(Long_t nElements, void *p) {
      return p ? new(p) ::RhoMassConstraint[nElements] : new ::RhoMassConstraint[nElements];
   }
   // Wrapper around operator delete
   static void delete_RhoMassConstraint(void *p) {
      delete ((::RhoMassConstraint*)p);
   }
   static void deleteArray_RhoMassConstraint(void *p) {
      delete [] ((::RhoMassConstraint*)p);
   }
   static void destruct_RhoMassConstraint(void *p) {
      typedef ::RhoMassConstraint current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoMassConstraint(TBuffer &buf, void *obj) {
      ((::RhoMassConstraint*)obj)->::RhoMassConstraint::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoMassConstraint

//______________________________________________________________________________
void RhoError::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoError.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TMatrixT<double>::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, RhoError::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoError::IsA(), kTRUE);
      TMatrixT<double>::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RhoError(void *p) {
      delete ((::RhoError*)p);
   }
   static void deleteArray_RhoError(void *p) {
      delete [] ((::RhoError*)p);
   }
   static void destruct_RhoError(void *p) {
      typedef ::RhoError current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoError(TBuffer &buf, void *obj) {
      ((::RhoError*)obj)->::RhoError::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoError

//______________________________________________________________________________
void RhoVector3Err::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoVector3Err.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TVector3::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, RhoVector3Err::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoVector3Err::IsA(), kTRUE);
      TVector3::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RhoVector3Err(void *p) {
      return  p ? new(p) ::RhoVector3Err : new ::RhoVector3Err;
   }
   static void *newArray_RhoVector3Err(Long_t nElements, void *p) {
      return p ? new(p) ::RhoVector3Err[nElements] : new ::RhoVector3Err[nElements];
   }
   // Wrapper around operator delete
   static void delete_RhoVector3Err(void *p) {
      delete ((::RhoVector3Err*)p);
   }
   static void deleteArray_RhoVector3Err(void *p) {
      delete [] ((::RhoVector3Err*)p);
   }
   static void destruct_RhoVector3Err(void *p) {
      typedef ::RhoVector3Err current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoVector3Err(TBuffer &buf, void *obj) {
      ((::RhoVector3Err*)obj)->::RhoVector3Err::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoVector3Err

//______________________________________________________________________________
void RhoPointingConstraint::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoPointingConstraint.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      RhoConstraint::Streamer(R__b);
      fPointingConstraint.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, RhoPointingConstraint::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoPointingConstraint::IsA(), kTRUE);
      RhoConstraint::Streamer(R__b);
      fPointingConstraint.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RhoPointingConstraint(void *p) {
      delete ((::RhoPointingConstraint*)p);
   }
   static void deleteArray_RhoPointingConstraint(void *p) {
      delete [] ((::RhoPointingConstraint*)p);
   }
   static void destruct_RhoPointingConstraint(void *p) {
      typedef ::RhoPointingConstraint current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoPointingConstraint(TBuffer &buf, void *obj) {
      ((::RhoPointingConstraint*)obj)->::RhoPointingConstraint::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoPointingConstraint

//______________________________________________________________________________
void RhoLorentzVectorErr::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoLorentzVectorErr.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TLorentzVector::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, RhoLorentzVectorErr::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoLorentzVectorErr::IsA(), kTRUE);
      TLorentzVector::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RhoLorentzVectorErr(void *p) {
      return  p ? new(p) ::RhoLorentzVectorErr : new ::RhoLorentzVectorErr;
   }
   static void *newArray_RhoLorentzVectorErr(Long_t nElements, void *p) {
      return p ? new(p) ::RhoLorentzVectorErr[nElements] : new ::RhoLorentzVectorErr[nElements];
   }
   // Wrapper around operator delete
   static void delete_RhoLorentzVectorErr(void *p) {
      delete ((::RhoLorentzVectorErr*)p);
   }
   static void deleteArray_RhoLorentzVectorErr(void *p) {
      delete [] ((::RhoLorentzVectorErr*)p);
   }
   static void destruct_RhoLorentzVectorErr(void *p) {
      typedef ::RhoLorentzVectorErr current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoLorentzVectorErr(TBuffer &buf, void *obj) {
      ((::RhoLorentzVectorErr*)obj)->::RhoLorentzVectorErr::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoLorentzVectorErr

//______________________________________________________________________________
void RhoBeamConstraint::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoBeamConstraint.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      RhoConstraint::Streamer(R__b);
      fBeamConstraint.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, RhoBeamConstraint::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoBeamConstraint::IsA(), kTRUE);
      RhoConstraint::Streamer(R__b);
      fBeamConstraint.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RhoBeamConstraint(void *p) {
      delete ((::RhoBeamConstraint*)p);
   }
   static void deleteArray_RhoBeamConstraint(void *p) {
      delete [] ((::RhoBeamConstraint*)p);
   }
   static void destruct_RhoBeamConstraint(void *p) {
      typedef ::RhoBeamConstraint current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoBeamConstraint(TBuffer &buf, void *obj) {
      ((::RhoBeamConstraint*)obj)->::RhoBeamConstraint::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoBeamConstraint

//______________________________________________________________________________
void RhoCandList::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoCandList.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b >> fOwnList;
      R__b >> fFast;
      R__b.CheckByteCount(R__s, R__c, RhoCandList::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoCandList::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b << fOwnList;
      R__b << fFast;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RhoCandList(void *p) {
      return  p ? new(p) ::RhoCandList : new ::RhoCandList;
   }
   static void *newArray_RhoCandList(Long_t nElements, void *p) {
      return p ? new(p) ::RhoCandList[nElements] : new ::RhoCandList[nElements];
   }
   // Wrapper around operator delete
   static void delete_RhoCandList(void *p) {
      delete ((::RhoCandList*)p);
   }
   static void deleteArray_RhoCandList(void *p) {
      delete [] ((::RhoCandList*)p);
   }
   static void destruct_RhoCandList(void *p) {
      typedef ::RhoCandList current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoCandList(TBuffer &buf, void *obj) {
      ((::RhoCandList*)obj)->::RhoCandList::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoCandList

//______________________________________________________________________________
void RhoCandidate::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoCandidate.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairMultiLinkedData_Interface::Streamer(R__b);
      R__b >> fPdgCode;
      R__b >> fNDaug;
      R__b.ReadStaticArray((double*)fPidLH);
      R__b >> fChi2;
      R__b >> fCharge;
      R__b >> fXposition;
      R__b >> fYposition;
      R__b >> fZposition;
      R__b >> fXmomentum;
      R__b >> fYmomentum;
      R__b >> fZmomentum;
      R__b >> fEnergy;
      R__b.ReadStaticArray((float*)fErrP7);
      R__b.CheckByteCount(R__s, R__c, RhoCandidate::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoCandidate::IsA(), kTRUE);
      FairMultiLinkedData_Interface::Streamer(R__b);
      R__b << fPdgCode;
      R__b << fNDaug;
      R__b.WriteArray(fPidLH, 30);
      R__b << fChi2;
      R__b << fCharge;
      R__b << fXposition;
      R__b << fYposition;
      R__b << fZposition;
      R__b << fXmomentum;
      R__b << fYmomentum;
      R__b << fZmomentum;
      R__b << fEnergy;
      R__b.WriteArray(fErrP7, 28);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RhoCandidate(void *p) {
      return  p ? new(p) ::RhoCandidate : new ::RhoCandidate;
   }
   static void *newArray_RhoCandidate(Long_t nElements, void *p) {
      return p ? new(p) ::RhoCandidate[nElements] : new ::RhoCandidate[nElements];
   }
   // Wrapper around operator delete
   static void delete_RhoCandidate(void *p) {
      delete ((::RhoCandidate*)p);
   }
   static void deleteArray_RhoCandidate(void *p) {
      delete [] ((::RhoCandidate*)p);
   }
   static void destruct_RhoCandidate(void *p) {
      typedef ::RhoCandidate current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoCandidate(TBuffer &buf, void *obj) {
      ((::RhoCandidate*)obj)->::RhoCandidate::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoCandidate

//______________________________________________________________________________
void RhoEventShape::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoEventShape.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      fTot4Mom.Streamer(R__b);
      R__b >> fTotM;
      R__b >> fTotE;
      R__b >> fTotP;
      R__b >> fTotPt;
      R__b >> fTotAbsMom;
      R__b.CheckByteCount(R__s, R__c, RhoEventShape::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoEventShape::IsA(), kTRUE);
      TObject::Streamer(R__b);
      fTot4Mom.Streamer(R__b);
      R__b << fTotM;
      R__b << fTotE;
      R__b << fTotP;
      R__b << fTotPt;
      R__b << fTotAbsMom;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RhoEventShape(void *p) {
      return  p ? new(p) ::RhoEventShape : new ::RhoEventShape;
   }
   static void *newArray_RhoEventShape(Long_t nElements, void *p) {
      return p ? new(p) ::RhoEventShape[nElements] : new ::RhoEventShape[nElements];
   }
   // Wrapper around operator delete
   static void delete_RhoEventShape(void *p) {
      delete ((::RhoEventShape*)p);
   }
   static void deleteArray_RhoEventShape(void *p) {
      delete [] ((::RhoEventShape*)p);
   }
   static void destruct_RhoEventShape(void *p) {
      typedef ::RhoEventShape current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoEventShape(TBuffer &buf, void *obj) {
      ((::RhoEventShape*)obj)->::RhoEventShape::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoEventShape

//______________________________________________________________________________
void RhoEventInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoEventInfo.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, RhoEventInfo::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoEventInfo::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RhoEventInfo(void *p) {
      return  p ? new(p) ::RhoEventInfo : new ::RhoEventInfo;
   }
   static void *newArray_RhoEventInfo(Long_t nElements, void *p) {
      return p ? new(p) ::RhoEventInfo[nElements] : new ::RhoEventInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_RhoEventInfo(void *p) {
      delete ((::RhoEventInfo*)p);
   }
   static void deleteArray_RhoEventInfo(void *p) {
      delete [] ((::RhoEventInfo*)p);
   }
   static void destruct_RhoEventInfo(void *p) {
      typedef ::RhoEventInfo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoEventInfo(TBuffer &buf, void *obj) {
      ((::RhoEventInfo*)obj)->::RhoEventInfo::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoEventInfo

//______________________________________________________________________________
void RhoParticleSelectorBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoParticleSelectorBase.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, RhoParticleSelectorBase::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoParticleSelectorBase::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RhoParticleSelectorBase(void *p) {
      delete ((::RhoParticleSelectorBase*)p);
   }
   static void deleteArray_RhoParticleSelectorBase(void *p) {
      delete [] ((::RhoParticleSelectorBase*)p);
   }
   static void destruct_RhoParticleSelectorBase(void *p) {
      typedef ::RhoParticleSelectorBase current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoParticleSelectorBase(TBuffer &buf, void *obj) {
      ((::RhoParticleSelectorBase*)obj)->::RhoParticleSelectorBase::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoParticleSelectorBase

//______________________________________________________________________________
void RhoGoodTrackSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoGoodTrackSelector.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      RhoParticleSelectorBase::Streamer(R__b);
      R__b >> fPMin;
      R__b >> fPMax;
      R__b >> fPtMin;
      R__b >> fPtMax;
      R__b >> fChisqProbMin;
      R__b >> fChisqMax;
      R__b >> fDocaMax;
      R__b >> fZMin;
      R__b >> fZMax;
      R__b >> fCutFit;
      R__b >> fCutVtx;
      R__b >> fCutMom;
      R__b >> fCutPt;
      R__b.CheckByteCount(R__s, R__c, RhoGoodTrackSelector::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoGoodTrackSelector::IsA(), kTRUE);
      RhoParticleSelectorBase::Streamer(R__b);
      R__b << fPMin;
      R__b << fPMax;
      R__b << fPtMin;
      R__b << fPtMax;
      R__b << fChisqProbMin;
      R__b << fChisqMax;
      R__b << fDocaMax;
      R__b << fZMin;
      R__b << fZMax;
      R__b << fCutFit;
      R__b << fCutVtx;
      R__b << fCutMom;
      R__b << fCutPt;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RhoGoodTrackSelector(void *p) {
      delete ((::RhoGoodTrackSelector*)p);
   }
   static void deleteArray_RhoGoodTrackSelector(void *p) {
      delete [] ((::RhoGoodTrackSelector*)p);
   }
   static void destruct_RhoGoodTrackSelector(void *p) {
      typedef ::RhoGoodTrackSelector current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoGoodTrackSelector(TBuffer &buf, void *obj) {
      ((::RhoGoodTrackSelector*)obj)->::RhoGoodTrackSelector::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoGoodTrackSelector

//______________________________________________________________________________
void RhoEventSelectorBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoEventSelectorBase.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b >> fTight;
      R__b >> fNTracksMin;
      R__b >> fNTracksMax;
      R__b >> fTotChar;
      R__b >> fDocaMax;
      R__b >> fZMin;
      R__b >> fZMax;
      R__b >> fETotLow;
      R__b >> fETotHigh;
      R__b >> fPTotLow;
      R__b >> fPTotHigh;
      R__b >> fELow;
      R__b >> fEHigh;
      R__b >> fEmcLow;
      R__b >> fEmcHigh;
      R__b >> fPLow;
      R__b >> fPHigh;
      R__b >> fPtLow;
      R__b >> fPtHigh;
      R__b >> fThetaLow;
      R__b >> fThetaHigh;
      R__b >> fPhiLow;
      R__b >> fPhiHigh;
      R__b.CheckByteCount(R__s, R__c, RhoEventSelectorBase::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoEventSelectorBase::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b << fTight;
      R__b << fNTracksMin;
      R__b << fNTracksMax;
      R__b << fTotChar;
      R__b << fDocaMax;
      R__b << fZMin;
      R__b << fZMax;
      R__b << fETotLow;
      R__b << fETotHigh;
      R__b << fPTotLow;
      R__b << fPTotHigh;
      R__b << fELow;
      R__b << fEHigh;
      R__b << fEmcLow;
      R__b << fEmcHigh;
      R__b << fPLow;
      R__b << fPHigh;
      R__b << fPtLow;
      R__b << fPtHigh;
      R__b << fThetaLow;
      R__b << fThetaHigh;
      R__b << fPhiLow;
      R__b << fPhiHigh;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RhoEventSelectorBase(void *p) {
      delete ((::RhoEventSelectorBase*)p);
   }
   static void deleteArray_RhoEventSelectorBase(void *p) {
      delete [] ((::RhoEventSelectorBase*)p);
   }
   static void destruct_RhoEventSelectorBase(void *p) {
      typedef ::RhoEventSelectorBase current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoEventSelectorBase(TBuffer &buf, void *obj) {
      ((::RhoEventSelectorBase*)obj)->::RhoEventSelectorBase::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoEventSelectorBase

namespace ROOT {
} // end of namespace ROOT for class ::RhoCalculationTools

//______________________________________________________________________________
void RhoDoubleErr::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoDoubleErr.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> fValue;
      R__b >> fCovariance;
      R__b.CheckByteCount(R__s, R__c, RhoDoubleErr::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoDoubleErr::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << fValue;
      R__b << fCovariance;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RhoDoubleErr(void *p) {
      return  p ? new(p) ::RhoDoubleErr : new ::RhoDoubleErr;
   }
   static void *newArray_RhoDoubleErr(Long_t nElements, void *p) {
      return p ? new(p) ::RhoDoubleErr[nElements] : new ::RhoDoubleErr[nElements];
   }
   // Wrapper around operator delete
   static void delete_RhoDoubleErr(void *p) {
      delete ((::RhoDoubleErr*)p);
   }
   static void deleteArray_RhoDoubleErr(void *p) {
      delete [] ((::RhoDoubleErr*)p);
   }
   static void destruct_RhoDoubleErr(void *p) {
      typedef ::RhoDoubleErr current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoDoubleErr(TBuffer &buf, void *obj) {
      ((::RhoDoubleErr*)obj)->::RhoDoubleErr::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoDoubleErr

//______________________________________________________________________________
void RhoCandListIterator::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoCandListIterator.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, RhoCandListIterator::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoCandListIterator::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RhoCandListIterator(void *p) {
      delete ((::RhoCandListIterator*)p);
   }
   static void deleteArray_RhoCandListIterator(void *p) {
      delete [] ((::RhoCandListIterator*)p);
   }
   static void destruct_RhoCandListIterator(void *p) {
      typedef ::RhoCandListIterator current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoCandListIterator(TBuffer &buf, void *obj) {
      ((::RhoCandListIterator*)obj)->::RhoCandListIterator::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoCandListIterator

//______________________________________________________________________________
void RhoFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoFactory.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, RhoFactory::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoFactory::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RhoFactory(void *p) {
      delete ((::RhoFactory*)p);
   }
   static void deleteArray_RhoFactory(void *p) {
      delete [] ((::RhoFactory*)p);
   }
   static void destruct_RhoFactory(void *p) {
      typedef ::RhoFactory current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoFactory(TBuffer &buf, void *obj) {
      ((::RhoFactory*)obj)->::RhoFactory::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoFactory

//______________________________________________________________________________
void RhoPdtLoader::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoPdtLoader.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b.CheckByteCount(R__s, R__c, RhoPdtLoader::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoPdtLoader::IsA(), kTRUE);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around a custom streamer member function.
   static void streamer_RhoPdtLoader(TBuffer &buf, void *obj) {
      ((::RhoPdtLoader*)obj)->::RhoPdtLoader::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoPdtLoader

//______________________________________________________________________________
void RhoFitterBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoFitterBase.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> fVerbose;
      R__b >> fChiSquare;
      R__b >> fNDegreesOfFreedom;
      R__b.CheckByteCount(R__s, R__c, RhoFitterBase::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoFitterBase::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << fVerbose;
      R__b << fChiSquare;
      R__b << fNDegreesOfFreedom;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RhoFitterBase(void *p) {
      return  p ? new(p) ::RhoFitterBase : new ::RhoFitterBase;
   }
   static void *newArray_RhoFitterBase(Long_t nElements, void *p) {
      return p ? new(p) ::RhoFitterBase[nElements] : new ::RhoFitterBase[nElements];
   }
   // Wrapper around operator delete
   static void delete_RhoFitterBase(void *p) {
      delete ((::RhoFitterBase*)p);
   }
   static void deleteArray_RhoFitterBase(void *p) {
      delete [] ((::RhoFitterBase*)p);
   }
   static void destruct_RhoFitterBase(void *p) {
      typedef ::RhoFitterBase current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoFitterBase(TBuffer &buf, void *obj) {
      ((::RhoFitterBase*)obj)->::RhoFitterBase::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoFitterBase

//______________________________________________________________________________
void RhoVertexSelectorBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoVertexSelectorBase.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b >> fDoca;
      R__b >> fVtxip;
      R__b >> fRmin;
      R__b >> fRmax;
      R__b >> fActualR;
      R__b >> fActualVtxip;
      R__b >> fActualDoca;
      fVertex.Streamer(R__b);
      fPrimaryVertex.Streamer(R__b);
      fMomA.Streamer(R__b);
      fMomB.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, RhoVertexSelectorBase::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoVertexSelectorBase::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b << fDoca;
      R__b << fVtxip;
      R__b << fRmin;
      R__b << fRmax;
      R__b << fActualR;
      R__b << fActualVtxip;
      R__b << fActualDoca;
      fVertex.Streamer(R__b);
      fPrimaryVertex.Streamer(R__b);
      fMomA.Streamer(R__b);
      fMomB.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RhoVertexSelectorBase(void *p) {
      delete ((::RhoVertexSelectorBase*)p);
   }
   static void deleteArray_RhoVertexSelectorBase(void *p) {
      delete [] ((::RhoVertexSelectorBase*)p);
   }
   static void destruct_RhoVertexSelectorBase(void *p) {
      typedef ::RhoVertexSelectorBase current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoVertexSelectorBase(TBuffer &buf, void *obj) {
      ((::RhoVertexSelectorBase*)obj)->::RhoVertexSelectorBase::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoVertexSelectorBase

//______________________________________________________________________________
void RhoChargedParticleSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoChargedParticleSelector.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      RhoParticleSelectorBase::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, RhoChargedParticleSelector::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoChargedParticleSelector::IsA(), kTRUE);
      RhoParticleSelectorBase::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RhoChargedParticleSelector(void *p) {
      delete ((::RhoChargedParticleSelector*)p);
   }
   static void deleteArray_RhoChargedParticleSelector(void *p) {
      delete [] ((::RhoChargedParticleSelector*)p);
   }
   static void destruct_RhoChargedParticleSelector(void *p) {
      typedef ::RhoChargedParticleSelector current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoChargedParticleSelector(TBuffer &buf, void *obj) {
      ((::RhoChargedParticleSelector*)obj)->::RhoChargedParticleSelector::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoChargedParticleSelector

//______________________________________________________________________________
void RhoEnergyParticleSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoEnergyParticleSelector.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      RhoParticleSelectorBase::Streamer(R__b);
      R__b >> fCentralValue;
      R__b >> fWindow;
      R__b.CheckByteCount(R__s, R__c, RhoEnergyParticleSelector::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoEnergyParticleSelector::IsA(), kTRUE);
      RhoParticleSelectorBase::Streamer(R__b);
      R__b << fCentralValue;
      R__b << fWindow;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RhoEnergyParticleSelector(void *p) {
      return  p ? new(p) ::RhoEnergyParticleSelector : new ::RhoEnergyParticleSelector;
   }
   static void *newArray_RhoEnergyParticleSelector(Long_t nElements, void *p) {
      return p ? new(p) ::RhoEnergyParticleSelector[nElements] : new ::RhoEnergyParticleSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_RhoEnergyParticleSelector(void *p) {
      delete ((::RhoEnergyParticleSelector*)p);
   }
   static void deleteArray_RhoEnergyParticleSelector(void *p) {
      delete [] ((::RhoEnergyParticleSelector*)p);
   }
   static void destruct_RhoEnergyParticleSelector(void *p) {
      typedef ::RhoEnergyParticleSelector current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoEnergyParticleSelector(TBuffer &buf, void *obj) {
      ((::RhoEnergyParticleSelector*)obj)->::RhoEnergyParticleSelector::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoEnergyParticleSelector

//______________________________________________________________________________
void RhoMassParticleSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoMassParticleSelector.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      RhoParticleSelectorBase::Streamer(R__b);
      R__b >> fCentralValue;
      R__b >> fWindow;
      R__b.CheckByteCount(R__s, R__c, RhoMassParticleSelector::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoMassParticleSelector::IsA(), kTRUE);
      RhoParticleSelectorBase::Streamer(R__b);
      R__b << fCentralValue;
      R__b << fWindow;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RhoMassParticleSelector(void *p) {
      return  p ? new(p) ::RhoMassParticleSelector : new ::RhoMassParticleSelector;
   }
   static void *newArray_RhoMassParticleSelector(Long_t nElements, void *p) {
      return p ? new(p) ::RhoMassParticleSelector[nElements] : new ::RhoMassParticleSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_RhoMassParticleSelector(void *p) {
      delete ((::RhoMassParticleSelector*)p);
   }
   static void deleteArray_RhoMassParticleSelector(void *p) {
      delete [] ((::RhoMassParticleSelector*)p);
   }
   static void destruct_RhoMassParticleSelector(void *p) {
      typedef ::RhoMassParticleSelector current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoMassParticleSelector(TBuffer &buf, void *obj) {
      ((::RhoMassParticleSelector*)obj)->::RhoMassParticleSelector::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoMassParticleSelector

//______________________________________________________________________________
void RhoMinusParticleSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoMinusParticleSelector.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      RhoParticleSelectorBase::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, RhoMinusParticleSelector::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoMinusParticleSelector::IsA(), kTRUE);
      RhoParticleSelectorBase::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RhoMinusParticleSelector(void *p) {
      return  p ? new(p) ::RhoMinusParticleSelector : new ::RhoMinusParticleSelector;
   }
   static void *newArray_RhoMinusParticleSelector(Long_t nElements, void *p) {
      return p ? new(p) ::RhoMinusParticleSelector[nElements] : new ::RhoMinusParticleSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_RhoMinusParticleSelector(void *p) {
      delete ((::RhoMinusParticleSelector*)p);
   }
   static void deleteArray_RhoMinusParticleSelector(void *p) {
      delete [] ((::RhoMinusParticleSelector*)p);
   }
   static void destruct_RhoMinusParticleSelector(void *p) {
      typedef ::RhoMinusParticleSelector current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoMinusParticleSelector(TBuffer &buf, void *obj) {
      ((::RhoMinusParticleSelector*)obj)->::RhoMinusParticleSelector::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoMinusParticleSelector

//______________________________________________________________________________
void RhoMomentumParticleSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoMomentumParticleSelector.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      RhoParticleSelectorBase::Streamer(R__b);
      R__b >> fCentralValue;
      R__b >> fWindow;
      R__b.CheckByteCount(R__s, R__c, RhoMomentumParticleSelector::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoMomentumParticleSelector::IsA(), kTRUE);
      RhoParticleSelectorBase::Streamer(R__b);
      R__b << fCentralValue;
      R__b << fWindow;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RhoMomentumParticleSelector(void *p) {
      return  p ? new(p) ::RhoMomentumParticleSelector : new ::RhoMomentumParticleSelector;
   }
   static void *newArray_RhoMomentumParticleSelector(Long_t nElements, void *p) {
      return p ? new(p) ::RhoMomentumParticleSelector[nElements] : new ::RhoMomentumParticleSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_RhoMomentumParticleSelector(void *p) {
      delete ((::RhoMomentumParticleSelector*)p);
   }
   static void deleteArray_RhoMomentumParticleSelector(void *p) {
      delete [] ((::RhoMomentumParticleSelector*)p);
   }
   static void destruct_RhoMomentumParticleSelector(void *p) {
      typedef ::RhoMomentumParticleSelector current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoMomentumParticleSelector(TBuffer &buf, void *obj) {
      ((::RhoMomentumParticleSelector*)obj)->::RhoMomentumParticleSelector::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoMomentumParticleSelector

//______________________________________________________________________________
void RhoNeutralParticleSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoNeutralParticleSelector.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      RhoParticleSelectorBase::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, RhoNeutralParticleSelector::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoNeutralParticleSelector::IsA(), kTRUE);
      RhoParticleSelectorBase::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RhoNeutralParticleSelector(void *p) {
      return  p ? new(p) ::RhoNeutralParticleSelector : new ::RhoNeutralParticleSelector;
   }
   static void *newArray_RhoNeutralParticleSelector(Long_t nElements, void *p) {
      return p ? new(p) ::RhoNeutralParticleSelector[nElements] : new ::RhoNeutralParticleSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_RhoNeutralParticleSelector(void *p) {
      delete ((::RhoNeutralParticleSelector*)p);
   }
   static void deleteArray_RhoNeutralParticleSelector(void *p) {
      delete [] ((::RhoNeutralParticleSelector*)p);
   }
   static void destruct_RhoNeutralParticleSelector(void *p) {
      typedef ::RhoNeutralParticleSelector current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoNeutralParticleSelector(TBuffer &buf, void *obj) {
      ((::RhoNeutralParticleSelector*)obj)->::RhoNeutralParticleSelector::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoNeutralParticleSelector

//______________________________________________________________________________
void RhoPlusParticleSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoPlusParticleSelector.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      RhoParticleSelectorBase::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, RhoPlusParticleSelector::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoPlusParticleSelector::IsA(), kTRUE);
      RhoParticleSelectorBase::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RhoPlusParticleSelector(void *p) {
      return  p ? new(p) ::RhoPlusParticleSelector : new ::RhoPlusParticleSelector;
   }
   static void *newArray_RhoPlusParticleSelector(Long_t nElements, void *p) {
      return p ? new(p) ::RhoPlusParticleSelector[nElements] : new ::RhoPlusParticleSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_RhoPlusParticleSelector(void *p) {
      delete ((::RhoPlusParticleSelector*)p);
   }
   static void deleteArray_RhoPlusParticleSelector(void *p) {
      delete [] ((::RhoPlusParticleSelector*)p);
   }
   static void destruct_RhoPlusParticleSelector(void *p) {
      typedef ::RhoPlusParticleSelector current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoPlusParticleSelector(TBuffer &buf, void *obj) {
      ((::RhoPlusParticleSelector*)obj)->::RhoPlusParticleSelector::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoPlusParticleSelector

//______________________________________________________________________________
void RhoSimpleElectronSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoSimpleElectronSelector.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      RhoParticleSelectorBase::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, RhoSimpleElectronSelector::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoSimpleElectronSelector::IsA(), kTRUE);
      RhoParticleSelectorBase::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RhoSimpleElectronSelector(void *p) {
      return  p ? new(p) ::RhoSimpleElectronSelector : new ::RhoSimpleElectronSelector;
   }
   static void *newArray_RhoSimpleElectronSelector(Long_t nElements, void *p) {
      return p ? new(p) ::RhoSimpleElectronSelector[nElements] : new ::RhoSimpleElectronSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_RhoSimpleElectronSelector(void *p) {
      delete ((::RhoSimpleElectronSelector*)p);
   }
   static void deleteArray_RhoSimpleElectronSelector(void *p) {
      delete [] ((::RhoSimpleElectronSelector*)p);
   }
   static void destruct_RhoSimpleElectronSelector(void *p) {
      typedef ::RhoSimpleElectronSelector current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoSimpleElectronSelector(TBuffer &buf, void *obj) {
      ((::RhoSimpleElectronSelector*)obj)->::RhoSimpleElectronSelector::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoSimpleElectronSelector

//______________________________________________________________________________
void RhoSimpleKaonSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoSimpleKaonSelector.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      RhoParticleSelectorBase::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, RhoSimpleKaonSelector::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoSimpleKaonSelector::IsA(), kTRUE);
      RhoParticleSelectorBase::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RhoSimpleKaonSelector(void *p) {
      return  p ? new(p) ::RhoSimpleKaonSelector : new ::RhoSimpleKaonSelector;
   }
   static void *newArray_RhoSimpleKaonSelector(Long_t nElements, void *p) {
      return p ? new(p) ::RhoSimpleKaonSelector[nElements] : new ::RhoSimpleKaonSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_RhoSimpleKaonSelector(void *p) {
      delete ((::RhoSimpleKaonSelector*)p);
   }
   static void deleteArray_RhoSimpleKaonSelector(void *p) {
      delete [] ((::RhoSimpleKaonSelector*)p);
   }
   static void destruct_RhoSimpleKaonSelector(void *p) {
      typedef ::RhoSimpleKaonSelector current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoSimpleKaonSelector(TBuffer &buf, void *obj) {
      ((::RhoSimpleKaonSelector*)obj)->::RhoSimpleKaonSelector::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoSimpleKaonSelector

//______________________________________________________________________________
void RhoSimpleMuonSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoSimpleMuonSelector.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      RhoParticleSelectorBase::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, RhoSimpleMuonSelector::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoSimpleMuonSelector::IsA(), kTRUE);
      RhoParticleSelectorBase::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RhoSimpleMuonSelector(void *p) {
      return  p ? new(p) ::RhoSimpleMuonSelector : new ::RhoSimpleMuonSelector;
   }
   static void *newArray_RhoSimpleMuonSelector(Long_t nElements, void *p) {
      return p ? new(p) ::RhoSimpleMuonSelector[nElements] : new ::RhoSimpleMuonSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_RhoSimpleMuonSelector(void *p) {
      delete ((::RhoSimpleMuonSelector*)p);
   }
   static void deleteArray_RhoSimpleMuonSelector(void *p) {
      delete [] ((::RhoSimpleMuonSelector*)p);
   }
   static void destruct_RhoSimpleMuonSelector(void *p) {
      typedef ::RhoSimpleMuonSelector current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoSimpleMuonSelector(TBuffer &buf, void *obj) {
      ((::RhoSimpleMuonSelector*)obj)->::RhoSimpleMuonSelector::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoSimpleMuonSelector

//______________________________________________________________________________
void RhoSimplePionSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoSimplePionSelector.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      RhoParticleSelectorBase::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, RhoSimplePionSelector::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoSimplePionSelector::IsA(), kTRUE);
      RhoParticleSelectorBase::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RhoSimplePionSelector(void *p) {
      return  p ? new(p) ::RhoSimplePionSelector : new ::RhoSimplePionSelector;
   }
   static void *newArray_RhoSimplePionSelector(Long_t nElements, void *p) {
      return p ? new(p) ::RhoSimplePionSelector[nElements] : new ::RhoSimplePionSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_RhoSimplePionSelector(void *p) {
      delete ((::RhoSimplePionSelector*)p);
   }
   static void deleteArray_RhoSimplePionSelector(void *p) {
      delete [] ((::RhoSimplePionSelector*)p);
   }
   static void destruct_RhoSimplePionSelector(void *p) {
      typedef ::RhoSimplePionSelector current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoSimplePionSelector(TBuffer &buf, void *obj) {
      ((::RhoSimplePionSelector*)obj)->::RhoSimplePionSelector::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoSimplePionSelector

//______________________________________________________________________________
void RhoSimpleProtonSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoSimpleProtonSelector.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      RhoParticleSelectorBase::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, RhoSimpleProtonSelector::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoSimpleProtonSelector::IsA(), kTRUE);
      RhoParticleSelectorBase::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RhoSimpleProtonSelector(void *p) {
      return  p ? new(p) ::RhoSimpleProtonSelector : new ::RhoSimpleProtonSelector;
   }
   static void *newArray_RhoSimpleProtonSelector(Long_t nElements, void *p) {
      return p ? new(p) ::RhoSimpleProtonSelector[nElements] : new ::RhoSimpleProtonSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_RhoSimpleProtonSelector(void *p) {
      delete ((::RhoSimpleProtonSelector*)p);
   }
   static void deleteArray_RhoSimpleProtonSelector(void *p) {
      delete [] ((::RhoSimpleProtonSelector*)p);
   }
   static void destruct_RhoSimpleProtonSelector(void *p) {
      typedef ::RhoSimpleProtonSelector current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoSimpleProtonSelector(TBuffer &buf, void *obj) {
      ((::RhoSimpleProtonSelector*)obj)->::RhoSimpleProtonSelector::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoSimpleProtonSelector

//______________________________________________________________________________
void RhoSimpleVertexSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoSimpleVertexSelector.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      RhoVertexSelectorBase::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, RhoSimpleVertexSelector::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoSimpleVertexSelector::IsA(), kTRUE);
      RhoVertexSelectorBase::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RhoSimpleVertexSelector(void *p) {
      delete ((::RhoSimpleVertexSelector*)p);
   }
   static void deleteArray_RhoSimpleVertexSelector(void *p) {
      delete [] ((::RhoSimpleVertexSelector*)p);
   }
   static void destruct_RhoSimpleVertexSelector(void *p) {
      typedef ::RhoSimpleVertexSelector current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoSimpleVertexSelector(TBuffer &buf, void *obj) {
      ((::RhoSimpleVertexSelector*)obj)->::RhoSimpleVertexSelector::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoSimpleVertexSelector

//______________________________________________________________________________
void RhoGoodPhotonSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoGoodPhotonSelector.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      RhoParticleSelectorBase::Streamer(R__b);
      R__b >> fNcMin;
      R__b >> fNcMax;
      R__b >> fThetaMin;
      R__b >> fThetaMax;
      R__b >> fEmcMin;
      R__b >> fEmcMax;
      R__b.CheckByteCount(R__s, R__c, RhoGoodPhotonSelector::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoGoodPhotonSelector::IsA(), kTRUE);
      RhoParticleSelectorBase::Streamer(R__b);
      R__b << fNcMin;
      R__b << fNcMax;
      R__b << fThetaMin;
      R__b << fThetaMax;
      R__b << fEmcMin;
      R__b << fEmcMax;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RhoGoodPhotonSelector(void *p) {
      delete ((::RhoGoodPhotonSelector*)p);
   }
   static void deleteArray_RhoGoodPhotonSelector(void *p) {
      delete [] ((::RhoGoodPhotonSelector*)p);
   }
   static void destruct_RhoGoodPhotonSelector(void *p) {
      typedef ::RhoGoodPhotonSelector current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoGoodPhotonSelector(TBuffer &buf, void *obj) {
      ((::RhoGoodPhotonSelector*)obj)->::RhoGoodPhotonSelector::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoGoodPhotonSelector

//______________________________________________________________________________
void RhoBooster::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoBooster.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> fSaveCovMatrix;
      R__b.CheckByteCount(R__s, R__c, RhoBooster::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoBooster::IsA(), kTRUE);
      R__b << fSaveCovMatrix;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RhoBooster(void *p) {
      return  p ? new(p) ::RhoBooster : new ::RhoBooster;
   }
   static void *newArray_RhoBooster(Long_t nElements, void *p) {
      return p ? new(p) ::RhoBooster[nElements] : new ::RhoBooster[nElements];
   }
   // Wrapper around operator delete
   static void delete_RhoBooster(void *p) {
      delete ((::RhoBooster*)p);
   }
   static void deleteArray_RhoBooster(void *p) {
      delete [] ((::RhoBooster*)p);
   }
   static void destruct_RhoBooster(void *p) {
      typedef ::RhoBooster current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoBooster(TBuffer &buf, void *obj) {
      ((::RhoBooster*)obj)->::RhoBooster::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoBooster

//______________________________________________________________________________
void RhoEventShapes::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoEventShapes.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> fnChrg;
      R__b >> fnNeut;
      R__b >> fN;
      R__b >> fpmaxlab;
      R__b >> fpmaxcms;
      R__b >> fptmax;
      R__b >> fptsumlab;
      R__b >> fneutetsumlab;
      R__b >> fneutesumlab;
      R__b >> fchrgptsumlab;
      R__b >> fchrgpsumlab;
      R__b >> fptsumcms;
      R__b >> fneutetsumcms;
      R__b >> fneutesumcms;
      R__b >> fchrgptsumcms;
      R__b >> fchrgpsumcms;
      R__b >> fsph;
      R__b >> fapl;
      R__b >> fpla;
      R__b.ReadStaticArray((double*)fFWmom);
      R__b >> fFWready;
      R__b >> fthr;
      fThrVect.Streamer(R__b);
      fBoost.Streamer(R__b);
      R__b >> fNeutralOnly;
      R__b >> fChargedOnly;
      R__b.CheckByteCount(R__s, R__c, RhoEventShapes::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoEventShapes::IsA(), kTRUE);
      R__b << fnChrg;
      R__b << fnNeut;
      R__b << fN;
      R__b << fpmaxlab;
      R__b << fpmaxcms;
      R__b << fptmax;
      R__b << fptsumlab;
      R__b << fneutetsumlab;
      R__b << fneutesumlab;
      R__b << fchrgptsumlab;
      R__b << fchrgpsumlab;
      R__b << fptsumcms;
      R__b << fneutetsumcms;
      R__b << fneutesumcms;
      R__b << fchrgptsumcms;
      R__b << fchrgpsumcms;
      R__b << fsph;
      R__b << fapl;
      R__b << fpla;
      R__b.WriteArray(fFWmom, 6);
      R__b << fFWready;
      R__b << fthr;
      fThrVect.Streamer(R__b);
      fBoost.Streamer(R__b);
      R__b << fNeutralOnly;
      R__b << fChargedOnly;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RhoEventShapes(void *p) {
      delete ((::RhoEventShapes*)p);
   }
   static void deleteArray_RhoEventShapes(void *p) {
      delete [] ((::RhoEventShapes*)p);
   }
   static void destruct_RhoEventShapes(void *p) {
      typedef ::RhoEventShapes current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoEventShapes(TBuffer &buf, void *obj) {
      ((::RhoEventShapes*)obj)->::RhoEventShapes::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoEventShapes

//______________________________________________________________________________
void RhoFindOmittedParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoFindOmittedParticle.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, RhoFindOmittedParticle::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoFindOmittedParticle::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RhoFindOmittedParticle(void *p) {
      delete ((::RhoFindOmittedParticle*)p);
   }
   static void deleteArray_RhoFindOmittedParticle(void *p) {
      delete [] ((::RhoFindOmittedParticle*)p);
   }
   static void destruct_RhoFindOmittedParticle(void *p) {
      typedef ::RhoFindOmittedParticle current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoFindOmittedParticle(TBuffer &buf, void *obj) {
      ((::RhoFindOmittedParticle*)obj)->::RhoFindOmittedParticle::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoFindOmittedParticle

//______________________________________________________________________________
void RhoTotalMomentum::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoTotalMomentum.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, RhoTotalMomentum::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoTotalMomentum::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RhoTotalMomentum(void *p) {
      delete ((::RhoTotalMomentum*)p);
   }
   static void deleteArray_RhoTotalMomentum(void *p) {
      delete [] ((::RhoTotalMomentum*)p);
   }
   static void destruct_RhoTotalMomentum(void *p) {
      typedef ::RhoTotalMomentum current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoTotalMomentum(TBuffer &buf, void *obj) {
      ((::RhoTotalMomentum*)obj)->::RhoTotalMomentum::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoTotalMomentum

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RhoColumn(void *p) {
      delete ((::RhoColumn*)p);
   }
   static void deleteArray_RhoColumn(void *p) {
      delete [] ((::RhoColumn*)p);
   }
   static void destruct_RhoColumn(void *p) {
      typedef ::RhoColumn current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RhoColumn

//______________________________________________________________________________
void RhoTuple::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoTuple.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, RhoTuple::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoTuple::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RhoTuple(void *p) {
      return  p ? new(p) ::RhoTuple : new ::RhoTuple;
   }
   static void *newArray_RhoTuple(Long_t nElements, void *p) {
      return p ? new(p) ::RhoTuple[nElements] : new ::RhoTuple[nElements];
   }
   // Wrapper around operator delete
   static void delete_RhoTuple(void *p) {
      delete ((::RhoTuple*)p);
   }
   static void deleteArray_RhoTuple(void *p) {
      delete [] ((::RhoTuple*)p);
   }
   static void destruct_RhoTuple(void *p) {
      typedef ::RhoTuple current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoTuple(TBuffer &buf, void *obj) {
      ((::RhoTuple*)obj)->::RhoTuple::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoTuple

namespace {
  void TriggerDictionaryInitialization_G__RhoDict_Impl() {
    static const char* headers[] = {
"RhoConstraints/RhoMassConstraint.h",
"RhoConstraints/RhoPointingConstraint.h",
"RhoConstraints/RhoBeamConstraint.h",
"RhoBase/RhoEventSelectorBase.h",
"RhoTools/RhoCalculationTools.h",
"RhoMath/RhoDoubleErr.h",
"RhoMath/RhoError.h",
"RhoMath/RhoLorentzVectorErr.h",
"RhoMath/RhoVector3Err.h",
"RhoBase/RhoCandidate.h",
"RhoBase/RhoCandList.h",
"RhoBase/RhoCandListIterator.h",
"RhoBase/RhoEventInfo.h",
"RhoBase/RhoFactory.h",
"RhoTools/RhoPdtLoader.h",
"RhoBase/RhoFitterBase.h",
"RhoBase/RhoParticleSelectorBase.h",
"RhoBase/RhoVertexSelectorBase.h",
"RhoSelector/RhoChargedParticleSelector.h",
"RhoSelector/RhoEnergyParticleSelector.h",
"RhoSelector/RhoMassParticleSelector.h",
"RhoSelector/RhoMinusParticleSelector.h",
"RhoSelector/RhoMomentumParticleSelector.h",
"RhoSelector/RhoNeutralParticleSelector.h",
"RhoSelector/RhoPlusParticleSelector.h",
"RhoSelector/RhoSimpleElectronSelector.h",
"RhoSelector/RhoSimpleKaonSelector.h",
"RhoSelector/RhoSimpleMuonSelector.h",
"RhoSelector/RhoSimplePionSelector.h",
"RhoSelector/RhoSimpleProtonSelector.h",
"RhoSelector/RhoSimpleVertexSelector.h",
"RhoSelector/RhoSimpleVertexSelector.h",
"RhoSelector/RhoGoodPhotonSelector.h",
"RhoSelector/RhoGoodTrackSelector.h",
"RhoTools/RhoBooster.h",
"RhoBase/RhoEventShape.h",
"RhoTools/RhoEventShapes.h",
"RhoTools/RhoFindOmittedParticle.h",
"RhoTools/RhoTotalMomentum.h",
"RhoHistogram/RhoColumn.h",
"RhoHistogram/RhoTuple.h",
"RhoBase/RhoConstraint.h",
0
    };
    static const char* includePaths[] = {
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/field",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/ChnsData",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/ChnsData/PidData",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/RhoBase",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/RhoMath",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/RhoFitter",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/RhoSelector",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/RhoConstraints",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/RhoTools",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/RhoHistogram",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/base",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/base/steer",
"/home/eicc/software/FairSoft/install/include/root",
"/home/eicc/software/FairSoft/install/include",
"/home/eicc/FairRoot/build_18.4.2/include",
"/home/eicc/software/FairSoft/install/include/root",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/build/rho/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__RhoDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$RhoConstraint.h")))  __attribute__((annotate("$clingAutoload$RhoConstraints/RhoMassConstraint.h")))  RhoConstraint;
class __attribute__((annotate("$clingAutoload$RhoConstraints/RhoMassConstraint.h")))  RhoMassConstraint;
class __attribute__((annotate(R"ATTRDUMP(Wrapper class for a covariance matrix)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoError.h")))  __attribute__((annotate("$clingAutoload$RhoConstraints/RhoPointingConstraint.h")))  RhoError;
class __attribute__((annotate(R"ATTRDUMP(Add errors to a vector)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoVector3Err.h")))  __attribute__((annotate("$clingAutoload$RhoConstraints/RhoPointingConstraint.h")))  RhoVector3Err;
class __attribute__((annotate("$clingAutoload$RhoConstraints/RhoPointingConstraint.h")))  RhoPointingConstraint;
class __attribute__((annotate(R"ATTRDUMP(Add errors to a LorentzVector)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoLorentzVectorErr.h")))  __attribute__((annotate("$clingAutoload$RhoConstraints/RhoBeamConstraint.h")))  RhoLorentzVectorErr;
class __attribute__((annotate("$clingAutoload$RhoConstraints/RhoBeamConstraint.h")))  RhoBeamConstraint;
class __attribute__((annotate(R"ATTRDUMP(Container for RhoCandidates)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoBase/RhoCandList.h")))  __attribute__((annotate("$clingAutoload$RhoBase/RhoEventSelectorBase.h")))  RhoCandList;
class __attribute__((annotate(R"ATTRDUMP(Candidate base class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoBase/RhoCandidate.h")))  __attribute__((annotate("$clingAutoload$RhoBase/RhoEventSelectorBase.h")))  RhoCandidate;
class __attribute__((annotate(R"ATTRDUMP(Calculate event shape variables)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoBase/RhoEventShape.h")))  __attribute__((annotate("$clingAutoload$RhoBase/RhoEventSelectorBase.h")))  RhoEventShape;
class __attribute__((annotate(R"ATTRDUMP(Summary information in the event)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoBase/RhoEventInfo.h")))  __attribute__((annotate("$clingAutoload$RhoBase/RhoEventSelectorBase.h")))  RhoEventInfo;
class __attribute__((annotate(R"ATTRDUMP(Particle Selector base class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoBase/RhoParticleSelectorBase.h")))  __attribute__((annotate("$clingAutoload$RhoBase/RhoEventSelectorBase.h")))  RhoParticleSelectorBase;
class __attribute__((annotate(R"ATTRDUMP(Track selector)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoSelector/RhoGoodTrackSelector.h")))  __attribute__((annotate("$clingAutoload$RhoBase/RhoEventSelectorBase.h")))  RhoGoodTrackSelector;
class __attribute__((annotate(R"ATTRDUMP(Event Selector base class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoBase/RhoEventSelectorBase.h")))  RhoEventSelectorBase;
class __attribute__((annotate("$clingAutoload$RhoTools/RhoCalculationTools.h")))  RhoCalculationTools;
class __attribute__((annotate(R"ATTRDUMP(holds a Double_t and its error squared)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoMath/RhoDoubleErr.h")))  RhoDoubleErr;
class __attribute__((annotate(R"ATTRDUMP(Iterator for RhoCandList)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoBase/RhoCandListIterator.h")))  RhoCandListIterator;
class __attribute__((annotate(R"ATTRDUMP(Factory for candidates and vertices)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoBase/RhoFactory.h")))  RhoFactory;
class __attribute__((annotate(R"ATTRDUMP(EvtGen Particle Data Table)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoTools/RhoPdtLoader.h")))  RhoPdtLoader;
class __attribute__((annotate(R"ATTRDUMP(Base class for fitters)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoBase/RhoFitterBase.h")))  RhoFitterBase;
class __attribute__((annotate(R"ATTRDUMP(Vertexing base class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoBase/RhoVertexSelectorBase.h")))  RhoVertexSelectorBase;
class __attribute__((annotate(R"ATTRDUMP(Charged particle selector)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoSelector/RhoChargedParticleSelector.h")))  RhoChargedParticleSelector;
class __attribute__((annotate(R"ATTRDUMP(Particle selector (Energy window))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoSelector/RhoEnergyParticleSelector.h")))  RhoEnergyParticleSelector;
class __attribute__((annotate(R"ATTRDUMP(Particle selector (Mass window))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoSelector/RhoMassParticleSelector.h")))  RhoMassParticleSelector;
class __attribute__((annotate(R"ATTRDUMP(Negative particle selector)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoSelector/RhoMinusParticleSelector.h")))  RhoMinusParticleSelector;
class __attribute__((annotate(R"ATTRDUMP(Particle selector (Momentum window))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoSelector/RhoMomentumParticleSelector.h")))  RhoMomentumParticleSelector;
class __attribute__((annotate(R"ATTRDUMP(Neutral particle selector)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoSelector/RhoNeutralParticleSelector.h")))  RhoNeutralParticleSelector;
class __attribute__((annotate(R"ATTRDUMP(Positive particle selector)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoSelector/RhoPlusParticleSelector.h")))  RhoPlusParticleSelector;
class __attribute__((annotate(R"ATTRDUMP(Particle selector (Electrons))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoSelector/RhoSimpleElectronSelector.h")))  RhoSimpleElectronSelector;
class __attribute__((annotate(R"ATTRDUMP(Particle selector (Kaons))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoSelector/RhoSimpleKaonSelector.h")))  RhoSimpleKaonSelector;
class __attribute__((annotate(R"ATTRDUMP(Particle selector (Muons))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoSelector/RhoSimpleMuonSelector.h")))  RhoSimpleMuonSelector;
class __attribute__((annotate(R"ATTRDUMP(Particle selector (Pions))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoSelector/RhoSimplePionSelector.h")))  RhoSimplePionSelector;
class __attribute__((annotate(R"ATTRDUMP(Particle selector (Protons))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoSelector/RhoSimpleProtonSelector.h")))  RhoSimpleProtonSelector;
class __attribute__((annotate(R"ATTRDUMP(Simple vertex selector)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoSelector/RhoSimpleVertexSelector.h")))  RhoSimpleVertexSelector;
class __attribute__((annotate(R"ATTRDUMP(Track selector)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoSelector/RhoGoodPhotonSelector.h")))  RhoGoodPhotonSelector;
class __attribute__((annotate(R"ATTRDUMP(Boost RhoCandidate from and to CMS)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoTools/RhoBooster.h")))  RhoBooster;
class __attribute__((annotate("$clingAutoload$RhoTools/RhoEventShapes.h")))  RhoEventShapes;
class __attribute__((annotate(R"ATTRDUMP(Finds the best candidate for the K0L 4-momentum)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoTools/RhoFindOmittedParticle.h")))  RhoFindOmittedParticle;
class __attribute__((annotate(R"ATTRDUMP(A simple object to calculate the total 4 momentum in an event)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoTools/RhoTotalMomentum.h")))  RhoTotalMomentum;
class __attribute__((annotate("$clingAutoload$RhoHistogram/RhoColumn.h")))  RhoColumn;
class __attribute__((annotate(R"ATTRDUMP(NTuple)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoHistogram/RhoTuple.h")))  RhoTuple;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__RhoDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "RhoConstraints/RhoMassConstraint.h"
#include "RhoConstraints/RhoPointingConstraint.h"
#include "RhoConstraints/RhoBeamConstraint.h"
#include "RhoBase/RhoEventSelectorBase.h"
#include "RhoTools/RhoCalculationTools.h"
#include "RhoMath/RhoDoubleErr.h"
#include "RhoMath/RhoError.h"
#include "RhoMath/RhoLorentzVectorErr.h"
#include "RhoMath/RhoVector3Err.h"
#include "RhoBase/RhoCandidate.h"
#include "RhoBase/RhoCandList.h"
#include "RhoBase/RhoCandListIterator.h"
#include "RhoBase/RhoEventInfo.h"
#include "RhoBase/RhoFactory.h"
#include "RhoTools/RhoPdtLoader.h"
#include "RhoBase/RhoFitterBase.h"
#include "RhoBase/RhoParticleSelectorBase.h"
#include "RhoBase/RhoVertexSelectorBase.h"
#include "RhoSelector/RhoChargedParticleSelector.h"
#include "RhoSelector/RhoEnergyParticleSelector.h"
#include "RhoSelector/RhoMassParticleSelector.h"
#include "RhoSelector/RhoMinusParticleSelector.h"
#include "RhoSelector/RhoMomentumParticleSelector.h"
#include "RhoSelector/RhoNeutralParticleSelector.h"
#include "RhoSelector/RhoPlusParticleSelector.h"
#include "RhoSelector/RhoSimpleElectronSelector.h"
#include "RhoSelector/RhoSimpleKaonSelector.h"
#include "RhoSelector/RhoSimpleMuonSelector.h"
#include "RhoSelector/RhoSimplePionSelector.h"
#include "RhoSelector/RhoSimpleProtonSelector.h"
#include "RhoSelector/RhoSimpleVertexSelector.h"
#include "RhoSelector/RhoSimpleVertexSelector.h"
#include "RhoSelector/RhoGoodPhotonSelector.h"
#include "RhoSelector/RhoGoodTrackSelector.h"
#include "RhoTools/RhoBooster.h"
#include "RhoBase/RhoEventShape.h"
#include "RhoTools/RhoEventShapes.h"
#include "RhoTools/RhoFindOmittedParticle.h"
#include "RhoTools/RhoTotalMomentum.h"
#include "RhoHistogram/RhoColumn.h"
#include "RhoHistogram/RhoTuple.h"
#include "RhoBase/RhoConstraint.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"RhoBeamConstraint", payloadCode, "@",
"RhoBooster", payloadCode, "@",
"RhoCalculationTools", payloadCode, "@",
"RhoCandList", payloadCode, "@",
"RhoCandListIterator", payloadCode, "@",
"RhoCandidate", payloadCode, "@",
"RhoChargedParticleSelector", payloadCode, "@",
"RhoColumn", payloadCode, "@",
"RhoConstraint", payloadCode, "@",
"RhoDoubleErr", payloadCode, "@",
"RhoEnergyParticleSelector", payloadCode, "@",
"RhoError", payloadCode, "@",
"RhoEventInfo", payloadCode, "@",
"RhoEventSelectorBase", payloadCode, "@",
"RhoEventShape", payloadCode, "@",
"RhoEventShapes", payloadCode, "@",
"RhoFactory", payloadCode, "@",
"RhoFindOmittedParticle", payloadCode, "@",
"RhoFitterBase", payloadCode, "@",
"RhoGoodPhotonSelector", payloadCode, "@",
"RhoGoodTrackSelector", payloadCode, "@",
"RhoLorentzVectorErr", payloadCode, "@",
"RhoMassConstraint", payloadCode, "@",
"RhoMassParticleSelector", payloadCode, "@",
"RhoMinusParticleSelector", payloadCode, "@",
"RhoMomentumParticleSelector", payloadCode, "@",
"RhoNeutralParticleSelector", payloadCode, "@",
"RhoParticleSelectorBase", payloadCode, "@",
"RhoPdtLoader", payloadCode, "@",
"RhoPlusParticleSelector", payloadCode, "@",
"RhoPointingConstraint", payloadCode, "@",
"RhoSimpleElectronSelector", payloadCode, "@",
"RhoSimpleKaonSelector", payloadCode, "@",
"RhoSimpleMuonSelector", payloadCode, "@",
"RhoSimplePionSelector", payloadCode, "@",
"RhoSimpleProtonSelector", payloadCode, "@",
"RhoSimpleVertexSelector", payloadCode, "@",
"RhoTotalMomentum", payloadCode, "@",
"RhoTuple", payloadCode, "@",
"RhoVector3Err", payloadCode, "@",
"RhoVertexSelectorBase", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__RhoDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__RhoDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__RhoDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__RhoDict() {
  TriggerDictionaryInitialization_G__RhoDict_Impl();
}
