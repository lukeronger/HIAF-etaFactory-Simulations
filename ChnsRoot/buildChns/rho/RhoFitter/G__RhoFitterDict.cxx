// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIhexhdIsimulationdIChnsRootdIbuildChnsdIrhodIRhoFitterdIG__RhoFitterDict
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
#include "Rho4CFitter.h"
#include "RhoKinVtxFitter.h"
#include "RhoKinFitter.h"
#include "RhoVtxPoca.h"
#include "RhoKalmanVtxFitter.h"
#include "RhoDecayTreeFitter.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_Rho4CFitter(void *p);
   static void deleteArray_Rho4CFitter(void *p);
   static void destruct_Rho4CFitter(void *p);
   static void streamer_Rho4CFitter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Rho4CFitter*)
   {
      ::Rho4CFitter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Rho4CFitter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Rho4CFitter", ::Rho4CFitter::Class_Version(), "Rho4CFitter.h", 20,
                  typeid(::Rho4CFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Rho4CFitter::Dictionary, isa_proxy, 16,
                  sizeof(::Rho4CFitter) );
      instance.SetDelete(&delete_Rho4CFitter);
      instance.SetDeleteArray(&deleteArray_Rho4CFitter);
      instance.SetDestructor(&destruct_Rho4CFitter);
      instance.SetStreamerFunc(&streamer_Rho4CFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Rho4CFitter*)
   {
      return GenerateInitInstanceLocal((::Rho4CFitter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Rho4CFitter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RhoKinVtxFitter(void *p);
   static void deleteArray_RhoKinVtxFitter(void *p);
   static void destruct_RhoKinVtxFitter(void *p);
   static void streamer_RhoKinVtxFitter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoKinVtxFitter*)
   {
      ::RhoKinVtxFitter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoKinVtxFitter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoKinVtxFitter", ::RhoKinVtxFitter::Class_Version(), "RhoKinVtxFitter.h", 22,
                  typeid(::RhoKinVtxFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoKinVtxFitter::Dictionary, isa_proxy, 16,
                  sizeof(::RhoKinVtxFitter) );
      instance.SetDelete(&delete_RhoKinVtxFitter);
      instance.SetDeleteArray(&deleteArray_RhoKinVtxFitter);
      instance.SetDestructor(&destruct_RhoKinVtxFitter);
      instance.SetStreamerFunc(&streamer_RhoKinVtxFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoKinVtxFitter*)
   {
      return GenerateInitInstanceLocal((::RhoKinVtxFitter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoKinVtxFitter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RhoKinFitter(void *p);
   static void deleteArray_RhoKinFitter(void *p);
   static void destruct_RhoKinFitter(void *p);
   static void streamer_RhoKinFitter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoKinFitter*)
   {
      ::RhoKinFitter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoKinFitter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoKinFitter", ::RhoKinFitter::Class_Version(), "RhoKinFitter.h", 21,
                  typeid(::RhoKinFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoKinFitter::Dictionary, isa_proxy, 16,
                  sizeof(::RhoKinFitter) );
      instance.SetDelete(&delete_RhoKinFitter);
      instance.SetDeleteArray(&deleteArray_RhoKinFitter);
      instance.SetDestructor(&destruct_RhoKinFitter);
      instance.SetStreamerFunc(&streamer_RhoKinFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoKinFitter*)
   {
      return GenerateInitInstanceLocal((::RhoKinFitter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoKinFitter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RhoVtxPoca(void *p = 0);
   static void *newArray_RhoVtxPoca(Long_t size, void *p);
   static void delete_RhoVtxPoca(void *p);
   static void deleteArray_RhoVtxPoca(void *p);
   static void destruct_RhoVtxPoca(void *p);
   static void streamer_RhoVtxPoca(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoVtxPoca*)
   {
      ::RhoVtxPoca *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoVtxPoca >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoVtxPoca", ::RhoVtxPoca::Class_Version(), "RhoVtxPoca.h", 17,
                  typeid(::RhoVtxPoca), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoVtxPoca::Dictionary, isa_proxy, 16,
                  sizeof(::RhoVtxPoca) );
      instance.SetNew(&new_RhoVtxPoca);
      instance.SetNewArray(&newArray_RhoVtxPoca);
      instance.SetDelete(&delete_RhoVtxPoca);
      instance.SetDeleteArray(&deleteArray_RhoVtxPoca);
      instance.SetDestructor(&destruct_RhoVtxPoca);
      instance.SetStreamerFunc(&streamer_RhoVtxPoca);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoVtxPoca*)
   {
      return GenerateInitInstanceLocal((::RhoVtxPoca*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoVtxPoca*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RhoKalmanVtxFitter(void *p);
   static void deleteArray_RhoKalmanVtxFitter(void *p);
   static void destruct_RhoKalmanVtxFitter(void *p);
   static void streamer_RhoKalmanVtxFitter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoKalmanVtxFitter*)
   {
      ::RhoKalmanVtxFitter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoKalmanVtxFitter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoKalmanVtxFitter", ::RhoKalmanVtxFitter::Class_Version(), "RhoKalmanVtxFitter.h", 21,
                  typeid(::RhoKalmanVtxFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoKalmanVtxFitter::Dictionary, isa_proxy, 16,
                  sizeof(::RhoKalmanVtxFitter) );
      instance.SetDelete(&delete_RhoKalmanVtxFitter);
      instance.SetDeleteArray(&deleteArray_RhoKalmanVtxFitter);
      instance.SetDestructor(&destruct_RhoKalmanVtxFitter);
      instance.SetStreamerFunc(&streamer_RhoKalmanVtxFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoKalmanVtxFitter*)
   {
      return GenerateInitInstanceLocal((::RhoKalmanVtxFitter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoKalmanVtxFitter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_RhoDecayTreeFitter(void *p);
   static void deleteArray_RhoDecayTreeFitter(void *p);
   static void destruct_RhoDecayTreeFitter(void *p);
   static void streamer_RhoDecayTreeFitter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RhoDecayTreeFitter*)
   {
      ::RhoDecayTreeFitter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RhoDecayTreeFitter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RhoDecayTreeFitter", ::RhoDecayTreeFitter::Class_Version(), "RhoDecayTreeFitter.h", 24,
                  typeid(::RhoDecayTreeFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RhoDecayTreeFitter::Dictionary, isa_proxy, 16,
                  sizeof(::RhoDecayTreeFitter) );
      instance.SetDelete(&delete_RhoDecayTreeFitter);
      instance.SetDeleteArray(&deleteArray_RhoDecayTreeFitter);
      instance.SetDestructor(&destruct_RhoDecayTreeFitter);
      instance.SetStreamerFunc(&streamer_RhoDecayTreeFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RhoDecayTreeFitter*)
   {
      return GenerateInitInstanceLocal((::RhoDecayTreeFitter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RhoDecayTreeFitter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr Rho4CFitter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Rho4CFitter::Class_Name()
{
   return "Rho4CFitter";
}

//______________________________________________________________________________
const char *Rho4CFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Rho4CFitter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Rho4CFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Rho4CFitter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Rho4CFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Rho4CFitter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Rho4CFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Rho4CFitter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoKinVtxFitter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoKinVtxFitter::Class_Name()
{
   return "RhoKinVtxFitter";
}

//______________________________________________________________________________
const char *RhoKinVtxFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoKinVtxFitter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoKinVtxFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoKinVtxFitter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoKinVtxFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoKinVtxFitter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoKinVtxFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoKinVtxFitter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoKinFitter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoKinFitter::Class_Name()
{
   return "RhoKinFitter";
}

//______________________________________________________________________________
const char *RhoKinFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoKinFitter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoKinFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoKinFitter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoKinFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoKinFitter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoKinFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoKinFitter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoVtxPoca::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoVtxPoca::Class_Name()
{
   return "RhoVtxPoca";
}

//______________________________________________________________________________
const char *RhoVtxPoca::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoVtxPoca*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoVtxPoca::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoVtxPoca*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoVtxPoca::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoVtxPoca*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoVtxPoca::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoVtxPoca*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoKalmanVtxFitter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoKalmanVtxFitter::Class_Name()
{
   return "RhoKalmanVtxFitter";
}

//______________________________________________________________________________
const char *RhoKalmanVtxFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoKalmanVtxFitter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoKalmanVtxFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoKalmanVtxFitter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoKalmanVtxFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoKalmanVtxFitter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoKalmanVtxFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoKalmanVtxFitter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RhoDecayTreeFitter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RhoDecayTreeFitter::Class_Name()
{
   return "RhoDecayTreeFitter";
}

//______________________________________________________________________________
const char *RhoDecayTreeFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoDecayTreeFitter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RhoDecayTreeFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RhoDecayTreeFitter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RhoDecayTreeFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoDecayTreeFitter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RhoDecayTreeFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RhoDecayTreeFitter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void Rho4CFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class Rho4CFitter.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      RhoFitterBase::Streamer(R__b);
      fLv4C.Streamer(R__b);
      R__b >> fNDau;
      R__b >> fConserveDaughterMasses;
      R__b.CheckByteCount(R__s, R__c, Rho4CFitter::IsA());
   } else {
      R__c = R__b.WriteVersion(Rho4CFitter::IsA(), kTRUE);
      RhoFitterBase::Streamer(R__b);
      fLv4C.Streamer(R__b);
      R__b << fNDau;
      R__b << fConserveDaughterMasses;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Rho4CFitter(void *p) {
      delete ((::Rho4CFitter*)p);
   }
   static void deleteArray_Rho4CFitter(void *p) {
      delete [] ((::Rho4CFitter*)p);
   }
   static void destruct_Rho4CFitter(void *p) {
      typedef ::Rho4CFitter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_Rho4CFitter(TBuffer &buf, void *obj) {
      ((::Rho4CFitter*)obj)->::Rho4CFitter::Streamer(buf);
   }
} // end of namespace ROOT for class ::Rho4CFitter

//______________________________________________________________________________
void RhoKinVtxFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoKinVtxFitter.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      RhoFitterBase::Streamer(R__b);
      al0.Streamer(R__b);
      al1.Streamer(R__b);
      V_al0.Streamer(R__b);
      V_al1.Streamer(R__b);
      covC.Streamer(R__b);
      mD.Streamer(R__b);
      mE.Streamer(R__b);
      md.Streamer(R__b);
      mPull.Streamer(R__b);
      R__b >> fNvar;
      R__b >> fNpar;
      R__b >> fNpart;
      R__b >> fNcon;
      R__b >> fNc;
      R__b >> fNiter;
      R__b >> fNumKnown;
      R__b >> NumCon;
      R__b >> niter;
      R__b >> fChi2Diff;
      R__b >> fPull;
      vtx_ex.Streamer(R__b);
      vtx_st.Streamer(R__b);
      R__b >> fMass;
      R__b >> fMassConstraint;
      R__b >> fMinDChisq;
      R__b >> fNMaxIterations;
      R__b >> fIterateExact;
      R__b >> fnDof;
      R__b >> fchiSquare;
      R__b.CheckByteCount(R__s, R__c, RhoKinVtxFitter::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoKinVtxFitter::IsA(), kTRUE);
      RhoFitterBase::Streamer(R__b);
      al0.Streamer(R__b);
      al1.Streamer(R__b);
      V_al0.Streamer(R__b);
      V_al1.Streamer(R__b);
      covC.Streamer(R__b);
      mD.Streamer(R__b);
      mE.Streamer(R__b);
      md.Streamer(R__b);
      mPull.Streamer(R__b);
      R__b << fNvar;
      R__b << fNpar;
      R__b << fNpart;
      R__b << fNcon;
      R__b << fNc;
      R__b << fNiter;
      R__b << fNumKnown;
      R__b << NumCon;
      R__b << niter;
      R__b << fChi2Diff;
      R__b << fPull;
      vtx_ex.Streamer(R__b);
      vtx_st.Streamer(R__b);
      R__b << fMass;
      R__b << fMassConstraint;
      R__b << fMinDChisq;
      R__b << fNMaxIterations;
      R__b << fIterateExact;
      R__b << fnDof;
      R__b << fchiSquare;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RhoKinVtxFitter(void *p) {
      delete ((::RhoKinVtxFitter*)p);
   }
   static void deleteArray_RhoKinVtxFitter(void *p) {
      delete [] ((::RhoKinVtxFitter*)p);
   }
   static void destruct_RhoKinVtxFitter(void *p) {
      typedef ::RhoKinVtxFitter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoKinVtxFitter(TBuffer &buf, void *obj) {
      ((::RhoKinVtxFitter*)obj)->::RhoKinVtxFitter::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoKinVtxFitter

//______________________________________________________________________________
void RhoKinFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoKinFitter.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      RhoFitterBase::Streamer(R__b);
      fAl0.Streamer(R__b);
      fAl1.Streamer(R__b);
      fV_al0.Streamer(R__b);
      fV_al1.Streamer(R__b);
      fmD.Streamer(R__b);
      fmE.Streamer(R__b);
      fmd.Streamer(R__b);
      fmPull.Streamer(R__b);
      R__b >> fNvar;
      R__b >> fNpar;
      R__b >> fNcon;
      R__b >> fNc;
      R__b >> fNiter;
      R__b >> fNunKnown;
      R__b >> fNumCon;
      R__b >> fMass;
      flmm.Streamer(R__b);
      fmm.Streamer(R__b);
      R__b >> fEc;
      R__b >> fMom;
      R__b >> f4MomConstraint;
      R__b >> fMomConstraint;
      R__b >> fTotEConstraint;
      R__b >> fMassConstraint;
      R__b >> fTotMomConstraint;
      R__b >> fChi2Diff;
      R__b >> fPull;
      R__b.CheckByteCount(R__s, R__c, RhoKinFitter::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoKinFitter::IsA(), kTRUE);
      RhoFitterBase::Streamer(R__b);
      fAl0.Streamer(R__b);
      fAl1.Streamer(R__b);
      fV_al0.Streamer(R__b);
      fV_al1.Streamer(R__b);
      fmD.Streamer(R__b);
      fmE.Streamer(R__b);
      fmd.Streamer(R__b);
      fmPull.Streamer(R__b);
      R__b << fNvar;
      R__b << fNpar;
      R__b << fNcon;
      R__b << fNc;
      R__b << fNiter;
      R__b << fNunKnown;
      R__b << fNumCon;
      R__b << fMass;
      flmm.Streamer(R__b);
      fmm.Streamer(R__b);
      R__b << fEc;
      R__b << fMom;
      R__b << f4MomConstraint;
      R__b << fMomConstraint;
      R__b << fTotEConstraint;
      R__b << fMassConstraint;
      R__b << fTotMomConstraint;
      R__b << fChi2Diff;
      R__b << fPull;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RhoKinFitter(void *p) {
      delete ((::RhoKinFitter*)p);
   }
   static void deleteArray_RhoKinFitter(void *p) {
      delete [] ((::RhoKinFitter*)p);
   }
   static void destruct_RhoKinFitter(void *p) {
      typedef ::RhoKinFitter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoKinFitter(TBuffer &buf, void *obj) {
      ((::RhoKinFitter*)obj)->::RhoKinFitter::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoKinFitter

//______________________________________________________________________________
void RhoVtxPoca::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoVtxPoca.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b.CheckByteCount(R__s, R__c, RhoVtxPoca::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoVtxPoca::IsA(), kTRUE);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RhoVtxPoca(void *p) {
      return  p ? new(p) ::RhoVtxPoca : new ::RhoVtxPoca;
   }
   static void *newArray_RhoVtxPoca(Long_t nElements, void *p) {
      return p ? new(p) ::RhoVtxPoca[nElements] : new ::RhoVtxPoca[nElements];
   }
   // Wrapper around operator delete
   static void delete_RhoVtxPoca(void *p) {
      delete ((::RhoVtxPoca*)p);
   }
   static void deleteArray_RhoVtxPoca(void *p) {
      delete [] ((::RhoVtxPoca*)p);
   }
   static void destruct_RhoVtxPoca(void *p) {
      typedef ::RhoVtxPoca current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoVtxPoca(TBuffer &buf, void *obj) {
      ((::RhoVtxPoca*)obj)->::RhoVtxPoca::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoVtxPoca

//______________________________________________________________________________
void RhoKalmanVtxFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoKalmanVtxFitter.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      RhoFitterBase::Streamer(R__b);
      R__b >> fCurrentHead;
      R__b >> fDebug;
      R__b >> fNIterations;
      fExpansionPoint.Streamer(R__b);
      R__b.ReadStaticArray((float*)fPrgParams);
      fPrgCov.Streamer(R__b);
      fJacobian.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, RhoKalmanVtxFitter::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoKalmanVtxFitter::IsA(), kTRUE);
      RhoFitterBase::Streamer(R__b);
      R__b << fCurrentHead;
      R__b << fDebug;
      R__b << fNIterations;
      fExpansionPoint.Streamer(R__b);
      R__b.WriteArray(fPrgParams, 5);
      fPrgCov.Streamer(R__b);
      fJacobian.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RhoKalmanVtxFitter(void *p) {
      delete ((::RhoKalmanVtxFitter*)p);
   }
   static void deleteArray_RhoKalmanVtxFitter(void *p) {
      delete [] ((::RhoKalmanVtxFitter*)p);
   }
   static void destruct_RhoKalmanVtxFitter(void *p) {
      typedef ::RhoKalmanVtxFitter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoKalmanVtxFitter(TBuffer &buf, void *obj) {
      ((::RhoKalmanVtxFitter*)obj)->::RhoKalmanVtxFitter::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoKalmanVtxFitter

//______________________________________________________________________________
void RhoDecayTreeFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class RhoDecayTreeFitter.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef DecayTreeFitter::Fitter baseClass0;
      baseClass0::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, RhoDecayTreeFitter::IsA());
   } else {
      R__c = R__b.WriteVersion(RhoDecayTreeFitter::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef DecayTreeFitter::Fitter baseClass0;
      baseClass0::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RhoDecayTreeFitter(void *p) {
      delete ((::RhoDecayTreeFitter*)p);
   }
   static void deleteArray_RhoDecayTreeFitter(void *p) {
      delete [] ((::RhoDecayTreeFitter*)p);
   }
   static void destruct_RhoDecayTreeFitter(void *p) {
      typedef ::RhoDecayTreeFitter current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RhoDecayTreeFitter(TBuffer &buf, void *obj) {
      ((::RhoDecayTreeFitter*)obj)->::RhoDecayTreeFitter::Streamer(buf);
   }
} // end of namespace ROOT for class ::RhoDecayTreeFitter

namespace {
  void TriggerDictionaryInitialization_G__RhoFitterDict_Impl() {
    static const char* headers[] = {
"Rho4CFitter.h",
"RhoKinVtxFitter.h",
"RhoKinFitter.h",
"RhoVtxPoca.h",
"RhoKalmanVtxFitter.h",
"RhoDecayTreeFitter.h",
0
    };
    static const char* includePaths[] = {
"/home/hexh/simulation/ChnsRoot/field",
"/home/hexh/simulation/ChnsRoot/ChnsData",
"/home/hexh/simulation/ChnsRoot/ChnsData/PidData",
"/home/hexh/simulation/ChnsRoot/rho/RhoBase",
"/home/hexh/simulation/ChnsRoot/rho/RhoMath",
"/home/hexh/simulation/ChnsRoot/rho/RhoFitter",
"/home/hexh/simulation/ChnsRoot/rho/RhoSelector",
"/home/hexh/simulation/ChnsRoot/rho/RhoConstraints",
"/home/hexh/simulation/ChnsRoot/rho/RhoTools",
"/home/hexh/simulation/ChnsRoot/rho/RhoHistogram",
"/home/hexh/simulation/ChnsRoot/rho/DecayTreeFitter",
"/home/hexh/simulation/ChnsRoot/rho",
"/home/eicc/software/FairSoft/install/include/root",
"/home/eicc/software/FairSoft/install/include",
"/home/eicc/FairRoot/build_18.4.2/include",
"/home/eicc/software/FairSoft/install/include/root",
"/home/hexh/simulation/ChnsRoot/buildChns/rho/RhoFitter/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__RhoFitterDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(A 4c fitter)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Rho4CFitter.h")))  Rho4CFitter;
class __attribute__((annotate(R"ATTRDUMP(A Kinematic Vertex Fitter)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoKinVtxFitter.h")))  RhoKinVtxFitter;
class __attribute__((annotate("$clingAutoload$RhoKinFitter.h")))  RhoKinFitter;
class __attribute__((annotate(R"ATTRDUMP(A poca Vertex Finder)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$RhoVtxPoca.h")))  RhoVtxPoca;
class __attribute__((annotate("$clingAutoload$RhoKalmanVtxFitter.h")))  RhoKalmanVtxFitter;
class __attribute__((annotate("$clingAutoload$RhoDecayTreeFitter.h")))  RhoDecayTreeFitter;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__RhoFitterDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "Rho4CFitter.h"
#include "RhoKinVtxFitter.h"
#include "RhoKinFitter.h"
#include "RhoVtxPoca.h"
#include "RhoKalmanVtxFitter.h"
#include "RhoDecayTreeFitter.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"Rho4CFitter", payloadCode, "@",
"RhoDecayTreeFitter", payloadCode, "@",
"RhoKalmanVtxFitter", payloadCode, "@",
"RhoKinFitter", payloadCode, "@",
"RhoKinVtxFitter", payloadCode, "@",
"RhoVtxPoca", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__RhoFitterDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__RhoFitterDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__RhoFitterDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__RhoFitterDict() {
  TriggerDictionaryInitialization_G__RhoFitterDict_Impl();
}
