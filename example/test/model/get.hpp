#include <iomanip>
#include <iostream>

#include "../print.hpp"

template< typename category_name >
 void test_get()
  {
   std::cout << std::endl;
   std::cout << "{{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{"<< std::endl;
   std::cout << "begin - " << __FUNCTION__ ;
   std::cout << "  < " << typeid( category_name ).name()   << " > ()" << std::endl;
   std::cout << std::endl;

   typedef color::_internal::model< category_name > model_type;
   typedef typename model_type::component_type     component_type;

   model_type   c;
   color::make::black(c);
   color::make::gray50(c);

   std::cout << "  ( double )alpha: "<< ( double )color::get::alpha(c)     << ",";
   std::cout << "  ( double )gray:  "<< ( double )color::get::gray( c )    << ",";
   std::cout << "  ( double )red:   "<< ( double )color::get::red( c )     << ",";
   std::cout << "  ( double )green: "<< ( double )color::get::green( c )   << ",";
   std::cout << "  ( double )blue:  "<< ( double )color::get::blue( c )    << ",";
   std::cout << "  ( double )hue:   "<< ( double )color::get::hue( c )     << std::endl;

   std::cout << std::endl;
   std::cout << "end - " << __FUNCTION__ ;
   std::cout << "  < " << typeid( category_name ).name()   << " > ()" << std::endl;
   std::cout << "}}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}}" << std::endl;
 }

