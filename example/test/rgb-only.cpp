#include <iostream>
#include <iomanip>
#include "color/rgb.hpp"


int main_rgb_only( int argc, char const *argv[] )
//int main( int argc, char const *argv[] )
 {
  //color::cmy< double >       c { ::color::constant::beige_type{}     };
  //color::cmyk<double >      ck { ::color::constant::bisque_type{}    };
  //color::gray<double >       g { ::color::constant::chocolate_type{} };
  //color::hsl< double >      hl { ::color::constant::crimson_type{}   };
  //color::hsv< double >      hv { ::color::constant::gainsboro_type{} };
  //color::hsi< double >      hi { ::color::constant::gold_type{}      };
    color::rgb< double >       r { ::color::constant::lavender_type{}  };
  //color::YCgCo<double >  ycgco { ::color::constant::linen_type{}     };
  //color::YDbDr<double >  ydbdr { ::color::constant::orange_type{}    };
  //color::YPbPr<double >  ypbpr { ::color::constant::plum_type{}      };
  //color::yiq< double >      yi { ::color::constant::salmon_type{}    };
  //color::yuv< double >   yu601 { ::color::constant::tomato_type{}    };
 
  std::cout << r[0] << ", "<< r[1] << ", "<< r[2] << std::endl;

  return EXIT_SUCCESS;
 }

