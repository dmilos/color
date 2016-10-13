#include <vector>
#include <cstdint>
#include "color/color.hpp"


typedef ::color::gray< std::uint8_t  > gray_color_type;
typedef ::color::bgr< std::uint8_t  > bgr_color_type;

typedef std::vector< bgr_color_type > bgr_image_type;
typedef std::vector< gray_color_type > gray_image_type;

void save_image24(    std::string const& name,   bgr_image_type const& image, std::size_t const& width, std::size_t const& height );
void save_image_gray( std::string const& name,  gray_image_type const& image, std::size_t const& width, std::size_t const& height );