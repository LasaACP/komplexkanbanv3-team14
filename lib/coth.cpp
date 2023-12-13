#include "coth.h"
#include "cosh.h"
#include "division.h"
#include "sinh.h"
#include <cmath>

Complex coth(const Complex z) {
  return Complex(cosh(z.real) * cos(z.img), sinh(z.real) * sin(z.img)) /
         Complex(sinh(z.real) * cos(z.img), cosh(z.real) * sin(z.img));
}
