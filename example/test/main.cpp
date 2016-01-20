#include <vector>
#include <fstream>

#include "color/color.hpp"

#include "./model/invoke.hpp"
#include "./model/operation.hpp"
#include "./model/make.hpp"
#include "./model/intrisic_conversion.hpp"
#include "./model/set.hpp"
#include "./model/get.hpp"
#include "./model/conversion.hpp"

void invoke()
 {
  //::color::make::aqua< color::category::rgb_uint8 >();
  //::color::make::aqua< color::category::rgb_uint8 >();
  //::color::make::aqua< color::category::rgb_uint8 >();
  //::color::make::aqua< color::category::rgb_uint8 >();

  test_invoke< color::category::rgb_uint8   >();
  test_invoke< color::category::rgb_uint16  >();
  test_invoke< color::category::rgb_uint32  >();
  test_invoke< color::category::rgb_uint64  >();
  test_invoke< color::category::rgb_float   >();
  test_invoke< color::category::rgb_double  >();
  test_invoke< color::category::rgb_ldouble >();

  test_operation< color::category::rgb_uint8   >();
  test_operation< color::category::rgb_uint16  >();
  test_operation< color::category::rgb_uint32  >();
  test_operation< color::category::rgb_uint64  >();
  test_operation< color::category::rgb_float   >();
  test_operation< color::category::rgb_double  >();
  test_operation< color::category::rgb_ldouble >();

  test_operation< color::category::cmyk_uint8   >();
  test_operation< color::category::cmyk_uint16  >();
  test_operation< color::category::cmyk_uint32  >();
  test_operation< color::category::cmyk_uint64  >();
  test_operation< color::category::cmyk_float   >();
  test_operation< color::category::cmyk_double  >();
  test_operation< color::category::cmyk_ldouble >();

  test_operation< color::category::hsl_uint8   >();
  test_operation< color::category::hsl_uint16  >();
  test_operation< color::category::hsl_uint32  >();
  test_operation< color::category::hsl_uint64  >();
  test_operation< color::category::hsl_float   >();
  test_operation< color::category::hsl_double  >();
  test_operation< color::category::hsl_ldouble >();

  test_operation< color::category::hsv_uint8   >();
  test_operation< color::category::hsv_uint16  >();
  test_operation< color::category::hsv_uint32  >();
  test_operation< color::category::hsv_uint64  >();
  test_operation< color::category::hsv_float   >();
  test_operation< color::category::hsv_double  >();
  test_operation< color::category::hsv_ldouble >();


  /*test_make< color::category::rgb_uint8   >();
  test_make< color::category::rgb_uint16  >();
  test_make< color::category::rgb_uint32  >();
  test_make< color::category::rgb_uint64  >();
  test_make< color::category::rgb_float   >();
  test_make< color::category::rgb_double  >();
  test_make< color::category::rgb_ldouble >();*/

  test_conversion< color::rgb, color::rgb >();
  test_conversion< color::rgb, color::cmy >();
  test_conversion< color::rgb, color::gray >();
  test_conversion< color::rgb, color::yiq >();
  test_conversion< color::rgb, color::yuv >();
  test_conversion< color::rgb, color::xyz >();

  test_conversion< color::cmy, color::cmy >();
  test_conversion< color::cmy, color::rgb >();
  test_conversion< color::cmy, color::cmyk >();
  test_conversion< color::cmy, color::gray >();

  test_conversion< color::gray, color::gray >();
  test_conversion< color::gray, color::rgb >();
  test_conversion< color::gray, color::cmy >();
  test_conversion< color::gray, color::hsl >();
  test_conversion< color::gray, color::hsv >();
  test_conversion< color::gray, color::yiq >();
  test_conversion< color::gray, color::yuv >();

  test_conversion< color::yiq, color::yiq >();
  test_conversion< color::yiq, color::rgb >();

  test_conversion< color::yuv, color::yuv >();
  test_conversion< color::yuv, color::rgb >();

  test_conversion< color::xyz, color::xyz >();
  test_conversion< color::xyz, color::rgb >();

  test_get< ::color::category::rgb_uint8   >();
  test_get< ::color::category::rgb_uint16  >();
  test_get< ::color::category::rgb_uint32  >();
  test_get< ::color::category::rgb_uint64  >();
  test_get< ::color::category::rgb_float   >();
  test_get< ::color::category::rgb_double  >();
  test_get< ::color::category::rgb_ldouble >();

  test_get< ::color::category::gray_uint8   >();
  test_get< ::color::category::gray_uint16  >();
  test_get< ::color::category::gray_uint32  >();
  test_get< ::color::category::gray_uint64  >();
  test_get< ::color::category::gray_float   >();
  test_get< ::color::category::gray_double  >();
  test_get< ::color::category::gray_ldouble >();
 }

