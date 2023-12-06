#include "exp.h"
#include <cmath>
#include "multiplication.h"
using namespace std;
Complex exp(Complex z){
  const double EulerConstant = exp(1.0);
  return pow(EulerConstant, z.real)*Complex(cos(z.img), sin(z.img));
}