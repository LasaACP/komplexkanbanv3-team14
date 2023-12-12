/*

  Compile with: g++ main.cpp ../src/fac.cpp catch_amalgamated
  Run with ./a.out

*/

//#define CATCH_CONFIG_RUNNER
//#define CATCH_AMALGAMATED_CUSTOM_MAIN
/*
#include "../lib/Complex.h"
#include "../lib/abs.h"
#include "../lib/addition.h"
#include "../lib/arg.h"
#include "../lib/conj.h"
#include "../lib/cos.h"
#include "../lib/division.h"
#include "../lib/equality.h"
#include "../lib/exp.h"
#include "../lib/imag.h"
#include "../lib/instream.h"
#include "../lib/log.h"
#include "../lib/multequals.h"
#include "../lib/multiplication.h"
#include "../lib/norm.h"
#include "../lib/outstream.h"
#include "../lib/plusequals.h"
#include "../lib/polar.h"
#include "../lib/real.h"
#include "../lib/sin.h"
#include "../lib/sqrt.h"
#include "../lib/subtraction.h"
#include "../lib/tan.h"*/
#include "../lib/abs.h"

#include "../lib/acos.h"

#include "../lib/addition.h"

#include "../lib/arg.h"

#include "../lib/asin.h"

#include "../lib/atan.h"

#include "../lib/Complex.h"

#include "../lib/conj.h"

#include "../lib/cos.h"

#include "../lib/cosh.h"

#include "../lib/divequals.h"

#include "../lib/division.h"

#include "../lib/equality.h"

#include "../lib/exp.h"

#include "../lib/imag.h"

#include "../lib/instream.h"

#include "../lib/log.h"

#include "../lib/log10.h"

#include "../lib/minusequals.h"

#include "../lib/multequals.h"

#include "../lib/multiplication.h"

#include "../lib/norm.h"

#include "../lib/notequals.h"

#include "../lib/outstream.h"

#include "../lib/plusequals.h"

#include "../lib/polar.h"

#include "../lib/pow.h"

#include "../lib/real.h"


#include "../lib/rotate.h"

#include "../lib/sin.h"

#include "../lib/sinh.h"

#include "../lib/sqrt.h"

#include "../lib/subtraction.h"

#include "../lib/tan.h"

#include "../lib/tanh.h"


#include "../tests/catch_amalgamated.hpp"
#include <iostream>




#include "../lib/acosh.h"

#include "../lib/acoth.h"

#include "../lib/coth.h"

#include "../lib/acsc.h"

#include "../lib/acsch.h"

#include "../lib/asec.h"

#include "../lib/asech.h"


#include "../lib/asinh.h"



#include "../lib/atanh.h"



#include "../lib/notequals.h"


#include "../lib/acot.h"
#include "../lib/divequals.h"
#include "../lib/log10.h"

#include <tgmath.h>

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

using namespace std;

#ifdef CATCH_AMALGAMATED_CUSTOM_MAIN

int main_test(int argc, char *argv[]) {
  // global setup...

  int result = Catch::Session().run(argc, argv);

  // global clean-up...
  cout << "Hello Catch2 Build with custom main()\n";

  return result;
}

#else // Not CATCH_AMALGAMATED_CUSTOM_MAIN

// TEST_CASE("Quick Catch2 test on Factorial", "[Factorial]")
// {

//   cout << "Hello Catch2 Build with Catch2 main()\n";
//   cout << "Running tests on Factorial" << endl;
//   REQUIRE(Factorial(1) == 1);
//   REQUIRE(Factorial(2) == 2);
//   REQUIRE(Factorial(3) == 6);
//   REQUIRE(Factorial(4) == 24);
//   REQUIRE(Factorial(5) == 1);
// }
TEST_CASE("Testing Absolute Value/Magnitude") {
  cout << "Running tests on absolute value" << endl;
  REQUIRE(abs(Complex(3, 4)) == 5);
  REQUIRE(abs(Complex(0, 2)) == 2);
  REQUIRE(abs(Complex(-1, 2)) == sqrt(5));
  REQUIRE(abs(Complex(5, 0)) == 5);
  REQUIRE(abs(Complex(2, -2)) == sqrt(8));
}

