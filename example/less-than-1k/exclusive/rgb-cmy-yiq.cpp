#include "color/rgb.hpp"
#include "color/cmy.hpp"
#include "color/yiq.hpp"


int main( int argc, char *argv[] )
 {
    color::cmy< double >       c { ::color::constant::beige_type{}     };





    color::rgb< double >       r { ::color::constant::lavender_type{}  };



    color::yiq< double >      yi { ::color::constant::salmon_type{}    };


  r  = c;
  r  = yi;
  c  = yi;
  c  = r;
  yi = r;
  yi = c; 

  return EXIT_SUCCESS;
 }