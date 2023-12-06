# Complete the CMake buid files
cmake_minimum_required(VERSION 3.10)
project(myProject)



add_executable(MyProgram
  ../src/main_test.cpp
  ../tests/catch_amalgamated.cpp
  ../tests/catch_amalgamated.hpp
  ../lib/addition.cpp
  ../lib/addition.h
  ../lib/Complex.cpp
  ../lib/Complex.h
  ../lib/equality.cpp
  ../lib/equality.h
  
)

