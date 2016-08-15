#include <iostream>
#include <iomanip>

#include "color/color.hpp"

void mix_rgb_alpha();

int main( int argc, char *argv[] )
 {
  std::cout << "Hello World" << std::endl;

  mix_rgb_alpha();

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

void mix_rgb_alpha()
 {
  ::color::rgba<double> a, b;

  ::color::make::orange( a );
  ::color::make::lime( b );
  
  ::color::rgba<double> j;
  
  ::color::set::alpha( a, 0.5 );
  ::color::set::alpha( b, 0.25 );

  j = ::color::operation::mix( a, b );
  std::cout<< " j = mix( orange(0.5), lime(0.25) ) = ";
  print( j );
  std::cout << std::endl;
 }

