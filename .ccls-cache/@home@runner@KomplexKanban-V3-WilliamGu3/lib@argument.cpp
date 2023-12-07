#include "Complex.h"
#include "argument.h"
#include <cmath>

double arg(Complex z){
  return atan(z.img/z.real);
};