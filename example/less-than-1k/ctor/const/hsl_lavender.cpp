#include <iostream>
#include <iomanip>

#include "color/color.hpp"

using namespace std;
using namespace color;

int main( int argc, char *argv[] )
 {
  hsl<uint8_t>    c1( constant::lavender_t{} );
  hsl<uint16_t>   c2( constant::lavender_t{} );
  hsl<uint32_t>   c3( constant::lavender_t{} );
  hsl<uint64_t>   c4( constant::lavender_t{} );
  hsl<float>           c5( constant::lavender_t{} );
  hsl<double>          c6( constant::lavender_t{} );
  hsl<long double>     c7( constant::lavender_t{} );

  cout << c1[0] << ", " << c1[1] << ", " << c1[2] << endl;
  cout << c2[0] << ", " << c2[1] << ", " << c2[2] << endl;
  cout << c3[0] << ", " << c3[1] << ", " << c3[2] << endl;
  cout << c4[0] << ", " << c4[1] << ", " << c4[2] << endl;
  cout << c5[0] << ", " << c5[1] << ", " << c5[2] << endl;
  cout << c6[0] << ", " << c6[1] << ", " << c6[2] << endl;
  cout << c7[0] << ", " << c7[1] << ", " << c7[2] << endl;

  return EXIT_SUCCESS;
 }
