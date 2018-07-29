#include <iostream>
#include <iomanip>

#include "color/color.hpp"

using namespace std;

int main( int argc, char *argv[] )
 {
  ::color::rgb<float>   c_x11( ::color::constant::x11::purple_t{} );
  ::color::rgb<float>   c_def( ::color::constant::purple_t{} );
  ::color::rgb<float>   c_w3c( ::color::constant::w3c::purple_t{} );

  cout << c_x11[0] << ", " << c_x11[1] << ", " << c_x11[2] << endl;
  cout << c_def[0] << ", " << c_def[1] << ", " << c_def[2] << endl;
  cout << c_w3c[0] << ", " << c_w3c[1] << ", " << c_w3c[2] << endl;

  return EXIT_SUCCESS;
 }
