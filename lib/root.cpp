#include "root.h"
#include "abs.h"
#include "polar.h"
#include "arg.h"

Complex root(Complex a, int num){
  return polar(pow(abs(a), 1/num), arg(a)/num);
}