# Install script for directory: /home/hexh/simulation/ChnsRoot/fsim

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
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFastSim.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmTrack.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmResponse.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmAbsDet.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmDetFactory.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmEmcBarrel.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmEmcBwCap.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmEmcFwCap.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmEmcFS.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmTpc.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmStt.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmMdcFS.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmMdcTS.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmRich.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmDrcDisc.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmDrcBarrel.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmEffTracker.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmMvd.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmMvd2.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmTof.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmTofBwCap.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmTofFwCap.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmGemBwCap.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmGemFwCap.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmSimpleTracker.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmCmpDet.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmCombiDet.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmRandom.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmMvdPid.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmTpcPid.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmSttPid.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmSimpleVtx.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmMdtPid.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmEmcPid.h"
    "/home/hexh/simulation/ChnsRoot/fsim/ChnsFsmIdealPid.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/home/hexh/simulation/ChnsRoot/buildChns/lib/G__fsimDict_rdict.pcm"
    "/home/hexh/simulation/ChnsRoot/buildChns/lib/libfsim.rootmap"
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
    "/home/hexh/simulation/ChnsRoot/buildChns/lib/libfsim.so.0.0.0"
    "/home/hexh/simulation/ChnsRoot/buildChns/lib/libfsim.so.0.0"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libfsim.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libfsim.so.0.0"
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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libfsim.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libfsim.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libfsim.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/hexh/simulation/ChnsRoot/buildChns/lib/libfsim.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libfsim.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libfsim.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libfsim.so"
         OLD_RPATH "/home/eicc/software/FairSoft/install/lib:/home/eicc/FairRoot/build_18.4.2/lib:/home/hexh/simulation/ChnsRoot/buildChns/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libfsim.so")
    endif()
  endif()
endif()

