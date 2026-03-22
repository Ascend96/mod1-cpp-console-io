cmake_minimum_required(VERSION 4.1)
project(display_information_console)

set(CMAKE_CXX_STANDARD 20)

# add each program as an executable so they can be run separately within the same repo
add_executable(DisplayInputsConsole DisplayInputsConsole/main.cpp)
add_executable(Program1BugFixes Program1BugFixes/CSC450_CT1_mod1-1.cpp)
add_executable(Program2BugFixes Program2BugFixes/CSC450_CT1_mod1-2.cpp)
