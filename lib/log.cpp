#include "log.h"
#include "absolutevalue.h"
#include <tgmath.h>
#include <cmath>
#include "polar.h"
#include "arg.h"

Complex log(Complex z){
  return polar(log(abs(z)), arg(z));
}
