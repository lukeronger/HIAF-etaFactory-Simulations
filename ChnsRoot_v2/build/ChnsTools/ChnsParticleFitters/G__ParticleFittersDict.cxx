// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIdata2dIrwangdIgithubsdIHIAFmIetaFactorymISimulationsdIChnsRoot_v2dIbuilddIChnsToolsdIChnsParticleFittersdIG__ParticleFittersDict
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
#include "Chns4CFitter.h"
#include "ChnsDecayTreeFitter.h"
#include "ChnsKinVtxFitter.h"
#include "ChnsKinFitter.h"
#include "ChnsVtxPoca.h"
#include "ChnsVtxPRG.h"
#include "ChnsKalmanVtxFitter.h"

// Header files passed via #pragma extra_include

namespace {
  void TriggerDictionaryInitialization_G__ParticleFittersDict_Impl() {
    static const char* headers[] = {
"Chns4CFitter.h",
"ChnsDecayTreeFitter.h",
"ChnsKinVtxFitter.h",
"ChnsKinFitter.h",
"ChnsVtxPoca.h",
"ChnsVtxPRG.h",
"ChnsKalmanVtxFitter.h",
0
    };
    static const char* includePaths[] = {
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/field",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/trackbase",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsData",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsData/TrackData",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsData/PidData",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoBase",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoTools",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoSelector",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoMath",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoFitter",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoHistogram",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/DecayTreeFitter",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsTools/ChnsParticleFitters",
"/home/eicc/software/FairSoft/install/include/root",
"/home/eicc/software/FairSoft/install/include",
"/home/eicc/FairRoot/build_18.4.2/include",
"/home/eicc/software/FairSoft/install/include/TGeant3",
"/home/eicc/software/FairSoft/install/include/root",
"/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/ChnsTools/ChnsParticleFitters/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__ParticleFittersDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$Rho4CFitter.h")))  __attribute__((annotate("$clingAutoload$Chns4CFitter.h")))  Rho4CFitter;
typedef Rho4CFitter Chns4CFitter __attribute__((annotate("$clingAutoload$Chns4CFitter.h"))) ;
class __attribute__((annotate("$clingAutoload$RhoDecayTreeFitter.h")))  __attribute__((annotate("$clingAutoload$ChnsDecayTreeFitter.h")))  RhoDecayTreeFitter;
typedef RhoDecayTreeFitter ChnsDecayTreeFitter __attribute__((annotate("$clingAutoload$ChnsDecayTreeFitter.h"))) ;
class __attribute__((annotate("$clingAutoload$RhoKinVtxFitter.h")))  __attribute__((annotate("$clingAutoload$ChnsKinVtxFitter.h")))  RhoKinVtxFitter;
typedef RhoKinVtxFitter ChnsKinVtxFitter __attribute__((annotate("$clingAutoload$ChnsKinVtxFitter.h"))) ;
class __attribute__((annotate("$clingAutoload$RhoKinFitter.h")))  __attribute__((annotate("$clingAutoload$ChnsKinFitter.h")))  RhoKinFitter;
typedef RhoKinFitter ChnsKinFitter __attribute__((annotate("$clingAutoload$ChnsKinFitter.h"))) ;
class __attribute__((annotate("$clingAutoload$RhoVtxPoca.h")))  __attribute__((annotate("$clingAutoload$ChnsVtxPoca.h")))  RhoVtxPoca;
typedef RhoVtxPoca ChnsVtxPoca __attribute__((annotate("$clingAutoload$ChnsVtxPoca.h"))) ;
class __attribute__((annotate("$clingAutoload$RhoKalmanVtxFitter.h")))  __attribute__((annotate("$clingAutoload$ChnsVtxPRG.h")))  RhoKalmanVtxFitter;
typedef RhoKalmanVtxFitter ChnsVtxPRG __attribute__((annotate("$clingAutoload$ChnsVtxPRG.h"))) ;
typedef RhoKalmanVtxFitter ChnsKalmanVtxFitter __attribute__((annotate("$clingAutoload$ChnsKalmanVtxFitter.h"))) ;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__ParticleFittersDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "Chns4CFitter.h"
#include "ChnsDecayTreeFitter.h"
#include "ChnsKinVtxFitter.h"
#include "ChnsKinFitter.h"
#include "ChnsVtxPoca.h"
#include "ChnsVtxPRG.h"
#include "ChnsKalmanVtxFitter.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"Chns4CFitter", payloadCode, "@",
"ChnsDecayTreeFitter", payloadCode, "@",
"ChnsKalmanVtxFitter", payloadCode, "@",
"ChnsKinFitter", payloadCode, "@",
"ChnsKinVtxFitter", payloadCode, "@",
"ChnsVtxPRG", payloadCode, "@",
"ChnsVtxPoca", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__ParticleFittersDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__ParticleFittersDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__ParticleFittersDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__ParticleFittersDict() {
  TriggerDictionaryInitialization_G__ParticleFittersDict_Impl();
}
