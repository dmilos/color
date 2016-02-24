#include <iostream>
#include <iomanip>

#include "color/color.hpp"

void operation_convex_3();
void operation_convex_2();

int main( int argc, char *argv[] )
 {
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;

  operation_convex_3( );

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

void operation_convex_2( )
 {
  ::color::rgb<double> a, b;

  ::color::make::orange( a );
  ::color::make::lime( b );

  ::color::operation::convex( a, 0.1, b );
  std::cout<< " convex::accumulate( a, 0.1, lime ) = ";
  print( a );
  std::cout << std::endl;

  ::color::operation::convex( a, 0.2, b );
  std::cout<< " convex::accumulate( a, 0.2, lime ) = ";
  print( a );
  std::cout << std::endl;

  ::color::operation::convex( a, 0.3, b );
  std::cout<< " convex::accumulate( a, 0.3, lime ) = ";
  print( a );
  std::cout << std::endl;
 }
  
void operation_convex_3( )
 {
  ::color::rgb<double> a, b;

  ::color::make::orange( a );
  ::color::make::lime( b );

  ::color::rgb<double> j;

  color::operation::convex( j , a, 0.2, b );
  std::cout<< " convex::full( j , orange, 0.5, lime ) = ";
  print( j );
  std::cout << std::endl;

  color::operation::convex( j , a, 0.5, b );
  std::cout<< " convex::full( j , orange, 0.5, lime ) = ";
  print( j );
  std::cout << std::endl;

  color::operation::convex( j , a, 0.75, b );
  std::cout<< " convex::full( j , orange, 0.5, lime ) = ";
  print( j );
  std::cout << std::endl;
 }