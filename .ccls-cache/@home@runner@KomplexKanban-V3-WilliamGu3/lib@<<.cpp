#include "<<.h"

ostream &operator<<(ostream &a, const Complex &z){
  return a << z.real << "+" << z.img << "i";  
}