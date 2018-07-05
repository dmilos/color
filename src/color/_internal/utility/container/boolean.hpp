#ifndef color__internal_utility_container_boolean
#define color__internal_utility_container_boolean

// ::color::_internal::utility::container::boolean< index_name >

#include "../type/index.hpp"
#include "../type/size.hpp"
#include "../type/traitp.hpp"



namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace container
       {

        template< typename index_name/* pointless */ >
         struct boolean
          {
           public:
             typedef index_name     index_type;
             typedef bool           value_type;

             typedef ::color::_internal::utility::container::boolean< index_name > this_type;

             typedef bool  instance_type;



             typedef instance_type const      const_type;
             typedef instance_type const&     return_image_type;
             typedef instance_type      &     return_type;
             typedef instance_type      &     return_original_type;
             typedef instance_type const&      model_type;
             typedef instance_type      &      input_type;
             typedef instance_type      &     output_type;

             typedef ::color::_internal::utility::type::index< index_type >   index_trait_type;

             typedef typename index_trait_type::instance_type     index_instance_type;

             typedef typename index_trait_type::model_type  index_input_const_type;
             typedef typename index_trait_type::return_image_type index_return_image_type;

             typedef ::color::_internal::utility::type::traitC< value_type >         component_trait_type;

             typedef typename component_trait_type::instance_type        component_type;

             typedef typename component_trait_type::return_image_type    component_return_const_type;
             typedef typename component_trait_type::model_type     component_input_const_type;

             typedef ::color::_internal::utility::type::size< std::size_t >   size_trait_type;

             typedef typename size_trait_type::return_image_type        size_return_image_type;
             typedef typename size_trait_type::instance_type            size_instance_type;


             typedef void set_return_type;

             enum { size_entity = 1 };


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
               return container;
              }

             template< index_instance_type index >
              static component_return_const_type get( model_type container )
               {
                //TODO C++14 static_assert( index <  1, "Index is out of range." );
                return container;
               }

             static set_return_type set( input_type container, index_input_const_type index, component_input_const_type value )
              {
               container = value;
              }

             template< index_instance_type index >
              static set_return_type set( input_type container, component_input_const_type value )
               {
                //TODO C++14 static_assert( index <  1, "Index is out of range." );
                container = value;
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