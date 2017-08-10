#include <iostream>
#include <iomanip>


#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  // Here is how to initialize color from constant lavander
  ::color::rgb<::color::type::split422_t>   c1( ::color::constant::lavender_type{} );
  ::color::rgb<::color::type::split655_t >  c2( ::color::constant::lavender_type{} );
  ::color::rgb<std::uint8_t>                c3( ::color::constant::lavender_type{} );
  ::color::rgb<std::uint64_t>               c4( ::color::constant::lavender_type{} );
  ::color::rgb<float>                       c5( ::color::constant::lavender_type{} );

  std::cout << c1[0] << ", " << c1[1] << ", " << c1[2] << std::endl;
  std::cout << c2[0] << ", " << c2[1] << ", " << c2[2] << std::endl;
  std::cout << c3[0] << ", " << c3[1] << ", " << c3[2] << std::endl;
  std::cout << c4[0] << ", " << c4[1] << ", " << c4[2] << std::endl;
  std::cout << c5[0] << ", " << c5[1] << ", " << c5[2] << std::endl;

  return EXIT_SUCCESS;
 }
