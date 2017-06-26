#include <iostream>
#include <iomanip>
#include "./image.hpp"

template< enum ::color::constant::red::algorithm_enum algorithm_name >
void
extract_red( bgr_image_type const& image, std::string const& name, std::size_t const& width, std::size_t const& height )
 {
  gray_image_type  component; component.reserve( image.size() );

  for( auto & pixel : image )
   {
    component.push_back( gray_color_type( ::color::get::red<algorithm_name>( pixel ) ) );
   }

  save_image_gray( name+ "-red.tga", component, width, height );
 }

template< enum ::color::constant::green::algorithm_enum algorithm_name >
void
extract_green( bgr_image_type const& image, std::string const& name, std::size_t const& width, std::size_t const& height )
 {
  gray_image_type  component; component.reserve( image.size() );

  for( auto & pixel : image )
   {
    component.push_back( gray_color_type( ::color::get::green<algorithm_name>( pixel ) ) );
   }

  save_image_gray( name+ "-green.tga", component, width, height );
 }

template< enum ::color::constant::blue::algorithm_enum algorithm_name >
void
extract_blue( bgr_image_type const& image, std::string const& name, std::size_t const& width, std::size_t const& height )
 {
  gray_image_type  component; component.reserve( image.size() );

  for( auto & pixel : image )
   {
    component.push_back( gray_color_type( ::color::get::blue<algorithm_name>( pixel ) ) );
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
    auto r = 1 - ::color::operation::distance<::color::constant::distance::rgb_special_entity>( origin, pixel );

    //auto g = ::color::gray<double>( { h * pow( e, 10 ) } ) ;

    //::color::fix::overburn( g );
    component.push_back( gray_color_type( 255 - 255*h ) );
   }

  save_image_gray( name+ "-hue-color.tga", component, width, height );
 }


