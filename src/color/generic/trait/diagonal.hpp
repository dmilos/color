#ifndef color_trait_diagonal
#define color_trait_diagonal

// ::color::trait::diagonal< category >::value

#include "./index.hpp"
#include "./bound.hpp"
#include "./scalar.hpp"


namespace color
 {
  namespace trait
   {
    template< typename category_name >
     struct diagonal
      {
       public:
         typedef category_name category_type;

         typedef ::color::trait::container< category_type >   container_trait_type;
         typedef ::color::trait::bound<category_type>                   bound_type;


         typedef typename ::color::trait::index< category_type >::instance_type    index_type;
         typedef typename ::color::trait::scalar< category_name >::instance_type  scalar_type;

         static scalar_type value()
          {
           scalar_type result=0;
           for( index_type index = 0; index < container_trait_type::size(); index ++ )
            {
             result += scalar_type( bound_type::range( index ) ) * scalar_type( bound_type::range( index ) );
            }
           return sqrt( result );
          }
      };

   }
 }

#endif