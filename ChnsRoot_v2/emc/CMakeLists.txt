# Create a library called "libChnsEmc" which includes the source files given in
# the array .
# The extension is already found.  Any number of sources could be listed here.

set(INCLUDE_DIRECTORIES
${BASE_INCLUDE_DIRECTORIES}
#put here all directories where header files are located
${CMAKE_SOURCE_DIR}/ChnsData
${CMAKE_SOURCE_DIR}/emc/EmcMC
${CMAKE_SOURCE_DIR}/emc/EmcReco
${CMAKE_SOURCE_DIR}/emc
)

include_directories(${INCLUDE_DIRECTORIES})
include_directories(${SYSTEM_INCLUDE_DIRECTORIES})

set(LINK_DIRECTORIES
${ROOT_LIBRARY_DIR}
${FAIRROOT_LIBRARY_DIR}

) 

link_directories( ${LINK_DIRECTORIES})

set(SRCS
#Put here your sourcefiles
ChnsEmcReadPar.cxx
ChnsEmcContFact.cxx
EmcMC/ChnsEmc.cxx
EmcMC/ChnsEmcGeo.cxx
EmcMC/ChnsEmcGeoPar.cxx
EmcMC/ChnsEmcPoint.cxx
EmcReco/ChnsEmcDigiTask.cxx
EmcReco/ChnsEmcDigi.cxx
EmcReco/ChnsEmcClusterTask.cxx
EmcReco/ChnsEmcCluster.cxx
EmcReco/ChnsEmcParticleTask.cxx
EmcReco/ChnsEmcParticle.cxx

)

Set(LINKDEF ChnsEmcLinkDef.h)
Set(LIBRARY_NAME ChnsEmc)
Set(DEPENDENCIES
    Base GeoBase ParBase ChnsData
)

GENERATE_LIBRARY()

