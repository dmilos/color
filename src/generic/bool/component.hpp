#ifndef color_generic_bool_component
#define color_generic_bool_component

// color::_internal::model< category >

#include "../../_internal/component.hpp"
#include "../category.hpp"

namespace color
 {
  namespace _internal
   {

    template< >
     class component< ::color::category::generic_bool >
      {
       public:
         typedef bool                   instance_type;
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
            static instance_type value=true;
            return value;
           }

         static /*constexpr*/ const_return_type   maximum( index_const_input_type  index )
          {
           static instance_type value=true;
           return value;
          }

         template< index_instance_type index >
          static /*constexpr*/ const_return_type   minimum( )
           {
            static instance_type value=false;
            return value;
           }

         static /*constexpr*/ const_return_type   minimum( index_const_input_type  index )
          {
           static instance_type value=false;
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
