#include <iomanip>
#include <iostream>

#include "../src/color.hpp"

using namespace color::operation::arithmetic;

#include "./print.hpp"

template< typename category_name > 
 void test_invoke()
  {
   typedef color::_internal::model< category_name > model_type;
   typename typename model_type::component_type     component_type;

   model_type   c;

   print( c )
   for( typename model_type::index_type index; index < model_type::size(); ++index )
    {
     component_type  v = c.get( index );
     print( c )
    }

  c.container();
 }

template< typename category_name > 
void test_operation()
 {
  typedef color::_internal::model< category_name > model_type;
  typename typename model_type::component_type     component_type;

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
  u32a += u32b;
  u32a -= u32b;
  u32a /= 0.5;
  u32a *= 0.5;
 }
