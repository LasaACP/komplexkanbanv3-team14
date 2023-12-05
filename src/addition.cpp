#include "Complex.h" 
#include "addition.h"
Complex Complex::operator+( Complex &other ) {
   return Complex( real + other.real, img + other.img);
}