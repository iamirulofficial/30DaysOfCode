# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Edwin Jarvis\Desktop\repos\250-Problems\30DaysOfCode\Day6\cses-dp-2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Edwin Jarvis\Desktop\repos\250-Problems\30DaysOfCode\Day6\cses-dp-2\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/cses_dp_2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cses_dp_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cses_dp_2.dir/flags.make

CMakeFiles/cses_dp_2.dir/main.cpp.obj: CMakeFiles/cses_dp_2.dir/flags.make
CMakeFiles/cses_dp_2.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Edwin Jarvis\Desktop\repos\250-Problems\30DaysOfCode\Day6\cses-dp-2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cses_dp_2.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\cses_dp_2.dir\main.cpp.obj -c "C:\Users\Edwin Jarvis\Desktop\repos\250-Problems\30DaysOfCode\Day6\cses-dp-2\main.cpp"

CMakeFiles/cses_dp_2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cses_dp_2.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Edwin Jarvis\Desktop\repos\250-Problems\30DaysOfCode\Day6\cses-dp-2\main.cpp" > CMakeFiles\cses_dp_2.dir\main.cpp.i

CMakeFiles/cses_dp_2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cses_dp_2.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Edwin Jarvis\Desktop\repos\250-Problems\30DaysOfCode\Day6\cses-dp-2\main.cpp" -o CMakeFiles\cses_dp_2.dir\main.cpp.s

# Object files for target cses_dp_2
cses_dp_2_OBJECTS = \
"CMakeFiles/cses_dp_2.dir/main.cpp.obj"

# External object files for target cses_dp_2
cses_dp_2_EXTERNAL_OBJECTS =

cses_dp_2.exe: CMakeFiles/cses_dp_2.dir/main.cpp.obj
cses_dp_2.exe: CMakeFiles/cses_dp_2.dir/build.make
cses_dp_2.exe: CMakeFiles/cses_dp_2.dir/linklibs.rsp
cses_dp_2.exe: CMakeFiles/cses_dp_2.dir/objects1.rsp
cses_dp_2.exe: CMakeFiles/cses_dp_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Edwin Jarvis\Desktop\repos\250-Problems\30DaysOfCode\Day6\cses-dp-2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cses_dp_2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cses_dp_2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cses_dp_2.dir/build: cses_dp_2.exe

.PHONY : CMakeFiles/cses_dp_2.dir/build

CMakeFiles/cses_dp_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cses_dp_2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/cses_dp_2.dir/clean

CMakeFiles/cses_dp_2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Edwin Jarvis\Desktop\repos\250-Problems\30DaysOfCode\Day6\cses-dp-2" "C:\Users\Edwin Jarvis\Desktop\repos\250-Problems\30DaysOfCode\Day6\cses-dp-2" "C:\Users\Edwin Jarvis\Desktop\repos\250-Problems\30DaysOfCode\Day6\cses-dp-2\cmake-build-debug" "C:\Users\Edwin Jarvis\Desktop\repos\250-Problems\30DaysOfCode\Day6\cses-dp-2\cmake-build-debug" "C:\Users\Edwin Jarvis\Desktop\repos\250-Problems\30DaysOfCode\Day6\cses-dp-2\cmake-build-debug\CMakeFiles\cses_dp_2.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/cses_dp_2.dir/depend
