#ifndef color_internal_convert_
#define color_internal_convert_

// ::color::_internal::convert

#include "./reformat.hpp"

#include "../generic/trait/container.hpp"
#include "../generic/trait/index.hpp"
#include "../generic/trait/component.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename category_left_name, typename category_right_name >
     struct convert
      {
       public:
         typedef category_left_name category_left_type;
         typedef category_right_name category_right_type;

         typedef ::color::trait::index<category_left_type>          index_trait_type;
         typedef typename index_trait_type::instance_type               index_type;

         typedef ::color::trait::container< category_left_type >    container_left_trait_type;
         typedef ::color::trait::container< category_right_type >   container_right_trait_type;

         typedef ::color::trait::component<category_left_type>      component_trait_type;
         typedef typename component_trait_type::instance_type           component_left_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef  ::color::_internal::reformat< category_left_type, category_right_type > reformat_type;

         static
         void
         process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           static const index_type min_common_size = std::min< index_type >( container_left_trait_type::size(), container_right_trait_type::size() );

           component_left_type value;

           for( index_type index=0; index < min_common_size; ++index )
            {
             value = reformat_type::process( index, container_right_trait_type::get( right, index ), index );

             container_left_trait_type::set( left, index, value );
            }
          }
       };

    template< typename category_name >
     struct convert< category_name, category_name >
      {
       public:

         typedef ::color::trait::container< category_name >    container_trait_type;

         typedef typename container_trait_type::input_type        container_input_type;
         typedef typename container_trait_type::model_type  container_const_input_type;

         static
         void
         process
          (
            container_input_type         left
           ,container_const_input_type  right
          )
          {
           left = right;
          }

       };


   }
 }

#endif
