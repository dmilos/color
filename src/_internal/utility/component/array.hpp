#ifndef color__internal_utility_component_array
#define color__internal_utility_component_array

#include "../type/bound.hpp"
#include "../type/traitc.hpp"
#include "../type/index.hpp"

namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace component
       {

        template< typename value_name, typename index_name >
         class array
          {
           public:
             typedef value_name      value_type;
             typedef index_name      index_type;

             typedef ::color::_internal::utility::type::traitC< value_name >         trait_type;

             typedef typename trait_type::instance_type          instance_type;
             typedef typename trait_type::const_return_type      const_return_type;
             typedef typename trait_type::return_type            return_type;
             typedef typename trait_type::const_input_type       const_input_type;
             typedef typename trait_type::input_type             input_type;

             typedef ::color::_internal::utility::type::index< index_type >   index_trait_type;

             typedef typename index_trait_type::instance_type    index_instance_type;
             typedef typename index_trait_type::const_input_type index_const_input_type;

             typedef ::color::_internal::utility::type::bound< value_type, const_return_type > bound_type;

             template< index_instance_type index >
              static /*constexpr*/ const_return_type   maximum( )
               {
                static const instance_type value = bound_type::maximum();
                return value;
               }

             static /*constexpr*/ const_return_type   maximum( index_const_input_type  index )
              {
               static const instance_type value = bound_type::maximum();
               return value;
              }

             template< index_instance_type index >
              static /*constexpr*/ const_return_type   minimum( )
               {
                static const instance_type value = bound_type::minimum();
                return value;
               }

             static /*constexpr*/ const_return_type   minimum( index_const_input_type  index )
              {
               static const instance_type value = bound_type::minimum();
               return value;
              }

             template< index_instance_type index >
              static /*constexpr*/ const_return_type   range()
               {
                static const instance_type value = bound_type::range();
                return value;
               }

             static /*constexpr*/ const_return_type   range(   index_const_input_type  index )
              {
               static const instance_type value = bound_type::range();
               return value;
              }
          };

       }
     }
   }
 }

#endif
