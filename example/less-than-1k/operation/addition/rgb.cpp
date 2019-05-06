#include <iostream>
#include <iomanip>

#include "color/color.hpp"

using namespace std;
using namespace color;

int main( int argc, char *argv[] )
 {
  //!< Instead of double you may put: std::uint16_t, std::uint32_t, std::uint64_t, float, double, long double
  typedef rgb<double> color_t; 
  color_t a{ constant::orange_t{} };
  color_t b{ constant::lime_t{} };
  color_t r{ constant::blue_t{} };

  operation::addition( r, a );
  cout<< " addition( r , orange ) = ";
  cout << r[0] << ", " << r[1] << ", " << r[2] << endl;
  cout << endl;

  operation::addition( r, a, b );
  cout<< " addition( r, orange, lime ) = ";
  cout << r[0] << ", " << r[1] << ", " << r[2] << endl;
  cout << endl;

  return EXIT_SUCCESS;
 }
