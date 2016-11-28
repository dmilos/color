#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

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


int main( int argc, char *argv[] )
 {
  // Make instance of RGB in different formats
//color::rgb<bool>           c0( { true, false, false } ); //!< Not yet supported
  color::rgb<std::uint8_t>   c1;
  color::rgb<std::uint16_t>  c2;
  color::rgb<std::uint32_t>  c3;
  color::rgb<std::uint64_t>  c4;
  color::rgb<float>          c5;
  color::rgb<double>         c6;
  color::rgb<long double>    c7;

  // make it red
  color::constant::red_t( c1 ); std::cout << "color::rgb<std::uint8_t>  = "; print( c1 ); std::cout << std::endl;
  color::constant::red_t( c2 ); std::cout << "color::rgb<std::uint16_t> = "; print( c2 ); std::cout << std::endl;
  color::constant::red_t( c3 ); std::cout << "color::rgb<std::uint32_t> = "; print( c3 ); std::cout << std::endl;
  color::constant::red_t( c4 ); std::cout << "color::rgb<std::uint64_t> = "; print( c4 ); std::cout << std::endl;
  color::constant::red_t( c5 ); std::cout << "color::rgb<float>         = "; print( c5 ); std::cout << std::endl;
  color::constant::red_t( c6 ); std::cout << "color::rgb<double>        = "; print( c6 ); std::cout << std::endl;
  color::constant::red_t( c7 ); std::cout << "color::rgb<long double>   = "; print( c7 ); std::cout << std::endl;
 }
