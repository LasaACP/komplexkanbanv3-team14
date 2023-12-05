#include "Complex.h"
#include "argument.h"
#include <cmath>

double arg(const Complex &z){
  return atan(z.img/z.real);
};