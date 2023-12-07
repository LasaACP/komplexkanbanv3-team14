#include "tan.h"
#include "sin.h"
#include "cos.h"
#include "division.h"

Complex tan(Complex z){
  return Complex(sin(2*z.real), sinh(2*z.img))/(cos(2*z.real)+cosh(2*z.img));
}