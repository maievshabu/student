# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.6\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.6\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\work\student

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\work\student\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/student.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/student.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/student.dir/flags.make

CMakeFiles/student.dir/src/main.cpp.obj: CMakeFiles/student.dir/flags.make
CMakeFiles/student.dir/src/main.cpp.obj: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\work\student\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/student.dir/src/main.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\student.dir\src\main.cpp.obj -c C:\work\student\src\main.cpp

CMakeFiles/student.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/student.dir/src/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\work\student\src\main.cpp > CMakeFiles\student.dir\src\main.cpp.i

CMakeFiles/student.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/student.dir/src/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\work\student\src\main.cpp -o CMakeFiles\student.dir\src\main.cpp.s

CMakeFiles/student.dir/src/common/helper.cpp.obj: CMakeFiles/student.dir/flags.make
CMakeFiles/student.dir/src/common/helper.cpp.obj: ../src/common/helper.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\work\student\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/student.dir/src/common/helper.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\student.dir\src\common\helper.cpp.obj -c C:\work\student\src\common\helper.cpp

CMakeFiles/student.dir/src/common/helper.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/student.dir/src/common/helper.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\work\student\src\common\helper.cpp > CMakeFiles\student.dir\src\common\helper.cpp.i

CMakeFiles/student.dir/src/common/helper.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/student.dir/src/common/helper.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\work\student\src\common\helper.cpp -o CMakeFiles\student.dir\src\common\helper.cpp.s

CMakeFiles/student.dir/src/common/logo.cpp.obj: CMakeFiles/student.dir/flags.make
CMakeFiles/student.dir/src/common/logo.cpp.obj: ../src/common/logo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\work\student\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/student.dir/src/common/logo.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\student.dir\src\common\logo.cpp.obj -c C:\work\student\src\common\logo.cpp

CMakeFiles/student.dir/src/common/logo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/student.dir/src/common/logo.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\work\student\src\common\logo.cpp > CMakeFiles\student.dir\src\common\logo.cpp.i

CMakeFiles/student.dir/src/common/logo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/student.dir/src/common/logo.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\work\student\src\common\logo.cpp -o CMakeFiles\student.dir\src\common\logo.cpp.s

# Object files for target student
student_OBJECTS = \
"CMakeFiles/student.dir/src/main.cpp.obj" \
"CMakeFiles/student.dir/src/common/helper.cpp.obj" \
"CMakeFiles/student.dir/src/common/logo.cpp.obj"

# External object files for target student
student_EXTERNAL_OBJECTS =

student.exe: CMakeFiles/student.dir/src/main.cpp.obj
student.exe: CMakeFiles/student.dir/src/common/helper.cpp.obj
student.exe: CMakeFiles/student.dir/src/common/logo.cpp.obj
student.exe: CMakeFiles/student.dir/build.make
student.exe: CMakeFiles/student.dir/linklibs.rsp
student.exe: CMakeFiles/student.dir/objects1.rsp
student.exe: CMakeFiles/student.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\work\student\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable student.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\student.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/student.dir/build: student.exe

.PHONY : CMakeFiles/student.dir/build

CMakeFiles/student.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\student.dir\cmake_clean.cmake
.PHONY : CMakeFiles/student.dir/clean

CMakeFiles/student.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\work\student C:\work\student C:\work\student\cmake-build-debug C:\work\student\cmake-build-debug C:\work\student\cmake-build-debug\CMakeFiles\student.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/student.dir/depend

