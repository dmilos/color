#include <iostream>
#include <iomanip>
#include <map>

#include "color/color.hpp"

// NOTE: You can compare ONLY colors of the same model and format.
/*
  color::yiq< double > a= color::constant::red_t{};
  color::yiq< float > b = color::constant::orange_t{);

  // This will produce ERROR.
  std::cout << color::compare::different( a, b ) << std::endl;
*/

int main( int argc, char *argv[] )
 {
  using namespace color;
  using namespace color::constant;
  rgb< double > a, b;
  std::map< rgb< double >, rgb< double > > m;

  a = red_t{};
  b = orange_t{};

  std::cout << a[0] << ", " << a[1] << ", " << a[2] << std::endl;
  std::cout << b[0] << ", " << b[1] << ", " << b[2] << std::endl;

  std::cout << "compare::different( a, b ) == " << compare::different( a, b ) << std::endl;
  std::cout << "a != b == " << ( a != b ) << std::endl;
  std::cout << "a != red == "  << ( a != color::constant::red_t{} ) << std::endl;
  std::cout << "orange != b == " << ( orange_t{} != b ) << std::endl;

  return EXIT_SUCCESS;
 }
