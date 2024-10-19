# Install script for directory: /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/ChnsGenerators/EvtGen/EvtGen

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
  foreach(file
      "$ENV{DESTDIR}/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libEvtGen.so.0.0.0"
      "$ENV{DESTDIR}/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libEvtGen.so.0.0"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libEvtGen.so.0.0.0;/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libEvtGen.so.0.0")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib" TYPE SHARED_LIBRARY FILES
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libEvtGen.so.0.0.0"
    "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libEvtGen.so.0.0"
    )
  foreach(file
      "$ENV{DESTDIR}/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libEvtGen.so.0.0.0"
      "$ENV{DESTDIR}/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libEvtGen.so.0.0"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/eicc/software/FairSoft/install/lib:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libEvtGen.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libEvtGen.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libEvtGen.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libEvtGen.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib" TYPE SHARED_LIBRARY FILES "/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libEvtGen.so")
  if(EXISTS "$ENV{DESTDIR}/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libEvtGen.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libEvtGen.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libEvtGen.so"
         OLD_RPATH "/home/eicc/software/FairSoft/install/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/libEvtGen.so")
    endif()
  endif()
endif()

