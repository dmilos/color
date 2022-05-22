#include <iostream>
#include <iomanip>
#include <string>
#include "./image.hpp"

void
extract_red( bgr_image_type const& image, std::string const& name, std::size_t const& width, std::size_t const& height )
 {
  gray_image_type  component_channel; component_channel.reserve( image.size() );
  gray_image_type  component_star;    component_star.reserve(    image.size() );
  gray_image_type  component_hue;     component_hue.reserve(     image.size() );

  for( auto & pixel : image )
   {
    component_channel.push_back( gray_color_type( ::color::get::red< ::color::get::constant::rgb::red::channel_entity  >( pixel ) ) );
    component_star.push_back(    gray_color_type( ::color::get::red< ::color::get::constant::rgb::red::hsl_star_entity >( pixel ) ) );
    component_hue.push_back(     gray_color_type( ::color::get::red< ::color::get::constant::rgb::red::hue_angle_entity >( pixel ) ) );
   }

  save_image_gray( name + "-channel.tga", component_channel, width, height );
  save_image_gray( name + "-star.tga",    component_star,    width, height );
  save_image_gray( name + "-hue.tga",     component_hue,     width, height );
 }

void
extract_green( bgr_image_type const& image, std::string const& name, std::size_t const& width, std::size_t const& height )
 {
  gray_image_type  component_channel; component_channel.reserve( image.size() );
  gray_image_type  component_star;    component_star.reserve(    image.size() );
  gray_image_type  component_hue;     component_hue.reserve(     image.size() );

  for( auto & pixel : image )
   {
    component_channel.push_back( gray_color_type( ::color::get::green< ::color::get::constant::rgb::green::channel_entity  >( pixel ) ) );
    component_star.push_back(    gray_color_type( ::color::get::green< ::color::get::constant::rgb::green::hsl_star_entity >( pixel ) ) );
    component_hue.push_back(     gray_color_type( ::color::get::green< ::color::get::constant::rgb::green::hue_angle_entity >( pixel ) ) );
   }

  save_image_gray( name + "-channel.tga", component_channel, width, height );
  save_image_gray( name + "-star.tga",    component_star,    width, height );
  save_image_gray( name + "-hue.tga",     component_hue,     width, height );
 }

void
extract_blue( bgr_image_type const& image, std::string const& name, std::size_t const& width, std::size_t const& height )
 {
  gray_image_type  component_channel; component_channel.reserve( image.size() );
  gray_image_type  component_star;    component_star.reserve(    image.size() );
  gray_image_type  component_hue;     component_hue.reserve(     image.size() );

  for( auto & pixel : image )
   {
    component_channel.push_back( gray_color_type( ::color::get::blue< ::color::get::constant::rgb::blue::channel_entity  >( pixel ) ) );
    component_star.push_back(    gray_color_type( ::color::get::blue< ::color::get::constant::rgb::blue::hsl_star_entity >( pixel ) ) );
    component_hue.push_back(     gray_color_type( ::color::get::blue< ::color::get::constant::rgb::blue::hue_angle_entity >( pixel ) ) );
   }

  save_image_gray( name + "-channel.tga", component_channel, width, height );
  save_image_gray( name + "-star.tga",    component_star,    width, height );
  save_image_gray( name + "-hue.tga",     component_hue,     width, height );
 }

void
extract_cyan( bgr_image_type const& image, std::string const& name, std::size_t const& width, std::size_t const& height )
 {
  gray_image_type  component_cmy;   component_cmy.reserve( image.size() );
  gray_image_type  component_cmyk;  component_cmyk.reserve(image.size());
  gray_image_type  component_star;  component_star.reserve(image.size());
  gray_image_type  component_hue;     component_hue.reserve(     image.size() );

  for( auto & pixel : image )
   {
    component_cmy.push_back(   gray_color_type( ::color::get::cyan< ::color::get::constant::rgb::cyan::cmy_entity      >( pixel ) ) );
    component_cmyk.push_back(  gray_color_type( ::color::get::cyan< ::color::get::constant::rgb::cyan::cmyk_entity     >( pixel ) ) );
    component_star.push_back(  gray_color_type( ::color::get::cyan< ::color::get::constant::rgb::cyan::hsl_star_entity >( pixel ) ) );
    component_hue.push_back(   gray_color_type( ::color::get::cyan< ::color::get::constant::rgb::cyan::hue_angle_entity >( pixel ) ) );
   }

  save_image_gray( name + "-cmy.tga",   component_cmy,   width, height );
  save_image_gray( name + "-cmyk.tga",  component_cmyk,  width, height );
  save_image_gray( name + "-star.tga",  component_star,  width, height );
  save_image_gray( name + "-hue.tga",     component_hue,     width, height );
 }

