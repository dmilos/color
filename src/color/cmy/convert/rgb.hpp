#ifndef color_cmy_convert_rgb
#define color_cmy_convert_rgb

#include "../category.hpp"

#include "../../_internal/convert.hpp"

#include "../../rgb/place/place.hpp"
#include "../../rgb/rgb.hpp"


#include "../place/place.hpp"

#include "../../generic/operation/invert.hpp"
#include "../../_internal/reformat.hpp"


namespace color
 {
  namespace _internal
   {

    template< typename cmy_tag_name, typename rgb_tag_name >
     struct convert
      <
        ::color::category::cmy< cmy_tag_name >
       ,::color::category::rgb<rgb_tag_name>
      >
      {
       public:
         typedef ::color::category::cmy< cmy_tag_name > category_left_type;
         typedef ::color::category::rgb<rgb_tag_name>   category_right_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef  ::color::_internal::reformat< category_left_type, category_right_type > reformat_type;
         typedef  ::color::operation::_internal::invert< category_right_type > invert_type;

         enum
          {
               cyan_p  = ::color::place::_internal::cyan<category_left_type>::position_enum
           ,magenta_p  = ::color::place::_internal::magenta<category_left_type>::position_enum
           , yellow_p  = ::color::place::_internal::yellow<category_left_type>::position_enum
          };

         enum
          {
            red_p   = ::color::place::_internal::red<category_right_type>::position_enum
           ,green_p = ::color::place::_internal::green<category_right_type>::position_enum
           ,blue_p  = ::color::place::_internal::blue<category_right_type>::position_enum
          };


         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           container_left_trait_type::template set<   cyan_p>( left, reformat_type::template process<   cyan_p,red_p  >( invert_type::template component<red_p  >( container_right_trait_type::template get<red_p  >( right ) ) ) );
           container_left_trait_type::template set<magenta_p>( left, reformat_type::template process<magenta_p,green_p>( invert_type::template component<green_p>( container_right_trait_type::template get<green_p>( right ) ) ) );
           container_left_trait_type::template set< yellow_p>( left, reformat_type::template process< yellow_p,blue_p >( invert_type::template component<blue_p >( container_right_trait_type::template get<blue_p >( right ) ) ) );
         }
      };

   }
 }

#endif
