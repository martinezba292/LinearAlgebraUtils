# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/xtranger/Projects/LinearAlgebraUtils

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xtranger/Projects/LinearAlgebraUtils/build

# Include any dependencies generated for this target.
include CMakeFiles/LAU.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LAU.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LAU.dir/flags.make

CMakeFiles/LAU.dir/src/vector2.cpp.o: CMakeFiles/LAU.dir/flags.make
CMakeFiles/LAU.dir/src/vector2.cpp.o: ../src/vector2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xtranger/Projects/LinearAlgebraUtils/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LAU.dir/src/vector2.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LAU.dir/src/vector2.cpp.o -c /home/xtranger/Projects/LinearAlgebraUtils/src/vector2.cpp

CMakeFiles/LAU.dir/src/vector2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LAU.dir/src/vector2.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xtranger/Projects/LinearAlgebraUtils/src/vector2.cpp > CMakeFiles/LAU.dir/src/vector2.cpp.i

CMakeFiles/LAU.dir/src/vector2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LAU.dir/src/vector2.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xtranger/Projects/LinearAlgebraUtils/src/vector2.cpp -o CMakeFiles/LAU.dir/src/vector2.cpp.s

CMakeFiles/LAU.dir/src/vector3.cpp.o: CMakeFiles/LAU.dir/flags.make
CMakeFiles/LAU.dir/src/vector3.cpp.o: ../src/vector3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xtranger/Projects/LinearAlgebraUtils/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/LAU.dir/src/vector3.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LAU.dir/src/vector3.cpp.o -c /home/xtranger/Projects/LinearAlgebraUtils/src/vector3.cpp

CMakeFiles/LAU.dir/src/vector3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LAU.dir/src/vector3.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xtranger/Projects/LinearAlgebraUtils/src/vector3.cpp > CMakeFiles/LAU.dir/src/vector3.cpp.i

CMakeFiles/LAU.dir/src/vector3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LAU.dir/src/vector3.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xtranger/Projects/LinearAlgebraUtils/src/vector3.cpp -o CMakeFiles/LAU.dir/src/vector3.cpp.s

CMakeFiles/LAU.dir/src/vector4.cpp.o: CMakeFiles/LAU.dir/flags.make
CMakeFiles/LAU.dir/src/vector4.cpp.o: ../src/vector4.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xtranger/Projects/LinearAlgebraUtils/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/LAU.dir/src/vector4.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LAU.dir/src/vector4.cpp.o -c /home/xtranger/Projects/LinearAlgebraUtils/src/vector4.cpp

CMakeFiles/LAU.dir/src/vector4.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LAU.dir/src/vector4.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xtranger/Projects/LinearAlgebraUtils/src/vector4.cpp > CMakeFiles/LAU.dir/src/vector4.cpp.i

CMakeFiles/LAU.dir/src/vector4.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LAU.dir/src/vector4.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xtranger/Projects/LinearAlgebraUtils/src/vector4.cpp -o CMakeFiles/LAU.dir/src/vector4.cpp.s

CMakeFiles/LAU.dir/src/matrix2.cpp.o: CMakeFiles/LAU.dir/flags.make
CMakeFiles/LAU.dir/src/matrix2.cpp.o: ../src/matrix2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xtranger/Projects/LinearAlgebraUtils/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/LAU.dir/src/matrix2.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LAU.dir/src/matrix2.cpp.o -c /home/xtranger/Projects/LinearAlgebraUtils/src/matrix2.cpp

CMakeFiles/LAU.dir/src/matrix2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LAU.dir/src/matrix2.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xtranger/Projects/LinearAlgebraUtils/src/matrix2.cpp > CMakeFiles/LAU.dir/src/matrix2.cpp.i

CMakeFiles/LAU.dir/src/matrix2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LAU.dir/src/matrix2.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xtranger/Projects/LinearAlgebraUtils/src/matrix2.cpp -o CMakeFiles/LAU.dir/src/matrix2.cpp.s

