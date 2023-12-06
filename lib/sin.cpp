#include "sin.h"
#include <cmath>
#include "polar.h"

Complex sin(Complex z){
  return polar(sin(z.real)*cosh(z.img), cos(z.real)*sinh(z.img));
}