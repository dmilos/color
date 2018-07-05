#ifndef color_trait_container
#define color_trait_container

// ::color::trait::container< category >

#include "./index.hpp"
#include "./component.hpp"
#include "./size.hpp"

namespace color
 {
  namespace trait
   {

    template< typename category_name >
     struct container
      {
       public:
         typedef unsigned int/*uint32_t*/           instance_type;

         typedef ::color::trait::container< category_name >  this_type;

         typedef instance_type const    const_type;

         typedef instance_type const    return_image_type;
         typedef instance_type      &   return_type;
         typedef instance_type      &   return_original_type;

         typedef instance_type const&   model_type;
         typedef instance_type      &   input_type;
         typedef instance_type      &   output_type,      param_output_type;

         typedef ::color::trait::index< category_name >   index_trait_type;
         typedef typename index_trait_type::instance_type     index_instance_type;
         typedef typename index_trait_type::const_type        index_const_type;
         typedef typename index_trait_type::model_type  index_input_const_type;
         typedef typename index_trait_type::return_image_type index_return_image_type;

         typedef ::color::trait::component< category_name >      component_trait_type;
         typedef typename component_trait_type::const_type           component_const_type;
         typedef typename component_trait_type::return_image_type    component_return_const_type;
         typedef typename component_trait_type::model_type     component_input_const_type;
         typedef typename component_trait_type::instance_type        component_type;

         typedef ::color::trait::size< category_name >                size_trait_type;
         typedef typename size_trait_type::return_image_type   size_return_image_type;
         typedef typename size_trait_type::instance_type          size_instance_type;


         typedef void set_return_type;

         enum { size_entity = 4 };

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
           return (component_type) ( ( container >> ( index << 3 )) & 0xFF );
          }

         template< index_instance_type index >
          static component_return_const_type get( model_type container )
           {
            return (component_type) ( ( container >> ( index << 3 )) & 0xFF );
           }

         static set_return_type set( input_type container, index_input_const_type index, component_input_const_type value )
          {
           container = ( container & ~(  0xFF << ( index << 3 ) ) )  |  ( ((instance_type)value) << ( index << 3) );
          }

         template< index_instance_type index >
          static set_return_type set( input_type container, component_input_const_type value )
           {
            container = ( container & ~(  0xFF << ( index << 3 ) ) )  |  ( ((instance_type)value) << ( index << 3) );
           }

         static  /*constexpr*/  size_return_image_type size()
          {
           static size_instance_type length = 4;
           return length;
          }
      };

   }
 }

#endif
