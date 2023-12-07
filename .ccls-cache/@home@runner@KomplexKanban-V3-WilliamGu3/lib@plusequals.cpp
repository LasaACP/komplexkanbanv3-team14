#include "addition.h"
#include "plusequals.h"

Complex operator+=(const Complex &z, const Complex &w){
  return Complex(z.real + w.real, z.img + w.img);
}
Complex operator+=(const Complex &z, const double &w){
  return Complex(z.real + w, z.img);
}
Complex operator+=(const double &z, const Complex &w){
  return Complex(z + w.real,w.img);
}