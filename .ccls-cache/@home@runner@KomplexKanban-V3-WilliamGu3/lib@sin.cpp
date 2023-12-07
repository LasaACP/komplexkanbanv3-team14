#include "sin.h"
#include <cmath>
#include "polar.h"

Complex sin(Complex z){
  return Complex(sin(z.real)*cosh(z.img), cos(z.real)*sinh(z.img));
}