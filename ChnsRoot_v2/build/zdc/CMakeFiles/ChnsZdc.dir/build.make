# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/eicc/software/cmake/bin/cmake

# The command to remove a file.
RM = /home/eicc/software/cmake/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build

# Include any dependencies generated for this target.
include zdc/CMakeFiles/ChnsZdc.dir/depend.make

# Include the progress variables for this target.
include zdc/CMakeFiles/ChnsZdc.dir/progress.make

# Include the compile flags for this target's objects.
include zdc/CMakeFiles/ChnsZdc.dir/flags.make

zdc/G__ChnsZdcDict.cxx: ../zdc/ChnsZdc.h
zdc/G__ChnsZdcDict.cxx: ../zdc/ChnsZdcContFact.h
zdc/G__ChnsZdcDict.cxx: ../zdc/ChnsZdcGeo.h
zdc/G__ChnsZdcDict.cxx: ../zdc/ChnsZdcGeoPar.h
zdc/G__ChnsZdcDict.cxx: ../zdc/ChnsZdcPoint.h
zdc/G__ChnsZdcDict.cxx: ../zdc/ChnsZdcLinkDef.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__ChnsZdcDict.cxx, G__ChnsZdcDict_rdict.pcm, ../lib/libChnsZdc.rootmap"
	cd /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/zdc && ./generate_dictionary_G__ChnsZdcDict.sh
	cd /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/zdc && /home/eicc/software/cmake/bin/cmake -E copy_if_different /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/zdc/G__ChnsZdcDict_rdict.pcm /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/lib/G__ChnsZdcDict_rdict.pcm

zdc/G__ChnsZdcDict_rdict.pcm: zdc/G__ChnsZdcDict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate zdc/G__ChnsZdcDict_rdict.pcm

lib/libChnsZdc.rootmap: zdc/G__ChnsZdcDict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libChnsZdc.rootmap

zdc/CMakeFiles/ChnsZdc.dir/ChnsZdc.cxx.o: zdc/CMakeFiles/ChnsZdc.dir/flags.make
zdc/CMakeFiles/ChnsZdc.dir/ChnsZdc.cxx.o: ../zdc/ChnsZdc.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object zdc/CMakeFiles/ChnsZdc.dir/ChnsZdc.cxx.o"
	cd /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ChnsZdc.dir/ChnsZdc.cxx.o -c /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/zdc/ChnsZdc.cxx

zdc/CMakeFiles/ChnsZdc.dir/ChnsZdc.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ChnsZdc.dir/ChnsZdc.cxx.i"
	cd /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/zdc/ChnsZdc.cxx > CMakeFiles/ChnsZdc.dir/ChnsZdc.cxx.i

zdc/CMakeFiles/ChnsZdc.dir/ChnsZdc.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ChnsZdc.dir/ChnsZdc.cxx.s"
	cd /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/zdc/ChnsZdc.cxx -o CMakeFiles/ChnsZdc.dir/ChnsZdc.cxx.s

zdc/CMakeFiles/ChnsZdc.dir/ChnsZdcContFact.cxx.o: zdc/CMakeFiles/ChnsZdc.dir/flags.make
zdc/CMakeFiles/ChnsZdc.dir/ChnsZdcContFact.cxx.o: ../zdc/ChnsZdcContFact.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object zdc/CMakeFiles/ChnsZdc.dir/ChnsZdcContFact.cxx.o"
	cd /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ChnsZdc.dir/ChnsZdcContFact.cxx.o -c /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/zdc/ChnsZdcContFact.cxx

zdc/CMakeFiles/ChnsZdc.dir/ChnsZdcContFact.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ChnsZdc.dir/ChnsZdcContFact.cxx.i"
	cd /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/zdc/ChnsZdcContFact.cxx > CMakeFiles/ChnsZdc.dir/ChnsZdcContFact.cxx.i

zdc/CMakeFiles/ChnsZdc.dir/ChnsZdcContFact.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ChnsZdc.dir/ChnsZdcContFact.cxx.s"
	cd /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/zdc/ChnsZdcContFact.cxx -o CMakeFiles/ChnsZdc.dir/ChnsZdcContFact.cxx.s

