#include "acsch.h"
#include <limits>
#include "division.h"
#include "multiplication.h"
#include "addition.h"
#include "subtraction.h"
#include "log.h"
#include "sqrt.h"
Complex acsch(Complex z){
  return log((sqrt(1+(1/z*z))+(1/z)));
}