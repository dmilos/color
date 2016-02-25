#include <iostream>
#include <iomanip>

#include "color/color.hpp"

void mix_rgb_noalpha();

int main( int argc, char *argv[] )
 {
  std::cout << "Hello World" << std::endl;

  mix_rgb_noalpha();

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


void mix_rgb_noalpha( )
 {
  ::color::rgb<double> a, b;

  ::color::make::orange( a );
  ::color::make::lime( b );

  ::color::rgb<double> j;

  j = color::operation::mix( a, 0.2, b );
  std::cout<< " mix( j , orange, 0.2, lime ) = ";
  print( j );
  std::cout << std::endl;

  j = color::operation::mix( a, 0.5, b );
  std::cout<< " mix( j , orange, 0.5, lime ) = ";
  print( j );
  std::cout << std::endl;

  j = color::operation::mix( a, 0.75, b );
  std::cout<< " mix( j , orange, 0.75, lime ) = ";
  print( j );
  std::cout << std::endl;
 }
