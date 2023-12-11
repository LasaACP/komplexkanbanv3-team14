#include "acos.h"
#include "addition.h"
#include "log.h"
#include "multiplication.h"
#include "sqrt.h"
#include "subtraction.h"
#include "division.h"
#include "log.h"
#include "pow.h"
#include "addition.h"
#include "multiplication.h"
#include "subtraction.h"
#include "sqrt.h"
#include <cmath>
#include <limits>
#define EULER 2.71828182845904523536

Complex acos(Complex z){
  return ((1.0/Complex(0,1))*log(z+sqrt(z*z-1)));
}