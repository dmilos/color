#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <array>
#include <cstring>

#include "color/color.hpp"

int main(int argc, char const *argv[])
 {
  std::vector< std::array< std::uint8_t, 3 > >  image( 1000 * 1000 );

  // ---- In here fill image with RGB data ----

  memset ( image.data(), 0 , 3 * image.size() );

  return 0;
 }
 