#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

void ctor_list_cmy();
void ctor_list_cmyk();
void ctor_list_gray();
void ctor_list_hsl();
void ctor_list_hsv();
void ctor_list_rgb();
void ctor_list_yiq();
void ctor_list_yuv();

int main( int argc, char *argv[] )
 {

 std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;

  ctor_list_cmy();
  ctor_list_cmyk();
  ctor_list_gray();
  ctor_list_hsl();
  ctor_list_hsv();
  ctor_list_rgb();
  ctor_list_yiq();
  ctor_list_yuv();

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

void ctor_list_cmy()
 {
//color::cmy<bool>           c0( { true, false, false } ); //!< Not yet supported
  color::cmy<std::uint8_t>   c1( { 7, 6 , 3} );
  color::cmy<std::uint16_t>  c2( { 6, 12 , 19} );
  color::cmy<std::uint32_t>  c3( { 64, 127 , 192} );
  color::cmy<std::uint64_t>  c4( { 640, 1270 , 1920} );
  color::cmy<float>          c5( { 0.5, 0.6,0.7}  );
  color::cmy<double>         c6( { 0.5, 0.6,0.7}  );
  color::cmy<long double>    c7( { 0.5, 0.6,0.7}  );

  std::cout<< " color::cmy<std::uint8_t>  =  "; print( c1 ); std::cout << std::endl;
  std::cout<< " color::cmy<std::uint16_t> =  "; print( c2 ); std::cout << std::endl;
  std::cout<< " color::cmy<std::uint32_t> =  "; print( c3 ); std::cout << std::endl;
  std::cout<< " color::cmy<std::uint64_t> =  "; print( c4 ); std::cout << std::endl;
  std::cout<< " color::cmy<float>         =  "; print( c5 ); std::cout << std::endl;
  std::cout<< " color::cmy<double>        =  "; print( c6 ); std::cout << std::endl;
  std::cout<< " color::cmy<long double>   =  "; print( c7 ); std::cout << std::endl;
 }


void ctor_list_cmyk()
 {
//color::cmyk<bool>           c0( { true, false, false } ); //!< Not yet supported
  color::cmyk<std::uint8_t>   c1( { 7, 6 , 3, 2} );
  color::cmyk<std::uint16_t>  c2( { 6, 12 , 19, 20} );
  color::cmyk<std::uint32_t>  c3( { 64, 127 , 192, 200 } );
  color::cmyk<std::uint64_t>  c4( { 640, 1270 , 1920, 2500 } );
  color::cmyk<float>          c5( { 0.5, 0.6,0.7, 0.5 } );
  color::cmyk<double>         c6( { 0.5, 0.6,0.7, 0.5 } );
  color::cmyk<long double>    c7( { 0.5, 0.6,0.7, 0.5 } );

  std::cout<< " color::cmyk<std::uint8_t>  =  "; print( c1 ); std::cout << std::endl;
  std::cout<< " color::cmyk<std::uint16_t> =  "; print( c2 ); std::cout << std::endl;
  std::cout<< " color::cmyk<std::uint32_t> =  "; print( c3 ); std::cout << std::endl;
  std::cout<< " color::cmyk<std::uint64_t> =  "; print( c4 ); std::cout << std::endl;
  std::cout<< " color::cmyk<float>         =  "; print( c5 ); std::cout << std::endl;
  std::cout<< " color::cmyk<double>        =  "; print( c6 ); std::cout << std::endl;
  std::cout<< " color::cmyk<long double>   =  "; print( c7 ); std::cout << std::endl;
 }

void ctor_list_gray()
 {
  color::gray<bool>           c0( { true } );
  color::gray<std::uint8_t>   c1( { 120 } );
  color::gray<std::uint16_t>  c2( { 6 } );
  color::gray<std::uint32_t>  c3( { 64000} );
  color::gray<std::uint64_t>  c4( { 6400000u } );
  color::gray<float>          c5( { 0.5 }  );
  color::gray<double>         c6( { 0.5 }  );
  color::gray<long double>    c7( { 0.5 }  );

  std::cout<< " color::gray<bool>          =  "; print( c0 ); std::cout << std::endl;
  std::cout<< " color::gray<std::uint8_t>  =  "; print( c1 ); std::cout << std::endl;
  std::cout<< " color::gray<std::uint16_t> =  "; print( c2 ); std::cout << std::endl;
  std::cout<< " color::gray<std::uint32_t> =  "; print( c3 ); std::cout << std::endl;
  std::cout<< " color::gray<std::uint64_t> =  "; print( c4 ); std::cout << std::endl;
  std::cout<< " color::gray<float>         =  "; print( c5 ); std::cout << std::endl;
  std::cout<< " color::gray<double>        =  "; print( c6 ); std::cout << std::endl;
  std::cout<< " color::gray<long double>   =  "; print( c7 ); std::cout << std::endl;
 }


void ctor_list_hsl()
 {
  //color::hsl<bool>           c0( { true, false, false} ); //!< Not yet supported
  color::hsl<std::uint8_t>   c1( { 7, 6 , 3} );
  color::hsl<std::uint16_t>  c2( { 6, 12 , 19} );
  color::hsl<std::uint32_t>  c3( { 64, 127 , 192} );
  color::hsl<std::uint64_t>  c4( { 640, 1270 , 1920} );
  color::hsl<float>          c5( {  90, 25, 30 } );
  color::hsl<double>         c6( { 180, 50, 90 } );
  color::hsl<long double>    c7( { 270, 30, 60 } );

  std::cout<< " color::hsl<std::uint8_t>  =  "; print( c1 ); std::cout << std::endl;
  std::cout<< " color::hsl<std::uint16_t> =  "; print( c2 ); std::cout << std::endl;
  std::cout<< " color::hsl<std::uint32_t> =  "; print( c3 ); std::cout << std::endl;
  std::cout<< " color::hsl<std::uint64_t> =  "; print( c4 ); std::cout << std::endl;
  std::cout<< " color::hsl<float>         =  "; print( c5 ); std::cout << std::endl;
  std::cout<< " color::hsl<double>        =  "; print( c6 ); std::cout << std::endl;
  std::cout<< " color::hsl<long double>   =  "; print( c7 ); std::cout << std::endl;
 }


void ctor_list_hsv()
 {
//color::hsv<bool>           c0( { true, false, false} ); //!< Not yet supported
  color::hsv<std::uint8_t>   c1( { 7, 6 , 3} );
  color::hsv<std::uint16_t>  c2( { 6, 12 , 19} );
  color::hsv<std::uint32_t>  c3( { 64, 127 , 192} );
  color::hsv<std::uint64_t>  c4( { 640, 1270 , 1920} );
  color::hsv<float>          c5( {  90, 25, 30 } );
  color::hsv<double>         c6( { 180, 50, 90 } );
  color::hsv<long double>    c7( { 270, 30, 60 } );

  std::cout<< " color::hsv<std::uint8_t>  =  "; print( c1 ); std::cout << std::endl;
  std::cout<< " color::hsv<std::uint16_t> =  "; print( c2 ); std::cout << std::endl;
  std::cout<< " color::hsv<std::uint32_t> =  "; print( c3 ); std::cout << std::endl;
  std::cout<< " color::hsv<std::uint64_t> =  "; print( c4 ); std::cout << std::endl;
  std::cout<< " color::hsv<float>         =  "; print( c5 ); std::cout << std::endl;
  std::cout<< " color::hsv<double>        =  "; print( c6 ); std::cout << std::endl;
  std::cout<< " color::hsv<long double>   =  "; print( c7 ); std::cout << std::endl;
 }

void ctor_list_rgb()
 {
  // color::rgb<bool>           c0( { true, false, false} ); //!< Not yet supported
  color::rgb<std::uint8_t>   c1( { 7, 6 , 3} );
  color::rgb<std::uint16_t>  c2( { 6, 12 , 19} );
  color::rgb<std::uint32_t>  c3( { 64, 127 , 192} );
  color::rgb<std::uint64_t>  c4( { 640, 1270 , 1920} );
  color::rgb<float>          c5( { 0.5, 0.6, 0.7}  );
  color::rgb<double>         c6( { 0.5, 0.6, 0.7}  );
  color::rgb<long double>    c7( { 0.5, 0.6, 0.7}  );

  std::cout<< " color::rgb<std::uint8_t>  =  "; print( c1 ); std::cout << std::endl;
  std::cout<< " color::rgb<std::uint16_t> =  "; print( c2 ); std::cout << std::endl;
  std::cout<< " color::rgb<std::uint32_t> =  "; print( c3 ); std::cout << std::endl;
  std::cout<< " color::rgb<std::uint64_t> =  "; print( c4 ); std::cout << std::endl;
  std::cout<< " color::rgb<float>         =  "; print( c5 ); std::cout << std::endl;
  std::cout<< " color::rgb<double>        =  "; print( c6 ); std::cout << std::endl;
  std::cout<< " color::rgb<long double>   =  "; print( c7 ); std::cout << std::endl;
 }

void ctor_list_yiq()
 {
//color::yiq<bool>           c0( { true, false, false} ); //!< Not yet supported
  color::yiq<std::uint8_t>   c1( { 7, 6 , 3} );
  color::yiq<std::uint16_t>  c2( { 6, 12 , 19} );
  color::yiq<std::uint32_t>  c3( { 64, 127 , 192} );
  color::yiq<std::uint64_t>  c4( { 640, 1270 , 1920} );
  color::yiq<float>          c5( { 0.5, 0.6,0.7}  );
  color::yiq<double>         c6( { 0.5, 0.6,0.7}  );
  color::yiq<long double>    c7( { 0.5, 0.6,0.7}  );

  std::cout<< " color::yiq<std::uint8_t>  =  "; print( c1 ); std::cout << std::endl;
  std::cout<< " color::yiq<std::uint16_t> =  "; print( c2 ); std::cout << std::endl;
  std::cout<< " color::yiq<std::uint32_t> =  "; print( c3 ); std::cout << std::endl;
  std::cout<< " color::yiq<std::uint64_t> =  "; print( c4 ); std::cout << std::endl;
  std::cout<< " color::yiq<float>         =  "; print( c5 ); std::cout << std::endl;
  std::cout<< " color::yiq<double>        =  "; print( c6 ); std::cout << std::endl;
  std::cout<< " color::yiq<long double>   =  "; print( c7 ); std::cout << std::endl;
 }

void ctor_list_yuv()
 {
  //color::yuv<bool>           c0( { true, false, false} ); //!< Not yet supported
  color::yuv<std::uint8_t>   c1( { 7, 6 , 3} );
  color::yuv<std::uint16_t>  c2( { 6, 12 , 19} );
  color::yuv<std::uint32_t>  c3( { 64, 127 , 192} );
  color::yuv<std::uint64_t>  c4( { 640, 1270 , 1920} );
  color::yuv<float>          c5( { 0.5, 0.6,0.7}  );
  color::yuv<double>         c6( { 0.5, 0.6,0.7}  );
  color::yuv<long double>    c7( { 0.5, 0.6,0.7}  );

  std::cout<< " color::yuv<std::uint8_t>  =  "; print( c1 ); std::cout << std::endl;
  std::cout<< " color::yuv<std::uint16_t> =  "; print( c2 ); std::cout << std::endl;
  std::cout<< " color::yuv<std::uint32_t> =  "; print( c3 ); std::cout << std::endl;
  std::cout<< " color::yuv<std::uint64_t> =  "; print( c4 ); std::cout << std::endl;
  std::cout<< " color::yuv<float>         =  "; print( c5 ); std::cout << std::endl;
  std::cout<< " color::yuv<double>        =  "; print( c6 ); std::cout << std::endl;
  std::cout<< " color::yuv<long double>   =  "; print( c7 ); std::cout << std::endl;
 }

