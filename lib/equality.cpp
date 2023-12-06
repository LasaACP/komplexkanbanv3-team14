#include "Complex.h" 
#include "equality.h"
#include <math.h>
bool operator==(const Complex &z, const Complex &w) {
  double a = z.real - w.real;
  a = fabs(a);
  double b = z.img - w.img;
  b = fabs(b);
   if(a < 0.01 && b < 0.01){
     return true;
   }
  else{
    return false;
  }
}
bool operator==(const Complex &z, const double &w) {
  double a = z.real - w;
  a = fabs(a);
   if(z.img == 0 && a < 0.01){
     return true;
   }
  else{
    return false;
  }
}
bool operator==(const double &z, const Complex &w) {
  double a = z - w.real;
  a = fabs(a);
   if(w.img == 0 && a < 0.01){
     return true;
   }
  else{
    return false;
  }
}