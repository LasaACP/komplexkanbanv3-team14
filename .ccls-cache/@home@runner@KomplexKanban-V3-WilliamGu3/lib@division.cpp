#include "Complex.h"
#include "division.h"
#include "conj.h"
#include "multiplication.h"

Complex operator/(const Complex &z, const Complex &w){
  return Complex((z.real*w.real + z.img*w.img)/(w.real*w.real + w.img*w.img), (z.img*w.real - z.real*w.img)/(w.real*w.real + w.img*w.img));
}
Complex operator/(const Complex &z, const double &w){
  return Complex(z.real/w, z.img/w);
}
Complex operator/(const double &z, const Complex&w){
  return Complex((z * conj(Complex(w.real, w.img)))/w*conj(Complex(w.real,w.img)));
}