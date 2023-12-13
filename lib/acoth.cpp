#include "acoth.h"
#include "division.h"
#include "multiplication.h"
#include "addition.h"
#include "subtraction.h"
#include "log.h"
#include <limits>

Complex acoth(Complex z){
  return (1/2)*log((z+1)/(z-1));
}