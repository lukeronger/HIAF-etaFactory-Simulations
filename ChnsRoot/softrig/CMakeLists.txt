# Create a library called "Rho" which includes the source files given in
# the array .
# The extension is already found.  Any number of sources could be listed here.

Set(SYSTEM_INCLUDE_DIRECTORIES
  ${SYSTEM_INCLUDE_DIRECTORIES} 
  ${BASE_INCLUDE_DIRECTORIES} 
)

Set(INCLUDE_DIRECTORIES
  ${CMAKE_SOURCE_DIR}/field 
  ${CMAKE_SOURCE_DIR}/trackbase 
  ${CMAKE_SOURCE_DIR}/ChnsData # put FairRecoCandidate to fairbase at some point
  ${CMAKE_SOURCE_DIR}/ChnsData/PidData # CAUTION we have a PANDA specific access: RhoGoodPhotonSelector auses ChnsPidCandidate
  ${CMAKE_SOURCE_DIR}/rho/RhoBase
  ${CMAKE_SOURCE_DIR}/rho/RhoMath
  ${CMAKE_SOURCE_DIR}/rho/RhoSelector
  ${CMAKE_SOURCE_DIR}/rho/RhoConstraints
  ${CMAKE_SOURCE_DIR}/rho/RhoTools
  ${CMAKE_SOURCE_DIR}/rho/RhoFitter
  ${CMAKE_SOURCE_DIR}/rho/RhoHistogram
  ${CMAKE_SOURCE_DIR}/ChnsTools/AnalysisTools
  ${CMAKE_SOURCE_DIR}/ChnsTools/ChnsParticleFitters
  ${CMAKE_SOURCE_DIR}/rho
  ${CMAKE_SOURCE_DIR}/softrig
)

Include_Directories(${INCLUDE_DIRECTORIES})
Include_Directories(SYSTEM ${SYSTEM_INCLUDE_DIRECTORIES})

set(LINK_DIRECTORIES
${ROOT_LIBRARY_DIR}
${FAIRROOT_LIBRARY_DIR}
)
 
link_directories( ${LINK_DIRECTORIES})

set(SRCS 
ChnsSoftTriggerTask.cxx
ChnsSoftTriggerLine.cxx
ChnsOnlineFilterInfo.cxx
ChnsAnaWithTrigger.cxx
)

set(LINKDEF  SofTrig_LinkDef.h)
set(LIBRARY_NAME SofTrig)

set(DEPENDENCIES Base ChnsData Rho AnalysisTools TrkBase TMVA)

GENERATE_LIBRARY()
