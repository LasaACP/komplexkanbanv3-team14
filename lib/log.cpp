#include "log.h"
#include "absolutevalue.h"
#include <tgmath.h>
#include <cmath>
#include "polar.h"

Complex log(Complex z){
  return polar(log(abs(z)), atan2(z.img, z.real));
}
