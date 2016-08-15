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
  std::cout << color::compare::darker( a, b ) << std::endl;
*/

int main( int argc, char *argv[] )
 {
  color::rgb< double > a;
  color::rgb< double > b;

  color::make::red( a );
  color::make::orange( b );

  std::cout << " a = " ; print( a );  std::cout << std::endl;
  std::cout << " b = " ; print( b );  std::cout << std::endl;

  std::cout << "color::compare::darker( a, b )" << color::compare::darker( a, b ) << std::endl;
  return EXIT_SUCCESS;
 }
