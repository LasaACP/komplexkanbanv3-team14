#include "division.h"
#include "divequals.h"
#include <math.h>

Complex operator /= (const Complex &z, const Complex &w) {
  return Complex((z.real * w.real + z.img * w.img) / (pow(w.real, 2) + pow(w.img, 2)) , (z.img * w.real - z.real * w.img) / (pow(w.real, 2) + pow(w.img, 2)));
}
Complex operator /= (const Complex &z, const double &w) {
  return Complex(z.real / w , z.img / w);
}
Complex operator /= (const double &z, const Complex &w) {
  return Complex(z * w.real / (pow(w.real, 2) + pow(w.img, 2)) , -1 * (z * w.img / (pow(w.real, 2) + pow(w.img, 2))));
}