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