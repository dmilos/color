#include <iostream>
#include <iomanip>
#include "color/color.hpp"


template < template<typename> class color_name >
void print_sizeof()
 {

  typedef color_name< bool                  > b_type;
  typedef color_name< float                 > f_type;
  typedef color_name< double                > d_type;
  typedef color_name< long double           > dl_type;
  typedef color_name< std::uint8_t          > u8_type;
  typedef color_name< std::uint16_t         > u16_type;
  typedef color_name< color::type::uint24_t > u24_type;
  typedef color_name< std::uint32_t         > u32_type;
  typedef color_name< color::type::uint48_t > u48_type;
  typedef color_name< std::uint64_t         > u64_type;

  std::cout <<          sizeof( b_type   ) << ",";

  std::cout << " - " << sizeof( u8_type  ) << ",";
  std::cout << " - " << sizeof( u16_type ) << ",";
  std::cout << " - " << sizeof( u24_type ) << ",";
  std::cout << " - " << sizeof( u32_type ) << ",";
  std::cout << " - " << sizeof( u48_type ) << ",";
  std::cout << " - " << sizeof( u64_type ) << ",";

  std::cout << " - " << sizeof( f_type   ) << ",";
  std::cout << " - " << sizeof( d_type   ) << ",";
  std::cout << " - " << sizeof( dl_type  ) << "";

 }

void check_sizeof()
 {
  std::cout << "rgb     "; print_sizeof<::color::rgb>();  std::cout << std::endl;
  std::cout << "cmy     "; print_sizeof<::color::cmy>();  std::cout << std::endl;
  std::cout << "cmyk    "; print_sizeof<::color::cmyk>(); std::cout << std::endl;
  std::cout << "gray    "; print_sizeof<::color::gray>(); std::cout << std::endl;
  std::cout << "hsl     "; print_sizeof<::color::hsl>();  std::cout << std::endl;
  std::cout << "hsv     "; print_sizeof<::color::hsv>();  std::cout << std::endl;
  std::cout << "yiq     "; print_sizeof<::color::yiq>();  std::cout << std::endl;
  std::cout << "yuv     "; print_sizeof<::color::yuv>();  std::cout << std::endl;
 }
