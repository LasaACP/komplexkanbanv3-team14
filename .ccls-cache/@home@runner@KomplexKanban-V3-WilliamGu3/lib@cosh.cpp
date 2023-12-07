#include "cosh.h"
<<<<<<< HEAD
#include <cmath>
Complex cosh(const Complex z)
{
  return Complex(cosh(z.real)*cos(z.img),sinh(z.real)*sin(z.img));
=======
#include <limits>

double cosh(Complex z){
  return std::numeric_limits<double>::quiet_NaN();
>>>>>>> f2f0736 (made all files and wrote NaN as return for most of them)
}