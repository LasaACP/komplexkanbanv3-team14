#include "tanh.h"
#include "sinh.h"
#include "cosh.h"
#include "division.h"
#include <cmath>
#include "sinh.h"
#include "cosh.h"
#include "division.h"

Complex tanh(const Complex z)
{
  return Complex(sinh(z.real)*cos(z.img), cosh(z.real)*sin(z.img))/Complex(cosh(z.real)*cos(z.img),sinh(z.real)*sin(z.img));
}