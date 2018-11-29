#ifndef color__internal_utility_container_empty
#define color__internal_utility_container_empty

// ::color::_internal::utility::container::empty<value_name, length>

#include "../type/index.hpp"
#include "../type/size.hpp"
#include "../../../generic/type/nothing.hpp"



namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace container
       {

        template< typename index_name >
         struct empty
          {
           public:
             typedef index_name index_type;

             typedef ::color::_internal::utility::container::empty< index_name > this_type;

             typedef ::color::type::nothing_type     value_type;
             typedef ::color::type::nothing_type  instance_type;

             typedef instance_type const      const_type;
             typedef instance_type const&     return_image_type;
             typedef instance_type      &     return_type;
             typedef instance_type      &     return_original_type;
             typedef instance_type const&     model_type;
             typedef instance_type      &     input_type;
             typedef instance_type      &     output_type;

             typedef ::color::_internal::utility::type::index< index_name >   index_trait_type;

             typedef typename index_trait_type::instance_type     index_instance_type;
             typedef typename index_trait_type::const_type        index_const_type;
             typedef typename index_trait_type::model_type  index_input_const_type;
             typedef typename index_trait_type::return_image_type index_return_image_type;

             typedef ::color::_internal::utility::component::blank<index_type>         component_trait_type;

             typedef typename component_trait_type::instance_type        component_type;
             typedef typename component_trait_type::const_type           component_const_type;
             typedef typename component_trait_type::return_image_type    component_return_const_type;
             typedef typename component_trait_type::model_type     component_input_const_type;

             typedef ::color::_internal::utility::type::size< std::size_t >   size_trait_type;

             typedef typename size_trait_type::return_image_type        size_return_image_type;
             typedef typename size_trait_type::instance_type            size_instance_type;

             typedef void set_return_type;

             enum { size_entity = length };


             static set_return_type init( input_type container, index_input_const_type index, component_input_const_type value )
              {
               this_type::set( container, index, value );
              }

             template< index_instance_type index >
              static set_return_type init( input_type container, component_input_const_type value )
               {
                this_type:: template set<index>( container, value );
               }

             static component_return_const_type get( model_type container, index_input_const_type index )
              {
               static const instance_type s_instance;
               return s_instance;
              }

             template< index_instance_type index >
              static component_return_const_type get( model_type container )
               {
               static const instance_type s_instance;
               return s_instance;
               }

             static set_return_type set( input_type container, index_input_const_type index, component_input_const_type value )
              {
              }

             template< index_instance_type index >
              static set_return_type set( input_type container, component_input_const_type value )
               {
               }

             static /*constexpr*/ size_return_image_type size()
              {
               static const size_instance_type local_length = size_entity;
               return local_length;
              }
          };
       }
     }
   }
 }

#endif