template < typename model_name >
void make_image(std::string const& name, float plane = 0.5, int side = 1 )
 {
  int height = 1000;
  int width  = 1000;
  typedef unsigned char targa_header_struct[18];

  typedef ::color::_internal::diverse< typename model_name::category_type > diverse_type;

  targa_header_struct header;

  void targa_make_header(int height, int width, targa_header_struct header);

  targa_make_header( height, width, header);

  std::vector< color::rgb<std::uint32_t> >   image(height * width);

  for (int y = 0; y < height; y++)
   {
    for (int x = 0; x < width; x++)
     {
      image[y * width + x].set<3>(255);
      switch( side )
       {
        case( 0 ):
         image[y * width + x] = model_name( { diverse_type::template process<0>( plane  ),
                                              diverse_type::template process<1>( y / double(height) ),
                                              diverse_type::template process<2>( x / double(width) )
                                              , 0.5 } );
         break;
        case( 1 ):
          image[y * width + x] = model_name( { diverse_type::template process<0>( y / double(height) ),
                                               diverse_type::template process<1>( plane ),
                                               diverse_type::template process<2>( x / double(width) )
                                               , 0.5 } );
          break;
        case( 2 ):
          image[y * width + x] = model_name( { diverse_type::template process<0>( y / double(height) ),
                                               diverse_type::template process<1>( x / double(width) ),
                                               diverse_type::template process<2>( plane )
                                               , 0.5 } );
          break;
       }
     }
   }

  std::ofstream of(name, std::ios_base::binary);
  of.write((const char *)header, 18);
  of.write((const char *)image.data(), image.size() * 4);
 }

int main(int argc, char const *argv[])
 {

  make_image<color::hsl<double> >( "./image-hsl.tga" , 0.5 );
  make_image<color::hsv<double> >( "./image-hsv.tga" , 0.5 );
  make_image<color::rgb<double> >( "./image-rgb-0.tga" , 0.5, 0 );
  make_image<color::rgb<double> >( "./image-rgb-1.tga" , 0.5, 1 );
  make_image<color::rgb<double> >( "./image-rgb-2.tga" , 0.5, 2 );
  make_image<color::cmy<double> >( "./image-cmy.tga" , 0.5 );
  make_image<color::cmyk<double> >("./image-cmyk.tga", 0.5 );
  make_image<color::xyz<double> >( "./image-xyz-0.tga" , 0.5, 0 );
  make_image<color::xyz<double> >( "./image-xyz-1.tga" , 0.5, 1 );
  make_image<color::xyz<double> >( "./image-xyz-2.tga" , 0.5, 2 );
  make_image<color::yiq<double> >( "./image-yiq.tga" , 0.5 );

  make_image<color::yuv<double> >("./image-yuv_0.0.tga", 0.0);
  make_image<color::yuv<double> >("./image-yuv_0.1.tga", 0.1);
  make_image<color::yuv<double> >("./image-yuv_0.2.tga", 0.2);
  make_image<color::yuv<double> >("./image-yuv_0.3.tga", 0.3);
  make_image<color::yuv<double> >("./image-yuv_0.4.tga", 0.4);
  make_image<color::yuv<double> >("./image-yuv_0.5.tga", 0.5);
  make_image<color::yuv<double> >("./image-yuv_0.6.tga", 0.6);
  make_image<color::yuv<double> >("./image-yuv_0.7.tga", 0.7);
  make_image<color::yuv<double> >("./image-yuv_0.8.tga", 0.8);
  make_image<color::yuv<double> >("./image-yuv_0.9.tga", 0.9);
  make_image<color::yuv<double> >("./image-yuv_1.0.tga", 1.0);

  invoke();

  extern void check_conversion();
  check_conversion();

  extern void make_test();
  make_test();

  extern void print_bound();
  print_bound();

  extern void check_sizeof();
  check_sizeof();

  void test_selfie();
  test_selfie();

  void test_set();
  test_set();

  return 0;
 }

