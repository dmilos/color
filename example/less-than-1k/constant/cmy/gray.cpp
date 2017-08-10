#include <iostream>
#include <iomanip>

#include "color/color.hpp"

using namespace std;
using namespace color;

int main( int argc, char *argv[] )
 {
  // Initialize from constant.
  // One amount of black, two amount of white. Total weight i 1+2=3. 1/3 is black part. 2/3 is white part.
  // As result we have 66.666...% of gray.

  cmy<std::uint8_t>    c1( ::color::constant::gray_t<1,2>{} );
  cmy<std::uint16_t>   c2( ::color::constant::gray_t<1,2>{} );
  cmy<std::uint64_t>   c4( ::color::constant::gray_t<1,2>{} );
  cmy<double>          c6( ::color::constant::gray_t<1,2>{} );

  cout << c1[0] << ", " << c1[1] << ", " << c1[2] << endl;
  cout << c2[0] << ", " << c2[1] << ", " << c2[2] << endl;
  cout << c4[0] << ", " << c4[1] << ", " << c4[2] << endl;
  cout << c6[0] << ", " << c6[1] << ", " << c6[2] << endl;

  return EXIT_SUCCESS;
 }
