#include "pow.h"
#include "multequals.h"
#include "log.h"
#include <cmath>
#include "multiplication.h"
#include "abs.h"
#include "arg.h"
#include "polar.h"
#include "exp.h"
#include "addition.h"
#define EULER 2.71828182845904523536
Complex pow(double b, const  Complex a)
{
  return exp(log(b)*a);
}
Complex pow(const Complex b,  int a)
{
  int num = 0;
  for(int i = 0; i < a; i++){
    num *= abs(b);
  }
  return polar(num, arg(b)*a);
}
Complex pow(const Complex b,  double a)
{
  return exp(log(b)*a);
}
Complex pow(const Complex b, const Complex a)
{
  double absolute = abs(b);
  return exp(log(absolute)*a + Complex(0,1)*arg(b)*a);
}
//from source file, jacob (I) will complete files later