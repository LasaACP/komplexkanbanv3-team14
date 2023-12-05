#include "Complex.h" 
#include "equality.h"
bool operator==(const Complex &z, const Complex &w) {
   if(z.real == w.real && z.img == w.img){
     return true;
   }
  else{
    return false;
  }
}
bool operator==(const Complex &z, const double &w) {
   if(z.img == 0 && z.real == w){
     return true;
   }
  else{
    return false;
  }
}