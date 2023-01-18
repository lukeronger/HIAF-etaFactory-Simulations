// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIliangytdIEiccRootdIGenFitmImasterdIGenFitmImasterdIbuilddIeventDisplayRootDict
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
#include "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/eventDisplay/include/EventDisplay.h"

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
   static void delete_genfitcLcLEventDisplay(void *p);
   static void deleteArray_genfitcLcLEventDisplay(void *p);
   static void destruct_genfitcLcLEventDisplay(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::genfit::EventDisplay*)
   {
      ::genfit::EventDisplay *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::genfit::EventDisplay >(0);
      static ::ROOT::TGenericClassInfo 
         instance("genfit::EventDisplay", ::genfit::EventDisplay::Class_Version(), "", 61,
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

namespace {
  void TriggerDictionaryInitialization_eventDisplayRootDict_Impl() {
    static const char* headers[] = {
"0",
0
    };
    static const char* includePaths[] = {
"/home/liangyt/EiccRoot/GenFit-master/GenFit-master/core/include",
"/home/liangyt/EiccRoot/GenFit-master/GenFit-master/fitters/include",
"/home/liangyt/EiccRoot/GenFit-master/GenFit-master/eventDisplay/include",
"/home/eicc/software/FairSoft/install/include/root",
"/home/liangyt/EiccRoot/GenFit-master/GenFit-master/build/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "eventDisplayRootDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace genfit{class EventDisplay;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "eventDisplayRootDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
/* Copyright 2011, Technische Universitaet Muenchen,
   Author: Karl Bicker

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
/** @addtogroup EventDisplay
* @{
*/

#ifndef genfit_EventDisplay_h
#define genfit_EventDisplay_h

#include "Track.h"
#include "AbsKalmanFitter.h"

#include <TEveBox.h>
#include <TVector3.h>
#include <string>
#include <vector>

#include <TGButton.h>
#include <TGNumberEntry.h>
#include <TGButtonGroup.h>


namespace genfit {

enum eFitterType {
  SimpleKalman,
  RefKalman,
  DafSimple,
  DafRef
};

/** @brief Event display designed to run with Genfit.
 *
 *  @author Karl Bicker (Technische Universit&auml;t M&uuml;nchen, original author)
 * 
 * The EventDisplay class is a singelton used to visualize the events processed with Genfit. The
 * event display uses the EVE event visualization package to visualize Tracks which are bundled
 * in a vector and which form one event. The information about the tracks is supplied in Track
 * objects. To use the event display, the geometry (TGeoManager)and magnetic field (FieldManager)
 * have to be initialized and gApplication and gEve have to exist.
 *
 */
class EventDisplay : public TNamed {
	private:
		EventDisplay();
	
	public:
		~EventDisplay();
		static EventDisplay* getInstance();

		/** @brief Drop all events.*/
		void reset();

		/** @brief Add new event
		 *
		 * Add a new event. An event is a collection of Tracks which are displayed at the
		 * the same time.
		 * The tracks are copied.
		 *
		 */
		void addEvent(std::vector<genfit::Track*>& tracks);
		void addEvent(std::vector<const genfit::Track*>& tracks);

    /** @brief Add new event
     *
     * Add a new event consisting of one track.
     *
     */
    void addEvent(const Track* tr);

		/** @brief Go to the next event or step a certain number of events ahead.*/
		void next(unsigned int stp = 1);

		/** @brief Go to the previous event or step a certain number of events back.*/
		void prev(unsigned int stp = 1);

		/** @brief Go to event with index id.*/
		void gotoEvent(unsigned int id);

		/** @brief Get the total number of events stored.*/
		int getNEvents();

		/** @brief Set the display options.
		 *
		 * The option string lets you steer the way the events are displayed. The following
		 * options are available:\n
		 * \n
		 * 'A': Autoscale errors. The representation of hits are scaled with the error found
		 *      their covariance matrix. This can lead to hits not being displayed beause the
		 *      errors are too small. Autoscaling ensures that the errors are scaled up
		 *      sufficiently to ensure all hits are displayed. However, this can lead to unwanted
		 *      results if there are only a few hits with very small errors, as all hits are scaled
		 *      by the same factor to ensure consistency.\n\n
		 * 'B': Draw Backward Fit (track segments start at updates and end at predictions)\n\n
		 * 'D': Draw detectors. This causes a simple representation for all detectors to be drawn. For
		 *      planar detectors, this is a plane with the same position and orientation of the real
		 *      detector plane, but with different size. For wires, this is a tube whose diameter
		 *      is equal to the value measured by the wire. Spacepoint hits are not affected by this
		 *      option.\n\n
		 * 'E': Draw Error cones (position and direction uncertainties) around the track.\n\n
     * 'F': Draw Forward Fit (track segments start at updates and end at predictions)
		 * 'H': Draw hits. This causes the hits to be visualized. Normally, the size of the hit
		 *      representation is connected to the covariance matrix of the hit, scaled by the value
		 *      set in setErrScale which is normally 1. See also option 'A' and 'S'. Normally used in
		 *      connection with 'D'.\n\n
		 * 'G': Draw geometry. Draw also the geometry in the gGeoManager. This feature is experimental
		 *      and may lead to strang things being drawn.\n\n
		 * 'M': Draw track markers. Draw the intersection points between the track and the virtual
		 *      (and/or real) detector planes. Can only be used in connection with 'T'.\n\n
		 * 'P': Draw detector planes. Draws the virtual (and/or real) detector planes.\n\n
		 * 'S': Scale manually. This leads to the spacepoint hits (and only them up to now!) being drawn
		 *      as spheres with radius 0.5 scaled with the error scale factor. Can be used if the scaling
		 *      with errors leads to problems.\n\n
		 * 'T': Draw Track. Draw the track as lines between the virtual (and/or real) detector
		 *      planes.\n\n
		 * 'X': Draw silent. Does not run the TApplication.
		 *
		 */
		void setOptions(std::string opts);

		/** @brief Set the scaling factor for the visualization of the errors.*/
		void setErrScale(double errScale = 1.);

		/** @brief Get the error scaling factor.*/
		double getErrScale();

		/** @brief Open the event display.*/
		void open();
	
	  void guiGoto();
	  void guiGoto2();
		void guiSetDrawParams();
		void guiSelectFitterId(int val);
		void guiSelectMmHandling(int val);

	private:
    /** @brief Build the buttons for event navigation.*/
    void makeGui();

    /** @brief Draw an event.*/
    void drawEvent(unsigned int id, bool resetCam = true);

    /** @brief Create a box around o, oriented along u and v with widths ud, vd and depth and
     *  return a pointer to the box object.
     */
    TEveBox* boxCreator(TVector3 o, TVector3 u, TVector3 v, float ud, float vd, float depth);

    void makeLines(const StateOnPlane* prevState, const StateOnPlane* state, const AbsTrackRep* rep,
                     const Color_t& color, const Style_t& style, bool drawMarkers, bool drawErrors, double lineWidth = 2, int markerPos = 1);


    static EventDisplay* eventDisplay_; //!
    unsigned int eventId_; //!
    double errorScale_; //!
    std::vector< std::vector<genfit::Track*>* > events_; //!


    TGNumberEntry* guiEvent;
    TGNumberEntry* guiEvent2;

    TGCheckButton* guiDrawGeometry_;
    bool drawGeometry_;
    TGCheckButton* guiDrawDetectors_;
    bool drawDetectors_;
    TGCheckButton* guiDrawHits_;
    bool drawHits_;
    TGCheckButton* guiDrawErrors_;
    bool drawErrors_;

    TGCheckButton* guiDrawPlanes_;
    bool drawPlanes_;
    TGCheckButton* guiDrawTrackMarkers_;
    bool drawTrackMarkers_;

    TGCheckButton* guiDrawTrack_;
    bool drawTrack_;
    TGCheckButton* guiDrawRefTrack_;
    bool drawRefTrack_;
    TGCheckButton* guiDrawForward_;
    bool drawForward_;
    TGCheckButton* guiDrawBackward_;
    bool drawBackward_;

    TGCheckButton* guiDrawAutoScale_;
    bool drawAutoScale_;
    TGCheckButton* guiDrawScaleMan_;
    bool drawScaleMan_;
    TGNumberEntry* guiErrorScale_;

    bool drawSilent_;

    TGCheckButton* guiDrawCardinalRep_;
    bool drawCardinalRep_;
    TGNumberEntry* guiRepId_;
    unsigned int repId_;

    TGCheckButton* guiDrawAllTracks_;
    bool drawAllTracks_;
    TGNumberEntry* guiTrackId_;
    unsigned int trackId_;

    TGCheckButton* guiRefit_;
    bool refit_;
    TGNumberEntry* guiDebugLvl_;
    unsigned int debugLvl_;
    TGButtonGroup* guiFitterId_;
    eFitterType fitterId_;
    TGButtonGroup* guiMmHandling_;
    eMultipleMeasurementHandling mmHandling_;

    TGCheckButton* guiSquareRootFormalism_;
    bool squareRootFormalism_;
    TGNumberEntry* guiDPVal_;
    double dPVal_;
    TGNumberEntry* guiRelChi2_;
    double dRelChi2_;
    TGNumberEntry* guiDChi2Ref_;
    double dChi2Ref_;
    TGNumberEntry* guiNMinIter_;
    unsigned int nMinIter_;
    TGNumberEntry* guiNMaxIter_;
    unsigned int nMaxIter_;
    TGNumberEntry* guiNMaxFailed_;
    int nMaxFailed_;
    TGCheckButton* guiResort_;
    bool resort_;


	public:
		ClassDef(EventDisplay,1)

};

} /* End of namespace genfit */
/** @} */

#endif // genfit_EventDisplay_h


#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"genfit::EventDisplay", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("eventDisplayRootDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_eventDisplayRootDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_eventDisplayRootDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_eventDisplayRootDict() {
  TriggerDictionaryInitialization_eventDisplayRootDict_Impl();
}
