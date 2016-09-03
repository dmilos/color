#include "color/rgb.hpp"
#include "color/yiq.hpp"
#include "color/yuv.hpp"

int main( int argc, char *argv[] )
 {






    color::rgb< double >       r { ::color::constant::lavender_type{}  };



    color::yiq< double >      yi { ::color::constant::salmon_type{}    };
    color::yuv< double >   yu601 { ::color::constant::tomato_type{}    };



  r = yi;
  r = yu601;

  return EXIT_SUCCESS;
 }