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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\flavi\Prog2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\flavi\Prog2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lista4.Exercicio2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lista4.Exercicio2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lista4.Exercicio2.dir/flags.make

CMakeFiles/Lista4.Exercicio2.dir/lista_4/Lista4.Exercicio2.obj: CMakeFiles/Lista4.Exercicio2.dir/flags.make
CMakeFiles/Lista4.Exercicio2.dir/lista_4/Lista4.Exercicio2.obj: ../lista_4/Lista4.Exercicio2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\flavi\Prog2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Lista4.Exercicio2.dir/lista_4/Lista4.Exercicio2.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Lista4.Exercicio2.dir\lista_4\Lista4.Exercicio2.obj   -c C:\Users\flavi\Prog2\lista_4\Lista4.Exercicio2.c

CMakeFiles/Lista4.Exercicio2.dir/lista_4/Lista4.Exercicio2.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lista4.Exercicio2.dir/lista_4/Lista4.Exercicio2.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\flavi\Prog2\lista_4\Lista4.Exercicio2.c > CMakeFiles\Lista4.Exercicio2.dir\lista_4\Lista4.Exercicio2.i

CMakeFiles/Lista4.Exercicio2.dir/lista_4/Lista4.Exercicio2.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lista4.Exercicio2.dir/lista_4/Lista4.Exercicio2.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\flavi\Prog2\lista_4\Lista4.Exercicio2.c -o CMakeFiles\Lista4.Exercicio2.dir\lista_4\Lista4.Exercicio2.s

# Object files for target Lista4.Exercicio2
Lista4_Exercicio2_OBJECTS = \
"CMakeFiles/Lista4.Exercicio2.dir/lista_4/Lista4.Exercicio2.obj"

# External object files for target Lista4.Exercicio2
Lista4_Exercicio2_EXTERNAL_OBJECTS =

Lista4.Exercicio2.exe: CMakeFiles/Lista4.Exercicio2.dir/lista_4/Lista4.Exercicio2.obj
Lista4.Exercicio2.exe: CMakeFiles/Lista4.Exercicio2.dir/build.make
Lista4.Exercicio2.exe: CMakeFiles/Lista4.Exercicio2.dir/linklibs.rsp
Lista4.Exercicio2.exe: CMakeFiles/Lista4.Exercicio2.dir/objects1.rsp
Lista4.Exercicio2.exe: CMakeFiles/Lista4.Exercicio2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\flavi\Prog2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Lista4.Exercicio2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Lista4.Exercicio2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lista4.Exercicio2.dir/build: Lista4.Exercicio2.exe

.PHONY : CMakeFiles/Lista4.Exercicio2.dir/build

CMakeFiles/Lista4.Exercicio2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Lista4.Exercicio2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Lista4.Exercicio2.dir/clean

CMakeFiles/Lista4.Exercicio2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\flavi\Prog2 C:\Users\flavi\Prog2 C:\Users\flavi\Prog2\cmake-build-debug C:\Users\flavi\Prog2\cmake-build-debug C:\Users\flavi\Prog2\cmake-build-debug\CMakeFiles\Lista4.Exercicio2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lista4.Exercicio2.dir/depend

