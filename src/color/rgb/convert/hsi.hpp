#ifndef color_rgb_convert_hsi
#define color_rgb_convert_hsi

#include "../category.hpp"

#include "../../_internal/convert.hpp"

#include "../../generic/constant.hpp"

#include "../../hsi/hsi.hpp"



#include "../place/place.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"
#include "../../generic/constant.hpp"


namespace color
 {
  namespace _internal
   {

    template< typename rgb_tag_name, typename hsi_tag_name >
     struct convert
      <
        ::color::category::rgb< rgb_tag_name >
       ,::color::category::hsi< hsi_tag_name >
      >
      {
       public:
         typedef ::color::category::rgb< rgb_tag_name > category_left_type;
         typedef ::color::category::hsi< hsi_tag_name > category_right_type;

         typedef typename ::color::trait::scalar< category_left_type >::instance_type scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         typedef  ::color::constant::generic< category_left_type > constant_type;

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
           ,intensity_p  = ::color::place::_internal::intensity<category_right_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type h = normalize_type::template process<hue_p       >( container_right_trait_type::template get<hue_p       >( right ) );
           scalar_type s = normalize_type::template process<saturation_p>( container_right_trait_type::template get<saturation_p>( right ) );
           scalar_type i = normalize_type::template process<intensity_p >( container_right_trait_type::template get<intensity_p >( right ) );

           scalar_type min = i * ( 1 - s );

           int region  = int( 3 * h );
           h -= scalar_type( region ) * constant_type::third();
           h *= constant_type::two_pi();
           scalar_type n = i*( scalar_type(1) + s * cos( h ) / cos( constant_type::deg60() - h ) );

           scalar_type r;
           scalar_type g;
           scalar_type b;

           switch( region  % 3 )
            {
             case 0: r = n; b = min; g = scalar_type(3)*i - (r+b); break;
             case 1: g = n; r = min; b = scalar_type(3)*i - (r+g); break;
             case 2: b = n; g = min; r = scalar_type(3)*i - (g+b); break;
            }

           container_left_trait_type::template set<red_p  >( left, diverse_type::template process<red_p  >( r ) );
           container_left_trait_type::template set<green_p>( left, diverse_type::template process<green_p>( g ) );
           container_left_trait_type::template set<blue_p >( left, diverse_type::template process<blue_p >( b ) );
          }
      };

   }
 }

#endif
