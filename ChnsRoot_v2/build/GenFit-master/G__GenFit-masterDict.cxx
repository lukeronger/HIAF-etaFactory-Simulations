// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdata2dIrwangdIgithubsdIHIAFmIetaFactorymISimulationsdIChnsRoot_v2dIbuilddIGenFitmImasterdIG__GenFitmImasterDict
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
#include "./eventDisplay/include/EventDisplay.h"
#include "./core/include/AbsFinitePlane.h"
#include "./core/include/AbsFitterInfo.h"
#include "./core/include/AbsTrackRep.h"
#include "./core/include/Exception.h"
#include "./core/include/FitStatus.h"
#include "./core/include/Material.h"
#include "./core/include/MeasurementOnPlane.h"
#include "./core/include/ThinScatterer.h"
#include "./core/include/TrackCand.h"
#include "./core/include/Track.h"
#include "./core/include/AbsFitter.h"
#include "./core/include/AbsMeasurement.h"
#include "./core/include/DetPlane.h"
#include "./core/include/FieldManager.h"
#include "./core/include/IO.h"
#include "./core/include/MeasuredStateOnPlane.h"
#include "./core/include/StateOnPlane.h"
#include "./core/include/Tools.h"
#include "./core/include/TrackCandHit.h"
#include "./core/include/TrackPoint.h"
#include "./finitePlanes/include/RectangularFinitePlane.h"
#include "./trackReps/include/MaterialEffects.h"
#include "./trackReps/include/MplTrackRep.h"
#include "./trackReps/include/RKTools.h"
#include "./trackReps/include/RKTrackRep.h"
#include "./trackReps/include/StepLimits.h"
#include "./trackReps/include/TGeoMaterialInterface.h"
#include "./measurements/include/FullMeasurement.h"
#include "./measurements/include/HMatrixU.h"
#include "./measurements/include/HMatrixUV.h"
#include "./measurements/include/ProlateSpacepointMeasurement.h"
#include "./measurements/include/WireMeasurement.h"
#include "./measurements/include/WirePointMeasurement.h"
#include "./measurements/include/HMatrixPhi.h"
#include "./measurements/include/HMatrixUnit.h"
#include "./measurements/include/HMatrixV.h"
#include "./measurements/include/PlanarMeasurement.h"
#include "./measurements/include/SpacepointMeasurement.h"
#include "./measurements/include/WireMeasurementNew.h"
#include "./measurements/include/WireTrackCandHit.h"
#include "./fitters/include/KalmanFitter.h"
#include "./fitters/include/KalmanFitterInfo.h"
#include "./fitters/include/AbsKalmanFitter.h"
#include "./fitters/include/KalmanFitterRefTrack.h"
#include "./fitters/include/DAF.h"
#include "./fitters/include/KalmanFitStatus.h"
#include "./fitters/include/KalmanFittedStateOnPlane.h"
#include "./fitters/include/ReferenceStateOnPlane.h"
#include "./fields/include/ConstField.h"
#include "./GBL/include/BorderedBandMatrix.h"
#include "./GBL/include/GblData.h"
#include "./GBL/include/GblFitter.h"
#include "./GBL/include/GblFitterInfo.h"
#include "./GBL/include/GblPoint.h"
#include "./GBL/include/GblTrajectory.h"
#include "./GBL/include/GFGbl.h"
#include "./GBL/include/MilleBinary.h"
#include "./GBL/include/VMatrix.h"
#include "./utilities/include/HelixTrackModel.h"
#include "./utilities/include/MeasurementCreator.h"
#include "./utilities/include/mySpacepointMeasurement.h"
#include "./utilities/include/mySpacepointDetectorHit.h"

// Header files passed via #pragma extra_include

