#ifndef image_mini_lib
#define image_mini_lib


#include <vector>
#include <cstdint>
#include <istream>

#include "color/color.hpp"

#include "./targa.hpp"

typedef ::color::gray< std::uint8_t  > gray_color_type;
typedef ::color::bgr< std::uint8_t  > bgr_color_type;

typedef std::vector< bgr_color_type > bgr_image_type;
typedef std::vector< gray_color_type > gray_image_type;

void save_image24(    std::string const& name,   bgr_image_type const& image, std::size_t const& width, std::size_t const& height );
void save_image_gray( std::string const& name,  gray_image_type const& image, std::size_t const& width, std::size_t const& height );


bool targa_image_load( targa_header_struct &header, bgr_image_type & image, std::istream     & stream );
bool targa_image_load( targa_header_struct &header, bgr_image_type & image, std::string const& name   );

bool load_image( bgr_image_type & image, int &width, int &height, std::string const& name );

#endif

