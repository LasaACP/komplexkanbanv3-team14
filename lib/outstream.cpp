#include "outstream.h"

ostream &operator<<(ostream &a, const Complex &z){
  if(z.img >=0 ){
    if(z.img == 0){
      return a << z.real;
    }
    else if(z.real == 0){
      return a << z.img << "i";
    }
    return a << z.real << "+" << z.img << "i";  
  }
  else{
    if(z.real == 0){
      return a << z.img << "i";
    }
    return a << z.real << "-" << -1*z.img << "i";  
  }

}