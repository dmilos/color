#include "color/rgb.hpp"
#include "color/cmyk.hpp"


int main( int argc, char *argv[] )
 {
  color::cmy< double >       c;
  color::cmyk<double >      ck;
  color::rgb< double >       r;
  color::hsl< double >      hl;
  color::hsv< double >      hv;
  color::hsi< double >      hi;
  color::yiq< double >      yi;
  color::yuv< double >   yu601;
  color::YPbPr<double >  ypbpr;
  color::YDbDr<double >  ydbdr;
  color::YCgCo<double >  ycgco;

  r = ck;

  return EXIT_SUCCESS;
 }