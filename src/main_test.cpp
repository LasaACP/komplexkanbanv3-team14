/*

  Compile with: g++ main.cpp ../src/fac.cpp catch_amalgamated
  Run with ./a.out

*/

//#define CATCH_CONFIG_RUNNER
//#define CATCH_AMALGAMATED_CUSTOM_MAIN
#include "../lib/Complex.h"
#include "../lib/absolutevalue.h"
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
#include "../lib/tan.h"
#include "../tests/catch_amalgamated.hpp"
#include <iostream>
#include "../lib/addition.h"

#include "../lib/equality.h"
#include "../lib/minusequals.h"
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
TEST_CASE("Testing Real") {

  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on real" << endl;
  REQUIRE(real(Complex(1, 2)) == 1);
}
TEST_CASE("Testing Imag") {

  cout << "Running tests on imag" << endl;
  REQUIRE(imag(Complex(1, 2)) == 2);
}

TEST_CASE("Testing Addition") {


  cout << "Running tests on addition" << endl;
  REQUIRE(Complex(1, 2) + Complex(1, 2) == Complex(2, 4));
  REQUIRE(Complex(1, -2) + Complex(1, 2) == Complex(2, 0));
  REQUIRE(Complex(-1, 2) + 3 == Complex(2, 2));
  REQUIRE(3 + Complex(0, -5) == Complex(3, -5));
  REQUIRE(Complex(3, 0) + Complex(-2, 0) == Complex(1, 0));
}

TEST_CASE("Testing Subtraction") {
  cout << "Running tests on subtraction" << endl;
  REQUIRE(Complex(1, 2) - Complex(1, 2) == Complex(0, 0));
  REQUIRE(Complex(1, -2) - Complex(1, 2) == Complex(0, -4));
  REQUIRE(Complex(-1, 2) - 3 == Complex(-4, 2));
  REQUIRE(3 - Complex(0, -5) == Complex(3, 5));
  REQUIRE(Complex(3, 0) - Complex(-2, 0) == Complex(5, 0));
}

TEST_CASE("Testing Multiplication") {
  cout << "Running tests on multiplication" << endl;
  REQUIRE(Complex(3, 2) * Complex(3, -2) == Complex(13, 0));
  REQUIRE(Complex(3, 2) * Complex(3, 2) == Complex(5, 12));
  REQUIRE(Complex(-1, 2) * Complex(1, 8) == Complex(-17, -6));
  REQUIRE(Complex(0, 5) * 3 == Complex(0, 15));
  REQUIRE(Complex(3, 0) * 0 == Complex(0, 0));
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

TEST_CASE("Testing Absolute Value/Magnitude") {
  cout << "Running tests on absolute value" << endl;
  REQUIRE(abs(Complex(3, 4)) == 5);
  REQUIRE(abs(Complex(0, 2)) == 2);
  REQUIRE(abs(Complex(-1, 2)) == sqrt(5));
  REQUIRE(abs(Complex(5, 0)) == 5);
  REQUIRE(abs(Complex(2, -2)) == sqrt(8));
}

TEST_CASE("Testing complex conjugate") {
  cout << "Running tests on complex conjugate" << endl;
  REQUIRE(conj(Complex(3, 4)) == Complex(3, -4));
  REQUIRE(conj(Complex(0, 2)) == Complex(0, -2));
  REQUIRE(conj(Complex(-1, 2)) == Complex(-1, -2));
  REQUIRE(conj(Complex(5, 0)) == 5);
  REQUIRE(conj(Complex(0, 0)) == 0);
}

TEST_CASE("Testing argument") {
  cout << "Running tests on argument" << endl;

  REQUIRE(arg(Complex(3, 4)) == atan(4.0 / 3.0));
  REQUIRE(arg(Complex(0, 2)) == M_PI / 2.0);
  REQUIRE(arg(Complex(4, 5)) == atan(5.0 / 4.0));
  REQUIRE(arg(Complex(2, 0)) == 0);
}

TEST_CASE("Testing norm") {
  cout << "Running tests on norm" << endl;
  REQUIRE(norm(Complex(3, 4)) == 25);
  REQUIRE(norm(Complex(0, 2)) == 4);
  REQUIRE(norm(Complex(-1, 2)) == 5);
  REQUIRE(norm(Complex(5, 0)) == 25);
  REQUIRE(norm(Complex(2, -2)) == 8);
}

TEST_CASE("Testing Polar", "[polar]") {
  cout << "Running tests on polar" << endl;
  REQUIRE(polar(1,PI) == Complex(-1,0));
  REQUIRE(polar(4,PI/2) == Complex(0,4));
  REQUIRE(polar(sqrt(2),PI/4) == Complex(1,1));
}

TEST_CASE("Testing Tan", "[tan]") {
  cout << "Running tests on tan" << endl;
  REQUIRE(tan(Complex(3, 4)) == Complex(-0.00018, 0.99935));
  REQUIRE(tan(Complex(0, 2)) == Complex(0, 0.96402));
  REQUIRE(tan(Complex(2, 0)) == -2.18503);
}

TEST_CASE("Testing Cos", "[cos]") {
  cout << "Running tests on cos" << endl;
  REQUIRE(cos(Complex(3, 4)) == Complex(-27.03, 3.85));
  REQUIRE(cos(Complex(0, 2)) == 3.76219);
  REQUIRE(cos(Complex(2, 0)) == -0.41614);
}

TEST_CASE("Testing Sin", "[sin]") {
  cout << "Running tests on sin" << endl;
  REQUIRE(sin(Complex(3, 4)) == Complex(3.85373, -27.01861));
  REQUIRE(sin(Complex(0, 2)) ==
          Complex(0, (-1 + pow(EULER, 4)) / (2 * pow(EULER, 2))));
  REQUIRE(sin(Complex(2, 0)) == 0.90929);
}

TEST_CASE("Testing Exp", "[exp]") {
  cout << "Running tests on exp" << endl;
  REQUIRE(exp(Complex(3, 4)) == Complex(-13.12, -15.20));
  REQUIRE(exp(Complex(0,2)) == Complex(cos(2),sin(2)));
} 

TEST_CASE("Testing minusequals", "[minusequals]") {
  cout << "Running tests on minus" << endl;
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


TEST_CASE("Testing plusequals", "[plusequals]") {
  cout << "Running tests on plusequals" << endl;
  REQUIRE((Complex(1, 2) += Complex(1, 2)) == Complex(2, 4));
  REQUIRE((Complex(1, -2) += Complex(1, 2)) == Complex(2, 0));
  REQUIRE((Complex(-1, 2) += 3) == Complex(2, 2));
  REQUIRE((3 += Complex(1, -2)) == Complex(4,-2));
}

TEST_CASE("Testing Sqrt", "[sqrt]") {
  cout << "Running tests on sqrt" << endl;
  REQUIRE(sqrt(polar(2,PI/4)) == polar(sqrt(2), PI/8));
  REQUIRE(sqrt(polar(1,PI)) == polar(1, PI/2));
  REQUIRE(sqrt(polar(4,PI/2)) == polar(2, PI/4));
}

TEST_CASE("Testing Log", "[log]"){
  cout << "Running tests on log" << endl;
  REQUIRE(log(polar(2,PI)) == polar(log(2), PI));
  REQUIRE(log(polar(1,PI)) == polar(log(1), PI));
  REQUIRE(log(polar(sqrt(2),PI/4)) == polar(log(sqrt(2)), PI/4));
}

// */

#endif //#ifndef CATCH_AMALGAMATED_CUSTOM_MAIN
