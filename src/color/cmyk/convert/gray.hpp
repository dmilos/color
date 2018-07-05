#ifndef color_cmyk_convert_gray
#define color_cmyk_convert_gray

#include "../../_internal/convert.hpp"
#include "../../gray/gray.hpp"

#include "../../generic/operation/invert.hpp"
#include "../../_internal/reformat.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename cmyk_tag_name, typename gray_tag_name >
     struct convert
      <
        ::color::category::cmyk< cmyk_tag_name >
       ,::color::category::gray<  gray_tag_name >
      >
      {
       public:
         typedef ::color::category::cmyk< cmyk_tag_name > category_left_type;
         typedef ::color::category::gray< gray_tag_name > category_right_type;

         typedef ::color::trait::bound<category_left_type>         bound_left_trait_type;
         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef  ::color::operation::_internal::invert< category_right_type > invert_type;
         typedef ::color::_internal::reformat< category_left_type, category_right_type >    reformat_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         enum
          {
               cyan_p  = ::color::place::_internal::cyan<category_left_type>::position_enum
           ,magenta_p  = ::color::place::_internal::magenta<category_left_type>::position_enum
           , yellow_p  = ::color::place::_internal::yellow<category_left_type>::position_enum
           ,    key_p  = ::color::place::_internal::key<category_left_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           container_left_trait_type::template set<   cyan_p>( left, bound_left_trait_type::template minimum<   cyan_p>() );
           container_left_trait_type::template set<magenta_p>( left, bound_left_trait_type::template minimum<magenta_p>() );
           container_left_trait_type::template set< yellow_p>( left, bound_left_trait_type::template minimum< yellow_p>() );
           container_left_trait_type::template set<    key_p>( left, reformat_type::template process<key_p,0>( invert_type::template component<0>( container_right_trait_type::template get<0>( right ) ) ) );
          }
        };

   }
 }

#endif
