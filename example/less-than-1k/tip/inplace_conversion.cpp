#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <array>


#include "color/color.hpp"

int main(int argc, char const *argv[])
 {
  std::vector< std::array< double, 3 > >  image( 1000 * 1000 );

  // ---- In here fill image with RGB data ----

  //Guarantee by design of this library that ::color::ABC<double> is represented in memory only as std::array<double>
  ::color::rgb<double> *r = reinterpret_cast< ::color::rgb<double> *>( image.data() );
  ::color::hsv<double> *h = reinterpret_cast< ::color::hsv<double> *>( image.data() );

  std::transform( r, r + image.size(), h, []( ::color::rgb<double> const& r ) { return ::color::hsv<double>(r); } );

  return 0;
 }
