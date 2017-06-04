#include "./image.hpp"

void
extract_red( bgr_image_type const& image, std::string const& name, std::size_t const& width, std::size_t const& height )
 {
  gray_image_type  component; component.reserve( image.size() );

  for( auto & pixel : image )
   {
    component.push_back( gray_color_type( ::color::get::red( pixel ) ) );
   }

  save_image_gray( name+ "-red.tga", component, width, height );
 }

void
extract_green( bgr_image_type const& image, std::string const& name, std::size_t const& width, std::size_t const& height )
 {
  gray_image_type  component; component.reserve( image.size() );

  for( auto & pixel : image )
   {
    component.push_back( gray_color_type( ::color::get::green( pixel ) ) );
   }

  save_image_gray( name+ "-green.tga", component, width, height );
 }

void
extract_blue( bgr_image_type const& image, std::string const& name, std::size_t const& width, std::size_t const& height )
 {
  gray_image_type  component; component.reserve( image.size() );

  for( auto & pixel : image )
   {
    component.push_back( gray_color_type( ::color::get::blue( pixel ) ) );
   }

  save_image_gray( name+ "-blue.tga", component, width, height );
 }

void
extract_color( bgr_image_type const& image, std::string const& name, std::size_t const& width, std::size_t const& height, bgr_color_type const& origin )
 {
  gray_image_type  component; component.reserve( image.size() );

  for( auto & pixel : image )
   {
    auto e = 1 - ::color::operation::distance<::color::constant::distance::euclid_entity>(      origin, pixel );
    auto h = 1 - ::color::operation::distance<::color::constant::distance::hsl_special_entity>( origin, pixel );

    auto g = ::color::gray<double>( { h * pow( e, 10 ) } ) ;
    ::color::fix::overburn( g );
    component.push_back( gray_color_type( g ) );
   }

  save_image_gray( name+ "-color.tga", component, width, height );
 }


void main_extract()
 {
  bgr_image_type image;
  int width=1000;
  int height=1000;
  //load_image( image, width, height, "./palette/hsl-1-000.tga" ); extract_red (  image,"./extract/extract-hsl-1-000", width, height ); extract_green( image,"./extract/extract-hsl-1-000", width, height ); extract_blue( image,"./extract/extract-hsl-1-000", width, height );
  //load_image( image, width, height, "./palette/hsl-1-025.tga" ); extract_red (  image,"./extract/extract-hsl-1-025", width, height ); extract_green( image,"./extract/extract-hsl-1-025", width, height ); extract_blue( image,"./extract/extract-hsl-1-025", width, height );
  //load_image( image, width, height, "./palette/hsl-1-050.tga" ); extract_red (  image,"./extract/extract-hsl-1-050", width, height ); extract_green( image,"./extract/extract-hsl-1-050", width, height ); extract_blue( image,"./extract/extract-hsl-1-050", width, height );
  //load_image( image, width, height, "./palette/hsl-1-075.tga" ); extract_red (  image,"./extract/extract-hsl-1-075", width, height ); extract_green( image,"./extract/extract-hsl-1-075", width, height ); extract_blue( image,"./extract/extract-hsl-1-075", width, height );
  //load_image( image, width, height, "./palette/hsl-1-100.tga" ); extract_red (  image,"./extract/extract-hsl-1-100", width, height ); extract_green( image,"./extract/extract-hsl-1-100", width, height ); extract_blue( image,"./extract/extract-hsl-1-100", width, height );

  load_image( image, width, height, "./palette/hsl-1-100.tga" ); 
  extract_color (  image,"./extract/extract-color-hs-red", width, height,     ::color::constant::red_t{}     );
  extract_color (  image,"./extract/extract-color-hs-lime", width, height,    ::color::constant::lime_t{}    );
  extract_color (  image,"./extract/extract-color-hs-blue", width, height,    ::color::constant::blue_t{}    );
  extract_color (  image,"./extract/extract-color-hs-magenta", width, height, ::color::constant::magenta_t{} );
  extract_color (  image,"./extract/extract-color-hs-gold", width, height,    ::color::constant::gold_t{}    );

  extract_color (  image,"./extract/extract-color-hs-aqua",       width, height,  ::color::constant::aqua_t{}       );
  extract_color (  image,"./extract/extract-color-hs-aquamarine", width, height,  ::color::constant::aquamarine_t{} );
  extract_color (  image,"./extract/extract-color-hs-azure",      width, height,  ::color::constant::azure_t{}      );
  extract_color (  image,"./extract/extract-color-hs-beige",      width, height,  ::color::constant::beige_t{}      );
  extract_color (  image,"./extract/extract-color-hs-bisque",     width, height,  ::color::constant::bisque_t{}     );
 }