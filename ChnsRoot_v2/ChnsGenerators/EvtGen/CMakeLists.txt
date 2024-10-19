

set(EVTGEN_PHOTOS   0)
set(EVTGEN_PYTHIA   1)
set(EVTGEN_TAUOLA   0)
# the following will be set automatically
set(EVTGEN_EXTERNAL   0)

### HepMCfio might not be needed
##set(HEPMCLIBLIST HepMC HepMCfio)
set(HEPMCLIBLIST HepMC)

set(EVTGEN_INCLUDE_DIR   ${CMAKE_SOURCE_DIR}/ChnsGenerators/EvtGen/EvtGen/R02-00-00)

set(EVTGENLIBLIST EvtGen)

if(EVTGEN_PHOTOS)
   Message("Using PHOTOS.")
   set(EVTGEN_EXTERNAL 1)
   add_subdirectory (Photos)
   add_definitions("-DEVTGEN_PHOTOS")
   set(PHOTOSLIBLIST PhotosCxxInterface PhotosFortran)
   set(PHOTOS_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/ChnsGenerators/EvtGen/Photos)
endif(EVTGEN_PHOTOS)

if(EVTGEN_TAUOLA)
   Message("Using TAUOLA.")
   set(EVTGEN_EXTERNAL 1)
   add_subdirectory (Tauola)
   add_definitions("-DEVTGEN_TAUOLA")
   set(TAUOLALIBLIST TauolaCxxInterface TauolaFortran)
   set(TAUOLA_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/ChnsGenerators/EvtGen/Tauola)
endif(EVTGEN_TAUOLA)

if(EVTGEN_PYTHIA)
   add_definitions("-DEVTGEN_PYTHIA")
   set(EVTGEN_EXTERNAL 1)
   if(EXISTS ${SIMPATH}/lib/liblhapdfdummy.so OR EXISTS ${SIMPATH}/lib/liblhapdfdummy.dylib) 
      set(PYTHIALIBLIST pythia8 lhapdfdummy)
   else()
      set(PYTHIALIBLIST pythia8)
   endif()
endif(EVTGEN_PYTHIA)

if(EVTGEN_EXTERNAL)
   add_definitions("-DEVTGEN_EXTERNAL")
   set(EVTGENEXTLIBLIST EvtGenExternal)
endif(EVTGEN_EXTERNAL)

add_subdirectory (EvtGen)
add_subdirectory (EvtGenDirect)
add_subdirectory (EvtGenBox)  #2021.04.19 yutie
#add_subdirectory (Standalone)     #2021.04.15 yutie
