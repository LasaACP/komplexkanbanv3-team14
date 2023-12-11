#include "acos.h"
#include "division.h"
#include "log.h"
#include "pow.h"
#include "addition.h"
#include "multiplication.h"
#include "subtraction.h"
#include "sqrt.h"
#include <cmath>
#include <limits>

Complex acos(Complex z){
  return ((1.0/Complex(0,1))*log(z+sqrt(pow(z,2))-1));

}