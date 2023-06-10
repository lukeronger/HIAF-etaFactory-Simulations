# Create a library called "libGen" which includes the source files given in
# the array .
# The extension is already found.  Any number of sources could be listed here.

set(INCLUDE_DIRECTORIES
${PYTHIA8_INCLUDE_DIR}
${SIMPATH}/include
${BASE_INCLUDE_DIRECTORIES} 
${CMAKE_SOURCE_DIR}/ChnsGenerators
${CMAKE_SOURCE_DIR}/generators
${CMAKE_SOURCE_DIR}/ChnsData
${CMAKE_SOURCE_DIR}/gconfig

)

include_directories(${INCLUDE_DIRECTORIES})
include_directories(${SYSTEM_INCLUDE_DIRECTORIES})

set(LINK_DIRECTORIES
${ROOT_LIBRARY_DIR}
${FAIRROOT_LIBRARY_DIR}
${SIMPATH}/lib

)

 
link_directories( ${LINK_DIRECTORIES})

set(SRCS
Pythia6Generator.cxx
#Pythia8Generator.cxx
ChnsBoxGenerator.cxx
ChnsEvtGenGenerator.cxx
ChnsPlutoGenerator.cxx
ChnsJamGenerator.cxx
PDataBase.cxx
PMesh.cxx
PParticle.cxx
PStaticData.cxx
PStdData.cxx
PValues.cxx

)

set(LINKDEF  GenLinkDef.h)
set(LIBRARY_NAME ChnsGen)

set(DEPENDENCIES  Base ChnsData pythia8 Pythia6)

GENERATE_LIBRARY()
