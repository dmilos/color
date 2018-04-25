#include <iomanip>
#include <iostream>
#include <typeinfo>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>

#include "color/color.hpp"
#include "./targa.hpp"

template< typename category_name >
 void test_get_red( )
  {
   typedef color::model< typename color::akin::rgb< category_name >::akin_type > rgb_type;
   typedef color::model< category_name > model_type;

   model_type m;
   double e = 0;

   for( auto c  = rgb_type::bound_type::minimum(0);
             c  < rgb_type::bound_type::maximum(0);
             c += rgb_type::bound_type::range(0) / 200
      )
    {
     m = color::constant::orange_t{};
              color::set::red( m, c );
     auto g = color::get::red( m );

     if( e < fabs( c - g) )
      {
       e = fabs( c - g );
      }
    }

   if( 1e-10 < e  )
    {
     std::cout << std::endl;
     std::cout << "{{{{ FAIL {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{"<< std::endl;
     std::cout << "  function - " << __FUNCTION__ << std::endl;
     std::cout << "    type - " << typeid( model_type  ).name() << std::endl;
     std::cout << "    type - " << typeid( rgb_type  ).name() << std::endl;
     std::cout << "    e: " << e << std::endl;
     std::cout << std::endl;
     std::cout << "}}}}  }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}}" << std::endl;
    }
 }

template< typename category_name >
 void test_get_green( )
  {
   typedef color::model< typename color::akin::rgb< category_name >::akin_type > rgb_type;
   typedef color::model< category_name > model_type;

   model_type m;
   double e = 0;

   for( auto c  = rgb_type::bound_type::minimum(0);
             c  < rgb_type::bound_type::maximum(0);
             c += rgb_type::bound_type::range(0) / 200
      )
    {
     m = color::constant::orange_t{};
              color::set::green( m, c );
     auto g = color::get::green( m );

     if( e < fabs( c - g) )
      {
       e = fabs( c - g );
      }
    }

   if( 1e-10 < e  )
    {
     std::cout << std::endl;
     std::cout << "{{{{ FAIL {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{"<< std::endl;
     std::cout << "  function - " << __FUNCTION__ << std::endl;
     std::cout << "    type - " << typeid( model_type  ).name() << std::endl;
     std::cout << "    type - " << typeid( rgb_type  ).name() << std::endl;
     std::cout << "    e: " << e << std::endl;
     std::cout << std::endl;
     std::cout << "}}}}  }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}}" << std::endl;
    }
 }

template< typename category_name >
 void test_get_blue( )
  {
   typedef color::model< typename color::akin::rgb< category_name >::akin_type > rgb_type;
   typedef color::model< category_name > model_type;

   model_type m;
   double e = 0;

   for( auto c  = rgb_type::bound_type::minimum(0);
             c  < rgb_type::bound_type::maximum(0);
             c += rgb_type::bound_type::range(0) / 200
      )
    {
     m = color::constant::orange_t{};
              color::set::blue( m, c );
     auto g = color::get::blue( m );

     if( e < fabs( c - g) )
      {
       e = fabs( c - g );
      }
    }

   if( 1e-10 < e  )
    {
     std::cout << std::endl;
     std::cout << "{{{{ FAIL {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{"<< std::endl;
     std::cout << "  function - " << __FUNCTION__ << std::endl;
     std::cout << "    type - " << typeid( model_type  ).name() << std::endl;
     std::cout << "    type - " << typeid( rgb_type  ).name() << std::endl;
     std::cout << "    e: " << e << std::endl;
     std::cout << std::endl;
     std::cout << "}}}}  }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}}" << std::endl;
    }
 }

void save_targa24( std::string const& name, unsigned width, unsigned height, std::vector< ::color::bgr< std::uint8_t  > > const& image )
 {
  typedef std::vector< ::color::bgr< std::uint8_t  > > image_type;

  targa_header_struct header;

  targa_make_header24( width, height, header);

  std::ofstream of(  name.c_str(), std::ios_base::binary );
  of.write( (const char *)header, 18);
  of.write((const char *)image.data(), image.size() * image_type::value_type::size() );
 }