void main_extract()
 {
  bgr_image_type image;
  int width=0;
  int height=0;
  //load_image( image, width, height, "./palette/hsl-1-000.tga" ); extract_red (  image,"./extract/extract-hsl-1-000", width, height ); extract_green( image,"./extract/extract-hsl-1-000", width, height ); extract_blue( image,"./extract/extract-hsl-1-000", width, height );
  //load_image( image, width, height, "./palette/hsl-1-025.tga" ); extract_red (  image,"./extract/extract-hsl-1-025", width, height ); extract_green( image,"./extract/extract-hsl-1-025", width, height ); extract_blue( image,"./extract/extract-hsl-1-025", width, height );
  //load_image( image, width, height, "./palette/hsl-1-050.tga" ); extract_red (  image,"./extract/extract-hsl-1-050", width, height ); extract_green( image,"./extract/extract-hsl-1-050", width, height ); extract_blue( image,"./extract/extract-hsl-1-050", width, height );
  //load_image( image, width, height, "./palette/hsl-1-075.tga" ); extract_red (  image,"./extract/extract-hsl-1-075", width, height ); extract_green( image,"./extract/extract-hsl-1-075", width, height ); extract_blue( image,"./extract/extract-hsl-1-075", width, height );
  //load_image( image, width, height, "./palette/hsl-1-100.tga" ); extract_red (  image,"./extract/extract-hsl-1-100", width, height ); extract_green( image,"./extract/extract-hsl-1-100", width, height ); extract_blue( image,"./extract/extract-hsl-1-100", width, height );

   load_image( image, width, height, "./palette/hsl-1-000.tga" ); extract_red< ::color::constant::red::channel_number >(  image,"./extract/extract-hsl-1-000-red-ch", width, height ); extract_red< ::color::constant::red::hsl_star_number >(  image,"./extract/extract-hsl-1-000-red-mod", width, height );
   load_image( image, width, height, "./palette/hsl-1-025.tga" ); extract_red< ::color::constant::red::channel_number >(  image,"./extract/extract-hsl-1-025-red-ch", width, height ); extract_red< ::color::constant::red::hsl_star_number >(  image,"./extract/extract-hsl-1-025-red-mod", width, height );
   load_image( image, width, height, "./palette/hsl-1-050.tga" ); extract_red< ::color::constant::red::channel_number >(  image,"./extract/extract-hsl-1-050-red-ch", width, height ); extract_red< ::color::constant::red::hsl_star_number >(  image,"./extract/extract-hsl-1-050-red-mod", width, height );
   load_image( image, width, height, "./palette/hsl-1-075.tga" ); extract_red< ::color::constant::red::channel_number >(  image,"./extract/extract-hsl-1-075-red-ch", width, height ); extract_red< ::color::constant::red::hsl_star_number >(  image,"./extract/extract-hsl-1-075-red-mod", width, height );
   load_image( image, width, height, "./palette/hsl-1-100.tga" ); extract_red< ::color::constant::red::channel_number >(  image,"./extract/extract-hsl-1-100-red-ch", width, height ); extract_red< ::color::constant::red::hsl_star_number >(  image,"./extract/extract-hsl-1-100-red-mod", width, height );

   load_image( image, width, height, "./palette/hsl-1-000.tga" ); extract_green< ::color::constant::green::channel_number >(  image,"./extract/extract-hsl-1-000-green-ch", width, height ); extract_green< ::color::constant::green::hsl_star_number >(  image,"./extract/extract-hsl-1-000-green-mod", width, height );
   load_image( image, width, height, "./palette/hsl-1-025.tga" ); extract_green< ::color::constant::green::channel_number >(  image,"./extract/extract-hsl-1-025-green-ch", width, height ); extract_green< ::color::constant::green::hsl_star_number >(  image,"./extract/extract-hsl-1-025-green-mod", width, height );
   load_image( image, width, height, "./palette/hsl-1-050.tga" ); extract_green< ::color::constant::green::channel_number >(  image,"./extract/extract-hsl-1-050-green-ch", width, height ); extract_green< ::color::constant::green::hsl_star_number >(  image,"./extract/extract-hsl-1-050-green-mod", width, height );
   load_image( image, width, height, "./palette/hsl-1-075.tga" ); extract_green< ::color::constant::green::channel_number >(  image,"./extract/extract-hsl-1-075-green-ch", width, height ); extract_green< ::color::constant::green::hsl_star_number >(  image,"./extract/extract-hsl-1-075-green-mod", width, height );
   load_image( image, width, height, "./palette/hsl-1-100.tga" ); extract_green< ::color::constant::green::channel_number >(  image,"./extract/extract-hsl-1-100-green-ch", width, height ); extract_green< ::color::constant::green::hsl_star_number >(  image,"./extract/extract-hsl-1-100-green-mod", width, height );

   load_image( image, width, height, "./palette/hsl-1-000.tga" ); extract_blue< ::color::constant::blue::channel_number >(  image,"./extract/extract-hsl-1-000-blue-ch", width, height ); extract_blue< ::color::constant::blue::hsl_star_number >(  image,"./extract/extract-hsl-1-000-blue-mod", width, height );
   load_image( image, width, height, "./palette/hsl-1-025.tga" ); extract_blue< ::color::constant::blue::channel_number >(  image,"./extract/extract-hsl-1-025-blue-ch", width, height ); extract_blue< ::color::constant::blue::hsl_star_number >(  image,"./extract/extract-hsl-1-025-blue-mod", width, height );
   load_image( image, width, height, "./palette/hsl-1-050.tga" ); extract_blue< ::color::constant::blue::channel_number >(  image,"./extract/extract-hsl-1-050-blue-ch", width, height ); extract_blue< ::color::constant::blue::hsl_star_number >(  image,"./extract/extract-hsl-1-050-blue-mod", width, height );
   load_image( image, width, height, "./palette/hsl-1-075.tga" ); extract_blue< ::color::constant::blue::channel_number >(  image,"./extract/extract-hsl-1-075-blue-ch", width, height ); extract_blue< ::color::constant::blue::hsl_star_number >(  image,"./extract/extract-hsl-1-075-blue-mod", width, height );
   load_image( image, width, height, "./palette/hsl-1-100.tga" ); extract_blue< ::color::constant::blue::channel_number >(  image,"./extract/extract-hsl-1-100-blue-ch", width, height ); extract_blue< ::color::constant::blue::hsl_star_number >(  image,"./extract/extract-hsl-1-100-blue-mod", width, height );

  if( false == load_image( image, width, height, "./palette/hsl-1-100.tga" ) )
   {
    std::cout << "Can not load" <<  "./palette/hsl-1-100.tga" << std::endl;
    return;
   }

  extract_color(  image,"./extract/extract-color-red",        width, height, ::color::constant::red_t{}         );
  extract_color(  image,"./extract/extract-color-lime",       width, height, ::color::constant::lime_t{}        );
  extract_color(  image,"./extract/extract-color-blue",       width, height, ::color::constant::blue_t{}        );
  extract_color(  image,"./extract/extract-color-magenta",    width, height, ::color::constant::magenta_t{}     );
  extract_color(  image,"./extract/extract-color-gold",       width, height, ::color::constant::gold_t{}        );
  extract_color(  image,"./extract/extract-color-aqua",       width, height, ::color::constant::aqua_t{}        );
  extract_color(  image,"./extract/extract-color-aquamarine", width, height, ::color::constant::aquamarine_t{}  );
  extract_color(  image,"./extract/extract-color-azure",      width, height, ::color::constant::azure_t{}       );
  extract_color(  image,"./extract/extract-color-beige",      width, height, ::color::constant::beige_t{}       );
  extract_color(  image,"./extract/extract-color-bisque",     width, height, ::color::constant::bisque_t{}      );
  extract_color(  image,"./extract/extract-color-gray",       width, height, ::color::constant::gray_t<1,1>{}   );
 }