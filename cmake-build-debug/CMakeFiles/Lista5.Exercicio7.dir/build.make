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
include CMakeFiles/Lista5.Exercicio7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lista5.Exercicio7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lista5.Exercicio7.dir/flags.make

CMakeFiles/Lista5.Exercicio7.dir/lista_5/Lista5.Exercicio7.obj: CMakeFiles/Lista5.Exercicio7.dir/flags.make
CMakeFiles/Lista5.Exercicio7.dir/lista_5/Lista5.Exercicio7.obj: ../lista_5/Lista5.Exercicio7.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\vitinhogay\Documents\Prog2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Lista5.Exercicio7.dir/lista_5/Lista5.Exercicio7.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Lista5.Exercicio7.dir\lista_5\Lista5.Exercicio7.obj   -c D:\vitinhogay\Documents\Prog2\lista_5\Lista5.Exercicio7.c

CMakeFiles/Lista5.Exercicio7.dir/lista_5/Lista5.Exercicio7.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Lista5.Exercicio7.dir/lista_5/Lista5.Exercicio7.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\vitinhogay\Documents\Prog2\lista_5\Lista5.Exercicio7.c > CMakeFiles\Lista5.Exercicio7.dir\lista_5\Lista5.Exercicio7.i

CMakeFiles/Lista5.Exercicio7.dir/lista_5/Lista5.Exercicio7.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Lista5.Exercicio7.dir/lista_5/Lista5.Exercicio7.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\vitinhogay\Documents\Prog2\lista_5\Lista5.Exercicio7.c -o CMakeFiles\Lista5.Exercicio7.dir\lista_5\Lista5.Exercicio7.s

# Object files for target Lista5.Exercicio7
Lista5_Exercicio7_OBJECTS = \
"CMakeFiles/Lista5.Exercicio7.dir/lista_5/Lista5.Exercicio7.obj"

# External object files for target Lista5.Exercicio7
Lista5_Exercicio7_EXTERNAL_OBJECTS =

Lista5.Exercicio7.exe: CMakeFiles/Lista5.Exercicio7.dir/lista_5/Lista5.Exercicio7.obj
Lista5.Exercicio7.exe: CMakeFiles/Lista5.Exercicio7.dir/build.make
Lista5.Exercicio7.exe: CMakeFiles/Lista5.Exercicio7.dir/linklibs.rsp
Lista5.Exercicio7.exe: CMakeFiles/Lista5.Exercicio7.dir/objects1.rsp
Lista5.Exercicio7.exe: CMakeFiles/Lista5.Exercicio7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\vitinhogay\Documents\Prog2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Lista5.Exercicio7.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Lista5.Exercicio7.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lista5.Exercicio7.dir/build: Lista5.Exercicio7.exe

.PHONY : CMakeFiles/Lista5.Exercicio7.dir/build

CMakeFiles/Lista5.Exercicio7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Lista5.Exercicio7.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Lista5.Exercicio7.dir/clean

CMakeFiles/Lista5.Exercicio7.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\vitinhogay\Documents\Prog2 D:\vitinhogay\Documents\Prog2 D:\vitinhogay\Documents\Prog2\cmake-build-debug D:\vitinhogay\Documents\Prog2\cmake-build-debug D:\vitinhogay\Documents\Prog2\cmake-build-debug\CMakeFiles\Lista5.Exercicio7.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lista5.Exercicio7.dir/depend

