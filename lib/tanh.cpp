#include "tanh.h"
#include <cmath>
#include "sinh.h"
#include "cosh.h"
#include "division.h"

Complex tanh(const Complex z)
{
  return sinh(z) / cosh(z);
}