void
extract_magenta( bgr_image_type const& image, std::string const& name, std::size_t const& width, std::size_t const& height )
 {
  gray_image_type  component_cmy;   component_cmy.reserve( image.size() );
  gray_image_type  component_cmyk;  component_cmyk.reserve(image.size());
  gray_image_type  component_star;  component_star.reserve(image.size());
  gray_image_type  component_hue;     component_hue.reserve(     image.size() );

  for( auto & pixel : image )
   {
    component_cmy.push_back(   gray_color_type( ::color::get::magenta< ::color::get::constant::rgb::magenta::cmy_entity      >( pixel ) ) );
    component_cmyk.push_back(  gray_color_type( ::color::get::magenta< ::color::get::constant::rgb::magenta::cmyk_entity     >( pixel ) ) );
    component_star.push_back(  gray_color_type( ::color::get::magenta< ::color::get::constant::rgb::magenta::hsl_star_entity >( pixel ) ) );
    component_hue.push_back(   gray_color_type( ::color::get::magenta< ::color::get::constant::rgb::magenta::hue_angle_entity >( pixel ) ) );
   }

  save_image_gray( name + "-cmy.tga",   component_cmy,   width, height );
  save_image_gray( name + "-cmyk.tga",  component_cmyk,  width, height );
  save_image_gray( name + "-star.tga",  component_star,  width, height );
  save_image_gray( name + "-hue.tga",     component_hue,     width, height );
 }

void
extract_yellow( bgr_image_type const& image, std::string const& name, std::size_t const& width, std::size_t const& height )
 {
  gray_image_type  component_cmy;   component_cmy.reserve( image.size() );
  gray_image_type  component_cmyk;  component_cmyk.reserve(image.size());
  gray_image_type  component_star;  component_star.reserve(image.size());
  gray_image_type  component_hue;   component_hue.reserve( image.size() );

  for( auto & pixel : image )
   {
    component_cmy.push_back(   gray_color_type( ::color::get::yellow< ::color::get::constant::rgb::yellow::cmy_entity      >( pixel ) ) );
    component_cmyk.push_back(  gray_color_type( ::color::get::yellow< ::color::get::constant::rgb::yellow::cmyk_entity     >( pixel ) ) );
    component_star.push_back(  gray_color_type( ::color::get::yellow< ::color::get::constant::rgb::yellow::hsl_star_entity >( pixel ) ) );
    component_hue.push_back(   gray_color_type( ::color::get::yellow<   ::color::get::constant::rgb::yellow::hue_angle_entity >( pixel ) ) );
   }

  save_image_gray( name + "-cmy.tga",   component_cmy,   width, height );
  save_image_gray( name + "-cmyk.tga",  component_cmyk,  width, height );
  save_image_gray( name + "-star.tga",  component_star,  width, height );
  save_image_gray( name + "-hue.tga",   component_hue,   width, height );
 }

void
extract_gray( bgr_image_type const& image, std::string const& name, std::size_t const& width, std::size_t const& height )
 {
  gray_image_type  component_average;    component_average.reserve( image.size() );
  gray_image_type  component_yuv709;     component_yuv709.reserve(image.size());
  gray_image_type  component_middle;     component_middle.reserve(image.size());
  gray_image_type  component_star;       component_star.reserve(image.size());
  gray_image_type  component_lightness;  component_lightness.reserve(image.size());

  for( auto & pixel : image )
   {
    component_average.push_back(      gray_color_type( ::color::get::gray< ::color::get::constant::rgb::gray::average_entity   >( pixel ) ) );
    component_middle.push_back(       gray_color_type( ::color::get::gray< ::color::get::constant::rgb::gray::middle_entity    >( pixel ) ) );
    component_yuv709.push_back(       gray_color_type(   ::color::get::gray< ::color::get::constant::rgb::gray::yuv709_entity    >( pixel ) ) );
    component_star.push_back(         gray_color_type( ::color::get::gray< ::color::get::constant::rgb::gray::hsl_star_entity  >( pixel ) ) );
    component_lightness.push_back(    gray_color_type( ::color::get::gray< ::color::get::constant::rgb::gray::lightness_entity >( pixel ) ) );
   }

  save_image_gray( name + "-average.tga",  component_average,    width, height );
  save_image_gray( name + "-middle.tga",   component_middle,     width, height );
  save_image_gray( name + "-yuv709.tga",   component_yuv709,     width, height );
  save_image_gray( name + "-star.tga",     component_star,       width, height );
  save_image_gray( name + "-lightness.tga",component_lightness,  width, height );
 }

