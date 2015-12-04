#include <iomanip>
#include <iostream>

#include "../../src/color.hpp"

#include "../print.hpp"

template< typename category_name >
 void test_get()
  {
   std::cout << std::endl;
   std::cout << "{{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{"<< std::endl;
   std::cout << "  function - " << __FUNCTION__ << std::endl;
   std::cout << "  type - " << typeid( category_name ).name()   << std::endl;
   std::cout << std::endl;

   typedef color::_internal::model< category_name > model_type;
   typedef typename model_type::component_type     component_type;

   model_type   c;
   color::make::black(c);
   color::make::gray50(c);

   std::cout << "  ( double )color::get::alpha(c)     == "<< ( double )color::get::alpha(c)     << std::endl;
   std::cout << "  ( double )color::get::blue( c )    == "<< ( double )color::get::blue( c )    << std::endl;
   std::cout << "  ( double )color::get::cyan( c )    == "<< ( double )color::get::cyan( c )    << std::endl;
   std::cout << "  ( double )color::get::gray( c )    == "<< ( double )color::get::gray( c )    << std::endl;
   std::cout << "  ( double )color::get::green( c )   == "<< ( double )color::get::green( c )   << std::endl;
   std::cout << "  ( double )color::get::magenta( c ) == "<< ( double )color::get::magenta( c ) << std::endl;
   std::cout << "  ( double )color::get::red( c )     == "<< ( double )color::get::red( c )     << std::endl;
   std::cout << "  ( double )color::get::yellow( c )  == "<< ( double )color::get::yellow( c )  << std::endl;

   std::cout << std::endl;
   std::cout << "  function - " << __FUNCTION__ << std::endl;
   std::cout << "  type - " << typeid(category_name).name() << std::endl;
   std::cout << "}}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}}" << std::endl;
 }