TEST_CASE("Testing acos", "[acos]") {
  cout << "Running tests on acos" << endl;
  REQUIRE(acos(Complex(1, 2)) == Complex(1.1437 , -1.5286));
  REQUIRE(acos(Complex(0, 2)) == Complex(1.5707963, -1.4436355));
  REQUIRE(acos(Complex(2, 0)) == Complex(0, 1.3170));
}

TEST_CASE("Testing Addition") {
  cout << "Running tests on addition" << endl;
  REQUIRE(Complex(1, 2) + Complex(1, 2) == Complex(2, 4));
  REQUIRE(Complex(1, -2) + Complex(1, 2) == Complex(2, 0));
  REQUIRE(Complex(-1, 2) + 3 == Complex(2, 2));
  REQUIRE(3 + Complex(0, -5) == Complex(3, -5));
  REQUIRE(Complex(3, 0) + Complex(-2, 0) == Complex(1, 0));
}

TEST_CASE("Testing Equality") {
  cout << "Running tests on equality" << endl;
  REQUIRE(Complex(1, 2) == Complex(1, 2));
  REQUIRE(!(Complex(1, -2) == Complex(1, 2)));
}

TEST_CASE("Testing notequals") {
  cout << "Running tests on notequals" << endl;
  REQUIRE(!(Complex(1, 2) != Complex(1, 2)));
  REQUIRE((Complex(1, -2) != Complex(1, 2)));
}

TEST_CASE("Testing argument") {
  cout << "Running tests on argument" << endl;

  REQUIRE(arg(Complex(3, 4)) == atan(4.0 / 3.0));
  REQUIRE(arg(Complex(0, 2)) == M_PI / 2.0);
  REQUIRE(arg(Complex(4, 5)) == atan(5.0 / 4.0));
  REQUIRE(arg(Complex(2, 0)) == 0);
}

TEST_CASE("Testing asin", "[asin]") {
  cout << "Running tests on asin" << endl;
  REQUIRE(asin(Complex(3, 4)) == Complex(0.6340 , 2.3055));
  REQUIRE(asin(Complex(0, 2)) == Complex(0, 1.4436));
  REQUIRE(asin(Complex(2, 0)) == Complex(1.5708 , -1.3170));
}

TEST_CASE("Testing asinh", "[asinh]") {
  cout << "Running tests on asinh" << endl;
  REQUIRE(asinh(Complex(3, 4)) == polar(2.299914 , 0.917617));
  REQUIRE(asinh(Complex(0, 2)) == polar(1.316958, 1.570796));
  REQUIRE(asinh(Complex(2, 0)) == polar(1.443635 , 0));
}

TEST_CASE("Testing rotate", "[rotate]") {
  cout << "Running tests on rotate" << endl;
  REQUIRE(rotate(Complex(3, -4), PI) == Complex(-3, 4));
}

 

TEST_CASE("Testing atan", "[atan]") {
  cout << "Running tests on atan" << endl;
  REQUIRE(atan(Complex(3, 4)) == Complex(1.4483 , 0.1590));
  REQUIRE(atan(Complex(0, 2)) == Complex(-1.5708 , 0.5493));
  REQUIRE(atan(Complex(2, 0)) == 1.1071);
}

TEST_CASE("Testing atanh", "[atanh]") {
  cout << "Running tests on atanh" << endl;
  REQUIRE(atanh(Complex(3, 4)) == polar(0.117501 , 1.409921));
  REQUIRE(atanh(Complex(0, 2)) == polar(0, 1.107149));
  REQUIRE(atanh(Complex(1, -2)) == polar(0.173287, -1.178097));
}

TEST_CASE("Testing complex conjugate") {
  cout << "Running tests on complex conjugate" << endl;
  REQUIRE(conj(Complex(3, 4)) == Complex(3, -4));
  REQUIRE(conj(Complex(0, 2)) == Complex(0, -2));
  REQUIRE(conj(Complex(-1, 2)) == Complex(-1, -2));
  REQUIRE(conj(Complex(5, 0)) == 5);
  REQUIRE(conj(Complex(0, 0)) == 0);
}

TEST_CASE("Testing Cos", "[cos]") {
  cout << "Running tests on cos" << endl;
  REQUIRE(cos(Complex(3, 4)) == Complex(-27.03, 3.85));
  REQUIRE(cos(Complex(0, 2)) == 3.76219);
  REQUIRE(cos(Complex(2, 0)) == -0.41614);
}

