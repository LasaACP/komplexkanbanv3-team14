#include "sqrt.h"
#include "polar.h"
#include "argument.h"
#include "absolutevalue.h"
#include <cmath>

Complex sqrt(Complex z){ // answer is in polar
  // sqrt magnitude
  // cis theta/2
  return polar(sqrt(abs(z)), arg(z)/2);
}