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

   typedef color::_internal::model< category_name > model_type;
   typedef typename model_type::component_type     component_type;

   model_type   c;           std::cout << "  model_type   c;";           print( c ); std::cout << std::endl;
   color::make::black( c );  std::cout << "  color::make::black( c ); "; print( c ); std::cout << std::endl;
   color::make::gray50( c ); std::cout << "  color::make::gray50( c );"; print( c ); std::cout << std::endl;
   color::make::white( c );  std::cout << "  color::make::white( c ); "; print( c ); std::cout << std::endl;

   std::cout << std::endl;
   std::cout << "function - " << __FUNCTION__ << std::endl;
   std::cout << "type - " << typeid(category_name).name() << std::endl;
   std::cout << "}}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}}" << std::endl;
 }

