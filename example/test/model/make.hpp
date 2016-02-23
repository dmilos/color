#include <iomanip>
#include <iostream>

#include "../print.hpp"

template< typename category_name >
 void test_make()
  {
   std::cout << "{{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{"<< std::endl;
   std::cout << "function - " << __FUNCTION__ << std::endl;
   std::cout << "type - " << typeid( category_name ).name()   << std::endl;
   std::cout << std::endl;

   typedef color::model< category_name > model_type;
   typedef typename model_type::component_type     component_type;

   model_type   c;           std::cout << "  model_type   c";           print( c ); std::cout <<";"<< std::endl;

   color::make::aqua       ( c ); std::cout << "  color::make::aqua        ( c ); ";  print( c ); std::cout << std::endl;
   color::make::black      ( c ); std::cout << "  color::make::black       ( c ); ";  print( c ); std::cout << std::endl;
   color::make::blue       ( c ); std::cout << "  color::make::blue        ( c ); ";  print( c ); std::cout << std::endl;
   color::make::cyan       ( c ); std::cout << "  color::make::cyan        ( c ); ";  print( c ); std::cout << std::endl;
   color::make::fuchsia    ( c ); std::cout << "  color::make::fuchsia     ( c ); ";  print( c ); std::cout << std::endl;
   color::make::gray50     ( c ); std::cout << "  color::make::gray50      ( c ); ";  print( c ); std::cout << std::endl;
   color::make::green      ( c ); std::cout << "  color::make::green       ( c ); ";  print( c ); std::cout << std::endl;
   color::make::lime       ( c ); std::cout << "  color::make::lime        ( c ); ";  print( c ); std::cout << std::endl;
   color::make::magenta    ( c ); std::cout << "  color::make::magenta     ( c ); ";  print( c ); std::cout << std::endl;
   color::make::maroon     ( c ); std::cout << "  color::make::maroon      ( c ); ";  print( c ); std::cout << std::endl;
   color::make::navy       ( c ); std::cout << "  color::make::navy        ( c ); ";  print( c ); std::cout << std::endl;
   color::make::olive      ( c ); std::cout << "  color::make::olive       ( c ); ";  print( c ); std::cout << std::endl;
   color::make::orange     ( c ); std::cout << "  color::make::orange      ( c ); ";  print( c ); std::cout << std::endl;
   color::make::purple     ( c ); std::cout << "  color::make::purple      ( c ); ";  print( c ); std::cout << std::endl;
   color::make::red        ( c ); std::cout << "  color::make::red         ( c ); ";  print( c ); std::cout << std::endl;
   color::make::silver     ( c ); std::cout << "  color::make::silver      ( c ); ";  print( c ); std::cout << std::endl;
   color::make::teal       ( c ); std::cout << "  color::make::teal        ( c ); ";  print( c ); std::cout << std::endl;
   color::make::violet     ( c ); std::cout << "  color::make::violet      ( c ); ";  print( c ); std::cout << std::endl;
   color::make::white      ( c ); std::cout << "  color::make::white       ( c ); ";  print( c ); std::cout << std::endl;
   color::make::yellow     ( c ); std::cout << "  color::make::yellow      ( c ); ";  print( c ); std::cout << std::endl;

   color::make::aquamarine ( c ); std::cout << "  color::make::aquamarine  ( c ); ";  print( c ); std::cout << std::endl;
   color::make::azure      ( c ); std::cout << "  color::make::azure       ( c ); ";  print( c ); std::cout << std::endl;
   color::make::beige      ( c ); std::cout << "  color::make::beige       ( c ); ";  print( c ); std::cout << std::endl;
   color::make::bisque     ( c ); std::cout << "  color::make::bisque      ( c ); ";  print( c ); std::cout << std::endl;
   color::make::brown      ( c ); std::cout << "  color::make::brown       ( c ); ";  print( c ); std::cout << std::endl;
   color::make::chocolate  ( c ); std::cout << "  color::make::chocolate   ( c ); ";  print( c ); std::cout << std::endl;
   color::make::coral      ( c ); std::cout << "  color::make::coral       ( c ); ";  print( c ); std::cout << std::endl;
   color::make::crimson    ( c ); std::cout << "  color::make::crimson     ( c ); ";  print( c ); std::cout << std::endl;
   color::make::gainsboro  ( c ); std::cout << "  color::make::gainsboro   ( c ); ";  print( c ); std::cout << std::endl;
   color::make::gold       ( c ); std::cout << "  color::make::gold        ( c ); ";  print( c ); std::cout << std::endl;
   color::make::indigo     ( c ); std::cout << "  color::make::indigo      ( c ); ";  print( c ); std::cout << std::endl;
   color::make::ivory      ( c ); std::cout << "  color::make::ivory       ( c ); ";  print( c ); std::cout << std::endl;
   color::make::khaki      ( c ); std::cout << "  color::make::khaki       ( c ); ";  print( c ); std::cout << std::endl;
   color::make::lavender   ( c ); std::cout << "  color::make::lavender    ( c ); ";  print( c ); std::cout << std::endl;
   color::make::linen      ( c ); std::cout << "  color::make::linen       ( c ); ";  print( c ); std::cout << std::endl;
   color::make::moccasin   ( c ); std::cout << "  color::make::moccasin    ( c ); ";  print( c ); std::cout << std::endl;
   color::make::orchid     ( c ); std::cout << "  color::make::orchid      ( c ); ";  print( c ); std::cout << std::endl;
   color::make::peru       ( c ); std::cout << "  color::make::peru        ( c ); ";  print( c ); std::cout << std::endl;
   color::make::pink       ( c ); std::cout << "  color::make::pink        ( c ); ";  print( c ); std::cout << std::endl;
   color::make::plum       ( c ); std::cout << "  color::make::plum        ( c ); ";  print( c ); std::cout << std::endl;
   color::make::salmon     ( c ); std::cout << "  color::make::salmon      ( c ); ";  print( c ); std::cout << std::endl;
   color::make::sienna     ( c ); std::cout << "  color::make::sienna      ( c ); ";  print( c ); std::cout << std::endl;
   color::make::snow       ( c ); std::cout << "  color::make::snow        ( c ); ";  print( c ); std::cout << std::endl;
   color::make::tan        ( c ); std::cout << "  color::make::tan         ( c ); ";  print( c ); std::cout << std::endl;
   color::make::thistle    ( c ); std::cout << "  color::make::thistle     ( c ); ";  print( c ); std::cout << std::endl;
   color::make::tomato     ( c ); std::cout << "  color::make::tomato      ( c ); ";  print( c ); std::cout << std::endl;
   color::make::turquoise  ( c ); std::cout << "  color::make::turquoise   ( c ); ";  print( c ); std::cout << std::endl;
   color::make::wheat      ( c ); std::cout << "  color::make::wheat       ( c ); ";  print( c ); std::cout << std::endl;

   std::cout << std::endl;
   std::cout << "function - " << __FUNCTION__ << std::endl;
   std::cout << "type - " << typeid(category_name).name() << std::endl;
   std::cout << "}}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}}" << std::endl;
 }

