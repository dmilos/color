#include <iostream>
#include <iomanip>

#include "color/color.hpp"

void arithmetic_addition_3();
void arithmetic_addition_2();

void arithmetic_subtraction_3();
void arithmetic_subtraction_2();

void arithmetic_divide_2();
void arithmetic_divide_1();

void arithmetic_scale_2();
void arithmetic_scale_1();

int main( int argc, char *argv[] )
 {
  std::cout<< "In this example all models use double for component" << std::endl;
  std::cout<< "You may chane it to some other type. e.g float, long double, std::uint16_t, ..." << std::endl;

  arithmetic_addition_3();
  arithmetic_addition_2();

  arithmetic_subtraction_3();
  arithmetic_subtraction_2();

  arithmetic_divide_2();
  arithmetic_divide_1();
  
  arithmetic_scale_2();
  arithmetic_scale_1();
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

void arithmetic_addition_3()
 {
  ::color::rgb<double> a, b;

  ::color::make::orange( a );
  ::color::make::lime( b );

  ::color::rgb<double> j;

  j = a + b;

  std::cout<< " orange + lime = ";
  print( j );
  std::cout << std::endl;
 }

void arithmetic_addition_2()
 {
  ::color::rgb<double> a, j;

  ::color::make::orange( a );
  ::color::make::lime( j );

  j += a;

  std::cout<< " ( orange += lime ) = ";
  print( j );
  std::cout << std::endl;
 }

void arithmetic_subtraction_3()
 {
  ::color::rgb<double> a, b;

  ::color::make::orange( a );
  ::color::make::lime( b );

  ::color::rgb<double> j;

  j = a - b;

  std::cout<< " orange - lime = ";
  print( j );
  std::cout << std::endl;
 }

void arithmetic_subtraction_2()
 {
  ::color::rgb<double> a, j;

  ::color::make::orange( a );
  ::color::make::lime( j );

  j -= a;

  std::cout<< " ( orange -= lime ) = ";
  print( j );
  std::cout << std::endl;
 }


void arithmetic_divide_2()
 {
  ::color::rgb<double> a, j;

  ::color::make::orange( a );

  j = a / 2;

  std::cout<< " ( orange / 2 ) = ";
  print( j );
  std::cout << std::endl;
 }


void arithmetic_divide_1()
 {
  ::color::rgb<double> a;

  ::color::make::orange( a );

  a /= 2;

  std::cout<< " ( orange /= 2 ) = ";
  print( a );
  std::cout << std::endl;
 }

void arithmetic_scale_2()
 {
  ::color::rgb<double> a, j;

  ::color::make::orange( a );

  j = a * 2;

  std::cout<< " ( orange * 2 ) = ";
  print( j );
  std::cout << std::endl;
 }


void arithmetic_scale_1()
 {
  ::color::rgb<double> a;

  ::color::make::orange( a );

  a *= 2;

  std::cout<< " ( orange *= 2 ) = ";
  print( a );
  std::cout << std::endl;
 }

 
 