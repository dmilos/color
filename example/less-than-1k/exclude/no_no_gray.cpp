#include <iostream>
#include <iomanip>

#define COLOR_EXCLUDE_MODEL_GRAY
#include "color/color.hpp"

#define PRINT(cc) std::cout << cc[0] << ", " << cc[1] << ", " << cc[2] << std::endl;

int main( int argc, char *argv[] )
 {
  ::color::rgb< double >    r { ::color::constant::lavender_type{} }; //!< Must exist!

  ::color::cmy< double >  c;
  ::color::cmyk<double>  ck;
  ::color::gray<double>   g;//!< This will NOT produce Error
  ::color::hsi<double>   hi;
  ::color::hsl<double>   hl;
  ::color::hsv<double>   hv;
  ::color::yiq<double>   yi;
  ::color::yuv<double>   yu;
  ::color::YCgCo<double> YC;
  ::color::YDbDr<double> YD;
  ::color::YPbPr<double> YP;

   c = r; r =  c;  PRINT(r);
  ck = r; r = ck;  PRINT(r);
  hi = r; r = hi;  PRINT(r);
  hl = r; r = hl;  PRINT(r);
  hv = r; r = hv;  PRINT(r);
  yi = r; r = yi;  PRINT(r);
  yu = r; r = yu;  PRINT(r);
  YC = r; r =  YC; PRINT(r);
  YD = r; r =  YD; PRINT(r);
  YP = r; r =  YP; PRINT(r);

  return EXIT_SUCCESS;
 }
