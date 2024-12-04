#!/bin/bash

# Initialization
PROJECT_NAME="cpp-codebase"
BUILD_DIR="build"

# Create the build directory if it doesn't exist
if [ ! -d "$BUILD_DIR" ]; then
    echo "Creating build directory..."
    mkdir "$BUILD_DIR"
fi

# Navigate into the build directory
cd "$BUILD_DIR" || exit

# Run CMake to configure the project
echo "Configuring the project..."
cmake .. 

# Check if the configuration was successful
if [ $? -ne 0 ]; then
    echo "CMake configuration failed!"
    exit 1
fi

# Build the project
echo "Building the project..."
cmake --build .

# Check if the build was successful
if [ $? -ne 0 ]; then
    echo "Build failed!"
    exit 1
fi

echo "Build completed successfully!"

# Separate the build from the output 
echo "----------------------------------------"

# Run the executable if it exists
EXECUTABLE="./output"

if [ -f "$EXECUTABLE" ]; then
    $EXECUTABLE
else
    echo "Executable 'output' not found!"
    exit 1
fi

