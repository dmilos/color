#include <iostream>
#include <iomanip>


#include "color/color.hpp"

using namespace std;
using namespace color;

int main( int argc, char *argv[] )
 {
  // Here is how to initialize color from constant red
  ::color::rgb<::color::type::split422_t>   c1( ::color::constant::red_t{} );
  ::color::rgb<::color::type::split655_t >  c2( ::color::constant::red_t{} );
  ::color::rgb<uint8_t>                     c3( ::color::constant::red_t{} );
  ::color::rgb<uint64_t>                    c4( ::color::constant::red_t{} );
  ::color::rgb<float>                       c5( ::color::constant::red_t{} );

  cout << c1[0] << ", " << c1[1] << ", " << c1[2] << endl;
  cout << c2[0] << ", " << c2[1] << ", " << c2[2] << endl;
  cout << c3[0] << ", " << c3[1] << ", " << c3[2] << endl;
  cout << c4[0] << ", " << c4[1] << ", " << c4[2] << endl;
  cout << c5[0] << ", " << c5[1] << ", " << c5[2] << endl;

  return EXIT_SUCCESS;
 }
