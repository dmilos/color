
#include "color/color.hpp"

int main(int argc, char const *argv[])
 {
  color::rgb<::color::type::split655_t>   r;                //!< One std::uint16_t in memory. 6 bits for red, 5 bits for green and 5 bits for blue.
  color::bgr<std::uint8_t>  b( ::color::constant::aqua_t{} ); //!< Three consecutive std::uint8_t. Ordered in memory: blue, green and red.
  color::yiq<std::uint8_t>  y( { 192, 64, 92 } );           //!< Three consecutive std::uint8_t. Ordered in memory: luma, inphase and quadrature.
  color::hsv<double>        h( { 90.0, 50.0, 60.0 } );      //!< This will pack ONLY three consecutive doubles in memory
  color::lab<float>         l( { 50.0, 0, 0 } );            //!< This will pack ONLY three consecutive floats in memory

  y = ::color::constant::turquoise_t{};  //!< Set 'y' to be turquoise.

  b = r; //!< Reformat and convert.
  r = b; //!< Reformat and convert in opposite direction.
  h = b; //!< Reformat and convert from BGR to HSV
  h = y; //!< Reformat and convert from YIQ to HSV
  l = y; //!< Reformat and convert from YIQ to LAB

  color::set::red( y, 127 ); //!< Set redness of YIQ

  ::color::operation::blend( y, 0.1, color::yiq<std::uint8_t>( r ) ); //!< Blend two colors for given alpha. Accumulation style.
  b = color::operation::mix( y, 0.5, color::yiq<std::uint8_t>( h ) ); //!< Blend two colors for given alpha. return style.
  return EXIT_SUCCESS;
 }
