#include "norm.h"
#include <cmath>

double norm(Complex z){
  return z.real*z.real + z.img*z.img;  
}