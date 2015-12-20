#include <iostream>
#include <iomanip>

#include "color/color.hpp"

void check_precision()
 {
  color::rgb<long double > l;
  color::yiq<long double > r;

  long double e0 = 0;
  long double e1 = 0;
  long double e2 = 0;

  for( long double c0=0; c0 <= 1.0; c0 += 0.01  )
   for( long double c1=0; c1 <= 1.0; c1 += 0.01  )
    for( long double c2=0; c2 <= 1.0; c2 += 0.01  )
     {
      l.set<0>( c0 );
      l.set<1>( c1 );
      l.set<2>( c2 );

      r = l;

      l = r;

      if( e0 < fabs( l.get<0>() - c0 ) ) 
       {
        e0 = fabs( l.get<0>() - c0 );
       }

      if( e1 < fabs( l.get<1>() - c1 ) ) 
       {
        e1 = fabs( l.get<1>() - c1 );
       }

      if( e2 < fabs( l.get<2>() - c2 ) )
       {
        e2 = fabs( l.get<2>() - c2 );
       }
     }

  std::cout << "e0: " << e0 << std::endl;
  std::cout << "e1: " << e1 << std::endl;
  std::cout << "e2: " << e2 << std::endl;
 }



// rgb vs HSV e0: 0.998316
// rgb vs HSV e1: 1
// rgb vs HSV e2: 0.99

// rgb vs YIQ: e0: 0.69399
// rgb vs YIQ: e1: 1.57976
// rgb vs YIQ: e2: 1.19934

// rgb vs xyz e0: e0: 7.77156e-016
// rgb vs xyz e1: e1: 4.44089e-016
// rgb vs xyz e2: e2: 1.11022e-016


// rgb vs CMY e0: 5.55112e-017
// rgb vs CMY e1: 5.55112e-017
// rgb vs CMY e2: 5.55112e-017

// rgb vs CMY e0: 1.11022e-016
// rgb vs CMY e1: 1.11022e-016
// rgb vs CMY e2: 1.11022e-016

// rgb vs hsl e0: 1.22125e-015
// rgb vs hsl e1: 6.66134e-016
// rgb vs hsl e2: 1.22125e-015

// cmy vs CMYK  e0: 1.11022e-016
// cmy vs CMYK  e1: 1.11022e-016
// cmy vs CMYK  e2: 1.11022e-016

// rgb vs YUV e0: e0: 2.22045e-016
// rgb vs YUV e1: e1: 4.44089e-016
// rgb vs YUV e2: e2: 2.22045e-016
