#ifndef color_internal_convert_
#define color_internal_convert_

// ::color::_internal::convert

#include "./reformat.hpp"

#include "./trait.hpp"

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

         typedef ::color::_internal::trait<category_left_type>    category_left_trait_type;
         typedef ::color::_internal::trait<category_right_type>   category_right_trait_type;

         typedef typename category_left_trait_type::index_type          index_type;

         typedef typename category_left_trait_type::container_trait_type     container_left_trait_type;
         typedef typename category_right_trait_type::container_trait_type    container_right_trait_type;

         typedef typename category_left_trait_type::component_type  component_left_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           static const index_type min_common_size = std::min< index_type >( container_left_trait_type::size(), container_right_trait_type::size() );
           component_left_type value;
           typedef  ::color::_internal::reformat< category_left_type, category_right_type > reformat_type;

           for( index_type index=0; index < min_common_size; ++index )
            {
             value = reformat_type::process( index, container_right_trait_type::get( right, index ), index );

             container_left_trait_type::set( left, index, value );
            }
          }
       };

    template< typename category_name >
     struct convert< category_name,category_name >
      {
       public:

         typedef ::color::_internal::trait<category_name>   category_left_trait_type;
         typedef ::color::_internal::trait<category_name>   category_right_trait_type;

         typedef typename category_left_trait_type::container_trait_type     container_left_trait_type;
         typedef typename category_right_trait_type::container_trait_type    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           left = right;
          }

       };


   }
 }

#endif
