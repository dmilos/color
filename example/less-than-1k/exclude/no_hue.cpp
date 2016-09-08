#include <iostream>
#include <iomanip>

#define COLOR_EXCLUDE_MODEL_HSV
#define COLOR_EXCLUDE_MODEL_HSI
#define COLOR_EXCLUDE_MODEL_HSL
#include "color/color.hpp"

#define PRINT(cc) std::cout<<cc[0]<< ", "<<cc[1]<<", "<<cc[2]<<std::endl;

using namespace color;

int main( int argc, char *argv[] )
 {
  rgb<double>    r { constant::lavender_type{} }; //!< Must exist!

  cmy< double >  c;
  cmyk<double>  ck;
  gray<double>   g;
//hsi<double>   hi;//!< This will produce Error
//hsl<double>   hl;//!< This will produce Error
//hsv<double>   hv;//!< This will produce Error
  yiq<double>   yi;
  yuv<double>   yu;
  YCgCo<double> YC;
  YDbDr<double> YD;
  YPbPr<double> YP;

   c = r; r =  c; PRINT(r);
  ck = r; r = ck; PRINT(r);
//hi = r; r = hi; PRINT(r);
//hl = r; r = hl; PRINT(r);
//hv = r; r = hv; PRINT(r);
  yi = r; r = yi; PRINT(r);
  yu = r; r = yu; PRINT(r);
  YC = r; r = YC; PRINT(r);
  YD = r; r = YD; PRINT(r);
  YP = r; r = YP; PRINT(r);

  return EXIT_SUCCESS;
 }
