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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\vitinhogay\Documents\Prog2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\vitinhogay\Documents\Prog2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Prog2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Prog2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Prog2.dir/flags.make

CMakeFiles/Prog2.dir/main.c.obj: CMakeFiles/Prog2.dir/flags.make
CMakeFiles/Prog2.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\vitinhogay\Documents\Prog2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Prog2.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Prog2.dir\main.c.obj   -c D:\vitinhogay\Documents\Prog2\main.c

CMakeFiles/Prog2.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Prog2.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\vitinhogay\Documents\Prog2\main.c > CMakeFiles\Prog2.dir\main.c.i

CMakeFiles/Prog2.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Prog2.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\vitinhogay\Documents\Prog2\main.c -o CMakeFiles\Prog2.dir\main.c.s

# Object files for target Prog2
Prog2_OBJECTS = \
"CMakeFiles/Prog2.dir/main.c.obj"

# External object files for target Prog2
Prog2_EXTERNAL_OBJECTS =

Prog2.exe: CMakeFiles/Prog2.dir/main.c.obj
Prog2.exe: CMakeFiles/Prog2.dir/build.make
Prog2.exe: CMakeFiles/Prog2.dir/linklibs.rsp
Prog2.exe: CMakeFiles/Prog2.dir/objects1.rsp
Prog2.exe: CMakeFiles/Prog2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\vitinhogay\Documents\Prog2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Prog2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Prog2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Prog2.dir/build: Prog2.exe

.PHONY : CMakeFiles/Prog2.dir/build

CMakeFiles/Prog2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Prog2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Prog2.dir/clean

CMakeFiles/Prog2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\vitinhogay\Documents\Prog2 D:\vitinhogay\Documents\Prog2 D:\vitinhogay\Documents\Prog2\cmake-build-debug D:\vitinhogay\Documents\Prog2\cmake-build-debug D:\vitinhogay\Documents\Prog2\cmake-build-debug\CMakeFiles\Prog2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Prog2.dir/depend

