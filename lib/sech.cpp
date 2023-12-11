#include "sech.h"
#include "sinh.h"
#include "cosh.h"
#include "division.h"
#include <cmath>

Complex sech(const Complex z)
{
  return Complex(cosh(z.real)*cos(z.img),sinh(z.real)*sin(z.img))/Complex((cosh(z.real)*cosh(z.real))*(cos(z.img)*cos(z.img)), (sinh(z.real)*sinh(z.real))*(sin(z.img)*sin(z.img)));
}
