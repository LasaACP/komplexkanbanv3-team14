#include "sqrt.h"
#include "polar.h"
#include "argument.h"
#include "absolutevalue.h"
#include <cmath>

Complex sqrt(Complex z){
  // sqrt magnitude
  // cis theta/2
  return Complex(polar(sqrt(abs(z)), arg(z)/2));
}