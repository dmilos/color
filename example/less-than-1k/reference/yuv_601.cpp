#include <iostream>
#include <iomanip>

#include "color/color.hpp"

using namespace std;
using namespace color;


#define print(c) cout << c[0] << ", " << c[1] << ", " << c[2] << endl

int main( int argc, char *argv[] )
 {
  yuv<uint8_t    , constant::yuv::BT_601_entity >  c1( constant::aqua_t{} );
  yuv<uint16_t   , constant::yuv::BT_601_entity >  c2( constant::aqua_t{} );
  yuv<uint32_t   , constant::yuv::BT_601_entity >  c3( constant::aqua_t{} );
  yuv<uint64_t   , constant::yuv::BT_601_entity >  c4( constant::aqua_t{} );
  yuv<float      , constant::yuv::BT_601_entity >  c5( constant::aqua_t{} );
  yuv<double     , constant::yuv::BT_601_entity >  c6( constant::aqua_t{} );
  yuv<long double, constant::yuv::BT_601_entity >  c7( constant::aqua_t{} );

  print(c1);
  print(c2);
  print(c3);
  print(c4);
  print(c5);
  print(c6);
  print(c7);

  return EXIT_SUCCESS;
 }
