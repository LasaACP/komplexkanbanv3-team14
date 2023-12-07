#include "acos.h"
<<<<<<< HEAD
Complex acos(const Complex z)
{
  return z; //dummy return will calculate, for formatting @Lalsin Mawi Nilian -- you need to complete this calculation
=======
#include <cmath>
#include <limits>

double acos(Complex z){
  return std::numeric_limits<double>::quiet_NaN();
>>>>>>> f2f0736 (made all files and wrote NaN as return for most of them)
}