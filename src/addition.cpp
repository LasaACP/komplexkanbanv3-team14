#include "Complex.h" 

Complex Complex::operator+( Complex &other ) {
   return Complex( real + other.real, img + other.img);
}