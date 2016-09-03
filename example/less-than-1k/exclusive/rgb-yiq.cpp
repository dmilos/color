#include "color/rgb.hpp"
#include "color/yiq.hpp"


int main( int argc, char *argv[] )
 {






    color::rgb< double >       r { ::color::constant::lavender_type{}  };



    color::yiq< double >      yi { ::color::constant::salmon_type{}    };



  r = yi;

  return EXIT_SUCCESS;
 }