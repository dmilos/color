#ifndef color__internal_utility_bound_intrinsic
#define color__internal_utility_bound_intrinsic

// ::color::_internal::utility::bound::intrinsic< value_name, width_size, index_name >


#include "../type/traitc.hpp"
#include "../type/index.hpp"


namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace bound
       {

        template< typename container_name, unsigned width_size, typename index_name >
         struct intrinsic
          {
           public:
             typedef container_name    container_type;
             typedef index_name        index_type;

             typedef ::color::_internal::utility::type::traitC< container_type >   component_trait_type;
             typedef ::color::_internal::utility::type::index< index_type >        index_trait_type;

             typedef typename component_trait_type::instance_type      component_instance_type;
             typedef typename component_trait_type::return_image_type  component_return_const_type;
             
             typedef typename index_trait_type::instance_type    index_instance_type;
             typedef typename index_trait_type::model_type index_input_const_type;
             
             typedef ::color::_internal::utility::bound::intrinsic< container_name, width_size, index_name > this_type;


             template< index_instance_type index >
              static /*constexpr*/ component_return_const_type   maximum( )
               {
                static const component_instance_type component = ((( container_type(1) << (width_size-1)) - container_name(1) ) << 1) + container_type(1);
                return component;
               }

             static /*constexpr*/ component_return_const_type   maximum( index_input_const_type  index )
              {
               static const component_instance_type component = ((( container_type(1) << (width_size-1)) - container_type(1) ) << 1) + container_type(1);
               return component;
              }

             template< index_instance_type index >
              static /*constexpr*/ component_return_const_type   minimum( )
               {
                static const component_instance_type component = 0;
                return component;
               }

             static /*constexpr*/ component_return_const_type   minimum( index_input_const_type  index )
              {
               static const component_instance_type component = 0;
               return component;
              }

             template< index_instance_type index >
              static /*constexpr*/ component_return_const_type   range()
               {
                static const component_instance_type component = this_type::template maximum<index>() - this_type::template minimum<index>();
                return component;
               }

             static /*constexpr*/ component_return_const_type   range(   index_input_const_type  index )
              {
               static const component_instance_type component = this_type::maximum(index) - this_type::minimum(index);
               return component;
              }
          };

       }
     }
   }
 }

#endif 