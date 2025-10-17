#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  using namespace color;

  rgba<std::uint8_t>  A_1( rgba<double>( { 1,0.2,0.3,0.4 } )  );
  rgb<std::uint8_t>   A_2( rgba<double>( { 1,0.2,0.3,0.4 } )  );
  rgba<std::uint8_t>  A_3( rgb<double>( { 1,0.2,0.3 } ) );
  rgb<std::uint8_t>   A_4( rgb<double>( { 1,0.2,0.3 } ) );

  rgba<double>  B_1( rgba<double>( { 1,0.2,0.3,0.4 } )  );
  rgb<double>   B_2( rgba<double>( { 1,0.2,0.3,0.4 } )  );
  rgba<double>  B_3( rgb<double>( { 1,0.2,0.3 } ) );
  rgb<double>   B_4( rgb<double>( { 1,0.2,0.3 } ) );


  bgra<std::uint8_t>  C_1( bgra<double>( { 1,0.2,0.3,0.4 } )  );
  bgr<std::uint8_t>   C_2( bgra<double>( { 1,0.2,0.3,0.4 } )  );
  bgra<std::uint8_t>  C_3( bgr<double>( { 1,0.2,0.3 } ) );
  bgr<std::uint8_t>   C_4( bgr<double>( { 1,0.2,0.3 } ) );

  bgra<double>  D_1( bgra<double>( { 1,0.2,0.3,0.4 } )  );
  bgr<double>   D_2( bgra<double>( { 1,0.2,0.3,0.4 } )  );
  bgra<double>  D_3( bgr<double>( { 1,0.2,0.3 } ) );
  bgr<double>   D_4( bgr<double>( { 1,0.2,0.3 } ) );


  bgra<std::uint8_t>  E_1( rgba<double>( { 1,0.2,0.3,0.4 } )  );
  bgr<std::uint8_t>   E_2( rgba<double>( { 1,0.2,0.3,0.4 } )  );
  bgra<std::uint8_t>  E_3( rgb<double>( { 1,0.2,0.3 } ) );
  bgr<std::uint8_t>   E_4( rgb<double>( { 1,0.2,0.3 } ) );

  bgra<double>  F_1( rgba<double>( { 1,0.2,0.3,0.4 } )  );
  bgr<double>   F_2( rgba<double>( { 1,0.2,0.3,0.4 } )  );
  bgra<double>  F_3( rgb<double>( { 1,0.2,0.3 } ) );
  bgr<double>   F_4( rgb<double>( { 1,0.2,0.3 } ) );

  return EXIT_SUCCESS;
 }


