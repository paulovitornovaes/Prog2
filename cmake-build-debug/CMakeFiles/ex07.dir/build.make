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
CMAKE_SOURCE_DIR = C:\Users\thati\Documents\GitHub\Prog2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\thati\Documents\GitHub\Prog2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex07.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex07.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex07.dir/flags.make

CMakeFiles/ex07.dir/lista_2/ex07.c.obj: CMakeFiles/ex07.dir/flags.make
CMakeFiles/ex07.dir/lista_2/ex07.c.obj: ../lista_2/ex07.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\thati\Documents\GitHub\Prog2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ex07.dir/lista_2/ex07.c.obj"
	C:\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\ex07.dir\lista_2\ex07.c.obj   -c C:\Users\thati\Documents\GitHub\Prog2\lista_2\ex07.c

CMakeFiles/ex07.dir/lista_2/ex07.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ex07.dir/lista_2/ex07.c.i"
	C:\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\thati\Documents\GitHub\Prog2\lista_2\ex07.c > CMakeFiles\ex07.dir\lista_2\ex07.c.i

CMakeFiles/ex07.dir/lista_2/ex07.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ex07.dir/lista_2/ex07.c.s"
	C:\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\thati\Documents\GitHub\Prog2\lista_2\ex07.c -o CMakeFiles\ex07.dir\lista_2\ex07.c.s

# Object files for target ex07
ex07_OBJECTS = \
"CMakeFiles/ex07.dir/lista_2/ex07.c.obj"

# External object files for target ex07
ex07_EXTERNAL_OBJECTS =

ex07.exe: CMakeFiles/ex07.dir/lista_2/ex07.c.obj
ex07.exe: CMakeFiles/ex07.dir/build.make
ex07.exe: CMakeFiles/ex07.dir/linklibs.rsp
ex07.exe: CMakeFiles/ex07.dir/objects1.rsp
ex07.exe: CMakeFiles/ex07.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\thati\Documents\GitHub\Prog2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ex07.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ex07.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex07.dir/build: ex07.exe

.PHONY : CMakeFiles/ex07.dir/build

CMakeFiles/ex07.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ex07.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ex07.dir/clean

CMakeFiles/ex07.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\thati\Documents\GitHub\Prog2 C:\Users\thati\Documents\GitHub\Prog2 C:\Users\thati\Documents\GitHub\Prog2\cmake-build-debug C:\Users\thati\Documents\GitHub\Prog2\cmake-build-debug C:\Users\thati\Documents\GitHub\Prog2\cmake-build-debug\CMakeFiles\ex07.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex07.dir/depend

