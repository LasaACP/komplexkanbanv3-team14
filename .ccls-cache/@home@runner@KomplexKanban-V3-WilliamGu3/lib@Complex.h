#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

class Complex {
public:
  double real;
  double img;
  Complex();
  Complex(double r, double i);
Complex rnd(int placesToRound) const {
  double power = pow(10, placesToRound);
  return Complex(round(real * power) / power, round(img * power) / power);
}
};


#endif