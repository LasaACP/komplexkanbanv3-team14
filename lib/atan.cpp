#include "atan.h"
#include "addition.h"
#include "division.h"
#include "log.h"
#include "multiplication.h"
#include "subtraction.h"
#include <limits>
Complex atan(Complex z) {
  return Complex(0, 0.5) *
         log((1 + (z * Complex(0, 1))) / (1 - (z * Complex(0, 1))));
}