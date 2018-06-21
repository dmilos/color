#include <iomanip>
#include <iostream>

#include "color/color.hpp"

#include "../print.hpp"

template< typename category_name >
 void test_generic_get()
  {
   std::cout << std::endl;
   std::cout << "{{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{"<< std::endl;
   std::cout << "begin - " << __FUNCTION__ ;
   std::cout << "  < " << typeid( category_name ).name()   << " > ()" << std::endl;
   std::cout << std::endl;

   typedef color::model< category_name > model_type;
   typedef typename model_type::component_type     component_type;

   model_type   c;
   c  = color::constant::black_t{};
   c =  color::constant::gray50_t{};

   color::get::alpha     ( c ) ;
   color::get::black     ( c ) ;
   color::get::blue      ( c ) ;
   color::get::chroma    ( c ) ;
   color::get::cyan      ( c ) ;
   color::get::gray      ( c ) ;
   color::get::green     ( c ) ;
   color::get::hue       ( c ) ;
   color::get::inphase   ( c ) ;

   color::get::lightness ( c ) ;
   color::get::luma      ( c ) ;
   color::get::luminance ( c ) ;
   color::get::magenta   ( c ) ;
   color::get::quadrature( c ) ;
   color::get::red       ( c ) ;
   color::get::saturation( c ) ;
   color::get::white     ( c ) ;
   color::get::yellow    ( c ) ;

   std::cout << std::endl;
   std::cout << "end - " << __FUNCTION__ ;
   std::cout << "  < " << typeid( category_name ).name()   << " > ()" << std::endl;
   std::cout << "}}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}}" << std::endl;
 }

