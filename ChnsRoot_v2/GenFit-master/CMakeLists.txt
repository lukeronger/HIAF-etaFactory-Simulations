# Create a library called "libgenfit" which includes the source files given in
# the array .
# The extension is already found.  Any number of sources could be listed here.

Set(SYSTEM_INCLUDE_DIRECTORIES 
  ${BASE_INCLUDE_DIRECTORIES} 
  ${SYSTEM_INCLUDE_DIRECTORIES} 
  ${CLHEP_INCLUDE_DIR}
)

Set(INCLUDE_DIRECTORIES 
  ${CMAKE_SOURCE_DIR}/GenFit-master
  ${CMAKE_SOURCE_DIR}/GenFit-master/core/include
  ${CMAKE_SOURCE_DIR}/GenFit-master/eventDisplay/include
  ${CMAKE_SOURCE_DIR}/GenFit-master/fields/include
  ${CMAKE_SOURCE_DIR}/GenFit-master/finitePlanes/include
  ${CMAKE_SOURCE_DIR}/GenFit-master/fitters/include
  ${CMAKE_SOURCE_DIR}/GenFit-master/GBL/include
  ${CMAKE_SOURCE_DIR}/GenFit-master/GFRave/include
  ${CMAKE_SOURCE_DIR}/GenFit-master/measurements/include
  ${CMAKE_SOURCE_DIR}/GenFit-master/trackReps/include
  ${CMAKE_SOURCE_DIR}/GenFit-master/utilities/include
  ${CMAKE_SOURCE_DIR}/GenFit-master/RaveInterface  #rave include file, with vcconsfig.h
  #  ${CMAKE_SOURCE_DIR}/rave-master/RaveBase/RaveInterface    #rave include file
  #${CMAKE_SOURCE_DIR}/rave-master/                          #vcconfig.h config.h   in rave-master
)

Include_Directories(${INCLUDE_DIRECTORIES})
Include_Directories(SYSTEM ${SYSTEM_INCLUDE_DIRECTORIES})
Include_Directories(BEFORE ${ROOT_INCLUDE_DIRS})


IF(DEFINED ENV{RAVEPATH})

	INCLUDE(FindPkgConfig)
	SET(ENV{PKG_CONFIG_PATH} $ENV{RAVEPATH})
	find_package(Rave REQUIRED)
	Set(RAVE True)
	MESSAGE(STATUS "Rave  ${Rave_LIB}")
ELSE()
        MESSAGE(STATUS "GFRave will not be built.")
ENDIF()

#IF(DEFINED ENV{RAVEPATH})


set(LINK_DIRECTORIES
${ROOT_LIBRARY_DIR}
${FAIRROOT_LIBRARY_DIR}
)
link_directories( ${LINK_DIRECTORIES})

#MESSAGE(STATUS "ROOT_LIBRARY_DIR = ${ROOT_LIBRARY_DIR}")



set(SRCS
./eventDisplay/src/EventDisplay.cc
./core/src/AbsFinitePlane.cc  
./core/src/AbsFitterInfo.cc   
./core/src/AbsTrackRep.cc  
./core/src/Exception.cc     
./core/src/FitStatus.cc  
./core/src/Material.cc              
./core/src/MeasurementOnPlane.cc  
./core/src/ThinScatterer.cc  
./core/src/TrackCand.cc     
./core/src/Track.cc
./core/src/AbsFitter.cc       
./core/src/AbsMeasurement.cc  
./core/src/DetPlane.cc     
./core/src/FieldManager.cc  
./core/src/IO.cc         
./core/src/MeasuredStateOnPlane.cc  
./core/src/StateOnPlane.cc        
./core/src/Tools.cc          
./core/src/TrackCandHit.cc  
./core/src/TrackPoint.cc
./finitePlanes/src/RectangularFinitePlane.cc
./trackReps/src/MaterialEffects.cc  
./trackReps/src/MplTrackRep.cc  
./trackReps/src/RKTools.cc  
./trackReps/src/RKTrackRep.cc  
./trackReps/src/StepLimits.cc  
./trackReps/src/TGeoMaterialInterface.cc
./measurements/src/FullMeasurement.cc  
./measurements/src/HMatrixU.cc     
./measurements/src/HMatrixUV.cc  
./measurements/src/ProlateSpacepointMeasurement.cc  
./measurements/src/WireMeasurement.cc     
./measurements/src/WirePointMeasurement.cc
./measurements/src/HMatrixPhi.cc       
./measurements/src/HMatrixUnit.cc  
./measurements/src/HMatrixV.cc   
./measurements/src/PlanarMeasurement.cc   
./measurements/src/SpacepointMeasurement.cc         
./measurements/src/WireMeasurementNew.cc  
./measurements/src/WireTrackCandHit.cc
./fitters/src/KalmanFitter.cc
./fitters/src/KalmanFitterInfo.cc
./fitters/src/AbsKalmanFitter.cc
./fitters/src/KalmanFitterRefTrack.cc
./fitters/src/DAF.cc
./fitters/src/KalmanFitStatus.cc
./fitters/src/KalmanFittedStateOnPlane.cc
./fitters/src/ReferenceStateOnPlane.cc
./fields/src/ConstField.cc
./GBL/src/BorderedBandMatrix.cc  
./GBL/src/GblData.cc  
./GBL/src/GblFitter.cc  
./GBL/src/GblFitterInfo.cc  
./GBL/src/GblPoint.cc  
./GBL/src/GblTrajectory.cc  
./GBL/src/GFGbl.cc  
./GBL/src/MilleBinary.cc  
./GBL/src/VMatrix.cc
./utilities/src/HelixTrackModel.cc  
./utilities/src/MeasurementCreator.cc
)