void
extract_black( bgr_image_type const& image, std::string const& name, std::size_t const& width, std::size_t const& height )
 {
  gray_image_type  component_average; component_average.reserve( image.size() );
  gray_image_type  component_star;    component_star.reserve(image.size());

  for( auto & pixel : image )
   {
    component_average.push_back( gray_color_type( ::color::get::black< ::color::get::constant::rgb::black::alvy_entity     >( pixel ) ) );
    component_star.push_back(    gray_color_type( ::color::get::black< ::color::get::constant::rgb::black::hsl_star_entity >( pixel ) ) );
   }

  save_image_gray( name + "-alvy.tga",  component_average, width, height );
  save_image_gray( name + "-star.tga", component_star,    width, height );
 }

void
extract_white( bgr_image_type const& image, std::string const& name, std::size_t const& width, std::size_t const& height )
 {
  gray_image_type  component_average; component_average.reserve( image.size() );
  gray_image_type  component_star;    component_star.reserve(image.size());

  for( auto & pixel : image )
   {
    component_average.push_back( gray_color_type( ::color::get::white< ::color::get::constant::rgb::white::alvy_entity     >( pixel ) ) );
    component_star.push_back(    gray_color_type( ::color::get::white< ::color::get::constant::rgb::white::hsl_star_entity >( pixel ) ) );
   }

  save_image_gray( name + "-alvy.tga",  component_average, width, height );
  save_image_gray( name + "-star.tga", component_star,    width, height );
 }


void
extract_saturation( bgr_image_type const& image, std::string const& name, std::size_t const& width, std::size_t const& height )
 {
  gray_image_type  component_h0h;  component_h0h.reserve( image.size() );
  gray_image_type  component_h1h;  component_h1h.reserve(image.size());
  gray_image_type  component_h2h;  component_h2h.reserve(image.size());
  gray_image_type  component_h0r;  component_h0r.reserve( image.size() );
  gray_image_type  component_h1r;  component_h1r.reserve(image.size());
  gray_image_type  component_h2r;  component_h2r.reserve(image.size());
  gray_image_type  component_l0;  component_l0.reserve( image.size() );
  gray_image_type  component_l1;  component_l1.reserve(image.size());
  gray_image_type  component_l2;  component_l2.reserve(image.size());

  for( auto & pixel : image )
   {
    component_h0h.push_back(  gray_color_type( ::color::get::saturation< ::color::get::constant::rgb::saturation::hsv_entity >( pixel ) ) );
    component_h1h.push_back(  gray_color_type( ::color::get::saturation< ::color::get::constant::rgb::saturation::hsl_entity >( pixel ) ) );
    component_h2h.push_back(  gray_color_type( ::color::get::saturation< ::color::get::constant::rgb::saturation::hsi_entity >( pixel ) ) );

    component_h0r.push_back(  gray_color_type( ::color::hsv<std::uint8_t>(pixel)[1] ) );
    component_h1r.push_back(  gray_color_type( ::color::hsl<std::uint8_t>(pixel)[1] ) );
    component_h2r.push_back(  gray_color_type( ::color::hsi<std::uint8_t>(pixel)[1] ) );

    component_l0.push_back(  gray_color_type( (std::uint8_t)::color::get::saturation( color::lab<  float >( pixel ) ) ) );
    component_l1.push_back(  gray_color_type( (std::uint8_t)(::color::get::saturation( color::luv<  float >( pixel ) ) / 9.0 ) ) );
    component_l2.push_back(  gray_color_type( (std::uint8_t)::color::get::saturation( color::LabCH<float >( pixel ) ) ) );
   }

  save_image_gray( name + "-hsv-ref.tga",   component_h0r,  width, height );
  save_image_gray( name + "-hsl-ref.tga",   component_h1r,  width, height );
  save_image_gray( name + "-hsi-ref.tga",   component_h2r,  width, height );

  save_image_gray( name + "-hsv-rgb.tga",   component_h0h,  width, height );
  save_image_gray( name + "-hsl-rgb.tga",   component_h1h,  width, height );
  save_image_gray( name + "-hsi-rgb.tga",   component_h2h,  width, height );

  save_image_gray( name + "-lab.tga",    component_l0,  width, height );
  save_image_gray( name + "-luv.tga",    component_l1,  width, height );
  save_image_gray( name + "-LabCH.tga",  component_l2,  width, height );
 }


