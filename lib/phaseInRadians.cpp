#include "phaseInRadians.h"
#include <cmath>

double arg(const Complex &z){
  return atan(z.img / z.real);
}