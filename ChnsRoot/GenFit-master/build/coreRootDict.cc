// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIliangytdIEiccRootdIGenFitmImasterdIGenFitmImasterdIbuilddIcoreRootDict
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

#include "TBuffer.h"
#include "TVirtualObject.h"
#include <vector>
#include "TSchemaHelper.h"


// Header files passed as explicit arguments
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/core/include/AbsFinitePlane.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/core/include/AbsFitterInfo.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/core/include/AbsHMatrix.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/core/include/AbsTrackRep.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/core/include/DetPlane.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/core/include/FitStatus.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/core/include/IO.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/core/include/Material.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/core/include/MeasuredStateOnPlane.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/core/include/MeasurementFactory.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/core/include/MeasurementOnPlane.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/core/include/MeasurementProducer.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/core/include/StateOnPlane.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/core/include/AbsMeasurement.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/core/include/ThinScatterer.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/core/include/Track.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/core/include/TrackCand.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/core/include/TrackCandHit.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/core/include/TrackPoint.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/finitePlanes/include/RectangularFinitePlane.h"

// Header files passed via #pragma extra_include

namespace genfit {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *genfit_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genfit", 0 /*version*/, "", 37,
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
   static void delete_genfitcLcLAbsFinitePlane(void *p);
   static void deleteArray_genfitcLcLAbsFinitePlane(void *p);
   static void destruct_genfitcLcLAbsFinitePlane(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::AbsFinitePlane*)
   {
      ::genfit::AbsFinitePlane *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::AbsFinitePlane >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::AbsFinitePlane", ::genfit::AbsFinitePlane::Class_Version(), "", 45,
                  typeid(::genfit::AbsFinitePlane), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::AbsFinitePlane::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::AbsFinitePlane) );
      instance.SetDelete(&delete_genfitcLcLAbsFinitePlane);
      instance.SetDeleteArray(&deleteArray_genfitcLcLAbsFinitePlane);
      instance.SetDestructor(&destruct_genfitcLcLAbsFinitePlane);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::AbsFinitePlane*)
   {
      return GenerateInitInstanceLocal((::genfit::AbsFinitePlane*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::AbsFinitePlane*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLDetPlane(void *p = 0);
   static void *newArray_genfitcLcLDetPlane(Long_t size, void *p);
   static void delete_genfitcLcLDetPlane(void *p);
   static void deleteArray_genfitcLcLDetPlane(void *p);
   static void destruct_genfitcLcLDetPlane(void *p);
   static void streamer_genfitcLcLDetPlane(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::DetPlane*)
   {
      ::genfit::DetPlane *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::DetPlane >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::DetPlane", ::genfit::DetPlane::Class_Version(), "DetPlane.h", 59,
                  typeid(::genfit::DetPlane), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::DetPlane::Dictionary, isa_proxy, 17,
                  sizeof(::genfit::DetPlane) );
      instance.SetNew(&new_genfitcLcLDetPlane);
      instance.SetNewArray(&newArray_genfitcLcLDetPlane);
      instance.SetDelete(&delete_genfitcLcLDetPlane);
      instance.SetDeleteArray(&deleteArray_genfitcLcLDetPlane);
      instance.SetDestructor(&destruct_genfitcLcLDetPlane);
      instance.SetStreamerFunc(&streamer_genfitcLcLDetPlane);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::DetPlane*)
   {
      return GenerateInitInstanceLocal((::genfit::DetPlane*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::DetPlane*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *genfitcLcLSharedPlanePtrCreator_Dictionary();
   static void genfitcLcLSharedPlanePtrCreator_TClassManip(TClass*);
   static void *new_genfitcLcLSharedPlanePtrCreator(void *p = 0);
   static void *newArray_genfitcLcLSharedPlanePtrCreator(Long_t size, void *p);
   static void delete_genfitcLcLSharedPlanePtrCreator(void *p);
   static void deleteArray_genfitcLcLSharedPlanePtrCreator(void *p);
   static void destruct_genfitcLcLSharedPlanePtrCreator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::SharedPlanePtrCreator*)
   {
      ::genfit::SharedPlanePtrCreator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genfit::SharedPlanePtrCreator));
      static ::ROOT::TGenericClassInfo 
         instance("genfit::SharedPlanePtrCreator", "SharedPlanePtr.h", 45,
                  typeid(::genfit::SharedPlanePtrCreator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &genfitcLcLSharedPlanePtrCreator_Dictionary, isa_proxy, 1,
                  sizeof(::genfit::SharedPlanePtrCreator) );
      instance.SetNew(&new_genfitcLcLSharedPlanePtrCreator);
      instance.SetNewArray(&newArray_genfitcLcLSharedPlanePtrCreator);
      instance.SetDelete(&delete_genfitcLcLSharedPlanePtrCreator);
      instance.SetDeleteArray(&deleteArray_genfitcLcLSharedPlanePtrCreator);
      instance.SetDestructor(&destruct_genfitcLcLSharedPlanePtrCreator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::SharedPlanePtrCreator*)
   {
      return GenerateInitInstanceLocal((::genfit::SharedPlanePtrCreator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::SharedPlanePtrCreator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *genfitcLcLSharedPlanePtrCreator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genfit::SharedPlanePtrCreator*)0x0)->GetClass();
      genfitcLcLSharedPlanePtrCreator_TClassManip(theClass);
   return theClass;
   }

   static void genfitcLcLSharedPlanePtrCreator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLMaterial(void *p = 0);
   static void *newArray_genfitcLcLMaterial(Long_t size, void *p);
   static void delete_genfitcLcLMaterial(void *p);
   static void deleteArray_genfitcLcLMaterial(void *p);
   static void destruct_genfitcLcLMaterial(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::Material*)
   {
      ::genfit::Material *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::Material >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::Material", ::genfit::Material::Class_Version(), "Material.h", 8,
                  typeid(::genfit::Material), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::Material::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::Material) );
      instance.SetNew(&new_genfitcLcLMaterial);
      instance.SetNewArray(&newArray_genfitcLcLMaterial);
      instance.SetDelete(&delete_genfitcLcLMaterial);
      instance.SetDeleteArray(&deleteArray_genfitcLcLMaterial);
      instance.SetDestructor(&destruct_genfitcLcLMaterial);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::Material*)
   {
      return GenerateInitInstanceLocal((::genfit::Material*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::Material*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_genfitcLcLAbsTrackRep(void *p);
   static void deleteArray_genfitcLcLAbsTrackRep(void *p);
   static void destruct_genfitcLcLAbsTrackRep(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::AbsTrackRep*)
   {
      ::genfit::AbsTrackRep *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::AbsTrackRep >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::AbsTrackRep", ::genfit::AbsTrackRep::Class_Version(), "AbsTrackRep.h", 66,
                  typeid(::genfit::AbsTrackRep), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::AbsTrackRep::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::AbsTrackRep) );
      instance.SetDelete(&delete_genfitcLcLAbsTrackRep);
      instance.SetDeleteArray(&deleteArray_genfitcLcLAbsTrackRep);
      instance.SetDestructor(&destruct_genfitcLcLAbsTrackRep);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::AbsTrackRep*)
   {
      return GenerateInitInstanceLocal((::genfit::AbsTrackRep*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::AbsTrackRep*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLStateOnPlane(void *p = 0);
   static void *newArray_genfitcLcLStateOnPlane(Long_t size, void *p);
   static void delete_genfitcLcLStateOnPlane(void *p);
   static void deleteArray_genfitcLcLStateOnPlane(void *p);
   static void destruct_genfitcLcLStateOnPlane(void *p);
   static void streamer_genfitcLcLStateOnPlane(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::StateOnPlane*)
   {
      ::genfit::StateOnPlane *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::StateOnPlane >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::StateOnPlane", ::genfit::StateOnPlane::Class_Version(), "StateOnPlane.h", 47,
                  typeid(::genfit::StateOnPlane), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::StateOnPlane::Dictionary, isa_proxy, 17,
                  sizeof(::genfit::StateOnPlane) );
      instance.SetNew(&new_genfitcLcLStateOnPlane);
      instance.SetNewArray(&newArray_genfitcLcLStateOnPlane);
      instance.SetDelete(&delete_genfitcLcLStateOnPlane);
      instance.SetDeleteArray(&deleteArray_genfitcLcLStateOnPlane);
      instance.SetDestructor(&destruct_genfitcLcLStateOnPlane);
      instance.SetStreamerFunc(&streamer_genfitcLcLStateOnPlane);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::StateOnPlane*)
   {
      return GenerateInitInstanceLocal((::genfit::StateOnPlane*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::StateOnPlane*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLMeasuredStateOnPlane(void *p = 0);
   static void *newArray_genfitcLcLMeasuredStateOnPlane(Long_t size, void *p);
   static void delete_genfitcLcLMeasuredStateOnPlane(void *p);
   static void deleteArray_genfitcLcLMeasuredStateOnPlane(void *p);
   static void destruct_genfitcLcLMeasuredStateOnPlane(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::MeasuredStateOnPlane*)
   {
      ::genfit::MeasuredStateOnPlane *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::MeasuredStateOnPlane >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::MeasuredStateOnPlane", ::genfit::MeasuredStateOnPlane::Class_Version(), "MeasuredStateOnPlane.h", 39,
                  typeid(::genfit::MeasuredStateOnPlane), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::MeasuredStateOnPlane::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::MeasuredStateOnPlane) );
      instance.SetNew(&new_genfitcLcLMeasuredStateOnPlane);
      instance.SetNewArray(&newArray_genfitcLcLMeasuredStateOnPlane);
      instance.SetDelete(&delete_genfitcLcLMeasuredStateOnPlane);
      instance.SetDeleteArray(&deleteArray_genfitcLcLMeasuredStateOnPlane);
      instance.SetDestructor(&destruct_genfitcLcLMeasuredStateOnPlane);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::MeasuredStateOnPlane*)
   {
      return GenerateInitInstanceLocal((::genfit::MeasuredStateOnPlane*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::MeasuredStateOnPlane*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_genfitcLcLAbsHMatrix(void *p);
   static void deleteArray_genfitcLcLAbsHMatrix(void *p);
   static void destruct_genfitcLcLAbsHMatrix(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::AbsHMatrix*)
   {
      ::genfit::AbsHMatrix *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::AbsHMatrix >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::AbsHMatrix", ::genfit::AbsHMatrix::Class_Version(), "AbsHMatrix.h", 37,
                  typeid(::genfit::AbsHMatrix), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::AbsHMatrix::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::AbsHMatrix) );
      instance.SetDelete(&delete_genfitcLcLAbsHMatrix);
      instance.SetDeleteArray(&deleteArray_genfitcLcLAbsHMatrix);
      instance.SetDestructor(&destruct_genfitcLcLAbsHMatrix);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::AbsHMatrix*)
   {
      return GenerateInitInstanceLocal((::genfit::AbsHMatrix*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::AbsHMatrix*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLMeasurementOnPlane(void *p = 0);
   static void *newArray_genfitcLcLMeasurementOnPlane(Long_t size, void *p);
   static void delete_genfitcLcLMeasurementOnPlane(void *p);
   static void deleteArray_genfitcLcLMeasurementOnPlane(void *p);
   static void destruct_genfitcLcLMeasurementOnPlane(void *p);
   static void streamer_genfitcLcLMeasurementOnPlane(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::MeasurementOnPlane*)
   {
      ::genfit::MeasurementOnPlane *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::MeasurementOnPlane >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::MeasurementOnPlane", ::genfit::MeasurementOnPlane::Class_Version(), "MeasurementOnPlane.h", 46,
                  typeid(::genfit::MeasurementOnPlane), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::MeasurementOnPlane::Dictionary, isa_proxy, 17,
                  sizeof(::genfit::MeasurementOnPlane) );
      instance.SetNew(&new_genfitcLcLMeasurementOnPlane);
      instance.SetNewArray(&newArray_genfitcLcLMeasurementOnPlane);
      instance.SetDelete(&delete_genfitcLcLMeasurementOnPlane);
      instance.SetDeleteArray(&deleteArray_genfitcLcLMeasurementOnPlane);
      instance.SetDestructor(&destruct_genfitcLcLMeasurementOnPlane);
      instance.SetStreamerFunc(&streamer_genfitcLcLMeasurementOnPlane);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::MeasurementOnPlane*)
   {
      return GenerateInitInstanceLocal((::genfit::MeasurementOnPlane*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::MeasurementOnPlane*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *genfitcLcLPruneFlags_Dictionary();
   static void genfitcLcLPruneFlags_TClassManip(TClass*);
   static void *new_genfitcLcLPruneFlags(void *p = 0);
   static void *newArray_genfitcLcLPruneFlags(Long_t size, void *p);
   static void delete_genfitcLcLPruneFlags(void *p);
   static void deleteArray_genfitcLcLPruneFlags(void *p);
   static void destruct_genfitcLcLPruneFlags(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::PruneFlags*)
   {
      ::genfit::PruneFlags *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genfit::PruneFlags));
      static ::ROOT::TGenericClassInfo 
         instance("genfit::PruneFlags", "FitStatus.h", 47,
                  typeid(::genfit::PruneFlags), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &genfitcLcLPruneFlags_Dictionary, isa_proxy, 4,
                  sizeof(::genfit::PruneFlags) );
      instance.SetNew(&new_genfitcLcLPruneFlags);
      instance.SetNewArray(&newArray_genfitcLcLPruneFlags);
      instance.SetDelete(&delete_genfitcLcLPruneFlags);
      instance.SetDeleteArray(&deleteArray_genfitcLcLPruneFlags);
      instance.SetDestructor(&destruct_genfitcLcLPruneFlags);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::PruneFlags*)
   {
      return GenerateInitInstanceLocal((::genfit::PruneFlags*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::PruneFlags*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *genfitcLcLPruneFlags_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genfit::PruneFlags*)0x0)->GetClass();
      genfitcLcLPruneFlags_TClassManip(theClass);
   return theClass;
   }

   static void genfitcLcLPruneFlags_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLFitStatus(void *p = 0);
   static void *newArray_genfitcLcLFitStatus(Long_t size, void *p);
   static void delete_genfitcLcLFitStatus(void *p);
   static void deleteArray_genfitcLcLFitStatus(void *p);
   static void destruct_genfitcLcLFitStatus(void *p);

   // Schema evolution read functions
   static void read_genfitcLcLFitStatus_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_trackIsPruned_ = oldObj->GetId("trackIsPruned_");
#endif
      struct genfitcLcLFitStatus_Onfile {
         bool &trackIsPruned_;
         genfitcLcLFitStatus_Onfile(bool &onfile_trackIsPruned_ ): trackIsPruned_(onfile_trackIsPruned_) {}
      };
      static Long_t offset_Onfile_genfitcLcLFitStatus_trackIsPruned_ = oldObj->GetClass()->GetDataMemberOffset("trackIsPruned_");
      char *onfile_add = (char*)oldObj->GetObject();
      genfitcLcLFitStatus_Onfile onfile(
         *(bool*)(onfile_add+offset_Onfile_genfitcLcLFitStatus_trackIsPruned_) );

      static TClassRef cls("genfit::FitStatus");
      static Long_t offset_pruneFlags_ = cls->GetDataMemberOffset("pruneFlags_");
      genfit::PruneFlags& pruneFlags_ = *(genfit::PruneFlags*)(target+offset_pruneFlags_);
      genfit::FitStatus* newObj = (genfit::FitStatus*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      pruneFlags_.setFlags(); 
   }
   static void read_genfitcLcLFitStatus_1( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
      static TClassRef cls("genfit::FitStatus");
      static Long_t offset_pruneFlags_ = cls->GetDataMemberOffset("pruneFlags_");
      genfit::PruneFlags& pruneFlags_ = *(genfit::PruneFlags*)(target+offset_pruneFlags_);
      genfit::FitStatus* newObj = (genfit::FitStatus*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      pruneFlags_.setFlags(); 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::FitStatus*)
   {
      ::genfit::FitStatus *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::FitStatus >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::FitStatus", ::genfit::FitStatus::Class_Version(), "FitStatus.h", 80,
                  typeid(::genfit::FitStatus), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::FitStatus::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::FitStatus) );
      instance.SetNew(&new_genfitcLcLFitStatus);
      instance.SetNewArray(&newArray_genfitcLcLFitStatus);
      instance.SetDelete(&delete_genfitcLcLFitStatus);
      instance.SetDeleteArray(&deleteArray_genfitcLcLFitStatus);
      instance.SetDestructor(&destruct_genfitcLcLFitStatus);

      ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<ROOT::Internal::TSchemaHelper> readrules(2);
      rule = &readrules[0];
      rule->fSourceClass = "genfit::FitStatus";
      rule->fTarget      = "pruneFlags_";
      rule->fSource      = "bool trackIsPruned_;";
      rule->fFunctionPtr = (void *)TFunc2void( read_genfitcLcLFitStatus_0);
      rule->fCode        = " pruneFlags_.setFlags(); ";
      rule->fVersion     = "[1]";
      rule = &readrules[1];
      rule->fSourceClass = "genfit::FitStatus";
      rule->fTarget      = "pruneFlags_";
      rule->fSource      = "";
      rule->fFunctionPtr = (void *)TFunc2void( read_genfitcLcLFitStatus_1);
      rule->fCode        = " pruneFlags_.setFlags(); ";
      rule->fVersion     = "[2]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::FitStatus*)
   {
      return GenerateInitInstanceLocal((::genfit::FitStatus*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::FitStatus*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_genfitcLcLAbsFitterInfo(void *p);
   static void deleteArray_genfitcLcLAbsFitterInfo(void *p);
   static void destruct_genfitcLcLAbsFitterInfo(void *p);
   static void streamer_genfitcLcLAbsFitterInfo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::AbsFitterInfo*)
   {
      ::genfit::AbsFitterInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::AbsFitterInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::AbsFitterInfo", ::genfit::AbsFitterInfo::Class_Version(), "", 117,
                  typeid(::genfit::AbsFitterInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::AbsFitterInfo::Dictionary, isa_proxy, 17,
                  sizeof(::genfit::AbsFitterInfo) );
      instance.SetDelete(&delete_genfitcLcLAbsFitterInfo);
      instance.SetDeleteArray(&deleteArray_genfitcLcLAbsFitterInfo);
      instance.SetDestructor(&destruct_genfitcLcLAbsFitterInfo);
      instance.SetStreamerFunc(&streamer_genfitcLcLAbsFitterInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::AbsFitterInfo*)
   {
      return GenerateInitInstanceLocal((::genfit::AbsFitterInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::AbsFitterInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLTrackCandHit(void *p = 0);
   static void *newArray_genfitcLcLTrackCandHit(Long_t size, void *p);
   static void delete_genfitcLcLTrackCandHit(void *p);
   static void deleteArray_genfitcLcLTrackCandHit(void *p);
   static void destruct_genfitcLcLTrackCandHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::TrackCandHit*)
   {
      ::genfit::TrackCandHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::TrackCandHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::TrackCandHit", ::genfit::TrackCandHit::Class_Version(), "TrackCandHit.h", 34,
                  typeid(::genfit::TrackCandHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::TrackCandHit::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::TrackCandHit) );
      instance.SetNew(&new_genfitcLcLTrackCandHit);
      instance.SetNewArray(&newArray_genfitcLcLTrackCandHit);
      instance.SetDelete(&delete_genfitcLcLTrackCandHit);
      instance.SetDeleteArray(&deleteArray_genfitcLcLTrackCandHit);
      instance.SetDestructor(&destruct_genfitcLcLTrackCandHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::TrackCandHit*)
   {
      return GenerateInitInstanceLocal((::genfit::TrackCandHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::TrackCandHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLTrackCand(void *p = 0);
   static void *newArray_genfitcLcLTrackCand(Long_t size, void *p);
   static void delete_genfitcLcLTrackCand(void *p);
   static void deleteArray_genfitcLcLTrackCand(void *p);
   static void destruct_genfitcLcLTrackCand(void *p);

   // Schema evolution read functions
   static void read_genfitcLcLTrackCand_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
      static TClassRef cls("genfit::TrackCand");
      static Long_t offset_time_ = cls->GetDataMemberOffset("time_");
      double& time_ = *(double*)(target+offset_time_);
      genfit::TrackCand* newObj = (genfit::TrackCand*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
      time_ = 0; 
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::TrackCand*)
   {
      ::genfit::TrackCand *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::TrackCand >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::TrackCand", ::genfit::TrackCand::Class_Version(), "TrackCand.h", 69,
                  typeid(::genfit::TrackCand), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::TrackCand::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::TrackCand) );
      instance.SetNew(&new_genfitcLcLTrackCand);
      instance.SetNewArray(&newArray_genfitcLcLTrackCand);
      instance.SetDelete(&delete_genfitcLcLTrackCand);
      instance.SetDeleteArray(&deleteArray_genfitcLcLTrackCand);
      instance.SetDestructor(&destruct_genfitcLcLTrackCand);

      ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "genfit::TrackCand";
      rule->fTarget      = "time_";
      rule->fSource      = "";
      rule->fFunctionPtr = (void *)TFunc2void( read_genfitcLcLTrackCand_0);
      rule->fCode        = " time_ = 0; ";
      rule->fVersion     = "[1]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::TrackCand*)
   {
      return GenerateInitInstanceLocal((::genfit::TrackCand*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::TrackCand*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_genfitcLcLAbsMeasurement(void *p);
   static void deleteArray_genfitcLcLAbsMeasurement(void *p);
   static void destruct_genfitcLcLAbsMeasurement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::AbsMeasurement*)
   {
      ::genfit::AbsMeasurement *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::AbsMeasurement >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::AbsMeasurement", ::genfit::AbsMeasurement::Class_Version(), "", 1868,
                  typeid(::genfit::AbsMeasurement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::AbsMeasurement::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::AbsMeasurement) );
      instance.SetDelete(&delete_genfitcLcLAbsMeasurement);
      instance.SetDeleteArray(&deleteArray_genfitcLcLAbsMeasurement);
      instance.SetDestructor(&destruct_genfitcLcLAbsMeasurement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::AbsMeasurement*)
   {
      return GenerateInitInstanceLocal((::genfit::AbsMeasurement*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::AbsMeasurement*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLThinScatterer(void *p = 0);
   static void *newArray_genfitcLcLThinScatterer(Long_t size, void *p);
   static void delete_genfitcLcLThinScatterer(void *p);
   static void deleteArray_genfitcLcLThinScatterer(void *p);
   static void destruct_genfitcLcLThinScatterer(void *p);
   static void streamer_genfitcLcLThinScatterer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::ThinScatterer*)
   {
      ::genfit::ThinScatterer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::ThinScatterer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::ThinScatterer", ::genfit::ThinScatterer::Class_Version(), "", 1993,
                  typeid(::genfit::ThinScatterer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::ThinScatterer::Dictionary, isa_proxy, 17,
                  sizeof(::genfit::ThinScatterer) );
      instance.SetNew(&new_genfitcLcLThinScatterer);
      instance.SetNewArray(&newArray_genfitcLcLThinScatterer);
      instance.SetDelete(&delete_genfitcLcLThinScatterer);
      instance.SetDeleteArray(&deleteArray_genfitcLcLThinScatterer);
      instance.SetDestructor(&destruct_genfitcLcLThinScatterer);
      instance.SetStreamerFunc(&streamer_genfitcLcLThinScatterer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::ThinScatterer*)
   {
      return GenerateInitInstanceLocal((::genfit::ThinScatterer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::ThinScatterer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLTrackPoint(void *p = 0);
   static void *newArray_genfitcLcLTrackPoint(Long_t size, void *p);
   static void delete_genfitcLcLTrackPoint(void *p);
   static void deleteArray_genfitcLcLTrackPoint(void *p);
   static void destruct_genfitcLcLTrackPoint(void *p);
   static void streamer_genfitcLcLTrackPoint(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::TrackPoint*)
   {
      ::genfit::TrackPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::TrackPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::TrackPoint", ::genfit::TrackPoint::Class_Version(), "TrackPoint.h", 46,
                  typeid(::genfit::TrackPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::TrackPoint::Dictionary, isa_proxy, 17,
                  sizeof(::genfit::TrackPoint) );
      instance.SetNew(&new_genfitcLcLTrackPoint);
      instance.SetNewArray(&newArray_genfitcLcLTrackPoint);
      instance.SetDelete(&delete_genfitcLcLTrackPoint);
      instance.SetDeleteArray(&deleteArray_genfitcLcLTrackPoint);
      instance.SetDestructor(&destruct_genfitcLcLTrackPoint);
      instance.SetStreamerFunc(&streamer_genfitcLcLTrackPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::TrackPoint*)
   {
      return GenerateInitInstanceLocal((::genfit::TrackPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::TrackPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLTrack(void *p = 0);
   static void *newArray_genfitcLcLTrack(Long_t size, void *p);
   static void delete_genfitcLcLTrack(void *p);
   static void deleteArray_genfitcLcLTrack(void *p);
   static void destruct_genfitcLcLTrack(void *p);
   static void streamer_genfitcLcLTrack(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::Track*)
   {
      ::genfit::Track *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::Track >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::Track", ::genfit::Track::Class_Version(), "", 2093,
                  typeid(::genfit::Track), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::Track::Dictionary, isa_proxy, 17,
                  sizeof(::genfit::Track) );
      instance.SetNew(&new_genfitcLcLTrack);
      instance.SetNewArray(&newArray_genfitcLcLTrack);
      instance.SetDelete(&delete_genfitcLcLTrack);
      instance.SetDeleteArray(&deleteArray_genfitcLcLTrack);
      instance.SetDestructor(&destruct_genfitcLcLTrack);
      instance.SetStreamerFunc(&streamer_genfitcLcLTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::Track*)
   {
      return GenerateInitInstanceLocal((::genfit::Track*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::Track*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLRectangularFinitePlane(void *p = 0);
   static void *newArray_genfitcLcLRectangularFinitePlane(Long_t size, void *p);
   static void delete_genfitcLcLRectangularFinitePlane(void *p);
   static void deleteArray_genfitcLcLRectangularFinitePlane(void *p);
   static void destruct_genfitcLcLRectangularFinitePlane(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::RectangularFinitePlane*)
   {
      ::genfit::RectangularFinitePlane *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::RectangularFinitePlane >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::RectangularFinitePlane", ::genfit::RectangularFinitePlane::Class_Version(), "", 2897,
                  typeid(::genfit::RectangularFinitePlane), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::RectangularFinitePlane::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::RectangularFinitePlane) );
      instance.SetNew(&new_genfitcLcLRectangularFinitePlane);
      instance.SetNewArray(&newArray_genfitcLcLRectangularFinitePlane);
      instance.SetDelete(&delete_genfitcLcLRectangularFinitePlane);
      instance.SetDeleteArray(&deleteArray_genfitcLcLRectangularFinitePlane);
      instance.SetDestructor(&destruct_genfitcLcLRectangularFinitePlane);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::RectangularFinitePlane*)
   {
      return GenerateInitInstanceLocal((::genfit::RectangularFinitePlane*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::RectangularFinitePlane*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr AbsFinitePlane::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AbsFinitePlane::Class_Name()
{
   return "genfit::AbsFinitePlane";
}

//______________________________________________________________________________
const char *AbsFinitePlane::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::AbsFinitePlane*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AbsFinitePlane::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::AbsFinitePlane*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AbsFinitePlane::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::AbsFinitePlane*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AbsFinitePlane::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::AbsFinitePlane*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr DetPlane::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DetPlane::Class_Name()
{
   return "genfit::DetPlane";
}

//______________________________________________________________________________
const char *DetPlane::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::DetPlane*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DetPlane::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::DetPlane*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DetPlane::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::DetPlane*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DetPlane::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::DetPlane*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr Material::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Material::Class_Name()
{
   return "genfit::Material";
}

//______________________________________________________________________________
const char *Material::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::Material*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Material::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::Material*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Material::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::Material*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Material::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::Material*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr AbsTrackRep::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AbsTrackRep::Class_Name()
{
   return "genfit::AbsTrackRep";
}

//______________________________________________________________________________
const char *AbsTrackRep::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::AbsTrackRep*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AbsTrackRep::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::AbsTrackRep*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AbsTrackRep::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::AbsTrackRep*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AbsTrackRep::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::AbsTrackRep*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr StateOnPlane::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *StateOnPlane::Class_Name()
{
   return "genfit::StateOnPlane";
}

//______________________________________________________________________________
const char *StateOnPlane::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::StateOnPlane*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int StateOnPlane::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::StateOnPlane*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *StateOnPlane::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::StateOnPlane*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *StateOnPlane::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::StateOnPlane*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr MeasuredStateOnPlane::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MeasuredStateOnPlane::Class_Name()
{
   return "genfit::MeasuredStateOnPlane";
}

//______________________________________________________________________________
const char *MeasuredStateOnPlane::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::MeasuredStateOnPlane*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MeasuredStateOnPlane::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::MeasuredStateOnPlane*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MeasuredStateOnPlane::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::MeasuredStateOnPlane*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MeasuredStateOnPlane::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::MeasuredStateOnPlane*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr AbsHMatrix::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AbsHMatrix::Class_Name()
{
   return "genfit::AbsHMatrix";
}

//______________________________________________________________________________
const char *AbsHMatrix::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::AbsHMatrix*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AbsHMatrix::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::AbsHMatrix*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AbsHMatrix::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::AbsHMatrix*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AbsHMatrix::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::AbsHMatrix*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr MeasurementOnPlane::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MeasurementOnPlane::Class_Name()
{
   return "genfit::MeasurementOnPlane";
}

//______________________________________________________________________________
const char *MeasurementOnPlane::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::MeasurementOnPlane*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MeasurementOnPlane::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::MeasurementOnPlane*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MeasurementOnPlane::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::MeasurementOnPlane*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MeasurementOnPlane::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::MeasurementOnPlane*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr FitStatus::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *FitStatus::Class_Name()
{
   return "genfit::FitStatus";
}

//______________________________________________________________________________
const char *FitStatus::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::FitStatus*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int FitStatus::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::FitStatus*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FitStatus::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::FitStatus*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FitStatus::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::FitStatus*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr AbsFitterInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AbsFitterInfo::Class_Name()
{
   return "genfit::AbsFitterInfo";
}

//______________________________________________________________________________
const char *AbsFitterInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::AbsFitterInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AbsFitterInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::AbsFitterInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AbsFitterInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::AbsFitterInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AbsFitterInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::AbsFitterInfo*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr TrackCandHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TrackCandHit::Class_Name()
{
   return "genfit::TrackCandHit";
}

//______________________________________________________________________________
const char *TrackCandHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::TrackCandHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TrackCandHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::TrackCandHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TrackCandHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::TrackCandHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TrackCandHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::TrackCandHit*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr TrackCand::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TrackCand::Class_Name()
{
   return "genfit::TrackCand";
}

//______________________________________________________________________________
const char *TrackCand::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::TrackCand*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TrackCand::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::TrackCand*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TrackCand::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::TrackCand*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TrackCand::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::TrackCand*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr AbsMeasurement::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AbsMeasurement::Class_Name()
{
   return "genfit::AbsMeasurement";
}

//______________________________________________________________________________
const char *AbsMeasurement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::AbsMeasurement*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AbsMeasurement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::AbsMeasurement*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AbsMeasurement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::AbsMeasurement*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AbsMeasurement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::AbsMeasurement*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr ThinScatterer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ThinScatterer::Class_Name()
{
   return "genfit::ThinScatterer";
}

//______________________________________________________________________________
const char *ThinScatterer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::ThinScatterer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ThinScatterer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::ThinScatterer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ThinScatterer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::ThinScatterer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ThinScatterer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::ThinScatterer*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr TrackPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TrackPoint::Class_Name()
{
   return "genfit::TrackPoint";
}

//______________________________________________________________________________
const char *TrackPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::TrackPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TrackPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::TrackPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TrackPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::TrackPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TrackPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::TrackPoint*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr Track::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Track::Class_Name()
{
   return "genfit::Track";
}

//______________________________________________________________________________
const char *Track::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::Track*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Track::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::Track*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Track::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::Track*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Track::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::Track*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr RectangularFinitePlane::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RectangularFinitePlane::Class_Name()
{
   return "genfit::RectangularFinitePlane";
}

//______________________________________________________________________________
const char *RectangularFinitePlane::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::RectangularFinitePlane*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RectangularFinitePlane::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::RectangularFinitePlane*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RectangularFinitePlane::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::RectangularFinitePlane*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RectangularFinitePlane::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::RectangularFinitePlane*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
void AbsFinitePlane::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::AbsFinitePlane.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::AbsFinitePlane::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::AbsFinitePlane::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrapper around operator delete
   static void delete_genfitcLcLAbsFinitePlane(void *p) {
      delete ((::genfit::AbsFinitePlane*)p);
   }
   static void deleteArray_genfitcLcLAbsFinitePlane(void *p) {
      delete [] ((::genfit::AbsFinitePlane*)p);
   }
   static void destruct_genfitcLcLAbsFinitePlane(void *p) {
      typedef ::genfit::AbsFinitePlane current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::AbsFinitePlane

namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLDetPlane(void *p) {
      return  p ? new(p) ::genfit::DetPlane : new ::genfit::DetPlane;
   }
   static void *newArray_genfitcLcLDetPlane(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::DetPlane[nElements] : new ::genfit::DetPlane[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLDetPlane(void *p) {
      delete ((::genfit::DetPlane*)p);
   }
   static void deleteArray_genfitcLcLDetPlane(void *p) {
      delete [] ((::genfit::DetPlane*)p);
   }
   static void destruct_genfitcLcLDetPlane(void *p) {
      typedef ::genfit::DetPlane current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_genfitcLcLDetPlane(TBuffer &buf, void *obj) {
      ((::genfit::DetPlane*)obj)->::genfit::DetPlane::Streamer(buf);
   }
} // end of namespace ROOT for class ::genfit::DetPlane

namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLSharedPlanePtrCreator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::SharedPlanePtrCreator : new ::genfit::SharedPlanePtrCreator;
   }
   static void *newArray_genfitcLcLSharedPlanePtrCreator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::SharedPlanePtrCreator[nElements] : new ::genfit::SharedPlanePtrCreator[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLSharedPlanePtrCreator(void *p) {
      delete ((::genfit::SharedPlanePtrCreator*)p);
   }
   static void deleteArray_genfitcLcLSharedPlanePtrCreator(void *p) {
      delete [] ((::genfit::SharedPlanePtrCreator*)p);
   }
   static void destruct_genfitcLcLSharedPlanePtrCreator(void *p) {
      typedef ::genfit::SharedPlanePtrCreator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::SharedPlanePtrCreator

namespace genfit {
//______________________________________________________________________________
void Material::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::Material.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::Material::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::Material::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLMaterial(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::Material : new ::genfit::Material;
   }
   static void *newArray_genfitcLcLMaterial(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::Material[nElements] : new ::genfit::Material[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLMaterial(void *p) {
      delete ((::genfit::Material*)p);
   }
   static void deleteArray_genfitcLcLMaterial(void *p) {
      delete [] ((::genfit::Material*)p);
   }
   static void destruct_genfitcLcLMaterial(void *p) {
      typedef ::genfit::Material current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::Material

namespace genfit {
//______________________________________________________________________________
void AbsTrackRep::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::AbsTrackRep.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::AbsTrackRep::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::AbsTrackRep::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrapper around operator delete
   static void delete_genfitcLcLAbsTrackRep(void *p) {
      delete ((::genfit::AbsTrackRep*)p);
   }
   static void deleteArray_genfitcLcLAbsTrackRep(void *p) {
      delete [] ((::genfit::AbsTrackRep*)p);
   }
   static void destruct_genfitcLcLAbsTrackRep(void *p) {
      typedef ::genfit::AbsTrackRep current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::AbsTrackRep

namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLStateOnPlane(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::StateOnPlane : new ::genfit::StateOnPlane;
   }
   static void *newArray_genfitcLcLStateOnPlane(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::StateOnPlane[nElements] : new ::genfit::StateOnPlane[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLStateOnPlane(void *p) {
      delete ((::genfit::StateOnPlane*)p);
   }
   static void deleteArray_genfitcLcLStateOnPlane(void *p) {
      delete [] ((::genfit::StateOnPlane*)p);
   }
   static void destruct_genfitcLcLStateOnPlane(void *p) {
      typedef ::genfit::StateOnPlane current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_genfitcLcLStateOnPlane(TBuffer &buf, void *obj) {
      ((::genfit::StateOnPlane*)obj)->::genfit::StateOnPlane::Streamer(buf);
   }
} // end of namespace ROOT for class ::genfit::StateOnPlane

namespace genfit {
//______________________________________________________________________________
void MeasuredStateOnPlane::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::MeasuredStateOnPlane.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::MeasuredStateOnPlane::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::MeasuredStateOnPlane::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLMeasuredStateOnPlane(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::MeasuredStateOnPlane : new ::genfit::MeasuredStateOnPlane;
   }
   static void *newArray_genfitcLcLMeasuredStateOnPlane(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::MeasuredStateOnPlane[nElements] : new ::genfit::MeasuredStateOnPlane[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLMeasuredStateOnPlane(void *p) {
      delete ((::genfit::MeasuredStateOnPlane*)p);
   }
   static void deleteArray_genfitcLcLMeasuredStateOnPlane(void *p) {
      delete [] ((::genfit::MeasuredStateOnPlane*)p);
   }
   static void destruct_genfitcLcLMeasuredStateOnPlane(void *p) {
      typedef ::genfit::MeasuredStateOnPlane current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::MeasuredStateOnPlane

namespace genfit {
//______________________________________________________________________________
void AbsHMatrix::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::AbsHMatrix.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::AbsHMatrix::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::AbsHMatrix::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrapper around operator delete
   static void delete_genfitcLcLAbsHMatrix(void *p) {
      delete ((::genfit::AbsHMatrix*)p);
   }
   static void deleteArray_genfitcLcLAbsHMatrix(void *p) {
      delete [] ((::genfit::AbsHMatrix*)p);
   }
   static void destruct_genfitcLcLAbsHMatrix(void *p) {
      typedef ::genfit::AbsHMatrix current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::AbsHMatrix

namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLMeasurementOnPlane(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::MeasurementOnPlane : new ::genfit::MeasurementOnPlane;
   }
   static void *newArray_genfitcLcLMeasurementOnPlane(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::MeasurementOnPlane[nElements] : new ::genfit::MeasurementOnPlane[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLMeasurementOnPlane(void *p) {
      delete ((::genfit::MeasurementOnPlane*)p);
   }
   static void deleteArray_genfitcLcLMeasurementOnPlane(void *p) {
      delete [] ((::genfit::MeasurementOnPlane*)p);
   }
   static void destruct_genfitcLcLMeasurementOnPlane(void *p) {
      typedef ::genfit::MeasurementOnPlane current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_genfitcLcLMeasurementOnPlane(TBuffer &buf, void *obj) {
      ((::genfit::MeasurementOnPlane*)obj)->::genfit::MeasurementOnPlane::Streamer(buf);
   }
} // end of namespace ROOT for class ::genfit::MeasurementOnPlane

namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLPruneFlags(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::PruneFlags : new ::genfit::PruneFlags;
   }
   static void *newArray_genfitcLcLPruneFlags(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::PruneFlags[nElements] : new ::genfit::PruneFlags[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLPruneFlags(void *p) {
      delete ((::genfit::PruneFlags*)p);
   }
   static void deleteArray_genfitcLcLPruneFlags(void *p) {
      delete [] ((::genfit::PruneFlags*)p);
   }
   static void destruct_genfitcLcLPruneFlags(void *p) {
      typedef ::genfit::PruneFlags current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::PruneFlags

namespace genfit {
//______________________________________________________________________________
void FitStatus::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::FitStatus.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::FitStatus::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::FitStatus::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLFitStatus(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::FitStatus : new ::genfit::FitStatus;
   }
   static void *newArray_genfitcLcLFitStatus(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::FitStatus[nElements] : new ::genfit::FitStatus[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLFitStatus(void *p) {
      delete ((::genfit::FitStatus*)p);
   }
   static void deleteArray_genfitcLcLFitStatus(void *p) {
      delete [] ((::genfit::FitStatus*)p);
   }
   static void destruct_genfitcLcLFitStatus(void *p) {
      typedef ::genfit::FitStatus current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::FitStatus

namespace ROOT {
   // Wrapper around operator delete
   static void delete_genfitcLcLAbsFitterInfo(void *p) {
      delete ((::genfit::AbsFitterInfo*)p);
   }
   static void deleteArray_genfitcLcLAbsFitterInfo(void *p) {
      delete [] ((::genfit::AbsFitterInfo*)p);
   }
   static void destruct_genfitcLcLAbsFitterInfo(void *p) {
      typedef ::genfit::AbsFitterInfo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_genfitcLcLAbsFitterInfo(TBuffer &buf, void *obj) {
      ((::genfit::AbsFitterInfo*)obj)->::genfit::AbsFitterInfo::Streamer(buf);
   }
} // end of namespace ROOT for class ::genfit::AbsFitterInfo

namespace genfit {
//______________________________________________________________________________
void TrackCandHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::TrackCandHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::TrackCandHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::TrackCandHit::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLTrackCandHit(void *p) {
      return  p ? new(p) ::genfit::TrackCandHit : new ::genfit::TrackCandHit;
   }
   static void *newArray_genfitcLcLTrackCandHit(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::TrackCandHit[nElements] : new ::genfit::TrackCandHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLTrackCandHit(void *p) {
      delete ((::genfit::TrackCandHit*)p);
   }
   static void deleteArray_genfitcLcLTrackCandHit(void *p) {
      delete [] ((::genfit::TrackCandHit*)p);
   }
   static void destruct_genfitcLcLTrackCandHit(void *p) {
      typedef ::genfit::TrackCandHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::TrackCandHit

namespace genfit {
//______________________________________________________________________________
void TrackCand::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::TrackCand.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::TrackCand::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::TrackCand::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLTrackCand(void *p) {
      return  p ? new(p) ::genfit::TrackCand : new ::genfit::TrackCand;
   }
   static void *newArray_genfitcLcLTrackCand(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::TrackCand[nElements] : new ::genfit::TrackCand[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLTrackCand(void *p) {
      delete ((::genfit::TrackCand*)p);
   }
   static void deleteArray_genfitcLcLTrackCand(void *p) {
      delete [] ((::genfit::TrackCand*)p);
   }
   static void destruct_genfitcLcLTrackCand(void *p) {
      typedef ::genfit::TrackCand current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::TrackCand

namespace genfit {
//______________________________________________________________________________
void AbsMeasurement::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::AbsMeasurement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::AbsMeasurement::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::AbsMeasurement::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrapper around operator delete
   static void delete_genfitcLcLAbsMeasurement(void *p) {
      delete ((::genfit::AbsMeasurement*)p);
   }
   static void deleteArray_genfitcLcLAbsMeasurement(void *p) {
      delete [] ((::genfit::AbsMeasurement*)p);
   }
   static void destruct_genfitcLcLAbsMeasurement(void *p) {
      typedef ::genfit::AbsMeasurement current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::AbsMeasurement

namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLThinScatterer(void *p) {
      return  p ? new(p) ::genfit::ThinScatterer : new ::genfit::ThinScatterer;
   }
   static void *newArray_genfitcLcLThinScatterer(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::ThinScatterer[nElements] : new ::genfit::ThinScatterer[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLThinScatterer(void *p) {
      delete ((::genfit::ThinScatterer*)p);
   }
   static void deleteArray_genfitcLcLThinScatterer(void *p) {
      delete [] ((::genfit::ThinScatterer*)p);
   }
   static void destruct_genfitcLcLThinScatterer(void *p) {
      typedef ::genfit::ThinScatterer current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_genfitcLcLThinScatterer(TBuffer &buf, void *obj) {
      ((::genfit::ThinScatterer*)obj)->::genfit::ThinScatterer::Streamer(buf);
   }
} // end of namespace ROOT for class ::genfit::ThinScatterer

namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLTrackPoint(void *p) {
      return  p ? new(p) ::genfit::TrackPoint : new ::genfit::TrackPoint;
   }
   static void *newArray_genfitcLcLTrackPoint(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::TrackPoint[nElements] : new ::genfit::TrackPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLTrackPoint(void *p) {
      delete ((::genfit::TrackPoint*)p);
   }
   static void deleteArray_genfitcLcLTrackPoint(void *p) {
      delete [] ((::genfit::TrackPoint*)p);
   }
   static void destruct_genfitcLcLTrackPoint(void *p) {
      typedef ::genfit::TrackPoint current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_genfitcLcLTrackPoint(TBuffer &buf, void *obj) {
      ((::genfit::TrackPoint*)obj)->::genfit::TrackPoint::Streamer(buf);
   }
} // end of namespace ROOT for class ::genfit::TrackPoint

namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLTrack(void *p) {
      return  p ? new(p) ::genfit::Track : new ::genfit::Track;
   }
   static void *newArray_genfitcLcLTrack(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::Track[nElements] : new ::genfit::Track[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLTrack(void *p) {
      delete ((::genfit::Track*)p);
   }
   static void deleteArray_genfitcLcLTrack(void *p) {
      delete [] ((::genfit::Track*)p);
   }
   static void destruct_genfitcLcLTrack(void *p) {
      typedef ::genfit::Track current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_genfitcLcLTrack(TBuffer &buf, void *obj) {
      ((::genfit::Track*)obj)->::genfit::Track::Streamer(buf);
   }
} // end of namespace ROOT for class ::genfit::Track

namespace genfit {
//______________________________________________________________________________
void RectangularFinitePlane::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::RectangularFinitePlane.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::RectangularFinitePlane::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::RectangularFinitePlane::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLRectangularFinitePlane(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::RectangularFinitePlane : new ::genfit::RectangularFinitePlane;
   }
   static void *newArray_genfitcLcLRectangularFinitePlane(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::RectangularFinitePlane[nElements] : new ::genfit::RectangularFinitePlane[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLRectangularFinitePlane(void *p) {
      delete ((::genfit::RectangularFinitePlane*)p);
   }
   static void deleteArray_genfitcLcLRectangularFinitePlane(void *p) {
      delete [] ((::genfit::RectangularFinitePlane*)p);
   }
   static void destruct_genfitcLcLRectangularFinitePlane(void *p) {
      typedef ::genfit::RectangularFinitePlane current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::RectangularFinitePlane

namespace ROOT {
   static TClass *vectorlEgenfitcLcLTrackPointmUgR_Dictionary();
   static void vectorlEgenfitcLcLTrackPointmUgR_TClassManip(TClass*);
   static void *new_vectorlEgenfitcLcLTrackPointmUgR(void *p = 0);
   static void *newArray_vectorlEgenfitcLcLTrackPointmUgR(Long_t size, void *p);
   static void delete_vectorlEgenfitcLcLTrackPointmUgR(void *p);
   static void deleteArray_vectorlEgenfitcLcLTrackPointmUgR(void *p);
   static void destruct_vectorlEgenfitcLcLTrackPointmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<genfit::TrackPoint*>*)
   {
      vector<genfit::TrackPoint*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<genfit::TrackPoint*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<genfit::TrackPoint*>", -2, "vector", 216,
                  typeid(vector<genfit::TrackPoint*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEgenfitcLcLTrackPointmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<genfit::TrackPoint*>) );
      instance.SetNew(&new_vectorlEgenfitcLcLTrackPointmUgR);
      instance.SetNewArray(&newArray_vectorlEgenfitcLcLTrackPointmUgR);
      instance.SetDelete(&delete_vectorlEgenfitcLcLTrackPointmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEgenfitcLcLTrackPointmUgR);
      instance.SetDestructor(&destruct_vectorlEgenfitcLcLTrackPointmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<genfit::TrackPoint*> >()));

      ::ROOT::AddClassAlternate("vector<genfit::TrackPoint*>","std::vector<genfit::TrackPoint*, std::allocator<genfit::TrackPoint*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<genfit::TrackPoint*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgenfitcLcLTrackPointmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<genfit::TrackPoint*>*)0x0)->GetClass();
      vectorlEgenfitcLcLTrackPointmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgenfitcLcLTrackPointmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgenfitcLcLTrackPointmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<genfit::TrackPoint*> : new vector<genfit::TrackPoint*>;
   }
   static void *newArray_vectorlEgenfitcLcLTrackPointmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<genfit::TrackPoint*>[nElements] : new vector<genfit::TrackPoint*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgenfitcLcLTrackPointmUgR(void *p) {
      delete ((vector<genfit::TrackPoint*>*)p);
   }
   static void deleteArray_vectorlEgenfitcLcLTrackPointmUgR(void *p) {
      delete [] ((vector<genfit::TrackPoint*>*)p);
   }
   static void destruct_vectorlEgenfitcLcLTrackPointmUgR(void *p) {
      typedef vector<genfit::TrackPoint*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<genfit::TrackPoint*>

namespace ROOT {
   static TClass *vectorlEgenfitcLcLTrackCandHitmUgR_Dictionary();
   static void vectorlEgenfitcLcLTrackCandHitmUgR_TClassManip(TClass*);
   static void *new_vectorlEgenfitcLcLTrackCandHitmUgR(void *p = 0);
   static void *newArray_vectorlEgenfitcLcLTrackCandHitmUgR(Long_t size, void *p);
   static void delete_vectorlEgenfitcLcLTrackCandHitmUgR(void *p);
   static void deleteArray_vectorlEgenfitcLcLTrackCandHitmUgR(void *p);
   static void destruct_vectorlEgenfitcLcLTrackCandHitmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<genfit::TrackCandHit*>*)
   {
      vector<genfit::TrackCandHit*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<genfit::TrackCandHit*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<genfit::TrackCandHit*>", -2, "vector", 216,
                  typeid(vector<genfit::TrackCandHit*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEgenfitcLcLTrackCandHitmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<genfit::TrackCandHit*>) );
      instance.SetNew(&new_vectorlEgenfitcLcLTrackCandHitmUgR);
      instance.SetNewArray(&newArray_vectorlEgenfitcLcLTrackCandHitmUgR);
      instance.SetDelete(&delete_vectorlEgenfitcLcLTrackCandHitmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEgenfitcLcLTrackCandHitmUgR);
      instance.SetDestructor(&destruct_vectorlEgenfitcLcLTrackCandHitmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<genfit::TrackCandHit*> >()));

      ::ROOT::AddClassAlternate("vector<genfit::TrackCandHit*>","std::vector<genfit::TrackCandHit*, std::allocator<genfit::TrackCandHit*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<genfit::TrackCandHit*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgenfitcLcLTrackCandHitmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<genfit::TrackCandHit*>*)0x0)->GetClass();
      vectorlEgenfitcLcLTrackCandHitmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgenfitcLcLTrackCandHitmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgenfitcLcLTrackCandHitmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<genfit::TrackCandHit*> : new vector<genfit::TrackCandHit*>;
   }
   static void *newArray_vectorlEgenfitcLcLTrackCandHitmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<genfit::TrackCandHit*>[nElements] : new vector<genfit::TrackCandHit*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgenfitcLcLTrackCandHitmUgR(void *p) {
      delete ((vector<genfit::TrackCandHit*>*)p);
   }
   static void deleteArray_vectorlEgenfitcLcLTrackCandHitmUgR(void *p) {
      delete [] ((vector<genfit::TrackCandHit*>*)p);
   }
   static void destruct_vectorlEgenfitcLcLTrackCandHitmUgR(void *p) {
      typedef vector<genfit::TrackCandHit*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<genfit::TrackCandHit*>

namespace ROOT {
   static TClass *vectorlEgenfitcLcLAbsTrackRepmUgR_Dictionary();
   static void vectorlEgenfitcLcLAbsTrackRepmUgR_TClassManip(TClass*);
   static void *new_vectorlEgenfitcLcLAbsTrackRepmUgR(void *p = 0);
   static void *newArray_vectorlEgenfitcLcLAbsTrackRepmUgR(Long_t size, void *p);
   static void delete_vectorlEgenfitcLcLAbsTrackRepmUgR(void *p);
   static void deleteArray_vectorlEgenfitcLcLAbsTrackRepmUgR(void *p);
   static void destruct_vectorlEgenfitcLcLAbsTrackRepmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<genfit::AbsTrackRep*>*)
   {
      vector<genfit::AbsTrackRep*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<genfit::AbsTrackRep*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<genfit::AbsTrackRep*>", -2, "vector", 216,
                  typeid(vector<genfit::AbsTrackRep*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEgenfitcLcLAbsTrackRepmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<genfit::AbsTrackRep*>) );
      instance.SetNew(&new_vectorlEgenfitcLcLAbsTrackRepmUgR);
      instance.SetNewArray(&newArray_vectorlEgenfitcLcLAbsTrackRepmUgR);
      instance.SetDelete(&delete_vectorlEgenfitcLcLAbsTrackRepmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEgenfitcLcLAbsTrackRepmUgR);
      instance.SetDestructor(&destruct_vectorlEgenfitcLcLAbsTrackRepmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<genfit::AbsTrackRep*> >()));

      ::ROOT::AddClassAlternate("vector<genfit::AbsTrackRep*>","std::vector<genfit::AbsTrackRep*, std::allocator<genfit::AbsTrackRep*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<genfit::AbsTrackRep*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgenfitcLcLAbsTrackRepmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<genfit::AbsTrackRep*>*)0x0)->GetClass();
      vectorlEgenfitcLcLAbsTrackRepmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgenfitcLcLAbsTrackRepmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgenfitcLcLAbsTrackRepmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<genfit::AbsTrackRep*> : new vector<genfit::AbsTrackRep*>;
   }
   static void *newArray_vectorlEgenfitcLcLAbsTrackRepmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<genfit::AbsTrackRep*>[nElements] : new vector<genfit::AbsTrackRep*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgenfitcLcLAbsTrackRepmUgR(void *p) {
      delete ((vector<genfit::AbsTrackRep*>*)p);
   }
   static void deleteArray_vectorlEgenfitcLcLAbsTrackRepmUgR(void *p) {
      delete [] ((vector<genfit::AbsTrackRep*>*)p);
   }
   static void destruct_vectorlEgenfitcLcLAbsTrackRepmUgR(void *p) {
      typedef vector<genfit::AbsTrackRep*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<genfit::AbsTrackRep*>

namespace ROOT {
   static TClass *vectorlEgenfitcLcLAbsMeasurementmUgR_Dictionary();
   static void vectorlEgenfitcLcLAbsMeasurementmUgR_TClassManip(TClass*);
   static void *new_vectorlEgenfitcLcLAbsMeasurementmUgR(void *p = 0);
   static void *newArray_vectorlEgenfitcLcLAbsMeasurementmUgR(Long_t size, void *p);
   static void delete_vectorlEgenfitcLcLAbsMeasurementmUgR(void *p);
   static void deleteArray_vectorlEgenfitcLcLAbsMeasurementmUgR(void *p);
   static void destruct_vectorlEgenfitcLcLAbsMeasurementmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<genfit::AbsMeasurement*>*)
   {
      vector<genfit::AbsMeasurement*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<genfit::AbsMeasurement*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<genfit::AbsMeasurement*>", -2, "vector", 216,
                  typeid(vector<genfit::AbsMeasurement*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEgenfitcLcLAbsMeasurementmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<genfit::AbsMeasurement*>) );
      instance.SetNew(&new_vectorlEgenfitcLcLAbsMeasurementmUgR);
      instance.SetNewArray(&newArray_vectorlEgenfitcLcLAbsMeasurementmUgR);
      instance.SetDelete(&delete_vectorlEgenfitcLcLAbsMeasurementmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEgenfitcLcLAbsMeasurementmUgR);
      instance.SetDestructor(&destruct_vectorlEgenfitcLcLAbsMeasurementmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<genfit::AbsMeasurement*> >()));

      ::ROOT::AddClassAlternate("vector<genfit::AbsMeasurement*>","std::vector<genfit::AbsMeasurement*, std::allocator<genfit::AbsMeasurement*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<genfit::AbsMeasurement*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgenfitcLcLAbsMeasurementmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<genfit::AbsMeasurement*>*)0x0)->GetClass();
      vectorlEgenfitcLcLAbsMeasurementmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgenfitcLcLAbsMeasurementmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgenfitcLcLAbsMeasurementmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<genfit::AbsMeasurement*> : new vector<genfit::AbsMeasurement*>;
   }
   static void *newArray_vectorlEgenfitcLcLAbsMeasurementmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<genfit::AbsMeasurement*>[nElements] : new vector<genfit::AbsMeasurement*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgenfitcLcLAbsMeasurementmUgR(void *p) {
      delete ((vector<genfit::AbsMeasurement*>*)p);
   }
   static void deleteArray_vectorlEgenfitcLcLAbsMeasurementmUgR(void *p) {
      delete [] ((vector<genfit::AbsMeasurement*>*)p);
   }
   static void destruct_vectorlEgenfitcLcLAbsMeasurementmUgR(void *p) {
      typedef vector<genfit::AbsMeasurement*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<genfit::AbsMeasurement*>

namespace ROOT {
   static TClass *maplEconstsPgenfitcLcLAbsTrackRepmUcOgenfitcLcLFitStatusmUgR_Dictionary();
   static void maplEconstsPgenfitcLcLAbsTrackRepmUcOgenfitcLcLFitStatusmUgR_TClassManip(TClass*);
   static void *new_maplEconstsPgenfitcLcLAbsTrackRepmUcOgenfitcLcLFitStatusmUgR(void *p = 0);
   static void *newArray_maplEconstsPgenfitcLcLAbsTrackRepmUcOgenfitcLcLFitStatusmUgR(Long_t size, void *p);
   static void delete_maplEconstsPgenfitcLcLAbsTrackRepmUcOgenfitcLcLFitStatusmUgR(void *p);
   static void deleteArray_maplEconstsPgenfitcLcLAbsTrackRepmUcOgenfitcLcLFitStatusmUgR(void *p);
   static void destruct_maplEconstsPgenfitcLcLAbsTrackRepmUcOgenfitcLcLFitStatusmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<const genfit::AbsTrackRep*,genfit::FitStatus*>*)
   {
      map<const genfit::AbsTrackRep*,genfit::FitStatus*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<const genfit::AbsTrackRep*,genfit::FitStatus*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<const genfit::AbsTrackRep*,genfit::FitStatus*>", -2, "map", 99,
                  typeid(map<const genfit::AbsTrackRep*,genfit::FitStatus*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEconstsPgenfitcLcLAbsTrackRepmUcOgenfitcLcLFitStatusmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<const genfit::AbsTrackRep*,genfit::FitStatus*>) );
      instance.SetNew(&new_maplEconstsPgenfitcLcLAbsTrackRepmUcOgenfitcLcLFitStatusmUgR);
      instance.SetNewArray(&newArray_maplEconstsPgenfitcLcLAbsTrackRepmUcOgenfitcLcLFitStatusmUgR);
      instance.SetDelete(&delete_maplEconstsPgenfitcLcLAbsTrackRepmUcOgenfitcLcLFitStatusmUgR);
      instance.SetDeleteArray(&deleteArray_maplEconstsPgenfitcLcLAbsTrackRepmUcOgenfitcLcLFitStatusmUgR);
      instance.SetDestructor(&destruct_maplEconstsPgenfitcLcLAbsTrackRepmUcOgenfitcLcLFitStatusmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<const genfit::AbsTrackRep*,genfit::FitStatus*> >()));

      ::ROOT::AddClassAlternate("map<const genfit::AbsTrackRep*,genfit::FitStatus*>","std::map<genfit::AbsTrackRep const*, genfit::FitStatus*, std::less<genfit::AbsTrackRep const*>, std::allocator<std::pair<genfit::AbsTrackRep const* const, genfit::FitStatus*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<const genfit::AbsTrackRep*,genfit::FitStatus*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEconstsPgenfitcLcLAbsTrackRepmUcOgenfitcLcLFitStatusmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<const genfit::AbsTrackRep*,genfit::FitStatus*>*)0x0)->GetClass();
      maplEconstsPgenfitcLcLAbsTrackRepmUcOgenfitcLcLFitStatusmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEconstsPgenfitcLcLAbsTrackRepmUcOgenfitcLcLFitStatusmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEconstsPgenfitcLcLAbsTrackRepmUcOgenfitcLcLFitStatusmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<const genfit::AbsTrackRep*,genfit::FitStatus*> : new map<const genfit::AbsTrackRep*,genfit::FitStatus*>;
   }
   static void *newArray_maplEconstsPgenfitcLcLAbsTrackRepmUcOgenfitcLcLFitStatusmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<const genfit::AbsTrackRep*,genfit::FitStatus*>[nElements] : new map<const genfit::AbsTrackRep*,genfit::FitStatus*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEconstsPgenfitcLcLAbsTrackRepmUcOgenfitcLcLFitStatusmUgR(void *p) {
      delete ((map<const genfit::AbsTrackRep*,genfit::FitStatus*>*)p);
   }
   static void deleteArray_maplEconstsPgenfitcLcLAbsTrackRepmUcOgenfitcLcLFitStatusmUgR(void *p) {
      delete [] ((map<const genfit::AbsTrackRep*,genfit::FitStatus*>*)p);
   }
   static void destruct_maplEconstsPgenfitcLcLAbsTrackRepmUcOgenfitcLcLFitStatusmUgR(void *p) {
      typedef map<const genfit::AbsTrackRep*,genfit::FitStatus*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<const genfit::AbsTrackRep*,genfit::FitStatus*>

namespace {
  void TriggerDictionaryInitialization_coreRootDict_Impl() {
    static const char* headers[] = {
"0",
0
    };
    static const char* includePaths[] = {
"/home/liangyt/EiccRoot/GenFit-master/GenFit-master/core/include",
"/home/eicc/software/FairSoft/install/include/root",
"/home/liangyt/EiccRoot/GenFit-master/GenFit-master/build/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "coreRootDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genfit{class __attribute__((annotate("$clingAutoload$TrackPoint.h")))  TrackPoint;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace genfit{class AbsFinitePlane;}
namespace genfit{class __attribute__((annotate("$clingAutoload$DetPlane.h")))  __attribute__((annotate("$clingAutoload$MeasurementOnPlane.h")))  DetPlane;}
namespace genfit{class __attribute__((annotate("$clingAutoload$SharedPlanePtr.h")))  __attribute__((annotate("$clingAutoload$MeasurementOnPlane.h")))  SharedPlanePtrCreator;}
namespace genfit{struct __attribute__((annotate("$clingAutoload$Material.h")))  __attribute__((annotate("$clingAutoload$MeasurementOnPlane.h")))  Material;}
namespace genfit{class __attribute__((annotate("$clingAutoload$AbsTrackRep.h")))  __attribute__((annotate("$clingAutoload$MeasurementOnPlane.h")))  AbsTrackRep;}
namespace genfit{class __attribute__((annotate("$clingAutoload$StateOnPlane.h")))  __attribute__((annotate("$clingAutoload$MeasurementOnPlane.h")))  StateOnPlane;}
namespace genfit{class __attribute__((annotate("$clingAutoload$MeasuredStateOnPlane.h")))  __attribute__((annotate("$clingAutoload$MeasurementOnPlane.h")))  MeasuredStateOnPlane;}
namespace genfit{class __attribute__((annotate("$clingAutoload$AbsHMatrix.h")))  __attribute__((annotate("$clingAutoload$MeasurementOnPlane.h")))  AbsHMatrix;}
namespace genfit{class __attribute__((annotate("$clingAutoload$MeasurementOnPlane.h")))  MeasurementOnPlane;}
namespace genfit{struct __attribute__((annotate("$clingAutoload$FitStatus.h")))  PruneFlags;}
namespace genfit{class __attribute__((annotate("$clingAutoload$FitStatus.h")))  FitStatus;}
namespace genfit{class AbsFitterInfo;}
namespace genfit{class __attribute__((annotate("$clingAutoload$TrackCandHit.h")))  __attribute__((annotate("$clingAutoload$MeasurementProducer.h")))  TrackCandHit;}
namespace genfit{class __attribute__((annotate("$clingAutoload$TrackCand.h")))  __attribute__((annotate("$clingAutoload$MeasurementProducer.h")))  TrackCand;}
namespace genfit{class AbsMeasurement;}
namespace genfit{class ThinScatterer;}
namespace genfit{class Track;}
namespace genfit{class RectangularFinitePlane;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "coreRootDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
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
/**
 *  @author Christian H&ouml;ppner (Technische Universit&auml;t M&uuml;nchen, original author)
 *
 */


/** @addtogroup genfit
 * @{
 */

#ifndef genfit_AbsFinitePlane_h
#define genfit_AbsFinitePlane_h

#include <Rtypes.h> // for Option_t


namespace genfit {

/**
 * @brief Abstract base class for finite detector planes.
 *
 * This is most important for avoiding fake intersection points in fitting of curlers.
 * This should be implemented for silicon detectors most importantly.
 */
class AbsFinitePlane {

 public:

  AbsFinitePlane() {};
  virtual ~AbsFinitePlane() {};

  //! Returns whether a u,v point is in the active plane or not. Needs to be implemented
  //! in child class.
  virtual bool isInActive(double u, double v) const = 0;

  //! Deep copy ctor for polymorphic class.
  virtual AbsFinitePlane* clone() const = 0;

  virtual void Print(const Option_t* = "") const = 0;


 protected:

  // protect from calling copy c'tor or assignment operator from outside the class. Use #clone() if you want a copy!
  AbsFinitePlane(const AbsFinitePlane&) {;}
  AbsFinitePlane& operator=(const AbsFinitePlane&);

  ClassDef(AbsFinitePlane, 1);
};

} /* End of namespace genfit */
/** @} */

#endif // genfit_AbsFinitePlane_h
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

#ifndef genfit_AbsFitterInfo_h
#define genfit_AbsFitterInfo_h

#include "MeasurementOnPlane.h"
#include "FitStatus.h"

#include <TObject.h>
#include <TVectorD.h>


namespace genfit {

class AbsTrackRep;
class TrackPoint;

/**
 *  @brief This class collects all information needed and produced by a specific  AbsFitter and is specific to one AbsTrackRep of the Track.
 */
class AbsFitterInfo : public TObject {

 public:

  AbsFitterInfo();
  AbsFitterInfo(const TrackPoint* trackPoint, const AbsTrackRep* rep);

  virtual ~AbsFitterInfo() {};

  //! Deep copy ctor for polymorphic class.
  virtual AbsFitterInfo* clone() const = 0;

  const TrackPoint* getTrackPoint() const {return trackPoint_;}
  const AbsTrackRep* getRep() const {return rep_;}

  void setTrackPoint(const TrackPoint *tp) {trackPoint_ = tp;}
  virtual void setRep(const AbsTrackRep* rep) {rep_ = rep;}

  virtual bool hasMeasurements() const = 0;
  virtual bool hasReferenceState() const = 0;
  virtual bool hasForwardPrediction() const = 0;
  virtual bool hasBackwardPrediction() const = 0;
  virtual bool hasPrediction(int direction) const {if (direction >=0) return hasForwardPrediction(); return hasBackwardPrediction();}
  virtual bool hasForwardUpdate() const = 0;
  virtual bool hasBackwardUpdate() const = 0;
  virtual bool hasUpdate(int direction) const {if (direction >=0) return hasForwardUpdate(); return hasBackwardUpdate();}

  virtual void deleteForwardInfo() = 0;
  virtual void deleteBackwardInfo() = 0;
  virtual void deleteReferenceInfo() = 0;
  virtual void deleteMeasurementInfo() = 0;

  const SharedPlanePtr& getPlane() const {return sharedPlane_;}
  virtual const MeasuredStateOnPlane& getFittedState(bool biased = true) const = 0;
  virtual MeasurementOnPlane getResidual(unsigned int iMeasurement = 0, bool biased = true, bool onlyMeasurementErrors = false) const = 0;

  void setPlane(const SharedPlanePtr& plane) {sharedPlane_ = plane;}

  virtual void Print(const Option_t* = "") const {;}

  virtual bool checkConsistency(const PruneFlags* = nullptr) const = 0;

 protected:

  /** Pointer to TrackPoint where the FitterInfo belongs to
   */
  const TrackPoint* trackPoint_; //! No ownership

  /** Pointer to AbsTrackRep with respect to which the FitterInfo is defined
   */
  const AbsTrackRep* rep_; //! No ownership

  SharedPlanePtr sharedPlane_; //! Shared ownership.  '!' shuts up ROOT.


 private:
  AbsFitterInfo(const AbsFitterInfo&); // copy constructor
  AbsFitterInfo& operator=(const AbsFitterInfo&); // assignment operator


 public:
  ClassDef(AbsFitterInfo,1)

};

//! Needed for boost cloneability:
inline AbsFitterInfo* new_clone( const AbsFitterInfo & a)
{
  return a.clone();
}

} /* End of namespace genfit */
/** @} */

#endif // genfit_AbsFitterInfo_h
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

#ifndef genfit_AbsHMatrix_h
#define genfit_AbsHMatrix_h

#include <TObject.h>
#include <TMatrixDSym.h>
#include <TVectorD.h>


namespace genfit {

/**
 * @brief HMatrix for projecting from AbsTrackRep parameters to measured parameters in a DetPlane.
 *
 */
class AbsHMatrix : public TObject {

 public:

  AbsHMatrix() {;}

  virtual ~AbsHMatrix() {;}

  //! Get the actual matrix representation
  virtual const TMatrixD& getMatrix() const = 0;

  //! H*v
  virtual TVectorD Hv(const TVectorD& v) const {return getMatrix()*v;}

  //! M*H^t
  virtual TMatrixD MHt(const TMatrixDSym& M) const {return TMatrixD(M, TMatrixD::kMultTranspose, getMatrix());}
  virtual TMatrixD MHt(const TMatrixD& M) const {return TMatrixD(M, TMatrixD::kMultTranspose, getMatrix());}

  //! similarity: H*M*H^t
  virtual void HMHt(TMatrixDSym& M) const {M.Similarity(getMatrix());}

  virtual AbsHMatrix* clone() const = 0;

  bool operator==(const AbsHMatrix& other) const {return this->isEqual(other);}
  bool operator!=(const AbsHMatrix& other) const {return !(this->isEqual(other));}
  virtual bool isEqual(const AbsHMatrix& other) const = 0;

  virtual void Print(const Option_t* = "") const {;}

 protected:
  // protect from calling copy c'tor or assignment operator from outside the class. Use #clone() if you want a copy!
  AbsHMatrix(const AbsHMatrix& o) : TObject(o) {;}
  AbsHMatrix& operator=(const AbsHMatrix&);

 public:
  ClassDef(AbsHMatrix,1)

};

} /* End of namespace genfit */
/** @} */

#endif // genfit_AbsHMatrix_h
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

#ifndef genfit_AbsTrackRep_h
#define genfit_AbsTrackRep_h

#include "SharedPlanePtr.h"
//#include "MaterialInfo.h"
#include "Material.h"

#include <TVector3.h>
#include <TObject.h>
#include <TVectorD.h>
#include <TMatrixD.h>
#include <TMatrixDSym.h>


namespace genfit {

/**
 * @brief Simple struct containing MaterialProperties and stepsize in the material.
 */
struct MatStep {
  Material material_;
  double stepSize_;

  MatStep() {
    stepSize_ = 0;
  }

};

class StateOnPlane;
class MeasuredStateOnPlane;
class AbsMeasurement;

/**
 * @brief Abstract base class for a track representation
 *
 *  Provides functionality to extrapolate a StateOnPlane to another DetPlane,
 *  to the POCA to a line or a point, or a cylinder or sphere.
 *  Defines a set of parameters describing the track.
 *  StateOnPlane objects are always defined with a track parameterization of a specific AbsTrackRep.
 *  The AbsTrackRep provides functionality to translate from the internal representation of a state
 *  into cartesian position and momentum (and covariance) and vice versa.
 */
class AbsTrackRep : public TObject {

 public:

  AbsTrackRep();
  AbsTrackRep(int pdgCode, char propDir = 0);

  virtual ~AbsTrackRep() {;}

  //! Clone the trackRep.
  virtual AbsTrackRep* clone() const = 0;

  /**
   * @brief Extrapolates the state to plane, and returns the extrapolation length
   *        and, via reference, the extrapolated state.
   *
   * If stopAtBoundary is true, the extrapolation stops as soon as a material boundary is encountered.
   *
   * If state has a covariance, jacobian and noise matrices will be calculated and the covariance will be propagated.
   * If state has no covariance, jacobian and noise will only be calculated if calcJacobianNoise == true.
   */
  virtual double extrapolateToPlane(
      StateOnPlane& state,
      const genfit::SharedPlanePtr& plane,
      bool stopAtBoundary = false,
      bool calcJacobianNoise = false) const = 0;

  /**
   * @brief Extrapolates the state to the POCA to a line, and returns the extrapolation length
   *        and, via reference, the extrapolated state.
   *
   * If stopAtBoundary is true, the extrapolation stops as soon as a material boundary is encountered.
   *
   * If state has a covariance, jacobian and noise matrices will be calculated and the covariance will be propagated.
   * If state has no covariance, jacobian and noise will only be calculated if calcJacobianNoise == true.
   */
  virtual double extrapolateToLine(StateOnPlane& state,
      const TVector3& linePoint,
      const TVector3& lineDirection,
      bool stopAtBoundary = false,
      bool calcJacobianNoise = false) const = 0;

  /**
   * @brief Resembles the interface of GFAbsTrackRep in old versions of genfit
   *
   * This interface to extrapolateToLine is intended to resemble the
   * interface of GFAbsTrackRep in old versions of genfit and is
   * implemented by default via the preceding function.
   *
   * If stopAtBoundary is true, the extrapolation stops as soon as a material boundary is encountered.
   *
   * If state has a covariance, jacobian and noise matrices will be calculated and the covariance will be propagated.
   * If state has no covariance, jacobian and noise will only be calculated if calcJacobianNoise == true.
   */
  virtual double extrapolateToLine(StateOnPlane& state,
      const TVector3& point1,
      const TVector3& point2,
      TVector3& poca,
      TVector3& dirInPoca,
      TVector3& poca_onwire,
      bool stopAtBoundary = false,
      bool calcJacobianNoise = false) const {
    TVector3 wireDir(point2 - point1);
    wireDir.Unit();
    double retval = this->extrapolateToLine(state, point1, wireDir, stopAtBoundary, calcJacobianNoise);
    poca = this->getPos(state);
    dirInPoca = this->getMom(state);
    dirInPoca.Unit();

    poca_onwire = point1 + wireDir*((poca - point1)*wireDir);
    
    return retval;
  }

  /**
   * @brief Extrapolates the state to the POCA to a point, and returns the extrapolation length
   *        and, via reference, the extrapolated state.
   *
   * If stopAtBoundary is true, the extrapolation stops as soon as a material boundary is encountered.
   *
   * If state has a covariance, jacobian and noise matrices will be calculated and the covariance will be propagated.
   * If state has no covariance, jacobian and noise will only be calculated if calcJacobianNoise == true.
   */
  virtual double extrapolateToPoint(StateOnPlane& state,
      const TVector3& point,
      bool stopAtBoundary = false,
      bool calcJacobianNoise = false) const = 0;

  /**
   * @brief Extrapolates the state to the POCA to a point in the metric of G, and returns the extrapolation length
   *        and, via reference, the extrapolated state.
   *
   * If stopAtBoundary is true, the extrapolation stops as soon as a material boundary is encountered.
   *
   * If state has a covariance, jacobian and noise matrices will be calculated and the covariance will be propagated.
   * If state has no covariance, jacobian and noise will only be calculated if calcJacobianNoise == true.
   */
  virtual double extrapolateToPoint(StateOnPlane& state,
      const TVector3& point,
      const TMatrixDSym& G, // weight matrix (metric)
      bool stopAtBoundary = false,
      bool calcJacobianNoise = false) const = 0;

  /**
   * @brief Extrapolates the state to the cylinder surface, and returns the extrapolation length
   *       and, via reference, the extrapolated state.
   *
   * If stopAtBoundary is true, the extrapolation stops as soon as a material boundary is encountered.
   *
   * If state has a covariance, jacobian and noise matrices will be calculated and the covariance will be propagated.
   * If state has no covariance, jacobian and noise will only be calculated if calcJacobianNoise == true.
   */
  virtual double extrapolateToCylinder(StateOnPlane& state,
      double radius,
      const TVector3& linePoint = TVector3(0.,0.,0.),
      const TVector3& lineDirection = TVector3(0.,0.,1.),
      bool stopAtBoundary = false,
      bool calcJacobianNoise = false) const = 0;

  /**
   * @brief Extrapolates the state to the cone surface, and returns the extrapolation length
   *       and, via reference, the extrapolated state.
   *
   * If stopAtBoundary is true, the extrapolation stops as soon as a material boundary is encountered.
   *
   * If state has a covariance, jacobian and noise matrices will be calculated and the covariance will be propagated.
   * If state has no covariance, jacobian and noise will only be calculated if calcJacobianNoise == true.
   */
  virtual double extrapolateToCone(StateOnPlane& state,
      double radius,
      const TVector3& linePoint = TVector3(0.,0.,0.),
      const TVector3& lineDirection = TVector3(0.,0.,1.),
      bool stopAtBoundary = false,
      bool calcJacobianNoise = false) const = 0;

  /**
   * @brief Extrapolates the state to the sphere surface, and returns the extrapolation length
   *       and, via reference, the extrapolated state.
   *
   * If stopAtBoundary is true, the extrapolation stops as soon as a material boundary is encountered.
   *
   * If state has a covariance, jacobian and noise matrices will be calculated and the covariance will be propagated.
   * If state has no covariance, jacobian and noise will only be calculated if calcJacobianNoise == true.
   */
  virtual double extrapolateToSphere(StateOnPlane& state,
      double radius,
      const TVector3& point = TVector3(0.,0.,0.),
      bool stopAtBoundary = false,
      bool calcJacobianNoise = false) const = 0;

  /**
   * @brief Extrapolates the state by step (cm) and returns the extrapolation length
   *       and, via reference, the extrapolated state.
   *
   * If stopAtBoundary is true, the extrapolation stops as soon as a material boundary is encountered.
   *
   * If state has a covariance, jacobian and noise matrices will be calculated and the covariance will be propagated.
   * If state has no covariance, jacobian and noise will only be calculated if calcJacobianNoise == true.
   */
  virtual double extrapolateBy(StateOnPlane& state,
      double step,
      bool stopAtBoundary = false,
      bool calcJacobianNoise = false) const = 0;

  //! extrapolate to an AbsMeasurement
  double extrapolateToMeasurement(StateOnPlane& state,
      const AbsMeasurement* measurement,
      bool stopAtBoundary = false,
      bool calcJacobianNoise = false) const;

  //! Get the dimension of the state vector used by the track representation.
  virtual unsigned int getDim() const = 0;

  //! Get the cartesian position of a state.
  virtual TVector3 getPos(const StateOnPlane& state) const = 0;

  //! Get the cartesian momentum vector of a state.
  virtual TVector3 getMom(const StateOnPlane& state) const = 0;

  //! Get the direction vector of a state.
  TVector3 getDir(const StateOnPlane& state) const {return getMom(state).Unit();}

  //! Get cartesian position and momentum vector of a state.
  virtual void getPosMom(const StateOnPlane& state, TVector3& pos, TVector3& mom) const = 0;

  //! Get cartesian position and direction vector of a state.
  void getPosDir(const StateOnPlane& state, TVector3& pos, TVector3& dir) const {getPosMom(state, pos, dir); dir.SetMag(1.);}

  //! Get the 6D state vector (x, y, z, p_x, p_y, p_z).
  virtual TVectorD get6DState(const StateOnPlane& state) const;

  //! Get the 6D covariance.
  virtual TMatrixDSym get6DCov(const MeasuredStateOnPlane& state) const = 0;

  //! Translates MeasuredStateOnPlane into 3D position, momentum and 6x6 covariance.
  virtual void getPosMomCov(const MeasuredStateOnPlane& state, TVector3& pos, TVector3& mom, TMatrixDSym& cov) const = 0;

  //! Translates MeasuredStateOnPlane into 6D state vector (x, y, z, p_x, p_y, p_z) and 6x6 covariance.
  virtual void get6DStateCov(const MeasuredStateOnPlane& state, TVectorD& stateVec, TMatrixDSym& cov) const;

  //! get the magnitude of the momentum in GeV.
  virtual double getMomMag(const StateOnPlane& state) const = 0;
  //! get the variance of the absolute value of the momentum .
  virtual double getMomVar(const MeasuredStateOnPlane& state) const = 0;

  //! Get the pdg code.
  int getPDG() const {return pdgCode_;}

  //! Get the charge of the particle of the pdg code
  double getPDGCharge() const;

  /**
   * @brief Get the (fitted) charge of a state.
   * This is not always equal the pdg charge (e.g. if the charge sign was flipped during the fit).
   */
  virtual double getCharge(const StateOnPlane& state) const = 0;
  //! Get charge over momentum.
  virtual double getQop(const StateOnPlane& state) const = 0;
  //! Get tha particle mass in GeV/c^2
  double getMass(const StateOnPlane& state) const;

  //! Get propagation direction. (-1, 0, 1) -> (backward, auto, forward).
  char getPropDir() const {return propDir_;}

  //! Get the jacobian and noise matrix of the last extrapolation.
  virtual void getForwardJacobianAndNoise(TMatrixD& jacobian, TMatrixDSym& noise, TVectorD& deltaState) const = 0;

  //! Get the jacobian and noise matrix of the last extrapolation if it would have been done in opposite direction.
  virtual void getBackwardJacobianAndNoise(TMatrixD& jacobian, TMatrixDSym& noise, TVectorD& deltaState) const = 0;

  //! Get stepsizes and material properties of crossed materials of the last extrapolation.
  virtual std::vector<genfit::MatStep> getSteps() const = 0;

  //! Get the accumulated X/X0 (path / radiation length) of the material crossed in the last extrapolation.
  virtual double getRadiationLenght() const = 0;

  //! Get the time corresponding to the StateOnPlane.  Extrapolation
  // should keep this up to date with the time of flight.
  virtual double getTime(const StateOnPlane&) const = 0;

  /**
   * @brief Calculate Jacobian of transportation numerically.
   * Slow but accurate. Can be used to validate (semi)analytic calculations.
   */
  void calcJacobianNumerically(const genfit::StateOnPlane& origState,
                                   const genfit::SharedPlanePtr destPlane,
                                   TMatrixD& jacobian) const;

  //! try to multiply pdg code with -1. (Switch from particle to anti-particle and vice versa).
  bool switchPDGSign();

  //! Set position and momentum of state.
  virtual void setPosMom(StateOnPlane& state, const TVector3& pos, const TVector3& mom) const = 0;
  //! Set position and momentum of state.
  virtual void setPosMom(StateOnPlane& state, const TVectorD& state6) const = 0;
  //! Set position and momentum and error of state.
  virtual void setPosMomErr(MeasuredStateOnPlane& state, const TVector3& pos, const TVector3& mom, const TVector3& posErr, const TVector3& momErr) const = 0;
  //! Set position, momentum and covariance of state.
  virtual void setPosMomCov(MeasuredStateOnPlane& state, const TVector3& pos, const TVector3& mom, const TMatrixDSym& cov6x6) const = 0;
  //! Set position, momentum and covariance of state.
  virtual void setPosMomCov(MeasuredStateOnPlane& state, const TVectorD& state6, const TMatrixDSym& cov6x6) const = 0;

  //! Set the sign of the charge according to charge.
  virtual void setChargeSign(StateOnPlane& state, double charge) const = 0;
  //! Set charge/momentum.
  virtual void setQop(StateOnPlane& state, double qop) const = 0;
  //! Set time at which the state was defined
  virtual void setTime(StateOnPlane& state, double time) const = 0;

  //! Set propagation direction. (-1, 0, 1) -> (backward, auto, forward).
  void setPropDir(int dir) {
    if (dir>0) propDir_ = 1;
    else if (dir<0) propDir_ = -1;
    else propDir_ = 0;
  };

  //! Switch propagation direction. Has no effect if propDir_ is set to 0.
  void switchPropDir(){propDir_ = -1*propDir_;}

  //! check if other is of same type (e.g. RKTrackRep).
  virtual bool isSameType(const AbsTrackRep* other) = 0;

  //! check if other is of same type (e.g. RKTrackRep) and has same pdg code.
  virtual bool isSame(const AbsTrackRep* other) = 0;

  virtual void setDebugLvl(unsigned int lvl = 1) {debugLvl_ = lvl;}

  virtual void Print(const Option_t* = "") const;

 protected:

  //! protect from calling copy c'tor from outside the class. Use #clone() if you want a copy!
  AbsTrackRep(const AbsTrackRep&);
  //! protect from calling assignment operator from outside the class. Use #clone() instead!
  AbsTrackRep& operator=(const AbsTrackRep&);


  //! Particle code
  int pdgCode_;
  //! propagation direction (-1, 0, 1) -> (backward, auto, forward)
  char propDir_;

  unsigned int debugLvl_;

 public:
  ClassDef(AbsTrackRep,1)

};

} /* End of namespace genfit */
/** @} */

#endif // genfit_AbsTrackRep_h
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
// Description:
//      Detector plane - a geometric object
/**
 *  @author Christian H&ouml;ppner (Technische Universit&auml;t M&uuml;nchen, original author)
 *  @author Sebastian Neubert  (Technische Universit&auml;t M&uuml;nchen, original author)
 *
 */

/** @addtogroup genfit
 * @{
 */

#ifndef genfit_DetPlane_h
#define genfit_DetPlane_h

#include "AbsFinitePlane.h"

#include <TObject.h>
#include <TVector3.h>

#include <memory>


namespace genfit {

/** @brief Detector plane.
 *
 * A detector plane is the principle object to define coordinate systems for
 * track fitting in genfit. Since a particle trajectory is a
 * one-dimensional object (regardless of any specific parameterization)
 * positions with respect to the track are always measured in a plane.
 *
 * Which plane is chosen depends on the type of detector. Fixed plane
 * detectors have their detector plane defined by their mechanical setup. While
 * wire chambers or time projection chambers might want to define a detector
 * plane more flexibly.
 *
 * This class parameterizes a plane in terms of an origin vector o
 * and two plane-spanning directions u and v.
 */
class DetPlane : public TObject {

 public:


  // Constructors/Destructors ---------
  DetPlane(AbsFinitePlane* finite = nullptr);

  DetPlane(const TVector3& o,
             const TVector3& u,
             const TVector3& v,
             AbsFinitePlane* finite = nullptr);

  DetPlane(const TVector3& o,
             const TVector3& n,
             AbsFinitePlane* finite = nullptr);

  virtual ~DetPlane();

  DetPlane(const DetPlane&);
  DetPlane& operator=(DetPlane);
  void swap(DetPlane& other); // nothrow

  // Accessors -----------------------
  const TVector3& getO() const {return o_;}
  const TVector3& getU() const {return u_;}
  const TVector3& getV() const {return v_;}

  // Modifiers -----------------------
  void set(const TVector3& o,
           const TVector3& u,
           const TVector3& v);
  void setO(const TVector3& o);
  void setO(double, double, double);
  void setU(const TVector3& u);
  void setU(double, double, double);
  void setV(const TVector3& v);
  void setV(double, double, double);
  void setUV(const TVector3& u, const TVector3& v);
  void setON(const TVector3& o, const TVector3& n);

  //! Optionally, set the finite plane definition. This is most important for
  //! avoiding fake intersection points in fitting of curlers. This should
  //! be implemented for silicon detectors most importantly.
  void setFinitePlane(AbsFinitePlane* finite){finitePlane_.reset(finite);}

  // Operations ----------------------
  TVector3 getNormal() const;
  void setNormal(const TVector3& n);
  void setNormal(double, double, double);
  void setNormal(const double& theta, const double& phi);

  //! projecting a direction onto the plane:
  TVector2 project(const TVector3& x) const;

  //! transform from Lab system into plane
  TVector2 LabToPlane(const TVector3& x) const;

  //! transform from plane coordinates to lab system
  TVector3 toLab(const TVector2& x) const;

  // get vector from point to plane (normal)
  TVector3 dist(const TVector3& point) const;

  //! gives u,v coordinates of the intersection point of a straight line with plane
  TVector2 straightLineToPlane(const TVector3& point, const TVector3& dir) const;

  //! gives u,v coordinates of the intersection point of a straight line with plane
  void straightLineToPlane(const double& posX, const double& posY, const double& posZ,
                           const double& dirX, const double& dirY, const double& dirZ,
                           double& u, double& v) const;

  void Print(const Option_t* = "") const;

  //! Checks equality of planes by comparing the 9 double values that define them.
  friend bool operator== (const DetPlane& lhs, const DetPlane& rhs);
  //! returns NOT ==
  friend bool operator!= (const DetPlane& lhs, const DetPlane& rhs);

  //! absolute distance from a point to the plane
  double distance(const TVector3& point) const;
  double distance(double, double, double) const;


  //! intersect in the active area? C.f. AbsFinitePlane
  bool isInActive(const TVector3& point, const TVector3& dir) const {
    if(finitePlane_.get() == nullptr) return true;
    return this->isInActive( this->straightLineToPlane(point,dir));
  }

  //! intersect in the active area? C.f. AbsFinitePlane
  bool isInActive(const double& posX, const double& posY, const double& posZ,
                  const double& dirX, const double& dirY, const double& dirZ) const {
    if(finitePlane_.get() == nullptr) return true;
    double u, v;
    this->straightLineToPlane(posX, posY, posZ, dirX, dirY, dirZ, u, v);
    return this->isInActive(u, v);
  }

  //! isInActive methods refer to finite plane. C.f. AbsFinitePlane
  bool isInActive(double u, double v) const{
    if(finitePlane_.get() == nullptr) return true;
    return finitePlane_->isInActive(u,v);
  }

  //! isInActive methods refer to finite plane. C.f. AbsFinitePlane
  bool isInActive(const TVector2& v) const{
    return isInActive(v.X(),v.Y());
  }

  bool isFinite() const {
    return (finitePlane_.get() != nullptr);
  }

  //! rotate u and v around normal. Angle is in rad. More for debugging than for actual use.
  void rotate(double angle);

  //! delete finitePlane_ and set O, U, V to default values
  void reset();

 private:
  // Private Methods -----------------
  //! ensures orthonormal coordinates
  void sane();

  TVector3 o_;
  TVector3 u_;
  TVector3 v_;

  std::unique_ptr<AbsFinitePlane> finitePlane_; // Ownership

 public:
  ClassDef(DetPlane,1)

};

} /* End of namespace genfit */
/** @} */

#endif // genfit_DetPlane_h
/* Copyright 2008-2010, Technische Universitaet Muenchen,
   Authors: Christian Hoeppner & Sebastian Neubert & Johannes Rauch & Tobias Schlüter

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

#ifndef genfit_FitStatus_h
#define genfit_FitStatus_h

#include <Rtypes.h>
#include <Math/ProbFuncMathCore.h>


namespace genfit {


/**
 * @brief Info which information has been pruned from the Track.
 *
 * Possible options:
   * C:  prune all reps except cardinalRep
   * F:  prune all points except first point (also prune referenceInfo from fitterInfos)
   * L:  prune all points except last point (also prune referenceInfo from fitterInfos)
   * FL: prune all points except first and last point (also prune referenceInfo from fitterInfos)
   * W:  prune rawMeasurements from TrackPoints
   * R:  prune referenceInfo from fitterInfos
   * M:  prune measurementInfo from fitterInfos
   * I:  if F, L, or FL is set, prune forward (backward) info of first (last) point
   * U:  if fitterInfo is a KalmanFitterInfo, prune predictions and keep updates
 */
struct PruneFlags {
  PruneFlags();
  void reset();
  //! does not reset! If a flag is already true and is not in opt, it will stay true.
  void setFlags(Option_t* option = "");
  //! check if all the given flags are set
  bool hasFlags(Option_t* option = "CFLWRMIU") const;
  //! check if any of the flags is set
  bool isPruned() const;

  void Print(const Option_t* = "") const;

private:
  enum fields { C = 1 << 0,
		F = 1 << 1,
		L = 1 << 2,
		W = 1 << 3,
		R = 1 << 4,
		M = 1 << 5,
		I = 1 << 6,
		U = 1 << 7 };

  int value; // bitfield composed from above.  ROOT cannot deal with
	     // bitfield notation, so this is done manually.

  // No ClassDef here.  Update FitStatus version number when changing this.
};


/** @brief Class where important numbers and properties of a fit can be stored.
 *
 *  @author Johannes Rauch (Technische Universit&auml;t M&uuml;nchen, original author)
 */
class FitStatus {

 public:

  FitStatus() :
    isFitted_(false), isFitConvergedFully_(false), isFitConvergedPartially_(false), nFailedPoints_(0),
    trackHasChanged_(false), pruneFlags_(), charge_(0), chi2_(-1e99), ndf_(-1e99)
  {;}

  virtual ~FitStatus() {};

  virtual FitStatus* clone() const {return new FitStatus(*this);}

  //! Has the track been fitted?
  bool isFitted() const {return isFitted_;}
  //! Did the fit converge (in all Points or only partially)?
  /**
   * Per default, this function will only be true, if all TrackPoints
   * (with measurements) have been used in the fit, and the fit has converged.
   *
   * If one or more TrackPoints have been skipped
   * (e.g. plane could not be constructed or extrapolation to plane failed),
   * but the fit otherwise met the convergence criteria, isFitConverged(false)
   * will return true.
   */
  bool isFitConverged(bool inAllPoints = true) const {
    if (inAllPoints)
        return isFitConvergedFully_;
    return isFitConvergedPartially_;
  }
  bool isFitConvergedFully() const {return isFitConvergedFully_;}
  bool isFitConvergedPartially() const {return isFitConvergedPartially_;}
  int getNFailedPoints() const {return nFailedPoints_;}
  //! Has anything in the Track been changed since the fit?
  bool hasTrackChanged() const {return trackHasChanged_;}
  //! Has the track been pruned after the fit?
  bool isTrackPruned() const {return pruneFlags_.isPruned();}
  //! Get the fitted charge.
  double getCharge() const {return charge_;}
  //! Get chi^2 of the fit.
  double getChi2() const {return chi2_;}
  //! Get the degrees of freedom of the fit.
  double getNdf() const {return ndf_;}
  /**
   * @brief Get the p value of the fit.
   *
   * Virtual, because the fitter may use a different probability distribution.
   */
  virtual double getPVal() const {return std::max(0.,ROOT::Math::chisquared_cdf_c(chi2_, ndf_));}

  void setIsFitted(bool fitted = true) {isFitted_ = fitted;}
  void setIsFitConvergedFully(bool fitConverged = true) {isFitConvergedFully_ = fitConverged;}
  void setIsFitConvergedPartially(bool fitConverged = true) {isFitConvergedPartially_ = fitConverged;}
  void setNFailedPoints(int nFailedPoints) {nFailedPoints_ = nFailedPoints;}
  void setHasTrackChanged(bool trackChanged = true) {trackHasChanged_ = trackChanged;}
  void setCharge(double charge) {charge_ = charge;}

  PruneFlags& getPruneFlags() {return pruneFlags_;}

  void setChi2(const double& chi2) {chi2_ = chi2;}
  void setNdf(const double& ndf) {ndf_ = ndf;}

  virtual void Print(const Option_t* = "") const;

 protected:

  //! has the track been fitted?
  bool isFitted_;
  //! did the fit converge with all TrackPoints?
  bool isFitConvergedFully_;
  //! did the fit converge with a subset of all TrackPoints?
  bool isFitConvergedPartially_;
  //! Number of failed TrackPoints
  int nFailedPoints_;
  //! has anything in the Track been changed since the fit? -> fit isn't valid anymore
  bool trackHasChanged_;
  //! Prune flags
  PruneFlags pruneFlags_;
  //! fitted charge
  double charge_;

  //! These are provided for the sake of the fitter, and their interpretation may vary.
  //! For the Kalman-derived fitters in particular, this corresponds to the backwards fit.
  double chi2_;
  double ndf_;

  ClassDef(FitStatus, 3);
};

} /* End of namespace genfit */
/** @} */

#endif // genfit_FitStatus_h
/* Copyright 2015, Ludwig-Maximilians-Universität München
   Authors: Tobias Schlüter

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

#ifndef genfit_IO_h
#define genfit_IO_h

/** @brief Defines for I/O streams used for error and debug printing.
 */

#include <ostream>

namespace genfit {

/** Default stream for debug output.  Defaults to std::cout.
   Override destination with debugOut.rdbuf(newStream.rdbuf()).  */
extern std::ostream debugOut;
/** Default stream for error output.  Defaults to std::cerr.
    Override destination with errorOut.rdbuf(newStream.rdbuf()).  */
extern std::ostream errorOut;
/** Default stream for output of Print calls.  Defaults to std::cout.
   Override destination with printOut.rdbuf(newStream.rdbuf()).  */
extern std::ostream printOut;

}

#endif
#ifndef genfit_Material_h
#define genfit_Material_h

#include <TObject.h>

namespace genfit {

    struct Material {
        double density;  /// Density in g / cm^3
        double Z;  /// Atomic number
        double A;  /// Mass number in g / mol
        double radiationLength;  /// Radiation Length in cm
        double mEE;  /// Mean excitaiton energy in eV

        Material() : density(0), Z(0), A(0), radiationLength(0), mEE(0) {}

        Material(double density_, double Z_, double A_, double radiationLength_, double mEE_) :
                density(density_), Z(Z_), A(A_), radiationLength(radiationLength_), mEE(mEE_) {}

        Material(const Material &material) = default;

        virtual ~Material() {};

        void Print(const Option_t* = "") const;

        ClassDef(Material, 1)
    };

    bool operator==(const Material &lhs, const Material &rhs);

    bool operator!=(const Material &lhs, const Material &rhs);

}

#endif
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

#ifndef genfit_MeasuredStateOnPlane_h
#define genfit_MeasuredStateOnPlane_h

#include "StateOnPlane.h"
#include "AbsTrackRep.h"

#include <TMatrixDSym.h>

#include <cassert>

namespace genfit {

/**
 *  @brief #StateOnPlane with additional covariance matrix.
 */
class MeasuredStateOnPlane : public StateOnPlane {

 public:

  MeasuredStateOnPlane(const AbsTrackRep* rep = nullptr);
  MeasuredStateOnPlane(const TVectorD& state, const TMatrixDSym& cov, const genfit::SharedPlanePtr& plane, const AbsTrackRep* rep);
  MeasuredStateOnPlane(const TVectorD& state, const TMatrixDSym& cov, const genfit::SharedPlanePtr& plane, const AbsTrackRep* rep, const TVectorD& auxInfo);
  MeasuredStateOnPlane(const MeasuredStateOnPlane& o);
  MeasuredStateOnPlane(const StateOnPlane& state, const TMatrixDSym& cov);

  MeasuredStateOnPlane& operator=(MeasuredStateOnPlane other);
  void swap(MeasuredStateOnPlane& other); // nothrow

  virtual ~MeasuredStateOnPlane() {}
  virtual MeasuredStateOnPlane* clone() const override {return new MeasuredStateOnPlane(*this);}


  const TMatrixDSym& getCov() const {return cov_;}
  TMatrixDSym& getCov() {return cov_;}

  //! Blow up covariance matrix with blowUpFac. Per default, off diagonals are reset to 0 and the maximum values are limited to maxVal.
  void blowUpCov(double blowUpFac, bool resetOffDiagonals = true, double maxVal = -1.);

  void setStateCov(const TVectorD& state, const TMatrixDSym& cov) {setState(state); setCov(cov);}
  void setStateCovPlane(const TVectorD& state, const TMatrixDSym& cov, const SharedPlanePtr& plane) {setStatePlane(state, plane); setCov(cov);}
  void setCov(const TMatrixDSym& cov) {if(cov_.GetNrows() == 0) cov_.ResizeTo(cov); cov_ = cov;}

  // Shortcuts to TrackRep functions
  TMatrixDSym get6DCov() const {return getRep()->get6DCov(*this);};
  void getPosMomCov(TVector3& pos, TVector3& mom, TMatrixDSym& cov) const {getRep()->getPosMomCov(*this, pos, mom, cov);}
  void get6DStateCov(TVectorD& stateVec, TMatrixDSym& cov) const {getRep()->get6DStateCov(*this, stateVec, cov);}
  double getMomVar() const {return getRep()->getMomVar(*this);}

  void setPosMomErr(const TVector3& pos, const TVector3& mom, const TVector3& posErr, const TVector3& momErr) {getRep()->setPosMomErr(*this, pos, mom, posErr, momErr);}
  void setPosMomCov(const TVector3& pos, const TVector3& mom, const TMatrixDSym& cov6x6) {getRep()->setPosMomCov(*this, pos, mom, cov6x6);}
  void setPosMomCov(const TVectorD& state6, const TMatrixDSym& cov6x6) {getRep()->setPosMomCov(*this, state6, cov6x6);}


  virtual void Print(Option_t* option = "") const override;

 protected:

  TMatrixDSym cov_;

 public:
  ClassDefOverride(MeasuredStateOnPlane,1)

};


/**
 * @brief Calculate weighted average between two MeasuredStateOnPlanes
 */
MeasuredStateOnPlane calcAverageState(const MeasuredStateOnPlane& forwardState, const MeasuredStateOnPlane& backwardState);


inline void MeasuredStateOnPlane::swap(MeasuredStateOnPlane& other) {
  StateOnPlane::swap(other);
  this->cov_.ResizeTo(other.cov_);
  std::swap(this->cov_, other.cov_);
}

inline MeasuredStateOnPlane::MeasuredStateOnPlane(const AbsTrackRep* rep) :
  StateOnPlane(rep), cov_(0,0)
{
  if (rep != nullptr) {
    cov_.ResizeTo(rep->getDim(), rep->getDim());
  }
}

inline MeasuredStateOnPlane::MeasuredStateOnPlane(const TVectorD& state, const TMatrixDSym& cov, const SharedPlanePtr& plane, const AbsTrackRep* rep) :
  StateOnPlane(state, plane, rep), cov_(cov)
{
  assert(rep != nullptr);
  //assert(cov_.GetNcols() == (signed)rep->getDim());
}

inline MeasuredStateOnPlane::MeasuredStateOnPlane(const TVectorD& state, const TMatrixDSym& cov, const SharedPlanePtr& plane, const AbsTrackRep* rep, const TVectorD& auxInfo) :
  StateOnPlane(state, plane, rep, auxInfo), cov_(cov)
{
  assert(rep != nullptr);
  //assert(cov_.GetNcols() == (signed)rep->getDim());
}

inline MeasuredStateOnPlane::MeasuredStateOnPlane(const MeasuredStateOnPlane& o) :
  StateOnPlane(o), cov_(o.cov_)
{
}

inline MeasuredStateOnPlane::MeasuredStateOnPlane(const StateOnPlane& state, const TMatrixDSym& cov) :
  StateOnPlane(state), cov_(cov)
{
  //assert(cov_.GetNcols() == (signed)getRep()->getDim());
}

inline MeasuredStateOnPlane& MeasuredStateOnPlane::operator=(MeasuredStateOnPlane other) {
  swap(other);
  return *this;
}


} /* End of namespace genfit */
/** @} */

#endif // genfit_MeasuredStateOnPlane_h
/* Copyright 2008-2010, Technische Universitaet Muenchen,
   Authors: Christian Hoeppner & Sebastian Neubert & Johannes Rauch & Tobias Schlüter

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


#ifndef genfit_MeasurementFactory_h
#define genfit_MeasurementFactory_h

#include "MeasurementProducer.h"
#include "TrackCand.h"

#include <vector>
#include <map>


namespace genfit {

class AbsMeasurement;

/** @brief Factory object to create AbsMeasurement objects from digitized and clustered data
 *
 * The MeasurementFactory is used to automatically fill Track objects
 * with hit data. For each detector type used an
 * AbsMeasurementProducer has to be registered in the factory. The
 * factory can then use the index information from a TrackCand object
 * to load the indexed hits into the Track.
 *
 * @sa AbsMeasurementProducer
 * @sa TrackCand
 */
template <class measurement_T>
class MeasurementFactory {
 private:
  std::map<int, AbsMeasurementProducer<measurement_T>*> hitProdMap_;


 public:
  MeasurementFactory() {};
  virtual ~MeasurementFactory() { clear(); }

  /** @brief Register a producer module to the factory
   *
   * For each type of hit a separate producer is needed. The type of hit
   * is identified by the detector ID (detID). This index corresponds to the
   * detector ID that is stored in the TrackCand.
   */
  void addProducer(int detID, AbsMeasurementProducer<measurement_T>* hitProd);

  /** @brief Clear all hit producers
   */
  void clear();

  /** @brief Create a Measurement
   *
   * Measurements have to implement a Constructor which takes the cluster object
   * from which the Measurement is built as the only parameter.
   * @sa AbsMeasurementProducer
   */
  measurement_T* createOne (int detID, int index, const TrackCandHit* hit) const;

  /** @brief Create a collection of Measurements
   *
   * This is the standard way to prepare the hit collection for a Track. The
   * resulting collection can contain hits from several detectors. The order
   * of the hits is the same as in the TrackCand. It is assumed that this order
   * is already along the Track.
   *
   * Measurements have to implement a constructor which takes the cluster object
   * from which the Measurement is built as the only parameter.
   * @sa AbsMeasurementProducer
   */
  std::vector<measurement_T*> createMany(const TrackCand& cand) const;

};


template <class measurement_T>
void MeasurementFactory<measurement_T>::addProducer(int detID, AbsMeasurementProducer<measurement_T>* hitProd) {
  typename std::map<int, AbsMeasurementProducer<measurement_T>*>::iterator it = hitProdMap_.find(detID);
  if(it == hitProdMap_.end()) {
    hitProdMap_[detID] = hitProd;
  } else {
    Exception exc("MeasurementFactory: detID already in use",__LINE__,__FILE__);
    exc.setFatal();
    std::vector<double> numbers;
    numbers.push_back(detID);
    exc.setNumbers("detID",numbers);
    throw exc;
  }
}

template <class measurement_T>
void MeasurementFactory<measurement_T>::clear(){
  typename std::map<int, AbsMeasurementProducer<measurement_T>*>::iterator it=hitProdMap_.begin();
  while(it!=hitProdMap_.end()){
    delete it->second;
    ++it;
  }
  hitProdMap_.clear();
}

template <class measurement_T>
measurement_T* MeasurementFactory<measurement_T>::createOne(int detID, int index, const TrackCandHit* hit) const {
  typename std::map<int, AbsMeasurementProducer<measurement_T>*>::const_iterator it = hitProdMap_.find(detID);

  if(it != hitProdMap_.end()) {
    return it->second->produce(index, hit);
  } else {
    Exception exc("MeasurementFactory: no hitProducer for this detID available",__LINE__,__FILE__);
    exc.setFatal();
    std::vector<double> numbers;
    numbers.push_back(detID);
    exc.setNumbers("detID", numbers);
    throw exc;
  }
}

template <class measurement_T>
typename std::vector<measurement_T*> MeasurementFactory<measurement_T>::createMany(const TrackCand& cand) const {
  typename std::vector<measurement_T*> hitVec;
  unsigned int nHits=cand.getNHits();
  for(unsigned int i=0;i<nHits;i++) {
    int detID, index;
    const TrackCandHit* hit = cand.getHit(i);
    cand.getHit(i, detID, index);
    hitVec.push_back( MeasurementFactory<measurement_T>::createOne(hit->getDetId(), hit->getHitId(), hit) );
  }
  return hitVec;
}


} /* End of namespace genfit */
/** @} */

#endif // genfit_MeasurementFactory_h
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

#ifndef genfit_MeasurementOnPlane_h
#define genfit_MeasurementOnPlane_h

#include "MeasuredStateOnPlane.h"
#include "AbsHMatrix.h"

#include <TMatrixD.h>

#include <cmath>
#include <memory>


namespace genfit {

/**
 * @brief Measured coordinates on a plane.
 *
 * The dimensionality will usually be 1 or 2.
 * The HMatrix corresponds to a projection matrix, which is used to
 * project the track parameters with the original dimensionality down
 * to the measured dimensionality.
 */
class MeasurementOnPlane : public MeasuredStateOnPlane {

 public:

  MeasurementOnPlane(const AbsTrackRep* rep = nullptr) :
    MeasuredStateOnPlane(rep), hMatrix_(nullptr), weight_(0) {}
  MeasurementOnPlane(const TVectorD& state, const TMatrixDSym& cov, SharedPlanePtr plane, const AbsTrackRep* rep, const AbsHMatrix* hMatrix, double weight = 1.) :
    MeasuredStateOnPlane(state, cov, plane, rep), hMatrix_(hMatrix), weight_(weight) {}

  //! copy constructor
  MeasurementOnPlane(const MeasurementOnPlane& other);
  //! assignment operator
  MeasurementOnPlane& operator=(MeasurementOnPlane other);
  void swap(MeasurementOnPlane& other);

  virtual ~MeasurementOnPlane() {}

  const AbsHMatrix* getHMatrix() const {return hMatrix_.get();}
  double getWeight() const {return weight_;}

  TMatrixDSym getWeightedCov() {return weight_*cov_;}

  void setHMatrix(const AbsHMatrix* hMatrix) {hMatrix_.reset(hMatrix);}
  void setWeight(double weight) {weight_ = fmax(weight, 1.E-10);}

  void Print(Option_t* option = "") const override ;

 private:
  TVector3 getPos() const;
  TVector3 getMom() const;
  TVector3 getDir() const;
  void getPosMom(TVector3& pos, TVector3& mom) const;
  void getPosDir(TVector3& pos, TVector3& dir) const;
  TVectorD get6DState() const;
  double getMomMag() const;
  int getPDG() const;
  double getCharge() const;
  double getQop() const;
  double getMass() const;
  double getTime() const;

  void setPosMom(const TVector3& pos, const TVector3& mom);
  void setPosMom(const TVectorD& state6);
  void setChargeSign(double charge);
  void setQop(double qop);
  void setTime(double time);


 protected:

  std::unique_ptr<const AbsHMatrix> hMatrix_; // Ownership
  double weight_;

 public:
  ClassDefOverride(MeasurementOnPlane,1)

};

} /* End of namespace   */
/** @} */

#endif //  _MeasurementOnPlane_h
/* Copyright 2008-2010, Technische Universitaet Muenchen,
   Authors: Christian Hoeppner & Sebastian Neubert & Johannes Rauch & Tobias Schlüter

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

#ifndef genfit_MeasurementProducer_h
#define genfit_MeasurementProducer_h

#include "Exception.h"
#include "TrackCand.h"

#include <assert.h>
#include <TClonesArray.h>


namespace genfit {

class AbsMeasurement;

/** @brief Abstract interface class for MeasurementProducer
 *
 * Defines the very basic interface of a producer.
 */
template <class measurement_T>
class AbsMeasurementProducer {
public:
  /** @brief Virtual abstract method to produce a Measurement.
   * Implemented in MeasurementProducer
   */
  virtual measurement_T* produce(int index, const TrackCandHit* hit) = 0;
  virtual ~AbsMeasurementProducer() {};
};


/** @brief Template class for a measurement producer module
 *
 * A MeasurementProducer module is used by MeasurementFactory to create Measurements for
 * one specific detector type.
 *
 * It is assumed that each detector has as output of its digitization /
 * clustering some sort of hit or cluster class which stores all information that
 * corresponds to a measured hit in that detector. The MeasurementProducer
 * converts this information into a class that can be handled by genfit.
 * This class is realized as a Measurement (a class inheriting from AbsMeasurement).
 *
 * In order to use the MeasurementProducer facility, a
 * Measurement has to implement a constructor which takes as an argument
 * a pointer to the cluster class and a TrackCandHit. This constructor serves as the initializing
 * constructor for the Measurement.
 *
 * The MeasurementProducer will fetch the cluster objects from a TClonesArray and
 * use the initializing constructor to build the corresponding Measurement.
 *
 * @param hit_t template parameter specifying hit/cluster class
 * @param measurement_T template parameter specifying Measurement
 */
template <class hit_T, class measurement_T>
class MeasurementProducer : public AbsMeasurementProducer<genfit::AbsMeasurement> {
 private:
  /** @brief pointer to array with cluster data */
  TClonesArray* hitArrayTClones_;

 public:
  /** @brief Constructor takes pointer to the hit array */
  explicit MeasurementProducer(TClonesArray*);
  virtual ~MeasurementProducer();

  /** @brief Create a Measurement from the cluster at position index
   * in TClonesArray
   */
  virtual AbsMeasurement* produce(int index, const TrackCandHit* hit);
};


template <class hit_T, class measurement_T>
  MeasurementProducer<hit_T, measurement_T>::MeasurementProducer(TClonesArray* theArr) {
  hitArrayTClones_ = theArr;
  //std::cout << "hit array with " << hitArrayTClones_->GetEntries() << " entries." << std::endl;
}

template <class hit_T, class measurement_T>
MeasurementProducer<hit_T, measurement_T>::~MeasurementProducer() {
  // we don't assume ownership over the hit arrays
}

template <class hit_T, class measurement_T>
AbsMeasurement* MeasurementProducer<hit_T, measurement_T>::produce(int index, const TrackCandHit* hit) {
  assert(hitArrayTClones_ != nullptr);
  //std::cout << "hit array with " << hitArrayTClones_->GetEntries() << " entries, looking for entry " << index << "." << std::endl;
  if(hitArrayTClones_->At(index) == 0) {
    Exception e("In MeasurementProducer: index for hit in TClonesArray out of bounds",__LINE__,__FILE__);
    e.setFatal();
    throw e;
  }
  return ( new measurement_T( (hit_T*) hitArrayTClones_->At(index), hit ) );
}


} /* End of namespace genfit */
/** @} */

#endif // genfit_MeasurementProducer_h
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

#ifndef genfit_StateOnPlane_h
#define genfit_StateOnPlane_h

#include "SharedPlanePtr.h"
#include "AbsTrackRep.h"

#include <TObject.h>
#include <TVectorD.h>

#include <cassert>


namespace genfit {

/**
 * @brief A state with arbitrary dimension defined in a DetPlane.
 *
 * The dimension and meaning of the #state_ vector are defined by the track parameterization of the #rep_.
 * #sharedPlane_ is a shared_pointer, the ownership over that plane is shared between all StateOnPlane objects defined in that plane.
 * The definition of the state is bound to the TrackRep #rep_. Therefore, the StateOnPlane contains a pointer to a AbsTrackRep.
 * It will provide functionality to extrapolate it and translate the state it into cartesian coordinates.
 * Shortcuts to all functions of the AbsTrackRep which use this StateOnPlane are also provided here.
 */
class StateOnPlane {

 public:

  StateOnPlane(const genfit::StateOnPlane&) = default;

  StateOnPlane(const AbsTrackRep* rep = nullptr);
  //! state is defined by the TrackReps parameterization
  StateOnPlane(const TVectorD& state, const SharedPlanePtr& plane, const AbsTrackRep* rep);
  StateOnPlane(const TVectorD& state, const SharedPlanePtr& plane, const AbsTrackRep* rep, const TVectorD& auxInfo);

  StateOnPlane& operator=(StateOnPlane other);
  void swap(StateOnPlane& other); // nothrow

  virtual ~StateOnPlane() {}
  virtual StateOnPlane* clone() const {return new StateOnPlane(*this);}

  const TVectorD& getState() const {return state_;}
  TVectorD& getState() {return state_;}
  const TVectorD& getAuxInfo() const {return auxInfo_;}
  TVectorD& getAuxInfo() {return auxInfo_;}
  const SharedPlanePtr& getPlane() const {return sharedPlane_;}
  const AbsTrackRep* getRep() const {return rep_;}

  void setState(const TVectorD& state) {if(state_.GetNrows() == 0) state_.ResizeTo(state); state_ = state;}
  void setPlane(const SharedPlanePtr& plane) {sharedPlane_ = plane;}
  void setStatePlane(const TVectorD& state, const SharedPlanePtr& plane) {state_ = state; sharedPlane_ = plane;}
  void setAuxInfo(const TVectorD& auxInfo) {if(auxInfo_.GetNrows() == 0) auxInfo_.ResizeTo(auxInfo); auxInfo_ = auxInfo;}
  void setRep(const AbsTrackRep* rep) {rep_ = rep;}

  // Shortcuts to TrackRep functions
  double extrapolateToPlane(const SharedPlanePtr& plane,
        bool stopAtBoundary = false,
        bool calcJacobianNoise = false) {return rep_->extrapolateToPlane(*this, plane, stopAtBoundary, calcJacobianNoise);}
  double extrapolateToLine(const TVector3& linePoint,
        const TVector3& lineDirection,
        bool stopAtBoundary = false,
        bool calcJacobianNoise = false) {return rep_->extrapolateToLine(*this, linePoint, lineDirection, stopAtBoundary, calcJacobianNoise);}
  double extrapolateToPoint(const TVector3& point,
        bool stopAtBoundary = false,
        bool calcJacobianNoise = false) {return rep_->extrapolateToPoint(*this, point, stopAtBoundary, calcJacobianNoise);}
  double extrapolateToPoint(const TVector3& point,
        const TMatrixDSym& G, // weight matrix (metric)
        bool stopAtBoundary = false,
        bool calcJacobianNoise = false) {return rep_->extrapolateToPoint(*this, point, G, stopAtBoundary, calcJacobianNoise);}
  double extrapolateToCylinder(double radius,
        const TVector3& linePoint = TVector3(0.,0.,0.),
        const TVector3& lineDirection = TVector3(0.,0.,1.),
        bool stopAtBoundary = false,
        bool calcJacobianNoise = false) {return rep_->extrapolateToCylinder(*this, radius, linePoint, lineDirection, stopAtBoundary, calcJacobianNoise);}
  double extrapolateToCone(double openingAngle,
        const TVector3& conePoint = TVector3(0.,0.,0.),
        const TVector3& coneDirection = TVector3(0.,0.,1.),
        bool stopAtBoundary = false,
        bool calcJacobianNoise = false) {return rep_->extrapolateToCone(*this, openingAngle, conePoint, coneDirection, stopAtBoundary, calcJacobianNoise);}
  double extrapolateToSphere(double radius,
        const TVector3& point = TVector3(0.,0.,0.),
        bool stopAtBoundary = false,
        bool calcJacobianNoise = false) {return rep_->extrapolateToSphere(*this, radius, point, stopAtBoundary, calcJacobianNoise);}
  double extrapolateBy(double step,
        bool stopAtBoundary = false,
        bool calcJacobianNoise = false) {return rep_->extrapolateBy(*this, step, stopAtBoundary, calcJacobianNoise);}
  double extrapolateToMeasurement(const AbsMeasurement* measurement,
        bool stopAtBoundary = false,
        bool calcJacobianNoise = false) {return rep_->extrapolateToMeasurement(*this, measurement, stopAtBoundary, calcJacobianNoise);}


  TVector3 getPos() const {return rep_->getPos(*this);}
  TVector3 getMom() const {return rep_->getMom(*this);}
  TVector3 getDir() const {return rep_->getDir(*this);}
  void getPosMom(TVector3& pos, TVector3& mom) const {rep_->getPosMom(*this, pos, mom);}
  void getPosDir(TVector3& pos, TVector3& dir) const {rep_->getPosDir(*this, pos, dir);}
  TVectorD get6DState() const {return rep_->get6DState(*this);}
  double getMomMag() const {return rep_->getMomMag(*this);}
  int getPDG() const {return rep_->getPDG();}
  double getCharge() const {return rep_->getCharge(*this);}
  double getQop() const {return rep_->getQop(*this);}
  double getMass() const {return rep_->getMass(*this);}
  double getTime() const {return rep_->getTime(*this);}

  void setPosMom(const TVector3& pos, const TVector3& mom) {rep_->setPosMom(*this, pos, mom);}
  void setPosMom(const TVectorD& state6) {rep_->setPosMom(*this, state6);}
  void setChargeSign(double charge) {rep_->setChargeSign(*this, charge);}
  void setQop(double qop) {rep_->setQop(*this, qop);}
  void setTime(double time) {rep_->setTime(*this, time);}


  virtual void Print(Option_t* option = "") const;

 protected:

  TVectorD state_; // state vector
  TVectorD auxInfo_; // auxiliary information (e.g. charge, flight direction etc.)
  SharedPlanePtr sharedPlane_; //! Shared ownership.  '!' in order to silence ROOT, custom streamer writes and reads this.

 private:

  /** Pointer to TrackRep with respect to which StateOnPlane is defined
   */
  const AbsTrackRep* rep_; //! No ownership

 public:
  ClassDef(StateOnPlane,2)
  // Version history:
  // ver 2: no longer derives from TObject (the TObject parts were not 
  //        streamed, so no compatibility issues arise.)
};


inline StateOnPlane::StateOnPlane(const AbsTrackRep* rep) :
  state_(0), auxInfo_(0), sharedPlane_(), rep_(rep)
{
  if (rep != nullptr) {
    state_.ResizeTo(rep->getDim());
  }
}

inline StateOnPlane::StateOnPlane(const TVectorD& state, const SharedPlanePtr& plane, const AbsTrackRep* rep) :
  state_(state), auxInfo_(0), sharedPlane_(plane), rep_(rep)
{
  assert(rep != nullptr);
  assert(sharedPlane_.get() != nullptr);
}

inline StateOnPlane::StateOnPlane(const TVectorD& state, const SharedPlanePtr& plane, const AbsTrackRep* rep, const TVectorD& auxInfo) :
  state_(state), auxInfo_(auxInfo), sharedPlane_(plane), rep_(rep)
{
  assert(rep != nullptr);
  assert(sharedPlane_.get() != nullptr);
}

inline StateOnPlane& StateOnPlane::operator=(StateOnPlane other) {
  swap(other);
  return *this;
}

inline void StateOnPlane::swap(StateOnPlane& other) {
  this->state_.ResizeTo(other.state_);
  std::swap(this->state_, other.state_);
  this->auxInfo_.ResizeTo(other.auxInfo_);
  std::swap(this->auxInfo_, other.auxInfo_);
  this->sharedPlane_.swap(other.sharedPlane_);
  std::swap(this->rep_, other.rep_);
}

} /* End of namespace genfit */
/** @} */

#endif // genfit_StateOnPlane_h
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

#ifndef genfit_AbsMeasurement_h
#define genfit_AbsMeasurement_h

#include "MeasurementOnPlane.h"
#include "AbsHMatrix.h"

#include <TObject.h>


namespace genfit {

class AbsTrackRep;
class TrackPoint;

/**
 *  @brief Contains the measurement and covariance in raw detector coordinates.
 *
 *  Detector and hit ids can be used to point back to the original detector hits (clusters etc.).
 */
class AbsMeasurement : public TObject {

 public:

  AbsMeasurement() : rawHitCoords_(), rawHitCov_(), detId_(-1), hitId_(-1), trackPoint_(nullptr) {;}
  AbsMeasurement(int nDims) : rawHitCoords_(nDims), rawHitCov_(nDims), detId_(-1), hitId_(-1), trackPoint_(nullptr) {;}
  AbsMeasurement(const TVectorD& rawHitCoords, const TMatrixDSym& rawHitCov, int detId, int hitId, TrackPoint* trackPoint);

  virtual ~AbsMeasurement();

  //! Deep copy ctor for polymorphic class.
  virtual AbsMeasurement* clone() const = 0;

  TrackPoint* getTrackPoint() const {return trackPoint_;}
  void setTrackPoint(TrackPoint* tp) {trackPoint_ = tp;}

  const TVectorD& getRawHitCoords() const {return rawHitCoords_;}
  const TMatrixDSym& getRawHitCov() const {return rawHitCov_;}
  TVectorD& getRawHitCoords() {return rawHitCoords_;}
  TMatrixDSym& getRawHitCov() {return rawHitCov_;}
  int getDetId() const {return detId_;}
  int getHitId() const {return hitId_;}

  //! If the AbsMeasurement is a wire hit, the left/right resolution will be used.
  virtual bool isLeftRightMeasurement() const {return false;}
  virtual int getLeftRightResolution() const {return 0;}

  unsigned int getDim() const {return rawHitCoords_.GetNrows();}

  void setRawHitCoords(const TVectorD& coords) {rawHitCoords_ = coords;}
  void setRawHitCov(const TMatrixDSym& cov) {rawHitCov_ = cov;}
  void setDetId(int detId) {detId_ = detId;}
  void setHitId(int hitId) {hitId_ = hitId;}


  /**
   * Construct (virtual) detector plane (use state's AbsTrackRep).
   * It's possible to make corrections to the plane here.
   * The state should be defined somewhere near the measurement.
   * For virtual planes, the state will be extrapolated to the POCA to point (SpacepointMeasurement)
   * or line (WireMeasurement), and from this info the plane will be constructed.
   */
  virtual SharedPlanePtr constructPlane(const StateOnPlane& state) const = 0;

  /**
   * Construct MeasurementOnPlane on plane of the state
   * and wrt the states TrackRep.
   * The state will usually be the prediction or reference state,
   * and has to be defined AT the measurement.
   * The AbsMeasurement will be projected onto the plane.
   * It's possible to make corrections to the coordinates here (e.g. by using the state coordinates).
   * Usually the vector will contain only one element. But in the case of e.g. a WireMeasurement, it will be 2 (left and right).
   */
  virtual std::vector<genfit::MeasurementOnPlane*> constructMeasurementsOnPlane(const StateOnPlane& state) const = 0;

  /**
   * Returns a new AbsHMatrix object. Caller must take ownership.
   */
  virtual const AbsHMatrix* constructHMatrix(const AbsTrackRep*) const = 0;

  virtual void Print(const Option_t* = "") const;


 private:
  //! protect from calling assignment operator from outside the class. Use #clone() if you want a copy!
  AbsMeasurement& operator=(const AbsMeasurement&); // default cannot work because TVector and TMatrix = operators don't do resizing

 protected:
  //! protect from calling copy c'tor from outside the class. Use #clone() if you want a copy!
  AbsMeasurement(const AbsMeasurement&);

  TVectorD rawHitCoords_;
  TMatrixDSym rawHitCov_;
  int detId_; // detId id is -1 per default
  int hitId_; // hitId id is -1 per default

  //! Pointer to TrackPoint where the measurement belongs to
  TrackPoint* trackPoint_; //! No ownership

 public:
  ClassDef(AbsMeasurement, 3)
};

} /* End of namespace genfit */
/** @} */

#endif // genfit_AbsMeasurement_h
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

#ifndef genfit_ThinScatterer_h
#define genfit_ThinScatterer_h

#include "SharedPlanePtr.h"
#include "Material.h"

#include <TObject.h>


namespace genfit {

/**
 * @brief Thin or thick scatterer
 */
class ThinScatterer : public TObject {

 public:

  ThinScatterer() :
    TObject(), sharedPlane_(), material_() {;}
  ThinScatterer(const SharedPlanePtr& sharedPlane, const Material& material) :
    TObject(), sharedPlane_(sharedPlane), material_(material) {;}

  SharedPlanePtr getPlane() const {return sharedPlane_;}
  const Material& getMaterial() const {return material_;}

  void Print(const Option_t* = "") const;

 private:

  SharedPlanePtr sharedPlane_; //! Material boundary.  '!' shuts up ROOT.
  Material material_; // Material properties


 public:
  ClassDef(ThinScatterer, 2)

};

} /* End of namespace genfit */
/** @} */

#endif // genfit_ThinScatterer_h
/* Copyright 2008-2010, Technische Universitaet Muenchen,
   Authors: Christian Hoeppner & Sebastian Neubert & Johannes Rauch & Tobias Schlüter

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

#ifndef genfit_Track_h
#define genfit_Track_h

#include "AbsTrackRep.h"
#include "FitStatus.h"
#include "MeasurementFactory.h"
#include "TrackCand.h"
#include "TrackPoint.h"

#include <vector>
#include <TObject.h>
#include <TVectorD.h>


namespace genfit {

class KalmanFitStatus;

/**
 * @brief Helper class for TrackPoint sorting, used in Track::sort().
 */
class TrackPointComparator {
 public:
  /**
   * Comparison operator used in Track::sort(). Compares sorting parameter.
   */
  bool operator() (const TrackPoint* lhs, const TrackPoint* rhs) const {
    return lhs->getSortingParameter() < rhs->getSortingParameter();
  }
};


/**
 * @brief Collection of TrackPoint objects, AbsTrackRep objects and FitStatus objects
 *
 *  Holds a number of AbsTrackRep objects, which correspond to the
 *  different particle hypotheses or track models which should be fitted.
 *  A 6D seed #stateSeed_ (x,y,z,p_x,p_y,p_z) and 6x6 #covSeed_ should be provided as start values for fitting.
 *  When fitting the Track with a AbsFitter,
 *  a FitStatus object will be created, containing information about the fit.
 *  The fitted states will be stored in AbsFitterInfo objects in every TrackPoints.
 *
 *  The fit will be performed for every AbsTrackRep,
 *  so after the fit there will be one AbsFitterInfo for each AbsTrackRep
 *  in every TrackPoint, as well as one FitStatus for every AbsTrackRep.
 *
 */
class Track : public TObject {

 public:

  Track();

  /**
   * @ brief Construct Track from TrackCand, using a MeasurementFactory
   *
   * The MeasurementFactory will be used to create AbsMeasuremen objects.
   * TrackPoints will be created.
   * If two or more consecutive PlanarMeasurement objects with the same detector- and planeId
   * are created by the factory, they will be put into the same TrackPoint.
   *
   * Optionally, a AbsTrackRep can be provided.
   *
   * The stateSeed_ of the Track will be filled with the seed of the TrackCand.
   * A guess for covSeed_ will be made using the largest entry of the cov of the first measurement
   * and the number of measurements (For the covSeed_, it is just important that it will be
   * big enough not to bias the fit too much, but not too big in order to avoid
   * numerical problems).
   */
  Track(const TrackCand& trackCand, const MeasurementFactory<genfit::AbsMeasurement>& factory, AbsTrackRep* rep = nullptr);

  Track(AbsTrackRep* trackRep, const TVectorD& stateSeed);
  Track(AbsTrackRep* trackRep, const TVector3& posSeed, const TVector3& momSeed);
  Track(AbsTrackRep* trackRep, const TVectorD& stateSeed, const TMatrixDSym& covSeed);

  Track(const Track&); // copy constructor
  Track& operator=(Track); // assignment operator
  void swap(Track& other); // nothrow

  virtual ~Track();
  virtual void Clear(Option_t* = "");

  void createMeasurements(const TrackCand& trackCand, const MeasurementFactory<genfit::AbsMeasurement>& factory);

  TrackPoint* getPoint(int id) const;
  const std::vector< genfit::TrackPoint* > & getPoints() const {return trackPoints_;}
  unsigned int getNumPoints() const {return trackPoints_.size();}

  TrackPoint* getPointWithMeasurement(int id) const;
  const std::vector< genfit::TrackPoint* > & getPointsWithMeasurement() const  {return trackPointsWithMeasurement_;}
  unsigned int getNumPointsWithMeasurement() const {return trackPointsWithMeasurement_.size();}

  TrackPoint* getPointWithMeasurementAndFitterInfo(int id, const AbsTrackRep* rep = nullptr) const;
  TrackPoint* getPointWithFitterInfo(int id, const AbsTrackRep* rep = nullptr) const;

  /**
   * @brief Shortcut to get FittedStates.
   *
   * Uses getPointWithFitterInfo(id, rep).
   * Gets the fitted state at trackpoint id for the track representation rep.
   * Per default, the fitted state of the fitterInfo of the first TrackPoint
   * with one or more AbsFitterInfo objects
   * is returned. If no AbsTrackRep is specified, the AbsFitterInfo of the cardinal rep will be used.
   */
  const MeasuredStateOnPlane& getFittedState(int id = 0, const AbsTrackRep* rep = nullptr, bool biased = true) const;

  AbsTrackRep* getTrackRep(int id) const {return trackReps_.at(id);}
  /// Return the track representations as a list of pointers.
  const std::vector<genfit::AbsTrackRep*>& getTrackReps() const {return trackReps_;}
  unsigned int getNumReps() const {return trackReps_.size();}

  //! This is used when streaming TrackPoints.
  int getIdForRep(const AbsTrackRep* rep) const;

  /** @brief Get cardinal track representation
   *
   * The user has to choose which AbsTrackRep should be considered the
   * best one after the fit. E.g. the track representation giving the
   * smallest chi2 could be chosen. By default the first in the list is returned.
   * @sa #determineCardinalRep()
   */
  AbsTrackRep* getCardinalRep() const {return trackReps_.at(cardinalRep_);}
  unsigned int getCardinalRepId() const {return cardinalRep_;}

  //! Get the MCT track id, for MC simulations - default value = -1
  int getMcTrackId() const {return mcTrackId_;}

  //! Check if track has a FitStatus for given AbsTrackRep. Per default, check for cardinal rep.
  bool hasFitStatus(const AbsTrackRep* rep = nullptr) const;
  //! Get FitStatus for a AbsTrackRep. Per default, return FitStatus for cardinalRep.
  FitStatus* getFitStatus(const AbsTrackRep* rep = nullptr) const {if (rep == nullptr) rep = getCardinalRep(); return fitStatuses_.at(rep);}

  //! Check if track has a KalmanFitStatus for given AbsTrackRep. Per default, check for cardinal rep.
  bool hasKalmanFitStatus(const AbsTrackRep* rep = nullptr) const;
  //! If FitStatus is a KalmanFitStatus, return it. Otherwise return nullptr
  KalmanFitStatus* getKalmanFitStatus(const AbsTrackRep* rep = nullptr) const;

  void setFitStatus(FitStatus* fitStatus, const AbsTrackRep* rep);

  double getTimeSeed() const {return timeSeed_;}
  void setTimeSeed(double time) {timeSeed_ = time;}

  const TVectorD& getStateSeed() const {return stateSeed_;}
  void setStateSeed(const TVectorD& s) {stateSeed_.ResizeTo(s); stateSeed_ = s;}
  void setStateSeed(const TVector3& pos, const TVector3& mom);

  const TMatrixDSym& getCovSeed() const {return covSeed_;}
  void setCovSeed(const TMatrixDSym& c) {covSeed_.ResizeTo(c); covSeed_ = c;}

  //! Set the MCT track id, for MC simulations
  void setMcTrackId(int i) {mcTrackId_ = i;}

  /**
   * @brief Insert TrackPoint BEFORE TrackPoint with position id, if id >= 0.
   *
   * Id -1 means after last TrackPoint. Id -2 means before last TrackPoint. ...
   * Also deletes backwardInfos before new point and forwardInfos after new point.
   * Also sets Track backpointer of point accordingly.
   */
  void insertPoint(TrackPoint* point, int id = -1);

  /**
   * @brief Insert TrackPoints BEFORE TrackPoint with position id, if id >= 0.
   *
   * Id -1 means after last TrackPoint. Id -2 means before last TrackPoint. ...
   * Also deletes backwardInfos before and for new points and forwardInfos after and for new points.
   * Also sets Track backpointers of points accordingly.
   */
  void insertPoints(std::vector<genfit::TrackPoint*> points, int id = -1);

  void deletePoint(int id);

  //! Creates a new TrackPoint containing the measurement, and adds it to the track
  void insertMeasurement(AbsMeasurement* measurement, int id = -1);

  //! Delete all measurement information and the track points of the track. Does not delete track representations.
  void deleteTrackPointsAndFitStatus();
  /**
   * @brief Merge two tracks.
   *
   * The TrackPoint objects of other will be cloned and inserted
   * after id (per default, they will be appended at the end).
   * The other Track will not be altered, the TrackPoint objects will be (deep) copied.
   * Only copies the TrackPoint objects, NOT the AbsTrackRep, FitStatus, seed state and other objects of the other track.
   */
  void mergeTrack(const Track* other, int id = -1);

  void addTrackRep(AbsTrackRep* trackRep);

  //! Delete a AbsTrackRep and all corresponding AbsFitterInfo objects in every TrackPoint.
  void deleteTrackRep(int id);

  void setCardinalRep(int id);
  //! See with which AbsTrackRep the track was fitted best (converged fit w/ smallest chi2) and set the cardinal rep accordingly.
  void determineCardinalRep();

  /**
   * @brief Sort TrackPoint and according to their sorting parameters.
   *
   * Returns if the order of the TrackPoint has actually changed.
   */
  bool sort();

  //! Try to set the fitted state as seed. Return if it was successfull.
  //! Adapt the sign of all TrackReps' pdg to the actual fitted charge.
  bool udpateSeed(int id = 0, AbsTrackRep* rep = nullptr, bool biased = true);

  //! Flip the ordering of the TrackPoints
  void reverseTrackPoints();

  //! Flip direction of momentum seed
  void reverseMomSeed() {
    stateSeed_(3) *= -1; stateSeed_(4) *= -1; stateSeed_(5) *= -1;
  }

  //! Switch the pdg signs of specified rep (of all reps if rep == nullptr).
  void switchPDGSigns(AbsTrackRep* rep = nullptr);

  //! Make track ready to be fitted in reverse direction
  /**
   * Flip the order of TrackPoints and the momentum direction of the seed state.
   * If possible, take the smoothed state of the last hit as new seed state.
   * Flip charge of the TrackReps.
   */
  void reverseTrack();


  void deleteForwardInfo(int startId = 0, int endId = -1, const AbsTrackRep* rep = nullptr); // delete in range [startId, endId]. If rep == nullptr, delete for ALL reps, otherwise only for rep.
  void deleteBackwardInfo(int startId = 0, int endId = -1, const AbsTrackRep* rep = nullptr); // delete in range [startId, endId]. If rep == nullptr, delete for ALL reps, otherwise only for rep.
  void deleteReferenceInfo(int startId = 0, int endId = -1, const AbsTrackRep* rep = nullptr); // delete in range [startId, endId]. If rep == nullptr, delete for ALL reps, otherwise only for rep.
  void deleteMeasurementInfo(int startId = 0, int endId = -1, const AbsTrackRep* rep = nullptr); // delete in range [startId, endId]. If rep == nullptr, delete for ALL reps, otherwise only for rep.
  void deleteFitterInfo(int startId = 0, int endId = -1, const AbsTrackRep* rep = nullptr); // delete in range [startId, endId]. If rep == nullptr, delete for ALL reps, otherwise only for rep.

  //! get TrackLength between to trackPoints (if nullptr, for cardinal rep)
  double getTrackLen(AbsTrackRep* rep = nullptr, int startId = 0, int endId = -1) const;
  //! get time of flight in ns between to trackPoints (if nullptr, for cardinal rep)
  double getTOF(AbsTrackRep* rep = nullptr, int startId = 0, int endId = -1) const;

  /**
   * Delete the fit status and all the FitStates of the TrackPoints
   * for the given hypothesis.
   * This is equal to resetting the track for the rep, so another fit
   * can start from scratch.
   * Useful if you have changed some seeds.
   */
  void deleteFittedState(const genfit::AbsTrackRep* rep); 

  //! Construct a new TrackCand containing the hit IDs of the measurements
  /**
   * The idea is hat you can get a TrackCand for storing the hit IDs after a track has been fitted.
   * His could have been reordered, added or removed, so that the original TackCand no longer
   * represents the Track correctly.
   * You might want to call determineCardinalRep() and/or udpateSeed() before.
   */
  TrackCand* constructTrackCand() const;

  //! Helper function: For all KalmanFitterInfos belonging to rep (if nullptr, for all reps),
  //! call the fixWeights() function, so that e.g. the DAF will not alter weights anymore.
  void fixWeights(AbsTrackRep* rep = nullptr, int startId = 0, int endId = -1);

  /**
   * @brief Delete unneeded information from the Track.
   *
   * Possible options: (see also PruneFlags defined in FitStatus.h)
   * C:  prune all reps except cardinalRep
   * F:  prune all points except first point (also prune referenceInfo from fitterInfos)
   * L:  prune all points except last point (also prune referenceInfo from fitterInfos)
   * FL: prune all points except first and last point (also prune referenceInfo from fitterInfos)
   * W:  prune rawMeasurements from TrackPoints
   * R:  prune referenceInfo from fitterInfos
   * M:  prune measurementInfo from fitterInfos
   * I:  if F, L, or FL is set, prune forward (backward) info of first (last) point
   * U:  if fitterInfo is a KalmanFitterInfo, prune predictions and keep updates
   */
  void prune(const Option_t* = "CFLWRMIU");

  void Print(const Option_t* = "") const;

  void checkConsistency() const;

 private:

  void trackHasChanged();

  void fillPointsWithMeasurement();

  std::vector<AbsTrackRep*> trackReps_; // Ownership
  unsigned int cardinalRep_; // THE selected rep, default = 0;

  std::vector<TrackPoint*> trackPoints_; // Ownership
  std::vector<TrackPoint*> trackPointsWithMeasurement_; //! helper

  std::map< const AbsTrackRep*, FitStatus* > fitStatuses_; // Ownership over FitStatus*

  int mcTrackId_; /**< if MC simulation, store the mc track id here */
  double timeSeed_;
  TVectorD stateSeed_; // 6D: position, momentum
  TMatrixDSym covSeed_; // 6D


 public:
  ClassDef(Track,3)
  // Class version history:
  //  ver 3: introduces timeSeed_
};

} /* End of namespace genfit */
/** @} */

#endif // genfit_Track_h
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
 * @{ */

#ifndef genfit_TrackCand_h
#define genfit_TrackCand_h

#include "TrackCandHit.h"

#include <vector>
#include <set>
#include <assert.h>

#include <TObject.h>
#include <TVector3.h>
#include <TVectorD.h>
#include <TMatrixD.h>
#include <TMatrixDSym.h>
#include <TDatabasePDG.h>

#include <cmath>


namespace genfit {

/** @brief Track candidate -- seed values and indices
 *
 *  @author Christian H&ouml;ppner (Technische Universit&auml;t M&uuml;nchen, original author)
 *  @author Sebastian Neubert  (Technische Universit&auml;t M&uuml;nchen, original author)
 *  @author Moritz Nadler (maintainer during 2012)
 *
 * The main task of the TrackCand object is to store a list of indices to
 * cluster objects. Each cluster in the Track is identified by it's
 * detector ID and it's index in the corresponding TClonesArray.
 * Also there is a ordering parameter to order hits.
 * Optionally, plane indices for the hits can be stored (most importantly
 * for fitting with the Daf).
 * This information is used by the RecoHitFactory to automatically load
 * RecoHits into a Track. Through this it is possible to define Tracks over
 * an arbitrary number of different detectors.
 *
 * In addition TrackCand offers members to store starting values for the fit.
 * The starting values (seeds) for the fit are stored as a 6D state (x,y,z,px,py,pz) and its
 * corresponding 6x6 covariance matrix. All seed getter and setter manipulate these two members
 * but the user can chose using TVector3 or TMatrixD to get/set the seed state.
 * However this information is not automatically used in genfit.
 * But a pointer to a TrackCand can be passed to the a RKTrackRep constructor
 * to make use of this information without manually extracting it from the TrackCand object.
 *
 * @sa RecoHitFactory
 */
class TrackCand : public TObject {


 public:


  // Constructors/Destructors ---------
  TrackCand();
  ~TrackCand();

  //! copy constructor
  TrackCand( const TrackCand& other );
  //! assignment operator
  TrackCand& operator=(TrackCand other);
  void swap(TrackCand& other); // nothrow

  //! == operator checks equality of TrackCandHits. Does not check for sorting parameters.
  friend bool operator== (const TrackCand& lhs, const TrackCand& rhs);
  friend bool operator!= (const TrackCand& lhs, const TrackCand& rhs) {return !(lhs == rhs);}

  static bool compareTrackCandHits(const TrackCandHit* lhs, const TrackCandHit* rhs) {return (*lhs < *rhs);} // operator< defined in TrackCandHit.h

  // Accessors -----------------------
  TrackCandHit* getHit(int i) const;

  //!Get detector Id and hit Id for hit number i
  void getHit(int i, int& detId, int& hitId) const;

  //! Get detector Id, hit Id and sorting parameter for hit number i
  void getHit(int i, int& detId, int& hitId, double& sortingParameter) const;

  //! Get detector Id, hit Id and plane id for hit number i
  void getHitWithPlane(int i, int& detId, int& hitId, int& planeId) const;

  unsigned int getNHits() const {return hits_.size();}

  /**
   * @brief Get hit ids of from a specific detector.
   *
   * DetId -1 gives hitIds of hits with default detId -1. The default argument -2 gives hit Ids of all hits.
   */
  std::vector<int>    getHitIDs(int detId = -2) const;

  //! Get detector IDs of all hits
  std::vector<int>    getDetIDs() const;
  //! Get sorting parameterts of all hits
  std::vector<double> getSortingParameters() const;
  std::set<int>       getUniqueDetIDs() const;

  //! Get the MCT track id, for MC simulations - default value = -1
  int getMcTrackId() const {return mcTrackId_;}

  //! Get the time at which the seed state is defined
  double getTimeSeed() const { return time_; }

  /** @brief get the seed value for track: pos. Identical to the first 3 components of getStateSeed*/
  TVector3 getPosSeed() const {return TVector3(state6D_(0), state6D_(1), state6D_(2));}

  /** @brief get the seed value for track: mom. Identical to the last 3 components of getStateSeed*/
  TVector3 getMomSeed() const {return TVector3(state6D_(3), state6D_(4), state6D_(5));}

  /** @brief get the covariance matrix seed (6D).  */
  const TMatrixDSym& getCovSeed() const {return cov6D_;}

  //! Returns the 6D seed state; should be in global coordinates.
  const TVectorD& getStateSeed() const {return state6D_;}

  double getChargeSeed() const {return q_;}

  //! Get the PDG code
  int getPdgCode() const {return pdg_;}

  //! Is there a hit with detId and hitId in the TrackCand?
  bool hitInTrack(int detId, int hitId) const;

  // Modifiers -----------------------

  void addHit(int detId, int hitId, int planeId = -1, double sortingParameter = 0);

  void addHit(TrackCandHit* hit) {hits_.push_back(hit);}

  //! Set the MCT track id, for MC simulations
  void setMcTrackId(int i) {mcTrackId_ = i;}

  //! Set a particle hypothesis in form of a PDG code. This will also set the charge attribute
  void setPdgCode(int pdgCode);

  //! Clone the TrackCandHit objects from the other TrackCand and append them to this TrackCand
  void append(const TrackCand&);

  //! Sort the hits that were already added to the trackCand using the sorting parameters.
  void sortHits();

  void sortHits(const std::vector<unsigned int>& indices);

  // Operations ----------------------
  //! Delete and clear the TrackCandHits
  void reset();

  //! Write the content of all private attributes to the terminal
  void Print(const Option_t* = "") const ;

  //! Set the time at which the seed is defined
  void setTimeSeed(double time) { time_ = time; }

  /** @brief set the covariance matrix seed (6D).  */
  void setCovSeed(const TMatrixDSym& cov6D) {cov6D_ = cov6D; /* always 6D, no need to resize */}

  /** @brief sets the state to seed the track fitting. State has to be a TVectorD(6). First 3 elements are the staring postion second 3 elements the starting momentum. Everything in global coordinates
   * charge is the charge hypotheses of the particle charge
   */
  void set6DSeed(const TVectorD& state6D, const double charge);

  /** @brief This function works the same as set6DSeed but instead of a charge hypothesis you can set a pdg code which will set the charge automatically
   */
  void set6DSeedAndPdgCode(const TVectorD& state6D, const int pdgCode);

  /** @brief sets the state to seed the track fitting. State has to be a TVector3 for position and a TVector3 for momentum. Everything in global coordinates
   * charge is the charge hypotheses of the particle charge
   */
  void setPosMomSeed(const TVector3& pos, const TVector3& mom, const double charge);

  /** @brief This function works the same as setPosMomSeed but instead of a charge hypothesis you can set a pdg code which will set the charge automatically
   */
  void setPosMomSeedAndPdgCode(const TVector3& pos, const TVector3& mom, const int pdgCode);

  /** @brief sets the state to seed the track fitting and its
     time. State has to be a TVectorD(6). First 3 elements are the
     staring postion second 3 elements the starting
     momentum. Everything in global coordinates charge is the charge
     hypotheses of the particle charge.
   */
  void setTime6DSeed(double time, const TVectorD& state6D, const double charge);

  /** @brief This function works the same as set6DSeed but instead of
      a charge hypothesis you can set a pdg code which will set the
      charge automatically.
   */
  void setTime6DSeedAndPdgCode(double time, const TVectorD& state6D, const int pdgCode);

  /** @brief sets the state to seed the track fitting and its time. State has to be
     a TVector3 for position and a TVector3 for momentum. Everything
     in global coordinates charge is the charge hypotheses of the
     particle charge.
   */
  void setTimePosMomSeed(double time, const TVector3& pos, const TVector3& mom,
			 const double charge);

  /** @brief This function works the same as setPosMomSeed but instead
      of a charge hypothesis you can set a pdg code which will set the
      charge automatically.
   */
  void setTimePosMomSeedAndPdgCode(double time, const TVector3& pos,
				   const TVector3& mom, const int pdgCode);


 private:

  // Private Data Members ------------
  std::vector<TrackCandHit*> hits_; //->

  int mcTrackId_; /**< if MC simulation, store the mc track id here */
  int pdg_; /**< particle data groupe's id for a particle*/

  double time_; /**< Time at which the seed is given */
  TVectorD state6D_; /**< global 6D position plus momentum state */
  TMatrixDSym cov6D_; /**< global 6D position plus momentum state */
  double q_; /**< the charge of the particle in units of elementary charge */


 public:

  ClassDef(TrackCand,2)
  // Version history:
  // ver 2: keep track of time in state (schema evolution rule added).
};

} /* End of namespace genfit */
/** @} */

#endif // genfit_TrackCand_h
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

#ifndef genfit_TrackCandHit_h
#define genfit_TrackCandHit_h

#include <TObject.h>


namespace genfit {

/**
 * @brief Hit object for use in TrackCand. Provides IDs and sorting parameters.
 */
class TrackCandHit : public TObject {
 public:

  // Constructors/Destructors ---------
  TrackCandHit(int detId   = -1,
               int hitId   = -1,
               int planeId = -1,
               double sortingParameter  =  0.);

  virtual ~TrackCandHit() {;}

  virtual TrackCandHit* clone() const {return new TrackCandHit(*this);}

  // Accessors
  int    getDetId() const {return detId_;}
  int    getHitId() const {return hitId_;}
  int    getPlaneId() const {return planeId_;}
  double getSortingParameter() const {return sortingParameter_;}

  // Modifiers
  void setSortingParameter(double sortingParameter) {sortingParameter_ = sortingParameter;}

  virtual void Print(Option_t* option = "") const;


  /** @brief Equality operator. Does not check sortingParameter.
   */
  friend bool operator== (const TrackCandHit& lhs, const TrackCandHit& rhs);
  friend bool operator!= (const TrackCandHit& lhs, const TrackCandHit& rhs) {
    return !(lhs == rhs);
  }

  /** @brief Compare sortingParameter, needed for sorting
   */
  friend bool operator< (const TrackCandHit& lhs, const TrackCandHit& rhs) {
    return (lhs.sortingParameter_ < rhs.sortingParameter_);
  }

 protected:

  //! protect from calling copy c'tor from outside the class. Use #clone() if you want a copy!
  TrackCandHit(const TrackCandHit& other) :
    TObject(other), detId_(other.detId_), hitId_(other.hitId_), planeId_(other.planeId_), sortingParameter_(other.sortingParameter_) {;}
  //! protect from calling assignment operator from outside the class. Use #clone() instead!
  TrackCandHit& operator=(const TrackCandHit&);


  // Data Members ------------
  int    detId_; // detId id is -1 per default
  int    hitId_; // hitId id is -1 per default
  int    planeId_; // planeId id is -1 per default
  double sortingParameter_; // sorting parameter


 public:

  ClassDef(TrackCandHit,1)

};

} /* End of namespace genfit */
/** @} */

#endif // genfit_TrackCandHit_h
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

#ifndef genfit_TrackPoint_h
#define genfit_TrackPoint_h

#include "AbsMeasurement.h"
#include "AbsFitterInfo.h"
#include "ThinScatterer.h"

#include <TObject.h>

#include <map>
#include <vector>
#include <memory>


namespace genfit {

class Track;
class KalmanFitterInfo;

/**
 * @brief Object containing AbsMeasurement and AbsFitterInfo objects.
 *
 */
class TrackPoint : public TObject {

 public:

  TrackPoint();
  explicit TrackPoint(Track* track);

  /**
   * @brief Contructor taking list of measurements.
   *
   * AbsMeasurement::setTrackPoint() of each measurement will be called.
   * TrackPoint takes ownership over rawMeasurements.
   */
  TrackPoint(const std::vector< genfit::AbsMeasurement* >& rawMeasurements, Track* track);

  /**
   * @brief Contructor taking one measurement.
   *
   * AbsMeasurement::setTrackPoint() of the measurement will be called.
   * TrackPoint takes ownership over the rawMeasurement.
   */
  TrackPoint(genfit::AbsMeasurement* rawMeasurement, Track* track);

  TrackPoint(const TrackPoint&); // copy constructor
  TrackPoint& operator=(TrackPoint); // assignment operator
  void swap(TrackPoint& other);

  /**
   * custom copy constructor where all TrackRep pointers are exchanged according to the map.
   * FitterInfos with a rep in repsToIgnore will NOT be copied.
   */
  TrackPoint(const TrackPoint& rhs,
      const std::map<const genfit::AbsTrackRep*, genfit::AbsTrackRep*>& map,
      const std::vector<const genfit::AbsTrackRep*> * repsToIgnore = nullptr);

  virtual ~TrackPoint();


  double getSortingParameter() const {return sortingParameter_;}

  Track* getTrack() const {return track_;}
  void setTrack(Track* track) {track_ = track;}

  const std::vector< genfit::AbsMeasurement* >& getRawMeasurements() const {return rawMeasurements_;}
  AbsMeasurement* getRawMeasurement(int i = 0) const;
  unsigned int getNumRawMeasurements() const {return rawMeasurements_.size();}
  bool hasRawMeasurements() const {return (rawMeasurements_.size() != 0);}
  //! Get list of all fitterInfos
  std::vector< genfit::AbsFitterInfo* > getFitterInfos() const;
  //! Get fitterInfo for rep. Per default, use cardinal rep
  AbsFitterInfo* getFitterInfo(const AbsTrackRep* rep = nullptr) const;
  //! Helper to avoid casting
  KalmanFitterInfo* getKalmanFitterInfo(const AbsTrackRep* rep = nullptr) const;
  bool hasFitterInfo(const AbsTrackRep* rep) const {
    return (fitterInfos_.find(rep) != fitterInfos_.end());
  }

  ThinScatterer* getMaterialInfo() const {return thinScatterer_.get();}
  bool hasThinScatterer() const {return thinScatterer_.get() != nullptr;}


  void setSortingParameter(double sortingParameter) {sortingParameter_ = sortingParameter;}
  //! Takes ownership and sets this as measurement's trackPoint
  void addRawMeasurement(genfit::AbsMeasurement* rawMeasurement) {assert(rawMeasurement!=nullptr); rawMeasurement->setTrackPoint(this); rawMeasurements_.push_back(rawMeasurement);}
  void deleteRawMeasurements();
  //! Takes Ownership
  void setFitterInfo(genfit::AbsFitterInfo* fitterInfo);
  void deleteFitterInfo(const AbsTrackRep* rep) {delete fitterInfos_[rep]; fitterInfos_.erase(rep);}

  void setScatterer(ThinScatterer* scatterer) {thinScatterer_.reset(scatterer);}

  void Print(const Option_t* = "") const;

  /**
   * This function is used when reading the TrackPoint and is called
   * by the owner in order to build fitterInfos_ from vFitterInfos_.
   * This requires that the track_ be set.  It also empties
   * vFitterInfos_ which has served its purpose after this function is
   * called.
   */
  void fixupRepsForReading();

 private:
  double sortingParameter_;

  //! Pointer to Track where TrackPoint belongs to
  Track* track_; //! No ownership

  //! Can be more than one, e.g. multiple measurements in the same Si detector, left and right measurements of a wire detector etc.
  std::vector<AbsMeasurement*> rawMeasurements_; // Ownership

  std::map< const AbsTrackRep*, AbsFitterInfo* > fitterInfos_; //! Ownership over FitterInfos

  /**
   * The following map is read while streaming.  After reading the
   * TrackPoint, the Track's streamer will call fixupRepsForReading,
   * and this map will be translated into the map fitterInfos. The
   * map is indexed by the ids of the corresponding TrackReps.
   */
  std::map<unsigned int, AbsFitterInfo*> vFitterInfos_; //!

  std::unique_ptr<ThinScatterer> thinScatterer_; // Ownership

 public:

  ClassDef(TrackPoint,1)

};

} /* End of namespace genfit */
/** @} */

#endif // genfit_TrackPoint_h
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

#ifndef genfit_RectangularFinitePlane_h
#define genfit_RectangularFinitePlane_h

#include "AbsFinitePlane.h"


namespace genfit {

/**
 * @brief Rectangular finite plane.
 */
class RectangularFinitePlane : public AbsFinitePlane {

 public:

  //! give dimensions of finite rectangle: u1,u2, v1,v2
  RectangularFinitePlane(const double&, const double&, const double&, const double&);
  RectangularFinitePlane();
  virtual ~RectangularFinitePlane();

  //override inActive & Print methods
  bool isInActive(double u, double v) const;
  void Print(const Option_t* = "") const;

  RectangularFinitePlane* clone() const {
    return new RectangularFinitePlane(*this);
  }

 private:

  double uMin_, uMax_, vMin_, vMax_;

 public:

  ClassDef(RectangularFinitePlane,1)

};

} /* End of namespace genfit */
/** @} */

#endif // genfit_RectangularFinitePlane_h

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genfit::AbsFinitePlane", payloadCode, "@",
"genfit::AbsFitterInfo", payloadCode, "@",
"genfit::AbsHMatrix", payloadCode, "@",
"genfit::AbsMeasurement", payloadCode, "@",
"genfit::AbsTrackRep", payloadCode, "@",
"genfit::DetPlane", payloadCode, "@",
"genfit::FitStatus", payloadCode, "@",
"genfit::Material", payloadCode, "@",
"genfit::MeasuredStateOnPlane", payloadCode, "@",
"genfit::MeasurementOnPlane", payloadCode, "@",
"genfit::PruneFlags", payloadCode, "@",
"genfit::RectangularFinitePlane", payloadCode, "@",
"genfit::SharedPlanePtrCreator", payloadCode, "@",
"genfit::StateOnPlane", payloadCode, "@",
"genfit::ThinScatterer", payloadCode, "@",
"genfit::Track", payloadCode, "@",
"genfit::TrackCand", payloadCode, "@",
"genfit::TrackCandHit", payloadCode, "@",
"genfit::TrackPoint", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("coreRootDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_coreRootDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_coreRootDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_coreRootDict() {
  TriggerDictionaryInitialization_coreRootDict_Impl();
}
