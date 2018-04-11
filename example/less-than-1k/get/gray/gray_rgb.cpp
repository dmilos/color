#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  using namespace color;
  using namespace std;

  // Instead of float you may put uint8_t, uint16_t, ..., (long) double
  rgb<float> c;

  // initialize c before get.
  c = constant::turquoise_t{};

  // Here is how to get gray component using default algorithm. Default is yuv709_entity.
  auto g0 = get::gray( c );

  // Here is how to get gray component by calculating average component
  auto g1 = get::gray< get::constant::gray::average_entity >( c );

  // Here is how to get gray component by calculating ( max + min ) / 2
  auto g2 = get::gray< get::constant::gray::middle_entity >( c );

  // Here is how to get gray component by calculating y from YUV
  auto g3 = get::gray< get::constant::gray::yuv709_entity >( c );

  // Now do whatever you wan to do
  cout << g0 << ", " << g1 << ", " << g2 << ", " << g3 << endl;

  return EXIT_SUCCESS;
 }
