#include "asech.h"
#include "subtraction.h"
#include "multiplication.h"
#include "division.h"
#include "sqrt.h"
#include "addition.h"
#include "log.h"
#include <limits>

Complex asech(Complex z){
  return log((1+sqrt(1-(z*z)))/z);
}