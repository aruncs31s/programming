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
CMAKE_SOURCE_DIR = /home/aruncs/Git/ESP32/esp-idf/components/bootloader/subproject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aruncs/Coding/ESP32/smart_blink/build/bootloader

# Utility rule file for efuse_test_table.

# Include any custom commands dependencies for this target.
include esp-idf/efuse/CMakeFiles/efuse_test_table.dir/compiler_depend.make

# Include the progress variables for this target.
include esp-idf/efuse/CMakeFiles/efuse_test_table.dir/progress.make

esp-idf/efuse/CMakeFiles/efuse_test_table:
	cd /home/aruncs/Coding/ESP32/smart_blink/build/bootloader/esp-idf/efuse && /home/aruncs/.espressif/python_env/idf5.4_py3.12_env/bin/python /home/aruncs/Git/ESP32/esp-idf/components/efuse/efuse_table_gen.py /home/aruncs/Git/ESP32/esp-idf/components/efuse/test/esp_efuse_test_table.csv -t esp32 --max_blk_len 192

efuse_test_table: esp-idf/efuse/CMakeFiles/efuse_test_table
efuse_test_table: esp-idf/efuse/CMakeFiles/efuse_test_table.dir/build.make
.PHONY : efuse_test_table

# Rule to build all files generated by this target.
esp-idf/efuse/CMakeFiles/efuse_test_table.dir/build: efuse_test_table
.PHONY : esp-idf/efuse/CMakeFiles/efuse_test_table.dir/build

esp-idf/efuse/CMakeFiles/efuse_test_table.dir/clean:
	cd /home/aruncs/Coding/ESP32/smart_blink/build/bootloader/esp-idf/efuse && $(CMAKE_COMMAND) -P CMakeFiles/efuse_test_table.dir/cmake_clean.cmake
.PHONY : esp-idf/efuse/CMakeFiles/efuse_test_table.dir/clean

esp-idf/efuse/CMakeFiles/efuse_test_table.dir/depend:
	cd /home/aruncs/Coding/ESP32/smart_blink/build/bootloader && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aruncs/Git/ESP32/esp-idf/components/bootloader/subproject /home/aruncs/Git/ESP32/esp-idf/components/efuse /home/aruncs/Coding/ESP32/smart_blink/build/bootloader /home/aruncs/Coding/ESP32/smart_blink/build/bootloader/esp-idf/efuse /home/aruncs/Coding/ESP32/smart_blink/build/bootloader/esp-idf/efuse/CMakeFiles/efuse_test_table.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : esp-idf/efuse/CMakeFiles/efuse_test_table.dir/depend

