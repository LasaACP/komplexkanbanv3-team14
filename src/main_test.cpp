/*

  Compile with: g++ main.cpp ../src/fac.cpp catch_amalgamated
  Run with ./a.out

*/


//#define CATCH_CONFIG_RUNNER
//#define CATCH_AMALGAMATED_CUSTOM_MAIN
#include <iostream>
#include "../tests/catch_amalgamated.hpp"
#include "../src/fac.h"
#include "../src/Complex.h"
#include "../src/addition.h"
#include "../src/equality.h"
#include "../src/multiplication.h"
#include "../src/division.h"
#include "../src/absolutevalue.h"
using namespace std;

#ifdef CATCH_AMALGAMATED_CUSTOM_MAIN

int main( int argc, char* argv[] ) {
  // global setup...

  int result = Catch::Session().run( argc, argv );

  // global clean-up...
    cout << "Hello Catch2 Build with custom main()\n";

  return result;
}

#else    //Not CATCH_AMALGAMATED_CUSTOM_MAIN

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

TEST_CASE("Testing Addition", "[+]")
{

  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on addition" << endl;
  REQUIRE(Complex(1,2) + Complex(1,2) == Complex(2, 4));
  REQUIRE(Complex(1, -2) + Complex(1,2) == Complex(2, 0));
  REQUIRE(Complex(-1, 2) + 3 == Complex(2, 2));
  REQUIRE(Complex(0, 5) + Complex(0, -5) == Complex(0,0));
  REQUIRE(Complex(3, 0) + Complex(-2, 0) == Complex(1, 0));
}

TEST_CASE("Testing Multiplication", "[*]")
{
  cout <<"Running tests on multiplication" << endl;
  REQUIRE(Complex(3,2) * Complex(3,-2) == Complex(13, 0));
  REQUIRE(Complex(3, 2) * Complex(3,2) == Complex(5, 12));
  REQUIRE(Complex(-1, 2) * Complex(1, 8) == Complex(-17, 6));
  REQUIRE(Complex(0, 5) * 3 == Complex(0,15));
  REQUIRE(Complex(3, 0) * 0 == Complex(0, 0));
}

TEST_CASE("Testing Division", "[/]")
{
  cout <<"Running tests on Division" << endl;
  REQUIRE(Complex(3,2) / Complex(3,-2) == Complex(0.38461538461, 0.92307692307));
  REQUIRE(Complex(3, 2) / Complex(3,2) == 1);
  REQUIRE(Complex(-1, 2) / Complex(1, 8) == Complex(0.23076923076, 0.15384615384));
  REQUIRE(Complex(0, 5) / 3 == Complex(0,1.66666666667));
  REQUIRE(Complex(3, 0) / 1 == Complex(3, 0));
}

TEST_CASE("Testing Absolute Value/Magnitude", "[||]")
{
  cout <<"Running tests on multiplication" << endl;
  REQUIRE(abs(Complex(3,4)) == 5);
  REQUIRE(abs(Complex(0, 2)) == 2);
  REQUIRE(abs(Complex(-1, 2)) == 2.2360679775);
  REQUIRE(abs(Complex(5, 0)) == 5);
  REQUIRE(abs(Complex(2,-2)) == 2.82842712475);
}

// */
#endif  //ifndef CATCH_AMALGAMATED_CUSTOM_MAIN