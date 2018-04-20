#include <iostream>
#include <iomanip>

#include "color/color.hpp"

using namespace std;
using namespace color;


#define print(c) cout << c[0] << ", " << c[1] << ", " << c[2] << endl

int main( int argc, char *argv[] )
 {
  YPbPr<uint8_t    , constant::YPbPr::BT_601_entity >  c1( constant::aqua_t{} );
  YPbPr<uint16_t   , constant::YPbPr::BT_601_entity >  c2( constant::aqua_t{} );
  YPbPr<uint32_t   , constant::YPbPr::BT_601_entity >  c3( constant::aqua_t{} );
  YPbPr<uint64_t   , constant::YPbPr::BT_601_entity >  c4( constant::aqua_t{} );
  YPbPr<float      , constant::YPbPr::BT_601_entity >  c5( constant::aqua_t{} );
  YPbPr<double     , constant::YPbPr::BT_601_entity >  c6( constant::aqua_t{} );
  YPbPr<long double, constant::YPbPr::BT_601_entity >  c7( constant::aqua_t{} );

  print(c1);
  print(c2);
  print(c3);
  print(c4);
  print(c5);
  print(c6);
  print(c7);

  return EXIT_SUCCESS;
 }
