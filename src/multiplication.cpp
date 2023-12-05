#include "Complex.h" 
#include "multiplication.h"
Complex operator*(const Complex &z, const Complex &w) {
   return Complex(z.real*w.real - z.img*w.img, z.real*w.img + z.img*w.real);
}