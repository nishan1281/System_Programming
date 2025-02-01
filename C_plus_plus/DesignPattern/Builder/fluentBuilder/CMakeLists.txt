# Set the minimum required CMake version
cmake_minimum_required(VERSION 3.10)

# Project name
project(FluentBuilder)

# Add the executable, listing only the main.cpp file
add_executable(FluentBuilder
        main.cpp
)

# Specify the include directories for header files
target_include_directories(FluentBuilder PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
