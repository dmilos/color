#include <iomanip>
#include <iostream>


#include "../print.hpp"

template< typename category_name >
 void test_set( double value )
  {
   std::cout << std::endl;
   std::cout << "{{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{"<< std::endl;
   std::cout << "  function - " << __FUNCTION__<< "( " << value << " )" << std::endl;
   std::cout << "  type - " << typeid( category_name ).name()   << std::endl;
   std::cout << std::endl;

   typedef color::_internal::model< category_name > model_type;
   typedef typename model_type::component_type     component_type;

   model_type   c;
   color::make::black( c );

   color::set::alpha(    c, value ); std::cout << "  color::set::alpha(    c, "<<value<<" ); "; print(c); std::cout << "  ( double )color::get::alpha(c)     == "<< ( double )color::get::alpha(c)      ;std::cout << std::endl;
   color::set::blue(     c, value ); std::cout << "  color::set::blue(     c, "<<value<<" ); "; print(c); std::cout << "  ( double )color::get::blue( c )    == "<< ( double )color::get::blue( c )     ;std::cout << std::endl;
   color::set::gray(     c, value ); std::cout << "  color::set::gray(     c, "<<value<<" ); "; print(c); std::cout << "  ( double )color::get::gray( c )    == "<< ( double )color::get::gray( c )     ;std::cout << std::endl;
   color::set::green(    c, value ); std::cout << "  color::set::green(    c, "<<value<<" ); "; print(c); std::cout << "  ( double )color::get::green( c )   == "<< ( double )color::get::green( c )    ;std::cout << std::endl;
   color::set::red(      c, value ); std::cout << "  color::set::red(      c, "<<value<<" ); "; print(c); std::cout << "  ( double )color::get::red( c )     == "<< ( double )color::get::red( c )      ;std::cout << std::endl;

   std::cout << std::endl;
   std::cout << "  function - " << __FUNCTION__ << std::endl;
   std::cout << "  type - " << typeid(category_name).name() << std::endl;
   std::cout << "}}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}}" << std::endl;
 }

 