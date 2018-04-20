#include <iostream>
#include <iomanip>

#include "color/color.hpp"

using namespace std;
using namespace color;


#define print(c) cout << c[0] << ", " << c[1] << ", " << c[2] << endl;

int main( int argc, char *argv[] )
 {
  lms<uint8_t    , constant::lms::MCAT02_entity >  c1( constant::aqua_t{} );
  lms<uint16_t   , constant::lms::MCAT02_entity >  c2( constant::aqua_t{} );
  lms<uint32_t   , constant::lms::MCAT02_entity >  c3( constant::aqua_t{} );
  lms<uint64_t   , constant::lms::MCAT02_entity >  c4( constant::aqua_t{} );
  lms<float      , constant::lms::MCAT02_entity >  c5( constant::aqua_t{} );
  lms<double     , constant::lms::MCAT02_entity >  c6( constant::aqua_t{} );
  lms<long double, constant::lms::MCAT02_entity >  c7( constant::aqua_t{} );

  print(c1)
  print(c2)
  print(c3)
  print(c4)
  print(c5)
  print(c6)
  print(c7)

  return EXIT_SUCCESS;
 }
