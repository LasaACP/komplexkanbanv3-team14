#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
public:
  double real;
  double img;
  Complex();
  Complex(double r, double i);
Complex operator+(Complex &other);
};

#endif