TEST_CASE("Testing cosh", "[cosh]") {
  cout << "Running tests on cosh" << endl;
  REQUIRE(cosh(Complex(3, 4)) == Complex(-6.580663, -7.581553));
  REQUIRE(cosh(Complex(0, 2)) == Complex(-0.416147, 0));
  REQUIRE(cosh(Complex(2, 0)) == Complex(3.762196, 0));
}

TEST_CASE("Testing Division") {
  cout << "Running tests on Division" << endl;
  REQUIRE(Complex(3, 2) / Complex(3, -2) ==
          Complex(0.38461538461, 0.92307692307));
  REQUIRE(Complex(3, 2) / Complex(3, 2) == 1);
  REQUIRE(Complex(-1, 2) / Complex(1, 8) ==
          Complex(0.23076923076, 0.15384615384));
  REQUIRE(Complex(0, 5) / 3 == Complex(0, 1.66666666667));
  REQUIRE(Complex(3, 0) / 1 == Complex(3, 0));
}


TEST_CASE("Testing Exp", "[exp]") {
  cout << "Running tests on exp" << endl;
  REQUIRE(exp(Complex(3, 4)) == Complex(-13.12, -15.20));
  REQUIRE(exp(Complex(0,2)) == Complex(cos(2),sin(2)));
} 

TEST_CASE("Testing pow", "[pow]") {
  cout << "Running tests on pow" << endl;
  REQUIRE(pow(Complex(3, 4), 2) == Complex(-7, 24));
  REQUIRE(pow(2, Complex(3, 4)) == Complex(-7.4614966, 2.8854927));
  REQUIRE(pow(Complex(1, 2), Complex(3, 4)) == Complex(0.1290096, 0.0339241));
} 

TEST_CASE("Testing Imag") {
  cout << "Running tests on imag" << endl;
  REQUIRE(imag(Complex(1, 2)) == 2);
}

TEST_CASE("Testing Log", "[log]"){
  cout << "Running tests on log" << endl;
  REQUIRE(log(polar(2,PI)) == polar(log(2), PI));
  REQUIRE(log(polar(1,PI)) == polar(log(1), PI));
  REQUIRE(log(polar(sqrt(2),PI/4)) == polar(log(sqrt(2)), PI/4));
}

TEST_CASE("Testing log10", "[log10]"){
  cout << "Running tests on log10" << endl;
  REQUIRE(log10(polar(2,PI)) == polar(log10(2), PI));
  cout << polar(2,PI);
  REQUIRE(log10(polar(1,PI)) == polar(log10(1), PI));
  REQUIRE(log10(polar(sqrt(2),PI/4)) == polar(log10(sqrt(2)), PI/4));
}

TEST_CASE("Testing minusequals", "[minusequals]") {
  cout << "Running tests on minusequals" << endl;
  REQUIRE((Complex(3, 2) -= Complex(3, -2)) == Complex(0, 4));
  REQUIRE((Complex(-5, 2) -= Complex(3, -2)) == Complex(-8, 4));
}
TEST_CASE("Testing multequals", "[multequals]") {
  cout << "Running tests on multequals" << endl;
  REQUIRE((Complex(3, 2) *= Complex(3, -2)) == Complex(13, 0));
  REQUIRE((Complex(3, 2) *= Complex(3, 2)) == Complex(5, 12));
  REQUIRE((Complex(-1, 2) *= Complex(1, 8)) == Complex(-17, -6));
  REQUIRE((Complex(0, 5) *= 3) == Complex(0, 15));
  REQUIRE((Complex(3, 0) *= 0) == Complex(0, 0));
}

TEST_CASE("Testing divequals", "[divequals]") {
  cout << "Running tests on divequals" << endl;
  REQUIRE((Complex(3, 2) /= Complex(3, -2)) == Complex(0.38461538461, 0.92307692307));
  REQUIRE((Complex(3, 2) /= Complex(3, 2)) == Complex(1, 0));
  REQUIRE((Complex(-1, 2) /= Complex(1, 8)) == Complex(0.23076923076, 0.15384615384));
  REQUIRE((Complex(0, 5) /= 3) == Complex(0, 1.66666666667));
}

