// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIhexhdIsimulationdIChnsRootdIbuildChnsdIChnsToolsdIAnalysisToolsdIG__AnalysisToolsDict
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
#include "ChnsEventInfo.h"
#include "ChnsPidListMaker.h"
#include "ChnsAnalysis.h"
#include "ChnsSimpleAnalysis.h"
#include "ChnsAnalysisTask.h"
#include "ChnsMyAnalysisTask.h"
#include "ChnsAnaTask.h"
#include "ChnsListDefiner.h"
#include "ChnsListProvider.h"
#include "ChnsMcListConverter.h"
#include "ChnsAnaPidCombiner.h"
#include "ChnsAnaPidSelector.h"
#include "ChnsAnaContFact.h"
#include "ChnsAnaSelectorPar.h"
#include "ChnsGoodTrackSelector.h"
#include "ChnsEventShape.h"
#include "ChnsRhoTupleQA.h"
#include "ChnsParticleQATask.h"
#include "ChnsSimpleCombiner.h"
#include "ChnsSimpleCombinerTask.h"
#include "ChnsSimpleNtuple.h"
#include "StrTok.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_ChnsEventInfo(void *p = 0);
   static void *newArray_ChnsEventInfo(Long_t size, void *p);
   static void delete_ChnsEventInfo(void *p);
   static void deleteArray_ChnsEventInfo(void *p);
   static void destruct_ChnsEventInfo(void *p);
   static void streamer_ChnsEventInfo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsEventInfo*)
   {
      ::ChnsEventInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsEventInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsEventInfo", ::ChnsEventInfo::Class_Version(), "ChnsEventInfo.h", 26,
                  typeid(::ChnsEventInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsEventInfo::Dictionary, isa_proxy, 16,
                  sizeof(::ChnsEventInfo) );
      instance.SetNew(&new_ChnsEventInfo);
      instance.SetNewArray(&newArray_ChnsEventInfo);
      instance.SetDelete(&delete_ChnsEventInfo);
      instance.SetDeleteArray(&deleteArray_ChnsEventInfo);
      instance.SetDestructor(&destruct_ChnsEventInfo);
      instance.SetStreamerFunc(&streamer_ChnsEventInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsEventInfo*)
   {
      return GenerateInitInstanceLocal((::ChnsEventInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsEventInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsPidListMaker(void *p = 0);
   static void *newArray_ChnsPidListMaker(Long_t size, void *p);
   static void delete_ChnsPidListMaker(void *p);
   static void deleteArray_ChnsPidListMaker(void *p);
   static void destruct_ChnsPidListMaker(void *p);
   static void streamer_ChnsPidListMaker(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsPidListMaker*)
   {
      ::ChnsPidListMaker *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsPidListMaker >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsPidListMaker", ::ChnsPidListMaker::Class_Version(), "ChnsPidListMaker.h", 17,
                  typeid(::ChnsPidListMaker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsPidListMaker::Dictionary, isa_proxy, 16,
                  sizeof(::ChnsPidListMaker) );
      instance.SetNew(&new_ChnsPidListMaker);
      instance.SetNewArray(&newArray_ChnsPidListMaker);
      instance.SetDelete(&delete_ChnsPidListMaker);
      instance.SetDeleteArray(&deleteArray_ChnsPidListMaker);
      instance.SetDestructor(&destruct_ChnsPidListMaker);
      instance.SetStreamerFunc(&streamer_ChnsPidListMaker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsPidListMaker*)
   {
      return GenerateInitInstanceLocal((::ChnsPidListMaker*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsPidListMaker*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsAnalysis(void *p = 0);
   static void *newArray_ChnsAnalysis(Long_t size, void *p);
   static void delete_ChnsAnalysis(void *p);
   static void deleteArray_ChnsAnalysis(void *p);
   static void destruct_ChnsAnalysis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsAnalysis*)
   {
      ::ChnsAnalysis *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsAnalysis >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsAnalysis", ::ChnsAnalysis::Class_Version(), "ChnsAnalysis.h", 28,
                  typeid(::ChnsAnalysis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsAnalysis::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsAnalysis) );
      instance.SetNew(&new_ChnsAnalysis);
      instance.SetNewArray(&newArray_ChnsAnalysis);
      instance.SetDelete(&delete_ChnsAnalysis);
      instance.SetDeleteArray(&deleteArray_ChnsAnalysis);
      instance.SetDestructor(&destruct_ChnsAnalysis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsAnalysis*)
   {
      return GenerateInitInstanceLocal((::ChnsAnalysis*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsAnalysis*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsSimpleAnalysis(void *p = 0);
   static void *newArray_ChnsSimpleAnalysis(Long_t size, void *p);
   static void delete_ChnsSimpleAnalysis(void *p);
   static void deleteArray_ChnsSimpleAnalysis(void *p);
   static void destruct_ChnsSimpleAnalysis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsSimpleAnalysis*)
   {
      ::ChnsSimpleAnalysis *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsSimpleAnalysis >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsSimpleAnalysis", ::ChnsSimpleAnalysis::Class_Version(), "ChnsSimpleAnalysis.h", 50,
                  typeid(::ChnsSimpleAnalysis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsSimpleAnalysis::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsSimpleAnalysis) );
      instance.SetNew(&new_ChnsSimpleAnalysis);
      instance.SetNewArray(&newArray_ChnsSimpleAnalysis);
      instance.SetDelete(&delete_ChnsSimpleAnalysis);
      instance.SetDeleteArray(&deleteArray_ChnsSimpleAnalysis);
      instance.SetDestructor(&destruct_ChnsSimpleAnalysis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsSimpleAnalysis*)
   {
      return GenerateInitInstanceLocal((::ChnsSimpleAnalysis*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsSimpleAnalysis*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsAnalysisTask(void *p = 0);
   static void *newArray_ChnsAnalysisTask(Long_t size, void *p);
   static void delete_ChnsAnalysisTask(void *p);
   static void deleteArray_ChnsAnalysisTask(void *p);
   static void destruct_ChnsAnalysisTask(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsAnalysisTask*)
   {
      ::ChnsAnalysisTask *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsAnalysisTask >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsAnalysisTask", ::ChnsAnalysisTask::Class_Version(), "ChnsAnalysisTask.h", 23,
                  typeid(::ChnsAnalysisTask), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsAnalysisTask::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsAnalysisTask) );
      instance.SetNew(&new_ChnsAnalysisTask);
      instance.SetNewArray(&newArray_ChnsAnalysisTask);
      instance.SetDelete(&delete_ChnsAnalysisTask);
      instance.SetDeleteArray(&deleteArray_ChnsAnalysisTask);
      instance.SetDestructor(&destruct_ChnsAnalysisTask);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsAnalysisTask*)
   {
      return GenerateInitInstanceLocal((::ChnsAnalysisTask*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsAnalysisTask*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsMyAnalysisTask(void *p = 0);
   static void *newArray_ChnsMyAnalysisTask(Long_t size, void *p);
   static void delete_ChnsMyAnalysisTask(void *p);
   static void deleteArray_ChnsMyAnalysisTask(void *p);
   static void destruct_ChnsMyAnalysisTask(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsMyAnalysisTask*)
   {
      ::ChnsMyAnalysisTask *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsMyAnalysisTask >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsMyAnalysisTask", ::ChnsMyAnalysisTask::Class_Version(), "ChnsMyAnalysisTask.h", 20,
                  typeid(::ChnsMyAnalysisTask), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsMyAnalysisTask::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsMyAnalysisTask) );
      instance.SetNew(&new_ChnsMyAnalysisTask);
      instance.SetNewArray(&newArray_ChnsMyAnalysisTask);
      instance.SetDelete(&delete_ChnsMyAnalysisTask);
      instance.SetDeleteArray(&deleteArray_ChnsMyAnalysisTask);
      instance.SetDestructor(&destruct_ChnsMyAnalysisTask);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsMyAnalysisTask*)
   {
      return GenerateInitInstanceLocal((::ChnsMyAnalysisTask*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsMyAnalysisTask*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsAnaTask(void *p = 0);
   static void *newArray_ChnsAnaTask(Long_t size, void *p);
   static void delete_ChnsAnaTask(void *p);
   static void deleteArray_ChnsAnaTask(void *p);
   static void destruct_ChnsAnaTask(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsAnaTask*)
   {
      ::ChnsAnaTask *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsAnaTask >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsAnaTask", ::ChnsAnaTask::Class_Version(), "ChnsAnaTask.h", 20,
                  typeid(::ChnsAnaTask), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsAnaTask::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsAnaTask) );
      instance.SetNew(&new_ChnsAnaTask);
      instance.SetNewArray(&newArray_ChnsAnaTask);
      instance.SetDelete(&delete_ChnsAnaTask);
      instance.SetDeleteArray(&deleteArray_ChnsAnaTask);
      instance.SetDestructor(&destruct_ChnsAnaTask);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsAnaTask*)
   {
      return GenerateInitInstanceLocal((::ChnsAnaTask*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsAnaTask*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsListDefiner(void *p = 0);
   static void *newArray_ChnsListDefiner(Long_t size, void *p);
   static void delete_ChnsListDefiner(void *p);
   static void deleteArray_ChnsListDefiner(void *p);
   static void destruct_ChnsListDefiner(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsListDefiner*)
   {
      ::ChnsListDefiner *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsListDefiner >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsListDefiner", ::ChnsListDefiner::Class_Version(), "ChnsListDefiner.h", 12,
                  typeid(::ChnsListDefiner), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsListDefiner::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsListDefiner) );
      instance.SetNew(&new_ChnsListDefiner);
      instance.SetNewArray(&newArray_ChnsListDefiner);
      instance.SetDelete(&delete_ChnsListDefiner);
      instance.SetDeleteArray(&deleteArray_ChnsListDefiner);
      instance.SetDestructor(&destruct_ChnsListDefiner);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsListDefiner*)
   {
      return GenerateInitInstanceLocal((::ChnsListDefiner*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsListDefiner*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsListProvider_Dictionary();
   static void ChnsListProvider_TClassManip(TClass*);
   static void delete_ChnsListProvider(void *p);
   static void deleteArray_ChnsListProvider(void *p);
   static void destruct_ChnsListProvider(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsListProvider*)
   {
      ::ChnsListProvider *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsListProvider));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsListProvider", "ChnsListProvider.h", 55,
                  typeid(::ChnsListProvider), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsListProvider_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsListProvider) );
      instance.SetDelete(&delete_ChnsListProvider);
      instance.SetDeleteArray(&deleteArray_ChnsListProvider);
      instance.SetDestructor(&destruct_ChnsListProvider);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsListProvider*)
   {
      return GenerateInitInstanceLocal((::ChnsListProvider*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsListProvider*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsListProvider_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsListProvider*)0x0)->GetClass();
      ChnsListProvider_TClassManip(theClass);
   return theClass;
   }

   static void ChnsListProvider_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsMcListConverter(void *p = 0);
   static void *newArray_ChnsMcListConverter(Long_t size, void *p);
   static void delete_ChnsMcListConverter(void *p);
   static void deleteArray_ChnsMcListConverter(void *p);
   static void destruct_ChnsMcListConverter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsMcListConverter*)
   {
      ::ChnsMcListConverter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsMcListConverter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsMcListConverter", ::ChnsMcListConverter::Class_Version(), "ChnsMcListConverter.h", 12,
                  typeid(::ChnsMcListConverter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsMcListConverter::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsMcListConverter) );
      instance.SetNew(&new_ChnsMcListConverter);
      instance.SetNewArray(&newArray_ChnsMcListConverter);
      instance.SetDelete(&delete_ChnsMcListConverter);
      instance.SetDeleteArray(&deleteArray_ChnsMcListConverter);
      instance.SetDestructor(&destruct_ChnsMcListConverter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsMcListConverter*)
   {
      return GenerateInitInstanceLocal((::ChnsMcListConverter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsMcListConverter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsAnaPidCombiner(void *p = 0);
   static void *newArray_ChnsAnaPidCombiner(Long_t size, void *p);
   static void delete_ChnsAnaPidCombiner(void *p);
   static void deleteArray_ChnsAnaPidCombiner(void *p);
   static void destruct_ChnsAnaPidCombiner(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsAnaPidCombiner*)
   {
      ::ChnsAnaPidCombiner *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsAnaPidCombiner >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsAnaPidCombiner", ::ChnsAnaPidCombiner::Class_Version(), "ChnsAnaPidCombiner.h", 23,
                  typeid(::ChnsAnaPidCombiner), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsAnaPidCombiner::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsAnaPidCombiner) );
      instance.SetNew(&new_ChnsAnaPidCombiner);
      instance.SetNewArray(&newArray_ChnsAnaPidCombiner);
      instance.SetDelete(&delete_ChnsAnaPidCombiner);
      instance.SetDeleteArray(&deleteArray_ChnsAnaPidCombiner);
      instance.SetDestructor(&destruct_ChnsAnaPidCombiner);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsAnaPidCombiner*)
   {
      return GenerateInitInstanceLocal((::ChnsAnaPidCombiner*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsAnaPidCombiner*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsAnaPidSelector(void *p = 0);
   static void *newArray_ChnsAnaPidSelector(Long_t size, void *p);
   static void delete_ChnsAnaPidSelector(void *p);
   static void deleteArray_ChnsAnaPidSelector(void *p);
   static void destruct_ChnsAnaPidSelector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsAnaPidSelector*)
   {
      ::ChnsAnaPidSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsAnaPidSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsAnaPidSelector", ::ChnsAnaPidSelector::Class_Version(), "ChnsAnaPidSelector.h", 21,
                  typeid(::ChnsAnaPidSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsAnaPidSelector::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsAnaPidSelector) );
      instance.SetNew(&new_ChnsAnaPidSelector);
      instance.SetNewArray(&newArray_ChnsAnaPidSelector);
      instance.SetDelete(&delete_ChnsAnaPidSelector);
      instance.SetDeleteArray(&deleteArray_ChnsAnaPidSelector);
      instance.SetDestructor(&destruct_ChnsAnaPidSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsAnaPidSelector*)
   {
      return GenerateInitInstanceLocal((::ChnsAnaPidSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsAnaPidSelector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsAnaContFact(void *p = 0);
   static void *newArray_ChnsAnaContFact(Long_t size, void *p);
   static void delete_ChnsAnaContFact(void *p);
   static void deleteArray_ChnsAnaContFact(void *p);
   static void destruct_ChnsAnaContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsAnaContFact*)
   {
      ::ChnsAnaContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsAnaContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsAnaContFact", ::ChnsAnaContFact::Class_Version(), "ChnsAnaContFact.h", 9,
                  typeid(::ChnsAnaContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsAnaContFact::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsAnaContFact) );
      instance.SetNew(&new_ChnsAnaContFact);
      instance.SetNewArray(&newArray_ChnsAnaContFact);
      instance.SetDelete(&delete_ChnsAnaContFact);
      instance.SetDeleteArray(&deleteArray_ChnsAnaContFact);
      instance.SetDestructor(&destruct_ChnsAnaContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsAnaContFact*)
   {
      return GenerateInitInstanceLocal((::ChnsAnaContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsAnaContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsAnaSelectorPar(void *p = 0);
   static void *newArray_ChnsAnaSelectorPar(Long_t size, void *p);
   static void delete_ChnsAnaSelectorPar(void *p);
   static void deleteArray_ChnsAnaSelectorPar(void *p);
   static void destruct_ChnsAnaSelectorPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsAnaSelectorPar*)
   {
      ::ChnsAnaSelectorPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsAnaSelectorPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsAnaSelectorPar", ::ChnsAnaSelectorPar::Class_Version(), "ChnsAnaSelectorPar.h", 14,
                  typeid(::ChnsAnaSelectorPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsAnaSelectorPar::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsAnaSelectorPar) );
      instance.SetNew(&new_ChnsAnaSelectorPar);
      instance.SetNewArray(&newArray_ChnsAnaSelectorPar);
      instance.SetDelete(&delete_ChnsAnaSelectorPar);
      instance.SetDeleteArray(&deleteArray_ChnsAnaSelectorPar);
      instance.SetDestructor(&destruct_ChnsAnaSelectorPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsAnaSelectorPar*)
   {
      return GenerateInitInstanceLocal((::ChnsAnaSelectorPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsAnaSelectorPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_ChnsGoodTrackSelector(void *p);
   static void deleteArray_ChnsGoodTrackSelector(void *p);
   static void destruct_ChnsGoodTrackSelector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsGoodTrackSelector*)
   {
      ::ChnsGoodTrackSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsGoodTrackSelector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsGoodTrackSelector", ::ChnsGoodTrackSelector::Class_Version(), "ChnsGoodTrackSelector.h", 7,
                  typeid(::ChnsGoodTrackSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsGoodTrackSelector::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsGoodTrackSelector) );
      instance.SetDelete(&delete_ChnsGoodTrackSelector);
      instance.SetDeleteArray(&deleteArray_ChnsGoodTrackSelector);
      instance.SetDestructor(&destruct_ChnsGoodTrackSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsGoodTrackSelector*)
   {
      return GenerateInitInstanceLocal((::ChnsGoodTrackSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsGoodTrackSelector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsEventShape_Dictionary();
   static void ChnsEventShape_TClassManip(TClass*);
   static void delete_ChnsEventShape(void *p);
   static void deleteArray_ChnsEventShape(void *p);
   static void destruct_ChnsEventShape(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsEventShape*)
   {
      ::ChnsEventShape *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsEventShape));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsEventShape", "ChnsEventShape.h", 11,
                  typeid(::ChnsEventShape), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsEventShape_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsEventShape) );
      instance.SetDelete(&delete_ChnsEventShape);
      instance.SetDeleteArray(&deleteArray_ChnsEventShape);
      instance.SetDestructor(&destruct_ChnsEventShape);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsEventShape*)
   {
      return GenerateInitInstanceLocal((::ChnsEventShape*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsEventShape*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsEventShape_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsEventShape*)0x0)->GetClass();
      ChnsEventShape_TClassManip(theClass);
   return theClass;
   }

   static void ChnsEventShape_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsRhoTupleQA_Dictionary();
   static void ChnsRhoTupleQA_TClassManip(TClass*);
   static void *new_ChnsRhoTupleQA(void *p = 0);
   static void *newArray_ChnsRhoTupleQA(Long_t size, void *p);
   static void delete_ChnsRhoTupleQA(void *p);
   static void deleteArray_ChnsRhoTupleQA(void *p);
   static void destruct_ChnsRhoTupleQA(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsRhoTupleQA*)
   {
      ::ChnsRhoTupleQA *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsRhoTupleQA));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsRhoTupleQA", "ChnsRhoTupleQA.h", 16,
                  typeid(::ChnsRhoTupleQA), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsRhoTupleQA_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsRhoTupleQA) );
      instance.SetNew(&new_ChnsRhoTupleQA);
      instance.SetNewArray(&newArray_ChnsRhoTupleQA);
      instance.SetDelete(&delete_ChnsRhoTupleQA);
      instance.SetDeleteArray(&deleteArray_ChnsRhoTupleQA);
      instance.SetDestructor(&destruct_ChnsRhoTupleQA);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsRhoTupleQA*)
   {
      return GenerateInitInstanceLocal((::ChnsRhoTupleQA*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsRhoTupleQA*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsRhoTupleQA_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsRhoTupleQA*)0x0)->GetClass();
      ChnsRhoTupleQA_TClassManip(theClass);
   return theClass;
   }

   static void ChnsRhoTupleQA_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_ChnsParticleQATask(void *p = 0);
   static void *newArray_ChnsParticleQATask(Long_t size, void *p);
   static void delete_ChnsParticleQATask(void *p);
   static void deleteArray_ChnsParticleQATask(void *p);
   static void destruct_ChnsParticleQATask(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsParticleQATask*)
   {
      ::ChnsParticleQATask *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsParticleQATask >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsParticleQATask", ::ChnsParticleQATask::Class_Version(), "ChnsParticleQATask.h", 24,
                  typeid(::ChnsParticleQATask), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsParticleQATask::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsParticleQATask) );
      instance.SetNew(&new_ChnsParticleQATask);
      instance.SetNewArray(&newArray_ChnsParticleQATask);
      instance.SetDelete(&delete_ChnsParticleQATask);
      instance.SetDeleteArray(&deleteArray_ChnsParticleQATask);
      instance.SetDestructor(&destruct_ChnsParticleQATask);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsParticleQATask*)
   {
      return GenerateInitInstanceLocal((::ChnsParticleQATask*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsParticleQATask*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsSimpleCombiner_Dictionary();
   static void ChnsSimpleCombiner_TClassManip(TClass*);
   static void delete_ChnsSimpleCombiner(void *p);
   static void deleteArray_ChnsSimpleCombiner(void *p);
   static void destruct_ChnsSimpleCombiner(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsSimpleCombiner*)
   {
      ::ChnsSimpleCombiner *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsSimpleCombiner));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsSimpleCombiner", "ChnsSimpleCombiner.h", 59,
                  typeid(::ChnsSimpleCombiner), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsSimpleCombiner_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsSimpleCombiner) );
      instance.SetDelete(&delete_ChnsSimpleCombiner);
      instance.SetDeleteArray(&deleteArray_ChnsSimpleCombiner);
      instance.SetDestructor(&destruct_ChnsSimpleCombiner);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsSimpleCombiner*)
   {
      return GenerateInitInstanceLocal((::ChnsSimpleCombiner*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsSimpleCombiner*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsSimpleCombiner_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsSimpleCombiner*)0x0)->GetClass();
      ChnsSimpleCombiner_TClassManip(theClass);
   return theClass;
   }

   static void ChnsSimpleCombiner_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_ChnsSimpleCombinerTask(void *p);
   static void deleteArray_ChnsSimpleCombinerTask(void *p);
   static void destruct_ChnsSimpleCombinerTask(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsSimpleCombinerTask*)
   {
      ::ChnsSimpleCombinerTask *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ChnsSimpleCombinerTask >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ChnsSimpleCombinerTask", ::ChnsSimpleCombinerTask::Class_Version(), "ChnsSimpleCombinerTask.h", 44,
                  typeid(::ChnsSimpleCombinerTask), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ChnsSimpleCombinerTask::Dictionary, isa_proxy, 4,
                  sizeof(::ChnsSimpleCombinerTask) );
      instance.SetDelete(&delete_ChnsSimpleCombinerTask);
      instance.SetDeleteArray(&deleteArray_ChnsSimpleCombinerTask);
      instance.SetDestructor(&destruct_ChnsSimpleCombinerTask);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsSimpleCombinerTask*)
   {
      return GenerateInitInstanceLocal((::ChnsSimpleCombinerTask*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsSimpleCombinerTask*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ChnsSimpleNtuple_Dictionary();
   static void ChnsSimpleNtuple_TClassManip(TClass*);
   static void delete_ChnsSimpleNtuple(void *p);
   static void deleteArray_ChnsSimpleNtuple(void *p);
   static void destruct_ChnsSimpleNtuple(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ChnsSimpleNtuple*)
   {
      ::ChnsSimpleNtuple *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ChnsSimpleNtuple));
      static ::ROOT::TGenericClassInfo 
         instance("ChnsSimpleNtuple", "ChnsSimpleNtuple.h", 40,
                  typeid(::ChnsSimpleNtuple), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ChnsSimpleNtuple_Dictionary, isa_proxy, 4,
                  sizeof(::ChnsSimpleNtuple) );
      instance.SetDelete(&delete_ChnsSimpleNtuple);
      instance.SetDeleteArray(&deleteArray_ChnsSimpleNtuple);
      instance.SetDestructor(&destruct_ChnsSimpleNtuple);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ChnsSimpleNtuple*)
   {
      return GenerateInitInstanceLocal((::ChnsSimpleNtuple*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ChnsSimpleNtuple*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ChnsSimpleNtuple_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ChnsSimpleNtuple*)0x0)->GetClass();
      ChnsSimpleNtuple_TClassManip(theClass);
   return theClass;
   }

   static void ChnsSimpleNtuple_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *CStrTok_Dictionary();
   static void CStrTok_TClassManip(TClass*);
   static void *new_CStrTok(void *p = 0);
   static void *newArray_CStrTok(Long_t size, void *p);
   static void delete_CStrTok(void *p);
   static void deleteArray_CStrTok(void *p);
   static void destruct_CStrTok(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CStrTok*)
   {
      ::CStrTok *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::CStrTok));
      static ::ROOT::TGenericClassInfo 
         instance("CStrTok", "StrTok.h", 11,
                  typeid(::CStrTok), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &CStrTok_Dictionary, isa_proxy, 4,
                  sizeof(::CStrTok) );
      instance.SetNew(&new_CStrTok);
      instance.SetNewArray(&newArray_CStrTok);
      instance.SetDelete(&delete_CStrTok);
      instance.SetDeleteArray(&deleteArray_CStrTok);
      instance.SetDestructor(&destruct_CStrTok);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CStrTok*)
   {
      return GenerateInitInstanceLocal((::CStrTok*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CStrTok*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *CStrTok_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::CStrTok*)0x0)->GetClass();
      CStrTok_TClassManip(theClass);
   return theClass;
   }

   static void CStrTok_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr ChnsEventInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsEventInfo::Class_Name()
{
   return "ChnsEventInfo";
}

//______________________________________________________________________________
const char *ChnsEventInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEventInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsEventInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsEventInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsEventInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEventInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsEventInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsEventInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsPidListMaker::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsPidListMaker::Class_Name()
{
   return "ChnsPidListMaker";
}

//______________________________________________________________________________
const char *ChnsPidListMaker::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsPidListMaker*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsPidListMaker::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsPidListMaker*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsPidListMaker::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsPidListMaker*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsPidListMaker::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsPidListMaker*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsAnalysis::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsAnalysis::Class_Name()
{
   return "ChnsAnalysis";
}

//______________________________________________________________________________
const char *ChnsAnalysis::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnalysis*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsAnalysis::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnalysis*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsAnalysis::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnalysis*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsAnalysis::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnalysis*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsSimpleAnalysis::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsSimpleAnalysis::Class_Name()
{
   return "ChnsSimpleAnalysis";
}

//______________________________________________________________________________
const char *ChnsSimpleAnalysis::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsSimpleAnalysis*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsSimpleAnalysis::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsSimpleAnalysis*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsSimpleAnalysis::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsSimpleAnalysis*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsSimpleAnalysis::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsSimpleAnalysis*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsAnalysisTask::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsAnalysisTask::Class_Name()
{
   return "ChnsAnalysisTask";
}

//______________________________________________________________________________
const char *ChnsAnalysisTask::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnalysisTask*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsAnalysisTask::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnalysisTask*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsAnalysisTask::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnalysisTask*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsAnalysisTask::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnalysisTask*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsMyAnalysisTask::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsMyAnalysisTask::Class_Name()
{
   return "ChnsMyAnalysisTask";
}

//______________________________________________________________________________
const char *ChnsMyAnalysisTask::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsMyAnalysisTask*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsMyAnalysisTask::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsMyAnalysisTask*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsMyAnalysisTask::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsMyAnalysisTask*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsMyAnalysisTask::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsMyAnalysisTask*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsAnaTask::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsAnaTask::Class_Name()
{
   return "ChnsAnaTask";
}

//______________________________________________________________________________
const char *ChnsAnaTask::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnaTask*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsAnaTask::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnaTask*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsAnaTask::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnaTask*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsAnaTask::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnaTask*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsListDefiner::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsListDefiner::Class_Name()
{
   return "ChnsListDefiner";
}

//______________________________________________________________________________
const char *ChnsListDefiner::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsListDefiner*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsListDefiner::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsListDefiner*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsListDefiner::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsListDefiner*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsListDefiner::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsListDefiner*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsMcListConverter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsMcListConverter::Class_Name()
{
   return "ChnsMcListConverter";
}

//______________________________________________________________________________
const char *ChnsMcListConverter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsMcListConverter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsMcListConverter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsMcListConverter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsMcListConverter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsMcListConverter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsMcListConverter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsMcListConverter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsAnaPidCombiner::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsAnaPidCombiner::Class_Name()
{
   return "ChnsAnaPidCombiner";
}

//______________________________________________________________________________
const char *ChnsAnaPidCombiner::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnaPidCombiner*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsAnaPidCombiner::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnaPidCombiner*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsAnaPidCombiner::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnaPidCombiner*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsAnaPidCombiner::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnaPidCombiner*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsAnaPidSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsAnaPidSelector::Class_Name()
{
   return "ChnsAnaPidSelector";
}

//______________________________________________________________________________
const char *ChnsAnaPidSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnaPidSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsAnaPidSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnaPidSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsAnaPidSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnaPidSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsAnaPidSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnaPidSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsAnaContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsAnaContFact::Class_Name()
{
   return "ChnsAnaContFact";
}

//______________________________________________________________________________
const char *ChnsAnaContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnaContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsAnaContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnaContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsAnaContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnaContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsAnaContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnaContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsAnaSelectorPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsAnaSelectorPar::Class_Name()
{
   return "ChnsAnaSelectorPar";
}

//______________________________________________________________________________
const char *ChnsAnaSelectorPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnaSelectorPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsAnaSelectorPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnaSelectorPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsAnaSelectorPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnaSelectorPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsAnaSelectorPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsAnaSelectorPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsGoodTrackSelector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsGoodTrackSelector::Class_Name()
{
   return "ChnsGoodTrackSelector";
}

//______________________________________________________________________________
const char *ChnsGoodTrackSelector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsGoodTrackSelector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsGoodTrackSelector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsGoodTrackSelector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsGoodTrackSelector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsGoodTrackSelector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsGoodTrackSelector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsGoodTrackSelector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsParticleQATask::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsParticleQATask::Class_Name()
{
   return "ChnsParticleQATask";
}

//______________________________________________________________________________
const char *ChnsParticleQATask::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsParticleQATask*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsParticleQATask::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsParticleQATask*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsParticleQATask::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsParticleQATask*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsParticleQATask::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsParticleQATask*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ChnsSimpleCombinerTask::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ChnsSimpleCombinerTask::Class_Name()
{
   return "ChnsSimpleCombinerTask";
}

//______________________________________________________________________________
const char *ChnsSimpleCombinerTask::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsSimpleCombinerTask*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ChnsSimpleCombinerTask::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ChnsSimpleCombinerTask*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ChnsSimpleCombinerTask::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsSimpleCombinerTask*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ChnsSimpleCombinerTask::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ChnsSimpleCombinerTask*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void ChnsEventInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsEventInfo.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      fAntiProtonBeam.Streamer(R__b);
      fCmFrame.Streamer(R__b);
      fIPTruth.Streamer(R__b);
      R__b >> fNCharged;
      R__b >> fNNeutrals;
      R__b.CheckByteCount(R__s, R__c, ChnsEventInfo::IsA());
   } else {
      R__c = R__b.WriteVersion(ChnsEventInfo::IsA(), kTRUE);
      TObject::Streamer(R__b);
      fAntiProtonBeam.Streamer(R__b);
      fCmFrame.Streamer(R__b);
      fIPTruth.Streamer(R__b);
      R__b << fNCharged;
      R__b << fNNeutrals;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsEventInfo(void *p) {
      return  p ? new(p) ::ChnsEventInfo : new ::ChnsEventInfo;
   }
   static void *newArray_ChnsEventInfo(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsEventInfo[nElements] : new ::ChnsEventInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsEventInfo(void *p) {
      delete ((::ChnsEventInfo*)p);
   }
   static void deleteArray_ChnsEventInfo(void *p) {
      delete [] ((::ChnsEventInfo*)p);
   }
   static void destruct_ChnsEventInfo(void *p) {
      typedef ::ChnsEventInfo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ChnsEventInfo(TBuffer &buf, void *obj) {
      ((::ChnsEventInfo*)obj)->::ChnsEventInfo::Streamer(buf);
   }
} // end of namespace ROOT for class ::ChnsEventInfo

//______________________________________________________________________________
void ChnsPidListMaker::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsPidListMaker.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      fBaseList.Streamer(R__b);
      R__b >> plusSel;
      R__b >> minusSel;
      R__b >> eSel;
      R__b >> muSel;
      R__b >> piSel;
      R__b >> kSel;
      R__b >> pSel;
      R__b.CheckByteCount(R__s, R__c, ChnsPidListMaker::IsA());
   } else {
      R__c = R__b.WriteVersion(ChnsPidListMaker::IsA(), kTRUE);
      fBaseList.Streamer(R__b);
      R__b << plusSel;
      R__b << minusSel;
      R__b << eSel;
      R__b << muSel;
      R__b << piSel;
      R__b << kSel;
      R__b << pSel;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsPidListMaker(void *p) {
      return  p ? new(p) ::ChnsPidListMaker : new ::ChnsPidListMaker;
   }
   static void *newArray_ChnsPidListMaker(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsPidListMaker[nElements] : new ::ChnsPidListMaker[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsPidListMaker(void *p) {
      delete ((::ChnsPidListMaker*)p);
   }
   static void deleteArray_ChnsPidListMaker(void *p) {
      delete [] ((::ChnsPidListMaker*)p);
   }
   static void destruct_ChnsPidListMaker(void *p) {
      typedef ::ChnsPidListMaker current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ChnsPidListMaker(TBuffer &buf, void *obj) {
      ((::ChnsPidListMaker*)obj)->::ChnsPidListMaker::Streamer(buf);
   }
} // end of namespace ROOT for class ::ChnsPidListMaker

//______________________________________________________________________________
void ChnsAnalysis::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsAnalysis.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsAnalysis::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsAnalysis::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsAnalysis(void *p) {
      return  p ? new(p) ::ChnsAnalysis : new ::ChnsAnalysis;
   }
   static void *newArray_ChnsAnalysis(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsAnalysis[nElements] : new ::ChnsAnalysis[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsAnalysis(void *p) {
      delete ((::ChnsAnalysis*)p);
   }
   static void deleteArray_ChnsAnalysis(void *p) {
      delete [] ((::ChnsAnalysis*)p);
   }
   static void destruct_ChnsAnalysis(void *p) {
      typedef ::ChnsAnalysis current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsAnalysis

//______________________________________________________________________________
void ChnsSimpleAnalysis::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsSimpleAnalysis.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsSimpleAnalysis::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsSimpleAnalysis::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsSimpleAnalysis(void *p) {
      return  p ? new(p) ::ChnsSimpleAnalysis : new ::ChnsSimpleAnalysis;
   }
   static void *newArray_ChnsSimpleAnalysis(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsSimpleAnalysis[nElements] : new ::ChnsSimpleAnalysis[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsSimpleAnalysis(void *p) {
      delete ((::ChnsSimpleAnalysis*)p);
   }
   static void deleteArray_ChnsSimpleAnalysis(void *p) {
      delete [] ((::ChnsSimpleAnalysis*)p);
   }
   static void destruct_ChnsSimpleAnalysis(void *p) {
      typedef ::ChnsSimpleAnalysis current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsSimpleAnalysis

//______________________________________________________________________________
void ChnsAnalysisTask::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsAnalysisTask.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsAnalysisTask::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsAnalysisTask::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsAnalysisTask(void *p) {
      return  p ? new(p) ::ChnsAnalysisTask : new ::ChnsAnalysisTask;
   }
   static void *newArray_ChnsAnalysisTask(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsAnalysisTask[nElements] : new ::ChnsAnalysisTask[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsAnalysisTask(void *p) {
      delete ((::ChnsAnalysisTask*)p);
   }
   static void deleteArray_ChnsAnalysisTask(void *p) {
      delete [] ((::ChnsAnalysisTask*)p);
   }
   static void destruct_ChnsAnalysisTask(void *p) {
      typedef ::ChnsAnalysisTask current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsAnalysisTask

//______________________________________________________________________________
void ChnsMyAnalysisTask::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsMyAnalysisTask.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsMyAnalysisTask::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsMyAnalysisTask::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsMyAnalysisTask(void *p) {
      return  p ? new(p) ::ChnsMyAnalysisTask : new ::ChnsMyAnalysisTask;
   }
   static void *newArray_ChnsMyAnalysisTask(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsMyAnalysisTask[nElements] : new ::ChnsMyAnalysisTask[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsMyAnalysisTask(void *p) {
      delete ((::ChnsMyAnalysisTask*)p);
   }
   static void deleteArray_ChnsMyAnalysisTask(void *p) {
      delete [] ((::ChnsMyAnalysisTask*)p);
   }
   static void destruct_ChnsMyAnalysisTask(void *p) {
      typedef ::ChnsMyAnalysisTask current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsMyAnalysisTask

//______________________________________________________________________________
void ChnsAnaTask::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsAnaTask.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsAnaTask::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsAnaTask::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsAnaTask(void *p) {
      return  p ? new(p) ::ChnsAnaTask : new ::ChnsAnaTask;
   }
   static void *newArray_ChnsAnaTask(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsAnaTask[nElements] : new ::ChnsAnaTask[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsAnaTask(void *p) {
      delete ((::ChnsAnaTask*)p);
   }
   static void deleteArray_ChnsAnaTask(void *p) {
      delete [] ((::ChnsAnaTask*)p);
   }
   static void destruct_ChnsAnaTask(void *p) {
      typedef ::ChnsAnaTask current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsAnaTask

//______________________________________________________________________________
void ChnsListDefiner::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsListDefiner.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsListDefiner::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsListDefiner::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsListDefiner(void *p) {
      return  p ? new(p) ::ChnsListDefiner : new ::ChnsListDefiner;
   }
   static void *newArray_ChnsListDefiner(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsListDefiner[nElements] : new ::ChnsListDefiner[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsListDefiner(void *p) {
      delete ((::ChnsListDefiner*)p);
   }
   static void deleteArray_ChnsListDefiner(void *p) {
      delete [] ((::ChnsListDefiner*)p);
   }
   static void destruct_ChnsListDefiner(void *p) {
      typedef ::ChnsListDefiner current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsListDefiner

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ChnsListProvider(void *p) {
      delete ((::ChnsListProvider*)p);
   }
   static void deleteArray_ChnsListProvider(void *p) {
      delete [] ((::ChnsListProvider*)p);
   }
   static void destruct_ChnsListProvider(void *p) {
      typedef ::ChnsListProvider current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsListProvider

//______________________________________________________________________________
void ChnsMcListConverter::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsMcListConverter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsMcListConverter::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsMcListConverter::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsMcListConverter(void *p) {
      return  p ? new(p) ::ChnsMcListConverter : new ::ChnsMcListConverter;
   }
   static void *newArray_ChnsMcListConverter(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsMcListConverter[nElements] : new ::ChnsMcListConverter[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsMcListConverter(void *p) {
      delete ((::ChnsMcListConverter*)p);
   }
   static void deleteArray_ChnsMcListConverter(void *p) {
      delete [] ((::ChnsMcListConverter*)p);
   }
   static void destruct_ChnsMcListConverter(void *p) {
      typedef ::ChnsMcListConverter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsMcListConverter

//______________________________________________________________________________
void ChnsAnaPidCombiner::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsAnaPidCombiner.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsAnaPidCombiner::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsAnaPidCombiner::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsAnaPidCombiner(void *p) {
      return  p ? new(p) ::ChnsAnaPidCombiner : new ::ChnsAnaPidCombiner;
   }
   static void *newArray_ChnsAnaPidCombiner(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsAnaPidCombiner[nElements] : new ::ChnsAnaPidCombiner[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsAnaPidCombiner(void *p) {
      delete ((::ChnsAnaPidCombiner*)p);
   }
   static void deleteArray_ChnsAnaPidCombiner(void *p) {
      delete [] ((::ChnsAnaPidCombiner*)p);
   }
   static void destruct_ChnsAnaPidCombiner(void *p) {
      typedef ::ChnsAnaPidCombiner current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsAnaPidCombiner

//______________________________________________________________________________
void ChnsAnaPidSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsAnaPidSelector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsAnaPidSelector::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsAnaPidSelector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsAnaPidSelector(void *p) {
      return  p ? new(p) ::ChnsAnaPidSelector : new ::ChnsAnaPidSelector;
   }
   static void *newArray_ChnsAnaPidSelector(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsAnaPidSelector[nElements] : new ::ChnsAnaPidSelector[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsAnaPidSelector(void *p) {
      delete ((::ChnsAnaPidSelector*)p);
   }
   static void deleteArray_ChnsAnaPidSelector(void *p) {
      delete [] ((::ChnsAnaPidSelector*)p);
   }
   static void destruct_ChnsAnaPidSelector(void *p) {
      typedef ::ChnsAnaPidSelector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsAnaPidSelector

//______________________________________________________________________________
void ChnsAnaContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsAnaContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsAnaContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsAnaContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsAnaContFact(void *p) {
      return  p ? new(p) ::ChnsAnaContFact : new ::ChnsAnaContFact;
   }
   static void *newArray_ChnsAnaContFact(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsAnaContFact[nElements] : new ::ChnsAnaContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsAnaContFact(void *p) {
      delete ((::ChnsAnaContFact*)p);
   }
   static void deleteArray_ChnsAnaContFact(void *p) {
      delete [] ((::ChnsAnaContFact*)p);
   }
   static void destruct_ChnsAnaContFact(void *p) {
      typedef ::ChnsAnaContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsAnaContFact

//______________________________________________________________________________
void ChnsAnaSelectorPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsAnaSelectorPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsAnaSelectorPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsAnaSelectorPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsAnaSelectorPar(void *p) {
      return  p ? new(p) ::ChnsAnaSelectorPar : new ::ChnsAnaSelectorPar;
   }
   static void *newArray_ChnsAnaSelectorPar(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsAnaSelectorPar[nElements] : new ::ChnsAnaSelectorPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsAnaSelectorPar(void *p) {
      delete ((::ChnsAnaSelectorPar*)p);
   }
   static void deleteArray_ChnsAnaSelectorPar(void *p) {
      delete [] ((::ChnsAnaSelectorPar*)p);
   }
   static void destruct_ChnsAnaSelectorPar(void *p) {
      typedef ::ChnsAnaSelectorPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsAnaSelectorPar

//______________________________________________________________________________
void ChnsGoodTrackSelector::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsGoodTrackSelector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsGoodTrackSelector::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsGoodTrackSelector::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ChnsGoodTrackSelector(void *p) {
      delete ((::ChnsGoodTrackSelector*)p);
   }
   static void deleteArray_ChnsGoodTrackSelector(void *p) {
      delete [] ((::ChnsGoodTrackSelector*)p);
   }
   static void destruct_ChnsGoodTrackSelector(void *p) {
      typedef ::ChnsGoodTrackSelector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsGoodTrackSelector

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ChnsEventShape(void *p) {
      delete ((::ChnsEventShape*)p);
   }
   static void deleteArray_ChnsEventShape(void *p) {
      delete [] ((::ChnsEventShape*)p);
   }
   static void destruct_ChnsEventShape(void *p) {
      typedef ::ChnsEventShape current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsEventShape

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsRhoTupleQA(void *p) {
      return  p ? new(p) ::ChnsRhoTupleQA : new ::ChnsRhoTupleQA;
   }
   static void *newArray_ChnsRhoTupleQA(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsRhoTupleQA[nElements] : new ::ChnsRhoTupleQA[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsRhoTupleQA(void *p) {
      delete ((::ChnsRhoTupleQA*)p);
   }
   static void deleteArray_ChnsRhoTupleQA(void *p) {
      delete [] ((::ChnsRhoTupleQA*)p);
   }
   static void destruct_ChnsRhoTupleQA(void *p) {
      typedef ::ChnsRhoTupleQA current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsRhoTupleQA

//______________________________________________________________________________
void ChnsParticleQATask::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsParticleQATask.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsParticleQATask::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsParticleQATask::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ChnsParticleQATask(void *p) {
      return  p ? new(p) ::ChnsParticleQATask : new ::ChnsParticleQATask;
   }
   static void *newArray_ChnsParticleQATask(Long_t nElements, void *p) {
      return p ? new(p) ::ChnsParticleQATask[nElements] : new ::ChnsParticleQATask[nElements];
   }
   // Wrapper around operator delete
   static void delete_ChnsParticleQATask(void *p) {
      delete ((::ChnsParticleQATask*)p);
   }
   static void deleteArray_ChnsParticleQATask(void *p) {
      delete [] ((::ChnsParticleQATask*)p);
   }
   static void destruct_ChnsParticleQATask(void *p) {
      typedef ::ChnsParticleQATask current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsParticleQATask

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ChnsSimpleCombiner(void *p) {
      delete ((::ChnsSimpleCombiner*)p);
   }
   static void deleteArray_ChnsSimpleCombiner(void *p) {
      delete [] ((::ChnsSimpleCombiner*)p);
   }
   static void destruct_ChnsSimpleCombiner(void *p) {
      typedef ::ChnsSimpleCombiner current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsSimpleCombiner

//______________________________________________________________________________
void ChnsSimpleCombinerTask::Streamer(TBuffer &R__b)
{
   // Stream an object of class ChnsSimpleCombinerTask.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ChnsSimpleCombinerTask::Class(),this);
   } else {
      R__b.WriteClassBuffer(ChnsSimpleCombinerTask::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ChnsSimpleCombinerTask(void *p) {
      delete ((::ChnsSimpleCombinerTask*)p);
   }
   static void deleteArray_ChnsSimpleCombinerTask(void *p) {
      delete [] ((::ChnsSimpleCombinerTask*)p);
   }
   static void destruct_ChnsSimpleCombinerTask(void *p) {
      typedef ::ChnsSimpleCombinerTask current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsSimpleCombinerTask

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ChnsSimpleNtuple(void *p) {
      delete ((::ChnsSimpleNtuple*)p);
   }
   static void deleteArray_ChnsSimpleNtuple(void *p) {
      delete [] ((::ChnsSimpleNtuple*)p);
   }
   static void destruct_ChnsSimpleNtuple(void *p) {
      typedef ::ChnsSimpleNtuple current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ChnsSimpleNtuple

namespace ROOT {
   // Wrappers around operator new
   static void *new_CStrTok(void *p) {
      return  p ? new(p) ::CStrTok : new ::CStrTok;
   }
   static void *newArray_CStrTok(Long_t nElements, void *p) {
      return p ? new(p) ::CStrTok[nElements] : new ::CStrTok[nElements];
   }
   // Wrapper around operator delete
   static void delete_CStrTok(void *p) {
      delete ((::CStrTok*)p);
   }
   static void deleteArray_CStrTok(void *p) {
      delete [] ((::CStrTok*)p);
   }
   static void destruct_CStrTok(void *p) {
      typedef ::CStrTok current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CStrTok

namespace ROOT {
   static TClass *vectorlEstringgR_Dictionary();
   static void vectorlEstringgR_TClassManip(TClass*);
   static void *new_vectorlEstringgR(void *p = 0);
   static void *newArray_vectorlEstringgR(Long_t size, void *p);
   static void delete_vectorlEstringgR(void *p);
   static void deleteArray_vectorlEstringgR(void *p);
   static void destruct_vectorlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<string>*)
   {
      vector<string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<string>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<string>", -2, "vector", 216,
                  typeid(vector<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEstringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<string>) );
      instance.SetNew(&new_vectorlEstringgR);
      instance.SetNewArray(&newArray_vectorlEstringgR);
      instance.SetDelete(&delete_vectorlEstringgR);
      instance.SetDeleteArray(&deleteArray_vectorlEstringgR);
      instance.SetDestructor(&destruct_vectorlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<string> >()));

      ::ROOT::AddClassAlternate("vector<string>","std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<string>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<string>*)0x0)->GetClass();
      vectorlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEstringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string> : new vector<string>;
   }
   static void *newArray_vectorlEstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string>[nElements] : new vector<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEstringgR(void *p) {
      delete ((vector<string>*)p);
   }
   static void deleteArray_vectorlEstringgR(void *p) {
      delete [] ((vector<string>*)p);
   }
   static void destruct_vectorlEstringgR(void *p) {
      typedef vector<string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<string>

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
   static TClass *vectorlEintmUgR_Dictionary();
   static void vectorlEintmUgR_TClassManip(TClass*);
   static void *new_vectorlEintmUgR(void *p = 0);
   static void *newArray_vectorlEintmUgR(Long_t size, void *p);
   static void delete_vectorlEintmUgR(void *p);
   static void deleteArray_vectorlEintmUgR(void *p);
   static void destruct_vectorlEintmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int*>*)
   {
      vector<int*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int*>", -2, "vector", 216,
                  typeid(vector<int*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int*>) );
      instance.SetNew(&new_vectorlEintmUgR);
      instance.SetNewArray(&newArray_vectorlEintmUgR);
      instance.SetDelete(&delete_vectorlEintmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintmUgR);
      instance.SetDestructor(&destruct_vectorlEintmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int*> >()));

      ::ROOT::AddClassAlternate("vector<int*>","std::vector<int*, std::allocator<int*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<int*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int*>*)0x0)->GetClass();
      vectorlEintmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int*> : new vector<int*>;
   }
   static void *newArray_vectorlEintmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int*>[nElements] : new vector<int*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintmUgR(void *p) {
      delete ((vector<int*>*)p);
   }
   static void deleteArray_vectorlEintmUgR(void *p) {
      delete [] ((vector<int*>*)p);
   }
   static void destruct_vectorlEintmUgR(void *p) {
      typedef vector<int*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int*>

namespace ROOT {
   static TClass *vectorlEfloatmUgR_Dictionary();
   static void vectorlEfloatmUgR_TClassManip(TClass*);
   static void *new_vectorlEfloatmUgR(void *p = 0);
   static void *newArray_vectorlEfloatmUgR(Long_t size, void *p);
   static void delete_vectorlEfloatmUgR(void *p);
   static void deleteArray_vectorlEfloatmUgR(void *p);
   static void destruct_vectorlEfloatmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<float*>*)
   {
      vector<float*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<float*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<float*>", -2, "vector", 216,
                  typeid(vector<float*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEfloatmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<float*>) );
      instance.SetNew(&new_vectorlEfloatmUgR);
      instance.SetNewArray(&newArray_vectorlEfloatmUgR);
      instance.SetDelete(&delete_vectorlEfloatmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfloatmUgR);
      instance.SetDestructor(&destruct_vectorlEfloatmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<float*> >()));

      ::ROOT::AddClassAlternate("vector<float*>","std::vector<float*, std::allocator<float*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<float*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfloatmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<float*>*)0x0)->GetClass();
      vectorlEfloatmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfloatmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfloatmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float*> : new vector<float*>;
   }
   static void *newArray_vectorlEfloatmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float*>[nElements] : new vector<float*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfloatmUgR(void *p) {
      delete ((vector<float*>*)p);
   }
   static void deleteArray_vectorlEfloatmUgR(void *p) {
      delete [] ((vector<float*>*)p);
   }
   static void destruct_vectorlEfloatmUgR(void *p) {
      typedef vector<float*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<float*>

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

namespace ROOT {
   static TClass *vectorlETStringgR_Dictionary();
   static void vectorlETStringgR_TClassManip(TClass*);
   static void *new_vectorlETStringgR(void *p = 0);
   static void *newArray_vectorlETStringgR(Long_t size, void *p);
   static void delete_vectorlETStringgR(void *p);
   static void deleteArray_vectorlETStringgR(void *p);
   static void destruct_vectorlETStringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TString>*)
   {
      vector<TString> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TString>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TString>", -2, "vector", 216,
                  typeid(vector<TString>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETStringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TString>) );
      instance.SetNew(&new_vectorlETStringgR);
      instance.SetNewArray(&newArray_vectorlETStringgR);
      instance.SetDelete(&delete_vectorlETStringgR);
      instance.SetDeleteArray(&deleteArray_vectorlETStringgR);
      instance.SetDestructor(&destruct_vectorlETStringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TString> >()));

      ::ROOT::AddClassAlternate("vector<TString>","std::vector<TString, std::allocator<TString> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TString>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETStringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TString>*)0x0)->GetClass();
      vectorlETStringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETStringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETStringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TString> : new vector<TString>;
   }
   static void *newArray_vectorlETStringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TString>[nElements] : new vector<TString>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETStringgR(void *p) {
      delete ((vector<TString>*)p);
   }
   static void deleteArray_vectorlETStringgR(void *p) {
      delete [] ((vector<TString>*)p);
   }
   static void destruct_vectorlETStringgR(void *p) {
      typedef vector<TString> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TString>

namespace ROOT {
   static TClass *vectorlETParticlePDGmUgR_Dictionary();
   static void vectorlETParticlePDGmUgR_TClassManip(TClass*);
   static void *new_vectorlETParticlePDGmUgR(void *p = 0);
   static void *newArray_vectorlETParticlePDGmUgR(Long_t size, void *p);
   static void delete_vectorlETParticlePDGmUgR(void *p);
   static void deleteArray_vectorlETParticlePDGmUgR(void *p);
   static void destruct_vectorlETParticlePDGmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TParticlePDG*>*)
   {
      vector<TParticlePDG*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TParticlePDG*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TParticlePDG*>", -2, "vector", 216,
                  typeid(vector<TParticlePDG*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETParticlePDGmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TParticlePDG*>) );
      instance.SetNew(&new_vectorlETParticlePDGmUgR);
      instance.SetNewArray(&newArray_vectorlETParticlePDGmUgR);
      instance.SetDelete(&delete_vectorlETParticlePDGmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETParticlePDGmUgR);
      instance.SetDestructor(&destruct_vectorlETParticlePDGmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TParticlePDG*> >()));

      ::ROOT::AddClassAlternate("vector<TParticlePDG*>","std::vector<TParticlePDG*, std::allocator<TParticlePDG*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TParticlePDG*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETParticlePDGmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TParticlePDG*>*)0x0)->GetClass();
      vectorlETParticlePDGmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETParticlePDGmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETParticlePDGmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TParticlePDG*> : new vector<TParticlePDG*>;
   }
   static void *newArray_vectorlETParticlePDGmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TParticlePDG*>[nElements] : new vector<TParticlePDG*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETParticlePDGmUgR(void *p) {
      delete ((vector<TParticlePDG*>*)p);
   }
   static void deleteArray_vectorlETParticlePDGmUgR(void *p) {
      delete [] ((vector<TParticlePDG*>*)p);
   }
   static void destruct_vectorlETParticlePDGmUgR(void *p) {
      typedef vector<TParticlePDG*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TParticlePDG*>

namespace ROOT {
   static TClass *vectorlETLorentzVectorgR_Dictionary();
   static void vectorlETLorentzVectorgR_TClassManip(TClass*);
   static void *new_vectorlETLorentzVectorgR(void *p = 0);
   static void *newArray_vectorlETLorentzVectorgR(Long_t size, void *p);
   static void delete_vectorlETLorentzVectorgR(void *p);
   static void deleteArray_vectorlETLorentzVectorgR(void *p);
   static void destruct_vectorlETLorentzVectorgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TLorentzVector>*)
   {
      vector<TLorentzVector> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TLorentzVector>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TLorentzVector>", -2, "vector", 216,
                  typeid(vector<TLorentzVector>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETLorentzVectorgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TLorentzVector>) );
      instance.SetNew(&new_vectorlETLorentzVectorgR);
      instance.SetNewArray(&newArray_vectorlETLorentzVectorgR);
      instance.SetDelete(&delete_vectorlETLorentzVectorgR);
      instance.SetDeleteArray(&deleteArray_vectorlETLorentzVectorgR);
      instance.SetDestructor(&destruct_vectorlETLorentzVectorgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TLorentzVector> >()));

      ::ROOT::AddClassAlternate("vector<TLorentzVector>","std::vector<TLorentzVector, std::allocator<TLorentzVector> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TLorentzVector>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETLorentzVectorgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TLorentzVector>*)0x0)->GetClass();
      vectorlETLorentzVectorgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETLorentzVectorgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETLorentzVectorgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TLorentzVector> : new vector<TLorentzVector>;
   }
   static void *newArray_vectorlETLorentzVectorgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TLorentzVector>[nElements] : new vector<TLorentzVector>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETLorentzVectorgR(void *p) {
      delete ((vector<TLorentzVector>*)p);
   }
   static void deleteArray_vectorlETLorentzVectorgR(void *p) {
      delete [] ((vector<TLorentzVector>*)p);
   }
   static void destruct_vectorlETLorentzVectorgR(void *p) {
      typedef vector<TLorentzVector> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TLorentzVector>

namespace ROOT {
   static TClass *vectorlETH1FmUgR_Dictionary();
   static void vectorlETH1FmUgR_TClassManip(TClass*);
   static void *new_vectorlETH1FmUgR(void *p = 0);
   static void *newArray_vectorlETH1FmUgR(Long_t size, void *p);
   static void delete_vectorlETH1FmUgR(void *p);
   static void deleteArray_vectorlETH1FmUgR(void *p);
   static void destruct_vectorlETH1FmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TH1F*>*)
   {
      vector<TH1F*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TH1F*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TH1F*>", -2, "vector", 216,
                  typeid(vector<TH1F*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETH1FmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TH1F*>) );
      instance.SetNew(&new_vectorlETH1FmUgR);
      instance.SetNewArray(&newArray_vectorlETH1FmUgR);
      instance.SetDelete(&delete_vectorlETH1FmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETH1FmUgR);
      instance.SetDestructor(&destruct_vectorlETH1FmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TH1F*> >()));

      ::ROOT::AddClassAlternate("vector<TH1F*>","std::vector<TH1F*, std::allocator<TH1F*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TH1F*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETH1FmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TH1F*>*)0x0)->GetClass();
      vectorlETH1FmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETH1FmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETH1FmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1F*> : new vector<TH1F*>;
   }
   static void *newArray_vectorlETH1FmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1F*>[nElements] : new vector<TH1F*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETH1FmUgR(void *p) {
      delete ((vector<TH1F*>*)p);
   }
   static void deleteArray_vectorlETH1FmUgR(void *p) {
      delete [] ((vector<TH1F*>*)p);
   }
   static void destruct_vectorlETH1FmUgR(void *p) {
      typedef vector<TH1F*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TH1F*>

namespace ROOT {
   static TClass *vectorlESCDecayInfogR_Dictionary();
   static void vectorlESCDecayInfogR_TClassManip(TClass*);
   static void *new_vectorlESCDecayInfogR(void *p = 0);
   static void *newArray_vectorlESCDecayInfogR(Long_t size, void *p);
   static void delete_vectorlESCDecayInfogR(void *p);
   static void deleteArray_vectorlESCDecayInfogR(void *p);
   static void destruct_vectorlESCDecayInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<SCDecayInfo>*)
   {
      vector<SCDecayInfo> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<SCDecayInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<SCDecayInfo>", -2, "vector", 216,
                  typeid(vector<SCDecayInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlESCDecayInfogR_Dictionary, isa_proxy, 0,
                  sizeof(vector<SCDecayInfo>) );
      instance.SetNew(&new_vectorlESCDecayInfogR);
      instance.SetNewArray(&newArray_vectorlESCDecayInfogR);
      instance.SetDelete(&delete_vectorlESCDecayInfogR);
      instance.SetDeleteArray(&deleteArray_vectorlESCDecayInfogR);
      instance.SetDestructor(&destruct_vectorlESCDecayInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<SCDecayInfo> >()));

      ::ROOT::AddClassAlternate("vector<SCDecayInfo>","std::vector<SCDecayInfo, std::allocator<SCDecayInfo> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<SCDecayInfo>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlESCDecayInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<SCDecayInfo>*)0x0)->GetClass();
      vectorlESCDecayInfogR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlESCDecayInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlESCDecayInfogR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<SCDecayInfo> : new vector<SCDecayInfo>;
   }
   static void *newArray_vectorlESCDecayInfogR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<SCDecayInfo>[nElements] : new vector<SCDecayInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlESCDecayInfogR(void *p) {
      delete ((vector<SCDecayInfo>*)p);
   }
   static void deleteArray_vectorlESCDecayInfogR(void *p) {
      delete [] ((vector<SCDecayInfo>*)p);
   }
   static void destruct_vectorlESCDecayInfogR(void *p) {
      typedef vector<SCDecayInfo> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<SCDecayInfo>

namespace ROOT {
   static TClass *vectorlERhoTuplemUgR_Dictionary();
   static void vectorlERhoTuplemUgR_TClassManip(TClass*);
   static void *new_vectorlERhoTuplemUgR(void *p = 0);
   static void *newArray_vectorlERhoTuplemUgR(Long_t size, void *p);
   static void delete_vectorlERhoTuplemUgR(void *p);
   static void deleteArray_vectorlERhoTuplemUgR(void *p);
   static void destruct_vectorlERhoTuplemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RhoTuple*>*)
   {
      vector<RhoTuple*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RhoTuple*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RhoTuple*>", -2, "vector", 216,
                  typeid(vector<RhoTuple*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERhoTuplemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RhoTuple*>) );
      instance.SetNew(&new_vectorlERhoTuplemUgR);
      instance.SetNewArray(&newArray_vectorlERhoTuplemUgR);
      instance.SetDelete(&delete_vectorlERhoTuplemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlERhoTuplemUgR);
      instance.SetDestructor(&destruct_vectorlERhoTuplemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RhoTuple*> >()));

      ::ROOT::AddClassAlternate("vector<RhoTuple*>","std::vector<RhoTuple*, std::allocator<RhoTuple*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<RhoTuple*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERhoTuplemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<RhoTuple*>*)0x0)->GetClass();
      vectorlERhoTuplemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERhoTuplemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERhoTuplemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RhoTuple*> : new vector<RhoTuple*>;
   }
   static void *newArray_vectorlERhoTuplemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RhoTuple*>[nElements] : new vector<RhoTuple*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERhoTuplemUgR(void *p) {
      delete ((vector<RhoTuple*>*)p);
   }
   static void deleteArray_vectorlERhoTuplemUgR(void *p) {
      delete [] ((vector<RhoTuple*>*)p);
   }
   static void destruct_vectorlERhoTuplemUgR(void *p) {
      typedef vector<RhoTuple*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<RhoTuple*>

namespace ROOT {
   static TClass *vectorlERhoParticleSelectorBasemUgR_Dictionary();
   static void vectorlERhoParticleSelectorBasemUgR_TClassManip(TClass*);
   static void *new_vectorlERhoParticleSelectorBasemUgR(void *p = 0);
   static void *newArray_vectorlERhoParticleSelectorBasemUgR(Long_t size, void *p);
   static void delete_vectorlERhoParticleSelectorBasemUgR(void *p);
   static void deleteArray_vectorlERhoParticleSelectorBasemUgR(void *p);
   static void destruct_vectorlERhoParticleSelectorBasemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RhoParticleSelectorBase*>*)
   {
      vector<RhoParticleSelectorBase*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RhoParticleSelectorBase*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RhoParticleSelectorBase*>", -2, "vector", 216,
                  typeid(vector<RhoParticleSelectorBase*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERhoParticleSelectorBasemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<RhoParticleSelectorBase*>) );
      instance.SetNew(&new_vectorlERhoParticleSelectorBasemUgR);
      instance.SetNewArray(&newArray_vectorlERhoParticleSelectorBasemUgR);
      instance.SetDelete(&delete_vectorlERhoParticleSelectorBasemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlERhoParticleSelectorBasemUgR);
      instance.SetDestructor(&destruct_vectorlERhoParticleSelectorBasemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RhoParticleSelectorBase*> >()));

      ::ROOT::AddClassAlternate("vector<RhoParticleSelectorBase*>","std::vector<RhoParticleSelectorBase*, std::allocator<RhoParticleSelectorBase*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<RhoParticleSelectorBase*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERhoParticleSelectorBasemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<RhoParticleSelectorBase*>*)0x0)->GetClass();
      vectorlERhoParticleSelectorBasemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERhoParticleSelectorBasemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERhoParticleSelectorBasemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RhoParticleSelectorBase*> : new vector<RhoParticleSelectorBase*>;
   }
   static void *newArray_vectorlERhoParticleSelectorBasemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RhoParticleSelectorBase*>[nElements] : new vector<RhoParticleSelectorBase*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERhoParticleSelectorBasemUgR(void *p) {
      delete ((vector<RhoParticleSelectorBase*>*)p);
   }
   static void deleteArray_vectorlERhoParticleSelectorBasemUgR(void *p) {
      delete [] ((vector<RhoParticleSelectorBase*>*)p);
   }
   static void destruct_vectorlERhoParticleSelectorBasemUgR(void *p) {
      typedef vector<RhoParticleSelectorBase*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<RhoParticleSelectorBase*>

namespace ROOT {
   static TClass *vectorlEChnsListProvidermUgR_Dictionary();
   static void vectorlEChnsListProvidermUgR_TClassManip(TClass*);
   static void *new_vectorlEChnsListProvidermUgR(void *p = 0);
   static void *newArray_vectorlEChnsListProvidermUgR(Long_t size, void *p);
   static void delete_vectorlEChnsListProvidermUgR(void *p);
   static void deleteArray_vectorlEChnsListProvidermUgR(void *p);
   static void destruct_vectorlEChnsListProvidermUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ChnsListProvider*>*)
   {
      vector<ChnsListProvider*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ChnsListProvider*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ChnsListProvider*>", -2, "vector", 216,
                  typeid(vector<ChnsListProvider*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEChnsListProvidermUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ChnsListProvider*>) );
      instance.SetNew(&new_vectorlEChnsListProvidermUgR);
      instance.SetNewArray(&newArray_vectorlEChnsListProvidermUgR);
      instance.SetDelete(&delete_vectorlEChnsListProvidermUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEChnsListProvidermUgR);
      instance.SetDestructor(&destruct_vectorlEChnsListProvidermUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ChnsListProvider*> >()));

      ::ROOT::AddClassAlternate("vector<ChnsListProvider*>","std::vector<ChnsListProvider*, std::allocator<ChnsListProvider*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ChnsListProvider*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEChnsListProvidermUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ChnsListProvider*>*)0x0)->GetClass();
      vectorlEChnsListProvidermUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEChnsListProvidermUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEChnsListProvidermUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ChnsListProvider*> : new vector<ChnsListProvider*>;
   }
   static void *newArray_vectorlEChnsListProvidermUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ChnsListProvider*>[nElements] : new vector<ChnsListProvider*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEChnsListProvidermUgR(void *p) {
      delete ((vector<ChnsListProvider*>*)p);
   }
   static void deleteArray_vectorlEChnsListProvidermUgR(void *p) {
      delete [] ((vector<ChnsListProvider*>*)p);
   }
   static void destruct_vectorlEChnsListProvidermUgR(void *p) {
      typedef vector<ChnsListProvider*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ChnsListProvider*>

namespace ROOT {
   static TClass *vectorlEChnsListDefinermUgR_Dictionary();
   static void vectorlEChnsListDefinermUgR_TClassManip(TClass*);
   static void *new_vectorlEChnsListDefinermUgR(void *p = 0);
   static void *newArray_vectorlEChnsListDefinermUgR(Long_t size, void *p);
   static void delete_vectorlEChnsListDefinermUgR(void *p);
   static void deleteArray_vectorlEChnsListDefinermUgR(void *p);
   static void destruct_vectorlEChnsListDefinermUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ChnsListDefiner*>*)
   {
      vector<ChnsListDefiner*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ChnsListDefiner*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ChnsListDefiner*>", -2, "vector", 216,
                  typeid(vector<ChnsListDefiner*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEChnsListDefinermUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ChnsListDefiner*>) );
      instance.SetNew(&new_vectorlEChnsListDefinermUgR);
      instance.SetNewArray(&newArray_vectorlEChnsListDefinermUgR);
      instance.SetDelete(&delete_vectorlEChnsListDefinermUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEChnsListDefinermUgR);
      instance.SetDestructor(&destruct_vectorlEChnsListDefinermUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ChnsListDefiner*> >()));

      ::ROOT::AddClassAlternate("vector<ChnsListDefiner*>","std::vector<ChnsListDefiner*, std::allocator<ChnsListDefiner*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ChnsListDefiner*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEChnsListDefinermUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ChnsListDefiner*>*)0x0)->GetClass();
      vectorlEChnsListDefinermUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEChnsListDefinermUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEChnsListDefinermUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ChnsListDefiner*> : new vector<ChnsListDefiner*>;
   }
   static void *newArray_vectorlEChnsListDefinermUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ChnsListDefiner*>[nElements] : new vector<ChnsListDefiner*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEChnsListDefinermUgR(void *p) {
      delete ((vector<ChnsListDefiner*>*)p);
   }
   static void deleteArray_vectorlEChnsListDefinermUgR(void *p) {
      delete [] ((vector<ChnsListDefiner*>*)p);
   }
   static void destruct_vectorlEChnsListDefinermUgR(void *p) {
      typedef vector<ChnsListDefiner*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ChnsListDefiner*>

namespace ROOT {
   static TClass *maplEstringcOintgR_Dictionary();
   static void maplEstringcOintgR_TClassManip(TClass*);
   static void *new_maplEstringcOintgR(void *p = 0);
   static void *newArray_maplEstringcOintgR(Long_t size, void *p);
   static void delete_maplEstringcOintgR(void *p);
   static void deleteArray_maplEstringcOintgR(void *p);
   static void destruct_maplEstringcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,int>*)
   {
      map<string,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,int>", -2, "map", 99,
                  typeid(map<string,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,int>) );
      instance.SetNew(&new_maplEstringcOintgR);
      instance.SetNewArray(&newArray_maplEstringcOintgR);
      instance.SetDelete(&delete_maplEstringcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOintgR);
      instance.SetDestructor(&destruct_maplEstringcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,int> >()));

      ::ROOT::AddClassAlternate("map<string,int>","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, int> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,int>*)0x0)->GetClass();
      maplEstringcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,int> : new map<string,int>;
   }
   static void *newArray_maplEstringcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,int>[nElements] : new map<string,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOintgR(void *p) {
      delete ((map<string,int>*)p);
   }
   static void deleteArray_maplEstringcOintgR(void *p) {
      delete [] ((map<string,int>*)p);
   }
   static void destruct_maplEstringcOintgR(void *p) {
      typedef map<string,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,int>

namespace ROOT {
   static TClass *maplEintcOvectorlEstringgRsPgR_Dictionary();
   static void maplEintcOvectorlEstringgRsPgR_TClassManip(TClass*);
   static void *new_maplEintcOvectorlEstringgRsPgR(void *p = 0);
   static void *newArray_maplEintcOvectorlEstringgRsPgR(Long_t size, void *p);
   static void delete_maplEintcOvectorlEstringgRsPgR(void *p);
   static void deleteArray_maplEintcOvectorlEstringgRsPgR(void *p);
   static void destruct_maplEintcOvectorlEstringgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,vector<string> >*)
   {
      map<int,vector<string> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,vector<string> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,vector<string> >", -2, "map", 99,
                  typeid(map<int,vector<string> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOvectorlEstringgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,vector<string> >) );
      instance.SetNew(&new_maplEintcOvectorlEstringgRsPgR);
      instance.SetNewArray(&newArray_maplEintcOvectorlEstringgRsPgR);
      instance.SetDelete(&delete_maplEintcOvectorlEstringgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOvectorlEstringgRsPgR);
      instance.SetDestructor(&destruct_maplEintcOvectorlEstringgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,vector<string> > >()));

      ::ROOT::AddClassAlternate("map<int,vector<string> >","std::map<int, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >, std::less<int>, std::allocator<std::pair<int const, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,vector<string> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOvectorlEstringgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,vector<string> >*)0x0)->GetClass();
      maplEintcOvectorlEstringgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOvectorlEstringgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOvectorlEstringgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,vector<string> > : new map<int,vector<string> >;
   }
   static void *newArray_maplEintcOvectorlEstringgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,vector<string> >[nElements] : new map<int,vector<string> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOvectorlEstringgRsPgR(void *p) {
      delete ((map<int,vector<string> >*)p);
   }
   static void deleteArray_maplEintcOvectorlEstringgRsPgR(void *p) {
      delete [] ((map<int,vector<string> >*)p);
   }
   static void destruct_maplEintcOvectorlEstringgRsPgR(void *p) {
      typedef map<int,vector<string> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,vector<string> >

namespace ROOT {
   static TClass *maplEintcOintgR_Dictionary();
   static void maplEintcOintgR_TClassManip(TClass*);
   static void *new_maplEintcOintgR(void *p = 0);
   static void *newArray_maplEintcOintgR(Long_t size, void *p);
   static void delete_maplEintcOintgR(void *p);
   static void deleteArray_maplEintcOintgR(void *p);
   static void destruct_maplEintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,int>*)
   {
      map<int,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,int>", -2, "map", 99,
                  typeid(map<int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,int>) );
      instance.SetNew(&new_maplEintcOintgR);
      instance.SetNewArray(&newArray_maplEintcOintgR);
      instance.SetDelete(&delete_maplEintcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOintgR);
      instance.SetDestructor(&destruct_maplEintcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,int> >()));

      ::ROOT::AddClassAlternate("map<int,int>","std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,int>*)0x0)->GetClass();
      maplEintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,int> : new map<int,int>;
   }
   static void *newArray_maplEintcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,int>[nElements] : new map<int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOintgR(void *p) {
      delete ((map<int,int>*)p);
   }
   static void deleteArray_maplEintcOintgR(void *p) {
      delete [] ((map<int,int>*)p);
   }
   static void destruct_maplEintcOintgR(void *p) {
      typedef map<int,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,int>

namespace ROOT {
   static TClass *maplEintcOTStringgR_Dictionary();
   static void maplEintcOTStringgR_TClassManip(TClass*);
   static void *new_maplEintcOTStringgR(void *p = 0);
   static void *newArray_maplEintcOTStringgR(Long_t size, void *p);
   static void delete_maplEintcOTStringgR(void *p);
   static void deleteArray_maplEintcOTStringgR(void *p);
   static void destruct_maplEintcOTStringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,TString>*)
   {
      map<int,TString> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,TString>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,TString>", -2, "map", 99,
                  typeid(map<int,TString>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOTStringgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,TString>) );
      instance.SetNew(&new_maplEintcOTStringgR);
      instance.SetNewArray(&newArray_maplEintcOTStringgR);
      instance.SetDelete(&delete_maplEintcOTStringgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOTStringgR);
      instance.SetDestructor(&destruct_maplEintcOTStringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,TString> >()));

      ::ROOT::AddClassAlternate("map<int,TString>","std::map<int, TString, std::less<int>, std::allocator<std::pair<int const, TString> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,TString>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOTStringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,TString>*)0x0)->GetClass();
      maplEintcOTStringgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOTStringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOTStringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TString> : new map<int,TString>;
   }
   static void *newArray_maplEintcOTStringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TString>[nElements] : new map<int,TString>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOTStringgR(void *p) {
      delete ((map<int,TString>*)p);
   }
   static void deleteArray_maplEintcOTStringgR(void *p) {
      delete [] ((map<int,TString>*)p);
   }
   static void destruct_maplEintcOTStringgR(void *p) {
      typedef map<int,TString> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,TString>

namespace ROOT {
   static TClass *maplETStringcOintgR_Dictionary();
   static void maplETStringcOintgR_TClassManip(TClass*);
   static void *new_maplETStringcOintgR(void *p = 0);
   static void *newArray_maplETStringcOintgR(Long_t size, void *p);
   static void delete_maplETStringcOintgR(void *p);
   static void deleteArray_maplETStringcOintgR(void *p);
   static void destruct_maplETStringcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,int>*)
   {
      map<TString,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,int>", -2, "map", 99,
                  typeid(map<TString,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,int>) );
      instance.SetNew(&new_maplETStringcOintgR);
      instance.SetNewArray(&newArray_maplETStringcOintgR);
      instance.SetDelete(&delete_maplETStringcOintgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOintgR);
      instance.SetDestructor(&destruct_maplETStringcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,int> >()));

      ::ROOT::AddClassAlternate("map<TString,int>","std::map<TString, int, std::less<TString>, std::allocator<std::pair<TString const, int> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,int>*)0x0)->GetClass();
      maplETStringcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,int> : new map<TString,int>;
   }
   static void *newArray_maplETStringcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,int>[nElements] : new map<TString,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOintgR(void *p) {
      delete ((map<TString,int>*)p);
   }
   static void deleteArray_maplETStringcOintgR(void *p) {
      delete [] ((map<TString,int>*)p);
   }
   static void destruct_maplETStringcOintgR(void *p) {
      typedef map<TString,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,int>

namespace ROOT {
   static TClass *maplETStringcOfloatgR_Dictionary();
   static void maplETStringcOfloatgR_TClassManip(TClass*);
   static void *new_maplETStringcOfloatgR(void *p = 0);
   static void *newArray_maplETStringcOfloatgR(Long_t size, void *p);
   static void delete_maplETStringcOfloatgR(void *p);
   static void deleteArray_maplETStringcOfloatgR(void *p);
   static void destruct_maplETStringcOfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,float>*)
   {
      map<TString,float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,float>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,float>", -2, "map", 99,
                  typeid(map<TString,float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,float>) );
      instance.SetNew(&new_maplETStringcOfloatgR);
      instance.SetNewArray(&newArray_maplETStringcOfloatgR);
      instance.SetDelete(&delete_maplETStringcOfloatgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOfloatgR);
      instance.SetDestructor(&destruct_maplETStringcOfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,float> >()));

      ::ROOT::AddClassAlternate("map<TString,float>","std::map<TString, float, std::less<TString>, std::allocator<std::pair<TString const, float> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,float>*)0x0)->GetClass();
      maplETStringcOfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,float> : new map<TString,float>;
   }
   static void *newArray_maplETStringcOfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,float>[nElements] : new map<TString,float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOfloatgR(void *p) {
      delete ((map<TString,float>*)p);
   }
   static void deleteArray_maplETStringcOfloatgR(void *p) {
      delete [] ((map<TString,float>*)p);
   }
   static void destruct_maplETStringcOfloatgR(void *p) {
      typedef map<TString,float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,float>

namespace ROOT {
   static TClass *maplETStringcOdoublegR_Dictionary();
   static void maplETStringcOdoublegR_TClassManip(TClass*);
   static void *new_maplETStringcOdoublegR(void *p = 0);
   static void *newArray_maplETStringcOdoublegR(Long_t size, void *p);
   static void delete_maplETStringcOdoublegR(void *p);
   static void deleteArray_maplETStringcOdoublegR(void *p);
   static void destruct_maplETStringcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,double>*)
   {
      map<TString,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,double>", -2, "map", 99,
                  typeid(map<TString,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,double>) );
      instance.SetNew(&new_maplETStringcOdoublegR);
      instance.SetNewArray(&newArray_maplETStringcOdoublegR);
      instance.SetDelete(&delete_maplETStringcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOdoublegR);
      instance.SetDestructor(&destruct_maplETStringcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,double> >()));

      ::ROOT::AddClassAlternate("map<TString,double>","std::map<TString, double, std::less<TString>, std::allocator<std::pair<TString const, double> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,double>*)0x0)->GetClass();
      maplETStringcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,double> : new map<TString,double>;
   }
   static void *newArray_maplETStringcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,double>[nElements] : new map<TString,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOdoublegR(void *p) {
      delete ((map<TString,double>*)p);
   }
   static void deleteArray_maplETStringcOdoublegR(void *p) {
      delete [] ((map<TString,double>*)p);
   }
   static void destruct_maplETStringcOdoublegR(void *p) {
      typedef map<TString,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,double>

namespace ROOT {
   static TClass *maplETStringcOchargR_Dictionary();
   static void maplETStringcOchargR_TClassManip(TClass*);
   static void *new_maplETStringcOchargR(void *p = 0);
   static void *newArray_maplETStringcOchargR(Long_t size, void *p);
   static void delete_maplETStringcOchargR(void *p);
   static void deleteArray_maplETStringcOchargR(void *p);
   static void destruct_maplETStringcOchargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,char>*)
   {
      map<TString,char> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,char>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,char>", -2, "map", 99,
                  typeid(map<TString,char>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOchargR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,char>) );
      instance.SetNew(&new_maplETStringcOchargR);
      instance.SetNewArray(&newArray_maplETStringcOchargR);
      instance.SetDelete(&delete_maplETStringcOchargR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOchargR);
      instance.SetDestructor(&destruct_maplETStringcOchargR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,char> >()));

      ::ROOT::AddClassAlternate("map<TString,char>","std::map<TString, char, std::less<TString>, std::allocator<std::pair<TString const, char> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,char>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOchargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,char>*)0x0)->GetClass();
      maplETStringcOchargR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOchargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOchargR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,char> : new map<TString,char>;
   }
   static void *newArray_maplETStringcOchargR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,char>[nElements] : new map<TString,char>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOchargR(void *p) {
      delete ((map<TString,char>*)p);
   }
   static void deleteArray_maplETStringcOchargR(void *p) {
      delete [] ((map<TString,char>*)p);
   }
   static void destruct_maplETStringcOchargR(void *p) {
      typedef map<TString,char> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,char>

namespace {
  void TriggerDictionaryInitialization_G__AnalysisToolsDict_Impl() {
    static const char* headers[] = {
"ChnsEventInfo.h",
"ChnsPidListMaker.h",
"ChnsAnalysis.h",
"ChnsSimpleAnalysis.h",
"ChnsAnalysisTask.h",
"ChnsMyAnalysisTask.h",
"ChnsAnaTask.h",
"ChnsListDefiner.h",
"ChnsListProvider.h",
"ChnsMcListConverter.h",
"ChnsAnaPidCombiner.h",
"ChnsAnaPidSelector.h",
"ChnsAnaContFact.h",
"ChnsAnaSelectorPar.h",
"ChnsGoodTrackSelector.h",
"ChnsEventShape.h",
"ChnsRhoTupleQA.h",
"ChnsParticleQATask.h",
"ChnsSimpleCombiner.h",
"ChnsSimpleCombinerTask.h",
"ChnsSimpleNtuple.h",
"StrTok.h",
0
    };
    static const char* includePaths[] = {
"/home/hexh/simulation/ChnsRoot/field",
"/home/hexh/simulation/ChnsRoot/trackbase",
"/home/hexh/simulation/ChnsRoot/ChnsData",
"/home/hexh/simulation/ChnsRoot/ChnsData/TrackData",
"/home/hexh/simulation/ChnsRoot/ChnsData/PidData",
"/home/hexh/simulation/ChnsRoot/rho",
"/home/hexh/simulation/ChnsRoot/rho/RhoBase",
"/home/hexh/simulation/ChnsRoot/rho/RhoTools",
"/home/hexh/simulation/ChnsRoot/rho/RhoSelector",
"/home/hexh/simulation/ChnsRoot/rho/RhoMath",
"/home/hexh/simulation/ChnsRoot/rho/RhoHistogram",
"/home/hexh/simulation/ChnsRoot/rho/RhoFitter",
"/home/hexh/simulation/ChnsRoot/rho/DecayTreeFitter",
"/home/hexh/simulation/ChnsRoot/ChnsTools/ChnsParticleFitters",
"/home/hexh/simulation/ChnsRoot/ChnsTools/AnalysisTools",
"/home/hexh/simulation/ChnsRoot/softrig",
"/home/hexh/simulation/ChnsRoot/geane",
"/home/eicc/software/FairSoft/install/include/root",
"/home/eicc/software/FairSoft/install/include",
"/home/eicc/FairRoot/build_18.4.2/include",
"/home/eicc/software/FairSoft/install/include/TGeant3",
"/home/eicc/software/FairSoft/install/include/root",
"/home/hexh/simulation/ChnsRoot/buildChns/ChnsTools/AnalysisTools/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__AnalysisToolsDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Summary information in the event)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$ChnsEventInfo.h")))  ChnsEventInfo;
class __attribute__((annotate("$clingAutoload$ChnsPidListMaker.h")))  ChnsPidListMaker;
class __attribute__((annotate("$clingAutoload$ChnsAnalysis.h")))  ChnsAnalysis;
class __attribute__((annotate("$clingAutoload$ChnsSimpleAnalysis.h")))  ChnsSimpleAnalysis;
class __attribute__((annotate("$clingAutoload$ChnsAnalysisTask.h")))  ChnsAnalysisTask;
class __attribute__((annotate("$clingAutoload$ChnsMyAnalysisTask.h")))  ChnsMyAnalysisTask;
class __attribute__((annotate("$clingAutoload$ChnsAnaTask.h")))  ChnsAnaTask;
class __attribute__((annotate("$clingAutoload$ChnsListDefiner.h")))  ChnsListDefiner;
class __attribute__((annotate("$clingAutoload$ChnsListProvider.h")))  ChnsListProvider;
class __attribute__((annotate("$clingAutoload$ChnsMcListConverter.h")))  ChnsMcListConverter;
class __attribute__((annotate("$clingAutoload$ChnsAnaPidCombiner.h")))  ChnsAnaPidCombiner;
class __attribute__((annotate(R"ATTRDUMP(Particle selector)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$ChnsAnaPidSelector.h")))  ChnsAnaPidSelector;
class __attribute__((annotate(R"ATTRDUMP(Factory for all libAnalysis parameter containers)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Factory for all libAnalysis parameter containers)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Factory for all libAnalysis parameter containers)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Factory for all libAnalysis parameter containers)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$ChnsAnaContFact.h")))  ChnsAnaContFact;
class __attribute__((annotate("$clingAutoload$ChnsAnaSelectorPar.h")))  ChnsAnaSelectorPar;
class __attribute__((annotate("$clingAutoload$ChnsGoodTrackSelector.h")))  ChnsGoodTrackSelector;
class __attribute__((annotate("$clingAutoload$ChnsEventShape.h")))  ChnsEventShape;
class __attribute__((annotate("$clingAutoload$ChnsRhoTupleQA.h")))  ChnsRhoTupleQA;
class __attribute__((annotate("$clingAutoload$ChnsParticleQATask.h")))  ChnsParticleQATask;
class __attribute__((annotate("$clingAutoload$ChnsSimpleCombiner.h")))  ChnsSimpleCombiner;
class __attribute__((annotate("$clingAutoload$ChnsSimpleCombinerTask.h")))  ChnsSimpleCombinerTask;
class __attribute__((annotate("$clingAutoload$ChnsSimpleNtuple.h")))  ChnsSimpleNtuple;
class __attribute__((annotate("$clingAutoload$StrTok.h")))  CStrTok;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__AnalysisToolsDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "ChnsEventInfo.h"
#include "ChnsPidListMaker.h"
#include "ChnsAnalysis.h"
#include "ChnsSimpleAnalysis.h"
#include "ChnsAnalysisTask.h"
#include "ChnsMyAnalysisTask.h"
#include "ChnsAnaTask.h"
#include "ChnsListDefiner.h"
#include "ChnsListProvider.h"
#include "ChnsMcListConverter.h"
#include "ChnsAnaPidCombiner.h"
#include "ChnsAnaPidSelector.h"
#include "ChnsAnaContFact.h"
#include "ChnsAnaSelectorPar.h"
#include "ChnsGoodTrackSelector.h"
#include "ChnsEventShape.h"
#include "ChnsRhoTupleQA.h"
#include "ChnsParticleQATask.h"
#include "ChnsSimpleCombiner.h"
#include "ChnsSimpleCombinerTask.h"
#include "ChnsSimpleNtuple.h"
#include "StrTok.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"CStrTok", payloadCode, "@",
"ChnsAnaContFact", payloadCode, "@",
"ChnsAnaPidCombiner", payloadCode, "@",
"ChnsAnaPidSelector", payloadCode, "@",
"ChnsAnaSelectorPar", payloadCode, "@",
"ChnsAnaTask", payloadCode, "@",
"ChnsAnalysis", payloadCode, "@",
"ChnsAnalysisTask", payloadCode, "@",
"ChnsEventInfo", payloadCode, "@",
"ChnsEventShape", payloadCode, "@",
"ChnsGoodTrackSelector", payloadCode, "@",
"ChnsListDefiner", payloadCode, "@",
"ChnsListProvider", payloadCode, "@",
"ChnsMcListConverter", payloadCode, "@",
"ChnsMyAnalysisTask", payloadCode, "@",
"ChnsParticleQATask", payloadCode, "@",
"ChnsPidListMaker", payloadCode, "@",
"ChnsRhoTupleQA", payloadCode, "@",
"ChnsSimpleAnalysis", payloadCode, "@",
"ChnsSimpleCombiner", payloadCode, "@",
"ChnsSimpleCombinerTask", payloadCode, "@",
"ChnsSimpleNtuple", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__AnalysisToolsDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__AnalysisToolsDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__AnalysisToolsDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__AnalysisToolsDict() {
  TriggerDictionaryInitialization_G__AnalysisToolsDict_Impl();
}
