#include "atan.h"
<<<<<<< HEAD
Complex atan(const Complex z)
{
  return z; //dummy return will calculate, for formatting @Lalsin Mawi Nilian -- you need to complete this calculation
=======
#include <limits>

double atan(Complex z){
  return std::numeric_limits<double>::quiet_NaN();
>>>>>>> f2f0736 (made all files and wrote NaN as return for most of them)
}