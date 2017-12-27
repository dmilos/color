#include <iomanip>
#include <iostream>

#include "color/color.hpp"

#include "../print.hpp"

template< typename category_name >
 void test_generic_set( double value )
  {
   //std::cout << std::endl;
   //std::cout << "{{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{"<< std::endl;
   //std::cout << "  function - " << __FUNCTION__<< "( " << value << " )" << std::endl;
   //std::cout << "  type - " << typeid( category_name ).name()   << std::endl;
   //std::cout << std::endl;

   typedef color::model< category_name > model_type;
   typedef typename model_type::component_type     component_type;

   typedef typename ::color::akin::rgb< category_name >::akin_type    rgb_akin_type;
   typedef typename ::color::akin::gray< category_name >::akin_type   gray_akin_type;

   typedef ::color::_internal::diverse< rgb_akin_type >    rgb_diverse_type;
   typedef ::color::_internal::diverse< gray_akin_type >   gray_diverse_type;

   model_type   c;
   c = color::constant::chocolate_t{};

   { component_type vx = component_type( value );                       ; color::set::alpha(    c, vx ); }
   { component_type vx = rgb_diverse_type::template process<0>( value ) ; color::set::red(      c, vx ); }
   { component_type vx = rgb_diverse_type::template process<1>( value ) ; color::set::blue(     c, vx ); }
   { component_type vx = rgb_diverse_type::template process<2>( value ) ; color::set::green(    c, vx ); }
   { component_type vx = gray_diverse_type::template process<0>( value ); color::set::gray(     c, vx ); }

   //std::cout << std::endl;
   //std::cout << "  function - " << __FUNCTION__ << std::endl;
   //std::cout << "  type - " << typeid(category_name).name() << std::endl;
   //std::cout << "}}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}}" << std::endl;
 }

