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
../komplexkanbanv3-team14/src/main.cpp
  ../komplexkanbanv3-team14/lib/abs.cpp
  ../komplexkanbanv3-team14/lib/cos.cpp   
  ../komplexkanbanv3-team14/lib/instream.cpp
  ../komplexkanbanv3-team14/lib/norm.cpp        
  ../komplexkanbanv3-team14/lib/sin.cpp
  ../komplexkanbanv3-team14/lib/abs.h    
  ../komplexkanbanv3-team14/lib/pow.cpp
  ../komplexkanbanv3-team14/lib/pow.h
  
  ../komplexkanbanv3-team14/lib/acos.h
  ../komplexkanbanv3-team14/lib/acos.cpp
  ../komplexkanbanv3-team14/lib/acosh.h
  ../komplexkanbanv3-team14/lib/acosh.cpp
  ../komplexkanbanv3-team14/lib/acot.cpp
  ../komplexkanbanv3-team14/lib/acot.h
  ../komplexkanbanv3-team14/lib/acoth.h
  ../komplexkanbanv3-team14/lib/acoth.cpp
  ../komplexkanbanv3-team14/lib/acsc.h
  ../komplexkanbanv3-team14/lib/acsc.cpp
  ../komplexkanbanv3-team14/lib/acsch.cpp
  ../komplexkanbanv3-team14/lib/acsch.h
  ../komplexkanbanv3-team14/lib/asec.cpp
  ../komplexkanbanv3-team14/lib/asec.h
  ../komplexkanbanv3-team14/lib/asech.cpp
  ../komplexkanbanv3-team14/lib/asech.h
  ../komplexkanbanv3-team14/lib/asin.h
  ../komplexkanbanv3-team14/lib/asin.cpp
  ../komplexkanbanv3-team14/lib/asinh.h
  ../komplexkanbanv3-team14/lib/asinh.cpp
  ../komplexkanbanv3-team14/lib/atan.cpp
  ../komplexkanbanv3-team14/lib/atan.h
  ../komplexkanbanv3-team14/lib/atanh.cpp
  ../komplexkanbanv3-team14/lib/atanh.h
  ../komplexkanbanv3-team14/lib/cosh.cpp
  ../komplexkanbanv3-team14/lib/cosh.h
  ../komplexkanbanv3-team14/lib/notequals.cpp
  ../komplexkanbanv3-team14/lib/notequals.h

  ../komplexkanbanv3-team14/lib/rotate.cpp
  ../komplexkanbanv3-team14/lib/rotate.h
  ../komplexkanbanv3-team14/lib/sinh.h
  ../komplexkanbanv3-team14/lib/sinh.cpp
  ../komplexkanbanv3-team14/lib/tanh.cpp
  ../komplexkanbanv3-team14/lib/tanh.h
  ../komplexkanbanv3-team14/lib/coth.h
  ../komplexkanbanv3-team14/lib/coth.cpp
  
  ../komplexkanbanv3-team14/lib/cos.h     
  ../komplexkanbanv3-team14/lib/instream.h      
  ../komplexkanbanv3-team14/lib/norm.h      
  ../komplexkanbanv3-team14/lib/sin.h
  ../komplexkanbanv3-team14/lib/addition.cpp       
  ../komplexkanbanv3-team14/lib/division.cpp  
  ../komplexkanbanv3-team14/lib/log.cpp         
  ../komplexkanbanv3-team14/lib/outstream.cpp   
  ../komplexkanbanv3-team14/lib/sqrt.cpp
  ../komplexkanbanv3-team14/lib/addition.h     
  ../komplexkanbanv3-team14/lib/division.h    
  ../komplexkanbanv3-team14/lib/log.h           
  ../komplexkanbanv3-team14/lib/outstream.h     
  ../komplexkanbanv3-team14/lib/sqrt.h
  ../komplexkanbanv3-team14/lib/arg.cpp       
  ../komplexkanbanv3-team14/lib/equality.cpp  
  ../komplexkanbanv3-team14/lib/minusequals.cpp     
  ../komplexkanbanv3-team14/lib/plusequals.cpp  
  ../komplexkanbanv3-team14/lib/subtraction.cpp
  ../komplexkanbanv3-team14/lib/arg.h     
  ../komplexkanbanv3-team14/lib/equality.h    
  ../komplexkanbanv3-team14/lib/minusequals.h       
  ../komplexkanbanv3-team14/lib/plusequals.h    
  ../komplexkanbanv3-team14/lib/subtraction.h
  ../komplexkanbanv3-team14/lib/conj.cpp    
  ../komplexkanbanv3-team14/lib/exp.cpp   
  ../komplexkanbanv3-team14/lib/multequals.cpp      
  ../komplexkanbanv3-team14/lib/polar.cpp       
  ../komplexkanbanv3-team14/lib/tan.cpp
  ../komplexkanbanv3-team14/lib/conj.h      
  ../komplexkanbanv3-team14/lib/exp.h     
  ../komplexkanbanv3-team14/lib/multequals.h        
  ../komplexkanbanv3-team14/lib/polar.h         
  ../komplexkanbanv3-team14/lib/tan.h
  ../komplexkanbanv3-team14/lib/Complex.cpp    
  ../komplexkanbanv3-team14/lib/imag.cpp  
  ../komplexkanbanv3-team14/lib/multiplication.cpp  
  ../komplexkanbanv3-team14/lib/real.cpp
  ../komplexkanbanv3-team14/lib/Complex.h      
  ../komplexkanbanv3-team14/lib/imag.h    
  ../komplexkanbanv3-team14/lib/multiplication.h    
  ../komplexkanbanv3-team14/lib/real.h
  ../komplexkanbanv3-team14/lib/divequals.cpp
  ../komplexkanbanv3-team14/lib/divequals.h
  ../komplexkanbanv3-team14/lib/log10.cpp
  ../komplexkanbanv3-team14/lib/log10.h
)