IF(DEFINED RAVE)
  set(SRCS
	${SRCS}
	./GFRave/src/GFRaveConverters.cc
	./GFRave/src/GFRaveMagneticField.cc
	./GFRave/src/GFRavePropagator.cc
	./GFRave/src/GFRaveTrackParameters.cc
	./GFRave/src/GFRaveVertex.cc
	./GFRave/src/GFRaveVertexFactory.cc
	)
ENDIF()


set(HEADERS
./eventDisplay/include/EventDisplay.h
./core/include/AbsFinitePlane.h
./core/include/AbsFitterInfo.h
./core/include/AbsTrackRep.h
./core/include/Exception.h
./core/include/FitStatus.h
./core/include/Material.h
./core/include/MeasurementOnPlane.h
./core/include/ThinScatterer.h
./core/include/TrackCand.h
./core/include/Track.h
./core/include/AbsFitter.h
./core/include/AbsMeasurement.h
./core/include/DetPlane.h
./core/include/FieldManager.h
./core/include/IO.h
./core/include/MeasuredStateOnPlane.h
./core/include/StateOnPlane.h
./core/include/Tools.h
./core/include/TrackCandHit.h
./core/include/TrackPoint.h
./finitePlanes/include/RectangularFinitePlane.h
./trackReps/include/MaterialEffects.h
./trackReps/include/MplTrackRep.h
./trackReps/include/RKTools.h
./trackReps/include/RKTrackRep.h
./trackReps/include/StepLimits.h
./trackReps/include/TGeoMaterialInterface.h
./measurements/include/FullMeasurement.h
./measurements/include/HMatrixU.h
./measurements/include/HMatrixUV.h
./measurements/include/ProlateSpacepointMeasurement.h
./measurements/include/WireMeasurement.h
./measurements/include/WirePointMeasurement.h
./measurements/include/HMatrixPhi.h
./measurements/include/HMatrixUnit.h
./measurements/include/HMatrixV.h
./measurements/include/PlanarMeasurement.h
./measurements/include/SpacepointMeasurement.h
./measurements/include/WireMeasurementNew.h
./measurements/include/WireTrackCandHit.h
./fitters/include/KalmanFitter.h
./fitters/include/KalmanFitterInfo.h
./fitters/include/AbsKalmanFitter.h
./fitters/include/KalmanFitterRefTrack.h
./fitters/include/DAF.h
./fitters/include/KalmanFitStatus.h
./fitters/include/KalmanFittedStateOnPlane.h
./fitters/include/ReferenceStateOnPlane.h
./fields/include/ConstField.h
./GBL/include/BorderedBandMatrix.h
./GBL/include/GblData.h
./GBL/include/GblFitter.h
./GBL/include/GblFitterInfo.h
./GBL/include/GblPoint.h
./GBL/include/GblTrajectory.h
./GBL/include/GFGbl.h
./GBL/include/MilleBinary.h
./GBL/include/VMatrix.h
./utilities/include/HelixTrackModel.h
./utilities/include/MeasurementCreator.h
./utilities/include/mySpacepointMeasurement.h
./utilities/include/mySpacepointDetectorHit.h
)

IF(DEFINED RAVE)
  set(HEADERS
        ${HEADERS}
	./GFRave/include/GFRaveConverters.h
	./GFRave/include/GFRaveMagneticField.h
	./GFRave/include/GFRavePropagator.h
	./GFRave/include/GFRaveTrackParameters.h
	./GFRave/include/GFRaveVertex.h
	./GFRave/include/GFRaveVertexFactory.h
        )
ENDIF()


set(LINKDEF  GenFit-masterLinkDef.h)
set(LIBRARY_NAME GenFit-master)

set(DEPENDENCIES ${ROOT_LIBS} Eve Base Core ${Rave_LIB})

GENERATE_LIBRARY()
