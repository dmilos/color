#include <iostream>
#include <iomanip>

#include "color/color.hpp"

// NOTE: You can compare ONLY colors of the same model and format.
/*
  color::yiq< double > a;
  color::yiq< float > b;

  color::constant::red_t( a );
  color::constant::orange_t{ a );

  // This will produce ERROR.
  std::cout << color::compare::great_or_equal( a, b ) << std::endl;
*/

int main( int argc, char *argv[] )
 {
  color::rgb< double > a, b;

  a = color::constant::red_t{};
  b = color::constant::orange_t{};

  std::cout << color::compare::great_or_equal( a, b ) << std::endl;

  return EXIT_SUCCESS;
 }

