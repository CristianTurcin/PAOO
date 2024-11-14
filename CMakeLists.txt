cmake_minimum_required(VERSION 3.18.4)

project(WorkoutTracker)

# Specifică versiunea C++ utilizată
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Adaugă directorul include pentru fișierele header
include_directories(include)

# Adaugă fișierele sursă
add_executable(WorkoutTracker src/main.cpp src/exercise.cpp)

message(STATUS "Compiling project WorkoutTracker...")