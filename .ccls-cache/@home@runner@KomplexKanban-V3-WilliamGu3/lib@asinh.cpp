#include "asinh.h"
#include "division.h"
#include "multiplication.h"
#include "addition.h"
#include "subtraction.h"
#include "log.h"
#include "sqrt.h"
#include <limits>

Complex asinh(Complex z){
  return log(z+sqrt(z*z + 1));
}