void
extract_chroma( bgr_image_type const& image, std::string const& name, std::size_t const& width, std::size_t const& height )
 {
  gray_image_type  component_lab;     component_lab    .reserve( image.size() );
  gray_image_type  component_LabCH;   component_LabCH  .reserve(image.size());
  gray_image_type  component_LuvCH;   component_LuvCH  .reserve(image.size());
  gray_image_type  component_rgbMMM;  component_rgbMMM .reserve(image.size());
  gray_image_type  component_RGBd2g;  component_RGBd2g .reserve(image.size());
  gray_image_type  component_hsi;     component_hsi .reserve(image.size());
  gray_image_type  component_hsl;     component_hsl .reserve(image.size());
  gray_image_type  component_hsv;     component_hsv .reserve(image.size());

  for( auto & pixel : image )
   {
    component_lab   .push_back(  gray_color_type( (std::uint8_t)::color::get::chroma( ::color::lab<float>( pixel ) ) ) );
    component_LabCH .push_back(  gray_color_type( (std::uint8_t)::color::get::chroma( ::color::LabCH<float>( pixel ) ) ) );
    component_LuvCH .push_back(  gray_color_type( (std::uint8_t)::color::get::chroma( ::color::LuvCH<float>( pixel ) ) ) );
    component_rgbMMM.push_back(  gray_color_type( ::color::get::chroma< ::color::get::constant::rgb::chroma::max_minus_min_entity>( pixel ) ) );
    component_RGBd2g.push_back(  gray_color_type( ::color::get::chroma< ::color::get::constant::rgb::chroma::distance2gray_entity>( pixel ) ) );

    component_hsi .push_back(  gray_color_type( (std::uint8_t)::color::get::chroma( ::color::hsi<std::uint8_t>( pixel ) ) ) );
    component_hsl .push_back(  gray_color_type( (std::uint8_t)::color::get::chroma( ::color::hsl<std::uint8_t>( pixel ) ) ) );
    component_hsv .push_back(  gray_color_type( (std::uint8_t)::color::get::chroma( ::color::hsv<std::uint8_t>( pixel ) ) ) );
   }

  save_image_gray( name + "-lab.tga",     component_lab   ,  width, height );
  save_image_gray( name + "-LabCH.tga",   component_LabCH ,  width, height );
  save_image_gray( name + "-LuvCH.tga",   component_LuvCH ,  width, height );
  save_image_gray( name + "-rgbMMM.tga",  component_rgbMMM,  width, height );
  save_image_gray( name + "-RGBd2g.tga",  component_RGBd2g,  width, height );
  save_image_gray( name + "-hsi.tga",     component_hsi,  width, height );
  save_image_gray( name + "-hsl.tga",     component_hsl,  width, height );
  save_image_gray( name + "-hsv.tga",     component_hsv,  width, height );
 }


template< ::color::constant::distance::reference_enum reference_instance>
void
extract_color
 (
    bgr_image_type const& image
   ,std::string     const& name
   ,std::size_t     const& width
   ,std::size_t     const& height
   ,bgr_color_type  const& origin
   ,double          const& scale = 1
  )
 {
  gray_image_type  component; component.reserve( image.size() );

  double maximum = 0;
  for( auto & pixel : image )
   {
    auto v =     ::color::operation::distance<reference_instance>( origin, pixel );
    maximum = std::max<double>( maximum, fabs( v ) );
    component.push_back( gray_color_type( std::uint8_t( 255 - 255*scale *v ) ) );
   }

  std::cout << __FUNCTION__ << " _" << reference_instance << "_" << " maximum: " << maximum << std::endl;
  save_image_gray( name+ "-hue-color.tga", component, width, height );
 }

 template< ::color::constant::distance::reference_enum reference_instance>
