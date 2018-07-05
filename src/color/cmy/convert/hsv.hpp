#ifndef color_cmy_convert_hsv
#define color_cmy_convert_hsv

#include "../category.hpp"

#include "../../_internal/convert.hpp"

#include "../../hsv/hsv.hpp"



#include "../place/place.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"


namespace color
 {
  namespace _internal
   {

    template< typename cmy_tag_name, typename hsv_tag_name >
     struct convert
      <
        ::color::category::cmy< cmy_tag_name >
       ,::color::category::hsv<hsv_tag_name>
      >
      {
       public:
         typedef ::color::category::cmy< cmy_tag_name > category_left_type;
         typedef ::color::category::hsv<hsv_tag_name> category_right_type;
         typedef typename ::color::trait::scalar<category_left_type>::instance_type  scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         enum
          {
            cyan_p       = ::color::place::_internal::cyan<category_left_type>::position_enum
           ,magenta_p    = ::color::place::_internal::magenta<category_left_type>::position_enum
           ,yellow_p     = ::color::place::_internal::yellow<category_left_type>::position_enum
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
           scalar_type p = v * ( 1 - s);
           scalar_type q = v * ( 1 - f * s);
           scalar_type t = v * ( 1 - (1 - f) * s);

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

           container_left_trait_type::template set<cyan_p   >( left, diverse_type::template process<cyan_p   >( scalar_type(1) - r ) );
           container_left_trait_type::template set<magenta_p>( left, diverse_type::template process<magenta_p>( scalar_type(1) - g ) );
           container_left_trait_type::template set<yellow_p >( left, diverse_type::template process<yellow_p >( scalar_type(1) - b ) );
          }
      };

   }
 }

#endif