TEST_CASE("Testing Multiplication") {
  cout << "Running tests on multiplication" << endl;
  REQUIRE(Complex(3, 2) * Complex(3, -2) == Complex(13, 0));
  REQUIRE(Complex(3, 2) * Complex(3, 2) == Complex(5, 12));
  REQUIRE(Complex(-1, 2) * Complex(1, 8) == Complex(-17, -6));
  REQUIRE(Complex(0, 5) * 3 == Complex(0, 15));
  REQUIRE(Complex(3, 0) * 0 == Complex(0, 0));
}

TEST_CASE("Testing norm") {
  cout << "Running tests on norm" << endl;
  REQUIRE(norm(Complex(3, 4)) == 25);
  REQUIRE(norm(Complex(0, 2)) == 4);
  REQUIRE(norm(Complex(-1, 2)) == 5);
  REQUIRE(norm(Complex(5, 0)) == 25);
  REQUIRE(norm(Complex(2, -2)) == 8);
}

TEST_CASE("Testing plusequals", "[plusequals]") {
  cout << "Running tests on plusequals" << endl;
  REQUIRE((Complex(1, 2) += Complex(1, 2)) == Complex(2, 4));
  REQUIRE((Complex(1, -2) += Complex(1, 2)) == Complex(2, 0));
  REQUIRE((Complex(-1, 2) += 3) == Complex(2, 2));
  //REQUIRE(3 += Complex(1, -2)) == Complex(4,-2);
}

TEST_CASE("Testing Polar", "[polar]") {
  cout << "Running tests on polar" << endl;
  REQUIRE(polar(1,PI) == Complex(-1,0));
  REQUIRE(polar(4,PI/2) == Complex(0,4));
  REQUIRE(polar(sqrt(2),PI/4) == Complex(1,1));
}

TEST_CASE("Testing Sin", "[sin]") {
  cout << "Running tests on sin" << endl;
  REQUIRE(sin(Complex(3, 4)) == Complex(3.85373, -27.01861));
  REQUIRE(sin(Complex(0, 2)) ==
          Complex(0, (-1 + pow(EULER, 4)) / (2 * pow(EULER, 2))));
  REQUIRE(sin(Complex(2, 0)) == 0.90929);
}


TEST_CASE("Testing sinh", "[sinh]") {
  cout << "Running tests on sinh" << endl;
  REQUIRE(sinh(Complex(3, 4)) == Complex(-6.54812, -7.619232));
  REQUIRE(sinh(Complex(2, 0)) ==
          Complex((-1 + pow(EULER, 4)) / (2 * pow(EULER, 2)), 0));
  REQUIRE(sinh(Complex(0, 2)) == Complex(0, 0.90929));
}

TEST_CASE("Testing Sqrt", "[sqrt]") {
  cout << "Running tests on sqrt" << endl;
  REQUIRE(sqrt(polar(2,PI/4)) == polar(sqrt(2), PI/8));
  REQUIRE(sqrt(polar(1,PI)) == polar(1, PI/2));
  REQUIRE(sqrt(polar(4,PI/2)) == polar(2, PI/4));
}

TEST_CASE("Testing Subtraction") {
  cout << "Running tests on subtraction" << endl;
  REQUIRE(Complex(1, 2) - Complex(1, 2) == Complex(0, 0));
  REQUIRE(Complex(1, -2) - Complex(1, 2) == Complex(0, -4));
  REQUIRE(Complex(-1, 2) - 3 == Complex(-4, 2));
  REQUIRE(3 - Complex(0, -5) == Complex(3, 5));
  REQUIRE(Complex(3, 0) - Complex(-2, 0) == Complex(5, 0));
}


TEST_CASE("Testing Real") {

  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on real" << endl;
  REQUIRE(real(Complex(1, 2)) == 1);
}

TEST_CASE("Testing Tan", "[tan]") {
  cout << "Running tests on tan" << endl;
  REQUIRE(tan(Complex(3, 4)) == Complex(-0.00018, 0.99935));
  REQUIRE(tan(Complex(0, 2)) == Complex(0, 0.96402));
  REQUIRE(tan(Complex(2, 0)) == -2.18503);
}


