#include "asin.h"
#include "addition.h"
#include "log.h"
#include "multiplication.h"
#include "sqrt.h"
#include "subtraction.h"
#include <cmath>
#include <limits>

Complex asin(Complex z) {
  return Complex(0, -1) * log((Complex(0, 1) * z) + (sqrt(1 - (z * z))));
}