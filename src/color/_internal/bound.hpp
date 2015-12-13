#ifndef color_bound
#define color_bound
// color::bound< category >::maximum
// color::bound< category >::minimum

#include "./index.hpp"
#include "./component.hpp"

namespace color
 {

  template< typename category_name >
   struct bound
    {
     public:
       typedef ::color::_internal::component< category > component_trait_type;
       typedef ::color::_internal::index< category_name >  index_trait_type;

       typedef typename component_trait_type::instance_type      component_instance_type;
       typedef typename component_trait_type::return_const_type  component_return_const_type;

       typedef typename index_trait_type::instance_type    index_instance_type;
       typedef typename index_trait_type::input_const_type index_input_const_type;

       typedef ::color::bound< category_name >  this_type;

       template< index_instance_type index >
        inline static /*constexpr*/ component_return_const_type   maximum()
         {
          static instance_type value=255;
          return value;
         }

       inline static /*constexpr*/ component_return_const_type   maximum( index_input_const_type  index )
        {
         static component_instance_type value=255;
         return value;
        }

       template< index_instance_type index >
        inline static /*constexpr*/ component_return_const_type   minimum()
         {
          static component_instance_type value=0;
          return value;
         }

       inline static /*constexpr*/ component_return_const_type   minimum(index_input_const_type  index)
        {
         static component_instance_type value=0;
         return value;
       }

       template< index_instance_type index >
       inline static /*constexpr*/ component_return_const_type   range()
         {
          static component_instance_type value = this_type::maximum<index>() - this_type::minimum<index>();
          return value;
         }

       inline static /*constexpr*/ component_return_const_type   range(index_input_const_type  index)
        {
         static component_instance_type value = this_type::maximum( index ) - this_type::minimum( index );
         return value;
        }
    };

 }

#endif