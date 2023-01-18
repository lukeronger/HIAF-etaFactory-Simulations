# Install script for directory: /home/liangyt/EiccRoot/GenFit-master/GenFit-master

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
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES
    "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/./core/include/"
    "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/./eventDisplay/include/"
    "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/./fields/include/"
    "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/./finitePlanes/include/"
    "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/./fitters/include/"
    "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/./GBL/include/"
    "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/./measurements/include/"
    "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/./trackReps/include/"
    "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/./utilities/include/"
    "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/./GFRave/include/"
    "/home/liangyt/local/include"
    REGEX "/\\.svn$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/build/coreRoot.rootmap"
    "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/build/coreRootDict_rdict.pcm"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/build/eventDisplayRoot.rootmap"
    "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/build/eventDisplayRootDict_rdict.pcm"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/build/fittersRoot.rootmap"
    "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/build/fittersRootDict_rdict.pcm"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/build/GBLRoot.rootmap"
    "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/build/GBLRootDict_rdict.pcm"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/build/measurementsRoot.rootmap"
    "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/build/measurementsRootDict_rdict.pcm"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/build/trackRepsRoot.rootmap"
    "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/build/trackRepsRootDict_rdict.pcm"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/build/utilitiesRoot.rootmap"
    "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/build/utilitiesRootDict_rdict.pcm"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES
    "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/build/GFRaveRoot.rootmap"
    "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/build/GFRaveRootDict_rdict.pcm"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgenfit2.so.2.2.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgenfit2.so.2.2"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/build/lib/libgenfit2.so.2.2.0"
    "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/build/lib/libgenfit2.so.2.2"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgenfit2.so.2.2.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgenfit2.so.2.2"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/eicc/software/FairSoft/install/lib:/home/liangyt/local/lib:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgenfit2.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgenfit2.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgenfit2.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/build/lib/libgenfit2.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgenfit2.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgenfit2.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgenfit2.so"
         OLD_RPATH "/home/eicc/software/FairSoft/install/lib:/home/liangyt/local/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libgenfit2.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/liangyt/EiccRoot/GenFit-master/GenFit-master/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
