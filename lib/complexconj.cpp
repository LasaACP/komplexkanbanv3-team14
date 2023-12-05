#include "Complex.h"
#include "complexconj.h"

Complex conj(const Complex &z){
  return Complex(z.real, -z.img);  
}