# Install script for directory: /home/hexh/simulation/ChnsRoot/rho

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
  include("/home/hexh/simulation/ChnsRoot/buildChns/rho/DecayTreeFitter/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/hexh/simulation/ChnsRoot/buildChns/rho/RhoFitter/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/home/hexh/simulation/ChnsRoot/rho/RhoConstraints/RhoMassConstraint.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoConstraints/RhoPointingConstraint.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoConstraints/RhoBeamConstraint.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoBase/RhoEventSelectorBase.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoTools/RhoCalculationTools.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoMath/RhoDoubleErr.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoMath/RhoError.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoMath/RhoLorentzVectorErr.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoMath/RhoVector3Err.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoBase/RhoCandidate.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoBase/RhoCandList.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoBase/RhoCandListIterator.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoBase/RhoEventInfo.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoBase/RhoFactory.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoTools/RhoPdtLoader.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoBase/RhoFitterBase.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoBase/RhoParticleSelectorBase.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoBase/RhoVertexSelectorBase.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoSelector/RhoChargedParticleSelector.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoSelector/RhoEnergyParticleSelector.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoSelector/RhoMassParticleSelector.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoSelector/RhoMinusParticleSelector.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoSelector/RhoMomentumParticleSelector.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoSelector/RhoNeutralParticleSelector.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoSelector/RhoPlusParticleSelector.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoSelector/RhoSimpleElectronSelector.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoSelector/RhoSimpleKaonSelector.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoSelector/RhoSimpleMuonSelector.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoSelector/RhoSimplePionSelector.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoSelector/RhoSimpleProtonSelector.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoSelector/RhoSimpleVertexSelector.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoSelector/RhoSimpleVertexSelector.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoSelector/RhoGoodPhotonSelector.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoSelector/RhoGoodTrackSelector.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoTools/RhoBooster.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoBase/RhoEventShape.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoTools/RhoEventShapes.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoTools/RhoFindOmittedParticle.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoTools/RhoTotalMomentum.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoHistogram/RhoColumn.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoHistogram/RhoTuple.h"
    "/home/hexh/simulation/ChnsRoot/rho/RhoBase/RhoConstraint.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/home/hexh/simulation/ChnsRoot/buildChns/lib/G__RhoDict_rdict.pcm"
    "/home/hexh/simulation/ChnsRoot/buildChns/lib/libRho.rootmap"
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
    "/home/hexh/simulation/ChnsRoot/buildChns/lib/libRho.so.0.0.0"
    "/home/hexh/simulation/ChnsRoot/buildChns/lib/libRho.so.0.0"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libRho.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libRho.so.0.0"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/eicc/software/FairSoft/install/lib:/home/eicc/FairRoot/build_18.4.2/lib:/home/hexh/simulation/ChnsRoot/buildChns/lib:"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/hexh/simulation/ChnsRoot/buildChns/lib/libRho.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libRho.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libRho.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libRho.so"
         OLD_RPATH "/home/eicc/software/FairSoft/install/lib:/home/eicc/FairRoot/build_18.4.2/lib:/home/hexh/simulation/ChnsRoot/buildChns/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libRho.so")
    endif()
  endif()
endif()

