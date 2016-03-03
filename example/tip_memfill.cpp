#include <iostream>
#include <iomanip>
#include <algorithm>

#include "color/color.hpp"

#include <publib.h>

int main(int argc, char const *argv[])
 {
  std::vector< std::array< double, 3 > >  image( 1000 * 1000 );

  // ---- In here fill image with RGB data ----

  ::color::rgb<double> t( ::color::constant:tirquise() );


  // Guarantee by design of this library that ::color::ABC<double> is represented in memory only as std::array<double>
  // Guarantee by design of  std::array<double> that we will have 3 consecutive doubles 
  memfill( image.data(),  sizeof( std::array< double, 3 > ) * image.size(), &t, sizeof( t ) );

  return 0;
 }