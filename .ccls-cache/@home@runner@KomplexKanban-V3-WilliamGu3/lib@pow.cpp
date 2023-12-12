#include "pow.h"
#include "multequals.h"
#include "log.h"
#include <cmath>
#include <complex>
#include "multiplication.h"
#define EULER 2.71828182845904523536
Complex pow(double b, const  Complex exp)
{
  return pow(EULER, exp * log(b));
}
Complex pow(const Complex b,  int exp)
{
  for(int i = 0; i < exp; i++){
    b *= b;
  }
  return b;
}
Complex pow(const Complex b,  double exp)
{
  return pow(EULER, exp*log(b));
}
Complex pow(const Complex b,  const Complex exp)
{
  return pow(EULER, exp*log(b));
}
//from source file, jacob (I) will complete files later