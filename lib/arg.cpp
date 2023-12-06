#include "arg.h"
#include <cmath>
#define PI 3.1415926538979323846

double arg(Complex z){
  if(z.real < 0){
    return atan(z.img/z.real)+PI;
  }
  return atan(z.img/z.real);
}