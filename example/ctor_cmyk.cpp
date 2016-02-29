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
//color::cmy<bool>           c0( { true, false, false } ); //!< Not yet supported
  color::cmy<std::uint64_t>  c1( { 640, 1270 , 1920, 2500 } );
  color::cmy<std::uint32_t>  c2( { 64, 127 , 192, 200 } );
  color::cmy<std::uint16_t>  c3( { 6, 12 , 19, 20} );
  color::cmy<std::uint8_t>   c4( { 7, 6 , 3, 2} );
  color::cmy<float>          c5( { 0.5, 0.6,0.7, 0.5 } );
  color::cmy<double>         c6( { 0.5, 0.6,0.7, 0.5 } );
  color::cmy<long double>    c7( { 0.5, 0.6,0.7, 0.5 } );

  std::cout<< " color::cmy<std::uint8_t>  =  "; print( c4 ); std::cout << std::endl;
  std::cout<< " color::cmy<std::uint16_t> =  "; print( c3 ); std::cout << std::endl;
  std::cout<< " color::cmy<std::uint32_t> =  "; print( c2 ); std::cout << std::endl;
  std::cout<< " color::cmy<std::uint64_t> =  "; print( c1 ); std::cout << std::endl;
  std::cout<< " color::cmy<float>         =  "; print( c5 ); std::cout << std::endl;
  std::cout<< " color::cmy<double>        =  "; print( c6 ); std::cout << std::endl;
  std::cout<< " color::cmy<long double>   =  "; print( c7 ); std::cout << std::endl;

  return EXIT_SUCCESS;
 }

