<<<<<<< HEAD
#include "Complex.h"
#include "arg.h"
#include <cmath>

double arg(Complex z){
  return atan(z.img/z.real);
};
=======
#include "arg.h"
#include <cmath>
#define PI 3.1415926538979323846

double arg(Complex z){
  if(z.real < 0){
    return atan(z.img/z.real)+PI;
  }
  return atan(z.img/z.real);
}
>>>>>>> b9ee5afdaad7cc82c4c19f150506b3b9debecb3e
