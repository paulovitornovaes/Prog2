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
include CMakeFiles/ex09.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex09.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex09.dir/flags.make

CMakeFiles/ex09.dir/lista_2/ex09.c.obj: CMakeFiles/ex09.dir/flags.make
CMakeFiles/ex09.dir/lista_2/ex09.c.obj: ../lista_2/ex09.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\vitinhogay\Documents\Prog2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ex09.dir/lista_2/ex09.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ex09.dir\lista_2\ex09.c.obj   -c D:\vitinhogay\Documents\Prog2\lista_2\ex09.c

CMakeFiles/ex09.dir/lista_2/ex09.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ex09.dir/lista_2/ex09.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\vitinhogay\Documents\Prog2\lista_2\ex09.c > CMakeFiles\ex09.dir\lista_2\ex09.c.i

CMakeFiles/ex09.dir/lista_2/ex09.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ex09.dir/lista_2/ex09.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\vitinhogay\Documents\Prog2\lista_2\ex09.c -o CMakeFiles\ex09.dir\lista_2\ex09.c.s

# Object files for target ex09
ex09_OBJECTS = \
"CMakeFiles/ex09.dir/lista_2/ex09.c.obj"

# External object files for target ex09
ex09_EXTERNAL_OBJECTS =

ex09.exe: CMakeFiles/ex09.dir/lista_2/ex09.c.obj
ex09.exe: CMakeFiles/ex09.dir/build.make
ex09.exe: CMakeFiles/ex09.dir/linklibs.rsp
ex09.exe: CMakeFiles/ex09.dir/objects1.rsp
ex09.exe: CMakeFiles/ex09.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\vitinhogay\Documents\Prog2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ex09.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ex09.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex09.dir/build: ex09.exe

.PHONY : CMakeFiles/ex09.dir/build

CMakeFiles/ex09.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ex09.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ex09.dir/clean

CMakeFiles/ex09.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\vitinhogay\Documents\Prog2 D:\vitinhogay\Documents\Prog2 D:\vitinhogay\Documents\Prog2\cmake-build-debug D:\vitinhogay\Documents\Prog2\cmake-build-debug D:\vitinhogay\Documents\Prog2\cmake-build-debug\CMakeFiles\ex09.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex09.dir/depend

