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
CMAKE_SOURCE_DIR = /home/hexh/simulation/ChnsRoot

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hexh/simulation/ChnsRoot/buildChns

# Include any dependencies generated for this target.
include ChnsGenerators/EvtGen/EvtGenBox/CMakeFiles/EvtGenBox.dir/depend.make

# Include the progress variables for this target.
include ChnsGenerators/EvtGen/EvtGenBox/CMakeFiles/EvtGenBox.dir/progress.make

# Include the compile flags for this target's objects.
include ChnsGenerators/EvtGen/EvtGenBox/CMakeFiles/EvtGenBox.dir/flags.make

ChnsGenerators/EvtGen/EvtGenBox/G__EvtGenBoxDict.cxx: ../ChnsGenerators/EvtGen/EvtGenBox/ChnsEvtGenBox.h
ChnsGenerators/EvtGen/EvtGenBox/G__EvtGenBoxDict.cxx: ../ChnsGenerators/EvtGen/EvtGenBox/EvtGenBoxLinkDef.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/hexh/simulation/ChnsRoot/buildChns/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__EvtGenBoxDict.cxx, G__EvtGenBoxDict_rdict.pcm, ../../../lib/libEvtGenBox.rootmap"
	cd /home/hexh/simulation/ChnsRoot/buildChns/ChnsGenerators/EvtGen/EvtGenBox && ./generate_dictionary_G__EvtGenBoxDict.sh
	cd /home/hexh/simulation/ChnsRoot/buildChns/ChnsGenerators/EvtGen/EvtGenBox && /home/eicc/software/cmake/bin/cmake -E copy_if_different /home/hexh/simulation/ChnsRoot/buildChns/ChnsGenerators/EvtGen/EvtGenBox/G__EvtGenBoxDict_rdict.pcm /home/hexh/simulation/ChnsRoot/buildChns/lib/G__EvtGenBoxDict_rdict.pcm

ChnsGenerators/EvtGen/EvtGenBox/G__EvtGenBoxDict_rdict.pcm: ChnsGenerators/EvtGen/EvtGenBox/G__EvtGenBoxDict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate ChnsGenerators/EvtGen/EvtGenBox/G__EvtGenBoxDict_rdict.pcm

lib/libEvtGenBox.rootmap: ChnsGenerators/EvtGen/EvtGenBox/G__EvtGenBoxDict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libEvtGenBox.rootmap

ChnsGenerators/EvtGen/EvtGenBox/CMakeFiles/EvtGenBox.dir/ChnsEvtGenBox.cxx.o: ChnsGenerators/EvtGen/EvtGenBox/CMakeFiles/EvtGenBox.dir/flags.make
ChnsGenerators/EvtGen/EvtGenBox/CMakeFiles/EvtGenBox.dir/ChnsEvtGenBox.cxx.o: ../ChnsGenerators/EvtGen/EvtGenBox/ChnsEvtGenBox.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hexh/simulation/ChnsRoot/buildChns/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object ChnsGenerators/EvtGen/EvtGenBox/CMakeFiles/EvtGenBox.dir/ChnsEvtGenBox.cxx.o"
	cd /home/hexh/simulation/ChnsRoot/buildChns/ChnsGenerators/EvtGen/EvtGenBox && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/EvtGenBox.dir/ChnsEvtGenBox.cxx.o -c /home/hexh/simulation/ChnsRoot/ChnsGenerators/EvtGen/EvtGenBox/ChnsEvtGenBox.cxx

ChnsGenerators/EvtGen/EvtGenBox/CMakeFiles/EvtGenBox.dir/ChnsEvtGenBox.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EvtGenBox.dir/ChnsEvtGenBox.cxx.i"
	cd /home/hexh/simulation/ChnsRoot/buildChns/ChnsGenerators/EvtGen/EvtGenBox && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hexh/simulation/ChnsRoot/ChnsGenerators/EvtGen/EvtGenBox/ChnsEvtGenBox.cxx > CMakeFiles/EvtGenBox.dir/ChnsEvtGenBox.cxx.i

ChnsGenerators/EvtGen/EvtGenBox/CMakeFiles/EvtGenBox.dir/ChnsEvtGenBox.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EvtGenBox.dir/ChnsEvtGenBox.cxx.s"
	cd /home/hexh/simulation/ChnsRoot/buildChns/ChnsGenerators/EvtGen/EvtGenBox && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hexh/simulation/ChnsRoot/ChnsGenerators/EvtGen/EvtGenBox/ChnsEvtGenBox.cxx -o CMakeFiles/EvtGenBox.dir/ChnsEvtGenBox.cxx.s

ChnsGenerators/EvtGen/EvtGenBox/CMakeFiles/EvtGenBox.dir/G__EvtGenBoxDict.cxx.o: ChnsGenerators/EvtGen/EvtGenBox/CMakeFiles/EvtGenBox.dir/flags.make
ChnsGenerators/EvtGen/EvtGenBox/CMakeFiles/EvtGenBox.dir/G__EvtGenBoxDict.cxx.o: ChnsGenerators/EvtGen/EvtGenBox/G__EvtGenBoxDict.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hexh/simulation/ChnsRoot/buildChns/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object ChnsGenerators/EvtGen/EvtGenBox/CMakeFiles/EvtGenBox.dir/G__EvtGenBoxDict.cxx.o"
	cd /home/hexh/simulation/ChnsRoot/buildChns/ChnsGenerators/EvtGen/EvtGenBox && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -o CMakeFiles/EvtGenBox.dir/G__EvtGenBoxDict.cxx.o -c /home/hexh/simulation/ChnsRoot/buildChns/ChnsGenerators/EvtGen/EvtGenBox/G__EvtGenBoxDict.cxx

