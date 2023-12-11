#include "pow.h"
#include "multequals.h"
Complex pow(double b, const  Complex exp)
{
  return exp;
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
  return b;
}
Complex pow(const Complex b,  const Complex exp)
{
  return b;
}
//from source file, jacob (I) will complete files later