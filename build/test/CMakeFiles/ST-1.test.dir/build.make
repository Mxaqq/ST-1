# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/max/ST-1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/max/ST-1/build

# Include any dependencies generated for this target.
include test/CMakeFiles/ST-1.test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include test/CMakeFiles/ST-1.test.dir/compiler_depend.make

# Include the progress variables for this target.
include test/CMakeFiles/ST-1.test.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/ST-1.test.dir/flags.make

test/CMakeFiles/ST-1.test.dir/AllTests.cpp.o: test/CMakeFiles/ST-1.test.dir/flags.make
test/CMakeFiles/ST-1.test.dir/AllTests.cpp.o: ../test/AllTests.cpp
test/CMakeFiles/ST-1.test.dir/AllTests.cpp.o: test/CMakeFiles/ST-1.test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/max/ST-1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/ST-1.test.dir/AllTests.cpp.o"
	cd /home/max/ST-1/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/CMakeFiles/ST-1.test.dir/AllTests.cpp.o -MF CMakeFiles/ST-1.test.dir/AllTests.cpp.o.d -o CMakeFiles/ST-1.test.dir/AllTests.cpp.o -c /home/max/ST-1/test/AllTests.cpp

test/CMakeFiles/ST-1.test.dir/AllTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ST-1.test.dir/AllTests.cpp.i"
	cd /home/max/ST-1/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/max/ST-1/test/AllTests.cpp > CMakeFiles/ST-1.test.dir/AllTests.cpp.i

test/CMakeFiles/ST-1.test.dir/AllTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ST-1.test.dir/AllTests.cpp.s"
	cd /home/max/ST-1/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/max/ST-1/test/AllTests.cpp -o CMakeFiles/ST-1.test.dir/AllTests.cpp.s

test/CMakeFiles/ST-1.test.dir/tests.cpp.o: test/CMakeFiles/ST-1.test.dir/flags.make
test/CMakeFiles/ST-1.test.dir/tests.cpp.o: ../test/tests.cpp
test/CMakeFiles/ST-1.test.dir/tests.cpp.o: test/CMakeFiles/ST-1.test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/max/ST-1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object test/CMakeFiles/ST-1.test.dir/tests.cpp.o"
	cd /home/max/ST-1/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT test/CMakeFiles/ST-1.test.dir/tests.cpp.o -MF CMakeFiles/ST-1.test.dir/tests.cpp.o.d -o CMakeFiles/ST-1.test.dir/tests.cpp.o -c /home/max/ST-1/test/tests.cpp

test/CMakeFiles/ST-1.test.dir/tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ST-1.test.dir/tests.cpp.i"
	cd /home/max/ST-1/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/max/ST-1/test/tests.cpp > CMakeFiles/ST-1.test.dir/tests.cpp.i

test/CMakeFiles/ST-1.test.dir/tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ST-1.test.dir/tests.cpp.s"
	cd /home/max/ST-1/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/max/ST-1/test/tests.cpp -o CMakeFiles/ST-1.test.dir/tests.cpp.s

# Object files for target ST-1.test
ST__1_test_OBJECTS = \
"CMakeFiles/ST-1.test.dir/AllTests.cpp.o" \
"CMakeFiles/ST-1.test.dir/tests.cpp.o"

# External object files for target ST-1.test
ST__1_test_EXTERNAL_OBJECTS =

bin/ST-1.test: test/CMakeFiles/ST-1.test.dir/AllTests.cpp.o
bin/ST-1.test: test/CMakeFiles/ST-1.test.dir/tests.cpp.o
bin/ST-1.test: test/CMakeFiles/ST-1.test.dir/build.make
bin/ST-1.test: src/libST-1.so
bin/ST-1.test: lib/libgtest.a
bin/ST-1.test: test/CMakeFiles/ST-1.test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/max/ST-1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/ST-1.test"
	cd /home/max/ST-1/build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ST-1.test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/ST-1.test.dir/build: bin/ST-1.test
.PHONY : test/CMakeFiles/ST-1.test.dir/build

test/CMakeFiles/ST-1.test.dir/clean:
	cd /home/max/ST-1/build/test && $(CMAKE_COMMAND) -P CMakeFiles/ST-1.test.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/ST-1.test.dir/clean

test/CMakeFiles/ST-1.test.dir/depend:
	cd /home/max/ST-1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/max/ST-1 /home/max/ST-1/test /home/max/ST-1/build /home/max/ST-1/build/test /home/max/ST-1/build/test/CMakeFiles/ST-1.test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/ST-1.test.dir/depend

