#include "polar.h"
#include <cmath>
#include <math.h>
#include "absolutevalue.h"
#include "arg.h"

Complex polar(double magnitude, double theta){//theta MUST be in radians. calculated with the arg function! 
  return Complex(magnitude * cos(theta), magnitude * sin(theta));
}
