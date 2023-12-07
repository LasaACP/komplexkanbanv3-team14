#include "notequals.h"

bool operator!=(const Complex &z, const Complex &w){
  if(z.real != w.real || z.img != w.img){
    return true;
}
return false;
}
bool operator!=(const Complex &z, const double &w){
  if(z.img != 0 || z.real != w){
    return true;
  }
  return false;
  
}
bool operator!=(const double &z, const Complex &w){
  if(w.img != 0 || z != w.real){
    return true;
  }
  return false;

  }
