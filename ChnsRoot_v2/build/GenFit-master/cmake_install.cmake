# Install script for directory: /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master

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
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./eventDisplay/include/EventDisplay.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./core/include/AbsFinitePlane.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./core/include/AbsFitterInfo.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./core/include/AbsTrackRep.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./core/include/Exception.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./core/include/FitStatus.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./core/include/Material.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./core/include/MeasurementOnPlane.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./core/include/ThinScatterer.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./core/include/TrackCand.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./core/include/Track.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./core/include/AbsFitter.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./core/include/AbsMeasurement.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./core/include/DetPlane.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./core/include/FieldManager.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./core/include/IO.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./core/include/MeasuredStateOnPlane.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./core/include/StateOnPlane.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./core/include/Tools.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./core/include/TrackCandHit.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./core/include/TrackPoint.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./finitePlanes/include/RectangularFinitePlane.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./trackReps/include/MaterialEffects.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./trackReps/include/MplTrackRep.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./trackReps/include/RKTools.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./trackReps/include/RKTrackRep.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./trackReps/include/StepLimits.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./trackReps/include/TGeoMaterialInterface.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./measurements/include/FullMeasurement.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./measurements/include/HMatrixU.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./measurements/include/HMatrixUV.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./measurements/include/ProlateSpacepointMeasurement.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./measurements/include/WireMeasurement.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./measurements/include/WirePointMeasurement.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./measurements/include/HMatrixPhi.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./measurements/include/HMatrixUnit.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./measurements/include/HMatrixV.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./measurements/include/PlanarMeasurement.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./measurements/include/SpacepointMeasurement.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./measurements/include/WireMeasurementNew.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./measurements/include/WireTrackCandHit.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./fitters/include/KalmanFitter.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./fitters/include/KalmanFitterInfo.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./fitters/include/AbsKalmanFitter.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./fitters/include/KalmanFitterRefTrack.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./fitters/include/DAF.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./fitters/include/KalmanFitStatus.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./fitters/include/KalmanFittedStateOnPlane.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./fitters/include/ReferenceStateOnPlane.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./fields/include/ConstField.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./GBL/include/BorderedBandMatrix.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./GBL/include/GblData.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./GBL/include/GblFitter.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./GBL/include/GblFitterInfo.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./GBL/include/GblPoint.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./GBL/include/GblTrajectory.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./GBL/include/GFGbl.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./GBL/include/MilleBinary.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./GBL/include/VMatrix.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./utilities/include/HelixTrackModel.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./utilities/include/MeasurementCreator.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./utilities/include/mySpacepointMeasurement.h"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/GenFit-master/./utilities/include/mySpacepointDetectorHit.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/G__GenFit-masterDict_rdict.pcm"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libGenFit-master.rootmap"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libGenFit-master.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libGenFit-master.so.0.0"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libGenFit-master.so.0.0.0"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libGenFit-master.so.0.0"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libGenFit-master.so.0.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libGenFit-master.so.0.0"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/eicc/software/FairSoft/install/lib:/home/eicc/FairRoot/build_18.4.2/lib:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libGenFit-master.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libGenFit-master.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libGenFit-master.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libGenFit-master.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libGenFit-master.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libGenFit-master.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libGenFit-master.so"
         OLD_RPATH "/home/eicc/software/FairSoft/install/lib:/home/eicc/FairRoot/build_18.4.2/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libGenFit-master.so")
    endif()
  endif()
endif()

