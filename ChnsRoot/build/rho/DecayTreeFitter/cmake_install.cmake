# Install script for directory: /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/DecayTreeFitter

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/DecayTreeFitter/ErrCode.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/DecayTreeFitter/ChiSquare.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/DecayTreeFitter/Configuration.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/DecayTreeFitter/Constraint.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/DecayTreeFitter/DecayChain.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/DecayTreeFitter/LineTool.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/DecayTreeFitter/SortTool.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/DecayTreeFitter/FitParams.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/DecayTreeFitter/Fitter.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/DecayTreeFitter/InteractionPoint.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/DecayTreeFitter/InternalParticle.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/DecayTreeFitter/KalmanCalculator.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/DecayTreeFitter/MergedConstraint.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/DecayTreeFitter/MissingParticle.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/DecayTreeFitter/ParticleBase.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/DecayTreeFitter/Projection.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/DecayTreeFitter/RecoComposite.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/DecayTreeFitter/RecoParticle.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/DecayTreeFitter/RecoPhoton.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/DecayTreeFitter/RecoResonance.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/DecayTreeFitter/RecoTrack.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/DecayTreeFitter/RecoTrackStateProvider.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/DecayTreeFitter/Resonance.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/rho/DecayTreeFitter/State.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/build/lib/G__DecayTreeFitterDict_rdict.pcm"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/build/lib/libDecayTreeFitter.rootmap"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libDecayTreeFitter.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libDecayTreeFitter.so.0.0"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/build/lib/libDecayTreeFitter.so.0.0.0"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/build/lib/libDecayTreeFitter.so.0.0"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libDecayTreeFitter.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libDecayTreeFitter.so.0.0"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/eicc/software/FairSoft/install/lib:/home/eicc/FairRoot/build_18.4.2/lib:/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/build/lib:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libDecayTreeFitter.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libDecayTreeFitter.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libDecayTreeFitter.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/build/lib/libDecayTreeFitter.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libDecayTreeFitter.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libDecayTreeFitter.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libDecayTreeFitter.so"
         OLD_RPATH "/home/eicc/software/FairSoft/install/lib:/home/eicc/FairRoot/build_18.4.2/lib:/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/build/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libDecayTreeFitter.so")
    endif()
  endif()
endif()
