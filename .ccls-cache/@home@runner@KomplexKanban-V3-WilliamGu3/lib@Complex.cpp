#include "Complex.h"
#include <cmath>
Complex::Complex() {
    real = 0;
    img = 0;
  }
Complex::Complex(double r, double i) {
    real = r;
    img = i;
  }
Complex Complex::rnd(int placesToRound) const {
  double power = pow(10, placesToRound);
  return Complex(round(real * power) / power, round(img * power) / power);
}
