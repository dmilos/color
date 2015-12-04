#include "../../src/color.hpp"

template< typename category_name > 
 void test_operation()
  {
   std::cout << std::endl;
   std::cout << "{{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{"<< std::endl;
   std::cout << "  function - " << __FUNCTION__ << std::endl;
   std::cout << "  type - " << typeid( category_name ).name()   << std::endl;
   std::cout << std::endl;

   typedef color::_internal::model< category_name > model_type;
   typedef typename model_type::component_type     component_type;

   model_type   u32;
   model_type   u32a;
   model_type   u32b;
   model_type   u32c;

   // long names discourage usage of it directly.
   color::operation::addition::full( u32a, u32b, u32c );
   color::operation::addition::accumulate( u32a, u32b );
   color::operation::subtract::full( u32a, u32b, u32c );
   color::operation::subtract::accumulate( u32a, u32b );
   color::operation::invert::full( u32a, u32b );
   color::operation::invert::accumulate( u32a );
   color::operation::scale::accumulate( u32a, 0.5 );
   color::operation::scale::full( u32a, 0.5, u32b );
   color::operation::convex::accumulate( u32a, 0.5, u32b );
   color::operation::convex::full( u32a, u32b, 0.5, u32c );

   u32a = u32b + u32c;
   u32a = u32b - u32c;
   u32a = 0.5 * u32c;
   u32a = u32c * 0.5;
   u32a = u32c / 0.5;
   u32a += u32b;
   u32a -= u32b;
   u32a /= 0.5;
   u32a *= 0.5;

   std::cout << std::endl;
   std::cout << "  function - " << __FUNCTION__ << std::endl;
   std::cout << "  type - " << typeid(category_name).name() << std::endl;
   std::cout << "}}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}}" << std::endl;
  }


/*void test_gray_conversion_intrisic()
 {
  color::gray_double  d;
  color::gray_float   f;
  color::gray_uint32 u32;

  d = d;
  d = f;
  d = u32;

  f = d;
  f = f;
  f = u32;

  u32 = d;
  u32 = f;
  u32 = u32;
 }
*/