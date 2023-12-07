#include "sinh.h"
#include <cmath>
Complex sinh(const Complex z)
{
  return Complex(sinh(z.real)*cos(z.img), cosh(z.real)*sin(z.img));
}