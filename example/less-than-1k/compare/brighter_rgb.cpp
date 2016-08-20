#include <iostream>
#include <iomanip>

#include "color/color.hpp"

// NOTE: You can compare ONLY colors of the same model and format.
/*
  color::yiq< double > a;
  color::yiq< float > b;

  color::make::red( a );
  color::make::orange( a );

  // This will produce ERROR.
  std::cout << color::compare::brighter( a, b ) << std::endl;
*/

int main( int argc, char *argv[] )
 {
  color::rgb< double > a;
  color::rgb< double > b;

  color::make::red( a );
  color::make::orange( b );

  std::cout << a[0] << ", " << a[1] << ", " << a[2] << std::endl;
  std::cout << b[0] << ", " << b[1] << ", " << b[2] << std::endl;

  std::cout << "color::compare::brighter( a, b )" << color::compare::brighter( a, b ) << std::endl;

  return EXIT_SUCCESS;
 }
