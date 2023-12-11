#include "acosh.h"
#include "log.h"
#include "addition.h"
#include "subtraction.h"
#include "sqrt.h"
#include "multiplication.h"

#include <limits>

Complex acosh(Complex z){
  return log(z+sqrt(z+1)*sqrt(z-1));
}