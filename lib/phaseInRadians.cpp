#include "phaseInRadians.h"
#include <cmath>

double arg(Complex z){
  return atan(z.img / z.real);
}