void save_targa_gray( std::string const& name,  unsigned width, unsigned height, std::vector< ::color::gray< std::uint8_t  > > const& image )
 {
  targa_header_struct header;

  targa_make_gray_header( width, height, header );

  std::ofstream of( name, std::ios_base::binary);
  of.write((const char *)header, 18);
  of.write((const char *)image.data(), image.size() * 1 );
 }

template< typename category_name >
 void test_get_hue( unsigned width, unsigned height, double const& blue = 0.5 )
 {
  typedef color::model< typename color::akin::rgb< category_name >::akin_type > rgb_type;
  typedef color::model< typename color::akin::hsi< category_name >::akin_type > hsi_type;
  typedef color::model< typename color::akin::hsv< category_name >::akin_type > hsv_type;
  typedef color::model< category_name > model_type;
  typedef std::vector< ::color::gray< std::uint8_t  > > image_type;
  typedef std::vector< ::color::gray< double       > > image_double_type;
  typedef std::vector< ::color::bgr< std::uint8_t  > > image_bgr_type;

  rgb_type r;
  hsi_type hi;
  hsv_type hv;

  image_double_type image_double(height * width);
  image_type  image_uint8(height * width);

  image_bgr_type image_bgr_referent(height * width);
  image_type image_hsi( height * width );
  image_type image_hsv( height * width );
  image_type image_rgb_default( height * width );
  image_type image_rgb_polar_default( height * width );
  image_type image_rgb_polar_atan2( height * width );
  image_type image_rgb_polar_acos( height * width );
  image_type image_rgb_hexagon( height * width );

  double max = 0;
  unsigned index=0;
  for( unsigned red = 0; red  < height; ++red )
   {
    for( unsigned green = 0; green  < width; ++green )
     {
      r[0] = float( red/(double)height );
      r[1] = float( green/(double)width );
      r[2] = float( blue );

      hi = r;
      hv = r;

      image_double[index][0] = fabs(hi[0] - hv[0]) / 360.0;
      if (max < image_double[index][0] )
       {
        max = image_double[index][0];
       }

      image_bgr_referent[index] = r;
      image_hsi[ index ][0]               = (std::uint8_t)( 255 * ::color::get::hue( hi )/360.0 );
      image_hsv[ index ][0]               = (std::uint8_t)( 255 * ::color::get::hue( hv )/360.0 );
      image_rgb_default[ index ][0]       = (std::uint8_t)( 255 * ::color::get::hue(  r ) );
      image_rgb_polar_default[ index ][0] = (std::uint8_t)( 255 * ::color::get::hue<::color::get::constant::rgb::hue::polar_entity       >(r) );
      image_rgb_polar_atan2[ index ][0]   = (std::uint8_t)( 255 * ::color::get::hue<::color::get::constant::rgb::hue::polar_atan2_entity >(r) );
      image_rgb_polar_acos[ index ][0]    = (std::uint8_t)( 255 * ::color::get::hue<::color::get::constant::rgb::hue::polar_acos_entity  >(r) );
      image_rgb_hexagon[ index ][0]       = (std::uint8_t)( 255 * ::color::get::hue<::color::get::constant::rgb::hue::hexagon_entity     >(r) );
      ++index;
     }
   }

   save_targa24(    "./hue/referent.tga", width, height, image_bgr_referent );
   save_targa_gray( "./hue/hsi.tga",               width, height, image_hsi                );
   save_targa_gray( "./hue/hsv.tga",               width, height, image_hsv                );
   save_targa_gray( "./hue/rgb-default.tga",       width, height, image_rgb_default        );
   save_targa_gray( "./hue/rgb-polar-default.tga", width, height, image_rgb_polar_default  );
   save_targa_gray( "./hue/rgb-polar-atan2.tga",   width, height, image_rgb_polar_atan2    );
   save_targa_gray( "./hue/rgb-polar-acos.tga",    width, height, image_rgb_polar_acos     );
   save_targa_gray( "./hue/rgb-hexagon.tga",       width, height, image_rgb_hexagon  );

  // 0.0031027397726933574[normalized], 1.116986318169608664[degree]
   std::cout << "max = " << std::setprecision(20) << max << std::endl;
  std::for_each(image_double.begin(), image_double.end(), [max](::color::gray< double > & g )->void { g[0] /= max; } );
  std::copy( image_double.begin(), image_double.end(), image_uint8.begin() );
  save_targa_gray("./hue/difference.tga", width, height, image_uint8 );
 }

