<<<<<<< HEAD
#include "Complex.h"
#include "conj.h"

Complex conj(Complex z){
  return Complex(z.real, -z.img);  
=======
#include "conj.h"
Complex conj(Complex z){
  return Complex(z.real, -z.img);
>>>>>>> b9ee5afdaad7cc82c4c19f150506b3b9debecb3e
}