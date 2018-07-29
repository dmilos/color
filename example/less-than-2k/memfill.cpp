#include <algorithm>
#include <cstring>
#include <cstddef>
#include <vector>
#include <array>

#include "color/color.hpp"

void memfill( char *buffer, std::size_t bufsize, const void *pattern, std::size_t const& patsize )
 {
  for( ; patsize < bufsize; buffer += patsize, bufsize -= patsize)
   {
    memcpy( buffer, pattern, patsize );
   }
  memcpy( buffer, pattern, bufsize );
}

int main(int argc, char const *argv[])
 {
  std::vector< std::array< double, 3 > >  image( 1000 * 1000 );

  // ---->>> In here we somehow fill image with useful RGB data <<<----

  ::color::rgb<double> sample( ::color::constant::turquoise_t{} );

  // Guarantee by design of this library that ::color::ABC<double> is represented in memory only with std::array<double>
  // Guarantee by design of ISO C++ standard that std::array<double> will have only 3 consecutive doubles
  memfill( reinterpret_cast<char*>( image.data()),  sizeof( std::array< double, 3 > ) * image.size(), &sample, sizeof( sample ) );

  //This will produce error and it is too Object oriented
  // std::fill( image.begin(), image.end(), sample );

  return EXIT_SUCCESS;
 }