template< typename type_type >
 using yuv601 = color::yuv <type_type, ::color::constant::yuv::BT_601_entity >;

template< typename  type_type  >
 using yuv709 = color::yuv< type_type, ::color::constant::yuv::BT_709_entity >;

template< typename  type_type  >
 using YPbPr601  = color::YPbPr< type_type, ::color::constant::YPbPr::BT_601_entity>;

template< typename  type_type  >
 using YPbPr709  = color::YPbPr< type_type, ::color::constant::YPbPr::BT_709_entity>;

template< typename  type_type  >
 using YPbPr2020 = color::YPbPr< type_type, ::color::constant::YPbPr::BT_2020_entity>;

void check_get()
 {
  test_get_red< ::color::category::gray_double>();
  test_get_red< ::color::category::cmy_double>();
  test_get_red< ::color::category::cmyk_double>();
  test_get_red< ::color::category::hsv_double>();
  test_get_red< ::color::category::hsi_double>();
  test_get_red< ::color::category::rgb_double>();
  test_get_red< ::color::category::yiq_double>();
  test_get_red< ::color::category::yuv_double<::color::constant::yuv::BT_601_entity > >();
  test_get_red< ::color::category::yuv_double<::color::constant::yuv::BT_709_entity > >();
  test_get_red< ::color::category::YCgCo_double >();
  test_get_red< ::color::category::YDbDr_double >();
  test_get_red< ::color::category::YPbPr_double<::color::constant::YPbPr::BT_601_entity > >();
  test_get_red< ::color::category::YPbPr_double<::color::constant::YPbPr::BT_709_entity > >();
  test_get_red< ::color::category::YPbPr_double<::color::constant::YPbPr::BT_2020_entity > >();
  test_get_red< ::color::category::xyz_double >();

  test_get_green< ::color::category::gray_double>();
  test_get_green< ::color::category::cmy_double>();
  test_get_green< ::color::category::cmyk_double>();
  test_get_green< ::color::category::hsv_double>();
  test_get_green< ::color::category::hsi_double>();
  test_get_green< ::color::category::rgb_double>();
  test_get_green< ::color::category::yiq_double>();
  test_get_green< ::color::category::yuv_double<::color::constant::yuv::BT_601_entity > >();
  test_get_green< ::color::category::yuv_double<::color::constant::yuv::BT_709_entity > >();
  test_get_green< ::color::category::YCgCo_double >();
  test_get_green< ::color::category::YDbDr_double >();

  test_get_green< ::color::category::YPbPr_double<::color::constant::YPbPr::BT_601_entity > >();
  test_get_green< ::color::category::YPbPr_double<::color::constant::YPbPr::BT_709_entity > >();
  test_get_green< ::color::category::YPbPr_double<::color::constant::YPbPr::BT_2020_entity > >();

  test_get_green< ::color::category::xyz_double >();

  test_get_blue< ::color::category::gray_double>();
  test_get_blue< ::color::category::cmy_double>();
  test_get_blue< ::color::category::cmyk_double>();
  test_get_blue< ::color::category::hsv_double>();
  test_get_blue< ::color::category::hsi_double>();
  test_get_blue< ::color::category::rgb_double>();
  test_get_blue< ::color::category::yiq_double>();
  test_get_blue< ::color::category::yuv_double<::color::constant::yuv::BT_601_entity > >();
  test_get_blue< ::color::category::yuv_double<::color::constant::yuv::BT_709_entity > >();
  test_get_blue< ::color::category::YCgCo_double >();
  test_get_blue< ::color::category::YDbDr_double >();
  test_get_blue< ::color::category::YPbPr_double<::color::constant::YPbPr::BT_601_entity > >();
  test_get_blue< ::color::category::YPbPr_double<::color::constant::YPbPr::BT_709_entity > >();
  test_get_blue< ::color::category::YPbPr_double<::color::constant::YPbPr::BT_2020_entity > >();

  test_get_blue< ::color::category::xyz_double >();

  test_get_hue<::color::category::gray_float>( 1200, 1200, 0.75 );
 }