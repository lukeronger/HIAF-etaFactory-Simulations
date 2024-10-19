# Install script for directory: /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsTools/AnalysisTools

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
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsTools/AnalysisTools/ChnsEventInfo.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsTools/AnalysisTools/ChnsPidListMaker.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsTools/AnalysisTools/ChnsAnalysis.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsTools/AnalysisTools/ChnsSimpleAnalysis.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsTools/AnalysisTools/ChnsAnalysisTask.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsTools/AnalysisTools/ChnsMyAnalysisTask.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsTools/AnalysisTools/ChnsAnaTask.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsTools/AnalysisTools/ChnsListDefiner.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsTools/AnalysisTools/ChnsListProvider.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsTools/AnalysisTools/ChnsMcListConverter.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsTools/AnalysisTools/ChnsAnaPidCombiner.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsTools/AnalysisTools/ChnsAnaPidSelector.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsTools/AnalysisTools/ChnsAnaContFact.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsTools/AnalysisTools/ChnsAnaSelectorPar.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsTools/AnalysisTools/ChnsGoodTrackSelector.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsTools/AnalysisTools/ChnsEventShape.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsTools/AnalysisTools/ChnsRhoTupleQA.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsTools/AnalysisTools/ChnsParticleQATask.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsTools/AnalysisTools/ChnsSimpleCombiner.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsTools/AnalysisTools/ChnsSimpleCombinerTask.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsTools/AnalysisTools/ChnsSimpleNtuple.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsTools/AnalysisTools/StrTok.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/G__AnalysisToolsDict_rdict.pcm"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libAnalysisTools.rootmap"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libAnalysisTools.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libAnalysisTools.so.0.0"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libAnalysisTools.so.0.0.0"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libAnalysisTools.so.0.0"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libAnalysisTools.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libAnalysisTools.so.0.0"
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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libAnalysisTools.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libAnalysisTools.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libAnalysisTools.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libAnalysisTools.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libAnalysisTools.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libAnalysisTools.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libAnalysisTools.so"
         OLD_RPATH "/home/eicc/software/FairSoft/install/lib:/home/eicc/FairRoot/build_18.4.2/lib:/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libAnalysisTools.so")
    endif()
  endif()
endif()

