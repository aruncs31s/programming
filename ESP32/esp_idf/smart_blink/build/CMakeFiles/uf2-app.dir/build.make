# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
CMAKE_SOURCE_DIR = /home/aruncs/Coding/ESP32/smart_blink

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aruncs/Coding/ESP32/smart_blink/build

# Utility rule file for uf2-app.

# Include any custom commands dependencies for this target.
include CMakeFiles/uf2-app.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/uf2-app.dir/progress.make

CMakeFiles/uf2-app:
	cd /home/aruncs/Git/ESP32/esp-idf/components/esptool_py && /usr/bin/cmake -D IDF_PATH=/home/aruncs/Git/ESP32/esp-idf -D "SERIAL_TOOL=/home/aruncs/.espressif/python_env/idf5.4_py3.12_env/bin/python;/home/aruncs/Git/ESP32/esp-idf/tools/mkuf2.py;write;--chip;esp32" -D "SERIAL_TOOL_ARGS=--json;/home/aruncs/Coding/ESP32/smart_blink/build/flasher_args.json;-o;/home/aruncs/Coding/ESP32/smart_blink/build/uf2-app.bin;--bin;app" -P run_serial_tool.cmake

uf2-app: CMakeFiles/uf2-app
uf2-app: CMakeFiles/uf2-app.dir/build.make
.PHONY : uf2-app

# Rule to build all files generated by this target.
CMakeFiles/uf2-app.dir/build: uf2-app
.PHONY : CMakeFiles/uf2-app.dir/build

CMakeFiles/uf2-app.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/uf2-app.dir/cmake_clean.cmake
.PHONY : CMakeFiles/uf2-app.dir/clean

CMakeFiles/uf2-app.dir/depend:
	cd /home/aruncs/Coding/ESP32/smart_blink/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aruncs/Coding/ESP32/smart_blink /home/aruncs/Coding/ESP32/smart_blink /home/aruncs/Coding/ESP32/smart_blink/build /home/aruncs/Coding/ESP32/smart_blink/build /home/aruncs/Coding/ESP32/smart_blink/build/CMakeFiles/uf2-app.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/uf2-app.dir/depend

