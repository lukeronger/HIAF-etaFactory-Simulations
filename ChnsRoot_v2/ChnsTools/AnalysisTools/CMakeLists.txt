# Create a library called "AnalysisTools"

Set(SYSTEM_INCLUDE_DIRECTORIES
  ${SYSTEM_INCLUDE_DIRECTORIES}
  ${BASE_INCLUDE_DIRECTORIES}
  ${GEANT3_INCLUDE_DIR}
)

Set(INCLUDE_DIRECTORIES
  ${CMAKE_SOURCE_DIR}/field
  ${CMAKE_SOURCE_DIR}/trackbase
  ${CMAKE_SOURCE_DIR}/ChnsData
  ${CMAKE_SOURCE_DIR}/ChnsData/TrackData
  ${CMAKE_SOURCE_DIR}/ChnsData/PidData
  ${CMAKE_SOURCE_DIR}/rho
  ${CMAKE_SOURCE_DIR}/rho/RhoBase
  ${CMAKE_SOURCE_DIR}/rho/RhoTools
  ${CMAKE_SOURCE_DIR}/rho/RhoSelector
  ${CMAKE_SOURCE_DIR}/rho/RhoMath
  ${CMAKE_SOURCE_DIR}/rho/RhoHistogram
  ${CMAKE_SOURCE_DIR}/rho/RhoFitter
  ${CMAKE_SOURCE_DIR}/rho/DecayTreeFitter
  ${CMAKE_SOURCE_DIR}/ChnsTools/ChnsParticleFitters
  ${CMAKE_SOURCE_DIR}/ChnsTools/AnalysisTools
  #${CMAKE_SOURCE_DIR}/ChnsTools/AnalysisTools/Fitter
  #${CMAKE_SOURCE_DIR}/ChnsTools/AnalysisTools/DecayTreeFitter
  ${CMAKE_SOURCE_DIR}/softrig
  ${CMAKE_SOURCE_DIR}/geane
)

Include_Directories(${INCLUDE_DIRECTORIES})
Include_Directories(SYSTEM ${SYSTEM_INCLUDE_DIRECTORIES})

set(LINK_DIRECTORIES
${ROOT_LIBRARY_DIR}
${FAIRROOT_LIBRARY_DIR}
)

link_directories( ${LINK_DIRECTORIES})

set(SRCS
#ChnsMicroWriter.cxx
#ChnsSimplePidInfo.cxx
#ChnsMicroCandidate.cxx
ChnsEventInfo.cxx
#ChnsEventReader.cxx
ChnsPidListMaker.cxx
ChnsAnalysis.cxx
#ChnsAnalysisCalcTools.cxx
ChnsSimpleAnalysis.cxx
ChnsAnalysisTask.cxx
ChnsMyAnalysisTask.cxx
ChnsAnaTask.cxx
ChnsListDefiner.cxx
ChnsListProvider.cxx
ChnsMcListConverter.cxx
ChnsAnaPidCombiner.cxx
ChnsAnaPidSelector.cxx
ChnsAnaContFact.cxx
ChnsAnaSelectorPar.cxx
#ChnsMcTruthMatch.cxx
ChnsGoodTrackSelector.cxx
ChnsEventShape.cxx
#ChnsAnaCovTool.cxx
ChnsRhoTupleQA.cxx
ChnsParticleQATask.cxx
ChnsSimpleCombiner.cxx
ChnsSimpleCombinerTask.cxx
ChnsSimpleNtuple.cxx
##Fitter/ChnsVtxFitterParticle.cxx
##Fitter/ChnsVtxFitter_Init.cxx
##Fitter/ChnsVtxFitterError.cxx
##Fitter/ChnsVtxFitter.cxx
#Fitter/Chns4CFitter.cxx
#Fitter/ChnsDecayTreeFitter.cxx
#Fitter/ChnsKinVtxFitter.cxx
#Fitter/ChnsKinFitter.cxx
#Fitter/ChnsVtxPoca.cxx
#Fitter/ChnsVtxPRG.cxx
#Fitter/ChnsKalmanVtxFitter.cxx
StrTok.cxx
)

set(LINKDEF AnalysisToolsLinkDef.h)
set(LIBRARY_NAME AnalysisTools)

set(DEPENDENCIES Base ChnsData Rho RhoFitter ParticleFitters TrkBase Geane)

GENERATE_LIBRARY()