namespace genfit {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *genfit_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genfit", 0 /*version*/, "AbsFinitePlane.h", 35,
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
         instance("genfit::AbsFinitePlane", ::genfit::AbsFinitePlane::Class_Version(), "AbsFinitePlane.h", 43,
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
   static void delete_genfitcLcLAbsMeasurement(void *p);
   static void deleteArray_genfitcLcLAbsMeasurement(void *p);
   static void destruct_genfitcLcLAbsMeasurement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::AbsMeasurement*)
   {
      ::genfit::AbsMeasurement *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::AbsMeasurement >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::AbsMeasurement", ::genfit::AbsMeasurement::Class_Version(), "AbsMeasurement.h", 42,
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
         instance("genfit::AbsFitterInfo", ::genfit::AbsFitterInfo::Class_Version(), "AbsFitterInfo.h", 42,
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
         instance("genfit::ThinScatterer", ::genfit::ThinScatterer::Class_Version(), "ThinScatterer.h", 38,
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
         instance("genfit::Track", ::genfit::Track::Class_Version(), "Track.h", 71,
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
   static void delete_genfitcLcLAbsKalmanFitter(void *p);
   static void deleteArray_genfitcLcLAbsKalmanFitter(void *p);
   static void destruct_genfitcLcLAbsKalmanFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::AbsKalmanFitter*)
   {
      ::genfit::AbsKalmanFitter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::AbsKalmanFitter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::AbsKalmanFitter", ::genfit::AbsKalmanFitter::Class_Version(), "AbsKalmanFitter.h", 51,
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
   static void delete_genfitcLcLEventDisplay(void *p);
   static void deleteArray_genfitcLcLEventDisplay(void *p);
   static void destruct_genfitcLcLEventDisplay(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::EventDisplay*)
   {
      ::genfit::EventDisplay *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::EventDisplay >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::EventDisplay", ::genfit::EventDisplay::Class_Version(), "EventDisplay.h", 59,
                  typeid(::genfit::EventDisplay), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::EventDisplay::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::EventDisplay) );
      instance.SetDelete(&delete_genfitcLcLEventDisplay);
      instance.SetDeleteArray(&deleteArray_genfitcLcLEventDisplay);
      instance.SetDestructor(&destruct_genfitcLcLEventDisplay);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::EventDisplay*)
   {
      return GenerateInitInstanceLocal((::genfit::EventDisplay*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::EventDisplay*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
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
         instance("genfit::RectangularFinitePlane", ::genfit::RectangularFinitePlane::Class_Version(), "RectangularFinitePlane.h", 34,
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

namespace ROOT {
   static void *new_genfitcLcLRKTrackRep(void *p = 0);
   static void *newArray_genfitcLcLRKTrackRep(Long_t size, void *p);
   static void delete_genfitcLcLRKTrackRep(void *p);
   static void deleteArray_genfitcLcLRKTrackRep(void *p);
   static void destruct_genfitcLcLRKTrackRep(void *p);
   static void streamer_genfitcLcLRKTrackRep(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::RKTrackRep*)
   {
      ::genfit::RKTrackRep *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::RKTrackRep >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::RKTrackRep", ::genfit::RKTrackRep::Class_Version(), "RKTrackRep.h", 72,
                  typeid(::genfit::RKTrackRep), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::RKTrackRep::Dictionary, isa_proxy, 17,
                  sizeof(::genfit::RKTrackRep) );
      instance.SetNew(&new_genfitcLcLRKTrackRep);
      instance.SetNewArray(&newArray_genfitcLcLRKTrackRep);
      instance.SetDelete(&delete_genfitcLcLRKTrackRep);
      instance.SetDeleteArray(&deleteArray_genfitcLcLRKTrackRep);
      instance.SetDestructor(&destruct_genfitcLcLRKTrackRep);
      instance.SetStreamerFunc(&streamer_genfitcLcLRKTrackRep);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::RKTrackRep*)
   {
      return GenerateInitInstanceLocal((::genfit::RKTrackRep*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::RKTrackRep*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLMplTrackRep(void *p = 0);
   static void *newArray_genfitcLcLMplTrackRep(Long_t size, void *p);
   static void delete_genfitcLcLMplTrackRep(void *p);
   static void deleteArray_genfitcLcLMplTrackRep(void *p);
   static void destruct_genfitcLcLMplTrackRep(void *p);
   static void streamer_genfitcLcLMplTrackRep(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::MplTrackRep*)
   {
      ::genfit::MplTrackRep *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::MplTrackRep >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::MplTrackRep", ::genfit::MplTrackRep::Class_Version(), "MplTrackRep.h", 33,
                  typeid(::genfit::MplTrackRep), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::MplTrackRep::Dictionary, isa_proxy, 17,
                  sizeof(::genfit::MplTrackRep) );
      instance.SetNew(&new_genfitcLcLMplTrackRep);
      instance.SetNewArray(&newArray_genfitcLcLMplTrackRep);
      instance.SetDelete(&delete_genfitcLcLMplTrackRep);
      instance.SetDeleteArray(&deleteArray_genfitcLcLMplTrackRep);
      instance.SetDestructor(&destruct_genfitcLcLMplTrackRep);
      instance.SetStreamerFunc(&streamer_genfitcLcLMplTrackRep);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::MplTrackRep*)
   {
      return GenerateInitInstanceLocal((::genfit::MplTrackRep*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::MplTrackRep*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLFullMeasurement(void *p = 0);
   static void *newArray_genfitcLcLFullMeasurement(Long_t size, void *p);
   static void delete_genfitcLcLFullMeasurement(void *p);
   static void deleteArray_genfitcLcLFullMeasurement(void *p);
   static void destruct_genfitcLcLFullMeasurement(void *p);
   static void streamer_genfitcLcLFullMeasurement(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::FullMeasurement*)
   {
      ::genfit::FullMeasurement *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::FullMeasurement >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::FullMeasurement", ::genfit::FullMeasurement::Class_Version(), "FullMeasurement.h", 42,
                  typeid(::genfit::FullMeasurement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::FullMeasurement::Dictionary, isa_proxy, 17,
                  sizeof(::genfit::FullMeasurement) );
      instance.SetNew(&new_genfitcLcLFullMeasurement);
      instance.SetNewArray(&newArray_genfitcLcLFullMeasurement);
      instance.SetDelete(&delete_genfitcLcLFullMeasurement);
      instance.SetDeleteArray(&deleteArray_genfitcLcLFullMeasurement);
      instance.SetDestructor(&destruct_genfitcLcLFullMeasurement);
      instance.SetStreamerFunc(&streamer_genfitcLcLFullMeasurement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::FullMeasurement*)
   {
      return GenerateInitInstanceLocal((::genfit::FullMeasurement*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::FullMeasurement*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLHMatrixU(void *p = 0);
   static void *newArray_genfitcLcLHMatrixU(Long_t size, void *p);
   static void delete_genfitcLcLHMatrixU(void *p);
   static void deleteArray_genfitcLcLHMatrixU(void *p);
   static void destruct_genfitcLcLHMatrixU(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::HMatrixU*)
   {
      ::genfit::HMatrixU *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::HMatrixU >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::HMatrixU", ::genfit::HMatrixU::Class_Version(), "HMatrixU.h", 37,
                  typeid(::genfit::HMatrixU), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::HMatrixU::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::HMatrixU) );
      instance.SetNew(&new_genfitcLcLHMatrixU);
      instance.SetNewArray(&newArray_genfitcLcLHMatrixU);
      instance.SetDelete(&delete_genfitcLcLHMatrixU);
      instance.SetDeleteArray(&deleteArray_genfitcLcLHMatrixU);
      instance.SetDestructor(&destruct_genfitcLcLHMatrixU);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::HMatrixU*)
   {
      return GenerateInitInstanceLocal((::genfit::HMatrixU*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::HMatrixU*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLHMatrixUV(void *p = 0);
   static void *newArray_genfitcLcLHMatrixUV(Long_t size, void *p);
   static void delete_genfitcLcLHMatrixUV(void *p);
   static void deleteArray_genfitcLcLHMatrixUV(void *p);
   static void destruct_genfitcLcLHMatrixUV(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::HMatrixUV*)
   {
      ::genfit::HMatrixUV *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::HMatrixUV >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::HMatrixUV", ::genfit::HMatrixUV::Class_Version(), "HMatrixUV.h", 39,
                  typeid(::genfit::HMatrixUV), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::HMatrixUV::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::HMatrixUV) );
      instance.SetNew(&new_genfitcLcLHMatrixUV);
      instance.SetNewArray(&newArray_genfitcLcLHMatrixUV);
      instance.SetDelete(&delete_genfitcLcLHMatrixUV);
      instance.SetDeleteArray(&deleteArray_genfitcLcLHMatrixUV);
      instance.SetDestructor(&destruct_genfitcLcLHMatrixUV);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::HMatrixUV*)
   {
      return GenerateInitInstanceLocal((::genfit::HMatrixUV*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::HMatrixUV*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLSpacepointMeasurement(void *p = 0);
   static void *newArray_genfitcLcLSpacepointMeasurement(Long_t size, void *p);
   static void delete_genfitcLcLSpacepointMeasurement(void *p);
   static void deleteArray_genfitcLcLSpacepointMeasurement(void *p);
   static void destruct_genfitcLcLSpacepointMeasurement(void *p);
   static void streamer_genfitcLcLSpacepointMeasurement(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::SpacepointMeasurement*)
   {
      ::genfit::SpacepointMeasurement *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::SpacepointMeasurement >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::SpacepointMeasurement", ::genfit::SpacepointMeasurement::Class_Version(), "SpacepointMeasurement.h", 46,
                  typeid(::genfit::SpacepointMeasurement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::SpacepointMeasurement::Dictionary, isa_proxy, 17,
                  sizeof(::genfit::SpacepointMeasurement) );
      instance.SetNew(&new_genfitcLcLSpacepointMeasurement);
      instance.SetNewArray(&newArray_genfitcLcLSpacepointMeasurement);
      instance.SetDelete(&delete_genfitcLcLSpacepointMeasurement);
      instance.SetDeleteArray(&deleteArray_genfitcLcLSpacepointMeasurement);
      instance.SetDestructor(&destruct_genfitcLcLSpacepointMeasurement);
      instance.SetStreamerFunc(&streamer_genfitcLcLSpacepointMeasurement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::SpacepointMeasurement*)
   {
      return GenerateInitInstanceLocal((::genfit::SpacepointMeasurement*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::SpacepointMeasurement*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLProlateSpacepointMeasurement(void *p = 0);
   static void *newArray_genfitcLcLProlateSpacepointMeasurement(Long_t size, void *p);
   static void delete_genfitcLcLProlateSpacepointMeasurement(void *p);
   static void deleteArray_genfitcLcLProlateSpacepointMeasurement(void *p);
   static void destruct_genfitcLcLProlateSpacepointMeasurement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::ProlateSpacepointMeasurement*)
   {
      ::genfit::ProlateSpacepointMeasurement *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::ProlateSpacepointMeasurement >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::ProlateSpacepointMeasurement", ::genfit::ProlateSpacepointMeasurement::Class_Version(), "ProlateSpacepointMeasurement.h", 46,
                  typeid(::genfit::ProlateSpacepointMeasurement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::ProlateSpacepointMeasurement::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::ProlateSpacepointMeasurement) );
      instance.SetNew(&new_genfitcLcLProlateSpacepointMeasurement);
      instance.SetNewArray(&newArray_genfitcLcLProlateSpacepointMeasurement);
      instance.SetDelete(&delete_genfitcLcLProlateSpacepointMeasurement);
      instance.SetDeleteArray(&deleteArray_genfitcLcLProlateSpacepointMeasurement);
      instance.SetDestructor(&destruct_genfitcLcLProlateSpacepointMeasurement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::ProlateSpacepointMeasurement*)
   {
      return GenerateInitInstanceLocal((::genfit::ProlateSpacepointMeasurement*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::ProlateSpacepointMeasurement*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLWireMeasurement(void *p = 0);
   static void *newArray_genfitcLcLWireMeasurement(Long_t size, void *p);
   static void delete_genfitcLcLWireMeasurement(void *p);
   static void deleteArray_genfitcLcLWireMeasurement(void *p);
   static void destruct_genfitcLcLWireMeasurement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::WireMeasurement*)
   {
      ::genfit::WireMeasurement *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::WireMeasurement >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::WireMeasurement", ::genfit::WireMeasurement::Class_Version(), "WireMeasurement.h", 52,
                  typeid(::genfit::WireMeasurement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::WireMeasurement::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::WireMeasurement) );
      instance.SetNew(&new_genfitcLcLWireMeasurement);
      instance.SetNewArray(&newArray_genfitcLcLWireMeasurement);
      instance.SetDelete(&delete_genfitcLcLWireMeasurement);
      instance.SetDeleteArray(&deleteArray_genfitcLcLWireMeasurement);
      instance.SetDestructor(&destruct_genfitcLcLWireMeasurement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::WireMeasurement*)
   {
      return GenerateInitInstanceLocal((::genfit::WireMeasurement*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::WireMeasurement*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLWirePointMeasurement(void *p = 0);
   static void *newArray_genfitcLcLWirePointMeasurement(Long_t size, void *p);
   static void delete_genfitcLcLWirePointMeasurement(void *p);
   static void deleteArray_genfitcLcLWirePointMeasurement(void *p);
   static void destruct_genfitcLcLWirePointMeasurement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::WirePointMeasurement*)
   {
      ::genfit::WirePointMeasurement *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::WirePointMeasurement >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::WirePointMeasurement", ::genfit::WirePointMeasurement::Class_Version(), "WirePointMeasurement.h", 51,
                  typeid(::genfit::WirePointMeasurement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::WirePointMeasurement::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::WirePointMeasurement) );
      instance.SetNew(&new_genfitcLcLWirePointMeasurement);
      instance.SetNewArray(&newArray_genfitcLcLWirePointMeasurement);
      instance.SetDelete(&delete_genfitcLcLWirePointMeasurement);
      instance.SetDeleteArray(&deleteArray_genfitcLcLWirePointMeasurement);
      instance.SetDestructor(&destruct_genfitcLcLWirePointMeasurement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::WirePointMeasurement*)
   {
      return GenerateInitInstanceLocal((::genfit::WirePointMeasurement*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::WirePointMeasurement*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLHMatrixPhi(void *p = 0);
   static void *newArray_genfitcLcLHMatrixPhi(Long_t size, void *p);
   static void delete_genfitcLcLHMatrixPhi(void *p);
   static void deleteArray_genfitcLcLHMatrixPhi(void *p);
   static void destruct_genfitcLcLHMatrixPhi(void *p);
   static void streamer_genfitcLcLHMatrixPhi(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::HMatrixPhi*)
   {
      ::genfit::HMatrixPhi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::HMatrixPhi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::HMatrixPhi", ::genfit::HMatrixPhi::Class_Version(), "HMatrixPhi.h", 37,
                  typeid(::genfit::HMatrixPhi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::HMatrixPhi::Dictionary, isa_proxy, 17,
                  sizeof(::genfit::HMatrixPhi) );
      instance.SetNew(&new_genfitcLcLHMatrixPhi);
      instance.SetNewArray(&newArray_genfitcLcLHMatrixPhi);
      instance.SetDelete(&delete_genfitcLcLHMatrixPhi);
      instance.SetDeleteArray(&deleteArray_genfitcLcLHMatrixPhi);
      instance.SetDestructor(&destruct_genfitcLcLHMatrixPhi);
      instance.SetStreamerFunc(&streamer_genfitcLcLHMatrixPhi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::HMatrixPhi*)
   {
      return GenerateInitInstanceLocal((::genfit::HMatrixPhi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::HMatrixPhi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLHMatrixUnit(void *p = 0);
   static void *newArray_genfitcLcLHMatrixUnit(Long_t size, void *p);
   static void delete_genfitcLcLHMatrixUnit(void *p);
   static void deleteArray_genfitcLcLHMatrixUnit(void *p);
   static void destruct_genfitcLcLHMatrixUnit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::HMatrixUnit*)
   {
      ::genfit::HMatrixUnit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::HMatrixUnit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::HMatrixUnit", ::genfit::HMatrixUnit::Class_Version(), "HMatrixUnit.h", 40,
                  typeid(::genfit::HMatrixUnit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::HMatrixUnit::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::HMatrixUnit) );
      instance.SetNew(&new_genfitcLcLHMatrixUnit);
      instance.SetNewArray(&newArray_genfitcLcLHMatrixUnit);
      instance.SetDelete(&delete_genfitcLcLHMatrixUnit);
      instance.SetDeleteArray(&deleteArray_genfitcLcLHMatrixUnit);
      instance.SetDestructor(&destruct_genfitcLcLHMatrixUnit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::HMatrixUnit*)
   {
      return GenerateInitInstanceLocal((::genfit::HMatrixUnit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::HMatrixUnit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLHMatrixV(void *p = 0);
   static void *newArray_genfitcLcLHMatrixV(Long_t size, void *p);
   static void delete_genfitcLcLHMatrixV(void *p);
   static void deleteArray_genfitcLcLHMatrixV(void *p);
   static void destruct_genfitcLcLHMatrixV(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::HMatrixV*)
   {
      ::genfit::HMatrixV *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::HMatrixV >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::HMatrixV", ::genfit::HMatrixV::Class_Version(), "HMatrixV.h", 37,
                  typeid(::genfit::HMatrixV), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::HMatrixV::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::HMatrixV) );
      instance.SetNew(&new_genfitcLcLHMatrixV);
      instance.SetNewArray(&newArray_genfitcLcLHMatrixV);
      instance.SetDelete(&delete_genfitcLcLHMatrixV);
      instance.SetDeleteArray(&deleteArray_genfitcLcLHMatrixV);
      instance.SetDestructor(&destruct_genfitcLcLHMatrixV);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::HMatrixV*)
   {
      return GenerateInitInstanceLocal((::genfit::HMatrixV*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::HMatrixV*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLPlanarMeasurement(void *p = 0);
   static void *newArray_genfitcLcLPlanarMeasurement(Long_t size, void *p);
   static void delete_genfitcLcLPlanarMeasurement(void *p);
   static void deleteArray_genfitcLcLPlanarMeasurement(void *p);
   static void destruct_genfitcLcLPlanarMeasurement(void *p);
   static void streamer_genfitcLcLPlanarMeasurement(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::PlanarMeasurement*)
   {
      ::genfit::PlanarMeasurement *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::PlanarMeasurement >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::PlanarMeasurement", ::genfit::PlanarMeasurement::Class_Version(), "PlanarMeasurement.h", 44,
                  typeid(::genfit::PlanarMeasurement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::PlanarMeasurement::Dictionary, isa_proxy, 17,
                  sizeof(::genfit::PlanarMeasurement) );
      instance.SetNew(&new_genfitcLcLPlanarMeasurement);
      instance.SetNewArray(&newArray_genfitcLcLPlanarMeasurement);
      instance.SetDelete(&delete_genfitcLcLPlanarMeasurement);
      instance.SetDeleteArray(&deleteArray_genfitcLcLPlanarMeasurement);
      instance.SetDestructor(&destruct_genfitcLcLPlanarMeasurement);
      instance.SetStreamerFunc(&streamer_genfitcLcLPlanarMeasurement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::PlanarMeasurement*)
   {
      return GenerateInitInstanceLocal((::genfit::PlanarMeasurement*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::PlanarMeasurement*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLWireMeasurementNew(void *p = 0);
   static void *newArray_genfitcLcLWireMeasurementNew(Long_t size, void *p);
   static void delete_genfitcLcLWireMeasurementNew(void *p);
   static void deleteArray_genfitcLcLWireMeasurementNew(void *p);
   static void destruct_genfitcLcLWireMeasurementNew(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::WireMeasurementNew*)
   {
      ::genfit::WireMeasurementNew *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::WireMeasurementNew >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::WireMeasurementNew", ::genfit::WireMeasurementNew::Class_Version(), "WireMeasurementNew.h", 56,
                  typeid(::genfit::WireMeasurementNew), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::WireMeasurementNew::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::WireMeasurementNew) );
      instance.SetNew(&new_genfitcLcLWireMeasurementNew);
      instance.SetNewArray(&newArray_genfitcLcLWireMeasurementNew);
      instance.SetDelete(&delete_genfitcLcLWireMeasurementNew);
      instance.SetDeleteArray(&deleteArray_genfitcLcLWireMeasurementNew);
      instance.SetDestructor(&destruct_genfitcLcLWireMeasurementNew);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::WireMeasurementNew*)
   {
      return GenerateInitInstanceLocal((::genfit::WireMeasurementNew*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::WireMeasurementNew*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLWireTrackCandHit(void *p = 0);
   static void *newArray_genfitcLcLWireTrackCandHit(Long_t size, void *p);
   static void delete_genfitcLcLWireTrackCandHit(void *p);
   static void deleteArray_genfitcLcLWireTrackCandHit(void *p);
   static void destruct_genfitcLcLWireTrackCandHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::WireTrackCandHit*)
   {
      ::genfit::WireTrackCandHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::WireTrackCandHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::WireTrackCandHit", ::genfit::WireTrackCandHit::Class_Version(), "WireTrackCandHit.h", 34,
                  typeid(::genfit::WireTrackCandHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::WireTrackCandHit::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::WireTrackCandHit) );
      instance.SetNew(&new_genfitcLcLWireTrackCandHit);
      instance.SetNewArray(&newArray_genfitcLcLWireTrackCandHit);
      instance.SetDelete(&delete_genfitcLcLWireTrackCandHit);
      instance.SetDeleteArray(&deleteArray_genfitcLcLWireTrackCandHit);
      instance.SetDestructor(&destruct_genfitcLcLWireTrackCandHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::WireTrackCandHit*)
   {
      return GenerateInitInstanceLocal((::genfit::WireTrackCandHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::WireTrackCandHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
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
         instance("genfit::KalmanFitter", ::genfit::KalmanFitter::Class_Version(), "KalmanFitter.h", 40,
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
         instance("genfit::KalmanFittedStateOnPlane", ::genfit::KalmanFittedStateOnPlane::Class_Version(), "KalmanFittedStateOnPlane.h", 35,
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
         instance("genfit::ReferenceStateOnPlane", ::genfit::ReferenceStateOnPlane::Class_Version(), "ReferenceStateOnPlane.h", 43,
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
         instance("genfit::KalmanFitterInfo", ::genfit::KalmanFitterInfo::Class_Version(), "KalmanFitterInfo.h", 44,
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
         instance("genfit::KalmanFitterRefTrack", ::genfit::KalmanFitterRefTrack::Class_Version(), "KalmanFitterRefTrack.h", 37,
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
         instance("genfit::DAF", ::genfit::DAF::Class_Version(), "DAF.h", 49,
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
         instance("genfit::KalmanFitStatus", ::genfit::KalmanFitStatus::Class_Version(), "KalmanFitStatus.h", 36,
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
   static void *new_gblcLcLGblData(void *p = 0);
   static void *newArray_gblcLcLGblData(Long_t size, void *p);
   static void delete_gblcLcLGblData(void *p);
   static void deleteArray_gblcLcLGblData(void *p);
   static void destruct_gblcLcLGblData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::gbl::GblData*)
   {
      ::gbl::GblData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::gbl::GblData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("gbl::GblData", ::gbl::GblData::Class_Version(), "GblData.h", 55,
                  typeid(::gbl::GblData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::gbl::GblData::Dictionary, isa_proxy, 4,
                  sizeof(::gbl::GblData) );
      instance.SetNew(&new_gblcLcLGblData);
      instance.SetNewArray(&newArray_gblcLcLGblData);
      instance.SetDelete(&delete_gblcLcLGblData);
      instance.SetDeleteArray(&deleteArray_gblcLcLGblData);
      instance.SetDestructor(&destruct_gblcLcLGblData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::gbl::GblData*)
   {
      return GenerateInitInstanceLocal((::gbl::GblData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::gbl::GblData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *genfitcLcLICalibrationParametersDerivatives_Dictionary();
   static void genfitcLcLICalibrationParametersDerivatives_TClassManip(TClass*);
   static void *new_genfitcLcLICalibrationParametersDerivatives(void *p = 0);
   static void *newArray_genfitcLcLICalibrationParametersDerivatives(Long_t size, void *p);
   static void delete_genfitcLcLICalibrationParametersDerivatives(void *p);
   static void deleteArray_genfitcLcLICalibrationParametersDerivatives(void *p);
   static void destruct_genfitcLcLICalibrationParametersDerivatives(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::ICalibrationParametersDerivatives*)
   {
      ::genfit::ICalibrationParametersDerivatives *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::genfit::ICalibrationParametersDerivatives));
      static ::ROOT::TGenericClassInfo 
         instance("genfit::ICalibrationParametersDerivatives", "ICalibrationParametersDerivatives.h", 44,
                  typeid(::genfit::ICalibrationParametersDerivatives), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &genfitcLcLICalibrationParametersDerivatives_Dictionary, isa_proxy, 4,
                  sizeof(::genfit::ICalibrationParametersDerivatives) );
      instance.SetNew(&new_genfitcLcLICalibrationParametersDerivatives);
      instance.SetNewArray(&newArray_genfitcLcLICalibrationParametersDerivatives);
      instance.SetDelete(&delete_genfitcLcLICalibrationParametersDerivatives);
      instance.SetDeleteArray(&deleteArray_genfitcLcLICalibrationParametersDerivatives);
      instance.SetDestructor(&destruct_genfitcLcLICalibrationParametersDerivatives);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::ICalibrationParametersDerivatives*)
   {
      return GenerateInitInstanceLocal((::genfit::ICalibrationParametersDerivatives*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::ICalibrationParametersDerivatives*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *genfitcLcLICalibrationParametersDerivatives_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::genfit::ICalibrationParametersDerivatives*)0x0)->GetClass();
      genfitcLcLICalibrationParametersDerivatives_TClassManip(theClass);
   return theClass;
   }

   static void genfitcLcLICalibrationParametersDerivatives_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLGblFitterInfo(void *p = 0);
   static void *newArray_genfitcLcLGblFitterInfo(Long_t size, void *p);
   static void delete_genfitcLcLGblFitterInfo(void *p);
   static void deleteArray_genfitcLcLGblFitterInfo(void *p);
   static void destruct_genfitcLcLGblFitterInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::GblFitterInfo*)
   {
      ::genfit::GblFitterInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::GblFitterInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::GblFitterInfo", ::genfit::GblFitterInfo::Class_Version(), "GblFitterInfo.h", 52,
                  typeid(::genfit::GblFitterInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::GblFitterInfo::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::GblFitterInfo) );
      instance.SetNew(&new_genfitcLcLGblFitterInfo);
      instance.SetNewArray(&newArray_genfitcLcLGblFitterInfo);
      instance.SetDelete(&delete_genfitcLcLGblFitterInfo);
      instance.SetDeleteArray(&deleteArray_genfitcLcLGblFitterInfo);
      instance.SetDestructor(&destruct_genfitcLcLGblFitterInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::GblFitterInfo*)
   {
      return GenerateInitInstanceLocal((::genfit::GblFitterInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::GblFitterInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLGblFitStatus(void *p = 0);
   static void *newArray_genfitcLcLGblFitStatus(Long_t size, void *p);
   static void delete_genfitcLcLGblFitStatus(void *p);
   static void deleteArray_genfitcLcLGblFitStatus(void *p);
   static void destruct_genfitcLcLGblFitStatus(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::GblFitStatus*)
   {
      ::genfit::GblFitStatus *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::GblFitStatus >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::GblFitStatus", ::genfit::GblFitStatus::Class_Version(), "GblFitStatus.h", 39,
                  typeid(::genfit::GblFitStatus), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::GblFitStatus::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::GblFitStatus) );
      instance.SetNew(&new_genfitcLcLGblFitStatus);
      instance.SetNewArray(&newArray_genfitcLcLGblFitStatus);
      instance.SetDelete(&delete_genfitcLcLGblFitStatus);
      instance.SetDeleteArray(&deleteArray_genfitcLcLGblFitStatus);
      instance.SetDestructor(&destruct_genfitcLcLGblFitStatus);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::GblFitStatus*)
   {
      return GenerateInitInstanceLocal((::genfit::GblFitStatus*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::GblFitStatus*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_genfitcLcLGblTrackSegmentController(void *p);
   static void deleteArray_genfitcLcLGblTrackSegmentController(void *p);
   static void destruct_genfitcLcLGblTrackSegmentController(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::GblTrackSegmentController*)
   {
      ::genfit::GblTrackSegmentController *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::GblTrackSegmentController >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::GblTrackSegmentController", ::genfit::GblTrackSegmentController::Class_Version(), "GblTrackSegmentController.h", 40,
                  typeid(::genfit::GblTrackSegmentController), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::GblTrackSegmentController::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::GblTrackSegmentController) );
      instance.SetDelete(&delete_genfitcLcLGblTrackSegmentController);
      instance.SetDeleteArray(&deleteArray_genfitcLcLGblTrackSegmentController);
      instance.SetDestructor(&destruct_genfitcLcLGblTrackSegmentController);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::GblTrackSegmentController*)
   {
      return GenerateInitInstanceLocal((::genfit::GblTrackSegmentController*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::GblTrackSegmentController*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLGblFitter(void *p = 0);
   static void *newArray_genfitcLcLGblFitter(Long_t size, void *p);
   static void delete_genfitcLcLGblFitter(void *p);
   static void deleteArray_genfitcLcLGblFitter(void *p);
   static void destruct_genfitcLcLGblFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::GblFitter*)
   {
      ::genfit::GblFitter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::GblFitter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::GblFitter", ::genfit::GblFitter::Class_Version(), "GblFitter.h", 53,
                  typeid(::genfit::GblFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::GblFitter::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::GblFitter) );
      instance.SetNew(&new_genfitcLcLGblFitter);
      instance.SetNewArray(&newArray_genfitcLcLGblFitter);
      instance.SetDelete(&delete_genfitcLcLGblFitter);
      instance.SetDeleteArray(&deleteArray_genfitcLcLGblFitter);
      instance.SetDestructor(&destruct_genfitcLcLGblFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::GblFitter*)
   {
      return GenerateInitInstanceLocal((::genfit::GblFitter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::GblFitter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLGFGbl(void *p = 0);
   static void *newArray_genfitcLcLGFGbl(Long_t size, void *p);
   static void delete_genfitcLcLGFGbl(void *p);
   static void deleteArray_genfitcLcLGFGbl(void *p);
   static void destruct_genfitcLcLGFGbl(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::GFGbl*)
   {
      ::genfit::GFGbl *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::GFGbl >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::GFGbl", ::genfit::GFGbl::Class_Version(), "GFGbl.h", 48,
                  typeid(::genfit::GFGbl), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::GFGbl::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::GFGbl) );
      instance.SetNew(&new_genfitcLcLGFGbl);
      instance.SetNewArray(&newArray_genfitcLcLGFGbl);
      instance.SetDelete(&delete_genfitcLcLGFGbl);
      instance.SetDeleteArray(&deleteArray_genfitcLcLGFGbl);
      instance.SetDestructor(&destruct_genfitcLcLGFGbl);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::GFGbl*)
   {
      return GenerateInitInstanceLocal((::genfit::GFGbl*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::GFGbl*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_genfitcLcLHelixTrackModel(void *p);
   static void deleteArray_genfitcLcLHelixTrackModel(void *p);
   static void destruct_genfitcLcLHelixTrackModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::HelixTrackModel*)
   {
      ::genfit::HelixTrackModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::HelixTrackModel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::HelixTrackModel", ::genfit::HelixTrackModel::Class_Version(), "HelixTrackModel.h", 41,
                  typeid(::genfit::HelixTrackModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::HelixTrackModel::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::HelixTrackModel) );
      instance.SetDelete(&delete_genfitcLcLHelixTrackModel);
      instance.SetDeleteArray(&deleteArray_genfitcLcLHelixTrackModel);
      instance.SetDestructor(&destruct_genfitcLcLHelixTrackModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::HelixTrackModel*)
   {
      return GenerateInitInstanceLocal((::genfit::HelixTrackModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::HelixTrackModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLMeasurementCreator(void *p = 0);
   static void *newArray_genfitcLcLMeasurementCreator(Long_t size, void *p);
   static void delete_genfitcLcLMeasurementCreator(void *p);
   static void deleteArray_genfitcLcLMeasurementCreator(void *p);
   static void destruct_genfitcLcLMeasurementCreator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::MeasurementCreator*)
   {
      ::genfit::MeasurementCreator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::MeasurementCreator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::MeasurementCreator", ::genfit::MeasurementCreator::Class_Version(), "MeasurementCreator.h", 57,
                  typeid(::genfit::MeasurementCreator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::MeasurementCreator::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::MeasurementCreator) );
      instance.SetNew(&new_genfitcLcLMeasurementCreator);
      instance.SetNewArray(&newArray_genfitcLcLMeasurementCreator);
      instance.SetDelete(&delete_genfitcLcLMeasurementCreator);
      instance.SetDeleteArray(&deleteArray_genfitcLcLMeasurementCreator);
      instance.SetDestructor(&destruct_genfitcLcLMeasurementCreator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::MeasurementCreator*)
   {
      return GenerateInitInstanceLocal((::genfit::MeasurementCreator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::MeasurementCreator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLmySpacepointDetectorHit(void *p = 0);
   static void *newArray_genfitcLcLmySpacepointDetectorHit(Long_t size, void *p);
   static void delete_genfitcLcLmySpacepointDetectorHit(void *p);
   static void deleteArray_genfitcLcLmySpacepointDetectorHit(void *p);
   static void destruct_genfitcLcLmySpacepointDetectorHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::mySpacepointDetectorHit*)
   {
      ::genfit::mySpacepointDetectorHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::mySpacepointDetectorHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::mySpacepointDetectorHit", ::genfit::mySpacepointDetectorHit::Class_Version(), "mySpacepointDetectorHit.h", 33,
                  typeid(::genfit::mySpacepointDetectorHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::mySpacepointDetectorHit::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::mySpacepointDetectorHit) );
      instance.SetNew(&new_genfitcLcLmySpacepointDetectorHit);
      instance.SetNewArray(&newArray_genfitcLcLmySpacepointDetectorHit);
      instance.SetDelete(&delete_genfitcLcLmySpacepointDetectorHit);
      instance.SetDeleteArray(&deleteArray_genfitcLcLmySpacepointDetectorHit);
      instance.SetDestructor(&destruct_genfitcLcLmySpacepointDetectorHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::mySpacepointDetectorHit*)
   {
      return GenerateInitInstanceLocal((::genfit::mySpacepointDetectorHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::mySpacepointDetectorHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_genfitcLcLmySpacepointMeasurement(void *p = 0);
   static void *newArray_genfitcLcLmySpacepointMeasurement(Long_t size, void *p);
   static void delete_genfitcLcLmySpacepointMeasurement(void *p);
   static void deleteArray_genfitcLcLmySpacepointMeasurement(void *p);
   static void destruct_genfitcLcLmySpacepointMeasurement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::mySpacepointMeasurement*)
   {
      ::genfit::mySpacepointMeasurement *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::mySpacepointMeasurement >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::mySpacepointMeasurement", ::genfit::mySpacepointMeasurement::Class_Version(), "mySpacepointMeasurement.h", 36,
                  typeid(::genfit::mySpacepointMeasurement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::genfit::mySpacepointMeasurement::Dictionary, isa_proxy, 4,
                  sizeof(::genfit::mySpacepointMeasurement) );
      instance.SetNew(&new_genfitcLcLmySpacepointMeasurement);
      instance.SetNewArray(&newArray_genfitcLcLmySpacepointMeasurement);
      instance.SetDelete(&delete_genfitcLcLmySpacepointMeasurement);
      instance.SetDeleteArray(&deleteArray_genfitcLcLmySpacepointMeasurement);
      instance.SetDestructor(&destruct_genfitcLcLmySpacepointMeasurement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::genfit::mySpacepointMeasurement*)
   {
      return GenerateInitInstanceLocal((::genfit::mySpacepointMeasurement*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::genfit::mySpacepointMeasurement*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
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
atomic_TClass_ptr EventDisplay::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *EventDisplay::Class_Name()
{
   return "genfit::EventDisplay";
}

//______________________________________________________________________________
const char *EventDisplay::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::EventDisplay*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int EventDisplay::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::EventDisplay*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EventDisplay::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::EventDisplay*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EventDisplay::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::EventDisplay*)0x0)->GetClass(); }
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
atomic_TClass_ptr RKTrackRep::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RKTrackRep::Class_Name()
{
   return "genfit::RKTrackRep";
}

//______________________________________________________________________________
const char *RKTrackRep::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::RKTrackRep*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RKTrackRep::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::RKTrackRep*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RKTrackRep::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::RKTrackRep*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RKTrackRep::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::RKTrackRep*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr MplTrackRep::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MplTrackRep::Class_Name()
{
   return "genfit::MplTrackRep";
}

//______________________________________________________________________________
const char *MplTrackRep::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::MplTrackRep*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MplTrackRep::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::MplTrackRep*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MplTrackRep::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::MplTrackRep*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MplTrackRep::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::MplTrackRep*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr FullMeasurement::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *FullMeasurement::Class_Name()
{
   return "genfit::FullMeasurement";
}

//______________________________________________________________________________
const char *FullMeasurement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::FullMeasurement*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int FullMeasurement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::FullMeasurement*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FullMeasurement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::FullMeasurement*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FullMeasurement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::FullMeasurement*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr HMatrixU::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HMatrixU::Class_Name()
{
   return "genfit::HMatrixU";
}

//______________________________________________________________________________
const char *HMatrixU::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::HMatrixU*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HMatrixU::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::HMatrixU*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HMatrixU::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::HMatrixU*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HMatrixU::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::HMatrixU*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr HMatrixUV::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HMatrixUV::Class_Name()
{
   return "genfit::HMatrixUV";
}

//______________________________________________________________________________
const char *HMatrixUV::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::HMatrixUV*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HMatrixUV::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::HMatrixUV*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HMatrixUV::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::HMatrixUV*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HMatrixUV::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::HMatrixUV*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr SpacepointMeasurement::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SpacepointMeasurement::Class_Name()
{
   return "genfit::SpacepointMeasurement";
}

//______________________________________________________________________________
const char *SpacepointMeasurement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::SpacepointMeasurement*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SpacepointMeasurement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::SpacepointMeasurement*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SpacepointMeasurement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::SpacepointMeasurement*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SpacepointMeasurement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::SpacepointMeasurement*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr ProlateSpacepointMeasurement::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ProlateSpacepointMeasurement::Class_Name()
{
   return "genfit::ProlateSpacepointMeasurement";
}

//______________________________________________________________________________
const char *ProlateSpacepointMeasurement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::ProlateSpacepointMeasurement*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ProlateSpacepointMeasurement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::ProlateSpacepointMeasurement*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ProlateSpacepointMeasurement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::ProlateSpacepointMeasurement*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ProlateSpacepointMeasurement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::ProlateSpacepointMeasurement*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr WireMeasurement::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *WireMeasurement::Class_Name()
{
   return "genfit::WireMeasurement";
}

//______________________________________________________________________________
const char *WireMeasurement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::WireMeasurement*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int WireMeasurement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::WireMeasurement*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *WireMeasurement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::WireMeasurement*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *WireMeasurement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::WireMeasurement*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr WirePointMeasurement::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *WirePointMeasurement::Class_Name()
{
   return "genfit::WirePointMeasurement";
}

//______________________________________________________________________________
const char *WirePointMeasurement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::WirePointMeasurement*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int WirePointMeasurement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::WirePointMeasurement*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *WirePointMeasurement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::WirePointMeasurement*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *WirePointMeasurement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::WirePointMeasurement*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr HMatrixPhi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HMatrixPhi::Class_Name()
{
   return "genfit::HMatrixPhi";
}

//______________________________________________________________________________
const char *HMatrixPhi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::HMatrixPhi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HMatrixPhi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::HMatrixPhi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HMatrixPhi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::HMatrixPhi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HMatrixPhi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::HMatrixPhi*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr HMatrixUnit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HMatrixUnit::Class_Name()
{
   return "genfit::HMatrixUnit";
}

//______________________________________________________________________________
const char *HMatrixUnit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::HMatrixUnit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HMatrixUnit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::HMatrixUnit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HMatrixUnit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::HMatrixUnit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HMatrixUnit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::HMatrixUnit*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr HMatrixV::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HMatrixV::Class_Name()
{
   return "genfit::HMatrixV";
}

//______________________________________________________________________________
const char *HMatrixV::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::HMatrixV*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HMatrixV::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::HMatrixV*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HMatrixV::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::HMatrixV*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HMatrixV::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::HMatrixV*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr PlanarMeasurement::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PlanarMeasurement::Class_Name()
{
   return "genfit::PlanarMeasurement";
}

//______________________________________________________________________________
const char *PlanarMeasurement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::PlanarMeasurement*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PlanarMeasurement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::PlanarMeasurement*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PlanarMeasurement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::PlanarMeasurement*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PlanarMeasurement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::PlanarMeasurement*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr WireMeasurementNew::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *WireMeasurementNew::Class_Name()
{
   return "genfit::WireMeasurementNew";
}

//______________________________________________________________________________
const char *WireMeasurementNew::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::WireMeasurementNew*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int WireMeasurementNew::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::WireMeasurementNew*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *WireMeasurementNew::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::WireMeasurementNew*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *WireMeasurementNew::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::WireMeasurementNew*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr WireTrackCandHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *WireTrackCandHit::Class_Name()
{
   return "genfit::WireTrackCandHit";
}

//______________________________________________________________________________
const char *WireTrackCandHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::WireTrackCandHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int WireTrackCandHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::WireTrackCandHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *WireTrackCandHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::WireTrackCandHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *WireTrackCandHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::WireTrackCandHit*)0x0)->GetClass(); }
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
namespace gbl {
//______________________________________________________________________________
atomic_TClass_ptr GblData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GblData::Class_Name()
{
   return "gbl::GblData";
}

//______________________________________________________________________________
const char *GblData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gbl::GblData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GblData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::gbl::GblData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GblData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gbl::GblData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GblData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::gbl::GblData*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace gbl
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr GblFitterInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GblFitterInfo::Class_Name()
{
   return "genfit::GblFitterInfo";
}

//______________________________________________________________________________
const char *GblFitterInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblFitterInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GblFitterInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblFitterInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GblFitterInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblFitterInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GblFitterInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblFitterInfo*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr GblFitStatus::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GblFitStatus::Class_Name()
{
   return "genfit::GblFitStatus";
}

//______________________________________________________________________________
const char *GblFitStatus::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblFitStatus*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GblFitStatus::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblFitStatus*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GblFitStatus::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblFitStatus*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GblFitStatus::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblFitStatus*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr GblTrackSegmentController::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GblTrackSegmentController::Class_Name()
{
   return "genfit::GblTrackSegmentController";
}

//______________________________________________________________________________
const char *GblTrackSegmentController::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblTrackSegmentController*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GblTrackSegmentController::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblTrackSegmentController*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GblTrackSegmentController::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblTrackSegmentController*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GblTrackSegmentController::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblTrackSegmentController*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr GblFitter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GblFitter::Class_Name()
{
   return "genfit::GblFitter";
}

//______________________________________________________________________________
const char *GblFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblFitter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GblFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblFitter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GblFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblFitter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GblFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::GblFitter*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr GFGbl::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GFGbl::Class_Name()
{
   return "genfit::GFGbl";
}

//______________________________________________________________________________
const char *GFGbl::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::GFGbl*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GFGbl::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::GFGbl*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GFGbl::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::GFGbl*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GFGbl::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::GFGbl*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr HelixTrackModel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *HelixTrackModel::Class_Name()
{
   return "genfit::HelixTrackModel";
}

//______________________________________________________________________________
const char *HelixTrackModel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::HelixTrackModel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int HelixTrackModel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::HelixTrackModel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *HelixTrackModel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::HelixTrackModel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *HelixTrackModel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::HelixTrackModel*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr MeasurementCreator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MeasurementCreator::Class_Name()
{
   return "genfit::MeasurementCreator";
}

//______________________________________________________________________________
const char *MeasurementCreator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::MeasurementCreator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MeasurementCreator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::MeasurementCreator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MeasurementCreator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::MeasurementCreator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MeasurementCreator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::MeasurementCreator*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr mySpacepointDetectorHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *mySpacepointDetectorHit::Class_Name()
{
   return "genfit::mySpacepointDetectorHit";
}

//______________________________________________________________________________
const char *mySpacepointDetectorHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::mySpacepointDetectorHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int mySpacepointDetectorHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::mySpacepointDetectorHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *mySpacepointDetectorHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::mySpacepointDetectorHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *mySpacepointDetectorHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::mySpacepointDetectorHit*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace genfit
namespace genfit {
//______________________________________________________________________________
atomic_TClass_ptr mySpacepointMeasurement::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *mySpacepointMeasurement::Class_Name()
{
   return "genfit::mySpacepointMeasurement";
}

//______________________________________________________________________________
const char *mySpacepointMeasurement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::mySpacepointMeasurement*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int mySpacepointMeasurement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::genfit::mySpacepointMeasurement*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *mySpacepointMeasurement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::mySpacepointMeasurement*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *mySpacepointMeasurement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::genfit::mySpacepointMeasurement*)0x0)->GetClass(); }
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
void EventDisplay::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::EventDisplay.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::EventDisplay::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::EventDisplay::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrapper around operator delete
   static void delete_genfitcLcLEventDisplay(void *p) {
      delete ((::genfit::EventDisplay*)p);
   }
   static void deleteArray_genfitcLcLEventDisplay(void *p) {
      delete [] ((::genfit::EventDisplay*)p);
   }
   static void destruct_genfitcLcLEventDisplay(void *p) {
      typedef ::genfit::EventDisplay current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::EventDisplay

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
   // Wrappers around operator new
   static void *new_genfitcLcLRKTrackRep(void *p) {
      return  p ? new(p) ::genfit::RKTrackRep : new ::genfit::RKTrackRep;
   }
   static void *newArray_genfitcLcLRKTrackRep(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::RKTrackRep[nElements] : new ::genfit::RKTrackRep[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLRKTrackRep(void *p) {
      delete ((::genfit::RKTrackRep*)p);
   }
   static void deleteArray_genfitcLcLRKTrackRep(void *p) {
      delete [] ((::genfit::RKTrackRep*)p);
   }
   static void destruct_genfitcLcLRKTrackRep(void *p) {
      typedef ::genfit::RKTrackRep current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_genfitcLcLRKTrackRep(TBuffer &buf, void *obj) {
      ((::genfit::RKTrackRep*)obj)->::genfit::RKTrackRep::Streamer(buf);
   }
} // end of namespace ROOT for class ::genfit::RKTrackRep

namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLMplTrackRep(void *p) {
      return  p ? new(p) ::genfit::MplTrackRep : new ::genfit::MplTrackRep;
   }
   static void *newArray_genfitcLcLMplTrackRep(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::MplTrackRep[nElements] : new ::genfit::MplTrackRep[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLMplTrackRep(void *p) {
      delete ((::genfit::MplTrackRep*)p);
   }
   static void deleteArray_genfitcLcLMplTrackRep(void *p) {
      delete [] ((::genfit::MplTrackRep*)p);
   }
   static void destruct_genfitcLcLMplTrackRep(void *p) {
      typedef ::genfit::MplTrackRep current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_genfitcLcLMplTrackRep(TBuffer &buf, void *obj) {
      ((::genfit::MplTrackRep*)obj)->::genfit::MplTrackRep::Streamer(buf);
   }
} // end of namespace ROOT for class ::genfit::MplTrackRep

namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLFullMeasurement(void *p) {
      return  p ? new(p) ::genfit::FullMeasurement : new ::genfit::FullMeasurement;
   }
   static void *newArray_genfitcLcLFullMeasurement(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::FullMeasurement[nElements] : new ::genfit::FullMeasurement[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLFullMeasurement(void *p) {
      delete ((::genfit::FullMeasurement*)p);
   }
   static void deleteArray_genfitcLcLFullMeasurement(void *p) {
      delete [] ((::genfit::FullMeasurement*)p);
   }
   static void destruct_genfitcLcLFullMeasurement(void *p) {
      typedef ::genfit::FullMeasurement current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_genfitcLcLFullMeasurement(TBuffer &buf, void *obj) {
      ((::genfit::FullMeasurement*)obj)->::genfit::FullMeasurement::Streamer(buf);
   }
} // end of namespace ROOT for class ::genfit::FullMeasurement

namespace genfit {
//______________________________________________________________________________
void HMatrixU::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::HMatrixU.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::HMatrixU::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::HMatrixU::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLHMatrixU(void *p) {
      return  p ? new(p) ::genfit::HMatrixU : new ::genfit::HMatrixU;
   }
   static void *newArray_genfitcLcLHMatrixU(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::HMatrixU[nElements] : new ::genfit::HMatrixU[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLHMatrixU(void *p) {
      delete ((::genfit::HMatrixU*)p);
   }
   static void deleteArray_genfitcLcLHMatrixU(void *p) {
      delete [] ((::genfit::HMatrixU*)p);
   }
   static void destruct_genfitcLcLHMatrixU(void *p) {
      typedef ::genfit::HMatrixU current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::HMatrixU

namespace genfit {
//______________________________________________________________________________
void HMatrixUV::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::HMatrixUV.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::HMatrixUV::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::HMatrixUV::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLHMatrixUV(void *p) {
      return  p ? new(p) ::genfit::HMatrixUV : new ::genfit::HMatrixUV;
   }
   static void *newArray_genfitcLcLHMatrixUV(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::HMatrixUV[nElements] : new ::genfit::HMatrixUV[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLHMatrixUV(void *p) {
      delete ((::genfit::HMatrixUV*)p);
   }
   static void deleteArray_genfitcLcLHMatrixUV(void *p) {
      delete [] ((::genfit::HMatrixUV*)p);
   }
   static void destruct_genfitcLcLHMatrixUV(void *p) {
      typedef ::genfit::HMatrixUV current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::HMatrixUV

namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLSpacepointMeasurement(void *p) {
      return  p ? new(p) ::genfit::SpacepointMeasurement : new ::genfit::SpacepointMeasurement;
   }
   static void *newArray_genfitcLcLSpacepointMeasurement(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::SpacepointMeasurement[nElements] : new ::genfit::SpacepointMeasurement[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLSpacepointMeasurement(void *p) {
      delete ((::genfit::SpacepointMeasurement*)p);
   }
   static void deleteArray_genfitcLcLSpacepointMeasurement(void *p) {
      delete [] ((::genfit::SpacepointMeasurement*)p);
   }
   static void destruct_genfitcLcLSpacepointMeasurement(void *p) {
      typedef ::genfit::SpacepointMeasurement current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_genfitcLcLSpacepointMeasurement(TBuffer &buf, void *obj) {
      ((::genfit::SpacepointMeasurement*)obj)->::genfit::SpacepointMeasurement::Streamer(buf);
   }
} // end of namespace ROOT for class ::genfit::SpacepointMeasurement

namespace genfit {
//______________________________________________________________________________
void ProlateSpacepointMeasurement::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::ProlateSpacepointMeasurement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::ProlateSpacepointMeasurement::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::ProlateSpacepointMeasurement::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLProlateSpacepointMeasurement(void *p) {
      return  p ? new(p) ::genfit::ProlateSpacepointMeasurement : new ::genfit::ProlateSpacepointMeasurement;
   }
   static void *newArray_genfitcLcLProlateSpacepointMeasurement(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::ProlateSpacepointMeasurement[nElements] : new ::genfit::ProlateSpacepointMeasurement[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLProlateSpacepointMeasurement(void *p) {
      delete ((::genfit::ProlateSpacepointMeasurement*)p);
   }
   static void deleteArray_genfitcLcLProlateSpacepointMeasurement(void *p) {
      delete [] ((::genfit::ProlateSpacepointMeasurement*)p);
   }
   static void destruct_genfitcLcLProlateSpacepointMeasurement(void *p) {
      typedef ::genfit::ProlateSpacepointMeasurement current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::ProlateSpacepointMeasurement

namespace genfit {
//______________________________________________________________________________
void WireMeasurement::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::WireMeasurement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::WireMeasurement::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::WireMeasurement::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLWireMeasurement(void *p) {
      return  p ? new(p) ::genfit::WireMeasurement : new ::genfit::WireMeasurement;
   }
   static void *newArray_genfitcLcLWireMeasurement(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::WireMeasurement[nElements] : new ::genfit::WireMeasurement[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLWireMeasurement(void *p) {
      delete ((::genfit::WireMeasurement*)p);
   }
   static void deleteArray_genfitcLcLWireMeasurement(void *p) {
      delete [] ((::genfit::WireMeasurement*)p);
   }
   static void destruct_genfitcLcLWireMeasurement(void *p) {
      typedef ::genfit::WireMeasurement current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::WireMeasurement

namespace genfit {
//______________________________________________________________________________
void WirePointMeasurement::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::WirePointMeasurement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::WirePointMeasurement::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::WirePointMeasurement::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLWirePointMeasurement(void *p) {
      return  p ? new(p) ::genfit::WirePointMeasurement : new ::genfit::WirePointMeasurement;
   }
   static void *newArray_genfitcLcLWirePointMeasurement(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::WirePointMeasurement[nElements] : new ::genfit::WirePointMeasurement[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLWirePointMeasurement(void *p) {
      delete ((::genfit::WirePointMeasurement*)p);
   }
   static void deleteArray_genfitcLcLWirePointMeasurement(void *p) {
      delete [] ((::genfit::WirePointMeasurement*)p);
   }
   static void destruct_genfitcLcLWirePointMeasurement(void *p) {
      typedef ::genfit::WirePointMeasurement current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::WirePointMeasurement

namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLHMatrixPhi(void *p) {
      return  p ? new(p) ::genfit::HMatrixPhi : new ::genfit::HMatrixPhi;
   }
   static void *newArray_genfitcLcLHMatrixPhi(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::HMatrixPhi[nElements] : new ::genfit::HMatrixPhi[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLHMatrixPhi(void *p) {
      delete ((::genfit::HMatrixPhi*)p);
   }
   static void deleteArray_genfitcLcLHMatrixPhi(void *p) {
      delete [] ((::genfit::HMatrixPhi*)p);
   }
   static void destruct_genfitcLcLHMatrixPhi(void *p) {
      typedef ::genfit::HMatrixPhi current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_genfitcLcLHMatrixPhi(TBuffer &buf, void *obj) {
      ((::genfit::HMatrixPhi*)obj)->::genfit::HMatrixPhi::Streamer(buf);
   }
} // end of namespace ROOT for class ::genfit::HMatrixPhi

namespace genfit {
//______________________________________________________________________________
void HMatrixUnit::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::HMatrixUnit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::HMatrixUnit::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::HMatrixUnit::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLHMatrixUnit(void *p) {
      return  p ? new(p) ::genfit::HMatrixUnit : new ::genfit::HMatrixUnit;
   }
   static void *newArray_genfitcLcLHMatrixUnit(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::HMatrixUnit[nElements] : new ::genfit::HMatrixUnit[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLHMatrixUnit(void *p) {
      delete ((::genfit::HMatrixUnit*)p);
   }
   static void deleteArray_genfitcLcLHMatrixUnit(void *p) {
      delete [] ((::genfit::HMatrixUnit*)p);
   }
   static void destruct_genfitcLcLHMatrixUnit(void *p) {
      typedef ::genfit::HMatrixUnit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::HMatrixUnit

namespace genfit {
//______________________________________________________________________________
void HMatrixV::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::HMatrixV.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::HMatrixV::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::HMatrixV::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLHMatrixV(void *p) {
      return  p ? new(p) ::genfit::HMatrixV : new ::genfit::HMatrixV;
   }
   static void *newArray_genfitcLcLHMatrixV(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::HMatrixV[nElements] : new ::genfit::HMatrixV[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLHMatrixV(void *p) {
      delete ((::genfit::HMatrixV*)p);
   }
   static void deleteArray_genfitcLcLHMatrixV(void *p) {
      delete [] ((::genfit::HMatrixV*)p);
   }
   static void destruct_genfitcLcLHMatrixV(void *p) {
      typedef ::genfit::HMatrixV current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::HMatrixV

namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLPlanarMeasurement(void *p) {
      return  p ? new(p) ::genfit::PlanarMeasurement : new ::genfit::PlanarMeasurement;
   }
   static void *newArray_genfitcLcLPlanarMeasurement(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::PlanarMeasurement[nElements] : new ::genfit::PlanarMeasurement[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLPlanarMeasurement(void *p) {
      delete ((::genfit::PlanarMeasurement*)p);
   }
   static void deleteArray_genfitcLcLPlanarMeasurement(void *p) {
      delete [] ((::genfit::PlanarMeasurement*)p);
   }
   static void destruct_genfitcLcLPlanarMeasurement(void *p) {
      typedef ::genfit::PlanarMeasurement current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_genfitcLcLPlanarMeasurement(TBuffer &buf, void *obj) {
      ((::genfit::PlanarMeasurement*)obj)->::genfit::PlanarMeasurement::Streamer(buf);
   }
} // end of namespace ROOT for class ::genfit::PlanarMeasurement

namespace genfit {
//______________________________________________________________________________
void WireMeasurementNew::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::WireMeasurementNew.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::WireMeasurementNew::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::WireMeasurementNew::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLWireMeasurementNew(void *p) {
      return  p ? new(p) ::genfit::WireMeasurementNew : new ::genfit::WireMeasurementNew;
   }
   static void *newArray_genfitcLcLWireMeasurementNew(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::WireMeasurementNew[nElements] : new ::genfit::WireMeasurementNew[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLWireMeasurementNew(void *p) {
      delete ((::genfit::WireMeasurementNew*)p);
   }
   static void deleteArray_genfitcLcLWireMeasurementNew(void *p) {
      delete [] ((::genfit::WireMeasurementNew*)p);
   }
   static void destruct_genfitcLcLWireMeasurementNew(void *p) {
      typedef ::genfit::WireMeasurementNew current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::WireMeasurementNew

namespace genfit {
//______________________________________________________________________________
void WireTrackCandHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::WireTrackCandHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::WireTrackCandHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::WireTrackCandHit::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLWireTrackCandHit(void *p) {
      return  p ? new(p) ::genfit::WireTrackCandHit : new ::genfit::WireTrackCandHit;
   }
   static void *newArray_genfitcLcLWireTrackCandHit(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::WireTrackCandHit[nElements] : new ::genfit::WireTrackCandHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLWireTrackCandHit(void *p) {
      delete ((::genfit::WireTrackCandHit*)p);
   }
   static void deleteArray_genfitcLcLWireTrackCandHit(void *p) {
      delete [] ((::genfit::WireTrackCandHit*)p);
   }
   static void destruct_genfitcLcLWireTrackCandHit(void *p) {
      typedef ::genfit::WireTrackCandHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::WireTrackCandHit

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

namespace gbl {
//______________________________________________________________________________
void GblData::Streamer(TBuffer &R__b)
{
   // Stream an object of class gbl::GblData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(gbl::GblData::Class(),this);
   } else {
      R__b.WriteClassBuffer(gbl::GblData::Class(),this);
   }
}

} // namespace gbl
namespace ROOT {
   // Wrappers around operator new
   static void *new_gblcLcLGblData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gbl::GblData : new ::gbl::GblData;
   }
   static void *newArray_gblcLcLGblData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::gbl::GblData[nElements] : new ::gbl::GblData[nElements];
   }
   // Wrapper around operator delete
   static void delete_gblcLcLGblData(void *p) {
      delete ((::gbl::GblData*)p);
   }
   static void deleteArray_gblcLcLGblData(void *p) {
      delete [] ((::gbl::GblData*)p);
   }
   static void destruct_gblcLcLGblData(void *p) {
      typedef ::gbl::GblData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::gbl::GblData

namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLICalibrationParametersDerivatives(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::ICalibrationParametersDerivatives : new ::genfit::ICalibrationParametersDerivatives;
   }
   static void *newArray_genfitcLcLICalibrationParametersDerivatives(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::ICalibrationParametersDerivatives[nElements] : new ::genfit::ICalibrationParametersDerivatives[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLICalibrationParametersDerivatives(void *p) {
      delete ((::genfit::ICalibrationParametersDerivatives*)p);
   }
   static void deleteArray_genfitcLcLICalibrationParametersDerivatives(void *p) {
      delete [] ((::genfit::ICalibrationParametersDerivatives*)p);
   }
   static void destruct_genfitcLcLICalibrationParametersDerivatives(void *p) {
      typedef ::genfit::ICalibrationParametersDerivatives current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::ICalibrationParametersDerivatives

namespace genfit {
//______________________________________________________________________________
void GblFitterInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::GblFitterInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::GblFitterInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::GblFitterInfo::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLGblFitterInfo(void *p) {
      return  p ? new(p) ::genfit::GblFitterInfo : new ::genfit::GblFitterInfo;
   }
   static void *newArray_genfitcLcLGblFitterInfo(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::GblFitterInfo[nElements] : new ::genfit::GblFitterInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLGblFitterInfo(void *p) {
      delete ((::genfit::GblFitterInfo*)p);
   }
   static void deleteArray_genfitcLcLGblFitterInfo(void *p) {
      delete [] ((::genfit::GblFitterInfo*)p);
   }
   static void destruct_genfitcLcLGblFitterInfo(void *p) {
      typedef ::genfit::GblFitterInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::GblFitterInfo

namespace genfit {
//______________________________________________________________________________
void GblFitStatus::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::GblFitStatus.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::GblFitStatus::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::GblFitStatus::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLGblFitStatus(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::GblFitStatus : new ::genfit::GblFitStatus;
   }
   static void *newArray_genfitcLcLGblFitStatus(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::GblFitStatus[nElements] : new ::genfit::GblFitStatus[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLGblFitStatus(void *p) {
      delete ((::genfit::GblFitStatus*)p);
   }
   static void deleteArray_genfitcLcLGblFitStatus(void *p) {
      delete [] ((::genfit::GblFitStatus*)p);
   }
   static void destruct_genfitcLcLGblFitStatus(void *p) {
      typedef ::genfit::GblFitStatus current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::GblFitStatus

namespace genfit {
//______________________________________________________________________________
void GblTrackSegmentController::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::GblTrackSegmentController.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::GblTrackSegmentController::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::GblTrackSegmentController::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrapper around operator delete
   static void delete_genfitcLcLGblTrackSegmentController(void *p) {
      delete ((::genfit::GblTrackSegmentController*)p);
   }
   static void deleteArray_genfitcLcLGblTrackSegmentController(void *p) {
      delete [] ((::genfit::GblTrackSegmentController*)p);
   }
   static void destruct_genfitcLcLGblTrackSegmentController(void *p) {
      typedef ::genfit::GblTrackSegmentController current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::GblTrackSegmentController

namespace genfit {
//______________________________________________________________________________
void GblFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::GblFitter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::GblFitter::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::GblFitter::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLGblFitter(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::GblFitter : new ::genfit::GblFitter;
   }
   static void *newArray_genfitcLcLGblFitter(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::GblFitter[nElements] : new ::genfit::GblFitter[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLGblFitter(void *p) {
      delete ((::genfit::GblFitter*)p);
   }
   static void deleteArray_genfitcLcLGblFitter(void *p) {
      delete [] ((::genfit::GblFitter*)p);
   }
   static void destruct_genfitcLcLGblFitter(void *p) {
      typedef ::genfit::GblFitter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::GblFitter

namespace genfit {
//______________________________________________________________________________
void GFGbl::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::GFGbl.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::GFGbl::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::GFGbl::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLGFGbl(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::GFGbl : new ::genfit::GFGbl;
   }
   static void *newArray_genfitcLcLGFGbl(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::genfit::GFGbl[nElements] : new ::genfit::GFGbl[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLGFGbl(void *p) {
      delete ((::genfit::GFGbl*)p);
   }
   static void deleteArray_genfitcLcLGFGbl(void *p) {
      delete [] ((::genfit::GFGbl*)p);
   }
   static void destruct_genfitcLcLGFGbl(void *p) {
      typedef ::genfit::GFGbl current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::GFGbl

namespace genfit {
//______________________________________________________________________________
void HelixTrackModel::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::HelixTrackModel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::HelixTrackModel::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::HelixTrackModel::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrapper around operator delete
   static void delete_genfitcLcLHelixTrackModel(void *p) {
      delete ((::genfit::HelixTrackModel*)p);
   }
   static void deleteArray_genfitcLcLHelixTrackModel(void *p) {
      delete [] ((::genfit::HelixTrackModel*)p);
   }
   static void destruct_genfitcLcLHelixTrackModel(void *p) {
      typedef ::genfit::HelixTrackModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::HelixTrackModel

namespace genfit {
//______________________________________________________________________________
void MeasurementCreator::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::MeasurementCreator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::MeasurementCreator::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::MeasurementCreator::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLMeasurementCreator(void *p) {
      return  p ? new(p) ::genfit::MeasurementCreator : new ::genfit::MeasurementCreator;
   }
   static void *newArray_genfitcLcLMeasurementCreator(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::MeasurementCreator[nElements] : new ::genfit::MeasurementCreator[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLMeasurementCreator(void *p) {
      delete ((::genfit::MeasurementCreator*)p);
   }
   static void deleteArray_genfitcLcLMeasurementCreator(void *p) {
      delete [] ((::genfit::MeasurementCreator*)p);
   }
   static void destruct_genfitcLcLMeasurementCreator(void *p) {
      typedef ::genfit::MeasurementCreator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::MeasurementCreator

namespace genfit {
//______________________________________________________________________________
void mySpacepointDetectorHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::mySpacepointDetectorHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::mySpacepointDetectorHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::mySpacepointDetectorHit::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLmySpacepointDetectorHit(void *p) {
      return  p ? new(p) ::genfit::mySpacepointDetectorHit : new ::genfit::mySpacepointDetectorHit;
   }
   static void *newArray_genfitcLcLmySpacepointDetectorHit(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::mySpacepointDetectorHit[nElements] : new ::genfit::mySpacepointDetectorHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLmySpacepointDetectorHit(void *p) {
      delete ((::genfit::mySpacepointDetectorHit*)p);
   }
   static void deleteArray_genfitcLcLmySpacepointDetectorHit(void *p) {
      delete [] ((::genfit::mySpacepointDetectorHit*)p);
   }
   static void destruct_genfitcLcLmySpacepointDetectorHit(void *p) {
      typedef ::genfit::mySpacepointDetectorHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::mySpacepointDetectorHit

namespace genfit {
//______________________________________________________________________________
void mySpacepointMeasurement::Streamer(TBuffer &R__b)
{
   // Stream an object of class genfit::mySpacepointMeasurement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(genfit::mySpacepointMeasurement::Class(),this);
   } else {
      R__b.WriteClassBuffer(genfit::mySpacepointMeasurement::Class(),this);
   }
}

} // namespace genfit
namespace ROOT {
   // Wrappers around operator new
   static void *new_genfitcLcLmySpacepointMeasurement(void *p) {
      return  p ? new(p) ::genfit::mySpacepointMeasurement : new ::genfit::mySpacepointMeasurement;
   }
   static void *newArray_genfitcLcLmySpacepointMeasurement(Long_t nElements, void *p) {
      return p ? new(p) ::genfit::mySpacepointMeasurement[nElements] : new ::genfit::mySpacepointMeasurement[nElements];
   }
   // Wrapper around operator delete
   static void delete_genfitcLcLmySpacepointMeasurement(void *p) {
      delete ((::genfit::mySpacepointMeasurement*)p);
   }
   static void deleteArray_genfitcLcLmySpacepointMeasurement(void *p) {
      delete [] ((::genfit::mySpacepointMeasurement*)p);
   }
   static void destruct_genfitcLcLmySpacepointMeasurement(void *p) {
      typedef ::genfit::mySpacepointMeasurement current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::genfit::mySpacepointMeasurement

namespace ROOT {
   static TClass *vectorlEunsignedsPintgR_Dictionary();
   static void vectorlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPintgR(void *p = 0);
   static void *newArray_vectorlEunsignedsPintgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPintgR(void *p);
   static void deleteArray_vectorlEunsignedsPintgR(void *p);
   static void destruct_vectorlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned int>*)
   {
      vector<unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned int>", -2, "vector", 216,
                  typeid(vector<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned int>) );
      instance.SetNew(&new_vectorlEunsignedsPintgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPintgR);
      instance.SetDelete(&delete_vectorlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPintgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned int> >()));

      ::ROOT::AddClassAlternate("vector<unsigned int>","std::vector<unsigned int, std::allocator<unsigned int> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned int>*)0x0)->GetClass();
      vectorlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int> : new vector<unsigned int>;
   }
   static void *newArray_vectorlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int>[nElements] : new vector<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPintgR(void *p) {
      delete ((vector<unsigned int>*)p);
   }
   static void deleteArray_vectorlEunsignedsPintgR(void *p) {
      delete [] ((vector<unsigned int>*)p);
   }
   static void destruct_vectorlEunsignedsPintgR(void *p) {
      typedef vector<unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned int>

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
   static TClass *vectorlEgblcLcLGblDatagR_Dictionary();
   static void vectorlEgblcLcLGblDatagR_TClassManip(TClass*);
   static void *new_vectorlEgblcLcLGblDatagR(void *p = 0);
   static void *newArray_vectorlEgblcLcLGblDatagR(Long_t size, void *p);
   static void delete_vectorlEgblcLcLGblDatagR(void *p);
   static void deleteArray_vectorlEgblcLcLGblDatagR(void *p);
   static void destruct_vectorlEgblcLcLGblDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<gbl::GblData>*)
   {
      vector<gbl::GblData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<gbl::GblData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<gbl::GblData>", -2, "vector", 216,
                  typeid(vector<gbl::GblData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEgblcLcLGblDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<gbl::GblData>) );
      instance.SetNew(&new_vectorlEgblcLcLGblDatagR);
      instance.SetNewArray(&newArray_vectorlEgblcLcLGblDatagR);
      instance.SetDelete(&delete_vectorlEgblcLcLGblDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEgblcLcLGblDatagR);
      instance.SetDestructor(&destruct_vectorlEgblcLcLGblDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<gbl::GblData> >()));

      ::ROOT::AddClassAlternate("vector<gbl::GblData>","std::vector<gbl::GblData, std::allocator<gbl::GblData> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<gbl::GblData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgblcLcLGblDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<gbl::GblData>*)0x0)->GetClass();
      vectorlEgblcLcLGblDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgblcLcLGblDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgblcLcLGblDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gbl::GblData> : new vector<gbl::GblData>;
   }
   static void *newArray_vectorlEgblcLcLGblDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<gbl::GblData>[nElements] : new vector<gbl::GblData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgblcLcLGblDatagR(void *p) {
      delete ((vector<gbl::GblData>*)p);
   }
   static void deleteArray_vectorlEgblcLcLGblDatagR(void *p) {
      delete [] ((vector<gbl::GblData>*)p);
   }
   static void destruct_vectorlEgblcLcLGblDatagR(void *p) {
      typedef vector<gbl::GblData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<gbl::GblData>

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
  void TriggerDictionaryInitialization_G__GenFitmImasterDict_Impl() {
    static const char* headers[] = {
"./eventDisplay/include/EventDisplay.h",
"./core/include/AbsFinitePlane.h",
"./core/include/AbsFitterInfo.h",
"./core/include/AbsTrackRep.h",
"./core/include/Exception.h",
"./core/include/FitStatus.h",
"./core/include/Material.h",
"./core/include/MeasurementOnPlane.h",
"./core/include/ThinScatterer.h",
"./core/include/TrackCand.h",
"./core/include/Track.h",
"./core/include/AbsFitter.h",
"./core/include/AbsMeasurement.h",
"./core/include/DetPlane.h",
"./core/include/FieldManager.h",
"./core/include/IO.h",
"./core/include/MeasuredStateOnPlane.h",
"./core/include/StateOnPlane.h",
"./core/include/Tools.h",
"./core/include/TrackCandHit.h",
"./core/include/TrackPoint.h",
"./finitePlanes/include/RectangularFinitePlane.h",
"./trackReps/include/MaterialEffects.h",
"./trackReps/include/MplTrackRep.h",
"./trackReps/include/RKTools.h",
"./trackReps/include/RKTrackRep.h",
"./trackReps/include/StepLimits.h",
"./trackReps/include/TGeoMaterialInterface.h",
"./measurements/include/FullMeasurement.h",
"./measurements/include/HMatrixU.h",
"./measurements/include/HMatrixUV.h",
"./measurements/include/ProlateSpacepointMeasurement.h",
"./measurements/include/WireMeasurement.h",
"./measurements/include/WirePointMeasurement.h",
"./measurements/include/HMatrixPhi.h",
"./measurements/include/HMatrixUnit.h",
"./measurements/include/HMatrixV.h",
"./measurements/include/PlanarMeasurement.h",
"./measurements/include/SpacepointMeasurement.h",
"./measurements/include/WireMeasurementNew.h",
"./measurements/include/WireTrackCandHit.h",
"./fitters/include/KalmanFitter.h",
"./fitters/include/KalmanFitterInfo.h",
"./fitters/include/AbsKalmanFitter.h",
"./fitters/include/KalmanFitterRefTrack.h",
"./fitters/include/DAF.h",
"./fitters/include/KalmanFitStatus.h",
"./fitters/include/KalmanFittedStateOnPlane.h",
"./fitters/include/ReferenceStateOnPlane.h",
"./fields/include/ConstField.h",
"./GBL/include/BorderedBandMatrix.h",
"./GBL/include/GblData.h",
"./GBL/include/GblFitter.h",
"./GBL/include/GblFitterInfo.h",
"./GBL/include/GblPoint.h",
"./GBL/include/GblTrajectory.h",
"./GBL/include/GFGbl.h",
"./GBL/include/MilleBinary.h",
"./GBL/include/VMatrix.h",
"./utilities/include/HelixTrackModel.h",
"./utilities/include/MeasurementCreator.h",
"./utilities/include/mySpacepointMeasurement.h",
"./utilities/include/mySpacepointDetectorHit.h",
0
    };
    static const char* includePaths[] = {
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/core/include",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/eventDisplay/include",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/fields/include",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/finitePlanes/include",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/fitters/include",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/GBL/include",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/GFRave/include",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/measurements/include",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/trackReps/include",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/utilities/include",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/RaveInterface",
"/home/eicc/FairRoot/build_18.4.2/include",
"/home/eicc/software/FairSoft/install/include/root",
"/home/eicc/software/FairSoft/install/include",
"/home/eicc/software/FairSoft/install/lib/CLHEP-2.4.1.3/../../include",
"/home/eicc/software/FairSoft/install/include/root",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/GenFit-master/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__GenFitmImasterDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genfit{class __attribute__((annotate("$clingAutoload$TrackPoint.h")))  __attribute__((annotate("$clingAutoload$./eventDisplay/include/EventDisplay.h")))  TrackPoint;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace gbl{class __attribute__((annotate("$clingAutoload$./GBL/include/GblData.h")))  GblData;}
namespace genfit{class __attribute__((annotate("$clingAutoload$AbsFinitePlane.h")))  __attribute__((annotate("$clingAutoload$./eventDisplay/include/EventDisplay.h")))  AbsFinitePlane;}
namespace genfit{class __attribute__((annotate("$clingAutoload$DetPlane.h")))  __attribute__((annotate("$clingAutoload$./eventDisplay/include/EventDisplay.h")))  DetPlane;}
namespace genfit{class __attribute__((annotate("$clingAutoload$SharedPlanePtr.h")))  __attribute__((annotate("$clingAutoload$./eventDisplay/include/EventDisplay.h")))  SharedPlanePtrCreator;}
namespace genfit{struct __attribute__((annotate("$clingAutoload$Material.h")))  __attribute__((annotate("$clingAutoload$./eventDisplay/include/EventDisplay.h")))  Material;}
namespace genfit{class __attribute__((annotate("$clingAutoload$AbsTrackRep.h")))  __attribute__((annotate("$clingAutoload$./eventDisplay/include/EventDisplay.h")))  AbsTrackRep;}
namespace genfit{struct __attribute__((annotate("$clingAutoload$FitStatus.h")))  __attribute__((annotate("$clingAutoload$./eventDisplay/include/EventDisplay.h")))  PruneFlags;}
namespace genfit{class __attribute__((annotate("$clingAutoload$FitStatus.h")))  __attribute__((annotate("$clingAutoload$./eventDisplay/include/EventDisplay.h")))  FitStatus;}
namespace genfit{class __attribute__((annotate("$clingAutoload$TrackCandHit.h")))  __attribute__((annotate("$clingAutoload$./eventDisplay/include/EventDisplay.h")))  TrackCandHit;}
namespace genfit{class __attribute__((annotate("$clingAutoload$TrackCand.h")))  __attribute__((annotate("$clingAutoload$./eventDisplay/include/EventDisplay.h")))  TrackCand;}
namespace genfit{class __attribute__((annotate("$clingAutoload$StateOnPlane.h")))  __attribute__((annotate("$clingAutoload$./eventDisplay/include/EventDisplay.h")))  StateOnPlane;}
namespace genfit{class __attribute__((annotate("$clingAutoload$MeasuredStateOnPlane.h")))  __attribute__((annotate("$clingAutoload$./eventDisplay/include/EventDisplay.h")))  MeasuredStateOnPlane;}
namespace genfit{class __attribute__((annotate("$clingAutoload$AbsHMatrix.h")))  __attribute__((annotate("$clingAutoload$./eventDisplay/include/EventDisplay.h")))  AbsHMatrix;}
namespace genfit{class __attribute__((annotate("$clingAutoload$MeasurementOnPlane.h")))  __attribute__((annotate("$clingAutoload$./eventDisplay/include/EventDisplay.h")))  MeasurementOnPlane;}
namespace genfit{class __attribute__((annotate("$clingAutoload$AbsMeasurement.h")))  __attribute__((annotate("$clingAutoload$./eventDisplay/include/EventDisplay.h")))  AbsMeasurement;}
namespace genfit{class __attribute__((annotate("$clingAutoload$AbsFitterInfo.h")))  __attribute__((annotate("$clingAutoload$./eventDisplay/include/EventDisplay.h")))  AbsFitterInfo;}
namespace genfit{class __attribute__((annotate("$clingAutoload$ThinScatterer.h")))  __attribute__((annotate("$clingAutoload$./eventDisplay/include/EventDisplay.h")))  ThinScatterer;}
namespace genfit{class __attribute__((annotate("$clingAutoload$Track.h")))  __attribute__((annotate("$clingAutoload$./eventDisplay/include/EventDisplay.h")))  Track;}
namespace genfit{class __attribute__((annotate("$clingAutoload$AbsKalmanFitter.h")))  __attribute__((annotate("$clingAutoload$./eventDisplay/include/EventDisplay.h")))  AbsKalmanFitter;}
namespace genfit{class __attribute__((annotate("$clingAutoload$./eventDisplay/include/EventDisplay.h")))  EventDisplay;}
namespace genfit{class __attribute__((annotate("$clingAutoload$./finitePlanes/include/RectangularFinitePlane.h")))  RectangularFinitePlane;}
namespace genfit{class __attribute__((annotate("$clingAutoload$RKTrackRep.h")))  __attribute__((annotate("$clingAutoload$./trackReps/include/MaterialEffects.h")))  RKTrackRep;}
namespace genfit{class __attribute__((annotate("$clingAutoload$./trackReps/include/MplTrackRep.h")))  MplTrackRep;}
namespace genfit{class __attribute__((annotate("$clingAutoload$./measurements/include/FullMeasurement.h")))  FullMeasurement;}
namespace genfit{class __attribute__((annotate("$clingAutoload$./measurements/include/HMatrixU.h")))  HMatrixU;}
namespace genfit{class __attribute__((annotate("$clingAutoload$./measurements/include/HMatrixUV.h")))  HMatrixUV;}
namespace genfit{class __attribute__((annotate("$clingAutoload$SpacepointMeasurement.h")))  __attribute__((annotate("$clingAutoload$./measurements/include/ProlateSpacepointMeasurement.h")))  SpacepointMeasurement;}
namespace genfit{class __attribute__((annotate("$clingAutoload$./measurements/include/ProlateSpacepointMeasurement.h")))  ProlateSpacepointMeasurement;}
namespace genfit{class __attribute__((annotate("$clingAutoload$./measurements/include/WireMeasurement.h")))  WireMeasurement;}
namespace genfit{class __attribute__((annotate("$clingAutoload$./measurements/include/WirePointMeasurement.h")))  WirePointMeasurement;}
namespace genfit{class __attribute__((annotate("$clingAutoload$./measurements/include/HMatrixPhi.h")))  HMatrixPhi;}
namespace genfit{class __attribute__((annotate("$clingAutoload$./measurements/include/HMatrixUnit.h")))  HMatrixUnit;}
namespace genfit{class __attribute__((annotate("$clingAutoload$./measurements/include/HMatrixV.h")))  HMatrixV;}
namespace genfit{class __attribute__((annotate("$clingAutoload$./measurements/include/PlanarMeasurement.h")))  PlanarMeasurement;}
namespace genfit{class __attribute__((annotate("$clingAutoload$./measurements/include/WireMeasurementNew.h")))  WireMeasurementNew;}
namespace genfit{class __attribute__((annotate("$clingAutoload$./measurements/include/WireTrackCandHit.h")))  WireTrackCandHit;}
namespace genfit{class __attribute__((annotate("$clingAutoload$./fitters/include/KalmanFitter.h")))  KalmanFitter;}
namespace genfit{class __attribute__((annotate("$clingAutoload$KalmanFittedStateOnPlane.h")))  __attribute__((annotate("$clingAutoload$./fitters/include/KalmanFitterInfo.h")))  KalmanFittedStateOnPlane;}
namespace genfit{class __attribute__((annotate("$clingAutoload$ReferenceStateOnPlane.h")))  __attribute__((annotate("$clingAutoload$./fitters/include/KalmanFitterInfo.h")))  ReferenceStateOnPlane;}
namespace genfit{class __attribute__((annotate("$clingAutoload$./fitters/include/KalmanFitterInfo.h")))  KalmanFitterInfo;}
namespace genfit{class __attribute__((annotate("$clingAutoload$./fitters/include/KalmanFitterRefTrack.h")))  KalmanFitterRefTrack;}
namespace genfit{class __attribute__((annotate("$clingAutoload$./fitters/include/DAF.h")))  DAF;}
namespace genfit{class __attribute__((annotate("$clingAutoload$./fitters/include/KalmanFitStatus.h")))  KalmanFitStatus;}
namespace genfit{class __attribute__((annotate("$clingAutoload$ICalibrationParametersDerivatives.h")))  __attribute__((annotate("$clingAutoload$./GBL/include/GblFitter.h")))  ICalibrationParametersDerivatives;}
namespace genfit{class __attribute__((annotate("$clingAutoload$GblFitterInfo.h")))  __attribute__((annotate("$clingAutoload$./GBL/include/GblFitter.h")))  GblFitterInfo;}
namespace genfit{class __attribute__((annotate("$clingAutoload$GblFitStatus.h")))  __attribute__((annotate("$clingAutoload$./GBL/include/GblFitter.h")))  GblFitStatus;}
namespace genfit{class __attribute__((annotate("$clingAutoload$GblTrackSegmentController.h")))  __attribute__((annotate("$clingAutoload$./GBL/include/GblFitter.h")))  GblTrackSegmentController;}
namespace genfit{class __attribute__((annotate("$clingAutoload$./GBL/include/GblFitter.h")))  GblFitter;}
namespace genfit{class __attribute__((annotate("$clingAutoload$./GBL/include/GFGbl.h")))  GFGbl;}
namespace genfit{class __attribute__((annotate("$clingAutoload$./utilities/include/HelixTrackModel.h")))  HelixTrackModel;}
namespace genfit{class __attribute__((annotate("$clingAutoload$./utilities/include/MeasurementCreator.h")))  MeasurementCreator;}
namespace genfit{class __attribute__((annotate("$clingAutoload$mySpacepointDetectorHit.h")))  __attribute__((annotate("$clingAutoload$./utilities/include/mySpacepointMeasurement.h")))  mySpacepointDetectorHit;}
namespace genfit{class __attribute__((annotate("$clingAutoload$./utilities/include/mySpacepointMeasurement.h")))  mySpacepointMeasurement;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__GenFitmImasterDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "./eventDisplay/include/EventDisplay.h"
#include "./core/include/AbsFinitePlane.h"
#include "./core/include/AbsFitterInfo.h"
#include "./core/include/AbsTrackRep.h"
#include "./core/include/Exception.h"
#include "./core/include/FitStatus.h"
#include "./core/include/Material.h"
#include "./core/include/MeasurementOnPlane.h"
#include "./core/include/ThinScatterer.h"
#include "./core/include/TrackCand.h"
#include "./core/include/Track.h"
#include "./core/include/AbsFitter.h"
#include "./core/include/AbsMeasurement.h"
#include "./core/include/DetPlane.h"
#include "./core/include/FieldManager.h"
#include "./core/include/IO.h"
#include "./core/include/MeasuredStateOnPlane.h"
#include "./core/include/StateOnPlane.h"
#include "./core/include/Tools.h"
#include "./core/include/TrackCandHit.h"
#include "./core/include/TrackPoint.h"
#include "./finitePlanes/include/RectangularFinitePlane.h"
#include "./trackReps/include/MaterialEffects.h"
#include "./trackReps/include/MplTrackRep.h"
#include "./trackReps/include/RKTools.h"
#include "./trackReps/include/RKTrackRep.h"
#include "./trackReps/include/StepLimits.h"
#include "./trackReps/include/TGeoMaterialInterface.h"
#include "./measurements/include/FullMeasurement.h"
#include "./measurements/include/HMatrixU.h"
#include "./measurements/include/HMatrixUV.h"
#include "./measurements/include/ProlateSpacepointMeasurement.h"
#include "./measurements/include/WireMeasurement.h"
#include "./measurements/include/WirePointMeasurement.h"
#include "./measurements/include/HMatrixPhi.h"
#include "./measurements/include/HMatrixUnit.h"
#include "./measurements/include/HMatrixV.h"
#include "./measurements/include/PlanarMeasurement.h"
#include "./measurements/include/SpacepointMeasurement.h"
#include "./measurements/include/WireMeasurementNew.h"
#include "./measurements/include/WireTrackCandHit.h"
#include "./fitters/include/KalmanFitter.h"
#include "./fitters/include/KalmanFitterInfo.h"
#include "./fitters/include/AbsKalmanFitter.h"
#include "./fitters/include/KalmanFitterRefTrack.h"
#include "./fitters/include/DAF.h"
#include "./fitters/include/KalmanFitStatus.h"
#include "./fitters/include/KalmanFittedStateOnPlane.h"
#include "./fitters/include/ReferenceStateOnPlane.h"
#include "./fields/include/ConstField.h"
#include "./GBL/include/BorderedBandMatrix.h"
#include "./GBL/include/GblData.h"
#include "./GBL/include/GblFitter.h"
#include "./GBL/include/GblFitterInfo.h"
#include "./GBL/include/GblPoint.h"
#include "./GBL/include/GblTrajectory.h"
#include "./GBL/include/GFGbl.h"
#include "./GBL/include/MilleBinary.h"
#include "./GBL/include/VMatrix.h"
#include "./utilities/include/HelixTrackModel.h"
#include "./utilities/include/MeasurementCreator.h"
#include "./utilities/include/mySpacepointMeasurement.h"
#include "./utilities/include/mySpacepointDetectorHit.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"gbl::GblData", payloadCode, "@",
"genfit::AbsFinitePlane", payloadCode, "@",
"genfit::AbsFitterInfo", payloadCode, "@",
"genfit::AbsHMatrix", payloadCode, "@",
"genfit::AbsKalmanFitter", payloadCode, "@",
"genfit::AbsMeasurement", payloadCode, "@",
"genfit::AbsTrackRep", payloadCode, "@",
"genfit::DAF", payloadCode, "@",
"genfit::DetPlane", payloadCode, "@",
"genfit::EventDisplay", payloadCode, "@",
"genfit::FitStatus", payloadCode, "@",
"genfit::FullMeasurement", payloadCode, "@",
"genfit::GFGbl", payloadCode, "@",
"genfit::GblFitStatus", payloadCode, "@",
"genfit::GblFitter", payloadCode, "@",
"genfit::GblFitterInfo", payloadCode, "@",
"genfit::GblTrackSegmentController", payloadCode, "@",
"genfit::HMatrixPhi", payloadCode, "@",
"genfit::HMatrixU", payloadCode, "@",
"genfit::HMatrixUV", payloadCode, "@",
"genfit::HMatrixUnit", payloadCode, "@",
"genfit::HMatrixV", payloadCode, "@",
"genfit::HelixTrackModel", payloadCode, "@",
"genfit::ICalibrationParametersDerivatives", payloadCode, "@",
"genfit::KalmanFitStatus", payloadCode, "@",
"genfit::KalmanFittedStateOnPlane", payloadCode, "@",
"genfit::KalmanFitter", payloadCode, "@",
"genfit::KalmanFitterInfo", payloadCode, "@",
"genfit::KalmanFitterRefTrack", payloadCode, "@",
"genfit::Material", payloadCode, "@",
"genfit::MeasuredStateOnPlane", payloadCode, "@",
"genfit::MeasurementCreator", payloadCode, "@",
"genfit::MeasurementOnPlane", payloadCode, "@",
"genfit::MplTrackRep", payloadCode, "@",
"genfit::PlanarMeasurement", payloadCode, "@",
"genfit::ProlateSpacepointMeasurement", payloadCode, "@",
"genfit::PruneFlags", payloadCode, "@",
"genfit::RKTrackRep", payloadCode, "@",
"genfit::RectangularFinitePlane", payloadCode, "@",
"genfit::ReferenceStateOnPlane", payloadCode, "@",
"genfit::SharedPlanePtrCreator", payloadCode, "@",
"genfit::SpacepointMeasurement", payloadCode, "@",
"genfit::StateOnPlane", payloadCode, "@",
"genfit::ThinScatterer", payloadCode, "@",
"genfit::Track", payloadCode, "@",
"genfit::TrackCand", payloadCode, "@",
"genfit::TrackCandHit", payloadCode, "@",
"genfit::TrackPoint", payloadCode, "@",
"genfit::WireMeasurement", payloadCode, "@",
"genfit::WireMeasurementNew", payloadCode, "@",
"genfit::WirePointMeasurement", payloadCode, "@",
"genfit::WireTrackCandHit", payloadCode, "@",
"genfit::mySpacepointDetectorHit", payloadCode, "@",
"genfit::mySpacepointMeasurement", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__GenFit-masterDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__GenFitmImasterDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__GenFitmImasterDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__GenFitmImasterDict() {
  TriggerDictionaryInitialization_G__GenFitmImasterDict_Impl();
}
