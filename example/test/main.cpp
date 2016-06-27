#include <vector>
#include <fstream>
#include <typeinfo>

#include "color/color.hpp"

#include "./model/invoke.hpp"
#include "./model/operation.hpp"
#include "./model/make.hpp"
#include "./model/intrisic_conversion.hpp"
#include "./model/set.hpp"
#include "./model/get.hpp"
#include "./model/conversion.hpp"

void ctor_test()
 {
  ::color::rgb<double> r{ ::color::constant::aqua() };
  ::color::rgb<double> x{ ::color::constant::turquoise() };
  ::color::rgb<double>{ ::color::constant::black() };
  ::color::rgb<double>( {1,2,3} );

  r[0] = 0.1;
  std::cout << r[0] << std::endl;
 }

void RGB()
 {
  ::color::gray<float>         g1;
  ::color::bgr<float>          r1;

   r1 = g1;

  ::color::bgr<float>          a;
  ::color::bgra<double>        b;
  ::color::abgr<std::uint8_t>  c;
  ::color::rgba<double>        d;
  ::color::argb<std::uint16_t> e;

  ::color::place::alpha< ::color::bgr<float>         ::category_type >();
  ::color::place::alpha< ::color::bgra<double>       ::category_type >();
  ::color::place::alpha< ::color::abgr<std::uint8_t> ::category_type >();
  ::color::place::alpha< ::color::rgba<double>       ::category_type >();
  ::color::place::alpha< ::color::argb<std::uint16_t>::category_type >();

  ::color::place::red< ::color::bgr<float>         ::category_type >();
  ::color::place::red< ::color::bgra<double>       ::category_type >();
  ::color::place::red< ::color::abgr<std::uint8_t> ::category_type >();
  ::color::place::red< ::color::rgba<double>       ::category_type >();
  ::color::place::red< ::color::argb<std::uint16_t>::category_type >();

  ::color::place::green< ::color::bgr<float>         ::category_type >();
  ::color::place::green< ::color::bgra<double>       ::category_type >();
  ::color::place::green< ::color::abgr<std::uint8_t> ::category_type >();
  ::color::place::green< ::color::rgba<double>       ::category_type >();
  ::color::place::green< ::color::argb<std::uint16_t>::category_type >();

  ::color::place::blue< ::color::bgr<float>         ::category_type >();
  ::color::place::blue< ::color::bgra<double>       ::category_type >();
  ::color::place::blue< ::color::abgr<std::uint8_t> ::category_type >();
  ::color::place::blue< ::color::rgba<double>       ::category_type >();
  ::color::place::blue< ::color::argb<std::uint16_t>::category_type >();
 }

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


 }


void make_blue()
 {
  int height = 256;
  int width  = 256;
  typedef unsigned char targa_header_struct[18];

  targa_header_struct header;

  void targa_make_header(int height, int width, targa_header_struct header);

  targa_make_header( height, width, header);

  std::vector< color::bgra<std::uint8_t> >   image(height * width);

  for( auto & c: image )
   {
    c = color::hsl<double>( { 0, 50, 50 } );
   }

   {
    std::ofstream of( "blue.tga", std::ios_base::binary);
    of.write((const char *)header, 18);
    of.write((const char *)image.data(), image.size() * 4);
   }

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

  std::vector< color::bgra<std::uint8_t> >   image(height * width);

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
                                              , 0 } );
         break;
        case( 1 ):
          image[y * width + x] = model_name( { diverse_type::template process<0>( y / double(height) ),
                                               diverse_type::template process<1>( plane ),
                                               diverse_type::template process<2>( x / double(width) )
                                               , 0 } );
          break;
        case( 2 ):
          image[y * width + x] = model_name( { diverse_type::template process<0>( y / double(height) ),
                                               diverse_type::template process<1>( x / double(width) ),
                                               diverse_type::template process<2>( plane )
                                               , 0 } );
          break;
       }
     }
   }

   {
    std::ofstream of(name, std::ios_base::binary);
    of.write((const char *)header, 18);
    of.write((const char *)image.data(), image.size() * 4);
   }
 }

int main(int argc, char const *argv[])
 {
  ctor_test();

  void check_get();
  check_get();

  extern void make_test_make();
  make_test_make();

  RGB();

  extern int mainX( int argc, char const *argv[] );
  mainX( argc, argv );

  extern void make_make_header();
  make_make_header();

  extern void print_bound();
  print_bound();

  extern void check_sizeof();
  check_sizeof();

  make_blue();

  make_image<color::hsl<double> >( "./image-hsl-1-00.tga" , 0.00, 1 );
  make_image<color::hsl<double> >( "./image-hsl-1-05.tga" , 0.50, 1 );
  make_image<color::hsl<double> >( "./image-hsl-1-10.tga" , 1.00, 1 );

  make_image<color::hsv<double> >( "./image-hsv-1-000.tga" , 0.00, 1 );
  make_image<color::hsv<double> >( "./image-hsv-1-050.tga" , 0.50, 1 );
  make_image<color::hsv<double> >( "./image-hsv-1-060.tga", 0.60, 1 );
  make_image<color::hsv<double> >( "./image-hsv-1-075.tga", 0.70, 1 );
  make_image<color::hsv<double> >( "./image-hsv-1-080.tga", 0.80, 1 );
  make_image<color::hsv<double> >( "./image-hsv-1-090.tga", 0.90, 1 );

  make_image<color::hsv<double> >( "./image-hsv-1-090.tga", 0.90, 1 );
  make_image<color::hsv<double> >( "./image-hsv-1-091.tga", 0.91, 1);
  make_image<color::hsv<double> >( "./image-hsv-1-092.tga", 0.92, 1);
  make_image<color::hsv<double> >( "./image-hsv-1-093.tga", 0.93, 1);
  make_image<color::hsv<double> >( "./image-hsv-1-094.tga", 0.94, 1);
  make_image<color::hsv<double> >( "./image-hsv-1-095.tga", 0.95, 1);
  make_image<color::hsv<double> >( "./image-hsv-1-096.tga", 0.96, 1);
  make_image<color::hsv<double> >( "./image-hsv-1-097.tga", 0.97, 1);
  make_image<color::hsv<double> >( "./image-hsv-1-098.tga", 0.98, 1);
  make_image<color::hsv<double> >( "./image-hsv-1-099.tga", 0.99, 1);
  make_image<color::hsv<double> >( "./image-hsv-1-100.tga", 1.0, 1 );

  make_image<color::rgb<double> >( "./image-rgb-0-00.tga" , 0.00,  0 );
  make_image<color::rgb<double> >( "./image-rgb-0-05.tga" , 0.25,  0 );
  make_image<color::rgb<double> >( "./image-rgb-0-05.tga" , 0.50,  0 );
  make_image<color::rgb<double> >( "./image-rgb-0-05.tga" , 0.75,  0 );
  make_image<color::rgb<double> >( "./image-rgb-0-10.tga" , 1.00,  0 );


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

  //void test_selfie();
  //test_selfie();

  void test_set_invoke();
  test_set_invoke();

  void test_get_invoke( double value );
  test_get_invoke(0.5);

  return 0;
 }

