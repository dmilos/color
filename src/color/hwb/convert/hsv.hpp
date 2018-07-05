#ifndef color_hwb_convert_hsv
#define color_hwb_convert_hsv

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../hsv/hsv.hpp"


#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"


namespace color
 {
  namespace _internal
   {

    template
     <
       typename hwb_tag_name
      ,typename hsv_tag_name
     >
     struct convert
      <
        ::color::category::hwb< hwb_tag_name >
       ,::color::category::hsv<  hsv_tag_name >
      >
      {
       public:
         typedef ::color::category::hwb< hwb_tag_name >    hwb_category_type,  category_left_type;
         typedef ::color::category::hsv< hsv_tag_name >    hsv_category_type, category_right_type;

         typedef typename ::color::trait::scalar< hwb_category_type >::instance_type scalar_type;

         typedef ::color::model< hsv_category_type >  hsv_model_type;
         typedef ::color::model< hwb_category_type >  hwb_model_type;


         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         enum
          {
                   hue_p = ::color::place::_internal::hue<category_right_type>::position_enum
           ,saturation_p = ::color::place::_internal::saturation<category_right_type>::position_enum
           ,     value_p = ::color::place::_internal::value<category_right_type>::position_enum
          };

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type const h = normalize_type::template process<hue_p       >( container_right_trait_type::template get<hue_p       >( right ) );
           scalar_type const s = normalize_type::template process<saturation_p>( container_right_trait_type::template get<saturation_p>( right ) );
           scalar_type const v = normalize_type::template process<value_p     >( container_right_trait_type::template get<value_p     >( right ) );

           scalar_type w = ( scalar_type(1)-s ) * v;
           scalar_type b = scalar_type(1) - v;

           scalar_type summae = w + b;

           if( scalar_type(1) < summae )
            {
             w /= summae;
             b /= summae;
            }

           container_left_trait_type::template set<0>( left, diverse_type::template process<0>( h ) );
           container_left_trait_type::template set<1>( left, diverse_type::template process<1>( w ) );
           container_left_trait_type::template set<2>( left, diverse_type::template process<2>( b ) );
          }
      };

   }
 }

#endif
