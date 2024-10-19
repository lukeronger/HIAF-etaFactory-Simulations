# Install script for directory: /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/rho/DecayTreeFitter/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/rho/RhoFitter/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoConstraints/RhoMassConstraint.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoConstraints/RhoPointingConstraint.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoConstraints/RhoBeamConstraint.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoBase/RhoEventSelectorBase.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoTools/RhoCalculationTools.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoMath/RhoDoubleErr.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoMath/RhoError.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoMath/RhoLorentzVectorErr.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoMath/RhoVector3Err.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoBase/RhoCandidate.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoBase/RhoCandList.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoBase/RhoCandListIterator.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoBase/RhoEventInfo.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoBase/RhoFactory.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoTools/RhoPdtLoader.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoBase/RhoFitterBase.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoBase/RhoParticleSelectorBase.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoBase/RhoVertexSelectorBase.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoSelector/RhoChargedParticleSelector.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoSelector/RhoEnergyParticleSelector.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoSelector/RhoMassParticleSelector.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoSelector/RhoMinusParticleSelector.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoSelector/RhoMomentumParticleSelector.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoSelector/RhoNeutralParticleSelector.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoSelector/RhoPlusParticleSelector.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoSelector/RhoSimpleElectronSelector.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoSelector/RhoSimpleKaonSelector.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoSelector/RhoSimpleMuonSelector.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoSelector/RhoSimplePionSelector.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoSelector/RhoSimpleProtonSelector.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoSelector/RhoSimpleVertexSelector.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoSelector/RhoSimpleVertexSelector.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoSelector/RhoGoodPhotonSelector.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoSelector/RhoGoodTrackSelector.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoTools/RhoBooster.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoBase/RhoEventShape.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoTools/RhoEventShapes.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoTools/RhoFindOmittedParticle.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoTools/RhoTotalMomentum.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoHistogram/RhoColumn.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoHistogram/RhoTuple.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/rho/RhoBase/RhoConstraint.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/G__RhoDict_rdict.pcm"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libRho.rootmap"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libRho.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libRho.so.0.0"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libRho.so.0.0.0"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libRho.so.0.0"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libRho.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libRho.so.0.0"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/eicc/software/FairSoft/install/lib:/home/eicc/FairRoot/build_18.4.2/lib:/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libRho.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libRho.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libRho.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libRho.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libRho.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libRho.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libRho.so"
         OLD_RPATH "/home/eicc/software/FairSoft/install/lib:/home/eicc/FairRoot/build_18.4.2/lib:/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libRho.so")
    endif()
  endif()
endif()

