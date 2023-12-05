#include "Complex.h" 
#include "addition.h"
Complex operator+(const Complex &z, const Complex &w) {
   return Complex(z.real + w.real, z.img + w.img);
}
Complex operator+(const Complex &z, const double &w) {
   return Complex(z.real + w, z.img);
}
