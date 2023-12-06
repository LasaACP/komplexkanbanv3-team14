# Complete the CMake buid files
cmake_minimum_required(VERSION 3.10)
project(myProject)



add_executable(MyProgram
  ../src/main_test.cpp
  ../tests/catch_amalgamated.cpp
  ../tests/catch_amalgamated.hpp
  ../lib/absolutevalue.cpp
  ../lib/cos.cpp   
  ../lib/instream.cpp
  ../lib/norm.cpp        
  ../lib/sin.cpp
  ../lib/absolutevalue.h    
  ../lib/cos.h     
  ../lib/instream.h      
  ../lib/norm.h      
  ../lib/sin.h
  ../lib/addition.cpp       
  ../lib/division.cpp  
  ../lib/log.cpp         
  ../lib/outstream.cpp   
  ../lib/sqrt.cpp
  ../lib/addition.h     
  ../lib/division.h    
  ../lib/log.h           
  ../lib/outstream.h     
  ../lib/sqrt.h
  ../lib/arg.cpp       
  ../lib/equality.cpp  
  ../lib/minusequals.cpp     
  ../lib/plusequals.cpp  
  ../lib/subtraction.cpp
  ../lib/arg.h     
  ../lib/equality.h    
  ../lib/minusequals.h       
  ../lib/plusequals.h    
  ../lib/subtraction.h
  ../lib/conj.cpp    
  ../lib/exp.cpp   
  ../lib/multequals.cpp      
  ../lib/polar.cpp       
  ../lib/tan.cpp
  ../lib/conj.h      
  ../lib/exp.h     
  ../lib/multequals.h        
  ../lib/polar.h         
  ../lib/tan.h
  ../lib/Complex.cpp    
  ../lib/imag.cpp  
  ../lib/multiplication.cpp  
  ../lib/real.cpp
  ../lib/Complex.h      
  ../lib/imag.h    
  ../lib/multiplication.h    
  ../lib/real.h
  
  
)

