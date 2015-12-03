#include <iomanip>
#include <iostream>

#include "../../src/color.hpp"

#include "../print.hpp"

template< typename category_name >
 void test_make()
  {
   std::cout << __FUNCTION__ << "::begin - " << typeid( category_name ).name()   <<std::endl;
   typedef color::_internal::model< category_name > model_type;
   typedef typename model_type::component_type     component_type;

   model_type   c;
   print( c );
   color::make::black( c );
   print( c );
   color::make::gray50( c );
   print( c );
   color::make::white( c );
   print( c );
   std::cout << std::endl;
   std::cout << __FUNCTION__ << "::end" << std::endl;
 }

