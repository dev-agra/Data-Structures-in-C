# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Programming\C Programming\DATA STRUCTURE\Graph_Transversal_Techniques\DFS"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Programming\C Programming\DATA STRUCTURE\Graph_Transversal_Techniques\DFS\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/DFS.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/DFS.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DFS.dir/flags.make

CMakeFiles/DFS.dir/main.c.obj: CMakeFiles/DFS.dir/flags.make
CMakeFiles/DFS.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Programming\C Programming\DATA STRUCTURE\Graph_Transversal_Techniques\DFS\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/DFS.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\DFS.dir\main.c.obj -c "C:\Programming\C Programming\DATA STRUCTURE\Graph_Transversal_Techniques\DFS\main.c"

CMakeFiles/DFS.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/DFS.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Programming\C Programming\DATA STRUCTURE\Graph_Transversal_Techniques\DFS\main.c" > CMakeFiles\DFS.dir\main.c.i

CMakeFiles/DFS.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/DFS.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Programming\C Programming\DATA STRUCTURE\Graph_Transversal_Techniques\DFS\main.c" -o CMakeFiles\DFS.dir\main.c.s

# Object files for target DFS
DFS_OBJECTS = \
"CMakeFiles/DFS.dir/main.c.obj"

# External object files for target DFS
DFS_EXTERNAL_OBJECTS =

DFS.exe: CMakeFiles/DFS.dir/main.c.obj
DFS.exe: CMakeFiles/DFS.dir/build.make
DFS.exe: CMakeFiles/DFS.dir/linklibs.rsp
DFS.exe: CMakeFiles/DFS.dir/objects1.rsp
DFS.exe: CMakeFiles/DFS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Programming\C Programming\DATA STRUCTURE\Graph_Transversal_Techniques\DFS\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable DFS.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\DFS.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DFS.dir/build: DFS.exe
.PHONY : CMakeFiles/DFS.dir/build

CMakeFiles/DFS.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\DFS.dir\cmake_clean.cmake
.PHONY : CMakeFiles/DFS.dir/clean

CMakeFiles/DFS.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Programming\C Programming\DATA STRUCTURE\Graph_Transversal_Techniques\DFS" "C:\Programming\C Programming\DATA STRUCTURE\Graph_Transversal_Techniques\DFS" "C:\Programming\C Programming\DATA STRUCTURE\Graph_Transversal_Techniques\DFS\cmake-build-debug" "C:\Programming\C Programming\DATA STRUCTURE\Graph_Transversal_Techniques\DFS\cmake-build-debug" "C:\Programming\C Programming\DATA STRUCTURE\Graph_Transversal_Techniques\DFS\cmake-build-debug\CMakeFiles\DFS.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/DFS.dir/depend
