#include "rotate.h"
#include "polar.h"
#include "abs.h"
#include "arg.h"

#include <limits>

Complex rotate(Complex z, double radians){
  return polar(abs(z), arg(z)+radians);
}