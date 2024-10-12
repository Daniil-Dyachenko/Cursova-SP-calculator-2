cmake_minimum_required(VERSION 3.10)

# Project name
project(CalculatorProject)

# Add a library (shared or static)
add_library(Calculator SHARED calculator.cpp)

# Create an executable
add_executable(CalculatorApp main.cpp)

# Link the executable with the library
target_link_libraries(CalculatorApp Calculator)