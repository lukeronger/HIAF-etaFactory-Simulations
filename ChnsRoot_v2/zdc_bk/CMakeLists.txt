 ################################################################################
 #    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    #
 #                                                                              #
 #              This software is distributed under the terms of the             # 
 #              GNU Lesser General Public Licence (LGPL) version 3,             #  
 #                  copied verbatim in the file "LICENSE"                       #
 ################################################################################
# Create a library called "libChnsZdc" which includes the source files given in
# the array .
# The extension is already found.  Any number of sources could be listed here.

set(INCLUDE_DIRECTORIES
${BASE_INCLUDE_DIRECTORIES}
#put here all directories where header files are located
${CMAKE_SOURCE_DIR}/ChnsData
${CMAKE_SOURCE_DIR}/zdc

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
ChnsZdc.cxx
ChnsZdcContFact.cxx
ChnsZdcGeo.cxx
ChnsZdcGeoPar.cxx
ChnsZdcPoint.cxx
)

Set(LINKDEF ChnsZdcLinkDef.h)
Set(LIBRARY_NAME ChnsZdc)
Set(DEPENDENCIES
    Base
)

GENERATE_LIBRARY()
