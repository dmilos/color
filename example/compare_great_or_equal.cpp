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
  std::cout << color::great_or_equal( a, b ) << std::endl;

*/

int main( int argc, char *argv[] )
 {
  std::cout << "Hello World" << std::endl;
  
  color::rgb< double > a;
  color::rgb< double > b;
  
  color::make::red( a );
  color::make::orange( a );

  std::cout << color::great_or_equal( a, b ) << std::endl;

  return EXIT_SUCCESS;
 }

