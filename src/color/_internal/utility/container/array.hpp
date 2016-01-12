#ifndef color__internal_utility_container_array
#define color__internal_utility_container_array

#include "../type/index.hpp"
#include "../type/traitc.hpp"

namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace container
       {

        template< typename value_name, unsigned length >
          struct array
           {
            public:

              typedef value_name                      value_type;

              typedef std::array< value_name, length> instance_type;






              typedef instance_type const      const_type;
              typedef instance_type const&     return_image_type;
              typedef instance_type      &     return_type;
              typedef instance_type const&     input_const_type;
              typedef instance_type      &     input_type;
              typedef instance_type      &     output_type;

              typedef ::color::_internal::utility::type::index< typename instance_type::size_type >   index_trait_type;

              typedef typename index_trait_type::instance_type     index_instance_type;
              typedef typename index_trait_type::const_type        index_const_type;
              typedef typename index_trait_type::input_const_type  index_input_const_type;
              typedef typename index_trait_type::return_image_type index_return_image_type;

              typedef ::color::_internal::utility::type::traitC< value_name >         component_trait_type;

              typedef typename component_trait_type::instance_type        component_type;
              typedef typename component_trait_type::const_type           component_const_type;
              typedef typename component_trait_type::return_image_type    component_return_const_type;
              typedef typename component_trait_type::input_const_type     component_input_const_type;


              typedef void set_return_type;

              static component_return_const_type get( input_const_type container, index_input_const_type index )
               {
                return container[index];
               }

              template< index_instance_type index >
               static component_return_const_type get( input_const_type container )
                {
                 return container[index];
                }

              static set_return_type set( input_type container, index_input_const_type index, component_input_const_type value )
               {
                container[index] = value;
               }

              template< index_instance_type index >
               static set_return_type set( input_type container, component_input_const_type value )
                {
                 container[index] = value;
                }

              static /*constexpr*/ index_return_image_type size()
               {
                static const index_instance_type local_length = length;
                return local_length;
               }
           }; 
       }
     }
   }
 }

#endif
