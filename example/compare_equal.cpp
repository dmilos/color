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
  std::cout << color::compare::equal( a, b ) << std::endl;

*/

void compare_equal_rgb();


int main( int argc, char *argv[] )
 {
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;

  compare_equal_rgb();

  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  return EXIT_SUCCESS;
 }
 
template< typename category_name >
 inline void print( color::model< category_name > const& c )
  {
   typedef color::model< category_name > model_type;
   std::cout << "{ ";

   for( typename model_type::index_type index=0; index < model_type::size(); ++index )
    {
     std::cout<< std::setw(12) << std::right << c[index] << ",";
    }
   std::cout << " }";
  }

void compare_equal_rgb()
 {
  color::rgb< double > a;
  color::rgb< double > b;

  color::make::red( a );
  color::make::orange( b );
  
  std::cout << " a = " ; print( a );  std::cout << std::endl;
  std::cout << " b = " ; print( b );  std::cout << std::endl;

  std::cout << "color::compare::equal( a, b )" << color::compare::equal( a, b ) << std::endl;
 }