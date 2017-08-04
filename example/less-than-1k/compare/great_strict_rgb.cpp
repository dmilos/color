#include <iostream>
#include <iomanip>

#include "color/color.hpp"

// NOTE: You can compare ONLY colors of the same model and format.
/*
  color::yiq< double > a;
  color::yiq< float > b;

  a = color::constant::red_t{};
  b = color::constant::orange_t{);

  // This will produce ERROR.
  std::cout << color::compare::great_strict( a, b ) << std::endl;
*/

int main( int argc, char *argv[] )
 {
  color::rgb< double > a, b;

  a = color::constant::red_t{};
  b = color::constant::orange_t{};

  std::cout << a[0] << ", " << a[1] << ", " << a[2] << std::endl;
  std::cout << b[0] << ", " << b[1] << ", " << b[2] << std::endl;

  std::cout << "color::compare::great_strict( a, b ) == " << color::compare::great_strict( a, b ) << std::endl;

  return EXIT_SUCCESS;
 }

