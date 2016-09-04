#include <iostream>
#include <iomanip>

#define COLOR_EXCLUDE_MODEL_HSI
#include "color/color.hpp"

#define PRINT(cc) std::cout << cc[0] << ", " << cc[1] << ", " << cc[2] << std::endl;

int main( int argc, char *argv[] )
 {
  ::color::rgb< double >    r { ::color::constant::lavender_type{} }; //!< Must exist!

  ::color::cmy< double >    c; //!< OK
  ::color::cmyk< double >  ck; //!< OK
  ::color::gray< double >   g; //!< OK
//::color::hsi< double >   hi; //!< This will produce Error
  ::color::hsl< double >   hl; //!< OK
  ::color::hsv< double >   hv; //!< OK
  ::color::yiq< double >   yi; //!< OK
  ::color::yuv< double >   yu; //!< OK

   c = r; r =  c;  PRINT(r);
  ck = r; r = ck;  PRINT(r);
//hi = r; r = hi;  PRINT(r);
  hl = r; r = hl;  PRINT(r);
  hv = r; r = hv;  PRINT(r);
  yi = r; r = yi;  PRINT(r);
  yu = r; r = yu;  PRINT(r);
   g = r; r =  g;  PRINT(r);

  return EXIT_SUCCESS;
 }
