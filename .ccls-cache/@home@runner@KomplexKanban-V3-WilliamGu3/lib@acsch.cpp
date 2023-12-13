#include "acsch.h"
#include <limits>
#include "division.h"
#include "multiplication.h"
#include "addition.h"
#include "subtraction.h"
#include "log.h"
#include "sqrt.h"
Complex acsch(Complex z){
  return log((1+sqrt(1+(z*z)))/z);
}