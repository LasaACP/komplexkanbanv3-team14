# Complete the CMake buid files
cmake_minimum_required(VERSION 3.10)
project(myProject)

add_library(MyLibrary STATIC
  ../lib/absolutevalue.cpp
  ../lib/absolutevalue.h
  ../lib/addition.cpp
  ../lib/addition.h
  ../lib/argument.cpp
  ../lib/argument.h
  ../lib/complexconj.cpp
  ../lib/complexconj.h
  ../lib/Complex.cpp
  ../lib/Complex.h
  ../lib/division.cpp
  ../lib/division.h
  ../lib/equality.cpp
  ../lib/equality.h
  ../lib/multiplication.cpp
  ../lib/multiplication.h
  ../lib/outstream.cpp
  ../lib/outstream.h
  ../lib/instream.cpp
  ../lib/instream.h
  ../lib/polar.cpp
  ../lib/polar.h
  ../lib/exp.h
  ../lib/exp.cpp
)

add_executable(MyProgram
  main.cpp
  main_test.cpp
)

target_link_libraries(MyProgram PRIVATE MyLibrary)
