#ifndef color__internal_component
#define color__internal_component
// color::_internal::component< category >

#include "./index.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename category_name >
     struct component
      {
       public:
         typedef unsigned char          instance_type;
         typedef instance_type  const   const_type;

         typedef instance_type  const   return_const_type;
         typedef instance_type  const   return_const_ref_type;
         typedef instance_type          return_type;
         typedef instance_type          return_ref_type;

         typedef instance_type const&   input_const_type;
         typedef instance_type      &   input_type;

         typedef ::color::_internal::index< category_name >  index_trait_type;
         typedef typename index_trait_type::instance_type    index_instance_type;
         typedef typename index_trait_type::input_const_type index_input_const_type;

         typedef ::color::_internal::component< category_name >  this_type;

         template< index_instance_type index >
          inline static /*constexpr*/ return_const_type   maximum()
           {
            static instance_type value=255;
            return value;
           }

         inline static /*constexpr*/ return_const_type   maximum( index_input_const_type  index )
          {
           static instance_type value=255;
           return value;
          }

         template< index_instance_type index >
          inline static /*constexpr*/ return_const_type   minimum()
           {
            static instance_type value=0;
            return value;
           }

         inline static /*constexpr*/ return_const_type   minimum(index_input_const_type  index)
          {
           static instance_type value=0;
           return value;
          }

         template< index_instance_type index >
         inline static /*constexpr*/ return_const_type   range()
           {
            static instance_type value = this_type::maximum<index>() - this_type::minimum<index>();
            return value;
           }

         inline static /*constexpr*/ return_const_type   range(index_input_const_type  index)
          {
           static instance_type value = this_type::maximum( index ) - this_type::minimum( index );
           return value;
          }
      };

   }
 }

#endif
