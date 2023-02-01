# Install script for directory: /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim

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
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFastSim.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmTrack.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmResponse.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmAbsDet.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmDetFactory.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmEmcBarrel.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmEmcBwCap.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmEmcFwCap.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmEmcFS.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmTpc.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmStt.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmMdcFS.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmMdcTS.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmRich.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmDrcDisc.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmDrcBarrel.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmEffTracker.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmMvd.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmMvd2.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmTof.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmTofBwCap.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmTofFwCap.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmGemBwCap.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmGemFwCap.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmSimpleTracker.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmCmpDet.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmCombiDet.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmRandom.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmMvdPid.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmTpcPid.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmSttPid.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmSimpleVtx.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmMdtPid.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmEmcPid.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/fsim/ChnsFsmIdealPid.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/build/lib/G__fsimDict_rdict.pcm"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/build/lib/libfsim.rootmap"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libfsim.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libfsim.so.0.0"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/build/lib/libfsim.so.0.0.0"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/build/lib/libfsim.so.0.0"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libfsim.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libfsim.so.0.0"
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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libfsim.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libfsim.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libfsim.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/build/lib/libfsim.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libfsim.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libfsim.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libfsim.so"
         OLD_RPATH "/home/eicc/software/FairSoft/install/lib:/home/eicc/FairRoot/build_18.4.2/lib:/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot/build/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libfsim.so")
    endif()
  endif()
endif()

