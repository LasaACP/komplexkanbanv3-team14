#include "Complex.h"
#include "conj.h"
Complex conj(Complex z){
  return Complex(z.real, -z.img);
}