#include "instream.h"

istream &operator>>( istream &a, Complex &z ){
  a >> z.real >> z.img;
  return a;
}