TEST_CASE("Testing tanh", "[tanh]") {
  cout << "Running tests on tanh" << endl;
  REQUIRE(tanh(Complex(3, 4)) == Complex(1.0007, 0.0049));
  REQUIRE(tanh(Complex(0, 2)) == Complex(0,-2.1850));
  REQUIRE(tanh(Complex(2, 0)) == 0.9640);
}

TEST_CASE("Testing coth", "[coth]") {
  cout << "Running tests on coth" << endl;
  REQUIRE(coth(Complex(2, 0)) == 1.0373147207275);
  REQUIRE(coth(Complex(3, 4)) == Complex(0.999267, -0.004901));
  REQUIRE(coth(Complex(0, 2)) == Complex(0, 0.457658));
  
  REQUIRE(coth(Complex(-1, 2)) == Complex(-0.82133, 0.171384));
}

TEST_CASE("Testing acosh", "[acosh]") {
  cout << "Running tests on acosh" << endl;
  REQUIRE(acosh(Complex(0, 2)) == polar(1.443635, 1.570796));
  REQUIRE(acosh(Complex(1, -2)) == polar(1.528571 , -1.143718));
  REQUIRE(acosh(Complex(2, 0)) == polar(1.316958, 0));
  REQUIRE(acosh(Complex(3, -4)) == polar(2.305509, -0.936812));
}

TEST_CASE("Testing acot", "[acot]") {
  cout << "Running tests on acot" << endl;
  REQUIRE(acot(Complex(0, 2)) == Complex(0, -0.549306));
  REQUIRE(acot(Complex(1, -2)) == Complex(0.259573 , 0.238878));
  REQUIRE(acot(Complex(2, 0)) == Complex(0.463648, 0));
  REQUIRE(acot(Complex(3, -4)) == Complex(0.122489, 0.158997));
}

TEST_CASE("Testing acoth", "[acoth]") {
  cout << "Running tests on acoth" << endl;
  REQUIRE(acoth(Complex(0, 2)) == Complex(0, -0.463648));
  REQUIRE(acoth(Complex(2, 0)) == Complex(0.549306, 0));
  REQUIRE(acoth(Complex(3, -4)) == Complex(0.117501, 0.160875));
  REQUIRE(acoth(Complex(1, -2)) == Complex(0.173287 , 0.392699));
}

TEST_CASE("Testing acsc", "[acsc]") {
  cout << "Running tests on acsc" << endl;
  REQUIRE(acsc(Complex(0, 2)) == Complex(0, -0.481212));
  REQUIRE(acsc(Complex(2, 0)) == Complex(0.523599, 0));
  REQUIRE(acsc(Complex(3, -4)) == Complex(0.118751, 0.160446));
  REQUIRE(acsc(Complex(1, -2)) == Complex(0.186318 , 0.396568));
}

TEST_CASE("Testing acsch", "[acsch]") {
  cout << "Running tests on acsch" << endl;
  REQUIRE(acsch(Complex(0, 2)) == Complex(0, - 0.523599));
  REQUIRE(acsch(Complex(2, 0)) == Complex(1.443635, 0));
  REQUIRE(acsch(Complex(3, -4)) == Complex(0.121246, 0.159507));
  REQUIRE(acsch(Complex(1, -2)) == Complex(0.215612 , 0.401586));
}

TEST_CASE("Testing asec", "[asec]") {
  cout << "Running tests on asec" << endl;
  REQUIRE(asec(Complex(0, 2)) == Complex(0.481212, -1.570796));
  REQUIRE(asec(Complex(2, 0)) == Complex(0, 1.047198));
  REQUIRE(asec(Complex(3, -4)) == Complex(1.452046, -0.160446));
  REQUIRE(asec(Complex(1, -2)) == Complex(1.384478 , -0.396568));
}

TEST_CASE("Testing asech", "[asech]") {
  cout << "Running tests on asech" << endl;
  REQUIRE(asech(Complex(0, 2)) == Complex(0, - 0.523599));
  REQUIRE(asech(Complex(2, 0)) == Complex(1.443635, 0));
  REQUIRE(asech(Complex(3, -4)) == Complex(0.160446, 1.452046));
  REQUIRE(asech(Complex(1, -2)) == Complex(0.396568 , 1.384478));
}

#endif //#ifndef CATCH_AMALGAMATED_CUSTOM_MAIN