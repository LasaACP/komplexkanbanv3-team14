#include "log10.h"
#include "log.h"
#include <cmath>
Complex log10(const Complex c)
{
  Complex n = log(c);
  return Complex(n.real/log(10), n.img/log(10));
}