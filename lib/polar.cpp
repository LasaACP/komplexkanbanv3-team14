#include "polar.h"
#include <cmath>

Complex polar(double magnitude, double theta){
  return Complex(magnitude * cos(theta), magnitude * sin(theta));
}