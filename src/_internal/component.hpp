#ifndef color__internal_component
#define color__internal_component
// color::_internal::model< category >

#include "./index.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename category_name >
     class component
      {
       public:
         typedef unsigned char          instance_type;
         typedef instance_type          const_return_type;
         typedef instance_type  const   return_type;
         typedef instance_type const&   const_input_type;
         typedef instance_type      &   input_type;

         typedef ::color::_internal::index< category_name >  index_trait_type;
         typedef typename index_trait_type::instance_type    index_instance_type;
         typedef typename index_trait_type::const_input_type index_const_input_type;

         template< index_instance_type index >
          static /*constexpr*/ const_return_type   maximum( )
           {
            static instance_type value=255;
            return value;
           }

         static /*constexpr*/ const_return_type   maximum( index_const_input_type  index )
          {
           static instance_type value=255;
           return value;
          }

         template< index_instance_type index >
          static /*constexpr*/ const_return_type   minimum( )
           {
            static instance_type value=0;
            return value;
           }

         static /*constexpr*/ const_return_type   minimum( index_const_input_type  index )
          {
           static instance_type value=0;
           return value;
          }

         template< index_instance_type index >
          static /*constexpr*/ const_return_type   range()
           { // TODO this is BUG!!!
            static instance_type value = maximum<index>() - minimum<index>();
            return value;
           }

         static /*constexpr*/ const_return_type   range(   index_const_input_type  index )
          { // TODO this is BUG!!!
           static instance_type value = maximum( index ) - minimum( index );
           return value;
          }
      };

   }
 }

#endif
