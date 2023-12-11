#include "acos.h"
#include "addition.h"
#include "log.h"
#include "multiplication.h"
#include "sqrt.h"
#include "subtraction.h"
#include <cmath>
#include <limits>
#define EULER 2.71828182845904523536

Complex acos(Complex z) {
  return Complex(0, -1) * log(z + (sqrt((z * z) - 1)));
}