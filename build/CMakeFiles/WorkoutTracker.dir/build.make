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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cristi/PAOO_an4/WorkoutTracker

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cristi/PAOO_an4/WorkoutTracker/build

# Include any dependencies generated for this target.
include CMakeFiles/WorkoutTracker.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/WorkoutTracker.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/WorkoutTracker.dir/flags.make

CMakeFiles/WorkoutTracker.dir/src/main.cpp.o: CMakeFiles/WorkoutTracker.dir/flags.make
CMakeFiles/WorkoutTracker.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cristi/PAOO_an4/WorkoutTracker/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/WorkoutTracker.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/WorkoutTracker.dir/src/main.cpp.o -c /home/cristi/PAOO_an4/WorkoutTracker/src/main.cpp

CMakeFiles/WorkoutTracker.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/WorkoutTracker.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cristi/PAOO_an4/WorkoutTracker/src/main.cpp > CMakeFiles/WorkoutTracker.dir/src/main.cpp.i

CMakeFiles/WorkoutTracker.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/WorkoutTracker.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cristi/PAOO_an4/WorkoutTracker/src/main.cpp -o CMakeFiles/WorkoutTracker.dir/src/main.cpp.s

CMakeFiles/WorkoutTracker.dir/src/exercise.cpp.o: CMakeFiles/WorkoutTracker.dir/flags.make
CMakeFiles/WorkoutTracker.dir/src/exercise.cpp.o: ../src/exercise.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cristi/PAOO_an4/WorkoutTracker/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/WorkoutTracker.dir/src/exercise.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/WorkoutTracker.dir/src/exercise.cpp.o -c /home/cristi/PAOO_an4/WorkoutTracker/src/exercise.cpp

CMakeFiles/WorkoutTracker.dir/src/exercise.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/WorkoutTracker.dir/src/exercise.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cristi/PAOO_an4/WorkoutTracker/src/exercise.cpp > CMakeFiles/WorkoutTracker.dir/src/exercise.cpp.i

CMakeFiles/WorkoutTracker.dir/src/exercise.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/WorkoutTracker.dir/src/exercise.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cristi/PAOO_an4/WorkoutTracker/src/exercise.cpp -o CMakeFiles/WorkoutTracker.dir/src/exercise.cpp.s

# Object files for target WorkoutTracker
WorkoutTracker_OBJECTS = \
"CMakeFiles/WorkoutTracker.dir/src/main.cpp.o" \
"CMakeFiles/WorkoutTracker.dir/src/exercise.cpp.o"

# External object files for target WorkoutTracker
WorkoutTracker_EXTERNAL_OBJECTS =

WorkoutTracker: CMakeFiles/WorkoutTracker.dir/src/main.cpp.o
WorkoutTracker: CMakeFiles/WorkoutTracker.dir/src/exercise.cpp.o
WorkoutTracker: CMakeFiles/WorkoutTracker.dir/build.make
WorkoutTracker: CMakeFiles/WorkoutTracker.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cristi/PAOO_an4/WorkoutTracker/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable WorkoutTracker"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/WorkoutTracker.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/WorkoutTracker.dir/build: WorkoutTracker

.PHONY : CMakeFiles/WorkoutTracker.dir/build

CMakeFiles/WorkoutTracker.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/WorkoutTracker.dir/cmake_clean.cmake
.PHONY : CMakeFiles/WorkoutTracker.dir/clean

CMakeFiles/WorkoutTracker.dir/depend:
	cd /home/cristi/PAOO_an4/WorkoutTracker/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cristi/PAOO_an4/WorkoutTracker /home/cristi/PAOO_an4/WorkoutTracker /home/cristi/PAOO_an4/WorkoutTracker/build /home/cristi/PAOO_an4/WorkoutTracker/build /home/cristi/PAOO_an4/WorkoutTracker/build/CMakeFiles/WorkoutTracker.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/WorkoutTracker.dir/depend
