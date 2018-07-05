#ifndef color_hsl_convert_rgb
#define color_hsl_convert_rgb

#include "../category.hpp"
#include "../place/place.hpp"

#include "../../_internal/convert.hpp"

#include "../../rgb/trait/container.hpp"
#include "../../rgb/trait/component.hpp"
#include "../../rgb/trait/index.hpp"
#include "../../rgb/trait/bound.hpp"
#include "../../rgb/category.hpp"


#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"


namespace color
 {
  namespace _internal
   {

    template
     < 
       typename hsl_tag_name
      ,typename rgb_tag_name 
     >
     struct convert
      <
        ::color::category::hsl< hsl_tag_name >
       ,::color::category::rgb< rgb_tag_name >
      >
      {
       public:
         typedef ::color::category::hsl< hsl_tag_name > category_left_type;
         typedef ::color::category::rgb< rgb_tag_name > category_right_type;

         typedef typename ::color::trait::scalar<category_left_type>::instance_type scalar_type;

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
           , lightness_p = ::color::place::_internal::lightness<category_left_type>::position_enum
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
           scalar_type r = normalize_type::template process<red_p  >( container_right_trait_type::template get<red_p  >( right ) );
           scalar_type g = normalize_type::template process<green_p>( container_right_trait_type::template get<green_p>( right ) );
           scalar_type b = normalize_type::template process<blue_p >( container_right_trait_type::template get<blue_p >( right ) );

           const scalar_type hi = std::max<scalar_type>( { r, g, b } );
           const scalar_type lo = std::min<scalar_type>( { r, g, b } );
           scalar_type delta = hi - lo;

           scalar_type h = 0;
           scalar_type s = 0;
           scalar_type l = (hi + lo) / scalar_type(2);

           if( false == scalar_trait_type::is_small( delta ) )
            {
             s = delta / ( 1 - fabs( 2*l - 1 ) );
             if( hi == r )
              {
               h = (scalar_type(60)/scalar_type(360)) * (g - b) / delta + (g < b ? scalar_type(1) : scalar_type(0));
              }
             if( hi == g )
              {
               h = (scalar_type(60)/scalar_type(360)) * (b - r) / delta + (scalar_type(120)/scalar_type(360));
              }
             if( hi == b )
              {
               h = (scalar_type(60)/scalar_type(360)) * (r - g) / delta + (scalar_type(240)/scalar_type(360));
              }
            }

           container_left_trait_type::template set<       hue_p>( left, diverse_type::template process<       hue_p>( h ) );
           container_left_trait_type::template set<saturation_p>( left, diverse_type::template process<saturation_p>( s ) );
           container_left_trait_type::template set< lightness_p>( left, diverse_type::template process< lightness_p>( l ) );
          }
      };

   }
 }

#endif
