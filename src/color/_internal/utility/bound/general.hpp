#ifndef color__internal_utility_bound_general
#define color__internal_utility_bound_general

// ::color::_internal::utility::bound::general< value_name, index_name >

#include "../type/bound.hpp"
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

        template< typename value_name, typename index_name >
         struct general
          {
           public:
             typedef value_name      value_type;
             typedef index_name      index_type;

             typedef ::color::_internal::utility::type::traitC< value_name >     component_trait_type;
             typedef ::color::_internal::utility::type::index< index_type >          index_trait_type;

             typedef typename component_trait_type::instance_type      component_instance_type;
             typedef typename component_trait_type::return_image_type  component_return_const_type;
             
             typedef typename index_trait_type::instance_type    index_instance_type;
             typedef typename index_trait_type::model_type index_input_const_type;

             typedef ::color::_internal::utility::type::bound< component_instance_type, component_return_const_type > bound_type;

             template< index_instance_type index >
              static /*constexpr*/ component_return_const_type   maximum( )
               {
                static const component_instance_type component = bound_type::maximum();
                return component;
               }

             static /*constexpr*/ component_return_const_type   maximum( index_input_const_type  index )
              {
               static const component_instance_type component = bound_type::maximum();
               return component;
              }

             template< index_instance_type index >
              static /*constexpr*/ component_return_const_type   minimum( )
               {
                static const component_instance_type component = bound_type::minimum();
                return component;
               }

             static /*constexpr*/ component_return_const_type   minimum( index_input_const_type  index )
              {
               static const component_instance_type component = bound_type::minimum();
               return component;
              }

             template< index_instance_type index >
              static /*constexpr*/ component_return_const_type   range()
               {
                static const component_instance_type component = bound_type::range();
                return component;
               }

             static /*constexpr*/ component_return_const_type   range(   index_input_const_type  index )
              {
               static const component_instance_type component = bound_type::range();
               return component;
              }
          };

       }
     }
   }
 }

#endif