void
extract_color_hsl
 (
    bgr_image_type const& image
   ,std::string     const& name
   ,std::size_t     const& width
   ,std::size_t     const& height
   ,hsl_scalar_type  const& origin
   ,double          const& scale = 1
  )
 {
  gray_image_type  component; component.reserve( image.size() );

  double maximum = 0;
  for( auto & pixel : image )
   {
    auto v =     ::color::operation::distance<reference_instance>( origin, hsl_scalar_type( pixel ) );
    maximum = std::max<double>( maximum, fabs( v ) );
    component.push_back( gray_color_type( std::uint8_t( 255 - 255*scale *v ) ) );
   }

  std::cout << __FUNCTION__ << " _" << reference_instance << "_" << " maximum: " << maximum << std::endl;
  save_image_gray( name+ "-hue-color.tga", component, width, height );
 }

void main_extract()
 {
  bgr_image_type image;
  int width=0;
  int height=0;
  

  //std::string root = "z:/work/code/cpp/prj/github/color/work/example/test/out";
  //std::string file = "./palette/hsl-1-100.tga";
  std::string root = "z:/work/code/cpp/prj/github/color/work/example/test/data";
  std::string file = "./color-scale.tga";

  if( false == load_image( image, width, height, root + file ) )
   {
    std::cout << "Can not load: " <<  file << std::endl;
    return;
   }

  extract_color<::color::constant::distance::euclid_entity>(  image,"./extract/color-euclid-red",        width, height, ::color::constant::red_t{}       , 1/( 255 * sqrt(3) )  );
  extract_color<::color::constant::distance::euclid_entity>(  image,"./extract/color-euclid-lime",       width, height, ::color::constant::lime_t{}      , 1/( 255 * sqrt(3) )  );
  extract_color<::color::constant::distance::euclid_entity>(  image,"./extract/color-euclid-blue",       width, height, ::color::constant::blue_t{}      , 1/( 255 * sqrt(3) )  );
  extract_color<::color::constant::distance::euclid_entity>(  image,"./extract/color-euclid-magenta",    width, height, ::color::constant::magenta_t{}   , 1/( 255 * sqrt(3) )  );
  extract_color<::color::constant::distance::euclid_entity>(  image,"./extract/color-euclid-gold",       width, height, ::color::constant::gold_t{}      , 1/( 255 * sqrt(3) )  );
  extract_color<::color::constant::distance::euclid_entity>(  image,"./extract/color-euclid-aqua",       width, height, ::color::constant::aqua_t{}      , 1/( 255 * sqrt(3) )  );
  extract_color<::color::constant::distance::euclid_entity>(  image,"./extract/color-euclid-aquamarine", width, height, ::color::constant::aquamarine_t{}, 1/( 255 * sqrt(3) )  );
  extract_color<::color::constant::distance::euclid_entity>(  image,"./extract/color-euclid-azure",      width, height, ::color::constant::azure_t{}     , 1/( 255 * sqrt(3) )  );
  extract_color<::color::constant::distance::euclid_entity>(  image,"./extract/color-euclid-beige",      width, height, ::color::constant::beige_t{}     , 1/( 255 * sqrt(3) )  );
  extract_color<::color::constant::distance::euclid_entity>(  image,"./extract/color-euclid-bisque",     width, height, ::color::constant::bisque_t{}    , 1/( 255 * sqrt(3) )  );
  extract_color<::color::constant::distance::euclid_entity>(  image,"./extract/color-euclid-gray",       width, height, ::color::constant::gray_t<1,1>{} , 1/( 255 * sqrt(3) )  );

  extract_color<::color::constant::distance::CIE76_entity>(  image,"./extract/color-CIE76-red",        width, height, ::color::constant::red_t{}        , 1.0 / 255.0 );
  extract_color<::color::constant::distance::CIE76_entity>(  image,"./extract/color-CIE76-lime",       width, height, ::color::constant::lime_t{}       , 1.0 / 255.0 );
  extract_color<::color::constant::distance::CIE76_entity>(  image,"./extract/color-CIE76-blue",       width, height, ::color::constant::blue_t{}       , 1.0 / 255.0 );
  extract_color<::color::constant::distance::CIE76_entity>(  image,"./extract/color-CIE76-magenta",    width, height, ::color::constant::magenta_t{}    , 1.0 / 255.0 );
  extract_color<::color::constant::distance::CIE76_entity>(  image,"./extract/color-CIE76-gold",       width, height, ::color::constant::gold_t{}       , 1.0 / 255.0 );
  extract_color<::color::constant::distance::CIE76_entity>(  image,"./extract/color-CIE76-aqua",       width, height, ::color::constant::aqua_t{}       , 1.0 / 255.0 );
  extract_color<::color::constant::distance::CIE76_entity>(  image,"./extract/color-CIE76-aquamarine", width, height, ::color::constant::aquamarine_t{} , 1.0 / 255.0 );
  extract_color<::color::constant::distance::CIE76_entity>(  image,"./extract/color-CIE76-azure",      width, height, ::color::constant::azure_t{}      , 1.0 / 255.0 );
  extract_color<::color::constant::distance::CIE76_entity>(  image,"./extract/color-CIE76-beige",      width, height, ::color::constant::beige_t{}      , 1.0 / 255.0 );
  extract_color<::color::constant::distance::CIE76_entity>(  image,"./extract/color-CIE76-bisque",     width, height, ::color::constant::bisque_t{}     , 1.0 / 255.0 );
  extract_color<::color::constant::distance::CIE76_entity>(  image,"./extract/color-CIE76-gray",       width, height, ::color::constant::gray_t<1,1>{}  , 1.0 / 255.0 );

  extract_color_hsl<::color::constant::distance::hue_euclid_entity>(  image,"./extract/color-hsl_euclid-red",        width, height, ::color::constant::red_t{}        ,  0.1/ sqrt( 1 + 1 + 3.1415926 * 3.1415926 ) );
  extract_color_hsl<::color::constant::distance::hue_euclid_entity>(  image,"./extract/color-hsl_euclid-lime",       width, height, ::color::constant::lime_t{}       ,  0.1/ sqrt( 1 + 1 + 3.1415926 * 3.1415926 ) );
  extract_color_hsl<::color::constant::distance::hue_euclid_entity>(  image,"./extract/color-hsl_euclid-blue",       width, height, ::color::constant::blue_t{}       ,  0.1/ sqrt( 1 + 1 + 3.1415926 * 3.1415926 ) );
  extract_color_hsl<::color::constant::distance::hue_euclid_entity>(  image,"./extract/color-hsl_euclid-magenta",    width, height, ::color::constant::magenta_t{}    ,  0.1/ sqrt( 1 + 1 + 3.1415926 * 3.1415926 ) );
  extract_color_hsl<::color::constant::distance::hue_euclid_entity>(  image,"./extract/color-hsl_euclid-gold",       width, height, ::color::constant::gold_t{}       ,  0.1/ sqrt( 1 + 1 + 3.1415926 * 3.1415926 ) );
  extract_color_hsl<::color::constant::distance::hue_euclid_entity>(  image,"./extract/color-hsl_euclid-aqua",       width, height, ::color::constant::aqua_t{}       ,  0.1/ sqrt( 1 + 1 + 3.1415926 * 3.1415926 ) );
  extract_color_hsl<::color::constant::distance::hue_euclid_entity>(  image,"./extract/color-hsl_euclid-aquamarine", width, height, ::color::constant::aquamarine_t{} ,  0.1/ sqrt( 1 + 1 + 3.1415926 * 3.1415926 ) );
  extract_color_hsl<::color::constant::distance::hue_euclid_entity>(  image,"./extract/color-hsl_euclid-azure",      width, height, ::color::constant::azure_t{}      ,  0.1/ sqrt( 1 + 1 + 3.1415926 * 3.1415926 ) );
  extract_color_hsl<::color::constant::distance::hue_euclid_entity>(  image,"./extract/color-hsl_euclid-beige",      width, height, ::color::constant::beige_t{}      ,  0.1/ sqrt( 1 + 1 + 3.1415926 * 3.1415926 ) );
  extract_color_hsl<::color::constant::distance::hue_euclid_entity>(  image,"./extract/color-hsl_euclid-bisque",     width, height, ::color::constant::bisque_t{}     ,  0.1/ sqrt( 1 + 1 + 3.1415926 * 3.1415926 ) );
  extract_color_hsl<::color::constant::distance::hue_euclid_entity>(  image,"./extract/color-hsl_euclid-gray",       width, height, ::color::constant::gray_t<1,1>{}  ,  0.1/ sqrt( 1 + 1 + 3.1415926 * 3.1415926 ) );

   load_image( image, width, height, "./palette/hsl-1-000.tga" ); extract_red(  image,"./extract/red-hsl-1-000", width, height );
   load_image( image, width, height, "./palette/hsl-1-025.tga" ); extract_red(  image,"./extract/red-hsl-1-025", width, height );
   load_image( image, width, height, "./palette/hsl-1-050.tga" ); extract_red(  image,"./extract/red-hsl-1-050", width, height );
   load_image( image, width, height, "./palette/hsl-1-075.tga" ); extract_red(  image,"./extract/red-hsl-1-075", width, height );
   load_image( image, width, height, "./palette/hsl-1-100.tga" ); extract_red(  image,"./extract/red-hsl-1-100", width, height );

   load_image( image, width, height, "./palette/hsl-1-000.tga" ); extract_green(  image,"./extract/green-hsl-1-000", width, height );
   load_image( image, width, height, "./palette/hsl-1-025.tga" ); extract_green(  image,"./extract/green-hsl-1-025", width, height );
   load_image( image, width, height, "./palette/hsl-1-050.tga" ); extract_green(  image,"./extract/green-hsl-1-050", width, height );
   load_image( image, width, height, "./palette/hsl-1-075.tga" ); extract_green(  image,"./extract/green-hsl-1-075", width, height );
   load_image( image, width, height, "./palette/hsl-1-100.tga" ); extract_green(  image,"./extract/green-hsl-1-100", width, height );

   load_image( image, width, height, "./palette/hsl-1-000.tga" ); extract_blue(  image,"./extract/blue-hsl-1-000", width, height );
   load_image( image, width, height, "./palette/hsl-1-025.tga" ); extract_blue(  image,"./extract/blue-hsl-1-025", width, height );
   load_image( image, width, height, "./palette/hsl-1-050.tga" ); extract_blue(  image,"./extract/blue-hsl-1-050", width, height );
   load_image( image, width, height, "./palette/hsl-1-075.tga" ); extract_blue(  image,"./extract/blue-hsl-1-075", width, height );
   load_image( image, width, height, "./palette/hsl-1-100.tga" ); extract_blue(  image,"./extract/blue-hsl-1-100", width, height );

   load_image( image, width, height, "./palette/hsl-1-000.tga" ); extract_cyan(  image,"./extract/cyan-hsl-1-000", width, height );
   load_image( image, width, height, "./palette/hsl-1-025.tga" ); extract_cyan(  image,"./extract/cyan-hsl-1-025", width, height );
   load_image( image, width, height, "./palette/hsl-1-050.tga" ); extract_cyan(  image,"./extract/cyan-hsl-1-050", width, height );
   load_image( image, width, height, "./palette/hsl-1-075.tga" ); extract_cyan(  image,"./extract/cyan-hsl-1-075", width, height );
   load_image( image, width, height, "./palette/hsl-1-100.tga" ); extract_cyan(  image,"./extract/cyan-hsl-1-100", width, height );

   load_image( image, width, height, "./palette/hsl-1-000.tga" ); extract_magenta(  image,"./extract/magenta-hsl-1-000", width, height );
   load_image( image, width, height, "./palette/hsl-1-025.tga" ); extract_magenta(  image,"./extract/magenta-hsl-1-025", width, height );
   load_image( image, width, height, "./palette/hsl-1-050.tga" ); extract_magenta(  image,"./extract/magenta-hsl-1-050", width, height );
   load_image( image, width, height, "./palette/hsl-1-075.tga" ); extract_magenta(  image,"./extract/magenta-hsl-1-075", width, height );
   load_image( image, width, height, "./palette/hsl-1-100.tga" ); extract_magenta(  image,"./extract/magenta-hsl-1-100", width, height );

   load_image( image, width, height, "./palette/hsl-1-000.tga" ); extract_yellow(  image,"./extract/yellow-hsl-1-000", width, height );
   load_image( image, width, height, "./palette/hsl-1-025.tga" ); extract_yellow(  image,"./extract/yellow-hsl-1-025", width, height );
   load_image( image, width, height, "./palette/hsl-1-050.tga" ); extract_yellow(  image,"./extract/yellow-hsl-1-050", width, height );
   load_image( image, width, height, "./palette/hsl-1-075.tga" ); extract_yellow(  image,"./extract/yellow-hsl-1-075", width, height );
   load_image( image, width, height, "./palette/hsl-1-100.tga" ); extract_yellow(  image,"./extract/yellow-hsl-1-100", width, height );

   load_image(image, width, height, "./palette/hsl-1-000.tga"); extract_gray( image, "./extract/gray-hsl-1-000", width, height);
   load_image(image, width, height, "./palette/hsl-1-025.tga"); extract_gray( image, "./extract/gray-hsl-1-025", width, height);
   load_image(image, width, height, "./palette/hsl-1-050.tga"); extract_gray( image, "./extract/gray-hsl-1-050", width, height);
   load_image(image, width, height, "./palette/hsl-1-075.tga"); extract_gray( image, "./extract/gray-hsl-1-075", width, height);
   load_image(image, width, height, "./palette/hsl-1-100.tga"); extract_gray( image, "./extract/gray-hsl-1-100", width, height);

   load_image( image, width, height, "./palette/hsl-1-000.tga" );  extract_black(  image,"./extract/black-hsl-1-000", width, height );
   load_image( image, width, height, "./palette/hsl-1-025.tga" );  extract_black(  image,"./extract/black-hsl-1-025", width, height );
   load_image( image, width, height, "./palette/hsl-1-050.tga" );  extract_black(  image,"./extract/black-hsl-1-050", width, height );
   load_image( image, width, height, "./palette/hsl-1-075.tga" );  extract_black(  image,"./extract/black-hsl-1-075", width, height );
   load_image( image, width, height, "./palette/hsl-1-100.tga" );  extract_black(  image,"./extract/black-hsl-1-100", width, height );

   load_image( image, width, height, "./palette/hsl-1-000.tga" );  extract_white(  image,"./extract/white-hsl-1-000", width, height );
   load_image( image, width, height, "./palette/hsl-1-025.tga" );  extract_white(  image,"./extract/white-hsl-1-025", width, height );
   load_image( image, width, height, "./palette/hsl-1-050.tga" );  extract_white(  image,"./extract/white-hsl-1-050", width, height );
   load_image( image, width, height, "./palette/hsl-1-075.tga" );  extract_white(  image,"./extract/white-hsl-1-075", width, height );
   load_image( image, width, height, "./palette/hsl-1-100.tga" );  extract_white(  image,"./extract/white-hsl-1-100", width, height );

   load_image( image, width, height, "./palette/hsl-1-000.tga" );  extract_saturation( image,"./extract/saturation-hsl-1-000", width, height );
   load_image( image, width, height, "./palette/hsl-1-025.tga" );  extract_saturation( image,"./extract/saturation-hsl-1-025", width, height );
   load_image( image, width, height, "./palette/hsl-1-050.tga" );  extract_saturation( image,"./extract/saturation-hsl-1-050", width, height );
   load_image( image, width, height, "./palette/hsl-1-075.tga" );  extract_saturation( image,"./extract/saturation-hsl-1-075", width, height );
   load_image( image, width, height, "./palette/hsl-1-100.tga" );  extract_saturation( image,"./extract/saturation-hsl-1-100", width, height );

   load_image( image, width, height, "./palette/hsl-1-000.tga" );  extract_chroma( image,"./extract/chroma-hsl-1-000", width, height );
   load_image( image, width, height, "./palette/hsl-1-025.tga" );  extract_chroma( image,"./extract/chroma-hsl-1-025", width, height );
   load_image( image, width, height, "./palette/hsl-1-050.tga" );  extract_chroma( image,"./extract/chroma-hsl-1-050", width, height );
   load_image( image, width, height, "./palette/hsl-1-075.tga" );  extract_chroma( image,"./extract/chroma-hsl-1-075", width, height );
   load_image( image, width, height, "./palette/hsl-1-100.tga" );  extract_chroma( image,"./extract/chroma-hsl-1-100", width, height );

 }