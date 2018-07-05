#ifndef color_rgb_convert_hsv
#define color_rgb_convert_hsv

#include "../../_internal/convert.hpp"
#include "../../hsv/place/place.hpp"
#include "../../hsv/hsv.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

#include "../place/red.hpp"
#include "../place/green.hpp"
#include "../place/blue.hpp"





namespace color
 {
  namespace _internal
   {

    template< typename rgb_tag_name, typename hsv_tag_name >
     struct convert
      <
        ::color::category::rgb< rgb_tag_name >
       ,::color::category::hsv< hsv_tag_name >
      >
      {
       public:
         typedef ::color::category::rgb< rgb_tag_name > category_left_type;
         typedef ::color::category::hsv< hsv_tag_name > category_right_type;

         typedef typename ::color::trait::scalar< category_left_type >::instance_type scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         enum
          {
            red_p   = ::color::place::_internal::red<category_left_type>::position_enum
           ,green_p = ::color::place::_internal::green<category_left_type>::position_enum
           ,blue_p  = ::color::place::_internal::blue<category_left_type>::position_enum
          };

         enum
          {
            hue_p        = ::color::place::_internal::hue<category_right_type>::position_enum
           ,saturation_p = ::color::place::_internal::saturation<category_right_type>::position_enum
           ,value_p      = ::color::place::_internal::value<category_right_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type h = normalize_type::template process<hue_p       >( container_right_trait_type::template get<hue_p       >( right ) );
           scalar_type s = normalize_type::template process<saturation_p>( container_right_trait_type::template get<saturation_p>( right ) );
           scalar_type v = normalize_type::template process<value_p     >( container_right_trait_type::template get<value_p     >( right ) );

           int region  = int( 6 * h );
           scalar_type f = h * 6 - region ;
           scalar_type p = v * (1 - s);
           scalar_type q = v * (1 - f * s);
           scalar_type t = v * (1 - (1 - f) * s);

           scalar_type r;
           scalar_type g;
           scalar_type b;

           switch( region  % 6 )
            {
             case 0: r = v, g = t, b = p; break;
             case 1: r = q, g = v, b = p; break;
             case 2: r = p, g = v, b = t; break;
             case 3: r = p, g = q, b = v; break;
             case 4: r = t, g = p, b = v; break;
             case 5: r = v, g = p, b = q; break;
            }

           container_left_trait_type::template set<red_p  >( left, diverse_type::template process<red_p  >( r ) );
           container_left_trait_type::template set<green_p>( left, diverse_type::template process<green_p>( g ) );
           container_left_trait_type::template set<blue_p >( left, diverse_type::template process<blue_p >( b ) );
          }
      };

   }
 }

#endif
