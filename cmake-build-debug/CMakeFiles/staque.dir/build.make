# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\George\CLionProjects\staque

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\George\CLionProjects\staque\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/staque.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/staque.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/staque.dir/flags.make

CMakeFiles/staque.dir/main.cpp.obj: CMakeFiles/staque.dir/flags.make
CMakeFiles/staque.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\George\CLionProjects\staque\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/staque.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\staque.dir\main.cpp.obj -c C:\Users\George\CLionProjects\staque\main.cpp

CMakeFiles/staque.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/staque.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\George\CLionProjects\staque\main.cpp > CMakeFiles\staque.dir\main.cpp.i

CMakeFiles/staque.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/staque.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\George\CLionProjects\staque\main.cpp -o CMakeFiles\staque.dir\main.cpp.s

# Object files for target staque
staque_OBJECTS = \
"CMakeFiles/staque.dir/main.cpp.obj"

# External object files for target staque
staque_EXTERNAL_OBJECTS =

staque.exe: CMakeFiles/staque.dir/main.cpp.obj
staque.exe: CMakeFiles/staque.dir/build.make
staque.exe: CMakeFiles/staque.dir/linklibs.rsp
staque.exe: CMakeFiles/staque.dir/objects1.rsp
staque.exe: CMakeFiles/staque.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\George\CLionProjects\staque\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable staque.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\staque.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/staque.dir/build: staque.exe

.PHONY : CMakeFiles/staque.dir/build

CMakeFiles/staque.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\staque.dir\cmake_clean.cmake
.PHONY : CMakeFiles/staque.dir/clean

CMakeFiles/staque.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\George\CLionProjects\staque C:\Users\George\CLionProjects\staque C:\Users\George\CLionProjects\staque\cmake-build-debug C:\Users\George\CLionProjects\staque\cmake-build-debug C:\Users\George\CLionProjects\staque\cmake-build-debug\CMakeFiles\staque.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/staque.dir/depend