zdc/CMakeFiles/ChnsZdc.dir/ChnsZdcGeo.cxx.o: zdc/CMakeFiles/ChnsZdc.dir/flags.make
zdc/CMakeFiles/ChnsZdc.dir/ChnsZdcGeo.cxx.o: ../zdc/ChnsZdcGeo.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object zdc/CMakeFiles/ChnsZdc.dir/ChnsZdcGeo.cxx.o"
	cd /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ChnsZdc.dir/ChnsZdcGeo.cxx.o -c /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/zdc/ChnsZdcGeo.cxx

zdc/CMakeFiles/ChnsZdc.dir/ChnsZdcGeo.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ChnsZdc.dir/ChnsZdcGeo.cxx.i"
	cd /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/zdc/ChnsZdcGeo.cxx > CMakeFiles/ChnsZdc.dir/ChnsZdcGeo.cxx.i

zdc/CMakeFiles/ChnsZdc.dir/ChnsZdcGeo.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ChnsZdc.dir/ChnsZdcGeo.cxx.s"
	cd /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/zdc/ChnsZdcGeo.cxx -o CMakeFiles/ChnsZdc.dir/ChnsZdcGeo.cxx.s

zdc/CMakeFiles/ChnsZdc.dir/ChnsZdcGeoPar.cxx.o: zdc/CMakeFiles/ChnsZdc.dir/flags.make
zdc/CMakeFiles/ChnsZdc.dir/ChnsZdcGeoPar.cxx.o: ../zdc/ChnsZdcGeoPar.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object zdc/CMakeFiles/ChnsZdc.dir/ChnsZdcGeoPar.cxx.o"
	cd /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ChnsZdc.dir/ChnsZdcGeoPar.cxx.o -c /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/zdc/ChnsZdcGeoPar.cxx

zdc/CMakeFiles/ChnsZdc.dir/ChnsZdcGeoPar.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ChnsZdc.dir/ChnsZdcGeoPar.cxx.i"
	cd /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/zdc/ChnsZdcGeoPar.cxx > CMakeFiles/ChnsZdc.dir/ChnsZdcGeoPar.cxx.i

zdc/CMakeFiles/ChnsZdc.dir/ChnsZdcGeoPar.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ChnsZdc.dir/ChnsZdcGeoPar.cxx.s"
	cd /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/zdc/ChnsZdcGeoPar.cxx -o CMakeFiles/ChnsZdc.dir/ChnsZdcGeoPar.cxx.s

zdc/CMakeFiles/ChnsZdc.dir/ChnsZdcPoint.cxx.o: zdc/CMakeFiles/ChnsZdc.dir/flags.make
zdc/CMakeFiles/ChnsZdc.dir/ChnsZdcPoint.cxx.o: ../zdc/ChnsZdcPoint.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object zdc/CMakeFiles/ChnsZdc.dir/ChnsZdcPoint.cxx.o"
	cd /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ChnsZdc.dir/ChnsZdcPoint.cxx.o -c /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/zdc/ChnsZdcPoint.cxx

zdc/CMakeFiles/ChnsZdc.dir/ChnsZdcPoint.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ChnsZdc.dir/ChnsZdcPoint.cxx.i"
	cd /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/zdc/ChnsZdcPoint.cxx > CMakeFiles/ChnsZdc.dir/ChnsZdcPoint.cxx.i

zdc/CMakeFiles/ChnsZdc.dir/ChnsZdcPoint.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ChnsZdc.dir/ChnsZdcPoint.cxx.s"
	cd /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/zdc/ChnsZdcPoint.cxx -o CMakeFiles/ChnsZdc.dir/ChnsZdcPoint.cxx.s

zdc/CMakeFiles/ChnsZdc.dir/G__ChnsZdcDict.cxx.o: zdc/CMakeFiles/ChnsZdc.dir/flags.make
zdc/CMakeFiles/ChnsZdc.dir/G__ChnsZdcDict.cxx.o: zdc/G__ChnsZdcDict.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object zdc/CMakeFiles/ChnsZdc.dir/G__ChnsZdcDict.cxx.o"
	cd /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -o CMakeFiles/ChnsZdc.dir/G__ChnsZdcDict.cxx.o -c /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/zdc/G__ChnsZdcDict.cxx

