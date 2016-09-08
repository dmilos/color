#include <iostream>
#include <iomanip>

#define COLOR_EXCLUDE_MODEL_YCgCo
#define COLOR_EXCLUDE_MODEL_YDbDr
#define COLOR_EXCLUDE_MODEL_YIQ
#define COLOR_EXCLUDE_MODEL_YPbPr
#define COLOR_EXCLUDE_MODEL_YUV

#include "color/color.hpp"

#define PRINT(c) std::cout<<c[0]<<", "<<c[1]<<", "<<c[2]<<std::endl;

using namespace color;

int main( int ac,char *v[])
 {
  rgb<double> r { constant::lavender_type{} }; //!< Must exist!

  cmy< double >  c;
  cmyk<double>  ck;
  gray<double>   g;
  hsi<double>   hi;
  hsl<double>   hl;
  hsv<double>   hv;
//yiq<double>   yi;//!< Error
//yuv<double>   yu;//!< Error
//YCgCo<double> YC;//!< Error
//YDbDr<double> YD;//!< Error
//YPbPr<double> YP;//!< Error

   c = r; r =  c; PRINT(r);
  ck = r; r = ck; PRINT(r);
  hi = r; r = hi; PRINT(r);
  hl = r; r = hl; PRINT(r);
  hv = r; r = hv; PRINT(r);
//yi = r; r = yi; PRINT(r);
//yu = r; r = yu; PRINT(r);
//YC = r; r = YC; PRINT(r);
//YD = r; r = YD; PRINT(r);
//YP = r; r = YP; PRINT(r);

  return EXIT_SUCCESS;
 }
