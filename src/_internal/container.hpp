#ifndef color__internal_container
#define color__internal_container
// color::_internal::model< category >

#include <cstdint>
#include "./index.hpp"
#include "./component.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename category_name >
     struct container
      {
       public:
         typedef unsigned int/*uint32_t*/           instance_type;
         typedef instance_type const&   const_return_type;
         typedef instance_type      &   return_type;
         typedef instance_type const&   const_input_type;
         typedef instance_type      &   input_type;

         typedef ::color::_internal::index< category_name >   index_trait_type;

         typedef typename index_trait_type::instance_type     index_instance_type;
         typedef typename index_trait_type::const_input_type  index_const_input_type;
         typedef typename index_trait_type::const_return_type index_const_return_type;

         typedef ::color::_internal::component< category_name >      component_trait_type;

         typedef typename component_trait_type::const_return_type    component_const_return_type;
         typedef typename component_trait_type::const_input_type     component_const_input_type;
         typedef typename component_trait_type::instance_type        component_type;

         typedef void set_return_type;

         static component_const_return_type get( const_input_type container, index_const_input_type index )
          {
           return (component_type) ( ( container >> ( index << 3 )) & 0xFF );
          }

         template< index_instance_type index >
          static component_const_return_type get( const_input_type container)
           {
            return (component_type) ( ( container >> ( index << 3 )) & 0xFF );
           }

         static set_return_type set( input_type container, index_const_input_type index, component_const_input_type value )
          {
           container = ( container & ~(  0xFF << ( index << 3 ) ) )  |  ( ((instance_type)value) << ( index << 3) );
          }

         template< index_instance_type index >
          static set_return_type set( input_type container, component_const_input_type value )
           {
            container = ( container & ~(  0xFF << ( index << 3 ) ) )  |  ( ((instance_type)value) << ( index << 3) );
           }

         static index_const_return_type size()
          {
           static index_instance_type length = 4;
           return length;
          }
      };

   }
 }

#endif
