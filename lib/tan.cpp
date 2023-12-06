#include "tan.h"
#include "sin.h"
#include "cos.h"
#include "division.h"

Complex tan(Complex z){
  return (sin(z)/cos(z));
}