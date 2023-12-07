#include "cos.h"

Complex cos(Complex z){
  return Complex(cos(z.real)*cosh(z.img) , sin(z.real)*sinh(z.img));
}