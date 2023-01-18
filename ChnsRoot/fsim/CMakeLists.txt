# Create a library called "libfsim"

Set(SYSTEM_INCLUDE_DIRECTORIES
  ${SYSTEM_INCLUDE_DIRECTORIES}
  ${BASE_INCLUDE_DIRECTORIES}
)

Set(INCLUDE_DIRECTORIES
  ${CMAKE_SOURCE_DIR}/trackbase
  ${CMAKE_SOURCE_DIR}/ChnsData
  ${CMAKE_SOURCE_DIR}/ChnsData/PidData
  ${CMAKE_SOURCE_DIR}/passive
  ${CMAKE_SOURCE_DIR}/fsim
  ${CMAKE_SOURCE_DIR}/fsim/scrut
  #  ${CMAKE_SOURCE_DIR}/pid
  ${CMAKE_SOURCE_DIR}/rho
  ${CMAKE_SOURCE_DIR}/rho/RhoBase
  ${CMAKE_SOURCE_DIR}/rho/RhoSelector
  ${CMAKE_SOURCE_DIR}/ChnsTools/AnalysisTools
)

Include_Directories(${INCLUDE_DIRECTORIES})
Include_Directories(SYSTEM ${SYSTEM_INCLUDE_DIRECTORIES})

set(LINK_DIRECTORIES
${ROOT_LIBRARY_DIR}
${FAIRROOT_LIBRARY_DIR}
)

link_directories( ${LINK_DIRECTORIES})

set(SRCS
ChnsFastSim.cxx
ChnsFsmTrack.cxx
ChnsFsmResponse.cxx
ChnsFsmAbsDet.cxx
ChnsFsmDetFactory.cxx
ChnsFsmEmcBarrel.cxx
ChnsFsmEmcBwCap.cxx
ChnsFsmEmcFwCap.cxx
ChnsFsmEmcFS.cxx
ChnsFsmTpc.cxx
ChnsFsmStt.cxx
ChnsFsmMdcFS.cxx
ChnsFsmMdcTS.cxx
ChnsFsmRich.cxx
ChnsFsmDrcDisc.cxx
ChnsFsmDrcBarrel.cxx
ChnsFsmEffTracker.cxx
ChnsFsmMvd.cxx
ChnsFsmMvd2.cxx
ChnsFsmTof.cxx
ChnsFsmTofBwCap.cxx
ChnsFsmTofFwCap.cxx
ChnsFsmGemBwCap.cxx
ChnsFsmGemFwCap.cxx
ChnsFsmSimpleTracker.cxx
ChnsFsmCmpDet.cxx
ChnsFsmCombiDet.cxx
ChnsFsmRandom.cxx
ChnsFsmMvdPid.cxx
ChnsFsmTpcPid.cxx
ChnsFsmSttPid.cxx
ChnsFsmSimpleVtx.cxx
ChnsFsmMdtPid.cxx
ChnsFsmEmcPid.cxx
ChnsFsmIdealPid.cxx
)



set(LINKDEF fsimLinkDef.h)
set(LIBRARY_NAME fsim)

set(DEPENDENCIES Base ParBase ChnsData AnalysisTools)

GENERATE_LIBRARY()
