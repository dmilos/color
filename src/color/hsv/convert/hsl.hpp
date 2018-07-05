#ifndef color_hsv_convert_hsl
#define color_hsv_convert_hsl

#include "../../_internal/convert.hpp"
#include "../../hsl/hsl.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename hsv_tag_name, typename hsl_tag_name >
     struct convert
      <
        ::color::category::hsv< hsv_tag_name >
       ,::color::category::hsl< hsl_tag_name >
      >
      {
       public:
         typedef ::color::category::hsv< hsv_tag_name > category_left_type;
         typedef ::color::category::hsl< hsl_tag_name > category_right_type;
         typedef typename ::color::trait::scalar<category_left_type>::instance_type  scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         enum
          {
            hl_p = ::color::place::_internal::hue<category_left_type>::position_enum
           ,sl_p = ::color::place::_internal::saturation<category_left_type>::position_enum
           ,vl_p = ::color::place::_internal::value<category_left_type>::position_enum
          };

         enum
          {
            hr_p = ::color::place::_internal::hue<category_right_type>::position_enum
           ,sr_p = ::color::place::_internal::saturation<category_right_type>::position_enum
           ,lr_p = ::color::place::_internal::lightness<category_right_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type h = normalize_type::template  process<hr_p>( container_right_trait_type::template get<hr_p>( right ) );
           scalar_type ss = normalize_type::template process<sr_p>( container_right_trait_type::template get<sr_p>( right ) );
           scalar_type l = normalize_type::template  process<lr_p>( container_right_trait_type::template get<lr_p>( right ) );

           scalar_type v = ( 2 * l + ss*( 1 - fabs( 2*l-1 ) ) ) /2;
           scalar_type s = 2*( v - l ) / v;

           container_left_trait_type::template set<hl_p>( left, diverse_type::template process<hl_p>( h ) );
           container_left_trait_type::template set<sl_p>( left, diverse_type::template process<sl_p>( s ) );
           container_left_trait_type::template set<vl_p>( left, diverse_type::template process<vl_p>( v ) );
          }
      };

   }
 }

#endif
