#include <fstream>

#include "./image.hpp"

#include "./targa.hpp"

void save_image24( std::string const& name, bgr_image_type const& image, std::size_t const& width, std::size_t const& height )
 {
  targa_header_struct header;

  targa_make_header24( width, height, header );

   {
    std::ofstream of( name.c_str(), std::ios_base::binary);
    of.write((const char *)header, 18);
    of.write((const char *)image.data(), image.size() * bgr_image_type::value_type::size() );
   }
 }

void save_image_gray( std::string const& name, gray_image_type const& image, std::size_t const& width, std::size_t const& height )
 {
  targa_header_struct header;

  targa_make_gray_header( width, height, header );

  std::ofstream of( name, std::ios_base::binary);
  of.write((const char *)header, 18);
  of.write((const char *)image.data(), image.size() * 1 );
 }
