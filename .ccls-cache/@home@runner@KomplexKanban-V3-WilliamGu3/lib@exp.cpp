#include "exp.h"
#include <cmath>
#include "multiplication.h"
using namespace std;
Complex exp(Complex z){
  return exp(z.real)*Complex(cos(z.img), sin(z.img));
}