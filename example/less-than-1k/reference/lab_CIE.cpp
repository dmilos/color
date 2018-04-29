#include <iostream>
#include <iomanip>

#include "color/color.hpp"

using namespace std;
using namespace color;
using namespace color::constant;
using namespace color::constant::lab;


#define print(c) cout << c[0] << ", " << c[1] << ", " << c[2] << endl;

int main( int argc, char *argv[] )
 {
  lab<uint8_t     , CIE_entity >  c1( aqua_t{} );
  lab<uint16_t    , CIE_entity >  c2( aqua_t{} );
  lab<uint32_t    , CIE_entity >  c3( aqua_t{} );
  lab<uint64_t    , CIE_entity >  c4( aqua_t{} );
  lab<float       , CIE_entity >  c5( aqua_t{} );
  lab<double      , CIE_entity >  c6( aqua_t{} );
  lab<long double , CIE_entity >  c7( aqua_t{} );

  print(c1)
  print(c2)
  print(c3)
  print(c4)
  print(c5)
  print(c6)
  print(c7)

  return EXIT_SUCCESS;
 }