zdc/CMakeFiles/ChnsZdc.dir/G__ChnsZdcDict.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ChnsZdc.dir/G__ChnsZdcDict.cxx.i"
	cd /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -E /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/zdc/G__ChnsZdcDict.cxx > CMakeFiles/ChnsZdc.dir/G__ChnsZdcDict.cxx.i

zdc/CMakeFiles/ChnsZdc.dir/G__ChnsZdcDict.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ChnsZdc.dir/G__ChnsZdcDict.cxx.s"
	cd /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/zdc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -S /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/zdc/G__ChnsZdcDict.cxx -o CMakeFiles/ChnsZdc.dir/G__ChnsZdcDict.cxx.s

# Object files for target ChnsZdc
ChnsZdc_OBJECTS = \
"CMakeFiles/ChnsZdc.dir/ChnsZdc.cxx.o" \
"CMakeFiles/ChnsZdc.dir/ChnsZdcContFact.cxx.o" \
"CMakeFiles/ChnsZdc.dir/ChnsZdcGeo.cxx.o" \
"CMakeFiles/ChnsZdc.dir/ChnsZdcGeoPar.cxx.o" \
"CMakeFiles/ChnsZdc.dir/ChnsZdcPoint.cxx.o" \
"CMakeFiles/ChnsZdc.dir/G__ChnsZdcDict.cxx.o"

# External object files for target ChnsZdc
ChnsZdc_EXTERNAL_OBJECTS =

lib/libChnsZdc.so.0.0.0: zdc/CMakeFiles/ChnsZdc.dir/ChnsZdc.cxx.o
lib/libChnsZdc.so.0.0.0: zdc/CMakeFiles/ChnsZdc.dir/ChnsZdcContFact.cxx.o
lib/libChnsZdc.so.0.0.0: zdc/CMakeFiles/ChnsZdc.dir/ChnsZdcGeo.cxx.o
lib/libChnsZdc.so.0.0.0: zdc/CMakeFiles/ChnsZdc.dir/ChnsZdcGeoPar.cxx.o
lib/libChnsZdc.so.0.0.0: zdc/CMakeFiles/ChnsZdc.dir/ChnsZdcPoint.cxx.o
lib/libChnsZdc.so.0.0.0: zdc/CMakeFiles/ChnsZdc.dir/G__ChnsZdcDict.cxx.o
lib/libChnsZdc.so.0.0.0: zdc/CMakeFiles/ChnsZdc.dir/build.make
lib/libChnsZdc.so.0.0.0: zdc/CMakeFiles/ChnsZdc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX shared library ../lib/libChnsZdc.so"
	cd /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/zdc && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ChnsZdc.dir/link.txt --verbose=$(VERBOSE)
	cd /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/zdc && $(CMAKE_COMMAND) -E cmake_symlink_library ../lib/libChnsZdc.so.0.0.0 ../lib/libChnsZdc.so.0.0 ../lib/libChnsZdc.so

lib/libChnsZdc.so.0.0: lib/libChnsZdc.so.0.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libChnsZdc.so.0.0

lib/libChnsZdc.so: lib/libChnsZdc.so.0.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libChnsZdc.so

# Rule to build all files generated by this target.
zdc/CMakeFiles/ChnsZdc.dir/build: lib/libChnsZdc.so

.PHONY : zdc/CMakeFiles/ChnsZdc.dir/build

zdc/CMakeFiles/ChnsZdc.dir/clean:
	cd /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/zdc && $(CMAKE_COMMAND) -P CMakeFiles/ChnsZdc.dir/cmake_clean.cmake
.PHONY : zdc/CMakeFiles/ChnsZdc.dir/clean

zdc/CMakeFiles/ChnsZdc.dir/depend: zdc/G__ChnsZdcDict.cxx
zdc/CMakeFiles/ChnsZdc.dir/depend: zdc/G__ChnsZdcDict_rdict.pcm
zdc/CMakeFiles/ChnsZdc.dir/depend: lib/libChnsZdc.rootmap
	cd /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2 /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/zdc /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/zdc /data2/rwang/githubs/HIAF-etaFactory-Simulations/ChnsRoot_v2/build/zdc/CMakeFiles/ChnsZdc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : zdc/CMakeFiles/ChnsZdc.dir/depend

