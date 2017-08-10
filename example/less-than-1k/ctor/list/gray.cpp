#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

using namespace std;
using namespace color;

int main( int argc, char *argv[] )
 {
  gray<bool>           c0( { true } );
  gray<uint8_t>   c1( { 120 } );
  gray<uint16_t>  c2( { 6 } );
  gray<uint32_t>  c3( { 64000} );
  gray<uint64_t>  c4( { 6400000u } );
  gray<float>          c5( { 0.5 }  );
  gray<double>         c6( { 0.5 }  );
  gray<long double>    c7( { 0.5 }  );

  cout << c1[0] << endl;
  cout << c2[0] << endl;
  cout << c3[0] << endl;
  cout << c4[0] << endl;
  cout << c5[0] << endl;
  cout << c6[0] << endl;

  return EXIT_SUCCESS;
 }