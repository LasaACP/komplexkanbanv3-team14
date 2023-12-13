#include "multiplication.h"
Complex operator*(const Complex &z, const Complex &w) {
   return Complex(z.real*w.real - z.img*w.img, z.real*w.img + z.img*w.real);
}
Complex operator*(const Complex &z, const double &w) {
   return Complex(z.real*w, z.img*w);
}
Complex operator*(const double &z, const Complex &w) {
   return Complex(w.real*z, w.img*z);
}