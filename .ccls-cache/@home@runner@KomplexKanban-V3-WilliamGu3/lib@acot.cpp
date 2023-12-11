#include "acot.h"
#include "division.h"
#include "multiplication.h"
#include "addition.h"
#include "subtraction.h"
#include "log.h"
#include <limits>

Complex acot(Complex z){
  return ((1/Complex(0,2))*log((z+1)/(z-1)));
}