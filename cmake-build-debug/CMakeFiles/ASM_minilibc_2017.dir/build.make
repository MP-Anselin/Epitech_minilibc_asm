# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /home/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/193.6494.38/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/193.6494.38/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/Documents/Epitech/tek2/asm/Epitech_minilibc_asm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/Documents/Epitech/tek2/asm/Epitech_minilibc_asm/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ASM_minilibc_2017.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ASM_minilibc_2017.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ASM_minilibc_2017.dir/flags.make

CMakeFiles/ASM_minilibc_2017.dir/test_functions/main.c.o: CMakeFiles/ASM_minilibc_2017.dir/flags.make
CMakeFiles/ASM_minilibc_2017.dir/test_functions/main.c.o: ../test_functions/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/Documents/Epitech/tek2/asm/Epitech_minilibc_asm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ASM_minilibc_2017.dir/test_functions/main.c.o"
	/usr/lib64/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ASM_minilibc_2017.dir/test_functions/main.c.o   -c /home/Documents/Epitech/tek2/asm/Epitech_minilibc_asm/test_functions/main.c

CMakeFiles/ASM_minilibc_2017.dir/test_functions/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ASM_minilibc_2017.dir/test_functions/main.c.i"
	/usr/lib64/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/Documents/Epitech/tek2/asm/Epitech_minilibc_asm/test_functions/main.c > CMakeFiles/ASM_minilibc_2017.dir/test_functions/main.c.i

CMakeFiles/ASM_minilibc_2017.dir/test_functions/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ASM_minilibc_2017.dir/test_functions/main.c.s"
	/usr/lib64/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/Documents/Epitech/tek2/asm/Epitech_minilibc_asm/test_functions/main.c -o CMakeFiles/ASM_minilibc_2017.dir/test_functions/main.c.s

CMakeFiles/ASM_minilibc_2017.dir/test_functions/test_memset.c.o: CMakeFiles/ASM_minilibc_2017.dir/flags.make
CMakeFiles/ASM_minilibc_2017.dir/test_functions/test_memset.c.o: ../test_functions/test_memset.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/Documents/Epitech/tek2/asm/Epitech_minilibc_asm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/ASM_minilibc_2017.dir/test_functions/test_memset.c.o"
	/usr/lib64/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ASM_minilibc_2017.dir/test_functions/test_memset.c.o   -c /home/Documents/Epitech/tek2/asm/Epitech_minilibc_asm/test_functions/test_memset.c

CMakeFiles/ASM_minilibc_2017.dir/test_functions/test_memset.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ASM_minilibc_2017.dir/test_functions/test_memset.c.i"
	/usr/lib64/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/Documents/Epitech/tek2/asm/Epitech_minilibc_asm/test_functions/test_memset.c > CMakeFiles/ASM_minilibc_2017.dir/test_functions/test_memset.c.i

CMakeFiles/ASM_minilibc_2017.dir/test_functions/test_memset.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ASM_minilibc_2017.dir/test_functions/test_memset.c.s"
	/usr/lib64/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/Documents/Epitech/tek2/asm/Epitech_minilibc_asm/test_functions/test_memset.c -o CMakeFiles/ASM_minilibc_2017.dir/test_functions/test_memset.c.s

CMakeFiles/ASM_minilibc_2017.dir/test_functions/test_strlen.c.o: CMakeFiles/ASM_minilibc_2017.dir/flags.make
CMakeFiles/ASM_minilibc_2017.dir/test_functions/test_strlen.c.o: ../test_functions/test_strlen.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/Documents/Epitech/tek2/asm/Epitech_minilibc_asm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/ASM_minilibc_2017.dir/test_functions/test_strlen.c.o"
	/usr/lib64/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ASM_minilibc_2017.dir/test_functions/test_strlen.c.o   -c /home/Documents/Epitech/tek2/asm/Epitech_minilibc_asm/test_functions/test_strlen.c

CMakeFiles/ASM_minilibc_2017.dir/test_functions/test_strlen.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ASM_minilibc_2017.dir/test_functions/test_strlen.c.i"
	/usr/lib64/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/Documents/Epitech/tek2/asm/Epitech_minilibc_asm/test_functions/test_strlen.c > CMakeFiles/ASM_minilibc_2017.dir/test_functions/test_strlen.c.i

CMakeFiles/ASM_minilibc_2017.dir/test_functions/test_strlen.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ASM_minilibc_2017.dir/test_functions/test_strlen.c.s"
	/usr/lib64/ccache/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/Documents/Epitech/tek2/asm/Epitech_minilibc_asm/test_functions/test_strlen.c -o CMakeFiles/ASM_minilibc_2017.dir/test_functions/test_strlen.c.s

# Object files for target ASM_minilibc_2017
ASM_minilibc_2017_OBJECTS = \
"CMakeFiles/ASM_minilibc_2017.dir/test_functions/main.c.o" \
"CMakeFiles/ASM_minilibc_2017.dir/test_functions/test_memset.c.o" \
"CMakeFiles/ASM_minilibc_2017.dir/test_functions/test_strlen.c.o"

# External object files for target ASM_minilibc_2017
ASM_minilibc_2017_EXTERNAL_OBJECTS =

ASM_minilibc_2017: CMakeFiles/ASM_minilibc_2017.dir/test_functions/main.c.o
ASM_minilibc_2017: CMakeFiles/ASM_minilibc_2017.dir/test_functions/test_memset.c.o
ASM_minilibc_2017: CMakeFiles/ASM_minilibc_2017.dir/test_functions/test_strlen.c.o
ASM_minilibc_2017: CMakeFiles/ASM_minilibc_2017.dir/build.make
ASM_minilibc_2017: CMakeFiles/ASM_minilibc_2017.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/Documents/Epitech/tek2/asm/Epitech_minilibc_asm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable ASM_minilibc_2017"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ASM_minilibc_2017.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ASM_minilibc_2017.dir/build: ASM_minilibc_2017

.PHONY : CMakeFiles/ASM_minilibc_2017.dir/build

CMakeFiles/ASM_minilibc_2017.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ASM_minilibc_2017.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ASM_minilibc_2017.dir/clean

CMakeFiles/ASM_minilibc_2017.dir/depend:
	cd /home/Documents/Epitech/tek2/asm/Epitech_minilibc_asm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/Documents/Epitech/tek2/asm/Epitech_minilibc_asm /home/Documents/Epitech/tek2/asm/Epitech_minilibc_asm /home/Documents/Epitech/tek2/asm/Epitech_minilibc_asm/cmake-build-debug /home/Documents/Epitech/tek2/asm/Epitech_minilibc_asm/cmake-build-debug /home/Documents/Epitech/tek2/asm/Epitech_minilibc_asm/cmake-build-debug/CMakeFiles/ASM_minilibc_2017.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ASM_minilibc_2017.dir/depend

