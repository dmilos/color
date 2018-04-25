#include <fstream>

#include "./image.hpp"

#include "./targa.hpp"

void save_image24( std::string const& name, bgr_image_type const& image, std::size_t const& width, std::size_t const& height )
 {
  targa_header_struct header;

  targa_make_header24( int( width ), int(height), header );

   {
    std::ofstream of( name.c_str(), std::ios_base::binary);
    of.write((const char *)header, 18);
    of.write((const char *)image.data(), image.size() * bgr_image_type::value_type::size() );
   }
 }

void save_image_gray( std::string const& name, gray_image_type const& image, std::size_t const& width, std::size_t const& height )
 {
  targa_header_struct header;

  targa_make_gray_header( int(width), int(height), header );

  std::ofstream of( name, std::ios_base::binary);
  of.write((const char *)header, 18);
  of.write((const char *)image.data(), image.size() * 1 );
 }

bool targa_image_load( targa_header_struct &header, bgr_image_type & image, std::string const& name )
 {
  std::ifstream stream( name.c_str(), std::ios_base::binary );

  if( true == stream.fail() )
   {
    return false;
   }

  return targa_image_load( header, image, stream );
 }

bool targa_image_load( targa_header_struct &header,  bgr_image_type & image, std::istream & stream )
 {
  if( false == targa_load( header, stream ) )
   {
    return false;
   }

  int depth  = targa_get_depth(  header );
  int height = targa_get_width(  header );
  int width  = targa_get_height( header );

  image.resize( width * height );

  stream.read( reinterpret_cast<char *>( image.data() ), width * height * (depth/8) );
  return true;
 }

bool load_image( bgr_image_type & image, int &width, int &height, std::string const& name )
 {
  std::ifstream ifs( name.c_str(), std::ios_base::binary );

  if( false == ifs.is_open() )
   {
    return false;
   }

  targa_header_struct header;

  ifs.read( (char*)header, 18 );

              width  = targa_get_width( header );
              height = targa_get_height( header );
  std::size_t depth  = targa_get_depth( header );

  image.resize( width * height );

  ifs.read( reinterpret_cast<char *>( image.data() ), width * height * (depth/8) );

  return true;
 }

