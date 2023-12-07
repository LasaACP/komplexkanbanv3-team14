#include "Complex.h"
#include "abs.h"
#include <cmath>

double abs(Complex z){
  return sqrt(z.real*z.real + z.img*z.img);  
}
