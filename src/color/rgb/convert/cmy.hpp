#ifndef color_rgb_convert_cmy
#define color_rgb_convert_cmy

#include "../category.hpp"
#include "../../cmy/category.hpp"

#include "../../_internal/convert.hpp"
#include "../../cmy/cmy.hpp"

#include "../../generic/operation/invert.hpp"
#include "../../_internal/reformat.hpp"

#include "../place/red.hpp"
#include "../place/green.hpp"
#include "../place/blue.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename rgb_tag_name, typename cmy_tag_name >
     struct convert
      <
        ::color::category::rgb< rgb_tag_name >
       ,::color::category::cmy< cmy_tag_name >
      >
      {
       public:
         typedef ::color::category::rgb< rgb_tag_name > category_left_type;
         typedef ::color::category::cmy< cmy_tag_name > category_right_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef  ::color::_internal::reformat< category_left_type, category_right_type > reformat_type;
         typedef  ::color::operation::_internal::invert< category_right_type > invert_type;

         enum
          {
            red_p   = ::color::place::_internal::red<category_left_type>::position_enum
           ,green_p = ::color::place::_internal::green<category_left_type>::position_enum
           ,blue_p  = ::color::place::_internal::blue<category_left_type>::position_enum
          };

         enum
          {
               cyan_p    = ::color::place::_internal::cyan<category_right_type>::position_enum
           ,magenta_p    = ::color::place::_internal::magenta<category_right_type>::position_enum
           , yellow_p    = ::color::place::_internal::yellow<category_right_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           container_left_trait_type::template set<red_p  >( left, reformat_type::template process<red_p  ,    cyan_p>( invert_type::template component<   cyan_p>( container_right_trait_type::template get<   cyan_p>( right ) ) ) );
           container_left_trait_type::template set<green_p>( left, reformat_type::template process<green_p, magenta_p>( invert_type::template component<magenta_p>( container_right_trait_type::template get<magenta_p>( right ) ) ) );
           container_left_trait_type::template set<blue_p >( left, reformat_type::template process<blue_p ,  yellow_p>( invert_type::template component< yellow_p>( container_right_trait_type::template get< yellow_p>( right ) ) ) );
          }
      };

   }
 }

#endif