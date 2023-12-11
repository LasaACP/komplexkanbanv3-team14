# Complete the CMake buid files

cmake_minimum_required(VERSION 3.10)
project(myProject)
#to run main file. ../src/main.cpp instead of main_test
#remove the two test files

#to run tests: 
#../src/main_test.cpp
#../tests/catch_amalgamated.cpp
#../tests/catch_amalgamated.hpp

add_executable(MyProgram
../src/main_test.cpp
../tests/catch_amalgamated.cpp
../tests/catch_amalgamated.hpp
  ../lib/abs.cpp
  ../lib/cos.cpp   
  ../lib/instream.cpp
  ../lib/norm.cpp        
  ../lib/sin.cpp
  ../lib/abs.h    
  ../lib/pow.cpp
  ../lib/pow.h
  
  ../lib/acos.h
  ../lib/acos.cpp
  ../lib/acosh.h
  ../lib/acosh.cpp
  ../lib/acot.cpp
  ../lib/acot.h
  ../lib/acoth.h
  ../lib/acoth.cpp
  ../lib/acsc.h
  ../lib/acsc.cpp
  ../lib/acsch.cpp
  ../lib/acsch.h
  ../lib/asec.cpp
  ../lib/asec.h
  ../lib/asech.cpp
  ../lib/asech.h
  ../lib/asin.h
  ../lib/asin.cpp
  ../lib/asinh.h
  ../lib/asinh.cpp
  ../lib/atan.cpp
  ../lib/atan.h
  ../lib/atanh.cpp
  ../lib/atanh.h
  ../lib/cosh.cpp
  ../lib/cosh.h
  ../lib/notequals.cpp
  ../lib/notequals.h
  ../lib/rnd.cpp
  ../lib/rnd.h
  ../lib/rotate.cpp
  ../lib/rotate.h
  ../lib/sinh.h
  ../lib/sinh.cpp
  ../lib/tanh.cpp
  ../lib/tanh.h
  
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
  ../lib/divequals.cpp
  ../lib/divequals.h
  ../lib/log10.cpp
  ../lib/log10.h
  
  
)

