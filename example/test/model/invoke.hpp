#include <iomanip>
#include <iostream>

#include "../print.hpp"

template< typename category_name >
 void test_invoke()
  {
   //std::cout << "{{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{"<< std::endl;
   //std::cout << "  function - " << __FUNCTION__ << std::endl;
   //std::cout << "  type - " << typeid( category_name ).name()   << std::endl;
   //std::cout << std::endl;

   typedef color::model< category_name > model_type;
   typedef typename model_type::component_type     component_type;
   typedef typename model_type::container_type     container_type;

   model_type   cdef;
   model_type   cilu{ 0, 2, 3 };
   model_type   cile{ 0, 2, 3 };
   model_type   cilo{ 0, 1, 2, 3, 4, 5, 6, 7, 8 };

   container_type cont;

   model_type   ccont( cont );

   //std::cout << "  model_type   c; ";
   model_type   c;
   //print( c );
   //print( cc );
   //std::cout << std::endl;
   for( typename model_type::index_type index=0; index < model_type::size(); ++index )
    {
     component_type  v = c.get( index );
     c.set( index, component_type(123 + index) );
     //std::cout << "  set( " << index << ", " << 123 + index << " ) == ";
     //print( c );
     //std::cout << std::endl;
    }

   c.container();

   //std::cout << std::endl;
   //std::cout << "  function - " << __FUNCTION__ << std::endl;
   //std::cout << "  type - " << typeid(category_name).name() << std::endl;
   //std::cout << "}}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}}" << std::endl;
 }

