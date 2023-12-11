#include "atan.h"
#include "division.h"
#include "multiplication.h"
#include "addition.h"
#include "subtraction.h"
#include "log.h"
#include <limits>

Complex atanh(Complex z){
  return (1/2)*log((1+z)/(1-z));
}