ChnsGenerators/EvtGen/EvtGenBox/CMakeFiles/EvtGenBox.dir/G__EvtGenBoxDict.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EvtGenBox.dir/G__EvtGenBoxDict.cxx.i"
	cd /home/hexh/simulation/ChnsRoot/buildChns/ChnsGenerators/EvtGen/EvtGenBox && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -E /home/hexh/simulation/ChnsRoot/buildChns/ChnsGenerators/EvtGen/EvtGenBox/G__EvtGenBoxDict.cxx > CMakeFiles/EvtGenBox.dir/G__EvtGenBoxDict.cxx.i

ChnsGenerators/EvtGen/EvtGenBox/CMakeFiles/EvtGenBox.dir/G__EvtGenBoxDict.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EvtGenBox.dir/G__EvtGenBoxDict.cxx.s"
	cd /home/hexh/simulation/ChnsRoot/buildChns/ChnsGenerators/EvtGen/EvtGenBox && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Wno-old-style-cast -S /home/hexh/simulation/ChnsRoot/buildChns/ChnsGenerators/EvtGen/EvtGenBox/G__EvtGenBoxDict.cxx -o CMakeFiles/EvtGenBox.dir/G__EvtGenBoxDict.cxx.s

# Object files for target EvtGenBox
EvtGenBox_OBJECTS = \
"CMakeFiles/EvtGenBox.dir/ChnsEvtGenBox.cxx.o" \
"CMakeFiles/EvtGenBox.dir/G__EvtGenBoxDict.cxx.o"

# External object files for target EvtGenBox
EvtGenBox_EXTERNAL_OBJECTS =

lib/libEvtGenBox.so.0.0.0: ChnsGenerators/EvtGen/EvtGenBox/CMakeFiles/EvtGenBox.dir/ChnsEvtGenBox.cxx.o
lib/libEvtGenBox.so.0.0.0: ChnsGenerators/EvtGen/EvtGenBox/CMakeFiles/EvtGenBox.dir/G__EvtGenBoxDict.cxx.o
lib/libEvtGenBox.so.0.0.0: ChnsGenerators/EvtGen/EvtGenBox/CMakeFiles/EvtGenBox.dir/build.make
lib/libEvtGenBox.so.0.0.0: lib/libEvtGenExternal.so.0.0.0
lib/libEvtGenBox.so.0.0.0: lib/libEvtGen.so.0.0.0
lib/libEvtGenBox.so.0.0.0: ChnsGenerators/EvtGen/EvtGenBox/CMakeFiles/EvtGenBox.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hexh/simulation/ChnsRoot/buildChns/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared library ../../../lib/libEvtGenBox.so"
	cd /home/hexh/simulation/ChnsRoot/buildChns/ChnsGenerators/EvtGen/EvtGenBox && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/EvtGenBox.dir/link.txt --verbose=$(VERBOSE)
	cd /home/hexh/simulation/ChnsRoot/buildChns/ChnsGenerators/EvtGen/EvtGenBox && $(CMAKE_COMMAND) -E cmake_symlink_library ../../../lib/libEvtGenBox.so.0.0.0 ../../../lib/libEvtGenBox.so.0.0 ../../../lib/libEvtGenBox.so

lib/libEvtGenBox.so.0.0: lib/libEvtGenBox.so.0.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libEvtGenBox.so.0.0

lib/libEvtGenBox.so: lib/libEvtGenBox.so.0.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libEvtGenBox.so

# Rule to build all files generated by this target.
ChnsGenerators/EvtGen/EvtGenBox/CMakeFiles/EvtGenBox.dir/build: lib/libEvtGenBox.so

.PHONY : ChnsGenerators/EvtGen/EvtGenBox/CMakeFiles/EvtGenBox.dir/build

ChnsGenerators/EvtGen/EvtGenBox/CMakeFiles/EvtGenBox.dir/clean:
	cd /home/hexh/simulation/ChnsRoot/buildChns/ChnsGenerators/EvtGen/EvtGenBox && $(CMAKE_COMMAND) -P CMakeFiles/EvtGenBox.dir/cmake_clean.cmake
.PHONY : ChnsGenerators/EvtGen/EvtGenBox/CMakeFiles/EvtGenBox.dir/clean

ChnsGenerators/EvtGen/EvtGenBox/CMakeFiles/EvtGenBox.dir/depend: ChnsGenerators/EvtGen/EvtGenBox/G__EvtGenBoxDict.cxx
ChnsGenerators/EvtGen/EvtGenBox/CMakeFiles/EvtGenBox.dir/depend: ChnsGenerators/EvtGen/EvtGenBox/G__EvtGenBoxDict_rdict.pcm
ChnsGenerators/EvtGen/EvtGenBox/CMakeFiles/EvtGenBox.dir/depend: lib/libEvtGenBox.rootmap
	cd /home/hexh/simulation/ChnsRoot/buildChns && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hexh/simulation/ChnsRoot /home/hexh/simulation/ChnsRoot/ChnsGenerators/EvtGen/EvtGenBox /home/hexh/simulation/ChnsRoot/buildChns /home/hexh/simulation/ChnsRoot/buildChns/ChnsGenerators/EvtGen/EvtGenBox /home/hexh/simulation/ChnsRoot/buildChns/ChnsGenerators/EvtGen/EvtGenBox/CMakeFiles/EvtGenBox.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ChnsGenerators/EvtGen/EvtGenBox/CMakeFiles/EvtGenBox.dir/depend
