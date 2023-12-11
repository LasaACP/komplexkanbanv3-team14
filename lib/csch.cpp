#include "csch.h"
#include "sinh.h"
#include "cosh.h"
#include "division.h"
#include <cmath>

Complex csch(const Complex z)
{
  return Complex(sinh(z.real)*cos(z.img),cosh(z.real)*sin(z.img))/Complex((sinh(z.real)*sinh(z.real))*(cos(z.img)*cos(z.img)), (cosh(z.real)*cosh(z.real))*(sin(z.img)*sin(z.img)));
}
