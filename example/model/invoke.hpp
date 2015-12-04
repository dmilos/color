#include <iomanip>
#include <iostream>

#include "../../src/color.hpp"

#include "../print.hpp"

template< typename category_name >
 void test_invoke()
  {
   std::cout << "{{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{"<< std::endl;
   std::cout << "  function - " << __FUNCTION__ << std::endl;
   std::cout << "  type - " << typeid( category_name ).name()   << std::endl;
   std::cout << std::endl;

   typedef color::_internal::model< category_name > model_type;
   typedef typename model_type::component_type     component_type;

   model_type   c;
   std::cout << "  model_type   c; ";
   print( c );
   std::cout << std::endl;
   for( typename model_type::index_type index=0; index < model_type::size(); ++index )
    {
     component_type  v = c.get( index );
     c.set( index, 123 + index );
     std::cout << "  set( " << index << ", " << 123 + index << " ) == ";
     print( c );
     std::cout << std::endl;
    }

   c.container();

   std::cout << std::endl;
   std::cout << "  function - " << __FUNCTION__ << std::endl;
   std::cout << "  type - " << typeid(category_name).name() << std::endl;
   std::cout << "}}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}}" << std::endl;
 }

