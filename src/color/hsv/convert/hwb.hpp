#ifndef color_hsv_convert_hwb
#define color_hsv_convert_hwb

#include "../../_internal/convert.hpp"
#include "../../hwb/hwb.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename hsv_tag_name, typename hwb_tag_name >
     struct convert
      <
        ::color::category::hsv< hsv_tag_name >
       ,::color::category::hwb< hwb_tag_name >
      >
      {
       public:
         typedef ::color::category::hsv< hsv_tag_name > category_left_type;
         typedef ::color::category::hwb< hwb_tag_name > category_right_type;
         typedef typename ::color::trait::scalar<category_left_type>::instance_type  scalar_type;

         typedef ::color::trait::scalar<category_left_type> scalar_trait_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         enum
          {
                   hue_p = ::color::place::_internal::hue<category_left_type>::position_enum
           ,saturation_p = ::color::place::_internal::saturation<category_left_type>::position_enum
           ,     value_p = ::color::place::_internal::value<category_left_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type h = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
           scalar_type w = normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
           scalar_type b = normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );

           h = h;
           scalar_type s = scalar_type(1)- w/( scalar_type(1) - b );
           scalar_type v = scalar_type(1) - b;

           container_left_trait_type::template set<       hue_p>( left, diverse_type::template process<       hue_p>( h ) );
           container_left_trait_type::template set<saturation_p>( left, diverse_type::template process<saturation_p>( s ) );
           container_left_trait_type::template set<     value_p>( left, diverse_type::template process<     value_p>( v ) );
          }
      };

   }
 }

#endif 