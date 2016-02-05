#include <iomanip>
#include <iostream>

#include "color/color.hpp"
#include "../print.hpp"

template< typename category_name >
 void test_generic_set( double value )
  {
   std::cout << std::endl;
   std::cout << "{{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{"<< std::endl;
   std::cout << "  function - " << __FUNCTION__<< "( " << value << " )" << std::endl;
   std::cout << "  type - " << typeid( category_name ).name()   << std::endl;
   std::cout << std::endl;

   typedef color::_internal::model< category_name > model_type;
   typedef typename model_type::component_type     component_type;

   typedef typename ::color::akin::rgb< category_name >::akin_type    rgb_akin_type; 
   typedef typename ::color::akin::gray< category_name >::akin_type   gray_akin_type; 
   
   typedef ::color::_internal::diverse< rgb_akin_type >    rgb_diverse_type; 
   typedef ::color::_internal::diverse< gray_akin_type >   gray_diverse_type; 

   model_type   c;
   color::make::chocolate( c );


   { auto vx = value;                                         ; color::set::alpha(    c, vx ); std::cout << "  color::set::alpha( c, "<< ( double )vx <<" ); "; print(c); std::cout << " ( double )color::get::alpha(c)   == "<< ( double )color::get::alpha(c)      ;std::cout << std::endl; }
   { auto vx = rgb_diverse_type::template process<0>( value ) ; color::set::red(      c, vx ); std::cout << "  color::set::red(   c, "<< ( double )vx <<" ); "; print(c); std::cout << " ( double )color::get::red( c )   == "<< ( double )color::get::red( c )      ;std::cout << std::endl; }
   { auto vx = rgb_diverse_type::template process<1>( value ) ; color::set::blue(     c, vx ); std::cout << "  color::set::blue(  c, "<< ( double )vx <<" ); "; print(c); std::cout << " ( double )color::get::blue( c )  == "<< ( double )color::get::blue( c )     ;std::cout << std::endl; }
   { auto vx = rgb_diverse_type::template process<2>( value ) ; color::set::green(    c, vx ); std::cout << "  color::set::green( c, "<< ( double )vx <<" ); "; print(c); std::cout << " ( double )color::get::green( c ) == "<< ( double )color::get::green( c )    ;std::cout << std::endl; }
   { auto vx = gray_diverse_type::template process<0>( value ); color::set::gray(     c, vx ); std::cout << "  color::set::gray(  c, "<< ( double )vx <<" ); "; print(c); std::cout << " ( double )color::get::gray( c )  == "<< ( double )color::get::gray( c )     ;std::cout << std::endl; }

   std::cout << std::endl;
   std::cout << "  function - " << __FUNCTION__ << std::endl;
   std::cout << "  type - " << typeid(category_name).name() << std::endl;
   std::cout << "}}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}}" << std::endl;
 }
 
