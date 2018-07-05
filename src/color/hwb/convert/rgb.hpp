#ifndef color_hwb_convert_rgb
#define color_hwb_convert_rgb

#include "../../_internal/convert.hpp"

#include "../category.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

#include "../../rgb/rgb.hpp"




namespace color
 {
  namespace _internal
   {

    template
     <
       typename hwb_tag_name
      ,typename rgb_tag_name
     >
     struct convert
      <
        ::color::category::hwb<  hwb_tag_name >
       ,::color::category::rgb<  rgb_tag_name >
      >
      {
       public:
         typedef ::color::category::hwb<  hwb_tag_name > hwb_category_type, category_left_type;
         typedef ::color::category::rgb<  rgb_tag_name > rgb_category_type, category_right_type;

         typedef typename ::color::trait::scalar< category_left_type > scalar_trait_type;
         typedef typename ::color::trait::scalar< category_left_type >::instance_type scalar_type;

         typedef ::color::model<   hwb_category_type >      hwb_model_type;
         typedef ::color::model<   rgb_category_type >      rgb_model_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         enum
          {
               hue_p = ::color::place::_internal::hue<category_left_type>::position_enum
           , white_p = ::color::place::_internal::white<category_left_type>::position_entity
           , black_p = ::color::place::_internal::black<category_left_type>::position_entity
          };

         enum
          {
               red_p  = ::color::place::_internal::red<category_right_type>::position_enum
            ,green_p  = ::color::place::_internal::green<category_right_type>::position_enum
            , blue_p  = ::color::place::_internal::blue<category_right_type>::position_enum
          }; 

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type r = normalize_type::template process<red_p  >( container_right_trait_type::template get<red_p  >( right ) );
           scalar_type g = normalize_type::template process<green_p>( container_right_trait_type::template get<green_p>( right ) );
           scalar_type b = normalize_type::template process<blue_p >( container_right_trait_type::template get<blue_p >( right ) );

           scalar_type white = std::min<scalar_type>( {r,g,b} );
           scalar_type max   = std::max<scalar_type>( {r,g,b} );
           scalar_type black = scalar_type(1) - max;
           scalar_type delta = max - white;

           scalar_type hue = 0;

           if( false == scalar_trait_type::is_small( delta ) )
            {
             if( max == r )
              {
               hue = (scalar_type(60)/scalar_type(360)) * (g - b) / delta + (g < b ? scalar_type(1) : scalar_type(0));
              }
             if( max == g )
              {
               hue = (scalar_type(60)/scalar_type(360)) * (b - r) / delta + (scalar_type(120)/scalar_type(360));
              }
             if( max == b )
              {
               hue = (scalar_type(60)/scalar_type(360)) * (r - g) / delta + (scalar_type(240)/scalar_type(360));
              }
            }

           container_left_trait_type::template set<    hue_p >( left, diverse_type::template process<    hue_p>( hue ) );
           container_left_trait_type::template set<  white_p >( left, diverse_type::template process<  white_p>( white ) );
           container_left_trait_type::template set<  black_p >( left, diverse_type::template process<  black_p>( black ) );

           //left = hwb_model_type( hsv_model_type( rgb_model_type( right ) ) ).container();
          }
      };

   }
 }

#endif
