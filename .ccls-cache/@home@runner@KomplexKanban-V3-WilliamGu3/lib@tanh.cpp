#include "tanh.h"
#include <cmath>
<<<<<<< HEAD
Complex tanh(const Complex z)
{
  return z; //dummy, I-Jacob will finsh 
=======
#include "polar.h"
#include <limits>

Complex tanh(Complex z){
  return Complex(std::numeric_limits<double>::quiet_NaN(),std::numeric_limits<double>::quiet_NaN());
>>>>>>> f2f0736 (made all files and wrote NaN as return for most of them)
}