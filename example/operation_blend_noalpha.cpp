#include <iostream>
#include <iomanip>

#include "color/color.hpp"

void blend_rgb_noalpha2();
void blend_rgb_noalpha3();

int main( int argc, char *argv[] )
 {
  std::cout << "Hello World" << std::endl;

  blend_rgb_noalpha2();
  blend_rgb_noalpha3();

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

void blend_rgb_noalpha2()
 {
  ::color::rgb<double> a, b;

  ::color::make::orange( a );
  ::color::make::lime( b );

  ::color::operation::blend( a, 0.1, b );
  std::cout<< " blend( a, 0.1, lime ) = ";
  print( a );
  std::cout << std::endl;

  ::color::operation::blend( a, 0.2, b );
  std::cout<< " blend( a, 0.2, lime ) = ";
  print( a );
  std::cout << std::endl;

  ::color::operation::blend( a, 0.3, b );
  std::cout<< " blend( a, 0.3, lime ) = ";
  print( a );
  std::cout << std::endl;
 }

void blend_rgb_noalpha3( )
 {
  ::color::rgb<double> a, b;

  ::color::make::orange( a );
  ::color::make::lime( b );

  ::color::rgb<double> j;

  color::operation::blend( j , a, 0.2, b );
  std::cout<< " blend( j , orange, 0.2, lime ) = ";
  print( j );
  std::cout << std::endl;

  color::operation::convex( j , a, 0.5, b );
  std::cout<< " blend( j , orange, 0.5, lime ) = ";
  print( j );
  std::cout << std::endl;

  color::operation::convex( j , a, 0.75, b );
  std::cout<< " blend( j , orange, 0.75, lime ) = ";
  print( j );
  std::cout << std::endl;
 }
