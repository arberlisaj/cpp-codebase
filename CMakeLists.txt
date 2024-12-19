cmake_minimum_required(VERSION 3.10)
project(cpp-codebase)

# Exports
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Specify include directories
include_directories(include)

# Add source files from subdirectories
file(GLOB_RECURSE SOURCES src/*.cpp)

# Create the executable
add_executable(output ${SOURCES})

