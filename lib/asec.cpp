#include "Complex.h"
#include "division.h"
#include "multiplication.h"
#include "addition.h"
#include "subtraction.h"
#include "log.h"
#include "sqrt.h"
#include <limits>

Complex asec(Complex z){
  return ((1/Complex(0,1))*log((1+sqrt(1-z*z))/z));
}