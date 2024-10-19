// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIliangytdIEiccRootdIGenFitmImasterdIGenFitmImasterdIbuilddImeasurementsRootDict
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
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/measurements/include/HMatrixPhi.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/measurements/include/HMatrixU.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/measurements/include/HMatrixUnit.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/measurements/include/HMatrixV.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/measurements/include/HMatrixUV.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/measurements/include/FullMeasurement.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/measurements/include/PlanarMeasurement.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/measurements/include/ProlateSpacepointMeasurement.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/measurements/include/SpacepointMeasurement.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/measurements/include/WireMeasurement.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/measurements/include/WireMeasurementNew.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/measurements/include/WirePointMeasurement.h"
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/measurements/include/WireTrackCandHit.h"

// Header files passed via #pragma extra_include

namespace genfit {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *genfit_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("genfit", 0 /*version*/, "AbsHMatrix.h", 31,
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
         instance("genfit::HMatrixPhi", ::genfit::HMatrixPhi::Class_Version(), "", 39,
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
         instance("genfit::HMatrixU", ::genfit::HMatrixU::Class_Version(), "", 111,
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
         instance("genfit::HMatrixUnit", ::genfit::HMatrixUnit::Class_Version(), "", 180,
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
         instance("genfit::HMatrixV", ::genfit::HMatrixV::Class_Version(), "", 246,
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
         instance("genfit::HMatrixUV", ::genfit::HMatrixUV::Class_Version(), "", 314,
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
         instance("genfit::FullMeasurement", ::genfit::FullMeasurement::Class_Version(), "", 387,
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
         instance("genfit::PlanarMeasurement", ::genfit::PlanarMeasurement::Class_Version(), "", 460,
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
         instance("genfit::ProlateSpacepointMeasurement", ::genfit::ProlateSpacepointMeasurement::Class_Version(), "", 549,
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
         instance("genfit::WireMeasurement", ::genfit::WireMeasurement::Class_Version(), "", 727,
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
         instance("genfit::WireMeasurementNew", ::genfit::WireMeasurementNew::Class_Version(), "", 841,
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
         instance("genfit::WirePointMeasurement", ::genfit::WirePointMeasurement::Class_Version(), "", 956,
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
         instance("genfit::WireTrackCandHit", ::genfit::WireTrackCandHit::Class_Version(), "", 1017,
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

namespace {
  void TriggerDictionaryInitialization_measurementsRootDict_Impl() {
    static const char* headers[] = {
"0",
0
    };
    static const char* includePaths[] = {
"/home/liangyt/EiccRoot/GenFit-master/GenFit-master/core/include",
"/home/liangyt/EiccRoot/GenFit-master/GenFit-master/measurements/include",
"/home/eicc/software/FairSoft/install/include/root",
"/home/liangyt/EiccRoot/GenFit-master/GenFit-master/build/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "measurementsRootDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genfit{class HMatrixPhi;}
namespace genfit{class HMatrixU;}
namespace genfit{class HMatrixUnit;}
namespace genfit{class HMatrixV;}
namespace genfit{class HMatrixUV;}
namespace genfit{class FullMeasurement;}
namespace genfit{class PlanarMeasurement;}
namespace genfit{class __attribute__((annotate("$clingAutoload$SpacepointMeasurement.h")))  SpacepointMeasurement;}
namespace genfit{class ProlateSpacepointMeasurement;}
namespace genfit{class WireMeasurement;}
namespace genfit{class WireMeasurementNew;}
namespace genfit{class WirePointMeasurement;}
namespace genfit{class WireTrackCandHit;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "measurementsRootDict dictionary payload"


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
/** @addtogroup genfit
 * @{
 */

#ifndef genfit_HMatrixPhi_h
#define genfit_HMatrixPhi_h

#include "AbsHMatrix.h"


namespace genfit {

/**
 * @brief AbsHMatrix implementation for one-dimensional MeasurementOnPlane and RKTrackRep parameterization.
 *
 * For one dimensional measurements which are rotated by phi against U of the DetPlane
 * H = (0, 0, 0, cos(phi), sin(phi))
 */
class HMatrixPhi : public AbsHMatrix {

 public:

  HMatrixPhi(double phi = 0);

  const TMatrixD& getMatrix() const;

  TVectorD Hv(const TVectorD& v) const;

  TMatrixD MHt(const TMatrixDSym& M) const;
  TMatrixD MHt(const TMatrixD& M) const;

  void HMHt(TMatrixDSym& M) const;

  virtual HMatrixPhi* clone() const {return new HMatrixPhi(*this);}

  virtual bool isEqual(const AbsHMatrix& other) const;

  virtual void Print(const Option_t* = "") const;

  ClassDef(HMatrixPhi,1)

 private:

  double phi_;
  double cosPhi_; //!
  double sinPhi_; //!

};

} /* End of namespace genfit */
/** @} */

#endif // genfit_HMatrixPhi_h
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

#ifndef genfit_HMatrixU_h
#define genfit_HMatrixU_h

#include "AbsHMatrix.h"


namespace genfit {

/**
 * @brief AbsHMatrix implementation for one-dimensional MeasurementOnPlane and RKTrackRep parameterization.
 *
 * This projects out u.
 * H = (0, 0, 0, 1, 0)
 */
class HMatrixU : public AbsHMatrix {

 public:

  HMatrixU() {;}

  const TMatrixD& getMatrix() const override;

  TVectorD Hv(const TVectorD& v) const override;

  TMatrixD MHt(const TMatrixDSym& M) const override;
  TMatrixD MHt(const TMatrixD& M) const override;

  void HMHt(TMatrixDSym& M) const override;

  virtual HMatrixU* clone() const override {return new HMatrixU(*this);}

  virtual bool isEqual(const AbsHMatrix& other) const override {return (dynamic_cast<const HMatrixU*>(&other) != nullptr);}

  virtual void Print(const Option_t* = "") const override;

  ClassDefOverride(HMatrixU,1)

};

} /* End of namespace genfit */
/** @} */

#endif // genfit_HMatrixU_h
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

#ifndef genfit_HMatrixUnit_h
#define genfit_HMatrixUnit_h

#include "AbsHMatrix.h"


namespace genfit {

/**
 * @brief AbsHMatrix implementation for 5-dimensional MeasurementOnPlane and RKTrackRep parameterization.
 *
 * H = (1, 0, 0, 0, 0)
 *     (0, 1, 0, 0, 0)
 *     (0, 0, 1, 0, 0)
 *     (0, 0, 0, 1, 0)
 *     (0, 0, 0, 0, 1)
 */
class HMatrixUnit : public AbsHMatrix {

 public:

  HMatrixUnit() {;}

  const TMatrixD& getMatrix() const;

  TVectorD Hv(const TVectorD& v) const {return v;}

  TMatrixD MHt(const TMatrixDSym& M) const {return TMatrixD(M);}
  TMatrixD MHt(const TMatrixD& M) const {return M;}

  void HMHt(TMatrixDSym&) const {return;}

  virtual HMatrixUnit* clone() const {return new HMatrixUnit(*this);}

  virtual bool isEqual(const AbsHMatrix& other) const {return (dynamic_cast<const HMatrixUnit*>(&other) != nullptr);}

  virtual void Print(const Option_t* = "") const;

  ClassDef(HMatrixUnit,1)

};

} /* End of namespace genfit */
/** @} */

#endif // genfit_HMatrixUnit_h
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

#ifndef genfit_HMatrixV_h
#define genfit_HMatrixV_h

#include "AbsHMatrix.h"


namespace genfit {

/**
 * @brief AbsHMatrix implementation for one-dimensional MeasurementOnPlane and RKTrackRep parameterization.
 *
 * This projects out v.
 * H = (0, 0, 0, 0, 1)
 */
class HMatrixV : public AbsHMatrix {

 public:

  HMatrixV() {;}

  const TMatrixD& getMatrix() const override;

  TVectorD Hv(const TVectorD& v) const override;

  TMatrixD MHt(const TMatrixDSym& M) const override;
  TMatrixD MHt(const TMatrixD& M) const override;

  void HMHt(TMatrixDSym& M) const override;

  virtual HMatrixV* clone() const override {return new HMatrixV(*this);}

  virtual bool isEqual(const AbsHMatrix& other) const override {return (dynamic_cast<const HMatrixV*>(&other) != nullptr);}

  virtual void Print(const Option_t* = "") const override;

  ClassDefOverride(HMatrixV,1)

};

} /* End of namespace genfit */
/** @} */

#endif // genfit_HMatrixV_h
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

#ifndef genfit_HMatrixUV_h
#define genfit_HMatrixUV_h

#include "AbsHMatrix.h"


namespace genfit {

/**
 * @brief AbsHMatrix implementation for two-dimensional MeasurementOnPlane and RKTrackRep parameterization.
 *
 * This projects out u and v.
 * H = (0, 0, 0, 1, 0)
 *     (0, 0, 0, 0, 1)
 *
 */
class HMatrixUV : public AbsHMatrix {


 public:

  HMatrixUV() {;}

  const TMatrixD& getMatrix() const override;

  TVectorD Hv(const TVectorD& v) const override;

  TMatrixD MHt(const TMatrixDSym& M) const override;
  TMatrixD MHt(const TMatrixD& M) const override;

  void HMHt(TMatrixDSym& M) const override;

  virtual HMatrixUV* clone() const override {return new HMatrixUV(*this);}

  virtual bool isEqual(const AbsHMatrix& other) const override {return (dynamic_cast<const HMatrixUV*>(&other) != nullptr);}

  virtual void Print(const Option_t* = "") const override;

  ClassDefOverride(HMatrixUV,1)

};

} /* End of namespace genfit */
/** @} */


#endif // genfit_HMatrixUV_h
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

#ifndef genfit_FullMeasurement_h
#define genfit_FullMeasurement_h

#include "AbsMeasurement.h"
#include "AbsHMatrix.h"
#include "MeasurementOnPlane.h"


namespace genfit {

class AbsTrackRep;

/** @brief Measurement class implementing a measurement of all track parameters.
 *
 *  @author Johannes Rauch  (Technische Universit&auml;t M&uuml;nchen, original author)
 *
 * This class can e.g. be used, if the fitted track parameters measured in one subdetector should be
 * put into one "measurement".
 */
class FullMeasurement : public AbsMeasurement {

 public:
  FullMeasurement(int nDim = 5);
  FullMeasurement(const MeasuredStateOnPlane&, int detId = -1, int hitId = -1, TrackPoint* trackPoint = nullptr);

  virtual ~FullMeasurement() {;}

  virtual AbsMeasurement* clone() const override {return new FullMeasurement(*this);}

  virtual SharedPlanePtr constructPlane(const StateOnPlane& state) const override;

  virtual std::vector<MeasurementOnPlane*> constructMeasurementsOnPlane(const StateOnPlane& state) const override;

  virtual const AbsHMatrix* constructHMatrix(const AbsTrackRep*) const override;

 protected:
  SharedPlanePtr plane_;   //! This is persistent, but '!' makes ROOT shut up.

 public:

  ClassDefOverride(FullMeasurement,1)

};

} /* End of namespace genfit */
/** @} */

#endif // genfit_FullMeasurement_h
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

#ifndef genfit_PlanarMeasurement_h
#define genfit_PlanarMeasurement_h

#include "AbsMeasurement.h"
#include "AbsHMatrix.h"
#include "MeasurementOnPlane.h"


namespace genfit {

class AbsTrackRep;

/** @brief Measurement class implementing a planar hit geometry (1 or 2D).
 *
 *  @author Christian H&ouml;ppner (Technische Universit&auml;t M&uuml;nchen, original author)
 *  @author Sebastian Neubert  (Technische Universit&auml;t M&uuml;nchen, original author)
 *  @author Johannes Rauch  (Technische Universit&auml;t M&uuml;nchen, original author)
 *
 * The main feature of this type of hit is, that the detector plane
 * is defined by the detector hardware. 
 */
class PlanarMeasurement : public AbsMeasurement {

 public:
  PlanarMeasurement(int nDim = 1);
  PlanarMeasurement(const TVectorD& rawHitCoords, const TMatrixDSym& rawHitCov, int detId, int hitId, TrackPoint* trackPoint);

  virtual ~PlanarMeasurement() {;}

  virtual AbsMeasurement* clone() const override {return new PlanarMeasurement(*this);}

  int getPlaneId() const {return planeId_;}

  virtual SharedPlanePtr constructPlane(const StateOnPlane& state) const override;

  virtual std::vector<MeasurementOnPlane*> constructMeasurementsOnPlane(const StateOnPlane& state) const override;

  virtual const AbsHMatrix* constructHMatrix(const AbsTrackRep*) const override;

  virtual void setPlane(const SharedPlanePtr& physicalPlane, int planeId = -1) {physicalPlane_ = physicalPlane; planeId_ = planeId;}

  /** @brief Use if the coordinate for 1D hits measured in V direction.
   *
   * Per default for 1D planar hits, the coordinate is measured in U direction.
   * With this function you can set it to be measured in V direction.
   * This affects the outcoe of constructHMatrix().
   */
  void setStripV(bool v = true) {stripV_ = v;}

 protected:
  SharedPlanePtr physicalPlane_;   //! This is persistent, but '!' makes ROOT shut up.
  int planeId_; // planeId id is -1 per default
  bool stripV_;

 public:

  ClassDefOverride(PlanarMeasurement,1)

};

} /* End of namespace genfit */
/** @} */

#endif // genfit_PlanarMeasurement_h
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

#ifndef genfit_ProlateSpacepointMeasurement_h
#define genfit_ProlateSpacepointMeasurement_h

#include "SpacepointMeasurement.h"


namespace genfit {

/** @brief Class for measurements implementing a space point hit geometry with a very prolate
 * form of the covariance matrix.
 *
 *  @author Johannes Rauch (Technische Universit&auml;t M&uuml;nchen, original author)
 *
 * Measurements from detectors measuring 3D space points with errors in one direction
 * much larger than the errors perpendicular should use this class.
 *
 * For these hits, a virtual detector plane lying in the POCA and
 * perpendicular to the track yields wrong results. Instead, the plane should contain the
 * direction of the largest error.
 *
 * The largest error direction can be set. Standard is in z.
 *
 */
class ProlateSpacepointMeasurement : public SpacepointMeasurement {

 public:
  ProlateSpacepointMeasurement(int nDim = 3);
  ProlateSpacepointMeasurement(const TVectorD& rawHitCoords, const TMatrixDSym& rawHitCov, int detId, int hitId, TrackPoint* trackPoint);

  virtual ~ProlateSpacepointMeasurement() {;}

  virtual AbsMeasurement* clone() const {return new ProlateSpacepointMeasurement(*this);}

  virtual SharedPlanePtr constructPlane(const StateOnPlane& state) const;


  const TVector3& getLargestErrorDirection(){return largestErrorDirection_;}
  void setLargestErrorDirection(const TVector3& dir){largestErrorDirection_ = dir.Unit();}

 protected:
  TVector3 largestErrorDirection_; // direction of largest error

 public:

  ClassDef(ProlateSpacepointMeasurement,1)

};

} /* End of namespace genfit */
/** @} */

#endif // genfit_ProlateSpacepointMeasurement_h
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

#ifndef genfit_SpacepointMeasurement_h
#define genfit_SpacepointMeasurement_h

#include "AbsMeasurement.h"
#include "AbsHMatrix.h"


namespace genfit {

/** @brief Class for measurements implementing a space point hit geometry.
 *
 *  @author Christian H&ouml;ppner (Technische Universit&auml;t M&uuml;nchen, original author)
 *  @author Sebastian Neubert  (Technische Universit&auml;t M&uuml;nchen, original author)
 *  @author Johannes Rauch  (Technische Universit&auml;t M&uuml;nchen, original author)
 *
 * For a space point the detector plane has to be defined with respect to
 * a track representation. SpacepointMeasurement implements a scheme where the
 * detectorplane is chosen perpendicular to the track.
 * In a track fit, only two of the three coordinates of a space point are
 * independent (the track is a one-dimensional object). Therefore the 3D
 * data of the hit is used to define a proper detector plane into which the
 * hit coordinates are then projected.
 */
class SpacepointMeasurement : public AbsMeasurement {

 public:
  SpacepointMeasurement(int nDim = 3);
  SpacepointMeasurement(const TVectorD& rawHitCoords, const TMatrixDSym& rawHitCov, int detId, int hitId, TrackPoint* trackPoint,
      bool weightedPlaneContruction = true, bool cutCov = true);

  virtual ~SpacepointMeasurement() {;}

  virtual AbsMeasurement* clone() const override {return new SpacepointMeasurement(*this);}

  /**
   * @brief Contruct the virtual detector plane
   *
   * Per default, the plane will be constructed such that it contains the measurement and POCA to the measurement in cartesian space.
   * The plane is perpendicular to the track (at the POCA).
   *
   *  If weightedPlaneContruction_ is set, the POCA will be calculated in a space weighted with the inverse of the 3D covariance.
   *  E.g. if the covariance is very oblate, the plane will be almost defined by the covariance shape.
   *  If the covariance is very prolate, the behaviour will be very similar to the ProlateSpacepointHit.
   */
  virtual SharedPlanePtr constructPlane(const StateOnPlane& state) const override;

  virtual std::vector<MeasurementOnPlane*> constructMeasurementsOnPlane(const StateOnPlane& state) const override;

  virtual const AbsHMatrix* constructHMatrix(const AbsTrackRep*) const override;

  /// false: project 3D cov onto DetPlane. true: cut 3D cov with DetPlane
  bool getWeightedPlaneConstruction() const     { return weightedPlaneContruction_; }
  void setWeightedPlaneConstruction(bool value) { weightedPlaneContruction_ = value; }

  /// false: use POCA to construct DetPlane. true: Use metric G to construct POCA
  bool getCutCov() const     { return cutCov_; }
  void setCutCov(bool value) { cutCov_ = value; }

 protected:
  void initG();

 private:

  bool weightedPlaneContruction_; // false: use POCA to construct DetPlane. true: Use metric G to construct POCA (default)
  TMatrixDSym G_; //! inverse of 3x3 cov
  bool cutCov_; // false: project 3D cov onto DetPlane. true: cut 3D cov with DetPlane (default)

  ClassDefOverride(SpacepointMeasurement,3)
};

} /* End of namespace genfit */
/** @} */

#endif // genfit_SpacepointMeasurement_h
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

#ifndef genfit_WireMeasurement_h
#define genfit_WireMeasurement_h

#include "AbsMeasurement.h"
#include "AbsHMatrix.h"
#include "MeasurementOnPlane.h"


namespace genfit {

/** @brief Class for measurements in wire detectors (Straw tubes and drift chambers)
 *  which do not measure the coordinate along the wire.
 *
 *  @author Christian H&ouml;ppner (Technische Universit&auml;t M&uuml;nchen, original author)
 *  @author Lia Lavezzi (INFN Pavia, original author)
 *  @author Sebastian Neubert  (Technische Universit&auml;t M&uuml;nchen, original author)
 *  @author Johannes Rauch  (Technische Universit&auml;t M&uuml;nchen, original author)
 *
 * This hit class is not valid for any kind of plane orientation
 * choice: to use it you MUST choose a plane described by u
 * and v axes with v coincident with the wire (and u orthogonal
 * to it, obviously).
 * The hit will be described by 7 coordinates:
 * w_x1, w_y1, w_z1, w_x2, w_y2, w_z2, rdrift
 * where w_ji (with j = x, y, z and i = 1, 2) are the wire
 * extremities coordinates; rdrift = distance from the wire (u
 * coordinate in the plane)
 *
 */
class WireMeasurement : public AbsMeasurement {

 public:
  WireMeasurement(int nDim = 7);
  WireMeasurement(const TVectorD& rawHitCoords, const TMatrixDSym& rawHitCov, int detId, int hitId, TrackPoint* trackPoint);

  virtual ~WireMeasurement() {;}

  virtual AbsMeasurement* clone() const override {return new WireMeasurement(*this);}

  virtual SharedPlanePtr constructPlane(const StateOnPlane& state) const override;

  /**  Hits with a small drift distance get a higher weight, whereas hits with
    * big drift distances become weighted down.
    * When these initial weights are used by the DAF, the smoothed track will be closer to the real
    * trajectory than if both sides are weighted with 0.5 regardless of the drift distance.
    * This helps a lot when resolving l/r ambiguities with the DAF.
    * The idea is that for the first iteration of the DAF, the wire positions are taken.
    * For small drift radii, the wire position does not bend the fit away from the
    * trajectory, whereas the wire position for hits with large drift radii is further away
    * from the trajectory and will therefore bias the fit if not weighted down.
    */
  virtual std::vector<MeasurementOnPlane*> constructMeasurementsOnPlane(const StateOnPlane& state) const override;

  virtual const AbsHMatrix* constructHMatrix(const AbsTrackRep*) const override;

  /** Set maximum drift distance. This is used to calculate the start weights of the two
   * measurementsOnPlane.
   */
  void setMaxDistance(double d){maxDistance_ = d;}
  /**
   * select how to resolve the left/right ambiguity:
   * -1: negative (left) side on vector (track direction) x (wire direction)
   * 0: auto select (take side with smallest distance to track)
   * 1: positive (right) side on vector (track direction) x (wire direction)
   */
  void setLeftRightResolution(int lr);

  virtual bool isLeftRightMeasurement() const override {return true;}
  virtual int getLeftRightResolution() const override {return leftRight_;}

  double getMaxDistance(){return maxDistance_;}

 protected:

  double maxDistance_;
  signed char leftRight_;

 public:

  ClassDefOverride(WireMeasurement, 2)

};

} /* End of namespace genfit */
/** @} */

#endif // genfit_WireMeasurement_h
/* Copyright 2008-2010, Technische Universitaet Muenchen,
             2014 Ludwig-Maximimilians-Universität München
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
/** @addtogroup genfit
 * @{
 */

#ifndef genfit_WireMeasurementNew_h
#define genfit_WireMeasurementNew_h

#include "AbsMeasurement.h"
#include "AbsHMatrix.h"
#include "MeasurementOnPlane.h"


namespace genfit {

/** @brief Class for measurements in wire detectors (Straw tubes and drift chambers)
 *  which do not measure the coordinate along the wire.
 *
 *  @author Tobias Schlüter
 *
 * This is similar to WireMeasurement, but since WireMeasurement
 * stores a 7x7 covariance matrix for what is a one-dimensional
 * measurement, this class is preferable.  Protected inheritance of
 * rawHitCoords_ and rawHitCov_ makes it impossible to rewrite
 * WireMeasurement, as subclasses will access these members.
 *
 * This hit class is not valid for arbitrary choices of plane
 * orientation: to use it you MUST choose a plane described by u
 * and v axes with v coincident with the wire (and u orthogonal
 * to it, obviously).
 * The hit will be described by 7 coordinates:
 * w_x1, w_y1, w_z1, w_x2, w_y2, w_z2, rdrift
 * where w_ji (with j = x, y, z and i = 1, 2) are the wire
 * extremities coordinates; rdrift = distance from the wire (u
 * coordinate in the plane)
 *
 */
class WireMeasurementNew : public AbsMeasurement {

 public:
  WireMeasurementNew();
  WireMeasurementNew(double driftDistance, double driftDistanceError, const TVector3& endPoint1, const TVector3& endPoint2, int detId, int hitId, TrackPoint* trackPoint);

  virtual ~WireMeasurementNew() {;}

  virtual WireMeasurementNew* clone() const override {return new WireMeasurementNew(*this);}

  virtual SharedPlanePtr constructPlane(const StateOnPlane& state) const override;

  /**  Hits with a small drift distance get a higher weight, whereas hits with
    * big drift distances become weighted down.
    * When these initial weights are used by the DAF, the smoothed track will be closer to the real
    * trajectory than if both sides are weighted with 0.5 regardless of the drift distance.
    * This helps a lot when resolving l/r ambiguities with the DAF.
    * The idea is that for the first iteration of the DAF, the wire positions are taken.
    * For small drift radii, the wire position does not bend the fit away from the
    * trajectory, whereas the wire position for hits with large drift radii is further away
    * from the trajectory and will therefore bias the fit if not weighted down.
    */
  virtual std::vector<MeasurementOnPlane*> constructMeasurementsOnPlane(const StateOnPlane& state) const override;

  virtual const AbsHMatrix* constructHMatrix(const AbsTrackRep*) const override;

  /** Reset the wire end points.
   */
  void setWireEndPoints(const TVector3& endPoint1, const TVector3& endPoint2);

  /** Set maximum drift distance. This is used to calculate the start weights of the two
   * measurementsOnPlane.
   */
  void setMaxDistance(double d){maxDistance_ = d;}
  /**
   * select how to resolve the left/right ambiguity:
   * -1: negative (left) side on vector (wire direction) x (track direction)
   * 0: mirrors enter with same weight, DAF will decide.
   * 1: positive (right) side on vector (wire direction) x (track direction)
   * where the wire direction is pointing from endPoint1 to endPoint2
   */
  void setLeftRightResolution(int lr);

  virtual bool isLeftRigthMeasurement() const {return true;}
  double getMaxDistance(){return maxDistance_;}
  int getLeftRightResolution() const override {return leftRight_;}

 protected:

  double wireEndPoint1_[3]; //! Wire end point 1 (X, Y, Z)
  double wireEndPoint2_[3]; //! Wire end point 2 (X, Y, Z)
  double maxDistance_;
  double leftRight_;

 public:

  ClassDefOverride(WireMeasurementNew, 1)

};

} /* End of namespace genfit */
/** @} */

#endif // genfit_WireMeasurementNew_h
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

#ifndef genfit_WirePointMeasurement_h
#define genfit_WirePointMeasurement_h

#include "WireMeasurement.h"


namespace genfit {

/** @brief Class for measurements in wire detectors (Straw tubes and drift chambers)
 *  which can measure the coordinate along the wire
 *
 *  @author Christian H&ouml;ppner (Technische Universit&auml;t M&uuml;nchen, original author)
 *  @author Lia Lavezzi (INFN Pavia, original author)
 *  @author Sebastian Neubert  (Technische Universit&auml;t M&uuml;nchen, original author)
 *  @author Johannes Rauch  (Technische Universit&auml;t M&uuml;nchen, original author)
 *
 * This  is not valid for any kind of plane orientation
 * choice: to use it you MUST choose a plane described by u
 * and v axes with v coincident with the wire (and u orthogonal
 * to it, obviously).
 * The hit will be described by 8 coordinates:
 * w_x1, w_y1, w_z1, w_x2, w_y2, w_z2, rdrift, zreco
 * where w_ji (with j = x, y, z and i = 1, 2) are the wire
 * extremities coordinates; rdrift = distance from the wire (u
 * coordinate in the plane) and zreco = coordinate along the
 * wire (w2 -w1) (in the plane reference frame, v coordinate).
 *
 */
class WirePointMeasurement : public WireMeasurement {

 public:
  WirePointMeasurement(int nDim = 8);
  WirePointMeasurement(const TVectorD& rawHitCoords, const TMatrixDSym& rawHitCov, int detId, int hitId, TrackPoint* trackPoint);

  virtual ~WirePointMeasurement() {;}

  virtual AbsMeasurement* clone() const override {return new WirePointMeasurement(*this);}

  virtual SharedPlanePtr constructPlane(const StateOnPlane& state) const override;

  virtual std::vector<MeasurementOnPlane*> constructMeasurementsOnPlane(const StateOnPlane& state) const override;

  virtual const AbsHMatrix* constructHMatrix(const AbsTrackRep*) const override;


 public:

  ClassDefOverride(WirePointMeasurement,1)

};

} /* End of namespace genfit */
/** @} */

#endif // genfit_WirePointMeasurement_h
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

#ifndef genfit_WireTrackCandHit_h
#define genfit_WireTrackCandHit_h

#include "TrackCandHit.h"


namespace genfit {

/**
 * @brief Hit object for use in TrackCand. Provides additional left/right parameter.
 */
class WireTrackCandHit : public TrackCandHit {
 public:

  // Constructors/Destructors ---------
  WireTrackCandHit(int detId   = -1,
               int hitId   = -1,
               int planeId = -1,
               double sortingParameter  =  0.,
               char leftRight = 0);

  virtual ~WireTrackCandHit() {;}

  virtual WireTrackCandHit* clone() const override {return new WireTrackCandHit(*this);}

  // Accessors
  int getLeftRightResolution() const {return leftRight_;}

  // Modifiers
  /**
   * select how to resolve the left/right ambiguity:
   * -1: negative (left) side on vector (track direction) x (wire direction)
   * 0: auto select (take side with smallest distance to track)
   * 1: positive (right) side on vector (track direction) x (wire direction)
   */
  void setLeftRightResolution(int leftRight){
    if (leftRight==0) leftRight_ = 0;
    else if (leftRight<0) leftRight_ = -1;
    else leftRight_ = 1;
  }

  virtual void Print(Option_t* option = "") const override;


 protected:

  //! protect from calling copy c'tor from outside the class. Use #clone() if you want a copy!
  WireTrackCandHit(const WireTrackCandHit& other) :
    TrackCandHit(other), leftRight_(other.leftRight_) {;}
  //! protect from calling assignment operator from outside the class. Use #clone() instead!
  WireTrackCandHit& operator=(const WireTrackCandHit&);


  // Data Members ------------
  signed char leftRight_; // left/right ambiguity handling


 public:

  ClassDefOverride(WireTrackCandHit, 2)

};

} /* End of namespace genfit */
/** @} */

#endif // genfit_TrackCandHit_h

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genfit::FullMeasurement", payloadCode, "@",
"genfit::HMatrixPhi", payloadCode, "@",
"genfit::HMatrixU", payloadCode, "@",
"genfit::HMatrixUV", payloadCode, "@",
"genfit::HMatrixUnit", payloadCode, "@",
"genfit::HMatrixV", payloadCode, "@",
"genfit::PlanarMeasurement", payloadCode, "@",
"genfit::ProlateSpacepointMeasurement", payloadCode, "@",
"genfit::SpacepointMeasurement", payloadCode, "@",
"genfit::WireMeasurement", payloadCode, "@",
"genfit::WireMeasurementNew", payloadCode, "@",
"genfit::WirePointMeasurement", payloadCode, "@",
"genfit::WireTrackCandHit", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("measurementsRootDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_measurementsRootDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_measurementsRootDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_measurementsRootDict() {
  TriggerDictionaryInitialization_measurementsRootDict_Impl();
}
