#include "acsc.h"
#include "division.h"
#include "multiplication.h"
#include "addition.h"
#include "subtraction.h"
#include "sqrt.h"
#include "log.h"
#include <limits>

Complex acsc(Complex z){
  return ((1/Complex(0,1))*log((Complex(0,1)+sqrt(z*z  - 1))/z));
}