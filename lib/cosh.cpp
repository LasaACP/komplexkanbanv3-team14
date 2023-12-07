#include "cosh.h"
#include <cmath>
Complex cosh(const Complex z)
{
  return Complex(cosh(z.real)*cos(z.img),sinh(z.real)*sin(z.img));
}