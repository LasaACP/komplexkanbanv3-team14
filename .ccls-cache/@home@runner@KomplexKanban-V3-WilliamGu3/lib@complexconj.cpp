#include "Complex.h"
#include "complexconj.h"

Complex conj(Complex z){
  return Complex(z.real, -z.img);  
}