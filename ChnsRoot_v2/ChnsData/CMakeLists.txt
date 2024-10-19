 # Create a library called "libChnsData" 

Set(SYSTEM_INCLUDE_DIRECTORIES
  ${SYSTEM_INCLUDE_DIRECTORIES}
  ${BASE_INCLUDE_DIRECTORIES}
)

set(INCLUDE_DIRECTORIES
${BASE_INCLUDE_DIRECTORIES}
${CMAKE_SOURCE_DIR}/ChnsData
${CMAKE_SOURCE_DIR}/ChnsData/PidData
${CMAKE_SOURCE_DIR}/ChnsData/TrackData
${CMAKE_SOURCE_DIR}/trackbase
)

include_directories( ${INCLUDE_DIRECTORIES})
include_directories(${SYSTEM_INCLUDE_DIRECTORIES})

set(LINK_DIRECTORIES
${ROOT_LIBRARY_DIR}
${FAIRROOT_LIBRARY_DIR}
${CMAKE_SOURCE_DIR}/ChnsData
${CMAKE_SOURCE_DIR}/ChnsData/PidData
${CMAKE_SOURCE_DIR}/ChnsData/TrackData
)
 
link_directories( ${LINK_DIRECTORIES})

set(SRCS
ChnsStack.cxx 
ChnsMCTrack.cxx
FairRecoCandidate.cxx
PidData/ChnsPidCandidate.cxx
PidData/ChnsPidProbability.cxx
PidData/ChnsPidBremCorrected4Mom.cxx

TrackData/ChnsTrackCandHit.cxx
TrackData/ChnsTrackCand.cxx
TrackData/ChnsTrack.cxx
TrackData/ChnsSimpleTrack.cxx
TrackData/ChnsTrackID.cxx

FairRecoCandidate.cxx
#FairTrackPar.cxx
)

Set(HEADERS
ChnsStack.h
ChnsMCTrack.h
PidData/ChnsPidCandidate.h
PidData/ChnsPidProbability.h
PidData/ChnsPidBremCorrected4Mom.h

TrackData/ChnsTrackCandHit.h
TrackData/ChnsTrackCand.h
TrackData/ChnsTrack.h
TrackData/ChnsSimpleTrack.h
TrackData/ChnsTrackID.h

FairRecoCandidate.h
#FairTrackPar.h
)
#Set(LINKDEF MCStackLinkDef.h)
Set(LINKDEF ChnsDataLinkDef.h)
Set(LIBRARY_NAME ChnsData)
Set(DEPENDENCIES Base EG Physics Core GeoBase TrkBase)

GENERATE_LIBRARY()

