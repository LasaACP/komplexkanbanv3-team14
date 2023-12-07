#include "sinh.h"
#include <cmath>
<<<<<<< HEAD
Complex sinh(const Complex z)
{
  return Complex(sinh(z.real)*cos(z.img), cosh(z.real)*sin(z.img));
=======
#include "polar.h"
#include <limits>

Complex sinh(Complex z){
  return Complex(std::numeric_limits<double>::quiet_NaN(),std::numeric_limits<double>::quiet_NaN());
>>>>>>> f2f0736 (made all files and wrote NaN as return for most of them)
}