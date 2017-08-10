#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

using namespace std;
using namespace color;

int main( int argc, char *argv[] )
 {

  YDbDr<uint8_t>     c1( { 64, 127 , 192 } );
  YDbDr<uint16_t>    c2( { 280, 350 , 1000 } );
  YDbDr<uint32_t>    c3( { 640, 127 , 192 } );
  YDbDr<uint64_t>    c4( { 64000, 1270 , 1920 } );
  YDbDr<float>            c5( { 0.5, 0.6, 0.7} );
  YDbDr<double>           c6( { 0.5, 0.6, 0.7} );
  YDbDr<long double>      c7( { 0.5, 0.6, 0.7} );

  cout << c1[0] << ", " << c1[1] << ", " << c1[2] << endl;
  cout << c2[0] << ", " << c2[1] << ", " << c2[2] << endl;
  cout << c3[0] << ", " << c3[1] << ", " << c3[2] << endl;
  cout << c4[0] << ", " << c4[1] << ", " << c4[2] << endl;
  cout << c5[0] << ", " << c5[1] << ", " << c5[2] << endl;
  cout << c6[0] << ", " << c6[1] << ", " << c6[2] << endl;
  cout << c7[0] << ", " << c7[1] << ", " << c7[2] << endl;

  return EXIT_SUCCESS;
 }