CMakeFiles/LAU.dir/src/matrix3.cpp.o: CMakeFiles/LAU.dir/flags.make
CMakeFiles/LAU.dir/src/matrix3.cpp.o: ../src/matrix3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xtranger/Projects/LinearAlgebraUtils/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/LAU.dir/src/matrix3.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LAU.dir/src/matrix3.cpp.o -c /home/xtranger/Projects/LinearAlgebraUtils/src/matrix3.cpp

CMakeFiles/LAU.dir/src/matrix3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LAU.dir/src/matrix3.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xtranger/Projects/LinearAlgebraUtils/src/matrix3.cpp > CMakeFiles/LAU.dir/src/matrix3.cpp.i

CMakeFiles/LAU.dir/src/matrix3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LAU.dir/src/matrix3.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xtranger/Projects/LinearAlgebraUtils/src/matrix3.cpp -o CMakeFiles/LAU.dir/src/matrix3.cpp.s

CMakeFiles/LAU.dir/src/matrix4.cpp.o: CMakeFiles/LAU.dir/flags.make
CMakeFiles/LAU.dir/src/matrix4.cpp.o: ../src/matrix4.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xtranger/Projects/LinearAlgebraUtils/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/LAU.dir/src/matrix4.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LAU.dir/src/matrix4.cpp.o -c /home/xtranger/Projects/LinearAlgebraUtils/src/matrix4.cpp

CMakeFiles/LAU.dir/src/matrix4.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LAU.dir/src/matrix4.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xtranger/Projects/LinearAlgebraUtils/src/matrix4.cpp > CMakeFiles/LAU.dir/src/matrix4.cpp.i

CMakeFiles/LAU.dir/src/matrix4.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LAU.dir/src/matrix4.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xtranger/Projects/LinearAlgebraUtils/src/matrix4.cpp -o CMakeFiles/LAU.dir/src/matrix4.cpp.s

# Object files for target LAU
LAU_OBJECTS = \
"CMakeFiles/LAU.dir/src/vector2.cpp.o" \
"CMakeFiles/LAU.dir/src/vector3.cpp.o" \
"CMakeFiles/LAU.dir/src/vector4.cpp.o" \
"CMakeFiles/LAU.dir/src/matrix2.cpp.o" \
"CMakeFiles/LAU.dir/src/matrix3.cpp.o" \
"CMakeFiles/LAU.dir/src/matrix4.cpp.o"

# External object files for target LAU
LAU_EXTERNAL_OBJECTS =

libLAU.a: CMakeFiles/LAU.dir/src/vector2.cpp.o
libLAU.a: CMakeFiles/LAU.dir/src/vector3.cpp.o
libLAU.a: CMakeFiles/LAU.dir/src/vector4.cpp.o
libLAU.a: CMakeFiles/LAU.dir/src/matrix2.cpp.o
libLAU.a: CMakeFiles/LAU.dir/src/matrix3.cpp.o
libLAU.a: CMakeFiles/LAU.dir/src/matrix4.cpp.o
libLAU.a: CMakeFiles/LAU.dir/build.make
libLAU.a: CMakeFiles/LAU.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xtranger/Projects/LinearAlgebraUtils/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX static library libLAU.a"
	$(CMAKE_COMMAND) -P CMakeFiles/LAU.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LAU.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LAU.dir/build: libLAU.a

.PHONY : CMakeFiles/LAU.dir/build

CMakeFiles/LAU.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LAU.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LAU.dir/clean

CMakeFiles/LAU.dir/depend:
	cd /home/xtranger/Projects/LinearAlgebraUtils/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xtranger/Projects/LinearAlgebraUtils /home/xtranger/Projects/LinearAlgebraUtils /home/xtranger/Projects/LinearAlgebraUtils/build /home/xtranger/Projects/LinearAlgebraUtils/build /home/xtranger/Projects/LinearAlgebraUtils/build/CMakeFiles/LAU.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LAU.dir/depend
