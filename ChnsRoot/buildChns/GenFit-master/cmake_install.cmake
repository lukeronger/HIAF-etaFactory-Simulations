# Install script for directory: /home/hexh/simulation/ChnsRoot/GenFit-master

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
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./eventDisplay/include/EventDisplay.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./core/include/AbsFinitePlane.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./core/include/AbsFitterInfo.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./core/include/AbsTrackRep.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./core/include/Exception.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./core/include/FitStatus.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./core/include/Material.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./core/include/MeasurementOnPlane.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./core/include/ThinScatterer.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./core/include/TrackCand.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./core/include/Track.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./core/include/AbsFitter.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./core/include/AbsMeasurement.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./core/include/DetPlane.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./core/include/FieldManager.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./core/include/IO.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./core/include/MeasuredStateOnPlane.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./core/include/StateOnPlane.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./core/include/Tools.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./core/include/TrackCandHit.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./core/include/TrackPoint.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./finitePlanes/include/RectangularFinitePlane.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./trackReps/include/MaterialEffects.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./trackReps/include/MplTrackRep.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./trackReps/include/RKTools.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./trackReps/include/RKTrackRep.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./trackReps/include/StepLimits.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./trackReps/include/TGeoMaterialInterface.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./measurements/include/FullMeasurement.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./measurements/include/HMatrixU.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./measurements/include/HMatrixUV.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./measurements/include/ProlateSpacepointMeasurement.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./measurements/include/WireMeasurement.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./measurements/include/WirePointMeasurement.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./measurements/include/HMatrixPhi.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./measurements/include/HMatrixUnit.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./measurements/include/HMatrixV.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./measurements/include/PlanarMeasurement.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./measurements/include/SpacepointMeasurement.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./measurements/include/WireMeasurementNew.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./measurements/include/WireTrackCandHit.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./fitters/include/KalmanFitter.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./fitters/include/KalmanFitterInfo.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./fitters/include/AbsKalmanFitter.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./fitters/include/KalmanFitterRefTrack.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./fitters/include/DAF.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./fitters/include/KalmanFitStatus.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./fitters/include/KalmanFittedStateOnPlane.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./fitters/include/ReferenceStateOnPlane.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./fields/include/ConstField.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./GBL/include/BorderedBandMatrix.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./GBL/include/GblData.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./GBL/include/GblFitter.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./GBL/include/GblFitterInfo.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./GBL/include/GblPoint.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./GBL/include/GblTrajectory.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./GBL/include/GFGbl.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./GBL/include/MilleBinary.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./GBL/include/VMatrix.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./utilities/include/HelixTrackModel.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./utilities/include/MeasurementCreator.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./utilities/include/mySpacepointMeasurement.h"
    "/home/hexh/simulation/ChnsRoot/GenFit-master/./utilities/include/mySpacepointDetectorHit.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/home/hexh/simulation/ChnsRoot/buildChns/lib/G__GenFit-masterDict_rdict.pcm"
    "/home/hexh/simulation/ChnsRoot/buildChns/lib/libGenFit-master.rootmap"
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
    "/home/hexh/simulation/ChnsRoot/buildChns/lib/libGenFit-master.so.0.0.0"
    "/home/hexh/simulation/ChnsRoot/buildChns/lib/libGenFit-master.so.0.0"
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/hexh/simulation/ChnsRoot/buildChns/lib/libGenFit-master.so")
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

