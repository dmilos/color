#ifndef color_hsi_convert_rgb
#define color_hsi_convert_rgb

#include "../../_internal/convert.hpp"
#include "../../rgb/rgb.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"
#include "../../generic/constant.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename hsi_tag_name, typename rgb_tag_name >
     struct convert
      <
        ::color::category::hsi< hsi_tag_name >
       ,::color::category::rgb< rgb_tag_name >
      >
      {
       public:
         typedef ::color::category::hsi< hsi_tag_name > category_left_type;
         typedef ::color::category::rgb< rgb_tag_name > category_right_type;

         typedef typename ::color::trait::scalar< category_left_type >::instance_type scalar_type;

         typedef ::color::trait::scalar<category_left_type> scalar_trait_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::model_type  container_right_const_input_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         typedef   ::color::constant::generic< category_left_type > constant_type;


         enum
          {
                   hue_p = ::color::place::_internal::hue<category_left_type>::position_enum
           ,saturation_p = ::color::place::_internal::saturation<category_left_type>::position_enum
           , intensity_p = ::color::place::_internal::intensity<category_left_type>::position_enum
          };

         enum
          {
               red_p   = ::color::place::_internal::red<category_right_type>::position_enum
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

           scalar_type lo = std::min<scalar_type>( {r,g,b} );

           scalar_type h = 0;
           scalar_type i = ( r + g + b ) / scalar_type(3);
           scalar_type s = scalar_type(1);
           if( false == scalar_trait_type::is_small( i ) )
            {
             s = scalar_type(1) - lo / i;
            }

           scalar_type c1 = r - g* scalar_type( 0.5 ) - b * scalar_type( 0.5 );
           scalar_type c2 = ( g - b ) * constant_type::sqrt_3() * scalar_type( 0.5 );
           scalar_type thetaX = atan2( c2, c1 );
           if( thetaX < 0 ){ thetaX += constant_type::two_pi(); }
           h = thetaX;

           //scalar_type alpha = ( (r-g) + ( r- b) ) * scalar_type( 0.5 );
           //scalar_type beta =  (r-g)*(r-g) + (r-b)*(g-b) ;
           //            beta = sqrt( beta );
           //scalar_type thetaA = acos( alpha / beta );
           //if( b > g ) { thetaA = constant_type::two_pi() - thetaA; }
           //h = thetaA;

            h /= constant_type::two_pi();

            {// TODO
             // typedef ::color::category::rgb< scalar_type > rgb_scalar_type;
             //typedef ::color::get::_internal::rgb::hue::usher< rgb_scalar_type, ::color::get::constant::rgb::hue::polar_atan2_entity > hue_type;
             //h = hue_type::process( r, g, b ) / ( 2 * pi );
            }

           container_left_trait_type::template set<       hue_p>( left, diverse_type::template process<       hue_p>( h ) );
           container_left_trait_type::template set<saturation_p>( left, diverse_type::template process<saturation_p>( s ) );
           container_left_trait_type::template set< intensity_p>( left, diverse_type::template process< intensity_p>( i ) );
          }
      };

   }
 }

#endif
